// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_GetDeletedSteamIDs.h"

USIK_GetDeletedSteamIDs* USIK_GetDeletedSteamIDs::GetDeletedSteamIDs(const FString& Key, const int64& RowVersion)
{
    USIK_GetDeletedSteamIDs* Node = NewObject<USIK_GetDeletedSteamIDs>();
    Node->Var_Key = Key;
    Node->Var_RowVersion = RowVersion;
    return Node;
}

void USIK_GetDeletedSteamIDs::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/ISteamUser/GetDeletedSteamIDs/v1/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("GET");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    JsonObject->SetNumberField("rowversion", Var_RowVersion);
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(Content);
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_GetDeletedSteamIDs::OnResponseReceived);
    Request->ProcessRequest();
}
