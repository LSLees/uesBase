// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_AddItem.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_AddItem : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:
	//AddItem is used to add new items directly in a user's inventory. For each itemdef, an instance of that type is created and added to the target account.
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|Inventory", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_AddItem* AddItem(const FString& Key, const int32& AppId, const TArray<int64>& ItemDefIds, const FString& ItemPropsJson, const int64& SteamId, const bool& Notify, const int64& RequestId, const bool& TradeRestriction);

private:
    virtual void Activate() override;
	FString Var_Key;
	int32 Var_AppId;
	TArray<int64> Var_ItemDefIds;
	FString Var_ItemPropsJson;
	int64 Var_SteamId;
	bool Var_Notify;
	int64 Var_RequestId = 0;
	bool Var_TradeRestriction = false;
};
