// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Functions/UserStats/SIK_UploadLeaderboardScore_AsyncFunction.h"

#ifdef STEAMINTEGRATIONKIT_SIK_UploadLeaderboardScore_AsyncFunction_generated_h
#error "SIK_UploadLeaderboardScore_AsyncFunction.generated.h already included, missing '#pragma once' in SIK_UploadLeaderboardScore_AsyncFunction.h"
#endif
#define STEAMINTEGRATIONKIT_SIK_UploadLeaderboardScore_AsyncFunction_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USIK_UploadLeaderboardScore_AsyncFunction;
struct FSIK_LeaderboardScoreUploaded;

// ********** Begin ScriptStruct FSIK_LeaderboardScoreUploaded *************************************
struct Z_Construct_UScriptStruct_FSIK_LeaderboardScoreUploaded_Statics;
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_UploadLeaderboardScore_AsyncFunction_h_21_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSIK_LeaderboardScoreUploaded_Statics; \
	STEAMINTEGRATIONKIT_API static class UScriptStruct* StaticStruct();


struct FSIK_LeaderboardScoreUploaded;
// ********** End ScriptStruct FSIK_LeaderboardScoreUploaded ***************************************

// ********** Begin Delegate FLeaderboardScoreUploaded_Delegate ************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_UploadLeaderboardScore_AsyncFunction_h_39_DELEGATE \
STEAMINTEGRATIONKIT_API void FLeaderboardScoreUploaded_Delegate_DelegateWrapper(const FMulticastScriptDelegate& LeaderboardScoreUploaded_Delegate, FSIK_LeaderboardScoreUploaded const& LeaderboardScoreUploaded);


// ********** End Delegate FLeaderboardScoreUploaded_Delegate **************************************

// ********** Begin Class USIK_UploadLeaderboardScore_AsyncFunction ********************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_UploadLeaderboardScore_AsyncFunction_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUploadLeaderboardScore);


struct Z_Construct_UClass_USIK_UploadLeaderboardScore_AsyncFunction_Statics;
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_UploadLeaderboardScore_AsyncFunction_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_UploadLeaderboardScore_AsyncFunction_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSIK_UploadLeaderboardScore_AsyncFunction(); \
	friend struct ::Z_Construct_UClass_USIK_UploadLeaderboardScore_AsyncFunction_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMINTEGRATIONKIT_API UClass* ::Z_Construct_UClass_USIK_UploadLeaderboardScore_AsyncFunction_NoRegister(); \
public: \
	DECLARE_CLASS2(USIK_UploadLeaderboardScore_AsyncFunction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamIntegrationKit"), Z_Construct_UClass_USIK_UploadLeaderboardScore_AsyncFunction_NoRegister) \
	DECLARE_SERIALIZER(USIK_UploadLeaderboardScore_AsyncFunction)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_UploadLeaderboardScore_AsyncFunction_h_44_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USIK_UploadLeaderboardScore_AsyncFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USIK_UploadLeaderboardScore_AsyncFunction(USIK_UploadLeaderboardScore_AsyncFunction&&) = delete; \
	USIK_UploadLeaderboardScore_AsyncFunction(const USIK_UploadLeaderboardScore_AsyncFunction&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USIK_UploadLeaderboardScore_AsyncFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USIK_UploadLeaderboardScore_AsyncFunction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USIK_UploadLeaderboardScore_AsyncFunction) \
	NO_API virtual ~USIK_UploadLeaderboardScore_AsyncFunction();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_UploadLeaderboardScore_AsyncFunction_h_41_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_UploadLeaderboardScore_AsyncFunction_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_UploadLeaderboardScore_AsyncFunction_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_UploadLeaderboardScore_AsyncFunction_h_44_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_UploadLeaderboardScore_AsyncFunction_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USIK_UploadLeaderboardScore_AsyncFunction;

// ********** End Class USIK_UploadLeaderboardScore_AsyncFunction **********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_UploadLeaderboardScore_AsyncFunction_h

// ********** Begin Enum ESIK_LeaderboardUploadScoreMethod *****************************************
#define FOREACH_ENUM_ESIK_LEADERBOARDUPLOADSCOREMETHOD(op) \
	op(LeaderboardUploadScoreMethodNone) \
	op(LeaderboardUploadScoreMethodKeepBest) \
	op(LeaderboardUploadScoreMethodForceUpdate) 
// ********** End Enum ESIK_LeaderboardUploadScoreMethod *******************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
