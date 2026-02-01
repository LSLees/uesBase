// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_GetBadges.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_GetBadges : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:

	//Gets badges that are owned by a specific user.
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|Player", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_GetBadges* GetBadges(const FString& Key, const int64& SteamId);

private:
    virtual void Activate() override;
	FString Var_Key;
	int64 Var_SteamId;
};
