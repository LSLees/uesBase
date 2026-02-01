// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Functions/GameServerStats/SIK_GameServerStatsLibrary.h"

#ifdef STEAMINTEGRATIONKIT_SIK_GameServerStatsLibrary_generated_h
#error "SIK_GameServerStatsLibrary.generated.h already included, missing '#pragma once' in SIK_GameServerStatsLibrary.h"
#endif
#define STEAMINTEGRATIONKIT_SIK_GameServerStatsLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSIK_SteamId;

// ********** Begin Class USIK_GameServerStatsLibrary **********************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_GameServerStats_SIK_GameServerStatsLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateUserAvgRateStat); \
	DECLARE_FUNCTION(execStoreUserStats); \
	DECLARE_FUNCTION(execSetFloatUserStat); \
	DECLARE_FUNCTION(execSetIntUserStat); \
	DECLARE_FUNCTION(execSetUserAchievement); \
	DECLARE_FUNCTION(execRequestUserStats); \
	DECLARE_FUNCTION(execGetFloatUserStat); \
	DECLARE_FUNCTION(execGetIntUserStat); \
	DECLARE_FUNCTION(execGetUserAchievement); \
	DECLARE_FUNCTION(execClearUserAchievement);


struct Z_Construct_UClass_USIK_GameServerStatsLibrary_Statics;
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_GameServerStatsLibrary_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_GameServerStats_SIK_GameServerStatsLibrary_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSIK_GameServerStatsLibrary(); \
	friend struct ::Z_Construct_UClass_USIK_GameServerStatsLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMINTEGRATIONKIT_API UClass* ::Z_Construct_UClass_USIK_GameServerStatsLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(USIK_GameServerStatsLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamIntegrationKit"), Z_Construct_UClass_USIK_GameServerStatsLibrary_NoRegister) \
	DECLARE_SERIALIZER(USIK_GameServerStatsLibrary)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_GameServerStats_SIK_GameServerStatsLibrary_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USIK_GameServerStatsLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USIK_GameServerStatsLibrary(USIK_GameServerStatsLibrary&&) = delete; \
	USIK_GameServerStatsLibrary(const USIK_GameServerStatsLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USIK_GameServerStatsLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USIK_GameServerStatsLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USIK_GameServerStatsLibrary) \
	NO_API virtual ~USIK_GameServerStatsLibrary();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_GameServerStats_SIK_GameServerStatsLibrary_h_13_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_GameServerStats_SIK_GameServerStatsLibrary_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_GameServerStats_SIK_GameServerStatsLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_GameServerStats_SIK_GameServerStatsLibrary_h_16_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_GameServerStats_SIK_GameServerStatsLibrary_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USIK_GameServerStatsLibrary;

// ********** End Class USIK_GameServerStatsLibrary ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_GameServerStats_SIK_GameServerStatsLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
