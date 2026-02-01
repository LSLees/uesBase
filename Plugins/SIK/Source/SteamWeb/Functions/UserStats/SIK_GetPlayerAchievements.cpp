// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_GetPlayerAchievements.h"

USIK_GetPlayerAchievements* USIK_GetPlayerAchievements::GetPlayerAchievements(const FString& Key, const int64& SteamId,
    const int32& AppId, const FString& Language)
{
    USIK_GetPlayerAchievements* Node = NewObject<USIK_GetPlayerAchievements>();
    Node->Var_Key = Key;
    Node->Var_SteamId = SteamId;
    Node->Var_AppId = AppId;
    Node->Var_Language = Language;
    return Node;
}

void USIK_GetPlayerAchievements::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/ISteamUserStats/GetPlayerAchievements/v1/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("GET");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    JsonObject->SetNumberField("steamid", Var_SteamId);
    JsonObject->SetNumberField("appid", Var_AppId);
    JsonObject->SetStringField("l", Var_Language);
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(Content);
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_GetPlayerAchievements::OnResponseReceived);
    Request->ProcessRequest();
}
