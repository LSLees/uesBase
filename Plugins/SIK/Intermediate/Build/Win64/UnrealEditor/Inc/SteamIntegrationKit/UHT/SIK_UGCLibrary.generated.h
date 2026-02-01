// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Functions/UGC/SIK_UGCLibrary.h"

#ifdef STEAMINTEGRATIONKIT_SIK_UGCLibrary_generated_h
#error "SIK_UGCLibrary.generated.h already included, missing '#pragma once' in SIK_UGCLibrary.h"
#endif
#define STEAMINTEGRATIONKIT_SIK_UGCLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSIK_AccountID;
struct FSIK_AppId;
struct FSIK_DepotId;
struct FSIK_PublishedFileId;
struct FSIK_SteamUGCDetails;
struct FSIK_UGCQueryHandle;
struct FSIK_UGCUpdateHandle;

// ********** Begin Class USIK_UGCLibrary **********************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_UGCLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execShowWorkshopEULA); \
	DECLARE_FUNCTION(execUpdateItemPreviewVideo); \
	DECLARE_FUNCTION(execUpdateItemPreviewFile); \
	DECLARE_FUNCTION(execSuspendDownloads); \
	DECLARE_FUNCTION(execStartItemUpdate); \
	DECLARE_FUNCTION(execSetUserItemVote); \
	DECLARE_FUNCTION(execSetSearchText); \
	DECLARE_FUNCTION(execSetReturnTotalOnly); \
	DECLARE_FUNCTION(execSetReturnPlaytimeStats); \
	DECLARE_FUNCTION(execSetReturnOnlyIDs); \
	DECLARE_FUNCTION(execSetReturnMetadata); \
	DECLARE_FUNCTION(execSetReturnLongDescription); \
	DECLARE_FUNCTION(execSetReturnKeyValueTags); \
	DECLARE_FUNCTION(execSetReturnChildren); \
	DECLARE_FUNCTION(execSetReturnAdditionalPreviews); \
	DECLARE_FUNCTION(execSetRankedByTrendDays); \
	DECLARE_FUNCTION(execSetMatchAnyTag); \
	DECLARE_FUNCTION(execSetLanguage); \
	DECLARE_FUNCTION(execSetItemVisibility); \
	DECLARE_FUNCTION(execSetItemUpdateLanguage); \
	DECLARE_FUNCTION(execSetItemTitle); \
	DECLARE_FUNCTION(execSetItemTags); \
	DECLARE_FUNCTION(execSetItemPreview); \
	DECLARE_FUNCTION(execSetItemMetadata); \
	DECLARE_FUNCTION(execSetItemDescription); \
	DECLARE_FUNCTION(execSetItemContent); \
	DECLARE_FUNCTION(execSetCloudFileNameFilter); \
	DECLARE_FUNCTION(execSetAllowCachedResponse); \
	DECLARE_FUNCTION(execRemoveContentDescriptor); \
	DECLARE_FUNCTION(execAddContentDescriptor); \
	DECLARE_FUNCTION(execRemoveItemPreview); \
	DECLARE_FUNCTION(execRemoveItemKeyValueTags); \
	DECLARE_FUNCTION(execReleaseQueryUGCRequest); \
	DECLARE_FUNCTION(execGetSubscribedItems); \
	DECLARE_FUNCTION(execGetQueryUGCStatistic); \
	DECLARE_FUNCTION(execGetQueryUGCResult); \
	DECLARE_FUNCTION(execGetQueryUGCPreviewURL); \
	DECLARE_FUNCTION(execGetQueryUGCNumKeyValueTags); \
	DECLARE_FUNCTION(execGetQueryUGCNumAdditionalPreviews); \
	DECLARE_FUNCTION(execGetQueryUGCMetadata); \
	DECLARE_FUNCTION(execGetQueryUGCContentDescriptors); \
	DECLARE_FUNCTION(execGetQueryUGCKeyValueTag); \
	DECLARE_FUNCTION(execGetQueryUGCTagDisplayName); \
	DECLARE_FUNCTION(execGetQueryUGCTag); \
	DECLARE_FUNCTION(execGetQueryUGCNumTags); \
	DECLARE_FUNCTION(execGetQueryUGCChildren); \
	DECLARE_FUNCTION(execGetQueryUGCAdditionalPreview); \
	DECLARE_FUNCTION(execGetNumSubscribedItems); \
	DECLARE_FUNCTION(execGetItemUpdateProgress); \
	DECLARE_FUNCTION(execGetItemState); \
	DECLARE_FUNCTION(execGetItemInstallInfo); \
	DECLARE_FUNCTION(execGetItemDownloadInfo); \
	DECLARE_FUNCTION(execGetAppDependencies); \
	DECLARE_FUNCTION(execDownloadItem); \
	DECLARE_FUNCTION(execCreateQueryUserUGCRequest); \
	DECLARE_FUNCTION(execCreateQueryUGCDetailsRequest); \
	DECLARE_FUNCTION(execCreateQueryAllUGCRequest); \
	DECLARE_FUNCTION(execBInitWorkshopForGameServer); \
	DECLARE_FUNCTION(execAddRequiredTagGroup); \
	DECLARE_FUNCTION(execAddRequiredTag); \
	DECLARE_FUNCTION(execAddRequiredKeyValueTag); \
	DECLARE_FUNCTION(execAddItemPreviewVideo); \
	DECLARE_FUNCTION(execAddItemPreviewFile); \
	DECLARE_FUNCTION(execAddItemKeyValueTag); \
	DECLARE_FUNCTION(execAddExcludedTag);


struct Z_Construct_UClass_USIK_UGCLibrary_Statics;
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_UGCLibrary_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_UGCLibrary_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSIK_UGCLibrary(); \
	friend struct ::Z_Construct_UClass_USIK_UGCLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMINTEGRATIONKIT_API UClass* ::Z_Construct_UClass_USIK_UGCLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(USIK_UGCLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamIntegrationKit"), Z_Construct_UClass_USIK_UGCLibrary_NoRegister) \
	DECLARE_SERIALIZER(USIK_UGCLibrary)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_UGCLibrary_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USIK_UGCLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USIK_UGCLibrary(USIK_UGCLibrary&&) = delete; \
	USIK_UGCLibrary(const USIK_UGCLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USIK_UGCLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USIK_UGCLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USIK_UGCLibrary) \
	NO_API virtual ~USIK_UGCLibrary();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_UGCLibrary_h_13_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_UGCLibrary_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_UGCLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_UGCLibrary_h_16_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_UGCLibrary_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USIK_UGCLibrary;

// ********** End Class USIK_UGCLibrary ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_UGCLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
