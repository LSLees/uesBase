// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_GetTradeOffer.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_GetTradeOffer : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:

	//Gets a specific trade offer
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|Econ", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_GetTradeOffer* GetTradeOffer(const FString& Key, const int64& TradeOfferId, const FString& Language);

private:
    virtual void Activate() override;
	FString Var_Key;
	int64 Var_TradeOfferId;
	FString Var_Language;
};
