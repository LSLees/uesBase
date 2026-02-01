// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_RemovePlayerGameBan.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_RemovePlayerGameBan : public USIK_BaseWebApi
{
	GENERATED_BODY()

public:

	//Remove a game ban on a player.
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|Cheat Reporting", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_RemovePlayerGameBan* RemovePlayerGameBan(const FString& Key, const int64& SteamID, const int32& AppID);

private:
	FString Var_Key;
	int64 Var_SteamID;
	int32 Var_AppID;
	virtual void Activate() override;
};
