// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_Delete.h"

USIK_Delete* USIK_Delete::Delete(const FString& Key, const int64& PublishedFileId, const int32& AppId)
{
    USIK_Delete* Node = NewObject<USIK_Delete>();
    Node->Var_Key = Key;
    Node->Var_PublishedFileId = PublishedFileId;
    Node->Var_AppId = AppId;
    return Node;
}

void USIK_Delete::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/IPublishedFileService/Delete/v1/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("GET");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    JsonObject->SetNumberField("publishedfileid", Var_PublishedFileId);
    JsonObject->SetNumberField("appid", Var_AppId);
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
	Request->SetContentAsString(FString::Printf(TEXT("key=%s&input_json=%s"), *Var_Key, *Content));
	Request->OnProcessRequestComplete().BindUObject(this, &USIK_Delete::OnResponseReceived);
	Request->ProcessRequest();
}
