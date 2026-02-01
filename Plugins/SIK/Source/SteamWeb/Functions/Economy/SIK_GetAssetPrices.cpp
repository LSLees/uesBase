// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_GetAssetPrices.h"

USIK_GetAssetPrices* USIK_GetAssetPrices::GetAssetPrices(const FString& Key, const int32& AppId,
    FSIK_GetAssetPricesOptional Optional)
{
    USIK_GetAssetPrices* Node = NewObject<USIK_GetAssetPrices>();
    Node->Var_Key = Key;
    Node->Var_AppId = AppId;
    Node->Var_Optional = Optional;
    return Node;
}

void USIK_GetAssetPrices::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/ISteamEconomy/GetAssetPrices/v1/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("GET");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    JsonObject->SetNumberField("appid", Var_AppId);
    if (!Var_Optional.Currency.IsEmpty())
    {
        JsonObject->SetStringField("currency", Var_Optional.Currency);
    }
    if (!Var_Optional.Language.IsEmpty())
    {
        JsonObject->SetStringField("language", Var_Optional.Language);
    }
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(Content);
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_GetAssetPrices::OnResponseReceived);
    Request->ProcessRequest();
}
