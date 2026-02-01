// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Functions/RemoteStorage/SIK_RemoteStorageLibrary.h"

#ifdef STEAMINTEGRATIONKIT_SIK_RemoteStorageLibrary_generated_h
#error "SIK_RemoteStorageLibrary.generated.h already included, missing '#pragma once' in SIK_RemoteStorageLibrary.h"
#endif
#define STEAMINTEGRATIONKIT_SIK_RemoteStorageLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDateTime;
struct FSIK_SteamId;
struct FSIK_UGCFileWriteStreamHandle;
struct FSIK_UGCHandle;

// ********** Begin Class USIK_RemoteStorageLibrary ************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_RemoteStorage_SIK_RemoteStorageLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUGCRead); \
	DECLARE_FUNCTION(execSetSyncPlatforms); \
	DECLARE_FUNCTION(execSetCloudEnabledForApp); \
	DECLARE_FUNCTION(execIsCloudEnabledForApp); \
	DECLARE_FUNCTION(execIsCloudEnabledForAccount); \
	DECLARE_FUNCTION(execGetUGCDownloadProgress); \
	DECLARE_FUNCTION(execGetUGCDetails); \
	DECLARE_FUNCTION(execGetSyncPlatforms); \
	DECLARE_FUNCTION(execGetQuota); \
	DECLARE_FUNCTION(execGetLocalFileChange); \
	DECLARE_FUNCTION(execGetLocalFileChangeCount); \
	DECLARE_FUNCTION(execGetFileTimestamp); \
	DECLARE_FUNCTION(execGetFileSize); \
	DECLARE_FUNCTION(execGetFileNameAndSize); \
	DECLARE_FUNCTION(execGetFileCount); \
	DECLARE_FUNCTION(execGetCachedUGCHandle); \
	DECLARE_FUNCTION(execGetCachedUGCCount); \
	DECLARE_FUNCTION(execFileWriteStreamWriteChunk); \
	DECLARE_FUNCTION(execFileWriteStreamOpen); \
	DECLARE_FUNCTION(execFileWriteStreamClose); \
	DECLARE_FUNCTION(execFileWriteStreamCancel); \
	DECLARE_FUNCTION(execFileWrite); \
	DECLARE_FUNCTION(execFileRead); \
	DECLARE_FUNCTION(execFilePersisted); \
	DECLARE_FUNCTION(execFileForget); \
	DECLARE_FUNCTION(execFileExists); \
	DECLARE_FUNCTION(execFileDelete); \
	DECLARE_FUNCTION(execEndFileWriteBatch); \
	DECLARE_FUNCTION(execBeginFileWriteBatch);


struct Z_Construct_UClass_USIK_RemoteStorageLibrary_Statics;
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_RemoteStorageLibrary_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_RemoteStorage_SIK_RemoteStorageLibrary_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSIK_RemoteStorageLibrary(); \
	friend struct ::Z_Construct_UClass_USIK_RemoteStorageLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMINTEGRATIONKIT_API UClass* ::Z_Construct_UClass_USIK_RemoteStorageLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(USIK_RemoteStorageLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamIntegrationKit"), Z_Construct_UClass_USIK_RemoteStorageLibrary_NoRegister) \
	DECLARE_SERIALIZER(USIK_RemoteStorageLibrary)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_RemoteStorage_SIK_RemoteStorageLibrary_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USIK_RemoteStorageLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USIK_RemoteStorageLibrary(USIK_RemoteStorageLibrary&&) = delete; \
	USIK_RemoteStorageLibrary(const USIK_RemoteStorageLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USIK_RemoteStorageLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USIK_RemoteStorageLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USIK_RemoteStorageLibrary) \
	NO_API virtual ~USIK_RemoteStorageLibrary();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_RemoteStorage_SIK_RemoteStorageLibrary_h_13_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_RemoteStorage_SIK_RemoteStorageLibrary_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_RemoteStorage_SIK_RemoteStorageLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_RemoteStorage_SIK_RemoteStorageLibrary_h_16_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_RemoteStorage_SIK_RemoteStorageLibrary_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USIK_RemoteStorageLibrary;

// ********** End Class USIK_RemoteStorageLibrary **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_RemoteStorage_SIK_RemoteStorageLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
