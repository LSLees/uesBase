// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_ResetLoginToken.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_ResetLoginToken : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:
	
	//Generates a new login token for the specified game server
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|GameServers", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_ResetLoginToken* ResetLoginToken(const FString& Key, const int64& SteamId);

private:
    virtual void Activate() override;
	FString Var_Key;
	int64 Var_SteamId;
};
