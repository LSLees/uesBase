// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_GetPublisherAppOwnershipChanges.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_GetPublisherAppOwnershipChanges : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:
	
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|User", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_GetPublisherAppOwnershipChanges* GetPublisherAppOwnershipChanges(const FString& Key, const FString& PackageRowVersion, const FString& CDKeyRowVersion);

private:
    virtual void Activate() override;
	FString Var_Key;
	FString Var_PackageRowVersion;
	FString Var_CDKeyRowVersion;
};
