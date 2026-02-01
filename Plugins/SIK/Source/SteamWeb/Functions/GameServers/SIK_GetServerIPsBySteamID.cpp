// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_GetServerIPsBySteamID.h"

USIK_GetServerIPsBySteamID* USIK_GetServerIPsBySteamID::GetServerIPsBySteamID(const FString& Key,
    const TArray<int64>& ServerSteamIds)
{
    USIK_GetServerIPsBySteamID* Node = NewObject<USIK_GetServerIPsBySteamID>();
    Node->Var_Key = Key;
    Node->Var_ServerSteamIds = ServerSteamIds;
    return Node;
}

void USIK_GetServerIPsBySteamID::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/IGameServersService/GetServerIPsBySteamID/v1/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("GET");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    TArray<TSharedPtr<FJsonValue>> ServerSteamIdsArray;
    for (int64 ServerSteamId : Var_ServerSteamIds)
    {
        ServerSteamIdsArray.Add(MakeShareable(new FJsonValueNumber(ServerSteamId)));
    }
    JsonObject->SetArrayField("server_steamids", ServerSteamIdsArray);
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(FString::Printf(TEXT("key=%s&input_json=%s"), *Var_Key, *Content));
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_GetServerIPsBySteamID::OnResponseReceived);
    Request->ProcessRequest();
}
