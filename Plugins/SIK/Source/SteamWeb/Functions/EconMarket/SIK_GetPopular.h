// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_GetPopular.generated.h"

USTRUCT(BlueprintType)
struct FSIK_GetPopularOptional
{
	GENERATED_BODY()

	//Number of rows per page
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Steam Integration Kit|Web|EconMarket")
	int32 Rows = -1;
	
};
UCLASS()
class STEAMWEB_API USIK_GetPopular : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:
	//Gets the most popular items
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|EconMarket", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_GetPopular* GetPopular(const FString& Key, const FString& Language, const int32& Start, const int32& FilterAppId, const int32& ECurrency, FSIK_GetPopularOptional OptionalSettings);

private:
    virtual void Activate() override;
	FString Var_Key;
	FString Var_Language;
	int32 Var_Start;
	int32 Var_FilterAppId;
	int32 Var_ECurrency;
	FSIK_GetPopularOptional Var_OptionalSettings;
};
