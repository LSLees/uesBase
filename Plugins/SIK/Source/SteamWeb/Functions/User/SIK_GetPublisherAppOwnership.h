// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_GetPublisherAppOwnership.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_GetPublisherAppOwnership : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:
	
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|User", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_GetPublisherAppOwnership* GetPublisherAppOwnership(const FString& Key, const int64& SteamId);

private:
    virtual void Activate() override;
	FString Var_Key;
	int64 Var_SteamId;
};
