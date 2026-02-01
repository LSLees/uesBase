// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_GetExportedAssetsForUser.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_GetExportedAssetsForUser : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:
	// Retrieves the list of assets from another game to import. 
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|Economy", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_GetExportedAssetsForUser* GetExportedAssetsForUser(const FString& Key, const int64& SteamId, const int32& AppId, const int64& ContextId);

private:
    virtual void Activate() override;
	FString Var_Key;
	int64 Var_SteamId;
	int32 Var_AppId;
	int64 Var_ContextId;
};
