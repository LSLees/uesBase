// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_StartTrade.h"

USIK_StartTrade* USIK_StartTrade::StartTrade(const FString& Key, const int32& AppId, const int64& PartyA,
    const int64& PartyB)
{
    USIK_StartTrade* Node = NewObject<USIK_StartTrade>();
    Node->Var_Key = Key;
    Node->Var_AppId = AppId;
    Node->Var_PartyA = PartyA;
    Node->Var_PartyB = PartyB;
    return Node;
}

void USIK_StartTrade::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/ISteamEconomy/StartTrade/v1/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("POST");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    JsonObject->SetNumberField("appid", Var_AppId);
    JsonObject->SetNumberField("partya", Var_PartyA);
    JsonObject->SetNumberField("partyb", Var_PartyB);
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(Content);
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_StartTrade::OnResponseReceived);
    Request->ProcessRequest();
}
