// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_AuthenticateUser.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_AuthenticateUser : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:
	
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|User", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_AuthenticateUser* AuthenticateUser(const int64& SteamId, const TArray<uint8>& SessionKey, const TArray<uint8>& EncryptedLoginKey);
private:
    virtual void Activate() override;
	int64 Var_SteamId;
	TArray<uint8> Var_SessionKey;
	TArray<uint8> Var_EncryptedLoginKey;
};
