// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_GetItemDefs.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_GetItemDefs : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:
	
	//GetItemDefs is used to retrieve the itemdefs for a given application.
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|Inventory", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_GetItemDefs* GetItemDefs(const FString& Key, const int32& AppId, const FString& ModifiedSince, const TArray<int64>& ItemDefIds, const TArray<int64>& WorkshopIds, const int32& CacheMaxAgeSeconds = -1);

private:
    virtual void Activate() override;
    FString Var_Key;
	int32 Var_AppId;
	FString Var_ModifiedSince;
	TArray<int64> Var_ItemDefIds;
	TArray<int64> Var_WorkshopIds;
	int32 Var_CacheMaxAgeSeconds;
};
