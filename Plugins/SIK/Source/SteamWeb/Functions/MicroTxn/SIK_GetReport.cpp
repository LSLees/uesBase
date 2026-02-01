// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_GetReport.h"

USIK_GetReport* USIK_GetReport::GetReport(const FString& Key, const int32& AppId, const FString& Type,
    const FString& Time, const int32& MaxResults, bool bUseSandBox)
{
    USIK_GetReport* Node = NewObject<USIK_GetReport>();
    Node->Var_Key = Key;
    Node->Var_AppId = AppId;
    Node->Var_Type = Type;
    Node->Var_Time = Time;
    Node->Var_MaxResults = MaxResults;
    Node->Var_bUseSandBox = bUseSandBox;
    return Node;
}

void USIK_GetReport::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/%s/GetReport/v5/"), *APIEndpoint, Var_bUseSandBox ? TEXT("ISteamMicroTxnSandbox") : TEXT("ISteamMicroTxn"));
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("POST");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    JsonObject->SetNumberField("appid", Var_AppId);
    JsonObject->SetStringField("type", Var_Type);
    JsonObject->SetStringField("time", Var_Time);
    if(Var_MaxResults != 1000)
    {
        JsonObject->SetNumberField("maxresults", Var_MaxResults);
    }
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(Content);
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_GetReport::OnResponseReceived);
    Request->ProcessRequest();
}
