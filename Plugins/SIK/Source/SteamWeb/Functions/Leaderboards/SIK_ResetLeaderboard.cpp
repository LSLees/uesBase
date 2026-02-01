// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_ResetLeaderboard.h"

USIK_ResetLeaderboard* USIK_ResetLeaderboard::ResetLeaderboard(const FString& Key, const int32& AppId,
    const int32& LeaderboardId)
{
    USIK_ResetLeaderboard* Node = NewObject<USIK_ResetLeaderboard>();
    Node->Var_Key = Key;
    Node->Var_AppId = AppId;
    Node->Var_LeaderboardId = LeaderboardId;
    return Node;
}

void USIK_ResetLeaderboard::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/ISteamLeaderboards/ResetLeaderboard/v1/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("POST");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    JsonObject->SetNumberField("appid", Var_AppId);
    JsonObject->SetNumberField("leaderboardid", Var_LeaderboardId);
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(Content);
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_ResetLeaderboard::OnResponseReceived);
    Request->ProcessRequest();
}
