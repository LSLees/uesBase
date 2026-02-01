// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_RefundTxn.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_RefundTxn : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:
	
	//Tells Steam to refund a user for a purchase. Refunds can only be made for the full value of the original order.
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|MicroTxn", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_RefundTxn* RefundTxn(const FString& Key, const int64& OrderId, const int32& AppId, bool bUseSandBox = false);

private:
    virtual void Activate() override;
	FString Var_Key;
	int64 Var_OrderId;
	int32 Var_AppId;
	bool Var_bUseSandBox;
};
