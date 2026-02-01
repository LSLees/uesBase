// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_GetLeaderboardEntries.h"

USIK_GetLeaderboardEntries* USIK_GetLeaderboardEntries::GetLeaderboardEntries(const FString& Key, const int32& AppId,
    const int32& RangeStart, const int32& RangeEnd, const int32& LeaderboardId, const FString& DataRequest,
    const int64& SteamId)
{
    USIK_GetLeaderboardEntries* Node = NewObject<USIK_GetLeaderboardEntries>();
    Node->Var_Key = Key;
    Node->Var_AppId = AppId;
    Node->Var_RangeStart = RangeStart;
    Node->Var_RangeEnd = RangeEnd;
    Node->Var_LeaderboardId = LeaderboardId;
    Node->Var_DataRequest = DataRequest;
    Node->Var_SteamId = SteamId;
    return Node;
}

void USIK_GetLeaderboardEntries::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/ISteamLeaderboards/GetLeaderboardEntries/v1/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("GET");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    JsonObject->SetNumberField("appid", Var_AppId);
    JsonObject->SetNumberField("rangestart", Var_RangeStart);
    JsonObject->SetNumberField("rangeend", Var_RangeEnd);
    if(Var_SteamId != -1)
    {
        JsonObject->SetNumberField("steamid", Var_SteamId);
    }
    JsonObject->SetNumberField("leaderboardid", Var_LeaderboardId);
    JsonObject->SetStringField("datarequest", Var_DataRequest);
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(Content);
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_GetLeaderboardEntries::OnResponseReceived);
    Request->ProcessRequest();
}
