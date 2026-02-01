// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_SetUserStatsForGame.h"

USIK_SetUserStatsForGame* USIK_SetUserStatsForGame::SetUserStatsForGame(const FString& Key, const int64& SteamId,
    const int32& AppId, const int32& Count, const FString& Name0, const int32& Value0)
{
    USIK_SetUserStatsForGame* Node = NewObject<USIK_SetUserStatsForGame>();
    Node->Var_Key = Key;
    Node->Var_SteamId = SteamId;
    Node->Var_AppId = AppId;
    Node->Var_Count = Count;
    Node->Var_Name0 = Name0;
    Node->Var_Value0 = Value0;
    return Node;
}

void USIK_SetUserStatsForGame::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/ISteamUserStats/SetUserStatsForGame/v1/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("POST");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    JsonObject->SetNumberField("steamid", Var_SteamId);
    JsonObject->SetNumberField("appid", Var_AppId);
    JsonObject->SetNumberField("count", Var_Count);
    JsonObject->SetStringField("name[0]", Var_Name0);
    JsonObject->SetNumberField("value[0]", Var_Value0);
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(Content);
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_SetUserStatsForGame::OnResponseReceived);
    Request->ProcessRequest();
}
