// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_DeleteAccount.h"

USIK_DeleteAccount* USIK_DeleteAccount::DeleteAccount(const FString& Key, const int64& SteamId)
{
    USIK_DeleteAccount* Node = NewObject<USIK_DeleteAccount>();
    Node->Var_Key = Key;
    Node->Var_SteamId = SteamId;
    return Node;
}

void USIK_DeleteAccount::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/IGameServersService/DeleteAccount/v1/"), *APIEndpoint);
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
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_DeleteAccount::OnResponseReceived);
    Request->ProcessRequest();
}
