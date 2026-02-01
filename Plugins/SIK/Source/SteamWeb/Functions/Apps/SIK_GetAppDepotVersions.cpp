// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_GetAppDepotVersions.h"

USIK_GetAppDepotVersions* USIK_GetAppDepotVersions::GetAppDepotVersions(const FString& Key, const int32& AppId)
{   
    USIK_GetAppDepotVersions* Node = NewObject<USIK_GetAppDepotVersions>();
    Node->Var_Key = Key;
    Node->Var_AppId = AppId;
    return Node;
}

void USIK_GetAppDepotVersions::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/ISteamApps/GetAppDepotVersions/v1/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("GET");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    JsonObject->SetNumberField("appid", Var_AppId);
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(Content);
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_GetAppDepotVersions::OnResponseReceived);
    Request->ProcessRequest();
}
