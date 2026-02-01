// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_GetTradeOffersSummary.h"

USIK_GetTradeOffersSummary* USIK_GetTradeOffersSummary::GetTradeOffersSummary(const FString& Key,
    const int32& TimeLastVisit)
{
    USIK_GetTradeOffersSummary* Node = NewObject<USIK_GetTradeOffersSummary>();
    Node->Var_Key = Key;
    Node->Var_TimeLastVisit = TimeLastVisit;
    return Node;
}   

void USIK_GetTradeOffersSummary::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/IEconService/GetTradeOffersSummary/v1/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("GET");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    JsonObject->SetNumberField("time_last_visit", Var_TimeLastVisit);
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(FString::Printf(TEXT("key=%s&input_json=%s"), *Var_Key, *Content));
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_GetTradeOffersSummary::OnResponseReceived);
    Request->ProcessRequest();
}
