// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_HistoryExecuteCommands.h"

USIK_HistoryExecuteCommands* USIK_HistoryExecuteCommands::HistoryExecuteCommands(const FString& Key, const int32& AppId,
    const int64& SteamId, const int64& ContextId, const int32& ActorId)
{
    USIK_HistoryExecuteCommands* Node = NewObject<USIK_HistoryExecuteCommands>();
    Node->Var_Key = Key;
    Node->Var_AppId = AppId;
    Node->Var_SteamId = SteamId;
    Node->Var_ContextId = ContextId;
    Node->Var_ActorId = ActorId;
    return Node;
}

void USIK_HistoryExecuteCommands::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/IGameInventory/HistoryExecuteCommands/v1/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("POST");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    JsonObject->SetNumberField("appid", Var_AppId);
    JsonObject->SetNumberField("steamid", Var_SteamId);
    JsonObject->SetNumberField("contextid", Var_ContextId);
    JsonObject->SetNumberField("actorid", Var_ActorId);
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(Content);
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_HistoryExecuteCommands::OnResponseReceived);
    Request->ProcessRequest();    
}
