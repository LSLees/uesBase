// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_GetServersAtAddress.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_GetServersAtAddress : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|Apps", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_GetServersAtAddress* GetServersAtAddress(const FString& Addr);

private:
    virtual void Activate() override;
	FString Var_Addr;
};
