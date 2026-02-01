// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_GetPriceSheet.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_GetPriceSheet : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:
	
	//Get the Inventory Service price sheet
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|Inventory", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_GetPriceSheet* GetPriceSheet(const FString& Key, const int32& ECurrency);

private:
    virtual void Activate() override;
	FString Var_Key;
	int32 Var_ECurrency;
};
