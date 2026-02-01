// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_ProcessAgreement.h"

USIK_ProcessAgreement* USIK_ProcessAgreement::ProcessAgreement(const FString& Key, const int64& OrderId,
    const int64& SteamId, const int64& AgreementId, const int32& AppId, const int32& Amount, const FString& Currency,
    bool bUseSandBox)
{
    USIK_ProcessAgreement* Node = NewObject<USIK_ProcessAgreement>();
    Node->Var_Key = Key;
    Node->Var_OrderId = OrderId;
    Node->Var_SteamId = SteamId;
    Node->Var_AgreementId = AgreementId;
    Node->Var_AppId = AppId;
    Node->Var_Amount = Amount;
    Node->Var_Currency = Currency;
    Node->Var_bUseSandBox = bUseSandBox;
    return Node;
}

void USIK_ProcessAgreement::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/%s/ProcessAgreement/v1/"), *APIEndpoint, Var_bUseSandBox ? TEXT("ISteamMicroTxnSandbox") : TEXT("ISteamMicroTxn"));
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("POST");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    JsonObject->SetNumberField("orderid", Var_OrderId);
    JsonObject->SetNumberField("steamid", Var_SteamId);
    JsonObject->SetNumberField("agreementid", Var_AgreementId);
    JsonObject->SetNumberField("appid", Var_AppId);
    JsonObject->SetNumberField("amount", Var_Amount);
    JsonObject->SetStringField("currency", Var_Currency);
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(Content);
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_ProcessAgreement::OnResponseReceived);
    Request->ProcessRequest();
}
