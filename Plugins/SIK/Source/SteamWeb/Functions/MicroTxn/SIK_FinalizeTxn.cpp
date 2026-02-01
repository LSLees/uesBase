// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_FinalizeTxn.h"

USIK_FinalizeTxn* USIK_FinalizeTxn::FinalizeTxn(const FString& Key, const int64& OrderId, const int32& AppId,
    bool bUseSandBox)
{
    USIK_FinalizeTxn* Node = NewObject<USIK_FinalizeTxn>();
    Node->Var_Key = Key;
    Node->Var_OrderId = OrderId;
    Node->Var_AppId = AppId;
    Node->Var_bUseSandBox = bUseSandBox;
    return Node;
}

void USIK_FinalizeTxn::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/%s/FinalizeTxn/v2/"), *APIEndpoint, Var_bUseSandBox ? TEXT("ISteamMicroTxnSandbox") : TEXT("ISteamMicroTxn"));
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("POST");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    JsonObject->SetStringField("orderid", FString::Printf(TEXT("%lld"), Var_OrderId));
    JsonObject->SetNumberField("appid", Var_AppId);
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(Content);
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_FinalizeTxn::OnResponseReceived);
    Request->ProcessRequest();
}
