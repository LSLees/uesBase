// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_UpdateItemDefs.generated.h"

USTRUCT(BlueprintType)
struct FSIK_WebItemDef
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Steam Integration Kit|Web|GameInventory")
	FString AppId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Steam Integration Kit|Web|GameInventory")
	FString ItemDefId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Steam Integration Kit|Web|GameInventory")
	FString Type;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Steam Integration Kit|Web|GameInventory")
	FString DisplayType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Steam Integration Kit|Web|GameInventory")
	FString Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Steam Integration Kit|Web|GameInventory")
	FString Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Steam Integration Kit|Web|GameInventory")
	FString BackgroundColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Steam Integration Kit|Web|GameInventory")
	bool Tradable = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Steam Integration Kit|Web|GameInventory")
	bool Marketable = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Steam Integration Kit|Web|GameInventory")
	bool Commodity = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Steam Integration Kit|Web|GameInventory")
	FString Tags;
};

UCLASS()
class STEAMWEB_API USIK_UpdateItemDefs : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|GameInventory", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_UpdateItemDefs* UpdateItemDefs(const FString& Key, const int32& AppId, const TArray<FSIK_WebItemDef> ItemDefs);

private:
    virtual void Activate() override;
	FString Var_Key;
	int32 Var_AppId;
	TArray<FSIK_WebItemDef> Var_ItemDefs;
};
