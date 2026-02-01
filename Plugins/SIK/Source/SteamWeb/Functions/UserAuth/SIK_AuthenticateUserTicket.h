// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_AuthenticateUserTicket.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_AuthenticateUserTicket : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:
	
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|User", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_AuthenticateUserTicket* AuthenticateUserTicket(const FString& Key, const int32& AppId, const FString& Ticket, const FString& Identity);


private:
    virtual void Activate() override;
	FString Var_Key;
	int32 Var_AppId;
	FString Var_Ticket;
	FString Var_Identity;
};
