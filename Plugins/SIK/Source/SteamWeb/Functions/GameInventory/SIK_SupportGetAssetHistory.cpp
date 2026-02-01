// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_SupportGetAssetHistory.h"

USIK_SupportGetAssetHistory* USIK_SupportGetAssetHistory::SupportGetAssetHistory(const FString& Key, const int32& AppId,
    const int64& AssetId, const int64& ContextId)
{
    USIK_SupportGetAssetHistory* Node = NewObject<USIK_SupportGetAssetHistory>();
    Node->Var_Key = Key;
    Node->Var_AppId = AppId;
    Node->Var_AssetId = AssetId;
    Node->Var_ContextId = ContextId;
    return Node;
}

void USIK_SupportGetAssetHistory::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/IGameInventory/SupportGetAssetHistory/v1/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("GET");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    JsonObject->SetNumberField("appid", Var_AppId);
    JsonObject->SetNumberField("assetid", Var_AssetId);
    JsonObject->SetNumberField("contextid", Var_ContextId);
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(Content);
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_SupportGetAssetHistory::OnResponseReceived);
    Request->ProcessRequest();
}
