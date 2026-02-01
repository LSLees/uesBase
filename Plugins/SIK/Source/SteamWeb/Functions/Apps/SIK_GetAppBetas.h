// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_GetAppBetas.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_GetAppBetas : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:
	//Gets all of the beta branches for the specified application.
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|Apps", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_GetAppBetas* GetAppBetas(const FString& Key, const int32& AppId);

private:
    virtual void Activate() override;
	FString Var_Key;
	int32 Var_AppId;
};
