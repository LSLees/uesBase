// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_ReportCheatData.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_ReportCheatData : public USIK_BaseWebApi
{
	GENERATED_BODY()

public:
	//Reports cheat data. Only use on test account that is running the game but not in a multiplayer session.
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|Cheat Reporting", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_ReportCheatData* ReportCheatData(const FString& Key, const int64& SteamId, const int32& AppId, const FString& PathAndFileName, const FString& WebCheatUrl, const int64& TimeNow, const int64& TimeStarted, const int64& TimeStopped, const FString& CheatName, const int32& GameProcessId, const int32& CheatProcessId, const int64& CheatParam1, const int64& CheatParam2);
private:
	FString Var_Key;
	int64 Var_SteamId;
	int32 Var_AppId;
	FString Var_PathAndFileName;
	FString Var_WebCheatUrl;
	int64 Var_TimeNow;
	int64 Var_TimeStarted;
	int64 Var_TimeStopped;
	FString Var_CheatName;
	int32 Var_GameProcessId;
	int32 Var_CheatProcessId;
	int64 Var_CheatParam1;
	int64 Var_CheatParam2;
	virtual void Activate() override;
};
