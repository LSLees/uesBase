// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_RequestNotifications.h"

USIK_RequestNotifications* USIK_RequestNotifications::RequestNotifications(const FString& Key, const int64& SteamId,
    const int32& AppId)
{
    USIK_RequestNotifications* Node = NewObject<USIK_RequestNotifications>();
    Node->Var_Key = Key;
    Node->Var_SteamId = SteamId;
    Node->Var_AppId = AppId;
    return Node;
}

void USIK_RequestNotifications::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/IGameNotificationsService/RequestNotifications/v1/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("POST");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    JsonObject->SetNumberField("appid", Var_AppId);
    JsonObject->SetNumberField("steamid", Var_SteamId);
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(FString::Printf(TEXT("key=%s&input_json=%s"), *Var_Key, *Content));
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_RequestNotifications::OnResponseReceived);
    Request->ProcessRequest();
}
