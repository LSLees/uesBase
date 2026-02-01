// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_RemoveUserFromLobby.h"

USIK_RemoveUserFromLobby* USIK_RemoveUserFromLobby::RemoveUserFromLobby(const FString& Key, const int32& AppId,
    const int64& SteamIdToRemove, const int64& SteamIdLobby, const FString& InputJson)
{
    USIK_RemoveUserFromLobby* Node = NewObject<USIK_RemoveUserFromLobby>();
    Node->Var_Key = Key;
    Node->Var_AppId = AppId;
    Node->Var_SteamIdToRemove = SteamIdToRemove;
    Node->Var_SteamIdLobby = SteamIdLobby;
    Node->Var_InputJson = InputJson;
    return Node;
}

void USIK_RemoveUserFromLobby::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/ILobbyMatchmakingService/RemoveUserFromLobby/v1/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("POST");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    JsonObject->SetNumberField("appid", Var_AppId);
    JsonObject->SetNumberField("steamid_to_remove", Var_SteamIdToRemove);
    JsonObject->SetNumberField("steamid_lobby", Var_SteamIdLobby);
    if (!Var_InputJson.IsEmpty())
    {
        JsonObject->SetStringField("input_json", Var_InputJson);
    }
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(FString::Printf(TEXT("key=%s&input_json=%s"), *Var_Key, *Content));
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_RemoveUserFromLobby::OnResponseReceived);
    Request->ProcessRequest();
}
