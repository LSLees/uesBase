// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_GetSessionDetailsForApp.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_GetSessionDetailsForApp : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:
	//Returns details about specific session(s).
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|GameNotifications", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_GetSessionDetailsForApp* GetSessionDetailsForApp(const FString& Key, const FString& Sessions, const int32& AppId, const FString& Language);

private:
    virtual void Activate() override;
	FString Var_Key;
	FString Var_Sessions;
	int32 Var_AppId;
	FString Var_Language;
};
