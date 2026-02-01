// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_Consolidate.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_Consolidate : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:
	/*Consolidate
	POST https://partner.steam-api.com/IInventoryService/Consolidate/v1/
	Name	Type	Required	Description
	key	string	✔	Steamworks Web API publisher authentication key.
	appid	uint32	✔	
	steamid	uint64	✔	
	itemdefid	uint64 array	✔	
	force	bool		

	Consolidate items of the given type within an user's inventory.

	Whenever items are combined into a stack, the resulting stack takes the market and trade restriction values of the most-restricted item. The Consolidate action ignores any item with an active market or trade restriction, unless 'force' is set to true.

	NOTE: This call requires a publisher API key to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!*/
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|Inventory", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_Consolidate* Consolidate(const FString& Key, const int32& AppId, const int64& SteamId, const TArray<int64>& ItemDefIds, const bool& Force);

private:
    virtual void Activate() override;
	FString Var_Key;
	int32 Var_AppId;
	int64 Var_SteamId;
	TArray<int64> Var_ItemDefIds;
	bool Var_Force;
};
