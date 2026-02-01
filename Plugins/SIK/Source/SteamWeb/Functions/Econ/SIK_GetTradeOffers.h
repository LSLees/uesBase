// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_GetTradeOffers.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_GetTradeOffers : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:

	//Get a list of sent or received trade offers
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|Econ", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_GetTradeOffers* GetTradeOffers(const FString& Key, bool bGetSentOffers, bool bGetReceivedOffers, bool bGetDescriptions, const FString& Language, bool bActiveOnly, bool bHistoricalOnly, const int32& TimeHistoricalCutoff);

private:
    virtual void Activate() override;
	FString Var_Key;
	bool Var_bGetSentOffers;
	bool Var_bGetReceivedOffers;
	bool Var_bGetDescriptions;
	FString Var_Language;
	bool Var_bActiveOnly;
	bool Var_bHistoricalOnly;
	int32 Var_TimeHistoricalCutoff;
	
};
