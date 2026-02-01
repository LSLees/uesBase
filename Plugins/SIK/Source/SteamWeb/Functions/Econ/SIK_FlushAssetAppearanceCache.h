// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_FlushAssetAppearanceCache.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_FlushAssetAppearanceCache : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:

	//Flushes the display cache for assets. This will result in calls to GetAssetClassInfo for each asset class the next time it is displayed.
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|Econ", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_FlushAssetAppearanceCache* FlushAssetAppearanceCache(const FString& Key, const int32& AppId);

private:
    virtual void Activate() override;
	FString Var_Key;
	int32 Var_AppId;
};
