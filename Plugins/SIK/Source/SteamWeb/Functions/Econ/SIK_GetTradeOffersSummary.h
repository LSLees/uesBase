// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_GetTradeOffersSummary.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_GetTradeOffersSummary : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:

	//Get counts of pending and new trade offers
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|Econ", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_GetTradeOffersSummary* GetTradeOffersSummary(const FString& Key, const int32& TimeLastVisit);

private:
    virtual void Activate() override;
	FString Var_Key;
	int32 Var_TimeLastVisit;
};
