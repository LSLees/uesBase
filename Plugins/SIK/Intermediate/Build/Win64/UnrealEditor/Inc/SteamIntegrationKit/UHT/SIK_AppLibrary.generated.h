// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Functions/Apps/SIK_AppLibrary.h"

#ifdef STEAMINTEGRATIONKIT_SIK_AppLibrary_generated_h
#error "SIK_AppLibrary.generated.h already included, missing '#pragma once' in SIK_AppLibrary.h"
#endif
#define STEAMINTEGRATIONKIT_SIK_AppLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSIK_AppId;
struct FSIK_SteamId;

// ********** Begin Class USIK_AppLibrary **********************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Apps_SIK_AppLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUninstallDLC); \
	DECLARE_FUNCTION(execMarkContentCorrupt); \
	DECLARE_FUNCTION(execInstallDLC); \
	DECLARE_FUNCTION(execGetLaunchQueryParam); \
	DECLARE_FUNCTION(execGetLaunchCommandLine); \
	DECLARE_FUNCTION(execGetInstalledDepots); \
	DECLARE_FUNCTION(execGetEarliestPurchaseUnixTime); \
	DECLARE_FUNCTION(execGetDLCDownloadProgress); \
	DECLARE_FUNCTION(execGetDLCCount); \
	DECLARE_FUNCTION(execGetCurrentGameLanguage); \
	DECLARE_FUNCTION(execGetCurrentBetaName); \
	DECLARE_FUNCTION(execGetAvailableGameLanguages); \
	DECLARE_FUNCTION(execGetAppOwner); \
	DECLARE_FUNCTION(execGetAppInstallDir); \
	DECLARE_FUNCTION(execGetAppBuildID); \
	DECLARE_FUNCTION(execIsVACBanned); \
	DECLARE_FUNCTION(execIsTimedTrial); \
	DECLARE_FUNCTION(execIsSubscribedFromFreeWeekend); \
	DECLARE_FUNCTION(execIsSubscribedFromFamilySharing); \
	DECLARE_FUNCTION(execIsSubscribedApp); \
	DECLARE_FUNCTION(execIsSubscribed); \
	DECLARE_FUNCTION(execIsLowViolence); \
	DECLARE_FUNCTION(execIsDLCInstalled); \
	DECLARE_FUNCTION(execIsCybercafe); \
	DECLARE_FUNCTION(execIsAppInstalled); \
	DECLARE_FUNCTION(execGetDLCDataByIndex);


struct Z_Construct_UClass_USIK_AppLibrary_Statics;
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_AppLibrary_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Apps_SIK_AppLibrary_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSIK_AppLibrary(); \
	friend struct ::Z_Construct_UClass_USIK_AppLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMINTEGRATIONKIT_API UClass* ::Z_Construct_UClass_USIK_AppLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(USIK_AppLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamIntegrationKit"), Z_Construct_UClass_USIK_AppLibrary_NoRegister) \
	DECLARE_SERIALIZER(USIK_AppLibrary)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Apps_SIK_AppLibrary_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USIK_AppLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USIK_AppLibrary(USIK_AppLibrary&&) = delete; \
	USIK_AppLibrary(const USIK_AppLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USIK_AppLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USIK_AppLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USIK_AppLibrary) \
	NO_API virtual ~USIK_AppLibrary();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Apps_SIK_AppLibrary_h_13_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Apps_SIK_AppLibrary_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Apps_SIK_AppLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Apps_SIK_AppLibrary_h_16_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Apps_SIK_AppLibrary_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USIK_AppLibrary;

// ********** End Class USIK_AppLibrary ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Apps_SIK_AppLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
