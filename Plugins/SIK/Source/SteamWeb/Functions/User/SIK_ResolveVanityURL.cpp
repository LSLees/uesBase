// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_ResolveVanityURL.h"

USIK_ResolveVanityURL* USIK_ResolveVanityURL::ResolveVanityURL(const FString& Key, const FString& VanityUrl,
    const int32& UrlType)
{
    USIK_ResolveVanityURL* Node = NewObject<USIK_ResolveVanityURL>();
    Node->Var_Key = Key;
    Node->Var_VanityUrl = VanityUrl;
    Node->Var_UrlType = UrlType;
    return Node;
}

void USIK_ResolveVanityURL::Activate()
{
    Super::Activate();
    FString URL = FString::Printf(TEXT("%s/ISteamUser/ResolveVanityURL/v1/"), *APIEndpoint);
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("GET");
    Request->SetHeader("Content-Type", "application/x-www-form-urlencoded");
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField("key", Var_Key);
}
