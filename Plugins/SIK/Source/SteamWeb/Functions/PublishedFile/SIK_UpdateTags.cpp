// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_UpdateTags.h"

USIK_UpdateTags* USIK_UpdateTags::UpdateTags(const FString& Key, const int64& PublishedFileId, const int32& AppId,
    const FString& AddTags, const FString& RemoveTags)
{
    USIK_UpdateTags* Node = NewObject<USIK_UpdateTags>();
    Node->Var_Key = Key;
    Node->Var_PublishedFileId = PublishedFileId;
    Node->Var_AppId = AppId;
    Node->Var_AddTags = AddTags;
    Node->Var_RemoveTags = RemoveTags;
    return Node;
}

void USIK_UpdateTags::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/IPublishedFileService/UpdateTags/v1/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("POST");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    JsonObject->SetNumberField("publishedfileid", Var_PublishedFileId);
    JsonObject->SetNumberField("appid", Var_AppId);
    if(Var_AddTags.Len() > 0)
    {
        JsonObject->SetStringField("add_tags", Var_AddTags);
    }
    if(Var_RemoveTags.Len() > 0)
    {
        JsonObject->SetStringField("remove_tags", Var_RemoveTags);
    }
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(FString::Printf(TEXT("key=%s&input_json=%s"), *Var_Key, *Content));
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_UpdateTags::OnResponseReceived);
    Request->ProcessRequest();
}
