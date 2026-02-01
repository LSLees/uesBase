// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_GetUserHistory.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_GetUserHistory : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|GameInventory", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_GetUserHistory* GetUserHistory(const FString& Key, const int32& AppId, const int64& SteamId, const int64& ContextId, const int32& StartTime, const int32& EndTime);

private:
    virtual void Activate() override;
	FString Var_Key;
	int32 Var_AppId;
	int64 Var_SteamId;
	int64 Var_ContextId;
	int32 Var_StartTime;
	int32 Var_EndTime;
};
