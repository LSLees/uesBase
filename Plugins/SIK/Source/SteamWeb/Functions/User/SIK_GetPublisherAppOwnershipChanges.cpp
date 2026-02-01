// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_GetPublisherAppOwnershipChanges.h"

USIK_GetPublisherAppOwnershipChanges* USIK_GetPublisherAppOwnershipChanges::GetPublisherAppOwnershipChanges(
    const FString& Key, const FString& PackageRowVersion, const FString& CDKeyRowVersion)
{
    USIK_GetPublisherAppOwnershipChanges* Node = NewObject<USIK_GetPublisherAppOwnershipChanges>();
    Node->Var_Key = Key;
    Node->Var_PackageRowVersion = PackageRowVersion;
    Node->Var_CDKeyRowVersion = CDKeyRowVersion;
    return Node;
}

void USIK_GetPublisherAppOwnershipChanges::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/ISteamUser/GetPublisherAppOwnershipChanges/v1/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("GET");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
    JsonObject->SetStringField("packagerowversion", Var_PackageRowVersion);
    JsonObject->SetStringField("cdkeyrowversion", Var_CDKeyRowVersion);
    FString Content;
    TSharedRef<TJsonWriter<TCHAR>> Writer = TJsonWriterFactory<TCHAR>::Create(&Content);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    Request->SetContentAsString(Content);
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_GetPublisherAppOwnershipChanges::OnResponseReceived);
    Request->ProcessRequest();
}
