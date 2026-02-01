// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Functions/Networking/SIK_NetworkingSubsystem.h"

#ifdef STEAMINTEGRATIONKIT_SIK_NetworkingSubsystem_generated_h
#error "SIK_NetworkingSubsystem.generated.h already included, missing '#pragma once' in SIK_NetworkingSubsystem.h"
#endif
#define STEAMINTEGRATIONKIT_SIK_NetworkingSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSIK_SteamId;

// ********** Begin Delegate FOnP2PSessionConnectFail **********************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Networking_SIK_NetworkingSubsystem_h_10_DELEGATE \
STEAMINTEGRATIONKIT_API void FOnP2PSessionConnectFail_DelegateWrapper(const FMulticastScriptDelegate& OnP2PSessionConnectFail, FSIK_SteamId SteamID, ESIK_P2PSessionError Error);


// ********** End Delegate FOnP2PSessionConnectFail ************************************************

// ********** Begin Delegate FOnP2PSessionRequest **************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Networking_SIK_NetworkingSubsystem_h_11_DELEGATE \
STEAMINTEGRATIONKIT_API void FOnP2PSessionRequest_DelegateWrapper(const FMulticastScriptDelegate& OnP2PSessionRequest, FSIK_SteamId SteamID);


// ********** End Delegate FOnP2PSessionRequest ****************************************************

// ********** Begin Class USIK_NetworkingSubsystem *************************************************
struct Z_Construct_UClass_USIK_NetworkingSubsystem_Statics;
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_NetworkingSubsystem_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Networking_SIK_NetworkingSubsystem_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSIK_NetworkingSubsystem(); \
	friend struct ::Z_Construct_UClass_USIK_NetworkingSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMINTEGRATIONKIT_API UClass* ::Z_Construct_UClass_USIK_NetworkingSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(USIK_NetworkingSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamIntegrationKit"), Z_Construct_UClass_USIK_NetworkingSubsystem_NoRegister) \
	DECLARE_SERIALIZER(USIK_NetworkingSubsystem)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Networking_SIK_NetworkingSubsystem_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USIK_NetworkingSubsystem(USIK_NetworkingSubsystem&&) = delete; \
	USIK_NetworkingSubsystem(const USIK_NetworkingSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USIK_NetworkingSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USIK_NetworkingSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USIK_NetworkingSubsystem)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Networking_SIK_NetworkingSubsystem_h_13_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Networking_SIK_NetworkingSubsystem_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Networking_SIK_NetworkingSubsystem_h_16_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Networking_SIK_NetworkingSubsystem_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USIK_NetworkingSubsystem;

// ********** End Class USIK_NetworkingSubsystem ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Networking_SIK_NetworkingSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
