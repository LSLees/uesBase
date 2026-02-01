// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_EnumerateSessionsForApp.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_EnumerateSessionsForApp : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:
	//This returns a list of sessions that a Steam ID is part of.
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|GameNotifications", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_EnumerateSessionsForApp* EnumerateSessionsForApp(const FString& Key, const int32& AppId, const int64& SteamId, const bool& IncludeAllUserMessages, const bool& IncludeAuthUserMessage, const FString& Language);

private:
    virtual void Activate() override;
	FString Var_Key;
	int32 Var_AppId;
	int64 Var_SteamId;
	bool Var_IncludeAllUserMessages;
	bool Var_IncludeAuthUserMessage;
	FString Var_Language;
};
