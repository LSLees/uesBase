// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_GetPartnerAppListForWebAPIKey.h"

USIK_GetPartnerAppListForWebAPIKey* USIK_GetPartnerAppListForWebAPIKey::GetPartnerAppListForWebAPIKey(
    const FString& Key, const FString& TypeFilter)
{
    USIK_GetPartnerAppListForWebAPIKey* Node = NewObject<USIK_GetPartnerAppListForWebAPIKey>();
    Node->Var_Key = Key;
    Node->Var_TypeFilter = TypeFilter;
    return Node;
}

void USIK_GetPartnerAppListForWebAPIKey::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/ISteamApps/GetPartnerAppListForWebAPIKey/v2/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("GET");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    JsonObject->SetStringField("type_filter", Var_TypeFilter);
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(Content);
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_GetPartnerAppListForWebAPIKey::OnResponseReceived);
    Request->ProcessRequest();
}
