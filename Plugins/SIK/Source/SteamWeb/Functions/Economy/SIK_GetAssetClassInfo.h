// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_GetAssetClassInfo.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_GetAssetClassInfo : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:
	
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|Economy", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_GetAssetClassInfo* GetAssetClassInfo(const FString& Key, const int32& AppId, const FString& Language, const int32& ClassCount, const int64& ClassId0, const int64& InstanceId0);

private:
    virtual void Activate() override;
	FString Var_Key;
	int32 Var_AppId;
	FString Var_Language;
	int32 Var_ClassCount;
	int64 Var_ClassId0;
	int64 Var_InstanceId0;
};
