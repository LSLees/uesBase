// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_GetPlayerBans.h"

USIK_GetPlayerBans* USIK_GetPlayerBans::GetPlayerBans(const FString& Key, const FString& SteamIds)
{
    USIK_GetPlayerBans* Node = NewObject<USIK_GetPlayerBans>();
    Node->Var_Key = Key;
    Node->Var_SteamIds = SteamIds;
    return Node;
}

void USIK_GetPlayerBans::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/ISteamUser/GetPlayerBans/v1/"), *APIEndpoint);
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
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_GetPlayerBans::OnResponseReceived);
    Request->ProcessRequest();
}
