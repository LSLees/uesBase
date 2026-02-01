// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_RequestVacStatusForUser.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_RequestVacStatusForUser : public USIK_BaseWebApi
{
	GENERATED_BODY()
	
public:
	//Checks a user's VAC ban status and verifies a user's VAC session status. If verification fails, then do not let the user matchmake into a secure game.
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|Cheat Reporting", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_RequestVacStatusForUser* RequestVacStatusForUser(const FString& Key, const int64& SteamId, const int32& AppId, int64 SessionId = -1);

private:
	FString Var_Key;
	int64 Var_SteamId;
	int32 Var_AppId;
	int64 Var_SessionId;
	virtual void Activate() override;
};
