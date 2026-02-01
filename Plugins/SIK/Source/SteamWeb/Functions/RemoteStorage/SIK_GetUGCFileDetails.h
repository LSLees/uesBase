// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_GetUGCFileDetails.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_GetUGCFileDetails : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|RemoteStorage", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_GetUGCFileDetails* GetUGCFileDetails(const FString& Key, const int64& SteamId = -1, const int64& UgcId = 0, const int32& AppId = 0);

private:
    virtual void Activate() override;
	FString Var_Key;
	int64 Var_SteamId;
	int64 Var_UgcId;
	int32 Var_AppId;
};
