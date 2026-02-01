// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_UpdateIncompatibleStatus.h"

USIK_UpdateIncompatibleStatus* USIK_UpdateIncompatibleStatus::UpdateIncompatibleStatus(const FString& Key,
    const int64& PublishedFileId, const int32& AppId, const bool& Incompatible)
{
    USIK_UpdateIncompatibleStatus* Node = NewObject<USIK_UpdateIncompatibleStatus>();
    Node->Var_Key = Key;
    Node->Var_PublishedFileId = PublishedFileId;
    Node->Var_AppId = AppId;
    Node->Var_Incompatible = Incompatible;
    return Node;
}

void USIK_UpdateIncompatibleStatus::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/IPublishedFileService/UpdateIncompatibleStatus/v1/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("POST");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    JsonObject->SetNumberField("publishedfileid", Var_PublishedFileId);
    JsonObject->SetNumberField("appid", Var_AppId);
    JsonObject->SetBoolField("incompatible", Var_Incompatible);
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
	Request->SetContentAsString(FString::Printf(TEXT("key=%s&input_json=%s"), *Var_Key, *Content));
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_UpdateIncompatibleStatus::OnResponseReceived);
    Request->ProcessRequest();
}
