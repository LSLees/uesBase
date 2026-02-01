// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_GetNewsForAppAuthed.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_GetNewsForAppAuthed : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:
	
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|News", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_GetNewsForAppAuthed* GetNewsForAppAuthed(const FString& Key, const int32& AppId, const int32& MaxLength = -1, const int32& EndDate = -1 , const int32& Count = 20, const FString& Feeds = "");
private:
    virtual void Activate() override;
	int32 Var_AppId;
	int32 Var_MaxLength;
	int32 Var_EndDate;
	int32 Var_Count;
	FString Var_Feeds;
	FString Var_Key;
};
