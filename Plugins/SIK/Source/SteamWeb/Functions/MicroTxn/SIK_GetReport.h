// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_GetReport.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_GetReport : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:
	//Steam offers transaction reports that can be downloaded for reconciliation purposes. These reports show detailed information about each transaction that affects the settlement of funds into your accounts.
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|MicroTxn", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_GetReport* GetReport(const FString& Key, const int32& AppId, const FString& Type, const FString& Time, const int32& MaxResults = 1000, bool bUseSandBox = false);

private:
    virtual void Activate() override;
	FString Var_Key;
	int32 Var_AppId;
	FString Var_Type;
	FString Var_Time;
	int32 Var_MaxResults;
	bool Var_bUseSandBox;
};
