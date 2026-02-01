// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_GetLeaderboardsForGame.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_GetLeaderboardsForGame : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:
	
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|Leaderboards", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_GetLeaderboardsForGame* GetLeaderboardsForGame(const FString& Key, const int32& AppId);

private:
    virtual void Activate() override;
	FString Var_Key;
	int32 Var_AppId;
};
