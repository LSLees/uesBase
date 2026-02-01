// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_RequestNotifications.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_RequestNotifications : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:
	
	//Requests that a user receive game notifications for an app.
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|GameNotifications", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_RequestNotifications* RequestNotifications(const FString& Key, const int64& SteamId, const int32& AppId);

private:
    virtual void Activate() override;
	FString Var_Key;
	int64 Var_SteamId;
	int32 Var_AppId;
};
