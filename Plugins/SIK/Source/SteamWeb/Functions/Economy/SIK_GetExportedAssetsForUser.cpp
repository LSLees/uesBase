// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_GetExportedAssetsForUser.h"

USIK_GetExportedAssetsForUser* USIK_GetExportedAssetsForUser::GetExportedAssetsForUser(const FString& Key,
    const int64& SteamId, const int32& AppId, const int64& ContextId)
{
    USIK_GetExportedAssetsForUser* Node = NewObject<USIK_GetExportedAssetsForUser>();
    Node->Var_Key = Key;
    Node->Var_SteamId = SteamId;
    Node->Var_AppId = AppId;
    Node->Var_ContextId = ContextId;
    return Node;
}

void USIK_GetExportedAssetsForUser::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/ISteamEconomy/GetExportedAssetsForUser/v1/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("GET");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    JsonObject->SetNumberField("steamid", Var_SteamId);
    JsonObject->SetNumberField("appid", Var_AppId);
    JsonObject->SetNumberField("contextid", Var_ContextId);
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(Content);
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_GetExportedAssetsForUser::OnResponseReceived);
    Request->ProcessRequest();
}
