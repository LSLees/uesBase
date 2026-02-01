// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_GetNumberOfCurrentPlayers.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_GetNumberOfCurrentPlayers : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:
	
	//Gets the total number of players currently active in the specified app on Steam.
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|UserStats", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_GetNumberOfCurrentPlayers* GetNumberOfCurrentPlayers(const int32& AppId);

private:
    virtual void Activate() override;
	int32 Var_AppId;
	
};
