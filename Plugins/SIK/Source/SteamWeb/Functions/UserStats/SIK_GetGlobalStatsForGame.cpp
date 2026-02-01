// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_GetGlobalStatsForGame.h"

USIK_GetGlobalStatsForGame* USIK_GetGlobalStatsForGame::GetGlobalStatsForGame(const int32& AppId, const int32& Count,
    const FString& Name, const int32& StartDate, const int32& EndDate)
{
    USIK_GetGlobalStatsForGame* Node = NewObject<USIK_GetGlobalStatsForGame>();
    Node->Var_AppId = AppId;
    Node->Var_Count = Count;
    Node->Var_Name = Name;
    Node->Var_StartDate = StartDate;
    Node->Var_EndDate = EndDate;
    return Node;
}

void USIK_GetGlobalStatsForGame::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/ISteamUserStats/GetGlobalStatsForGame/v1/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("GET");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetNumberField("appid", Var_AppId);
    JsonObject->SetNumberField("count", Var_Count);
    JsonObject->SetStringField("name[0]", Var_Name);
    if (Var_StartDate != -1)
    {
        JsonObject->SetNumberField("startdate", Var_StartDate);
    }
    if (Var_EndDate != -1)
    {
        JsonObject->SetNumberField("enddate", Var_EndDate);
    }
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(Content);
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_GetGlobalStatsForGame::OnResponseReceived);
    Request->ProcessRequest();
}
