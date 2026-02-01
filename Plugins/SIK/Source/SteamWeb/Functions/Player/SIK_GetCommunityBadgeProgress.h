// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_GetCommunityBadgeProgress.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_GetCommunityBadgeProgress : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:
	
	//Gets all the quests needed to get the specified badge, and which are completed.
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|Player", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_GetCommunityBadgeProgress* GetCommunityBadgeProgress(const FString& Key, const int64& SteamId, const int32& BadgeId);

private:
    virtual void Activate() override;
	FString Var_Key;
	int64 Var_SteamId;
	int32 Var_BadgeId;
};
