// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_QueryLoginToken.h"

USIK_QueryLoginToken* USIK_QueryLoginToken::QueryLoginToken(const FString& Key, const FString& LoginToken)
{
    USIK_QueryLoginToken* Node = NewObject<USIK_QueryLoginToken>();
    Node->Var_Key = Key;
    Node->Var_LoginToken = LoginToken;
    return Node;
}

void USIK_QueryLoginToken::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/IGameServersService/QueryLoginToken/v1/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("GET");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    JsonObject->SetStringField("login_token", Var_LoginToken);
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(FString::Printf(TEXT("key=%s&input_json=%s"), *Var_Key, *Content));
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_QueryLoginToken::OnResponseReceived);
    Request->ProcessRequest();    
}
