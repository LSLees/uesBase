// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_RankedByTrend.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_RankedByTrend : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:
	
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|PublishedItemSearch", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_RankedByTrend* RankedByTrend(const FString& Key, const int64& SteamId, const int32& AppId, const int32& StartIdx, const int32& Count, const int32& TagCount, const int32& UserTagCount, const bool& HasAppAdminAccess, const int32& FileType = -1, const int32& Days = -1, const FString& Tag0 = "", const FString& UserTag0 = "");

private:
    virtual void Activate() override;
	FString Var_Key;
	int64 Var_SteamId;
	int32 Var_AppId;
	int32 Var_StartIdx;
	int32 Var_Count;
	int32 Var_TagCount;
	int32 Var_UserTagCount;
	bool Var_HasAppAdminAccess;
	int32 Var_FileType;
	int32 Var_Days;
	FString Var_Tag0;
	FString Var_UserTag0;
};
