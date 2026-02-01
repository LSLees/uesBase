// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_GetAccountList.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_GetAccountList : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:
	//Gets a list of game server accounts with their logon tokens
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|GameServers", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_GetAccountList* GetAccountList(const FString& Key);

private:
    virtual void Activate() override;
	FString Var_Key;
};
