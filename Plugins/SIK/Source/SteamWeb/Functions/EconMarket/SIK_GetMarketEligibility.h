// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_GetMarketEligibility.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_GetMarketEligibility : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:
	//Checks whether or not an account is allowed to use the market.
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|EconMarket", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_GetMarketEligibility* GetMarketEligibility(const FString& Key, const int64& SteamId);

private:
    virtual void Activate() override;
	FString Var_Key;
	int64 Var_SteamId;
};
