// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_UpdateTags.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_UpdateTags : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:
	
	//Updates tags on the published file. Existing tags will not be removed unless they are specified in the remove_tags parameter.
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|PublishedFile", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_UpdateTags* UpdateTags(const FString& Key, const int64& PublishedFileId, const int32& AppId, const FString& AddTags, const FString& RemoveTags);

private:
    virtual void Activate() override;
	FString Var_Key;
	int64 Var_PublishedFileId;
	int32 Var_AppId;
	FString Var_AddTags;
	FString Var_RemoveTags;
};
