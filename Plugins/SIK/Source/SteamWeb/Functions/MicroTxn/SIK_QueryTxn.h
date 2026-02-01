// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_QueryTxn.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_QueryTxn : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:
	
	//Query the status of an order that was previously created with InitTxn.
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|MicroTxn", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_QueryTxn* QueryTxn(const FString& Key, const int32& AppId, const int64& OrderId = -1, const int64& TransId = -1, bool bUseSandBox = false);

private:
    virtual void Activate() override;
	FString Var_Key;
	int32 Var_AppId;
	int64 Var_OrderId;
	int64 Var_TransId;
	bool Var_bUseSandBox;
};
