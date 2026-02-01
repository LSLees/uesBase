// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_GetGameServerPlayerStatsForGame.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_GetGameServerPlayerStatsForGame : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:
	
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|GameServerStats", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_GetGameServerPlayerStatsForGame* GetGameServerPlayerStatsForGame(const FString& Key, const int64& GameId, const int32& AppId, const FString& RangeStart, const FString& RangeEnd, const int32& MaxResults = -1);

private:
    virtual void Activate() override;
	FString Var_Key;
	int64 Var_GameId;
	int32 Var_AppId;
	FString Var_RangeStart;
	FString Var_RangeEnd;
	int32 Var_MaxResults;
};
