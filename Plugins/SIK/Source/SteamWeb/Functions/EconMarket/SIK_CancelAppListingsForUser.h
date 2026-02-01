// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_CancelAppListingsForUser.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_CancelAppListingsForUser : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:

	//Cancels all of a user's listings for a specific app ID.
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|EconMarket", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_CancelAppListingsForUser* CancelAppListingsForUser(const FString& Key, const int32& AppId, const int64& SteamId, bool bSynchronous);
private:
    virtual void Activate() override;
	FString Var_Key;
	int32 Var_AppId;
	int64 Var_SteamId;
	bool Var_bSynchronous;
};
