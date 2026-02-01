// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_QueryTxn.h"

USIK_QueryTxn* USIK_QueryTxn::QueryTxn(const FString& Key, const int32& AppId, const int64& OrderId,
    const int64& TransId, bool bUseSandBox)
{
    USIK_QueryTxn* Node = NewObject<USIK_QueryTxn>();
    Node->Var_Key = Key;
    Node->Var_AppId = AppId;
    Node->Var_OrderId = OrderId;
    Node->Var_TransId = TransId;
    Node->Var_bUseSandBox = bUseSandBox;
    return Node;
}

void USIK_QueryTxn::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/%s/QueryTxn/v3/"), *APIEndpoint, Var_bUseSandBox ? TEXT("ISteamMicroTxnSandbox") : TEXT("ISteamMicroTxn"));
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("POST");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    JsonObject->SetNumberField("appid", Var_AppId);
    if(Var_OrderId != -1)
    {
        JsonObject->SetStringField("orderid", FString::Printf(TEXT("%lld"), Var_OrderId));
    }
    if(Var_TransId != -1)
    {
        JsonObject->SetStringField("transid", FString::Printf(TEXT("%lld"), Var_TransId));
    }
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(Content);
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_QueryTxn::OnResponseReceived);
    Request->ProcessRequest();
}
