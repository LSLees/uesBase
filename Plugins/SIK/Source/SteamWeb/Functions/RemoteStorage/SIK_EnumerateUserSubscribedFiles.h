// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_EnumerateUserSubscribedFiles.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_EnumerateUserSubscribedFiles : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:
	
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|RemoteStorage", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_EnumerateUserSubscribedFiles* EnumerateUserSubscribedFiles(const FString& Key, const int64& SteamId, const int32& AppId, const int32& ListType = -1);

private:
    virtual void Activate() override;
	FString Var_Key;
	int64 Var_SteamId;
	int32 Var_AppId;
	int32 Var_ListType;
};
