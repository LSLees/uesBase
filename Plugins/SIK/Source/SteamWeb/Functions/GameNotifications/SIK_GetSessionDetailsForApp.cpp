// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_GetSessionDetailsForApp.h"

USIK_GetSessionDetailsForApp* USIK_GetSessionDetailsForApp::GetSessionDetailsForApp(const FString& Key,
    const FString& Sessions, const int32& AppId, const FString& Language)
{
    USIK_GetSessionDetailsForApp* Node = NewObject<USIK_GetSessionDetailsForApp>();
    Node->Var_Key = Key;
    Node->Var_Sessions = Sessions;
    Node->Var_AppId = AppId;
    Node->Var_Language = Language;
    return Node;
}

void USIK_GetSessionDetailsForApp::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/IGameNotificationsService/GetSessionDetailsForApp/v1/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("GET");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    JsonObject->SetStringField("sessions", Var_Sessions);
    JsonObject->SetNumberField("appid", Var_AppId);
    JsonObject->SetStringField("language", Var_Language);
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(FString::Printf(TEXT("key=%s&input_json=%s"), *Var_Key, *Content));
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_GetSessionDetailsForApp::OnResponseReceived);
    Request->ProcessRequest();
}
