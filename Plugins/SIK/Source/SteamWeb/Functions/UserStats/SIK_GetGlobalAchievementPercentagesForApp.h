// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_GetGlobalAchievementPercentagesForApp.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_GetGlobalAchievementPercentagesForApp : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:

	//Retrieves the global achievement percentages for the specified app.
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|UserStats", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_GetGlobalAchievementPercentagesForApp* GetGlobalAchievementPercentagesForApp(const int64& GameId);

private:
    virtual void Activate() override;
	int64 Var_GameId;
};
