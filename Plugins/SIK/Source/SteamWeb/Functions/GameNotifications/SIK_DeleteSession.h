// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_DeleteSession.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_DeleteSession : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:

	//Delete an active async game session. This will remove all notifications to any user that is part of the game session.
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|GameNotifications", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_DeleteSession* DeleteSession(const FString& Key, const int64& SessionId, const int32& AppId, const int64& SteamId);

private:
    virtual void Activate() override;
	FString Var_Key;
	int64 Var_SessionId;
	int32 Var_AppId;
	int64 Var_SteamId;
};
