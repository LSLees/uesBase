// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_GetAppList.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_GetAppList : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:
	
	//Gets the complete list of public apps.
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|Apps", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_GetAppList* GetAppList();

private:
    virtual void Activate() override;
};
