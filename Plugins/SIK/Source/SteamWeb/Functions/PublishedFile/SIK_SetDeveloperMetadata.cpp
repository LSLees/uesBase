// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_SetDeveloperMetadata.h"

USIK_SetDeveloperMetadata* USIK_SetDeveloperMetadata::SetDeveloperMetadata(const FString& Key,
    const int64& PublishedFileId, const int32& AppId, const FString& Metadata)
{
    USIK_SetDeveloperMetadata* Node = NewObject<USIK_SetDeveloperMetadata>();
    Node->Var_Key = Key;
    Node->Var_PublishedFileId = PublishedFileId;
    Node->Var_AppId = AppId;
    Node->Var_Metadata = Metadata;
    return Node;
}

void USIK_SetDeveloperMetadata::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/IPublishedFileService/SetDeveloperMetadata/v1/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("POST");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    JsonObject->SetNumberField("publishedfileid", Var_PublishedFileId);
    JsonObject->SetNumberField("appid", Var_AppId);
    JsonObject->SetStringField("metadata", Var_Metadata);
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
	Request->SetContentAsString(FString::Printf(TEXT("key=%s&input_json=%s"), *Var_Key, *Content));
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_SetDeveloperMetadata::OnResponseReceived);
    Request->ProcessRequest();
}
