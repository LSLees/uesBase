// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_QueryLoginToken.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_QueryLoginToken : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:

	/*QueryLoginToken
	GET https://api.steampowered.com/IGameServersService/QueryLoginToken/v1/
	Name	Type	Required	Description
	key	string	✔	Steamworks Web API user authentication key.
	login_token	string	✔	Login token to query

	Queries the status of the specified token, which must be owned by your game server account.
	*/
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|GameServers", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_QueryLoginToken* QueryLoginToken(const FString& Key, const FString& LoginToken);

private:
    virtual void Activate() override;
	FString Var_Key;
	FString Var_LoginToken;
};
