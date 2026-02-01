// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_GetTradeOffers.h"

USIK_GetTradeOffers* USIK_GetTradeOffers::GetTradeOffers(const FString& Key, bool bGetSentOffers,
    bool bGetReceivedOffers, bool bGetDescriptions, const FString& Language, bool bActiveOnly, bool bHistoricalOnly,
    const int32& TimeHistoricalCutoff)
{
    USIK_GetTradeOffers* Node = NewObject<USIK_GetTradeOffers>();
    Node->Var_Key = Key;
    Node->Var_bGetSentOffers = bGetSentOffers;
    Node->Var_bGetReceivedOffers = bGetReceivedOffers;
    Node->Var_bGetDescriptions = bGetDescriptions;
    Node->Var_Language = Language;
    Node->Var_bActiveOnly = bActiveOnly;
    Node->Var_bHistoricalOnly = bHistoricalOnly;
    Node->Var_TimeHistoricalCutoff = TimeHistoricalCutoff;
    return Node;
}

void USIK_GetTradeOffers::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/IEconService/GetTradeOffers/v1/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("GET");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    JsonObject->SetBoolField("get_sent_offers", Var_bGetSentOffers);
    JsonObject->SetBoolField("get_received_offers", Var_bGetReceivedOffers);
    JsonObject->SetBoolField("get_descriptions", Var_bGetDescriptions);
    JsonObject->SetStringField("language", Var_Language);
    JsonObject->SetBoolField("active_only", Var_bActiveOnly);
    JsonObject->SetBoolField("historical_only", Var_bHistoricalOnly);
    JsonObject->SetNumberField("time_historical_cutoff", Var_TimeHistoricalCutoff);
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(FString::Printf(TEXT("key=%s&input_json=%s"), *Var_Key, *Content));
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_GetTradeOffers::OnResponseReceived);
    Request->ProcessRequest();
}
