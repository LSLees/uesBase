// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_GetGlobalStatsForGame.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_GetGlobalStatsForGame : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:
	
	//Retrieves the global stats percentages for the specified app.
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|UserStats", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_GetGlobalStatsForGame* GetGlobalStatsForGame(const int32& AppId, const int32& Count, const FString& Name, const int32& StartDate = -1, const int32& EndDate = -1);

private:
    virtual void Activate() override;
	int32 Var_AppId;
	int32 Var_Count;
	FString Var_Name;
	int32 Var_StartDate;
	int32 Var_EndDate;
};
