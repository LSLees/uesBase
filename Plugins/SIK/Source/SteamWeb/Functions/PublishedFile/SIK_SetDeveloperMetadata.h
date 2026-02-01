// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_SetDeveloperMetadata.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_SetDeveloperMetadata : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:
	
	//Sets the metadata for a developer on the published file
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|PublishedFile", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_SetDeveloperMetadata* SetDeveloperMetadata(const FString& Key, const int64& PublishedFileId, const int32& AppId, const FString& Metadata);

private:
    virtual void Activate() override;
	FString Var_Key;
	int64 Var_PublishedFileId;
	int32 Var_AppId;
	FString Var_Metadata;
};
