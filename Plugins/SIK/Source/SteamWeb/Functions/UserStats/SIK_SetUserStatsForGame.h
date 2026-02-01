// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_SetUserStatsForGame.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_SetUserStatsForGame : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:

	//Sets a stat for the specified user for the game.
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|UserStats", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_SetUserStatsForGame* SetUserStatsForGame(const FString& Key, const int64& SteamId, const int32& AppId, const int32& Count, const FString& Name0, const int32& Value0);

private:
    virtual void Activate() override;
	FString Var_Key;
	int64 Var_SteamId;
	int32 Var_AppId;
	int32 Var_Count;
	FString Var_Name0;
	int32 Var_Value0;	
};
