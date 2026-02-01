// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_GetTradeHistory.h"

USIK_GetTradeHistory* USIK_GetTradeHistory::GetTradeHistory(const FString& Key, const int32& MaxTrades,
    const int32& StartAfterTime, const int64& StartAfterTradeId, bool bNavigatingBack, bool bGetDescriptions,
    const FString& Language, bool bIncludeFailed, bool bIncludeTotal)
{
    USIK_GetTradeHistory* Node = NewObject<USIK_GetTradeHistory>();
    Node->Var_Key = Key;
    Node->Var_MaxTrades = MaxTrades;
    Node->Var_StartAfterTime = StartAfterTime;
    Node->Var_StartAfterTradeId = StartAfterTradeId;
    Node->Var_bNavigatingBack = bNavigatingBack;
    Node->Var_bGetDescriptions = bGetDescriptions;
    Node->Var_Language = Language;
    Node->Var_bIncludeFailed = bIncludeFailed;
    Node->Var_bIncludeTotal = bIncludeTotal;
    return Node;
}   

void USIK_GetTradeHistory::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/IEconService/GetTradeHistory/v1/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("GET");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    JsonObject->SetNumberField("max_trades", Var_MaxTrades);
    JsonObject->SetNumberField("start_after_time", Var_StartAfterTime);
    JsonObject->SetNumberField("start_after_tradeid", Var_StartAfterTradeId);
    JsonObject->SetBoolField("navigating_back", Var_bNavigatingBack);
    JsonObject->SetBoolField("get_descriptions", Var_bGetDescriptions);
    JsonObject->SetStringField("language", Var_Language);
    JsonObject->SetBoolField("include_failed", Var_bIncludeFailed);
    JsonObject->SetBoolField("include_total", Var_bIncludeTotal);
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(FString::Printf(TEXT("key=%s&input_json=%s"), *Var_Key, *Content));
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_GetTradeHistory::OnResponseReceived);
    Request->ProcessRequest();
}
