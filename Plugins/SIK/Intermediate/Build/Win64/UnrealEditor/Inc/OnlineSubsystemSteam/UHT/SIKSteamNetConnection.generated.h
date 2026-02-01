// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SIKSteamNetConnection.h"

#ifdef ONLINESUBSYSTEMSTEAM_SIKSteamNetConnection_generated_h
#error "SIKSteamNetConnection.generated.h already included, missing '#pragma once' in SIKSteamNetConnection.h"
#endif
#define ONLINESUBSYSTEMSTEAM_SIKSteamNetConnection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USIKSteamNetConnection ***************************************************
struct Z_Construct_UClass_USIKSteamNetConnection_Statics;
ONLINESUBSYSTEMSTEAM_API UClass* Z_Construct_UClass_USIKSteamNetConnection_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_OnlineSubsystemSteam_Classes_SIKSteamNetConnection_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUSIKSteamNetConnection(); \
	friend struct ::Z_Construct_UClass_USIKSteamNetConnection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ONLINESUBSYSTEMSTEAM_API UClass* ::Z_Construct_UClass_USIKSteamNetConnection_NoRegister(); \
public: \
	DECLARE_CLASS2(USIKSteamNetConnection, UIpConnection, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/OnlineSubsystemSteam"), Z_Construct_UClass_USIKSteamNetConnection_NoRegister) \
	DECLARE_SERIALIZER(USIKSteamNetConnection)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_OnlineSubsystemSteam_Classes_SIKSteamNetConnection_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USIKSteamNetConnection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USIKSteamNetConnection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USIKSteamNetConnection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USIKSteamNetConnection); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USIKSteamNetConnection(USIKSteamNetConnection&&) = delete; \
	USIKSteamNetConnection(const USIKSteamNetConnection&) = delete; \
	NO_API virtual ~USIKSteamNetConnection();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_OnlineSubsystemSteam_Classes_SIKSteamNetConnection_h_14_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_OnlineSubsystemSteam_Classes_SIKSteamNetConnection_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_OnlineSubsystemSteam_Classes_SIKSteamNetConnection_h_17_INCLASS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_OnlineSubsystemSteam_Classes_SIKSteamNetConnection_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USIKSteamNetConnection;

// ********** End Class USIKSteamNetConnection *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_OnlineSubsystemSteam_Classes_SIKSteamNetConnection_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
