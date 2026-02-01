// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_ResetLoginToken.h"

USIK_ResetLoginToken* USIK_ResetLoginToken::ResetLoginToken(const FString& Key, const int64& SteamId)
{
    USIK_ResetLoginToken* Node = NewObject<USIK_ResetLoginToken>();
    Node->Var_Key = Key;
    Node->Var_SteamId = SteamId;
    return Node;
}

void USIK_ResetLoginToken::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/IGameServersService/ResetLoginToken/v1/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("POST");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    JsonObject->SetNumberField("steamid", Var_SteamId);
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(FString::Printf(TEXT("key=%s&input_json=%s"), *Var_Key, *Content));
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_ResetLoginToken::OnResponseReceived);
    Request->ProcessRequest();
}
