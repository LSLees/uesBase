// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_GetOwnedGames.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_GetOwnedGames : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:
	
	//Returns a list of games owned by the player if their owned games/game details are visible to you.
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|Player", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_GetOwnedGames* GetOwnedGames(const FString& Key, const int64& SteamId, const bool& IncludeAppInfo, const bool& IncludePlayedFreeGames, const int32& AppIdsFilter);

private:
    virtual void Activate() override;
	FString Var_Key;
	int64 Var_SteamId;
	bool Var_IncludeAppInfo;
	bool Var_IncludePlayedFreeGames;
	int32 Var_AppIdsFilter;
	
};
