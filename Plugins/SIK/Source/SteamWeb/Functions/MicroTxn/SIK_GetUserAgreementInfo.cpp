// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_GetUserAgreementInfo.h"

USIK_GetUserAgreementInfo* USIK_GetUserAgreementInfo::GetUserAgreementInfo(const FString& Key, const int64& SteamId,
    const int32& AppId, bool bUseSandBox)
{
    USIK_GetUserAgreementInfo* Node = NewObject<USIK_GetUserAgreementInfo>();
    Node->Var_Key = Key;
    Node->Var_SteamId = SteamId;
    Node->Var_AppId = AppId;
    Node->Var_bUseSandBox = bUseSandBox;
    return Node;
}

void USIK_GetUserAgreementInfo::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/%s/GetUserAgreementInfo/v2/"), *APIEndpoint, Var_bUseSandBox ? TEXT("ISteamMicroTxnSandbox") : TEXT("ISteamMicroTxn"));
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("POST");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    JsonObject->SetNumberField("steamid", Var_SteamId);
    JsonObject->SetNumberField("appid", Var_AppId);
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(Content);
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_GetUserAgreementInfo::OnResponseReceived);
    Request->ProcessRequest();
}
