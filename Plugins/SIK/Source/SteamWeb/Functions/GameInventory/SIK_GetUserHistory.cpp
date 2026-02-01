// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_GetUserHistory.h"

USIK_GetUserHistory* USIK_GetUserHistory::GetUserHistory(const FString& Key, const int32& AppId, const int64& SteamId,
    const int64& ContextId, const int32& StartTime, const int32& EndTime)
{
    USIK_GetUserHistory* Node = NewObject<USIK_GetUserHistory>();
    Node->Var_Key = Key;
    Node->Var_AppId = AppId;
    Node->Var_SteamId = SteamId;
    Node->Var_ContextId = ContextId;
    Node->Var_StartTime = StartTime;
    Node->Var_EndTime = EndTime;
    return Node;
}

void USIK_GetUserHistory::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/IGameInventory/GetUserHistory/v1/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("GET");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    JsonObject->SetNumberField("appid", Var_AppId);
    JsonObject->SetNumberField("steamid", Var_SteamId);
    JsonObject->SetNumberField("contextid", Var_ContextId);
    JsonObject->SetNumberField("starttime", Var_StartTime);
    JsonObject->SetNumberField("endtime", Var_EndTime);
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(Content);
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_GetUserHistory::OnResponseReceived);
    Request->ProcessRequest();
}
