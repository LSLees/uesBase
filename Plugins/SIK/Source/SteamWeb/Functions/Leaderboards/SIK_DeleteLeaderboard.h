// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_DeleteLeaderboard.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_DeleteLeaderboard : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:
	/*
	*DeleteLeaderboard
	POST https://partner.steam-api.com/ISteamLeaderboards/DeleteLeaderboard/v1/
	Name	Type	Required	Description
	key	string	✔	Steamworks Web API publisher authentication key.
	appid	uint32	✔	appid of game
	name	string	✔	name of the leaderboard to delete



	NOTE: This call requires a publisher API key to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!
	*/
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|Leaderboards", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_DeleteLeaderboard* DeleteLeaderboard(const FString& Key, const int32& AppId, const FString& Name);


private:
    virtual void Activate() override;
	FString Var_Key;
	int32 Var_AppId;
	FString Var_Name;
};
