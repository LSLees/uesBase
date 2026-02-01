// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_SetAppBuildLive.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_SetAppBuildLive : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:
	//The steamID is required when an app is released and the betakey is set to public. The steamID must have appropriate permissions to make a build change, specifically the Edit App and Publish permissions. This account will receive a Steam Mobile app confirmation. When confirmation of a build change is required, SetAppBuildLive will return back a HTTP response code 201 Created.
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|Apps", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_SetAppBuildLive* SetAppBuildLive(const FString& Key, const int32& AppId, const int32& BuildId, const FString& BetaKey, const int32& SteamId = -1, const FString& Description = "");

private:
    virtual void Activate() override;
	FString Var_Key;
	int32 Var_AppId;
	int32 Var_BuildId;
	FString Var_BetaKey;
	int32 Var_SteamId;
	FString Var_Description;
};
