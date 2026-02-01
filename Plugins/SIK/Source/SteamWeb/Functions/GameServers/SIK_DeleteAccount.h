// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_DeleteAccount.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_DeleteAccount : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:

	//Deletes a persistent game server account
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|GameServers", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_DeleteAccount* DeleteAccount(const FString& Key, const int64& SteamId);

private:
    virtual void Activate() override;
	FString Var_Key;
	int64 Var_SteamId;
};
