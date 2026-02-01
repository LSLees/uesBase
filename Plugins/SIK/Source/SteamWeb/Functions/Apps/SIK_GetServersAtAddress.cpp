// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_GetServersAtAddress.h"

USIK_GetServersAtAddress* USIK_GetServersAtAddress::GetServersAtAddress(const FString& Addr)
{
    USIK_GetServersAtAddress* Node = NewObject<USIK_GetServersAtAddress>();
    Node->Var_Addr = Addr;
    return Node;
}

void USIK_GetServersAtAddress::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/ISteamApps/GetServersAtAddress/v1/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("GET");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("addr", Var_Addr);
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(Content);
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_GetServersAtAddress::OnResponseReceived);
    Request->ProcessRequest();
}
