// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_GetLobbyData.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_GetLobbyData : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:
	
	//GetLobbyData will return any lobby data and member list for the lobby ID.
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|LobbyMatchmaking", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_GetLobbyData* GetLobbyData(const FString& Key, const int32& AppId, const int64& SteamIdLobby);

private:
    virtual void Activate() override;
	FString Var_Key;
	int32 Var_AppId;
	int64 Var_SteamIdLobby;
};
