// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_GetFinalizedContributors.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_GetFinalizedContributors : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:

	//Get a list of contributors for a specific app/workshop item combination.
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|Workshop", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_GetFinalizedContributors* GetFinalizedContributors(const FString& Key, const int32& AppId, const int32& GameItemId);
	
private:
    virtual void Activate() override;
	FString Var_Key;
	int32 Var_AppId;
	int32 Var_GameItemId;
};
