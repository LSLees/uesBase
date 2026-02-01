// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_RemoveUserFromLobby.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_RemoveUserFromLobby : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:
	
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|LobbyMatchmaking", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_RemoveUserFromLobby* RemoveUserFromLobby(const FString& Key, const int32& AppId, const int64& SteamIdToRemove, const int64& SteamIdLobby, const FString& InputJson = "");

private:
    virtual void Activate() override;
	FString Var_Key;
	int32 Var_AppId;
	int64 Var_SteamIdToRemove;
	int64 Var_SteamIdLobby;
	FString Var_InputJson;
};
