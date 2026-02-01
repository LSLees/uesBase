// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_GetCheatingReports.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_GetCheatingReports : public USIK_BaseWebApi
{
	GENERATED_BODY()

public:

	//Get a list of cheating reports submitted for this app.
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|Cheat Reporting", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_GetCheatingReports* GetCheatingReports(const FString& Key, const int32& AppId, const int32& TimeEnd, const int32& TimeBegin, const int64& ReportIdMin, bool bIncludeReports, bool bIncludeBans, const int64& SteamId);

private:
	FString Var_Key;
	int32 Var_AppId;
	int32 Var_TimeEnd;
	int32 Var_TimeBegin;
	int64 Var_ReportIdMin;
	bool Var_bIncludeReports;
	bool Var_bIncludeBans;
	int64 Var_SteamId;
	virtual void Activate() override;
};
