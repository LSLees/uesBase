// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Functions/Sessions/HostMigrationSubsystem.h"

#ifdef STEAMINTEGRATIONKIT_HostMigrationSubsystem_generated_h
#error "HostMigrationSubsystem.generated.h already included, missing '#pragma once' in HostMigrationSubsystem.h"
#endif
#define STEAMINTEGRATIONKIT_HostMigrationSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSIK_SteamId;

// ********** Begin Delegate FOnHostMigration ******************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_HostMigrationSubsystem_h_10_DELEGATE \
STEAMINTEGRATIONKIT_API void FOnHostMigration_DelegateWrapper(const FMulticastScriptDelegate& OnHostMigration, FSIK_SteamId LobbyId, bool bLocalPlayerHost);


// ********** End Delegate FOnHostMigration ********************************************************

// ********** Begin Class UHostMigrationSubsystem **************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_HostMigrationSubsystem_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execStartHostMigration);


struct Z_Construct_UClass_UHostMigrationSubsystem_Statics;
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_UHostMigrationSubsystem_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_HostMigrationSubsystem_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHostMigrationSubsystem(); \
	friend struct ::Z_Construct_UClass_UHostMigrationSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMINTEGRATIONKIT_API UClass* ::Z_Construct_UClass_UHostMigrationSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UHostMigrationSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamIntegrationKit"), Z_Construct_UClass_UHostMigrationSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UHostMigrationSubsystem)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_HostMigrationSubsystem_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHostMigrationSubsystem(UHostMigrationSubsystem&&) = delete; \
	UHostMigrationSubsystem(const UHostMigrationSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHostMigrationSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHostMigrationSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHostMigrationSubsystem)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_HostMigrationSubsystem_h_12_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_HostMigrationSubsystem_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_HostMigrationSubsystem_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_HostMigrationSubsystem_h_15_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_HostMigrationSubsystem_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHostMigrationSubsystem;

// ********** End Class UHostMigrationSubsystem ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_HostMigrationSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
