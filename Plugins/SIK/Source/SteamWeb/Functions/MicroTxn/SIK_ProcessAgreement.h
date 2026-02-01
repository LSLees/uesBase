// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_ProcessAgreement.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_ProcessAgreement : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:
	
	//Initiate a recurring payment (subscription) for the user.
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|MicroTxn", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_ProcessAgreement* ProcessAgreement(const FString& Key, const int64& OrderId, const int64& SteamId, const int64& AgreementId, const int32& AppId, const int32& Amount, const FString& Currency, bool bUseSandBox = false);


private:
    virtual void Activate() override;
	FString Var_Key;
	int64 Var_OrderId;
	int64 Var_SteamId;
	int64 Var_AgreementId;
	int32 Var_AppId;
	int32 Var_Amount;
	FString Var_Currency;
	bool Var_bUseSandBox;
};
