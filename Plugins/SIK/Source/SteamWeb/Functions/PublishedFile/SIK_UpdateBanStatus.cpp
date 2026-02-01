// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_UpdateBanStatus.h"

USIK_UpdateBanStatus* USIK_UpdateBanStatus::UpdateBanStatus(const FString& Key, const int64& PublishedFileId,
    const int32& AppId, const bool& Banned, const FString& Reason)
{
    USIK_UpdateBanStatus* Node = NewObject<USIK_UpdateBanStatus>();
    Node->Var_Key = Key;
    Node->Var_PublishedFileId = PublishedFileId;
    Node->Var_AppId = AppId;
    Node->Var_Banned = Banned;
    Node->Var_Reason = Reason;
    return Node;
}

void USIK_UpdateBanStatus::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/IPublishedFileService/UpdateBanStatus/v1/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("POST");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    JsonObject->SetNumberField("publishedfileid", Var_PublishedFileId);
    JsonObject->SetNumberField("appid", Var_AppId);
    JsonObject->SetBoolField("banned", Var_Banned);
    if(Var_Reason.Len() > 0)
    {
        JsonObject->SetStringField("reason", Var_Reason);
    }
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
	Request->SetContentAsString(FString::Printf(TEXT("key=%s&input_json=%s"), *Var_Key, *Content));
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_UpdateBanStatus::OnResponseReceived);
    Request->ProcessRequest();
}
