// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Functions/UserStats/SIK_UserStatsSubsystem.h"

#ifdef STEAMINTEGRATIONKIT_SIK_UserStatsSubsystem_generated_h
#error "SIK_UserStatsSubsystem.generated.h already included, missing '#pragma once' in SIK_UserStatsSubsystem.h"
#endif
#define STEAMINTEGRATIONKIT_SIK_UserStatsSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSIK_SteamId;
struct FSIK_SteamLeaderboard;
struct FSIK_SteamLeaderboardEntries;

// ********** Begin Delegate FOnGlobalAchievementPercentagesReady **********************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_UserStatsSubsystem_h_10_DELEGATE \
STEAMINTEGRATIONKIT_API void FOnGlobalAchievementPercentagesReady_DelegateWrapper(const FMulticastScriptDelegate& OnGlobalAchievementPercentagesReady, ESIK_Result Result, int64 GameID);


// ********** End Delegate FOnGlobalAchievementPercentagesReady ************************************

// ********** Begin Delegate FOnGlobalStatsReceived ************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_UserStatsSubsystem_h_11_DELEGATE \
STEAMINTEGRATIONKIT_API void FOnGlobalStatsReceived_DelegateWrapper(const FMulticastScriptDelegate& OnGlobalStatsReceived, ESIK_Result Result, int64 GameID);


// ********** End Delegate FOnGlobalStatsReceived **************************************************

// ********** Begin Delegate FOnLeaderboardFindResult **********************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_UserStatsSubsystem_h_12_DELEGATE \
STEAMINTEGRATIONKIT_API void FOnLeaderboardFindResult_DelegateWrapper(const FMulticastScriptDelegate& OnLeaderboardFindResult, FSIK_SteamLeaderboard Leaderboard, bool bLeaderboardFound);


// ********** End Delegate FOnLeaderboardFindResult ************************************************

// ********** Begin Delegate FOnLeaderboardScoresDownloaded ****************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_UserStatsSubsystem_h_13_DELEGATE \
STEAMINTEGRATIONKIT_API void FOnLeaderboardScoresDownloaded_DelegateWrapper(const FMulticastScriptDelegate& OnLeaderboardScoresDownloaded, FSIK_SteamLeaderboard Leaderboard, FSIK_SteamLeaderboardEntries Entries, int32 EntryCount);


// ********** End Delegate FOnLeaderboardScoresDownloaded ******************************************

// ********** Begin Delegate FOnLeaderboardScoreUploaded *******************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_UserStatsSubsystem_h_14_DELEGATE \
STEAMINTEGRATIONKIT_API void FOnLeaderboardScoreUploaded_DelegateWrapper(const FMulticastScriptDelegate& OnLeaderboardScoreUploaded, bool bSuccess, FSIK_SteamLeaderboard Leaderboard, int32 Score, bool bScoreChanged, int32 GlobalRank, int32 PreviousGlobalRank);


// ********** End Delegate FOnLeaderboardScoreUploaded *********************************************

// ********** Begin Delegate FOnNumberOfCurrentPlayers *********************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_UserStatsSubsystem_h_15_DELEGATE \
STEAMINTEGRATIONKIT_API void FOnNumberOfCurrentPlayers_DelegateWrapper(const FMulticastScriptDelegate& OnNumberOfCurrentPlayers, int32 NumberOfPlayers);


// ********** End Delegate FOnNumberOfCurrentPlayers ***********************************************

// ********** Begin Delegate FOnUserAchievementIconFetched *****************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_UserStatsSubsystem_h_16_DELEGATE \
STEAMINTEGRATIONKIT_API void FOnUserAchievementIconFetched_DelegateWrapper(const FMulticastScriptDelegate& OnUserAchievementIconFetched, int32 Gameid, const FString& AchievementName, bool bIconFound, int32 IconHandle);


// ********** End Delegate FOnUserAchievementIconFetched *******************************************

// ********** Begin Delegate FOnUserAchievementStored **********************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_UserStatsSubsystem_h_17_DELEGATE \
STEAMINTEGRATIONKIT_API void FOnUserAchievementStored_DelegateWrapper(const FMulticastScriptDelegate& OnUserAchievementStored, int64 GameID, bool bGroupAchievement, const FString& AchievementName, int32 CurProgress, int32 MaxProgress);


// ********** End Delegate FOnUserAchievementStored ************************************************

// ********** Begin Delegate FOnUserStatsReceived **************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_UserStatsSubsystem_h_18_DELEGATE \
STEAMINTEGRATIONKIT_API void FOnUserStatsReceived_DelegateWrapper(const FMulticastScriptDelegate& OnUserStatsReceived, int64 GameID, ESIK_Result Result, FSIK_SteamId steamIDUser);


// ********** End Delegate FOnUserStatsReceived ****************************************************

// ********** Begin Delegate FOnUserStatsStored ****************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_UserStatsSubsystem_h_19_DELEGATE \
STEAMINTEGRATIONKIT_API void FOnUserStatsStored_DelegateWrapper(const FMulticastScriptDelegate& OnUserStatsStored, int64 GameID, ESIK_Result Result);


// ********** End Delegate FOnUserStatsStored ******************************************************

// ********** Begin Delegate FOnUserStatsUnloaded **************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_UserStatsSubsystem_h_20_DELEGATE \
STEAMINTEGRATIONKIT_API void FOnUserStatsUnloaded_DelegateWrapper(const FMulticastScriptDelegate& OnUserStatsUnloaded, FSIK_SteamId steamIDUser);


// ********** End Delegate FOnUserStatsUnloaded ****************************************************

// ********** Begin Class USIK_UserStatsSubsystem **************************************************
struct Z_Construct_UClass_USIK_UserStatsSubsystem_Statics;
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_UserStatsSubsystem_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_UserStatsSubsystem_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSIK_UserStatsSubsystem(); \
	friend struct ::Z_Construct_UClass_USIK_UserStatsSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMINTEGRATIONKIT_API UClass* ::Z_Construct_UClass_USIK_UserStatsSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(USIK_UserStatsSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamIntegrationKit"), Z_Construct_UClass_USIK_UserStatsSubsystem_NoRegister) \
	DECLARE_SERIALIZER(USIK_UserStatsSubsystem)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_UserStatsSubsystem_h_27_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USIK_UserStatsSubsystem(USIK_UserStatsSubsystem&&) = delete; \
	USIK_UserStatsSubsystem(const USIK_UserStatsSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USIK_UserStatsSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USIK_UserStatsSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USIK_UserStatsSubsystem)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_UserStatsSubsystem_h_24_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_UserStatsSubsystem_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_UserStatsSubsystem_h_27_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_UserStatsSubsystem_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USIK_UserStatsSubsystem;

// ********** End Class USIK_UserStatsSubsystem ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_UserStatsSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
