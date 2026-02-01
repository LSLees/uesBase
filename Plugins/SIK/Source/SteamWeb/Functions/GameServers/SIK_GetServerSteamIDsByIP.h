// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_GetServerSteamIDsByIP.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_GetServerSteamIDsByIP : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:

	//Gets a list of server SteamIDs given a list of IPs.
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|GameServers", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_GetServerSteamIDsByIP* GetServerSteamIDsByIP(const FString& Key, const TArray<FString>& ServerIPs);

private:
    virtual void Activate() override;
	FString Var_Key;
	TArray<FString> Var_ServerIPs;
};
