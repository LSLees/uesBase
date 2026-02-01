// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_AdjustAgreement.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_AdjustAgreement : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:
	//Add time to the payment schedule of an agreement with billing type "steam". The agreementid can be retrieved using GetUserAgreementInfo. 
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|MicroTxn", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_AdjustAgreement* AdjustAgreement(const FString& Key, const int64& SteamId, const int64& AgreementId, const int32& AppId, const FString& NextProcessDate, const FString& OldNextProcessDate = "", bool bUseSandBox = false);

private:
    virtual void Activate() override;
	FString Var_Key;
	int64 Var_SteamId;
	int64 Var_AgreementId;
	int32 Var_AppId;
	FString Var_NextProcessDate;
	FString Var_OldNextProcessDate;
	bool Var_bUseSandBox;
};
