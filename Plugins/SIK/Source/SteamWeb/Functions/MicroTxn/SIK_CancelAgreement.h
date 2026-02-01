// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_CancelAgreement.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_CancelAgreement : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:

	//Cancels a recurring billing agreement (subscription). The agreementid can be retrieved using GetUserAgreementInfo.
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|MicroTxn", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_CancelAgreement* CancelAgreement(const FString& Key, const int64& SteamId, const int64& AgreementId, const int32& AppId, bool bUseSandBox = false);

private:
    virtual void Activate() override;
	FString Var_Key;
	int64 Var_SteamId;
	int64 Var_AgreementId;
	int32 Var_AppId;
	bool Var_bUseSandBox;
};
