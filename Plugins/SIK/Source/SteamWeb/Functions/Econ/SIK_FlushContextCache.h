// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_FlushContextCache.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_FlushContextCache : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:

	//Flushes the cache for a user's inventory in a specific app context
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|Econ", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_FlushContextCache* FlushContextCache(const FString& Key, const int32& AppId);

private:
	virtual void Activate() override;
	FString Var_Key;
	int32 Var_AppId;
};
