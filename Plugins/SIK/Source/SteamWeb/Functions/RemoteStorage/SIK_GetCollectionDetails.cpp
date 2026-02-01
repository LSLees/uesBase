// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_GetCollectionDetails.h"


USIK_GetCollectionDetails* USIK_GetCollectionDetails::GetCollectionDetails(const int32& CollectionCount,
    const int64 PublishedFileIds0)
{
    USIK_GetCollectionDetails* Node = NewObject<USIK_GetCollectionDetails>();
    Node->Var_CollectionCount = CollectionCount;
    Node->Var_PublishedFileIds0 = PublishedFileIds0;
    return Node;
}

void USIK_GetCollectionDetails::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/ISteamRemoteStorage/GetCollectionDetails/v1/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("POST");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetNumberField("collectioncount", Var_CollectionCount);
    JsonObject->SetNumberField("publishedfileids[0]", Var_PublishedFileIds0);
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(Content);
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_GetCollectionDetails::OnResponseReceived);
    Request->ProcessRequest();
}
