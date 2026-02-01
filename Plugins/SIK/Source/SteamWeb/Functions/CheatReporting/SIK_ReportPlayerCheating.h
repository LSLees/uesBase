// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_ReportPlayerCheating.generated.h"

USTRUCT(BlueprintType)
struct FSIK_PlayerCheatingOptional
{
	GENERATED_BODY()

	//The Steam ID of the user or game server who is reporting the cheating.
	UPROPERTY(BlueprintReadWrite, Category = "Steam Integration Kit|Web|Cheat Reporting")
	int64 SteamIdReporter = -1;

	//App specific data about the type of cheating set by developer. (ex 1 = Aimbot, 2 = Wallhack, 3 = Griefing)
	UPROPERTY(BlueprintReadWrite, Category = "Steam Integration Kit|Web|Cheat Reporting")
	int64 AppData = -1;

	//Extra information about the source of the cheating - was it a heuristic.
	UPROPERTY(BlueprintReadWrite, Category = "Steam Integration Kit|Web|Cheat Reporting")
	bool bHeuristic = false;

	//Extra information about the source of the cheating - was it a detection.
	UPROPERTY(BlueprintReadWrite, Category = "Steam Integration Kit|Web|Cheat Reporting")
	bool bDetection = false;

	//Extra information about the source of the cheating - was it a player report.
	UPROPERTY(BlueprintReadWrite, Category = "Steam Integration Kit|Web|Cheat Reporting")
	bool bPlayerReport = false;

	//Don't return reportid. This should only be passed if you don't intend to issue a ban based on this report.
	UPROPERTY(BlueprintReadWrite, Category = "Steam Integration Kit|Web|Cheat Reporting")
	bool bNoReportId = false;

	//Extra information about state of game - was it a specific type of game play or game mode. (0 = generic)
	UPROPERTY(BlueprintReadWrite, Category = "Steam Integration Kit|Web|Cheat Reporting")
	int32 GameMode = -1;

	//Extra information indicating how far back the game thinks is interesting for this user. Unix epoch time (time since Jan 1st, 1970).
	UPROPERTY(BlueprintReadWrite, Category = "Steam Integration Kit|Web|Cheat Reporting")
	int32 SuspicionStartTime = -1;

	//Level of severity of bad action being reported. Scale set by developer.
	UPROPERTY(BlueprintReadWrite, Category = "Steam Integration Kit|Web|Cheat Reporting")
	int32 Severity = -1;
};
UCLASS()
class STEAMWEB_API USIK_ReportPlayerCheating : public USIK_BaseWebApi
{
	GENERATED_BODY()

public:

	//ReportPlayerCheating is designed to gather community reports of cheating, where one player reports another player within the game.
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|Cheat Reporting", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_ReportPlayerCheating* ReportPlayerCheating(const FString& Key, const int64& SteamId, const int32& AppId, FSIK_PlayerCheatingOptional Optional);

private:
	FString Var_Key;
	int64 Var_SteamId;
	int32 Var_AppId;
	FSIK_PlayerCheatingOptional Var_Optional;
	virtual void Activate() override;
};
