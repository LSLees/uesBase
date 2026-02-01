// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_GetPriceSheet.h"

USIK_GetPriceSheet* USIK_GetPriceSheet::GetPriceSheet(const FString& Key, const int32& ECurrency)
{
    USIK_GetPriceSheet* Node = NewObject<USIK_GetPriceSheet>();
    Node->Var_Key = Key;
    Node->Var_ECurrency = ECurrency;
    return Node;
}

void USIK_GetPriceSheet::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/IInventoryService/GetPriceSheet/v1/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("GET");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    JsonObject->SetNumberField("ecurrency", Var_ECurrency);
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(FString::Printf(TEXT("key=%s&input_json=%s"), *Var_Key, *Content));
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_GetPriceSheet::OnResponseReceived);
    Request->ProcessRequest();
}
