// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_GetSchemaForGame.h"

USIK_GetSchemaForGame* USIK_GetSchemaForGame::GetSchemaForGame(const FString& Key, const int32& AppId,
    const FString& Language)
{
    USIK_GetSchemaForGame* Node = NewObject<USIK_GetSchemaForGame>();
    Node->Var_Key = Key;
    Node->Var_AppId = AppId;
    Node->Var_Language = Language;
    return Node;
}

void USIK_GetSchemaForGame::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/ISteamUserStats/GetSchemaForGame/v2/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("GET");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    JsonObject->SetNumberField("appid", Var_AppId);
    if(Var_Language.Len() > 0)
    {
        JsonObject->SetStringField("l", Var_Language);
    }
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(Content);
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_GetSchemaForGame::OnResponseReceived);
    Request->ProcessRequest();
}
