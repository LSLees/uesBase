// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Functions/GameServerStats/SIK_GameServerStatsSubsystem.h"

#ifdef STEAMINTEGRATIONKIT_SIK_GameServerStatsSubsystem_generated_h
#error "SIK_GameServerStatsSubsystem.generated.h already included, missing '#pragma once' in SIK_GameServerStatsSubsystem.h"
#endif
#define STEAMINTEGRATIONKIT_SIK_GameServerStatsSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSIK_SteamId;

// ********** Begin Delegate FGSStatsReceivedDelegate **********************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_GameServerStats_SIK_GameServerStatsSubsystem_h_10_DELEGATE \
STEAMINTEGRATIONKIT_API void FGSStatsReceivedDelegate_DelegateWrapper(const FMulticastScriptDelegate& GSStatsReceivedDelegate, FSIK_SteamId SteamID, ESIK_Result Result);


// ********** End Delegate FGSStatsReceivedDelegate ************************************************

// ********** Begin Delegate FGSStatsStoredDelegate ************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_GameServerStats_SIK_GameServerStatsSubsystem_h_11_DELEGATE \
STEAMINTEGRATIONKIT_API void FGSStatsStoredDelegate_DelegateWrapper(const FMulticastScriptDelegate& GSStatsStoredDelegate, FSIK_SteamId SteamID, ESIK_Result Result);


// ********** End Delegate FGSStatsStoredDelegate **************************************************

// ********** Begin Delegate FGSStatsUnloadedDelegate **********************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_GameServerStats_SIK_GameServerStatsSubsystem_h_12_DELEGATE \
STEAMINTEGRATIONKIT_API void FGSStatsUnloadedDelegate_DelegateWrapper(const FMulticastScriptDelegate& GSStatsUnloadedDelegate, FSIK_SteamId SteamID);


// ********** End Delegate FGSStatsUnloadedDelegate ************************************************

// ********** Begin Class USIK_GameServerStatsSubsystem ********************************************
struct Z_Construct_UClass_USIK_GameServerStatsSubsystem_Statics;
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_GameServerStatsSubsystem_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_GameServerStats_SIK_GameServerStatsSubsystem_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSIK_GameServerStatsSubsystem(); \
	friend struct ::Z_Construct_UClass_USIK_GameServerStatsSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMINTEGRATIONKIT_API UClass* ::Z_Construct_UClass_USIK_GameServerStatsSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(USIK_GameServerStatsSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamIntegrationKit"), Z_Construct_UClass_USIK_GameServerStatsSubsystem_NoRegister) \
	DECLARE_SERIALIZER(USIK_GameServerStatsSubsystem)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_GameServerStats_SIK_GameServerStatsSubsystem_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USIK_GameServerStatsSubsystem(USIK_GameServerStatsSubsystem&&) = delete; \
	USIK_GameServerStatsSubsystem(const USIK_GameServerStatsSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USIK_GameServerStatsSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USIK_GameServerStatsSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USIK_GameServerStatsSubsystem)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_GameServerStats_SIK_GameServerStatsSubsystem_h_13_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_GameServerStats_SIK_GameServerStatsSubsystem_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_GameServerStats_SIK_GameServerStatsSubsystem_h_16_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_GameServerStats_SIK_GameServerStatsSubsystem_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USIK_GameServerStatsSubsystem;

// ********** End Class USIK_GameServerStatsSubsystem **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_GameServerStats_SIK_GameServerStatsSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
