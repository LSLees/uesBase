// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_GetAppPriceInfo.h"

USIK_GetAppPriceInfo* USIK_GetAppPriceInfo::GetAppPriceInfo(const FString& Key, const int64& SteamId,
    const FString& AppIds)
{
    USIK_GetAppPriceInfo* Node = NewObject<USIK_GetAppPriceInfo>();
    Node->Var_Key = Key;
    Node->Var_SteamId = SteamId;
    Node->Var_AppIds = AppIds;
    return Node;
}

void USIK_GetAppPriceInfo::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/ISteamUser/GetAppPriceInfo/v1/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("GET");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    JsonObject->SetNumberField("steamid", Var_SteamId);
    JsonObject->SetStringField("appids", Var_AppIds);
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(Content);
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_GetAppPriceInfo::OnResponseReceived);
    Request->ProcessRequest();
}
