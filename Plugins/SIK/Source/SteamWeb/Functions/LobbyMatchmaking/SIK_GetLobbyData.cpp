// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_GetLobbyData.h"

USIK_GetLobbyData* USIK_GetLobbyData::GetLobbyData(const FString& Key, const int32& AppId, const int64& SteamIdLobby)
{
    USIK_GetLobbyData* Node = NewObject<USIK_GetLobbyData>();
    Node->Var_Key = Key;
    Node->Var_AppId = AppId;
    Node->Var_SteamIdLobby = SteamIdLobby;
    return Node;
}

void USIK_GetLobbyData::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/ILobbyMatchmakingService/GetLobbyData/v1/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("GET");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    JsonObject->SetNumberField("appid", Var_AppId);
    JsonObject->SetNumberField("steamid_lobby", Var_SteamIdLobby);
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(FString::Printf(TEXT("key=%s&input_json=%s"), *Var_Key, *Content));
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_GetLobbyData::OnResponseReceived);
    Request->ProcessRequest();
}
