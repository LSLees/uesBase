// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Functions/UserStats/SIK_UserStatsLibrary.h"

#ifdef STEAMINTEGRATIONKIT_SIK_UserStatsLibrary_generated_h
#error "SIK_UserStatsLibrary.generated.h already included, missing '#pragma once' in SIK_UserStatsLibrary.h"
#endif
#define STEAMINTEGRATIONKIT_SIK_UserStatsLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;
struct FDateTime;
struct FSIK_SteamId;

// ********** Begin Class USIK_UserStatsLibrary ****************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_UserStatsLibrary_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execStoreStats); \
	DECLARE_FUNCTION(execRequestCurrentStats); \
	DECLARE_FUNCTION(execGetGlobalStatFloat); \
	DECLARE_FUNCTION(execGetGlobalStatInt); \
	DECLARE_FUNCTION(execGetGlobalStatHistoryFloat); \
	DECLARE_FUNCTION(execGetGlobalStatHistoryInt); \
	DECLARE_FUNCTION(execGetNextMostAchievedAchievementInfo); \
	DECLARE_FUNCTION(execGetMostAchievedAchievementInfo); \
	DECLARE_FUNCTION(execGetUserAchievementAndUnlockTime); \
	DECLARE_FUNCTION(execGetUserAchievement); \
	DECLARE_FUNCTION(execIndicateAchievementProgress); \
	DECLARE_FUNCTION(execResetAllStats); \
	DECLARE_FUNCTION(execUpdateAvgRateStat); \
	DECLARE_FUNCTION(execGetAchievementAchievedPercent); \
	DECLARE_FUNCTION(execSetStatFloat); \
	DECLARE_FUNCTION(execSetStatInt); \
	DECLARE_FUNCTION(execGetStatFloat); \
	DECLARE_FUNCTION(execGetStatInt); \
	DECLARE_FUNCTION(execSetAchievement); \
	DECLARE_FUNCTION(execClearAchievement); \
	DECLARE_FUNCTION(execCacheCurrentStats); \
	DECLARE_FUNCTION(execGetAchievementIcon); \
	DECLARE_FUNCTION(execGetNumOfAchievements); \
	DECLARE_FUNCTION(execGetAchievementDisplayAttribute); \
	DECLARE_FUNCTION(execGetAchievementAndUnlockTime); \
	DECLARE_FUNCTION(execGetAchievementName); \
	DECLARE_FUNCTION(execGetAchievement); \
	DECLARE_FUNCTION(execGetLeaderboardDisplayType); \
	DECLARE_FUNCTION(execGetLeaderboardSortMethod); \
	DECLARE_FUNCTION(execGetLeaderboardEntryCount); \
	DECLARE_FUNCTION(execGetLeaderboardName);


struct Z_Construct_UClass_USIK_UserStatsLibrary_Statics;
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_UserStatsLibrary_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_UserStatsLibrary_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSIK_UserStatsLibrary(); \
	friend struct ::Z_Construct_UClass_USIK_UserStatsLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMINTEGRATIONKIT_API UClass* ::Z_Construct_UClass_USIK_UserStatsLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(USIK_UserStatsLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamIntegrationKit"), Z_Construct_UClass_USIK_UserStatsLibrary_NoRegister) \
	DECLARE_SERIALIZER(USIK_UserStatsLibrary)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_UserStatsLibrary_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USIK_UserStatsLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USIK_UserStatsLibrary(USIK_UserStatsLibrary&&) = delete; \
	USIK_UserStatsLibrary(const USIK_UserStatsLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USIK_UserStatsLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USIK_UserStatsLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USIK_UserStatsLibrary) \
	NO_API virtual ~USIK_UserStatsLibrary();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_UserStatsLibrary_h_19_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_UserStatsLibrary_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_UserStatsLibrary_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_UserStatsLibrary_h_22_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_UserStatsLibrary_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USIK_UserStatsLibrary;

// ********** End Class USIK_UserStatsLibrary ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_UserStatsLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
