// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_UpdateAppUGCBan.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_UpdateAppUGCBan : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:

	//Adds/updates/removes a user's UGC ban in the app. Set expiration_time = 0 to remove the ban.
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|PublishedFile", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_UpdateAppUGCBan* UpdateAppUGCBan(const FString& Key, const int64& SteamId, const int32& AppId, const int32& ExpirationTime, const FString& Reason);

private:
    virtual void Activate() override;
	FString Var_Key;
	int64 Var_SteamId;
	int32 Var_AppId;
	int32 Var_ExpirationTime;
	FString Var_Reason;
};
