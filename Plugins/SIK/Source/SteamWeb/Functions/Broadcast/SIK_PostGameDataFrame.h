// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_PostGameDataFrame.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_PostGameDataFrame : public USIK_BaseWebApi
{
	GENERATED_BODY()

public:
	//Add a game meta data frame to broadcast
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|Broadcast", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_PostGameDataFrame* PostGameDataFrame(const FString& Key, const int32& AppID, const int64& SteamID, const int64& BroadcastId, const FString& FrameData);

private:
	FString Var_Key;
	int32 Var_AppID;
	int64 Var_SteamID;
	int64 Var_BroadcastId;
	FString Var_FrameData;
	virtual void Activate() override;
};
