// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_SetUGCUsedByGC.h"

USIK_SetUGCUsedByGC* USIK_SetUGCUsedByGC::SetUGCUsedByGC(const FString& Key, const int64& SteamId, const int64& UgcId,
    const int32& AppId, const bool& Used)
{
    USIK_SetUGCUsedByGC* Node = NewObject<USIK_SetUGCUsedByGC>();
    Node->Var_Key = Key;
    Node->Var_SteamId = SteamId;
    Node->Var_UgcId = UgcId;
    Node->Var_AppId = AppId;
    Node->Var_Used = Used;
    return Node;
}

void USIK_SetUGCUsedByGC::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/ISteamRemoteStorage/SetUGCUsedByGC/v1/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("POST");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    JsonObject->SetNumberField("steamid", Var_SteamId);
    JsonObject->SetNumberField("ugcid", Var_UgcId);
    JsonObject->SetNumberField("appid", Var_AppId);
    JsonObject->SetBoolField("used", Var_Used);
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(Content);
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_SetUGCUsedByGC::OnResponseReceived);
    Request->ProcessRequest();
}
