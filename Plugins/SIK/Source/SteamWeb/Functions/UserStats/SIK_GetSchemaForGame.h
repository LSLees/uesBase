// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_GetSchemaForGame.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_GetSchemaForGame : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:

	//Gets the complete list of stats and achievements for the specified game.
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|UserStats", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_GetSchemaForGame* GetSchemaForGame(const FString& Key, const int32& AppId, const FString& Language);

private:
    virtual void Activate() override;
	FString Var_Key;
	int32 Var_AppId;
	FString Var_Language;
};
