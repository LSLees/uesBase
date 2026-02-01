// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_SupportGetAssetHistory.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_SupportGetAssetHistory : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|GameInventory", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_SupportGetAssetHistory* SupportGetAssetHistory(const FString& Key, const int32& AppId, const int64& AssetId, const int64& ContextId);

private:
    virtual void Activate() override;
	FString Var_Key;
	int32 Var_AppId;
	int64 Var_AssetId;
	int64 Var_ContextId;
};
