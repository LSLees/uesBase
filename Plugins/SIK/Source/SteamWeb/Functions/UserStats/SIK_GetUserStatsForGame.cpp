// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_GetUserStatsForGame.h"

USIK_GetUserStatsForGame* USIK_GetUserStatsForGame::GetUserStatsForGame(const FString& Key, const int64& SteamId,
    const int32& AppId)
{
    USIK_GetUserStatsForGame* Node = NewObject<USIK_GetUserStatsForGame>();
    Node->Var_Key = Key;
    Node->Var_SteamId = SteamId;
    Node->Var_AppId = AppId;
    return Node;
}

void USIK_GetUserStatsForGame::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/ISteamUserStats/GetUserStatsForGame/v2/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("GET");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    JsonObject->SetNumberField("steamid", Var_SteamId);
    JsonObject->SetNumberField("appid", Var_AppId);
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(Content);
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_GetUserStatsForGame::OnResponseReceived);
    Request->ProcessRequest();
}
