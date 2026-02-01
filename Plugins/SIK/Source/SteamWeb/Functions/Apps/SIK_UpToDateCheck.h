// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_UpToDateCheck.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_UpToDateCheck : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:
	
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|Apps", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_UpToDateCheck* UpToDateCheck(const int32& AppId, const int32& Version);

private:
    virtual void Activate() override;
	int32 Var_AppId;
	int32 Var_Version;
};
