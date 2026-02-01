// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_GetPlayerSummaries.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_GetPlayerSummaries : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:
	
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|User", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_GetPlayerSummaries* GetPlayerSummaries(const FString& Key, const FString& SteamIds);

private:
    virtual void Activate() override;
	FString Var_Key;
	FString Var_SteamIds;
};

