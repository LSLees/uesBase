// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_GetLeaderboardsForGame.h"

USIK_GetLeaderboardsForGame* USIK_GetLeaderboardsForGame::GetLeaderboardsForGame(const FString& Key, const int32& AppId)
{
    USIK_GetLeaderboardsForGame* Node = NewObject<USIK_GetLeaderboardsForGame>();
    Node->Var_Key = Key;
    Node->Var_AppId = AppId;
    return Node;
}

void USIK_GetLeaderboardsForGame::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/ISteamLeaderboards/GetLeaderboardsForGame/v2/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("GET");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    JsonObject->SetNumberField("appid", Var_AppId);
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(Content);
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_GetLeaderboardsForGame::OnResponseReceived);
    Request->ProcessRequest();
}
