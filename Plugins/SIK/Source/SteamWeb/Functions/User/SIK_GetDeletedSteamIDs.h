// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_GetDeletedSteamIDs.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_GetDeletedSteamIDs : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:
	//You can use GetDeletedSteamIDs to retrieve a list of deleted accounts that owned your game(s) before deletion. This API was created to allow for the deletion of user related data for GDPR and other personal information related purposes.
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|User", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_GetDeletedSteamIDs* GetDeletedSteamIDs(const FString& Key, const int64& RowVersion);

private:
    virtual void Activate() override;
	FString Var_Key;
	int64 Var_RowVersion;
};
