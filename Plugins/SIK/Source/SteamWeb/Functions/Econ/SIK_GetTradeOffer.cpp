// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_GetTradeOffer.h"

USIK_GetTradeOffer* USIK_GetTradeOffer::GetTradeOffer(const FString& Key, const int64& TradeOfferId,
    const FString& Language)
{
    USIK_GetTradeOffer* Node = NewObject<USIK_GetTradeOffer>();
    Node->Var_Key = Key;
    Node->Var_TradeOfferId = TradeOfferId;
    Node->Var_Language = Language;
    return Node;
}

void USIK_GetTradeOffer::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/IEconService/GetTradeOffer/v1/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("GET");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    JsonObject->SetNumberField("tradeofferid", Var_TradeOfferId);
    JsonObject->SetStringField("language", Var_Language);
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(FString::Printf(TEXT("key=%s&input_json=%s"), *Var_Key, *Content));
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_GetTradeOffer::OnResponseReceived);
    Request->ProcessRequest();
}
