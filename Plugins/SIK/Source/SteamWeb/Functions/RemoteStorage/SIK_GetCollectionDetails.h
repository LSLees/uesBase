// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_GetCollectionDetails.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_GetCollectionDetails : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:
	
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|RemoteStorage", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_GetCollectionDetails* GetCollectionDetails( const int32& CollectionCount, const int64 PublishedFileIds0);

private:
    virtual void Activate() override;
	int32 Var_CollectionCount;
	int64 Var_PublishedFileIds0;
};
