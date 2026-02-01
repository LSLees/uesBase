// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/PublishedFile/SIK_QueryFiles.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_QueryFiles() {}

// ********** Begin Cross Module References ********************************************************
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_QueryFiles();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_QueryFiles_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USIK_QueryFiles Function QueryFiles **************************************
struct Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics
{
	struct SIK_QueryFiles_eventQueryFiles_Parms
	{
		FString Key;
		int32 QueryType;
		int32 Page;
		FString Cursor;
		int32 NumPerPage;
		int32 CreatorAppId;
		int32 AppId;
		FString RequiredTags;
		FString ExcludedTags;
		bool MatchAllTags;
		FString RequiredFlags;
		FString OmittedFlags;
		FString SearchText;
		int32 FileType;
		int64 ChildPublishedFileId;
		int32 Days;
		bool IncludeRecentVotesOnly;
		int32 CacheMaxAgeSeconds;
		int32 Language;
		FString RequiredKvTags;
		bool TotalOnly;
		bool IdsOnly;
		bool ReturnVoteData;
		bool ReturnTags;
		bool ReturnKvTags;
		bool ReturnPreviews;
		bool ReturnChildren;
		bool ReturnShortDescription;
		bool ReturnForSaleData;
		bool ReturnMetadata;
		int32 ReturnPlaytimeStats;
		USIK_QueryFiles* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|PublishedFile" },
		{ "Comment", "//Performs a search query for published files\n" },
		{ "ModuleRelativePath", "Functions/PublishedFile/SIK_QueryFiles.h" },
		{ "ToolTip", "Performs a search query for published files" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QueryType_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Page_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cursor_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumPerPage_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CreatorAppId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredTags_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExcludedTags_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MatchAllTags_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredFlags_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OmittedFlags_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SearchText_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FileType_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChildPublishedFileId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Days_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IncludeRecentVotesOnly_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CacheMaxAgeSeconds_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Language_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredKvTags_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalOnly_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IdsOnly_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnVoteData_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnTags_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnKvTags_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnPreviews_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnChildren_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnShortDescription_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnForSaleData_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnMetadata_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnPlaytimeStats_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function QueryFiles constinit property declarations ****************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_QueryType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Page;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Cursor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumPerPage;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CreatorAppId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RequiredTags;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExcludedTags;
	static void NewProp_MatchAllTags_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_MatchAllTags;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RequiredFlags;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OmittedFlags;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SearchText;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FileType;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_ChildPublishedFileId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Days;
	static void NewProp_IncludeRecentVotesOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IncludeRecentVotesOnly;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CacheMaxAgeSeconds;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Language;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RequiredKvTags;
	static void NewProp_TotalOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_TotalOnly;
	static void NewProp_IdsOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IdsOnly;
	static void NewProp_ReturnVoteData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnVoteData;
	static void NewProp_ReturnTags_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnTags;
	static void NewProp_ReturnKvTags_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnKvTags;
	static void NewProp_ReturnPreviews_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnPreviews;
	static void NewProp_ReturnChildren_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnChildren;
	static void NewProp_ReturnShortDescription_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnShortDescription;
	static void NewProp_ReturnForSaleData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnForSaleData;
	static void NewProp_ReturnMetadata_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnMetadata;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnPlaytimeStats;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function QueryFiles constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function QueryFiles Property Definitions ***************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_QueryFiles_eventQueryFiles_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::NewProp_QueryType = { "QueryType", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_QueryFiles_eventQueryFiles_Parms, QueryType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QueryType_MetaData), NewProp_QueryType_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::NewProp_Page = { "Page", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_QueryFiles_eventQueryFiles_Parms, Page), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Page_MetaData), NewProp_Page_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::NewProp_Cursor = { "Cursor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_QueryFiles_eventQueryFiles_Parms, Cursor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cursor_MetaData), NewProp_Cursor_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::NewProp_NumPerPage = { "NumPerPage", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_QueryFiles_eventQueryFiles_Parms, NumPerPage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumPerPage_MetaData), NewProp_NumPerPage_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::NewProp_CreatorAppId = { "CreatorAppId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_QueryFiles_eventQueryFiles_Parms, CreatorAppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CreatorAppId_MetaData), NewProp_CreatorAppId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_QueryFiles_eventQueryFiles_Parms, AppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppId_MetaData), NewProp_AppId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::NewProp_RequiredTags = { "RequiredTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_QueryFiles_eventQueryFiles_Parms, RequiredTags), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredTags_MetaData), NewProp_RequiredTags_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::NewProp_ExcludedTags = { "ExcludedTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_QueryFiles_eventQueryFiles_Parms, ExcludedTags), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExcludedTags_MetaData), NewProp_ExcludedTags_MetaData) };
void Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::NewProp_MatchAllTags_SetBit(void* Obj)
{
	((SIK_QueryFiles_eventQueryFiles_Parms*)Obj)->MatchAllTags = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::NewProp_MatchAllTags = { "MatchAllTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_QueryFiles_eventQueryFiles_Parms), &Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::NewProp_MatchAllTags_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MatchAllTags_MetaData), NewProp_MatchAllTags_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::NewProp_RequiredFlags = { "RequiredFlags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_QueryFiles_eventQueryFiles_Parms, RequiredFlags), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredFlags_MetaData), NewProp_RequiredFlags_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::NewProp_OmittedFlags = { "OmittedFlags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_QueryFiles_eventQueryFiles_Parms, OmittedFlags), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OmittedFlags_MetaData), NewProp_OmittedFlags_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::NewProp_SearchText = { "SearchText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_QueryFiles_eventQueryFiles_Parms, SearchText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SearchText_MetaData), NewProp_SearchText_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::NewProp_FileType = { "FileType", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_QueryFiles_eventQueryFiles_Parms, FileType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileType_MetaData), NewProp_FileType_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::NewProp_ChildPublishedFileId = { "ChildPublishedFileId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_QueryFiles_eventQueryFiles_Parms, ChildPublishedFileId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChildPublishedFileId_MetaData), NewProp_ChildPublishedFileId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::NewProp_Days = { "Days", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_QueryFiles_eventQueryFiles_Parms, Days), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Days_MetaData), NewProp_Days_MetaData) };
void Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::NewProp_IncludeRecentVotesOnly_SetBit(void* Obj)
{
	((SIK_QueryFiles_eventQueryFiles_Parms*)Obj)->IncludeRecentVotesOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::NewProp_IncludeRecentVotesOnly = { "IncludeRecentVotesOnly", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_QueryFiles_eventQueryFiles_Parms), &Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::NewProp_IncludeRecentVotesOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IncludeRecentVotesOnly_MetaData), NewProp_IncludeRecentVotesOnly_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::NewProp_CacheMaxAgeSeconds = { "CacheMaxAgeSeconds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_QueryFiles_eventQueryFiles_Parms, CacheMaxAgeSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CacheMaxAgeSeconds_MetaData), NewProp_CacheMaxAgeSeconds_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_QueryFiles_eventQueryFiles_Parms, Language), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Language_MetaData), NewProp_Language_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::NewProp_RequiredKvTags = { "RequiredKvTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_QueryFiles_eventQueryFiles_Parms, RequiredKvTags), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredKvTags_MetaData), NewProp_RequiredKvTags_MetaData) };
void Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::NewProp_TotalOnly_SetBit(void* Obj)
{
	((SIK_QueryFiles_eventQueryFiles_Parms*)Obj)->TotalOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::NewProp_TotalOnly = { "TotalOnly", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_QueryFiles_eventQueryFiles_Parms), &Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::NewProp_TotalOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalOnly_MetaData), NewProp_TotalOnly_MetaData) };
void Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::NewProp_IdsOnly_SetBit(void* Obj)
{
	((SIK_QueryFiles_eventQueryFiles_Parms*)Obj)->IdsOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::NewProp_IdsOnly = { "IdsOnly", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_QueryFiles_eventQueryFiles_Parms), &Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::NewProp_IdsOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IdsOnly_MetaData), NewProp_IdsOnly_MetaData) };
void Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::NewProp_ReturnVoteData_SetBit(void* Obj)
{
	((SIK_QueryFiles_eventQueryFiles_Parms*)Obj)->ReturnVoteData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::NewProp_ReturnVoteData = { "ReturnVoteData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_QueryFiles_eventQueryFiles_Parms), &Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::NewProp_ReturnVoteData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnVoteData_MetaData), NewProp_ReturnVoteData_MetaData) };
void Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::NewProp_ReturnTags_SetBit(void* Obj)
{
	((SIK_QueryFiles_eventQueryFiles_Parms*)Obj)->ReturnTags = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::NewProp_ReturnTags = { "ReturnTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_QueryFiles_eventQueryFiles_Parms), &Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::NewProp_ReturnTags_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnTags_MetaData), NewProp_ReturnTags_MetaData) };
void Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::NewProp_ReturnKvTags_SetBit(void* Obj)
{
	((SIK_QueryFiles_eventQueryFiles_Parms*)Obj)->ReturnKvTags = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::NewProp_ReturnKvTags = { "ReturnKvTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_QueryFiles_eventQueryFiles_Parms), &Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::NewProp_ReturnKvTags_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnKvTags_MetaData), NewProp_ReturnKvTags_MetaData) };
void Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::NewProp_ReturnPreviews_SetBit(void* Obj)
{
	((SIK_QueryFiles_eventQueryFiles_Parms*)Obj)->ReturnPreviews = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::NewProp_ReturnPreviews = { "ReturnPreviews", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_QueryFiles_eventQueryFiles_Parms), &Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::NewProp_ReturnPreviews_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnPreviews_MetaData), NewProp_ReturnPreviews_MetaData) };
void Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::NewProp_ReturnChildren_SetBit(void* Obj)
{
	((SIK_QueryFiles_eventQueryFiles_Parms*)Obj)->ReturnChildren = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::NewProp_ReturnChildren = { "ReturnChildren", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_QueryFiles_eventQueryFiles_Parms), &Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::NewProp_ReturnChildren_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnChildren_MetaData), NewProp_ReturnChildren_MetaData) };
void Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::NewProp_ReturnShortDescription_SetBit(void* Obj)
{
	((SIK_QueryFiles_eventQueryFiles_Parms*)Obj)->ReturnShortDescription = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::NewProp_ReturnShortDescription = { "ReturnShortDescription", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_QueryFiles_eventQueryFiles_Parms), &Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::NewProp_ReturnShortDescription_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnShortDescription_MetaData), NewProp_ReturnShortDescription_MetaData) };
void Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::NewProp_ReturnForSaleData_SetBit(void* Obj)
{
	((SIK_QueryFiles_eventQueryFiles_Parms*)Obj)->ReturnForSaleData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::NewProp_ReturnForSaleData = { "ReturnForSaleData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_QueryFiles_eventQueryFiles_Parms), &Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::NewProp_ReturnForSaleData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnForSaleData_MetaData), NewProp_ReturnForSaleData_MetaData) };
void Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::NewProp_ReturnMetadata_SetBit(void* Obj)
{
	((SIK_QueryFiles_eventQueryFiles_Parms*)Obj)->ReturnMetadata = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::NewProp_ReturnMetadata = { "ReturnMetadata", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_QueryFiles_eventQueryFiles_Parms), &Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::NewProp_ReturnMetadata_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnMetadata_MetaData), NewProp_ReturnMetadata_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::NewProp_ReturnPlaytimeStats = { "ReturnPlaytimeStats", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_QueryFiles_eventQueryFiles_Parms, ReturnPlaytimeStats), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnPlaytimeStats_MetaData), NewProp_ReturnPlaytimeStats_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_QueryFiles_eventQueryFiles_Parms, ReturnValue), Z_Construct_UClass_USIK_QueryFiles_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::NewProp_QueryType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::NewProp_Page,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::NewProp_Cursor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::NewProp_NumPerPage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::NewProp_CreatorAppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::NewProp_RequiredTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::NewProp_ExcludedTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::NewProp_MatchAllTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::NewProp_RequiredFlags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::NewProp_OmittedFlags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::NewProp_SearchText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::NewProp_FileType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::NewProp_ChildPublishedFileId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::NewProp_Days,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::NewProp_IncludeRecentVotesOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::NewProp_CacheMaxAgeSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::NewProp_Language,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::NewProp_RequiredKvTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::NewProp_TotalOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::NewProp_IdsOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::NewProp_ReturnVoteData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::NewProp_ReturnTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::NewProp_ReturnKvTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::NewProp_ReturnPreviews,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::NewProp_ReturnChildren,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::NewProp_ReturnShortDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::NewProp_ReturnForSaleData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::NewProp_ReturnMetadata,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::NewProp_ReturnPlaytimeStats,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::PropPointers) < 2048);
