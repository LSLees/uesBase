// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_CancelAgreement.h"

USIK_CancelAgreement* USIK_CancelAgreement::CancelAgreement(const FString& Key, const int64& SteamId,
    const int64& AgreementId, const int32& AppId, bool bUseSandBox)
{
    USIK_CancelAgreement* Node = NewObject<USIK_CancelAgreement>();
    Node->Var_Key = Key;
    Node->Var_SteamId = SteamId;
    Node->Var_AgreementId = AgreementId;
    Node->Var_AppId = AppId;
    Node->Var_bUseSandBox = bUseSandBox;
    return Node;
}

void USIK_CancelAgreement::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/%s/CancelAgreement/v1/"), *APIEndpoint, Var_bUseSandBox ? TEXT("ISteamMicroTxnSandbox") : TEXT("ISteamMicroTxn"));
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("POST");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    JsonObject->SetNumberField("steamid", Var_SteamId);
    JsonObject->SetNumberField("agreementid", Var_AgreementId);
    JsonObject->SetNumberField("appid", Var_AppId);
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(Content);
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_CancelAgreement::OnResponseReceived);
    Request->ProcessRequest();
}
