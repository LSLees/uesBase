// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_SetAppBuildLive.h"

USIK_SetAppBuildLive* USIK_SetAppBuildLive::SetAppBuildLive(const FString& Key, const int32& AppId,
    const int32& BuildId, const FString& BetaKey, const int32& SteamId, const FString& Description)
{
    USIK_SetAppBuildLive* Node = NewObject<USIK_SetAppBuildLive>();
    Node->Var_Key = Key;
    Node->Var_AppId = AppId;
    Node->Var_BuildId = BuildId;
    Node->Var_BetaKey = BetaKey;
    Node->Var_SteamId = SteamId;
    Node->Var_Description = Description;
    return Node;
}

void USIK_SetAppBuildLive::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/ISteamApps/SetAppBuildLive/v2/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("POST");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    JsonObject->SetNumberField("appid", Var_AppId);
    JsonObject->SetNumberField("buildid", Var_BuildId);
    JsonObject->SetStringField("betakey", Var_BetaKey);
    if (Var_SteamId != -1)
    {
        JsonObject->SetNumberField("steamid", Var_SteamId);
    }
    if (!Var_Description.IsEmpty())
    {
        JsonObject->SetStringField("description", Var_Description);
    }
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(Content);
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_SetAppBuildLive::OnResponseReceived);
    Request->ProcessRequest();
}
