// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#include "SIK_CheckAppOwnership.h"
#include "GenericPlatform/GenericPlatformHttp.h"

USIK_CheckAppOwnership* USIK_CheckAppOwnership::CheckAppOwnership(const FString& Key, const int64& SteamId,
    const int32& AppId)
{
    USIK_CheckAppOwnership* Node = NewObject<USIK_CheckAppOwnership>();
    Node->Var_Key = Key;
    Node->Var_SteamId = SteamId;
    Node->Var_AppId = AppId;
    return Node;
}

void USIK_CheckAppOwnership::Activate()
{
    Super::Activate();
    const FString Query = FString::Printf(
        TEXT("key=%s&steamid=%s&appid=%d"),
        *FGenericPlatformHttp::UrlEncode(Var_Key),
        *LexToString(Var_SteamId),
        Var_AppId
    );
    const FString URL = FString::Printf(TEXT("%s/ISteamUser/CheckAppOwnership/v4/?%s"), *APIEndpoint, *Query);

    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb(TEXT("GET"));
    Request->OnProcessRequestComplete().BindUObject(this, &USIK_CheckAppOwnership::OnResponseReceived);
    Request->ProcessRequest();
}
