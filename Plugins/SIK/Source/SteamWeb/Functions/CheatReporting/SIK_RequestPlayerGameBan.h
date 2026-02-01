// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_RequestPlayerGameBan.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_RequestPlayerGameBan : public USIK_BaseWebApi
{
	GENERATED_BODY()

public:

	//Requests a game ban on a specific player.
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|Cheat Reporting", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_RequestPlayerGameBan* RequestPlayerGameBan(const FString& Key, const int64& SteamID, const int32& AppID, const int64& ReportId, const FString& CheatDescription, const int32& Duration, bool bDelayBan, const int32& Flags);

private:
	FString Var_Key;
	int64 Var_SteamID;
	int32 Var_AppID;
	int64 Var_ReportId;
	FString Var_CheatDescription;
	int32 Var_Duration;
	bool Var_bDelayBan;
	int32 Var_Flags;
	virtual void Activate() override;
};
