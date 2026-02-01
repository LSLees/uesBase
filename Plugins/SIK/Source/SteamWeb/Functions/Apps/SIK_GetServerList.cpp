// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_GetServerList.h"

USIK_GetServerList* USIK_GetServerList::GetServerList(const FString& Key, const FString& Filter, const int32& Limit)
{   
    USIK_GetServerList* Node = NewObject<USIK_GetServerList>();
    Node->Var_Key = Key;
    Node->Var_Filter = Filter;
    Node->Var_Limit = Limit;
    return Node;
}

void USIK_GetServerList::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/ISteamApps/GetServerList/v1/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("GET");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    if(!Var_Filter.IsEmpty())
    {
        JsonObject->SetStringField("filter", Var_Filter);
    }
     if (Var_Limit != -1)
    {
        JsonObject->SetNumberField("limit", Var_Limit);
    }
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(Content);
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_GetServerList::OnResponseReceived);
    Request->ProcessRequest();
}
