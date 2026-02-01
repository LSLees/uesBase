// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_UpdateBanStatus.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_UpdateBanStatus : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:

	//Updates the ban status on the published file
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|PublishedFile", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_UpdateBanStatus* UpdateBanStatus(const FString& Key, const int64& PublishedFileId, const int32& AppId, const bool& Banned, const FString& Reason);

private:
    virtual void Activate() override;
	FString Var_Key;
	int64 Var_PublishedFileId;
	int32 Var_AppId;
	bool Var_Banned;
	FString Var_Reason;
};
