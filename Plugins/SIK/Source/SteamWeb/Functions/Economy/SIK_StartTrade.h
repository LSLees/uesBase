// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_StartTrade.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_StartTrade : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:
	
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|Economy", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_StartTrade* StartTrade(const FString& Key, const int32& AppId, const int64& PartyA, const int64& PartyB);

private:
    virtual void Activate() override;
	FString Var_Key;
	int32 Var_AppId;
	int64 Var_PartyA;
	int64 Var_PartyB;
};
