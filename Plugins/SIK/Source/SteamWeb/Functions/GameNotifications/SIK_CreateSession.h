// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_CreateSession.generated.h"

USTRUCT(BlueprintType)
struct FSIK_CreateSessionOptional
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Steam Integration Kit|Web|GameNotifications")
	int64 SteamId = -1;
	
};
UCLASS()
class STEAMWEB_API USIK_CreateSession : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:

	//Creates a brand new async session with the players specified in the request.
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|GameNotifications", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_CreateSession* CreateSession(const FString& Key, const int32& AppId, const int64& Context, const FString& Title, const FString& Users, FSIK_CreateSessionOptional Optional);

private:
    virtual void Activate() override;
	FString Var_Key;
	int32 Var_AppId;
	int64 Var_Context;
	FString Var_Title;
	FString Var_Users;
	FSIK_CreateSessionOptional Var_Optional;
};
