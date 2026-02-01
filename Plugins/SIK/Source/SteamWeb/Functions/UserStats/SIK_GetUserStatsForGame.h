// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_GetUserStatsForGame.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_GetUserStatsForGame : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:

	//Gets the list of stats that the specified user has set in an app.
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|UserStats", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_GetUserStatsForGame* GetUserStatsForGame(const FString& Key, const int64& SteamId, const int32& AppId);

private:
    virtual void Activate() override;
	FString Var_Key;
	int64 Var_SteamId;
	int32 Var_AppId;
};
