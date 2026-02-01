// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_Delete.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_Delete : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:

	//Deletes an item.
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|PublishedFile", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_Delete* Delete(const FString& Key, const int64& PublishedFileId, const int32& AppId);

private:
    virtual void Activate() override;
	FString Var_Key;
	int64 Var_PublishedFileId;
	int32 Var_AppId;
};
