// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_CreateAccount.h"

USIK_CreateAccount* USIK_CreateAccount::CreateAccount(const FString& Key, const int32& AppId, const FString& Memo)
{
    USIK_CreateAccount* Node = NewObject<USIK_CreateAccount>();
    Node->Var_Key = Key;
    Node->Var_AppId = AppId;
    Node->Var_Memo = Memo;
    return Node;
}

void USIK_CreateAccount::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/IGameServersService/CreateAccount/v1/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("POST");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    JsonObject->SetNumberField("appid", Var_AppId);
    JsonObject->SetStringField("memo", Var_Memo);
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(FString::Printf(TEXT("key=%s&input_json=%s"), *Var_Key, *Content));
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_CreateAccount::OnResponseReceived);
    Request->ProcessRequest();    
}
