// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_FindOrCreateLeaderboard.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_FindOrCreateLeaderboard : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:
	
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|Leaderboards", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_FindOrCreateLeaderboard* FindOrCreateLeaderboard(const FString& Key, const int32& AppId, const FString& Name, const FString& SortMethod = "Ascending", const FString& DisplayType = "Numeric", const bool& CreateIfNotFound = true, const bool& OnlyTrustedWrites = false, const bool& OnlyFriendsReads = false);

private:
    virtual void Activate() override;
	FString Var_Key;
	int32 Var_AppId;
	FString Var_Name;
	FString Var_SortMethod;
	FString Var_DisplayType;
	bool Var_CreateIfNotFound;
	bool Var_OnlyTrustedWrites;
	bool Var_OnlyFriendsReads;
};
