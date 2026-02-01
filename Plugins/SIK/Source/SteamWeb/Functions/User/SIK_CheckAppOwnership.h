// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_CheckAppOwnership.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_CheckAppOwnership : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:
	
	//Checks if the specified user owns the app.
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|User", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_CheckAppOwnership* CheckAppOwnership(const FString& Key, const int64& SteamId, const int32& AppId);

private:
    virtual void Activate() override;
	FString Var_Key;
	int64 Var_SteamId;
	int32 Var_AppId;
};
