// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_CreateAccount.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_CreateAccount : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:

	//Creates a persistent game server account
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|GameServers", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_CreateAccount* CreateAccount(const FString& Key, const int32& AppId, const FString& Memo);

private:
    virtual void Activate() override;
	FString Var_Key;
	int32 Var_AppId;
	FString Var_Memo;
};
