// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_FlushInventoryCache.h"

USIK_FlushInventoryCache* USIK_FlushInventoryCache::FlushInventoryCache(const FString& Key, const int64& SteamId,
    const int32& AppId, const int64& ContextId)
{
    USIK_FlushInventoryCache* Node = NewObject<USIK_FlushInventoryCache>();
    Node->Var_Key = Key;
    Node->Var_SteamId = SteamId;
    Node->Var_AppId = AppId;
    Node->Var_ContextId = ContextId;
    return Node;
}   

void USIK_FlushInventoryCache::Activate()
{
    FString URL = FString::Printf(TEXT("%s/IEconService/FlushInventoryCache/v1/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("POST");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    JsonObject->SetNumberField("steamid", Var_SteamId);
    JsonObject->SetNumberField("appid", Var_AppId);
    JsonObject->SetNumberField("contextid", Var_ContextId);
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(FString::Printf(TEXT("key=%s&input_json=%s"), *Var_Key, *Content));
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_FlushInventoryCache::OnResponseReceived);
    Request->ProcessRequest();
}
