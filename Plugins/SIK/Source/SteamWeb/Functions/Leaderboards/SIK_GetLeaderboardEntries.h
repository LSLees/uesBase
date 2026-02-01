// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_GetLeaderboardEntries.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_GetLeaderboardEntries : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:
	
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|Leaderboards", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_GetLeaderboardEntries* GetLeaderboardEntries(const FString& Key, const int32& AppId, const int32& RangeStart, const int32& RangeEnd, const int32& LeaderboardId, const FString& DataRequest, const int64& SteamId = -1);

private:
    virtual void Activate() override;
	FString Var_Key;
	int32 Var_AppId;
	int32 Var_RangeStart;
	int32 Var_RangeEnd;
	int32 Var_LeaderboardId;
	FString Var_DataRequest;
	int64 Var_SteamId;
};
