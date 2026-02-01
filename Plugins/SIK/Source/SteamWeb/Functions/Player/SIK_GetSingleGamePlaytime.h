// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_GetSingleGamePlaytime.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_GetSingleGamePlaytime : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:
	
	//Gets information about a player's playtime for a single appID. The WebAPI key must be associated with this appID to get back results.
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|Player", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_GetSingleGamePlaytime* GetSingleGamePlaytime(const FString& Key, const int64& SteamId, const int32& AppId);

private:
    virtual void Activate() override;
	FString Var_Key;
	int64 Var_SteamId;
	int32 Var_AppId;
};
