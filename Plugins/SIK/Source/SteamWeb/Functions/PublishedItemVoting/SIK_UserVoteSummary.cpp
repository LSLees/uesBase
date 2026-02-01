// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_UserVoteSummary.h"

USIK_UserVoteSummary* USIK_UserVoteSummary::UserVoteSummary(const FString& Key, const int64& SteamId,
    const int32& Count, int64 PublishedFileId0)
{
    USIK_UserVoteSummary* Node = NewObject<USIK_UserVoteSummary>();
    Node->Var_Key = Key;
    Node->Var_SteamId = SteamId;
    Node->Var_Count = Count;
    Node->Var_PublishedFileId0 = PublishedFileId0;
    return Node;
}

void USIK_UserVoteSummary::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/ISteamPublishedItemVoting/UserVoteSummary/v1/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("POST");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    JsonObject->SetNumberField("steamid", Var_SteamId);
    JsonObject->SetNumberField("count", Var_Count);
    if(Var_PublishedFileId0 != -1)
    {
        JsonObject->SetNumberField("publishedfileid[0]", Var_PublishedFileId0);
    }
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(Content);
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_UserVoteSummary::OnResponseReceived);
    Request->ProcessRequest();
}
