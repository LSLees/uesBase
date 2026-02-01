// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_GetAssetPrices.generated.h"

USTRUCT(BlueprintType)
struct FSIK_GetAssetPricesOptional
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Steam Integration Kit|Web|Economy")
	FString Currency;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Steam Integration Kit|Web|Economy")
	FString Language;
};
UCLASS()
class STEAMWEB_API USIK_GetAssetPrices : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:

	//Returns prices and categories for items that users are able to purchase.
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|Economy", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_GetAssetPrices* GetAssetPrices(const FString& Key, const int32& AppId, FSIK_GetAssetPricesOptional Optional);

private:
    virtual void Activate() override;
	FString Var_Key;
	int32 Var_AppId;
	FSIK_GetAssetPricesOptional Var_Optional;
};
