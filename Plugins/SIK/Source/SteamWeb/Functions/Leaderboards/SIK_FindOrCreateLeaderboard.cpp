// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_FindOrCreateLeaderboard.h"

USIK_FindOrCreateLeaderboard* USIK_FindOrCreateLeaderboard::FindOrCreateLeaderboard(const FString& Key,
    const int32& AppId, const FString& Name, const FString& SortMethod, const FString& DisplayType,
    const bool& CreateIfNotFound, const bool& OnlyTrustedWrites, const bool& OnlyFriendsReads)
{
    USIK_FindOrCreateLeaderboard* Node = NewObject<USIK_FindOrCreateLeaderboard>();
    Node->Var_Key = Key;
    Node->Var_AppId = AppId;
    Node->Var_Name = Name;
    Node->Var_SortMethod = SortMethod;
    Node->Var_DisplayType = DisplayType;
    Node->Var_CreateIfNotFound = CreateIfNotFound;
    Node->Var_OnlyTrustedWrites = OnlyTrustedWrites;
    Node->Var_OnlyFriendsReads = OnlyFriendsReads;
    return Node;
}

void USIK_FindOrCreateLeaderboard::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/ISteamLeaderboards/FindOrCreateLeaderboard/v2/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("POST");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    JsonObject->SetNumberField("appid", Var_AppId);
    JsonObject->SetStringField("name", Var_Name);
    if(!Var_SortMethod.IsEmpty())
    {
        JsonObject->SetStringField("sortmethod", Var_SortMethod);
    }
    if(!Var_DisplayType.IsEmpty())
    {
        JsonObject->SetStringField("displaytype", Var_DisplayType);
    }
    JsonObject->SetBoolField("createifnotfound", Var_CreateIfNotFound);
    JsonObject->SetBoolField("onlytrustedwrites", Var_OnlyTrustedWrites);
    JsonObject->SetBoolField("onlyfriendsreads", Var_OnlyFriendsReads);
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(Content);
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_FindOrCreateLeaderboard::OnResponseReceived);
    Request->ProcessRequest();
}
