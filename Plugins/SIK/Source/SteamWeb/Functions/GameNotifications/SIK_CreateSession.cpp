// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_CreateSession.h"

USIK_CreateSession* USIK_CreateSession::CreateSession(const FString& Key, const int32& AppId, const int64& Context,
    const FString& Title, const FString& Users, FSIK_CreateSessionOptional Optional)
{
    USIK_CreateSession* Node = NewObject<USIK_CreateSession>();
    Node->Var_Key = Key;
    Node->Var_AppId = AppId;
    Node->Var_Context = Context;
    Node->Var_Title = Title;
    Node->Var_Users = Users;
    Node->Var_Optional = Optional;
    return Node;
}

void USIK_CreateSession::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/IGameNotificationsService/CreateSession/v1/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("POST");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    JsonObject->SetNumberField("appid", Var_AppId);
    JsonObject->SetNumberField("context", Var_Context);
    JsonObject->SetStringField("title", Var_Title);
    JsonObject->SetStringField("users", Var_Users);
    if (Var_Optional.SteamId != -1)
    {
        JsonObject->SetNumberField("steamid", Var_Optional.SteamId);
    }
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(FString::Printf(TEXT("key=%s&input_json=%s"), *Var_Key, *Content));
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_CreateSession::OnResponseReceived);
    Request->ProcessRequest();
}
