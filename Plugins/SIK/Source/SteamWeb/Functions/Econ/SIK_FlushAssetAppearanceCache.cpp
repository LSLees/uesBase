// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_FlushAssetAppearanceCache.h"

USIK_FlushAssetAppearanceCache* USIK_FlushAssetAppearanceCache::FlushAssetAppearanceCache(const FString& Key,
    const int32& AppId)
{
    USIK_FlushAssetAppearanceCache* Node = NewObject<USIK_FlushAssetAppearanceCache>();
    Node->Var_Key = Key;
    Node->Var_AppId = AppId;
    return Node;
}   

void USIK_FlushAssetAppearanceCache::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/IEconService/FlushAssetAppearanceCache/v1/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("POST");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    JsonObject->SetNumberField("appid", Var_AppId);
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(FString::Printf(TEXT("key=%s&input_json=%s"), *Var_Key, *Content));
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_FlushAssetAppearanceCache::OnResponseReceived);
    Request->ProcessRequest();
}
