// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_GetTradeHistory.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_GetTradeHistory : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:

	//Gets a history of trades
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|Econ", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_GetTradeHistory* GetTradeHistory(const FString& Key, const int32& MaxTrades, const int32& StartAfterTime, const int64& StartAfterTradeId, bool bNavigatingBack, bool bGetDescriptions, const FString& Language, bool bIncludeFailed, bool bIncludeTotal);

private:
    virtual void Activate() override;
	FString Var_Key;
	int32 Var_MaxTrades;
	int32 Var_StartAfterTime;
	int64 Var_StartAfterTradeId;
	bool Var_bNavigatingBack;
	bool Var_bGetDescriptions;
	FString Var_Language;
	bool Var_bIncludeFailed;
	bool Var_bIncludeTotal;
};
