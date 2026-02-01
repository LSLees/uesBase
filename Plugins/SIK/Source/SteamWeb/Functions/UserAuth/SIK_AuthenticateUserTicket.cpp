// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_AuthenticateUserTicket.h"

USIK_AuthenticateUserTicket* USIK_AuthenticateUserTicket::AuthenticateUserTicket(const FString& Key, const int32& AppId,
    const FString& Ticket, const FString& Identity)
{
    USIK_AuthenticateUserTicket* Node = NewObject<USIK_AuthenticateUserTicket>();
    Node->Var_Key = Key;
    Node->Var_AppId = AppId;
    Node->Var_Ticket = Ticket;
    Node->Var_Identity = Identity;
    return Node;
}

void USIK_AuthenticateUserTicket::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/ISteamUserAuth/AuthenticateUserTicket/v1/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("GET");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    JsonObject->SetNumberField("appid", Var_AppId);
    JsonObject->SetStringField("ticket", Var_Ticket);
    JsonObject->SetStringField("identity", Var_Identity);
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(Content);
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_AuthenticateUserTicket::OnResponseReceived);
    Request->ProcessRequest();
}
