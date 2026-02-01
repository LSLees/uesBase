// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_ResolveVanityURL.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_ResolveVanityURL : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:
	
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|User", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_ResolveVanityURL* ResolveVanityURL(const FString& Key, const FString& VanityUrl, const int32& UrlType = -1);


private:
    virtual void Activate() override;
	FString Var_Key;
	FString Var_VanityUrl;
	int32 Var_UrlType;
};
