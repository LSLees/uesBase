// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_SetMemo.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_SetMemo : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:
	//This method changes the memo associated with the game server account. Memos do not affect the account in any way. The memo shows up in the GetAccountList response and serves only as a reminder of what the account is used for.
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|GameServers", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_SetMemo* SetMemo(const FString& Key, const int64& SteamId, const FString& Memo);

private:
    virtual void Activate() override;
	FString Var_Key;
	int64 Var_SteamId;
	FString Var_Memo;
};
