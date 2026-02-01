// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_GetUserInfo.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_GetUserInfo : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:
	
	//Retrieves details for a user's purchasing info.
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|MicroTxn", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_GetUserInfo* GetUserInfo(const FString& Key, const int32& AppId, const int64& SteamId = -1, const FString& IpAddress = "", bool bUseSandBox = false);

private:
    virtual void Activate() override;
	FString Var_Key;
	int32 Var_AppId;
	int64 Var_SteamId;
	FString Var_IpAddress;
	bool Var_bUseSandBox;
};
