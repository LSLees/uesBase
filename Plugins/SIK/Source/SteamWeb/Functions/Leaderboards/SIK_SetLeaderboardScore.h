// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_SetLeaderboardScore.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_SetLeaderboardScore : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:
	
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|Leaderboards", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_SetLeaderboardScore* SetLeaderboardScore(const FString& Key, const int32& AppId, const int32& LeaderboardId, const int64& SteamId, const int32& Score, const FString& ScoreMethod, const TArray<uint8>& Details);
	
private:
    virtual void Activate() override;
	FString Var_Key;
	int32 Var_AppId;
	int32 Var_LeaderboardId;
	int64 Var_SteamId;
	int32 Var_Score;
	FString Var_ScoreMethod;
	TArray<uint8> Var_Details;
};
