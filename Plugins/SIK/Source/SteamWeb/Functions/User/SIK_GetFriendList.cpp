// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_GetFriendList.h"

USIK_GetFriendList* USIK_GetFriendList::GetFriendList(const FString& Key, const int64& SteamId,
    const FString& Relationship)
{
    USIK_GetFriendList* Node = NewObject<USIK_GetFriendList>();
    Node->Var_Key = Key;
    Node->Var_SteamId = SteamId;
    Node->Var_Relationship = Relationship;
    return Node;
}

void USIK_GetFriendList::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/ISteamUser/GetFriendList/v1/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("GET");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    JsonObject->SetNumberField("steamid", Var_SteamId);
    if(!Var_Relationship.IsEmpty())
    {
        JsonObject->SetStringField("relationship", Var_Relationship);
    }
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(Content);
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_GetFriendList::OnResponseReceived);
    Request->ProcessRequest();
}
