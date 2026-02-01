// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_DeleteSessionBatch.h"

USIK_DeleteSessionBatch* USIK_DeleteSessionBatch::DeleteSessionBatch(const FString& Key, const int64& SessionId,
    const int32& AppId)
{
    USIK_DeleteSessionBatch* Node = NewObject<USIK_DeleteSessionBatch>();
    Node->Var_Key = Key;
    Node->Var_SessionId = SessionId;
    Node->Var_AppId = AppId;
    return Node;
}  

void USIK_DeleteSessionBatch::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/IGameNotificationsService/DeleteSessionBatch/v1/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("POST");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    JsonObject->SetNumberField("sessionid", Var_SessionId);
    JsonObject->SetNumberField("appid", Var_AppId);
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(FString::Printf(TEXT("key=%s&input_json=%s"), *Var_Key, *Content));
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_DeleteSessionBatch::OnResponseReceived);
    Request->ProcessRequest();
}
