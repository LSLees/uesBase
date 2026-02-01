// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_GetSteamLevel.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_GetSteamLevel : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:

	//Returns the Steam Level of a user.
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|Player", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_GetSteamLevel* GetSteamLevel(const FString& Key, const int64& SteamId);

private:
    virtual void Activate() override;
	FString Var_Key;
	int64 Var_SteamId;
};
