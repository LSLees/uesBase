// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_SubscribePublishedFile.h"

USIK_SubscribePublishedFile* USIK_SubscribePublishedFile::SubscribePublishedFile(const FString& Key,
    const int64& SteamId, const int32& AppId, const int64& PublishedFileId)
{
    USIK_SubscribePublishedFile* Node = NewObject<USIK_SubscribePublishedFile>();
    Node->Var_Key = Key;
    Node->Var_SteamId = SteamId;
    Node->Var_AppId = AppId;
    Node->Var_PublishedFileId = PublishedFileId;
    return Node;
}

void USIK_SubscribePublishedFile::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/ISteamRemoteStorage/SubscribePublishedFile/v1/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("POST");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    JsonObject->SetNumberField("steamid", Var_SteamId);
    JsonObject->SetNumberField("appid", Var_AppId);
    JsonObject->SetNumberField("publishedfileid", Var_PublishedFileId);
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(Content);
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_SubscribePublishedFile::OnResponseReceived);
    Request->ProcessRequest();
}
