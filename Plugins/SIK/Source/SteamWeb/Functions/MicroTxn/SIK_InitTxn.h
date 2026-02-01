// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_InitTxn.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_InitTxn : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:
	
	//Creates a new purchase. Send the order information along with the Steam ID to seed the transaction on Steam.
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|MicroTxn", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_InitTxn* InitTxn(const FString& Key, const int64& OrderId, const int64& SteamId, const int32& AppId, const int32& ItemCount, const FString& Language, const FString& Currency, const FString& UserSession, const FString& IpAddress, const int32& ItemId, const int32& Qty, const int64& Amount, const FString& Description, const FString& Category, const int32& AssociatedBundle = -1, const FString& BillingType = "", const FString& Period = "", const int32& Frequency = -1, const int64& RecurringAmt = -1, const int32& BundleCount = -1, const int32& BundleId = -1, const int32& BundleQty = -1, const FString& BundleDesc = "", const FString& BundleCategory = "", bool bUseSandBox = false);
	
	

private:
	virtual void Activate() override;
	FString Var_Key;
	int64 Var_OrderId;
	int64 Var_SteamId;
	int32 Var_AppId;
	int32 Var_ItemCount;
	FString Var_Language;
	FString Var_Currency;
	FString Var_UserSession;
	FString Var_IpAddress;
	int32 Var_ItemId;
	int32 Var_Qty;
	int64 Var_Amount;
	FString Var_Description;
	FString Var_Category;
	int32 Var_AssociatedBundle;
	FString Var_BillingType;
	FString Var_Period;
	int32 Var_Frequency;
	int64 Var_RecurringAmt;
	int32 Var_BundleCount;
	int32 Var_BundleId;
	int32 Var_BundleQty;
	FString Var_BundleDesc;
	FString Var_BundleCategory;
	bool Var_bUseSandBox;
	
};
