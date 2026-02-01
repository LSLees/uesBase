// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_GetPlayerSummaries.h"

USIK_GetPlayerSummaries* USIK_GetPlayerSummaries::GetPlayerSummaries(const FString& Key, const FString& SteamIds)
{
    USIK_GetPlayerSummaries* Node = NewObject<USIK_GetPlayerSummaries>();
    Node->Var_Key = Key;
    Node->Var_SteamIds = SteamIds;
    return Node;
}

void USIK_GetPlayerSummaries::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/ISteamUser/GetPlayerSummaries/v2/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("GET");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    JsonObject->SetStringField("steamids", Var_SteamIds);
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(Content);
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_GetPlayerSummaries::OnResponseReceived);
    Request->ProcessRequest();
}
