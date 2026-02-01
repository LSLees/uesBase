// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_AdjustAgreement.h"

USIK_AdjustAgreement* USIK_AdjustAgreement::AdjustAgreement(const FString& Key, const int64& SteamId,
    const int64& AgreementId, const int32& AppId, const FString& NextProcessDate, const FString& OldNextProcessDate,
    bool bUseSandBox)
{
    USIK_AdjustAgreement* Node = NewObject<USIK_AdjustAgreement>();
    Node->Var_Key = Key;
    Node->Var_SteamId = SteamId;
    Node->Var_AgreementId = AgreementId;
    Node->Var_AppId = AppId;
    Node->Var_NextProcessDate = NextProcessDate;
    Node->Var_OldNextProcessDate = OldNextProcessDate;
    Node->Var_bUseSandBox = bUseSandBox;
    return Node;
}

void USIK_AdjustAgreement::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/%s/AdjustAgreement/v1/"), *APIEndpoint, Var_bUseSandBox ? TEXT("ISteamMicroTxnSandbox") : TEXT("ISteamMicroTxn"));
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("POST");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    JsonObject->SetNumberField("steamid", Var_SteamId);
    JsonObject->SetNumberField("agreementid", Var_AgreementId);
    JsonObject->SetNumberField("appid", Var_AppId);
    JsonObject->SetStringField("nextprocessdate", Var_NextProcessDate);
    if(!Var_OldNextProcessDate.IsEmpty())
    {
        JsonObject->SetStringField("oldnextprocessdate", Var_OldNextProcessDate);
    }
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(Content);
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_AdjustAgreement::OnResponseReceived);
    Request->ProcessRequest();
}
