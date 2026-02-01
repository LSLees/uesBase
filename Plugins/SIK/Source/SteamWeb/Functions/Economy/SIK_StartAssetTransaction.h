// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_StartAssetTransaction.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_StartAssetTransaction : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:
	
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|Economy", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_StartAssetTransaction* StartAssetTransaction(const FString& Key, const int32& AppId, const int64& SteamId, const FString& AssetId0, const int32& AssetQuantity0, const FString& Currency, const FString& Language, const FString& IpAddress, const FString& Referrer, const bool& ClientAuth);

private:
    virtual void Activate() override;
	FString Var_Key;
	int32 Var_AppId;
	int64 Var_SteamId;
	FString Var_AssetId0;
	int32 Var_AssetQuantity0;
	FString Var_Currency;
	FString Var_Language;
	FString Var_IpAddress;
	FString Var_Referrer;
	bool Var_ClientAuth;
};
