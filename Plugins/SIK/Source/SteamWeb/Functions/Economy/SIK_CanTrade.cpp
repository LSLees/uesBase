// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_CanTrade.h"

USIK_CanTrade* USIK_CanTrade::CanTrade(const FString& Key, const int32& AppId, const int64& SteamId,
    const int64& TargetId)
{
    USIK_CanTrade* Node = NewObject<USIK_CanTrade>();
    Node->Var_Key = Key;
    Node->Var_AppId = AppId;
    Node->Var_SteamId = SteamId;
    Node->Var_TargetId = TargetId;
    return Node;
}

void USIK_CanTrade::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/ISteamEconomy/CanTrade/v1/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("GET");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    JsonObject->SetNumberField("appid", Var_AppId);
    JsonObject->SetNumberField("steamid", Var_SteamId);
    JsonObject->SetNumberField("targetid", Var_TargetId);
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(Content);
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_CanTrade::OnResponseReceived);
    Request->ProcessRequest();    
}
