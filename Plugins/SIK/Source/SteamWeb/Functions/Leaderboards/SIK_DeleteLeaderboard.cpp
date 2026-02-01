// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_DeleteLeaderboard.h"

USIK_DeleteLeaderboard* USIK_DeleteLeaderboard::DeleteLeaderboard(const FString& Key, const int32& AppId,
    const FString& Name)
{
    USIK_DeleteLeaderboard* Node = NewObject<USIK_DeleteLeaderboard>();
    Node->Var_Key = Key;
    Node->Var_AppId = AppId;
    Node->Var_Name = Name;
    return Node;
}

void USIK_DeleteLeaderboard::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/ISteamLeaderboards/DeleteLeaderboard/v1/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("POST");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    JsonObject->SetNumberField("appid", Var_AppId);
    JsonObject->SetStringField("name", Var_Name);
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(Content);
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_DeleteLeaderboard::OnResponseReceived);
    Request->ProcessRequest();
}
