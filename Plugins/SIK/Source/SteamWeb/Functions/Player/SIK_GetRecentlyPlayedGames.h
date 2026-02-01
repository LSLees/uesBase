// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_GetRecentlyPlayedGames.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_GetRecentlyPlayedGames : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:
	
	//Gets information about a player's recently played games.
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|Player", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_GetRecentlyPlayedGames* GetRecentlyPlayedGames(const FString& Key, const int64& SteamId, const int32& Count);

private:
    virtual void Activate() override;
	FString Var_Key;
	int64 Var_SteamId;
	int32 Var_Count;
};
