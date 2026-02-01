// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_GetSteamLevel.h"

USIK_GetSteamLevel* USIK_GetSteamLevel::GetSteamLevel(const FString& Key, const int64& SteamId)
{
    USIK_GetSteamLevel* Node = NewObject<USIK_GetSteamLevel>();
    Node->Var_Key = Key;
    Node->Var_SteamId = SteamId;
    return Node;
}

void USIK_GetSteamLevel::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/IPlayerService/GetSteamLevel/v1/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("GET");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    JsonObject->SetNumberField("steamid", Var_SteamId);
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(FString::Printf(TEXT("key=%s&input_json=%s"), *Var_Key, *Content));
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_GetSteamLevel::OnResponseReceived);
    Request->ProcessRequest();
}
