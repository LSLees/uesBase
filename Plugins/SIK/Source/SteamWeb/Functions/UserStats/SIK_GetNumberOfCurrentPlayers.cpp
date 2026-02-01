// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_GetNumberOfCurrentPlayers.h"

USIK_GetNumberOfCurrentPlayers* USIK_GetNumberOfCurrentPlayers::GetNumberOfCurrentPlayers(const int32& AppId)
{
    USIK_GetNumberOfCurrentPlayers* Node = NewObject<USIK_GetNumberOfCurrentPlayers>();
    Node->Var_AppId = AppId;
    return Node;
}

void USIK_GetNumberOfCurrentPlayers::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/ISteamUserStats/GetNumberOfCurrentPlayers/v1/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("GET");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetNumberField("appid", Var_AppId);
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(Content);
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_GetNumberOfCurrentPlayers::OnResponseReceived);
    Request->ProcessRequest();
}
