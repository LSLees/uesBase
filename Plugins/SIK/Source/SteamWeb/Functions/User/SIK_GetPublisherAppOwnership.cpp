// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_GetPublisherAppOwnership.h"

USIK_GetPublisherAppOwnership* USIK_GetPublisherAppOwnership::GetPublisherAppOwnership(const FString& Key,
    const int64& SteamId)
{
    USIK_GetPublisherAppOwnership* Node = NewObject<USIK_GetPublisherAppOwnership>();
    Node->Var_Key = Key;
    Node->Var_SteamId = SteamId;
    return Node;
}

void USIK_GetPublisherAppOwnership::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/ISteamUser/GetPublisherAppOwnership/v1/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("GET");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    JsonObject->SetNumberField("steamid", Var_SteamId);
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(Content);
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_GetPublisherAppOwnership::OnResponseReceived);
    Request->ProcessRequest();
}
