// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_UpToDateCheck.h"

USIK_UpToDateCheck* USIK_UpToDateCheck::UpToDateCheck(const int32& AppId, const int32& Version)
{
    USIK_UpToDateCheck* Node = NewObject<USIK_UpToDateCheck>();
    Node->Var_AppId = AppId;
    Node->Var_Version = Version;
    return Node;
}

void USIK_UpToDateCheck::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/ISteamApps/UpToDateCheck/v1/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("GET");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetNumberField("appid", Var_AppId);
    JsonObject->SetNumberField("version", Var_Version);
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(Content);
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_UpToDateCheck::OnResponseReceived);
    Request->ProcessRequest();
}
