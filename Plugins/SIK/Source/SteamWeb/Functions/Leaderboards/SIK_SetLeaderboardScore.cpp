// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_SetLeaderboardScore.h"

USIK_SetLeaderboardScore* USIK_SetLeaderboardScore::SetLeaderboardScore(const FString& Key, const int32& AppId,
    const int32& LeaderboardId, const int64& SteamId, const int32& Score, const FString& ScoreMethod,
    const TArray<uint8>& Details)
{
    USIK_SetLeaderboardScore* Node = NewObject<USIK_SetLeaderboardScore>();
    Node->Var_Key = Key;
    Node->Var_AppId = AppId;
    Node->Var_LeaderboardId = LeaderboardId;
    Node->Var_SteamId = SteamId;
    Node->Var_Score = Score;
    Node->Var_ScoreMethod = ScoreMethod;
    Node->Var_Details = Details;
    return Node;
}

void USIK_SetLeaderboardScore::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/ISteamLeaderboards/SetLeaderboardScore/v1/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("POST");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    JsonObject->SetNumberField("appid", Var_AppId);
    JsonObject->SetNumberField("leaderboardid", Var_LeaderboardId);
    JsonObject->SetNumberField("steamid", Var_SteamId);
    JsonObject->SetNumberField("score", Var_Score);
    JsonObject->SetStringField("scoremethod", Var_ScoreMethod);
    if(Var_Details.Num() > 0)
    {
        JsonObject->SetStringField("details", FBase64::Encode(Var_Details));
    }
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(Content);
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_SetLeaderboardScore::OnResponseReceived);
    Request->ProcessRequest();
}
