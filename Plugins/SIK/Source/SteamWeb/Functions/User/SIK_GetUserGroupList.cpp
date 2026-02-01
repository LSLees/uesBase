// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_GetUserGroupList.h"

USIK_GetUserGroupList* USIK_GetUserGroupList::GetUserGroupList(const FString& Key, const int64& SteamId)
{
    USIK_GetUserGroupList* Node = NewObject<USIK_GetUserGroupList>();
    Node->Var_Key = Key;
    Node->Var_SteamId = SteamId;
    return Node;
}

void USIK_GetUserGroupList::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/ISteamUser/GetUserGroupList/v1/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("GET");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    JsonObject->SetNumberField("steamid", Var_SteamId);
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(Content);
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_GetUserGroupList::OnResponseReceived);
    Request->ProcessRequest();
}
