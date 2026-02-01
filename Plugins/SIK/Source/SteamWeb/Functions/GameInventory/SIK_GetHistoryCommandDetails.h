// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_GetHistoryCommandDetails.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_GetHistoryCommandDetails : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|GameInventory", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_GetHistoryCommandDetails* GetHistoryCommandDetails(const FString& Key, const int32& AppId, const int64& SteamId, const FString& Command, const int64& ContextId, const FString& Arguments);

private:
    virtual void Activate() override;
	FString Var_Key;
	int32 Var_AppId;
	int64 Var_SteamId;
	FString Var_Command;
	int64 Var_ContextId;
	FString Var_Arguments;
};
