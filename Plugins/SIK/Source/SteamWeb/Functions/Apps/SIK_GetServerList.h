// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_GetServerList.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_GetServerList : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:
	
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|Apps", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_GetServerList* GetServerList(const FString& Key, const FString& Filter, const int32& Limit = -1);


private:
    virtual void Activate() override;
	FString Var_Key;
	FString Var_Filter;
	int32 Var_Limit;
};
