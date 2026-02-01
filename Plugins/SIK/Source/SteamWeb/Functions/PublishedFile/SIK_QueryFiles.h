// Copyright (c) 2024 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SIK_BaseWebApi.h"
#include "SIK_QueryFiles.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWEB_API USIK_QueryFiles : public USIK_BaseWebApi
{
    GENERATED_BODY()

public:

	//Performs a search query for published files
	UFUNCTION(BlueprintCallable, Category = "Steam Integration Kit|Web|PublishedFile", meta = (BlueprintInternalUseOnly = "true"))
	static USIK_QueryFiles* QueryFiles(const FString& Key, const int32& QueryType, const int32& Page, const FString& Cursor, const int32& NumPerPage, const int32& CreatorAppId, const int32& AppId, const FString& RequiredTags, const FString& ExcludedTags, const bool& MatchAllTags, const FString& RequiredFlags, const FString& OmittedFlags, const FString& SearchText, const int32& FileType, const int64& ChildPublishedFileId, const int32& Days, const bool& IncludeRecentVotesOnly, const int32& CacheMaxAgeSeconds, const int32& Language, const FString& RequiredKvTags, const bool& TotalOnly, const bool& IdsOnly, const bool& ReturnVoteData, const bool& ReturnTags, const bool& ReturnKvTags, const bool& ReturnPreviews, const bool& ReturnChildren, const bool& ReturnShortDescription, const bool& ReturnForSaleData, const bool& ReturnMetadata, const int32& ReturnPlaytimeStats);

private:
	virtual void Activate() override;
	FString Var_Key;
	int32 Var_QueryType;
	int32 Var_Page;
	FString Var_Cursor;
	int32 Var_NumPerPage;
	int32 Var_CreatorAppId;
	int32 Var_AppId;
	FString Var_RequiredTags;
	FString Var_ExcludedTags;
	bool Var_MatchAllTags;
	FString Var_RequiredFlags;
	FString Var_OmittedFlags;
	FString Var_SearchText;
	int32 Var_FileType;
	int64 Var_ChildPublishedFileId;
	int32 Var_Days;
	bool Var_IncludeRecentVotesOnly;
	int32 Var_CacheMaxAgeSeconds;
	int32 Var_Language;
	FString Var_RequiredKvTags;
	bool Var_TotalOnly;
	bool Var_IdsOnly;
	bool Var_ReturnVoteData;
	bool Var_ReturnTags;
	bool Var_ReturnKvTags;
	bool Var_ReturnPreviews;
	bool Var_ReturnChildren;
	bool Var_ReturnShortDescription;
	bool Var_ReturnForSaleData;
	bool Var_ReturnMetadata;
	int32 Var_ReturnPlaytimeStats;
};
