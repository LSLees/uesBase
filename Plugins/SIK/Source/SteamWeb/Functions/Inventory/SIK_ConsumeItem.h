// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_ConsumeItem.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_ConsumeItem : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:
	
	//Marks an item as wholly or partially consumed. This action cannot be reversed
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|Inventory", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_ConsumeItem* ConsumeItem(const FString& Key, const int32& AppId, const int64& ItemId, const FString& Quantity, const int64& SteamId, const int64& RequestId);

private:
    virtual void Activate() override;
	FString Var_Key;
	int32 Var_AppId;
	int64 Var_ItemId;
	FString Var_Quantity;
	int64 Var_SteamId;
	int64 Var_RequestId;
};
