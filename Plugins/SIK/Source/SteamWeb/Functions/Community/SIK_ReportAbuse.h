// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_ReportAbuse.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_ReportAbuse : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:
	
	//Allows publishers to report users who are behaving badly on their community hub.
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|Community", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_ReportAbuse* ReportAbuse(const FString& Key, const int64& SteamIdActor, const int64& SteamIdTarget, const int32& AppId, const int32& AbuseType, const int32& ContentType, const FString& Description, const int64& Gid = -1);

private:
    virtual void Activate() override;
	FString Var_Key;
	int64 Var_SteamIdActor;
	int64 Var_SteamIdTarget;
	int32 Var_AppId;
	int32 Var_AbuseType;
	int32 Var_ContentType;
	FString Var_Description;
	int64 Var_Gid;
};
