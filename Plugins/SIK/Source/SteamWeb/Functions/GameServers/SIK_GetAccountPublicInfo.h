// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_GetAccountPublicInfo.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_GetAccountPublicInfo : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:
	
	//Gets public information about a given game server account.
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|GameServers", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_GetAccountPublicInfo* GetAccountPublicInfo(const FString& Key, const int64& SteamId);

private:
    virtual void Activate() override;
	FString Var_Key;
	int64 Var_SteamId;
};
