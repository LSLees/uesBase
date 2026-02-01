// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Functions/UserStats/SIK_DownloadLeaderboardEntries_AsyncFunction.h"

#ifdef STEAMINTEGRATIONKIT_SIK_DownloadLeaderboardEntries_AsyncFunction_generated_h
#error "SIK_DownloadLeaderboardEntries_AsyncFunction.generated.h already included, missing '#pragma once' in SIK_DownloadLeaderboardEntries_AsyncFunction.h"
#endif
#define STEAMINTEGRATIONKIT_SIK_DownloadLeaderboardEntries_AsyncFunction_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USIK_DownloadLeaderboardEntries_AsyncFunction;
struct FDownloadedLeaderboardEntry;

// ********** Begin ScriptStruct FDownloadedLeaderboardEntry ***************************************
struct Z_Construct_UScriptStruct_FDownloadedLeaderboardEntry_Statics;
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_DownloadLeaderboardEntries_AsyncFunction_h_22_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDownloadedLeaderboardEntry_Statics; \
	STEAMINTEGRATIONKIT_API static class UScriptStruct* StaticStruct();


struct FDownloadedLeaderboardEntry;
// ********** End ScriptStruct FDownloadedLeaderboardEntry *****************************************

// ********** Begin Delegate FLeaderboardScoresDownloaded ******************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_DownloadLeaderboardEntries_AsyncFunction_h_43_DELEGATE \
STEAMINTEGRATIONKIT_API void FLeaderboardScoresDownloaded_DelegateWrapper(const FMulticastScriptDelegate& LeaderboardScoresDownloaded, TArray<FDownloadedLeaderboardEntry> const& LeaderboardEntries);


// ********** End Delegate FLeaderboardScoresDownloaded ********************************************

// ********** Begin Class USIK_DownloadLeaderboardEntries_AsyncFunction ****************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_DownloadLeaderboardEntries_AsyncFunction_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDownloadLeaderboardEntries);


struct Z_Construct_UClass_USIK_DownloadLeaderboardEntries_AsyncFunction_Statics;
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_DownloadLeaderboardEntries_AsyncFunction_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_DownloadLeaderboardEntries_AsyncFunction_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSIK_DownloadLeaderboardEntries_AsyncFunction(); \
	friend struct ::Z_Construct_UClass_USIK_DownloadLeaderboardEntries_AsyncFunction_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMINTEGRATIONKIT_API UClass* ::Z_Construct_UClass_USIK_DownloadLeaderboardEntries_AsyncFunction_NoRegister(); \
public: \
	DECLARE_CLASS2(USIK_DownloadLeaderboardEntries_AsyncFunction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamIntegrationKit"), Z_Construct_UClass_USIK_DownloadLeaderboardEntries_AsyncFunction_NoRegister) \
	DECLARE_SERIALIZER(USIK_DownloadLeaderboardEntries_AsyncFunction)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_DownloadLeaderboardEntries_AsyncFunction_h_47_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USIK_DownloadLeaderboardEntries_AsyncFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USIK_DownloadLeaderboardEntries_AsyncFunction(USIK_DownloadLeaderboardEntries_AsyncFunction&&) = delete; \
	USIK_DownloadLeaderboardEntries_AsyncFunction(const USIK_DownloadLeaderboardEntries_AsyncFunction&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USIK_DownloadLeaderboardEntries_AsyncFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USIK_DownloadLeaderboardEntries_AsyncFunction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USIK_DownloadLeaderboardEntries_AsyncFunction) \
	NO_API virtual ~USIK_DownloadLeaderboardEntries_AsyncFunction();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_DownloadLeaderboardEntries_AsyncFunction_h_44_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_DownloadLeaderboardEntries_AsyncFunction_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_DownloadLeaderboardEntries_AsyncFunction_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_DownloadLeaderboardEntries_AsyncFunction_h_47_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_DownloadLeaderboardEntries_AsyncFunction_h_47_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USIK_DownloadLeaderboardEntries_AsyncFunction;

// ********** End Class USIK_DownloadLeaderboardEntries_AsyncFunction ******************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_DownloadLeaderboardEntries_AsyncFunction_h

// ********** Begin Enum ESIK_LeaderboardDataRequest ***********************************************
#define FOREACH_ENUM_ESIK_LEADERBOARDDATAREQUEST(op) \
	op(LeaderboardDataRequestGlobal) \
	op(LeaderboardDataRequestGlobalAroundUser) \
	op(LeaderboardDataRequestFriends) \
	op(LeaderboardDataRequestUsers) 
// ********** End Enum ESIK_LeaderboardDataRequest *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
