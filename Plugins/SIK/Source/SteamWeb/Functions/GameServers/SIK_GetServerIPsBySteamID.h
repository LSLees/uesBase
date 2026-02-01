// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_GetServerIPsBySteamID.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_GetServerIPsBySteamID : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:
	
	//Gets a list of server IP addresses given a list of SteamIDs
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|GameServers", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_GetServerIPsBySteamID* GetServerIPsBySteamID(const FString& Key, const TArray<int64>& ServerSteamIds);

private:
    virtual void Activate() override;
	FString Var_Key;
	TArray<int64> Var_ServerSteamIds;
};
