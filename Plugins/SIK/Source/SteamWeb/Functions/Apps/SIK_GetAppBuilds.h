// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_GetAppBuilds.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_GetAppBuilds : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:

	//Gets an applications build history.
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|Apps", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_GetAppBuilds* GetAppBuilds(const FString& Key, const int32& AppId, const int32& Count);

private:
    virtual void Activate() override;
	FString Var_Key;
	int32 Var_AppId;
	int32 Var_Count;
};
