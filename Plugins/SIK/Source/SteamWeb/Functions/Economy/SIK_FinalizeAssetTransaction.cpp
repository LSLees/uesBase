// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_FinalizeAssetTransaction.h"

USIK_FinalizeAssetTransaction* USIK_FinalizeAssetTransaction::FinalizeAssetTransaction(const FString& Key,
    const int32& AppId, const int64& SteamId, const FString& TxnId, const FString& Language)
{
    USIK_FinalizeAssetTransaction* Node = NewObject<USIK_FinalizeAssetTransaction>();
    Node->Var_Key = Key;
    Node->Var_AppId = AppId;
    Node->Var_SteamId = SteamId;
    Node->Var_TxnId = TxnId;
    Node->Var_Language = Language;
    return Node;
}

void USIK_FinalizeAssetTransaction::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/ISteamEconomy/FinalizeAssetTransaction/v1/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("POST");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    JsonObject->SetNumberField("appid", Var_AppId);
    JsonObject->SetNumberField("steamid", Var_SteamId);
    JsonObject->SetStringField("txnid", Var_TxnId);
    JsonObject->SetStringField("language", Var_Language);
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(Content);
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_FinalizeAssetTransaction::OnResponseReceived);
    Request->ProcessRequest();
}
