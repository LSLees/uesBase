// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_GetInventory.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_GetInventory : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:
	
	//GetInventory is used to retrieve a user's inventory.
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|Inventory", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_GetInventory* GetInventory(const FString& Key, const int32& AppId, const int64& SteamId);

private:
    virtual void Activate() override;
	FString Var_Key;
	int32 Var_AppId;
	int64 Var_SteamId;
	
};
