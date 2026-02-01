// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_GetFriendList.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_GetFriendList : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:
	
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|User", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_GetFriendList* GetFriendList(const FString& Key, const int64& SteamId, const FString& Relationship);

private:
    virtual void Activate() override;
	FString Var_Key;
	int64 Var_SteamId;
	FString Var_Relationship;
};
