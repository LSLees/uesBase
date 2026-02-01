// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_GetRecentlyPlayedGames.h"

USIK_GetRecentlyPlayedGames* USIK_GetRecentlyPlayedGames::GetRecentlyPlayedGames(const FString& Key,
    const int64& SteamId, const int32& Count)
{
    USIK_GetRecentlyPlayedGames* Node = NewObject<USIK_GetRecentlyPlayedGames>();
    Node->Var_Key = Key;
    Node->Var_SteamId = SteamId;
    Node->Var_Count = Count;
    return Node;
}

void USIK_GetRecentlyPlayedGames::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/IPlayerService/GetRecentlyPlayedGames/v1/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("GET");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    JsonObject->SetNumberField("steamid", Var_SteamId);
    JsonObject->SetNumberField("count", Var_Count);
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(FString::Printf(TEXT("key=%s&input_json=%s"), *Var_Key, *Content));
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_GetRecentlyPlayedGames::OnResponseReceived);
    Request->ProcessRequest();
}
