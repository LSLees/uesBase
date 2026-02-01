// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_FinalizeAssetTransaction.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_FinalizeAssetTransaction : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:
	
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|Economy", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_FinalizeAssetTransaction* FinalizeAssetTransaction(const FString& Key, const int32& AppId, const int64& SteamId, const FString& TxnId, const FString& Language);

private:
    virtual void Activate() override;
	FString Var_Key;
	int32 Var_AppId;
	int64 Var_SteamId;
	FString Var_TxnId;
	FString Var_Language;
};
