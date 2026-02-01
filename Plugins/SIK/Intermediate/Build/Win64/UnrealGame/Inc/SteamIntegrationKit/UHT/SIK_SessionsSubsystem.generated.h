// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Functions/Sessions/SIK_SessionsSubsystem.h"

#ifdef STEAMINTEGRATIONKIT_SIK_SessionsSubsystem_generated_h
#error "SIK_SessionsSubsystem.generated.h already included, missing '#pragma once' in SIK_SessionsSubsystem.h"
#endif
#define STEAMINTEGRATIONKIT_SIK_SessionsSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FBlueprintSessionResult;
struct FSIK_CurrentSessionInfo;

// ********** Begin ScriptStruct FSIK_CurrentSessionInfo *******************************************
struct Z_Construct_UScriptStruct_FSIK_CurrentSessionInfo_Statics;
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_SessionsSubsystem_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSIK_CurrentSessionInfo_Statics; \
	STEAMINTEGRATIONKIT_API static class UScriptStruct* StaticStruct();


struct FSIK_CurrentSessionInfo;
// ********** End ScriptStruct FSIK_CurrentSessionInfo *********************************************

// ********** Begin Delegate FSIK_OnSessionUserInviteAccepted **************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_SessionsSubsystem_h_34_DELEGATE \
STEAMINTEGRATIONKIT_API void FSIK_OnSessionUserInviteAccepted_DelegateWrapper(const FMulticastScriptDelegate& SIK_OnSessionUserInviteAccepted, bool bWasSuccesfull, FBlueprintSessionResult const& AcceptedSession);


// ********** End Delegate FSIK_OnSessionUserInviteAccepted ****************************************

// ********** Begin Class USIK_SessionsSubsystem ***************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_SessionsSubsystem_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsSIKActive); \
	DECLARE_FUNCTION(execGetAllJoinedSessionsAndLobbies);


struct Z_Construct_UClass_USIK_SessionsSubsystem_Statics;
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_SessionsSubsystem_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_SessionsSubsystem_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSIK_SessionsSubsystem(); \
	friend struct ::Z_Construct_UClass_USIK_SessionsSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMINTEGRATIONKIT_API UClass* ::Z_Construct_UClass_USIK_SessionsSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(USIK_SessionsSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamIntegrationKit"), Z_Construct_UClass_USIK_SessionsSubsystem_NoRegister) \
	DECLARE_SERIALIZER(USIK_SessionsSubsystem)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_SessionsSubsystem_h_39_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USIK_SessionsSubsystem(USIK_SessionsSubsystem&&) = delete; \
	USIK_SessionsSubsystem(const USIK_SessionsSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USIK_SessionsSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USIK_SessionsSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USIK_SessionsSubsystem)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_SessionsSubsystem_h_36_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_SessionsSubsystem_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_SessionsSubsystem_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_SessionsSubsystem_h_39_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_SessionsSubsystem_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USIK_SessionsSubsystem;

// ********** End Class USIK_SessionsSubsystem *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_SessionsSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
