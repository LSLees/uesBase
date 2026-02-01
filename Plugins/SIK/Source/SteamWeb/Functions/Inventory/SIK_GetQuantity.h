// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_GetQuantity.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_GetQuantity : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:
	
	//Get the total number of available items of the given type
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|Inventory", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_GetQuantity* GetQuantity(const FString& Key, const int32& AppId, const int64& SteamId, const TArray<int64>& ItemDefId, const bool& Force = false);

private:
    virtual void Activate() override;
	FString Var_Key;
	int32 Var_AppId;
	int64 Var_SteamId;
	TArray<int64> Var_ItemDefId;
	bool Var_Force;
};
