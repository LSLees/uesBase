// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_GetAppList.h"

USIK_GetAppList* USIK_GetAppList::GetAppList()
{
    USIK_GetAppList* Node = NewObject<USIK_GetAppList>();
    return Node;
}

void USIK_GetAppList::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/ISteamApps/GetAppList/v1/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("GET");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(Content);
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_GetAppList::OnResponseReceived);
    Request->ProcessRequest();
}
