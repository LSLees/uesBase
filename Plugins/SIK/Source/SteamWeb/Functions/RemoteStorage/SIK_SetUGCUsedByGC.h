// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_SetUGCUsedByGC.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_SetUGCUsedByGC : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:
	
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|RemoteStorage", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_SetUGCUsedByGC* SetUGCUsedByGC(const FString& Key, const int64& SteamId, const int64& UgcId, const int32& AppId, const bool& Used);
	

private:
    virtual void Activate() override;
	FString Var_Key;
	int64 Var_SteamId;
	int64 Var_UgcId;
	int32 Var_AppId;
	bool Var_Used;
};
