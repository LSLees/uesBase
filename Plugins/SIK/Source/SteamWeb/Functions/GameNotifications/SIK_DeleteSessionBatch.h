// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_DeleteSessionBatch.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_DeleteSessionBatch : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:

	//Deletes a batch of async game sessions
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|GameNotifications", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_DeleteSessionBatch* DeleteSessionBatch(const FString& Key, const int64& SessionId, const int32& AppId);

private:
    virtual void Activate() override;
	FString Var_Key;
	int64 Var_SessionId;
	int32 Var_AppId;
};
