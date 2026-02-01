// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_GetGlobalAchievementPercentagesForApp.h"

USIK_GetGlobalAchievementPercentagesForApp* USIK_GetGlobalAchievementPercentagesForApp::
GetGlobalAchievementPercentagesForApp(const int64& GameId)
{
    USIK_GetGlobalAchievementPercentagesForApp* Node = NewObject<USIK_GetGlobalAchievementPercentagesForApp>();
    Node->Var_GameId = GameId;
    return Node;
}

void USIK_GetGlobalAchievementPercentagesForApp::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/ISteamUserStats/GetGlobalAchievementPercentagesForApp/v2/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("GET");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetNumberField("gameid", Var_GameId);
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(Content);
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_GetGlobalAchievementPercentagesForApp::OnResponseReceived);
    Request->ProcessRequest();    
}
