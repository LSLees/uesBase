// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_GetAccountList.h"

USIK_GetAccountList* USIK_GetAccountList::GetAccountList(const FString& Key)
{
    USIK_GetAccountList* Node = NewObject<USIK_GetAccountList>();
    Node->Var_Key = Key;
    return Node;
}

void USIK_GetAccountList::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/IGameServersService/GetAccountList/v1/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("GET");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(FString::Printf(TEXT("key=%s&input_json=%s"), *Var_Key, *Content));
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_GetAccountList::OnResponseReceived);
    Request->ProcessRequest();
}
