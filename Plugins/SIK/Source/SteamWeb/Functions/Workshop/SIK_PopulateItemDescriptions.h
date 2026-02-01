// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_PopulateItemDescriptions.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_PopulateItemDescriptions : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:
	
	//Populate block of item descriptions.
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|Workshop", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_PopulateItemDescriptions* PopulateItemDescriptions(const FString& Key, const int32& AppId, const FString& Languages);

private:
    virtual void Activate() override;
	FString Var_Key;
	int32 Var_AppId;
	FString Var_Languages;
};
