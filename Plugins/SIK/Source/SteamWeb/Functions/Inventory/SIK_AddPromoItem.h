// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_AddPromoItem.generated.h"

USTRUCT(BlueprintType)
struct FSIK_AddPromoItemOptional
{
	GENERATED_BODY()

	//Should notify the user that the item was added to their Steam Inventory.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Steam Integration Kit|Web|Inventory")
	bool bNotify = false;

	//Clients may provide a unique identifier for a request to perform at most once execution. When a requestid is resubmitted, it will not cause the work to be performed again; the response message will be the current state of items affected by the original successful execution.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Steam Integration Kit|Web|Inventory")
	int64 RequestId = -1;
};
UCLASS()
class STEAMWEB_API USIK_AddPromoItem : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:
	//Adds a promo item to a user's inventory. If called without the itemdefid parameter, checks for and grants available promo items for the given player.
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|Inventory", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_AddPromoItem* AddPromoItem(const FString& Key, const int32& AppId, const int64& ItemDefId, const int64& SteamId, FSIK_AddPromoItemOptional Optional);

private:
    virtual void Activate() override;
	FString Var_Key;
	int32 Var_AppId;
	int64 Var_ItemDefId;
	int64 Var_SteamId;
	FSIK_AddPromoItemOptional Var_Optional;
};
