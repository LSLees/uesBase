// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_GetPartnerAppListForWebAPIKey.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_GetPartnerAppListForWebAPIKey : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:
	/*
	*GetPartnerAppListForWebAPIKey
	GET https://partner.steam-api.com/ISteamApps/GetPartnerAppListForWebAPIKey/v2/
	Name	Type	Required	Description
	key	string	✔	Steamworks Web API publisher authentication key.
	type_filter	string		Optional comma separated list of types to filter on

	Get a list of appIDs associated with a WebAPI key. Type_filter can used to specify certain app types to be returned. Possible values are "game,application,tool,demo,dlc,music". When type_filter is blank or not used, all apps are returned.

	Version 2 will output the app name.

	NOTE: This call requires a publisher API key to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!
	*/
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|Apps", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_GetPartnerAppListForWebAPIKey* GetPartnerAppListForWebAPIKey(const FString& Key, const FString& TypeFilter);

private:
    virtual void Activate() override;
	FString Var_Key;
	FString Var_TypeFilter;
};
