// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SIKSteamNetDriver.h"

#ifdef ONLINESUBSYSTEMSTEAM_SIKSteamNetDriver_generated_h
#error "SIKSteamNetDriver.generated.h already included, missing '#pragma once' in SIKSteamNetDriver.h"
#endif
#define ONLINESUBSYSTEMSTEAM_SIKSteamNetDriver_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USIKSteamNetDriver *******************************************************
struct Z_Construct_UClass_USIKSteamNetDriver_Statics;
ONLINESUBSYSTEMSTEAM_API UClass* Z_Construct_UClass_USIKSteamNetDriver_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_OnlineSubsystemSteam_Classes_SIKSteamNetDriver_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUSIKSteamNetDriver(); \
	friend struct ::Z_Construct_UClass_USIKSteamNetDriver_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ONLINESUBSYSTEMSTEAM_API UClass* ::Z_Construct_UClass_USIKSteamNetDriver_NoRegister(); \
public: \
	DECLARE_CLASS2(USIKSteamNetDriver, UIpNetDriver, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/OnlineSubsystemSteam"), Z_Construct_UClass_USIKSteamNetDriver_NoRegister) \
	DECLARE_SERIALIZER(USIKSteamNetDriver)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_OnlineSubsystemSteam_Classes_SIKSteamNetDriver_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USIKSteamNetDriver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USIKSteamNetDriver) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USIKSteamNetDriver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USIKSteamNetDriver); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USIKSteamNetDriver(USIKSteamNetDriver&&) = delete; \
	USIKSteamNetDriver(const USIKSteamNetDriver&) = delete; \
	NO_API virtual ~USIKSteamNetDriver();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_OnlineSubsystemSteam_Classes_SIKSteamNetDriver_h_17_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_OnlineSubsystemSteam_Classes_SIKSteamNetDriver_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_OnlineSubsystemSteam_Classes_SIKSteamNetDriver_h_20_INCLASS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_OnlineSubsystemSteam_Classes_SIKSteamNetDriver_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USIKSteamNetDriver;

// ********** End Class USIKSteamNetDriver *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_OnlineSubsystemSteam_Classes_SIKSteamNetDriver_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
