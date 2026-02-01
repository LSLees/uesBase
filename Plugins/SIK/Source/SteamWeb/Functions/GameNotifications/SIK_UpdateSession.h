// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_UpdateSession.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_UpdateSession : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:
	//Update a game session whenever the state of the game changes.
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|GameNotifications", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_UpdateSession* UpdateSession(const FString& Key, const int64& SessionId, const int32& AppId, const FString& Title, const FString& Users, const int64& SteamId);

private:
    virtual void Activate() override;
	FString Var_Key;
	int64 Var_SessionId;
	int32 Var_AppId;
	FString Var_Title;
	FString Var_Users;
	int64 Var_SteamId;
};
