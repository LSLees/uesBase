// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_GetItemDailyRevenue.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_GetItemDailyRevenue : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:
	
	//Get item revenue for a specific app/item definition for a date range.
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|Workshop", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_GetItemDailyRevenue* GetItemDailyRevenue(const FString& Key, const int32& AppId, const int32& ItemId, const int32& DateStart, const int32& DateEnd);

private:
    virtual void Activate() override;
	FString Var_Key;
	int32 Var_AppId;
	int32 Var_ItemId;
	int32 Var_DateStart;
	int32 Var_DateEnd;
};
