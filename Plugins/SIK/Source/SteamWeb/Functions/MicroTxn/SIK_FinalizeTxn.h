// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_FinalizeTxn.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_FinalizeTxn : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:
	//Completes a purchase that was started by the InitTxn API.
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|MicroTxn", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_FinalizeTxn* FinalizeTxn(const FString& Key, const int64& OrderId, const int32& AppId, bool bUseSandBox = false);

private:
    virtual void Activate() override;
	FString Var_Key;
	int64 Var_OrderId;
	int32 Var_AppId;
	bool Var_bUseSandBox;
};
