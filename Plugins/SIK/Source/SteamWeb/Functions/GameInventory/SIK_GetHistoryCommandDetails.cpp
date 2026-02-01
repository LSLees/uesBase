// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_GetHistoryCommandDetails.h"

USIK_GetHistoryCommandDetails* USIK_GetHistoryCommandDetails::GetHistoryCommandDetails(const FString& Key,
    const int32& AppId, const int64& SteamId, const FString& Command, const int64& ContextId, const FString& Arguments)
{
    USIK_GetHistoryCommandDetails* Node = NewObject<USIK_GetHistoryCommandDetails>();
    Node->Var_Key = Key;
    Node->Var_AppId = AppId;
    Node->Var_SteamId = SteamId;
    Node->Var_Command = Command;
    Node->Var_ContextId = ContextId;
    Node->Var_Arguments = Arguments;
    return Node;
}

void USIK_GetHistoryCommandDetails::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/IGameInventory/GetHistoryCommandDetails/v1/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("GET");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    JsonObject->SetNumberField("appid", Var_AppId);
    JsonObject->SetNumberField("steamid", Var_SteamId);
    JsonObject->SetStringField("command", Var_Command);
    JsonObject->SetNumberField("contextid", Var_ContextId);
    JsonObject->SetStringField("arguments", Var_Arguments);
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(Content);
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_GetHistoryCommandDetails::OnResponseReceived);
    Request->ProcessRequest();
}
