// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_ExchangeItem.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_ExchangeItem : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:

	/*
	*ExchangeItem
	POST https://partner.steam-api.com/IInventoryService/ExchangeItem/v1/
	Name	Type	Required	Description
	key	string	✔	Steamworks Web API publisher authentication key.
	appid	uint32	✔	The ID of the application associated with the item.
	steamid	uint64	✔	SteamID of the player that owns the items.
	materialsitemid	uint64	✔	The unique ID an item in the player's inventory to be converted to the target item type. This should be provided as materialsitemid[0], materialsitemid[1], etc.
	materialsquantity	uint32	✔	The quantity of the matching item that should be used in this recipe. This array must be the same length as materialsitemid.
	outputitemdefid	uint64	✔	The ItemDef of the item to be created.

	ExchangeItem is used for crafting - converting items using a predefined recipe. A successful exchange destroys the set of items required by the crafting recipe, and adds a new instance of the target itemdef to the player's inventory.

	The target item definition must have one or more crafting recipes declared in the exchange attribute. Recipes declare the number and type of items required to create the target item. If the set of items provided in the ExchangeItems call does not satisfy any recipe, the call fails and no changes are made to the inventory.

	See the Inventory Service Schema documentation for more detail on crafting recipes.

	The crafting operation will take trade and market restrictions into account; the created item will have the latest trade restriction of any item used to create it.

	If successful, this call returns an encoded JSON blob that lists the items that were changed by this call - the consumed items and the newly created one.
	NOTE: Never distribute your Steam API key with your game. This API must be called from a secure server, and cannot be used directly by clients.

	A client SDK version of this call is also available: ISteamInventory::ExchangeItems
	*/
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|Inventory", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_ExchangeItem* ExchangeItem(const FString& Key, const int32& AppId, const int64& SteamId, const TArray<int64>& MaterialsItemId, const TArray<int32>& MaterialsQuantity, const int64& OutputItemDefId);


private:
    virtual void Activate() override;
	FString Var_Key;
	int32 Var_AppId;
	int64 Var_SteamId;
	TArray<int64> Var_MaterialsItemId;
	TArray<int32> Var_MaterialsQuantity;
	int64 Var_OutputItemDefId;
};
