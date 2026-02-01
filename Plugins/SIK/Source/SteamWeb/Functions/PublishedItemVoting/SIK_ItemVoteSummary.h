// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_ItemVoteSummary.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_ItemVoteSummary : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:
	
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|PublishedItemVoting", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_ItemVoteSummary* ItemVoteSummary(const FString& Key, const int64& SteamId, const int32& AppId, const int32& Count, int64 PublishedFileId0 = -1);

private:
    virtual void Activate() override;
	FString Var_Key;
	int64 Var_SteamId;
	int32 Var_AppId;
	int32 Var_Count;
	int64 Var_PublishedFileId0;
};