// ********** End Function QueryFiles Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_QueryFiles, nullptr, "QueryFiles", 	Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::SIK_QueryFiles_eventQueryFiles_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::SIK_QueryFiles_eventQueryFiles_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_QueryFiles_QueryFiles()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_QueryFiles_QueryFiles_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_QueryFiles::execQueryFiles)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_QueryType);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Page);
	P_GET_PROPERTY(FStrProperty,Z_Param_Cursor);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_NumPerPage);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_CreatorAppId);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_RequiredTags);
	P_GET_PROPERTY(FStrProperty,Z_Param_ExcludedTags);
	P_GET_UBOOL_REF(Z_Param_Out_MatchAllTags);
	P_GET_PROPERTY(FStrProperty,Z_Param_RequiredFlags);
	P_GET_PROPERTY(FStrProperty,Z_Param_OmittedFlags);
	P_GET_PROPERTY(FStrProperty,Z_Param_SearchText);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_FileType);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_ChildPublishedFileId);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Days);
	P_GET_UBOOL_REF(Z_Param_Out_IncludeRecentVotesOnly);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_CacheMaxAgeSeconds);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Language);
	P_GET_PROPERTY(FStrProperty,Z_Param_RequiredKvTags);
	P_GET_UBOOL_REF(Z_Param_Out_TotalOnly);
	P_GET_UBOOL_REF(Z_Param_Out_IdsOnly);
	P_GET_UBOOL_REF(Z_Param_Out_ReturnVoteData);
	P_GET_UBOOL_REF(Z_Param_Out_ReturnTags);
	P_GET_UBOOL_REF(Z_Param_Out_ReturnKvTags);
	P_GET_UBOOL_REF(Z_Param_Out_ReturnPreviews);
	P_GET_UBOOL_REF(Z_Param_Out_ReturnChildren);
	P_GET_UBOOL_REF(Z_Param_Out_ReturnShortDescription);
	P_GET_UBOOL_REF(Z_Param_Out_ReturnForSaleData);
	P_GET_UBOOL_REF(Z_Param_Out_ReturnMetadata);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_ReturnPlaytimeStats);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_QueryFiles**)Z_Param__Result=USIK_QueryFiles::QueryFiles(Z_Param_Key,Z_Param_Out_QueryType,Z_Param_Out_Page,Z_Param_Cursor,Z_Param_Out_NumPerPage,Z_Param_Out_CreatorAppId,Z_Param_Out_AppId,Z_Param_RequiredTags,Z_Param_ExcludedTags,Z_Param_Out_MatchAllTags,Z_Param_RequiredFlags,Z_Param_OmittedFlags,Z_Param_SearchText,Z_Param_Out_FileType,Z_Param_Out_ChildPublishedFileId,Z_Param_Out_Days,Z_Param_Out_IncludeRecentVotesOnly,Z_Param_Out_CacheMaxAgeSeconds,Z_Param_Out_Language,Z_Param_RequiredKvTags,Z_Param_Out_TotalOnly,Z_Param_Out_IdsOnly,Z_Param_Out_ReturnVoteData,Z_Param_Out_ReturnTags,Z_Param_Out_ReturnKvTags,Z_Param_Out_ReturnPreviews,Z_Param_Out_ReturnChildren,Z_Param_Out_ReturnShortDescription,Z_Param_Out_ReturnForSaleData,Z_Param_Out_ReturnMetadata,Z_Param_Out_ReturnPlaytimeStats);
	P_NATIVE_END;
}
// ********** End Class USIK_QueryFiles Function QueryFiles ****************************************

// ********** Begin Class USIK_QueryFiles **********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_QueryFiles;
UClass* USIK_QueryFiles::GetPrivateStaticClass()
{
	using TClass = USIK_QueryFiles;
	if (!Z_Registration_Info_UClass_USIK_QueryFiles.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_QueryFiles"),
			Z_Registration_Info_UClass_USIK_QueryFiles.InnerSingleton,
			StaticRegisterNativesUSIK_QueryFiles,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_USIK_QueryFiles.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_QueryFiles_NoRegister()
{
	return USIK_QueryFiles::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_QueryFiles_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/PublishedFile/SIK_QueryFiles.h" },
		{ "ModuleRelativePath", "Functions/PublishedFile/SIK_QueryFiles.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_QueryFiles constinit property declarations **************************
// ********** End Class USIK_QueryFiles constinit property declarations ****************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("QueryFiles"), .Pointer = &USIK_QueryFiles::execQueryFiles },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_QueryFiles_QueryFiles, "QueryFiles" }, // 3130660721
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_QueryFiles>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_QueryFiles_Statics
UObject* (*const Z_Construct_UClass_USIK_QueryFiles_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_QueryFiles_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_QueryFiles_Statics::ClassParams = {
	&USIK_QueryFiles::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_QueryFiles_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_QueryFiles_Statics::Class_MetaDataParams)
};
void USIK_QueryFiles::StaticRegisterNativesUSIK_QueryFiles()
{
	UClass* Class = USIK_QueryFiles::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_QueryFiles_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_QueryFiles()
{
	if (!Z_Registration_Info_UClass_USIK_QueryFiles.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_QueryFiles.OuterSingleton, Z_Construct_UClass_USIK_QueryFiles_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_QueryFiles.OuterSingleton;
}
USIK_QueryFiles::USIK_QueryFiles(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_QueryFiles);
USIK_QueryFiles::~USIK_QueryFiles() {}
// ********** End Class USIK_QueryFiles ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_PublishedFile_SIK_QueryFiles_h__Script_SteamWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_QueryFiles, USIK_QueryFiles::StaticClass, TEXT("USIK_QueryFiles"), &Z_Registration_Info_UClass_USIK_QueryFiles, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_QueryFiles), 1799781118U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_PublishedFile_SIK_QueryFiles_h__Script_SteamWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_PublishedFile_SIK_QueryFiles_h__Script_SteamWeb_1544051857{
	TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_PublishedFile_SIK_QueryFiles_h__Script_SteamWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_PublishedFile_SIK_QueryFiles_h__Script_SteamWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
