// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_GetUserAgreementInfo.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_GetUserAgreementInfo : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:
	
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|MicroTxn", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_GetUserAgreementInfo* GetUserAgreementInfo(const FString& Key, const int64& SteamId, const int32& AppId, bool bUseSandBox = false);

private:
    virtual void Activate() override;
	FString Var_Key;
	int64 Var_SteamId;
	int32 Var_AppId;
	bool Var_bUseSandBox;
};
