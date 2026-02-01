// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_GetPopular.h"

USIK_GetPopular* USIK_GetPopular::GetPopular(const FString& Key, const FString& Language, const int32& Start,
    const int32& FilterAppId, const int32& ECurrency, FSIK_GetPopularOptional OptionalSettings)
{
    USIK_GetPopular* Node = NewObject<USIK_GetPopular>();
    Node->Var_Key = Key;
    Node->Var_Language = Language;
    Node->Var_Start = Start;
    Node->Var_FilterAppId = FilterAppId;
    Node->Var_ECurrency = ECurrency;
    Node->Var_OptionalSettings = OptionalSettings;
    return Node;
}

void USIK_GetPopular::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/IEconMarketService/GetPopular/v1/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("GET");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    JsonObject->SetStringField("language", Var_Language);
    JsonObject->SetNumberField("start", Var_Start);
    JsonObject->SetNumberField("filter_appid", Var_FilterAppId);
    JsonObject->SetNumberField("ecurrency", Var_ECurrency);
    if (Var_OptionalSettings.Rows != -1)
    {
        JsonObject->SetNumberField("rows", Var_OptionalSettings.Rows);
    }
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(FString::Printf(TEXT("key=%s&input_json=%s"), *Var_Key, *Content));
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_GetPopular::OnResponseReceived);
    Request->ProcessRequest();
}
