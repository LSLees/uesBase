// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Functions/Parties/SIK_PartiesLibrary.h"

#ifdef STEAMINTEGRATIONKIT_SIK_PartiesLibrary_generated_h
#error "SIK_PartiesLibrary.generated.h already included, missing '#pragma once' in SIK_PartiesLibrary.h"
#endif
#define STEAMINTEGRATIONKIT_SIK_PartiesLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSIK_PartyBeaconID;
struct FSIK_SteamId;
struct FSIK_SteamPartyBeaconLocation;

// ********** Begin Class USIK_PartiesLibrary ******************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Parties_SIK_PartiesLibrary_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetBeaconLocationData); \
	DECLARE_FUNCTION(execGetBeaconDetails); \
	DECLARE_FUNCTION(execGetBeaconByIndex); \
	DECLARE_FUNCTION(execGetNumActiveBeacons); \
	DECLARE_FUNCTION(execDestroyBeacon); \
	DECLARE_FUNCTION(execOnReservationCompleted); \
	DECLARE_FUNCTION(execGetAvailableBeaconLocations); \
	DECLARE_FUNCTION(execGetNumAvailableBeaconLocations);


struct Z_Construct_UClass_USIK_PartiesLibrary_Statics;
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_PartiesLibrary_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Parties_SIK_PartiesLibrary_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSIK_PartiesLibrary(); \
	friend struct ::Z_Construct_UClass_USIK_PartiesLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMINTEGRATIONKIT_API UClass* ::Z_Construct_UClass_USIK_PartiesLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(USIK_PartiesLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamIntegrationKit"), Z_Construct_UClass_USIK_PartiesLibrary_NoRegister) \
	DECLARE_SERIALIZER(USIK_PartiesLibrary)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Parties_SIK_PartiesLibrary_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USIK_PartiesLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USIK_PartiesLibrary(USIK_PartiesLibrary&&) = delete; \
	USIK_PartiesLibrary(const USIK_PartiesLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USIK_PartiesLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USIK_PartiesLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USIK_PartiesLibrary) \
	NO_API virtual ~USIK_PartiesLibrary();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Parties_SIK_PartiesLibrary_h_10_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Parties_SIK_PartiesLibrary_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Parties_SIK_PartiesLibrary_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Parties_SIK_PartiesLibrary_h_13_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Parties_SIK_PartiesLibrary_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USIK_PartiesLibrary;

// ********** End Class USIK_PartiesLibrary ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Parties_SIK_PartiesLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
