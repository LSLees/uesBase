// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Functions/NetworkingUtils/SIK_NetworkingUtilsLibrary.h"

#ifdef STEAMINTEGRATIONKIT_SIK_NetworkingUtilsLibrary_generated_h
#error "SIK_NetworkingUtilsLibrary.generated.h already included, missing '#pragma once' in SIK_NetworkingUtilsLibrary.h"
#endif
#define STEAMINTEGRATIONKIT_SIK_NetworkingUtilsLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSIK_SteamNetworkingPOPID;
struct FSIK_SteamNetworkPingLocation;

// ********** Begin Class USIK_NetworkingUtilsLibrary **********************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_NetworkingUtils_SIK_NetworkingUtilsLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetP2PTransportICEEnabled); \
	DECLARE_FUNCTION(execSetP2PTransportICEEnabled); \
	DECLARE_FUNCTION(execGetPOPList); \
	DECLARE_FUNCTION(execGetPOPCount); \
	DECLARE_FUNCTION(execGetDirectPingToPOP); \
	DECLARE_FUNCTION(execGetPingToDataCenter); \
	DECLARE_FUNCTION(execCheckPingDataUpToDate); \
	DECLARE_FUNCTION(execParsePingLocationString); \
	DECLARE_FUNCTION(execConvertPingLocationToString); \
	DECLARE_FUNCTION(execEstimatePingTimeFromLocalHost); \
	DECLARE_FUNCTION(execEstimatePingTimeBetweenTwoLocations); \
	DECLARE_FUNCTION(execGetLocalPingLocation); \
	DECLARE_FUNCTION(execGetRelayNetworkStatus); \
	DECLARE_FUNCTION(execInitRelayNetworkAccess);


struct Z_Construct_UClass_USIK_NetworkingUtilsLibrary_Statics;
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_NetworkingUtilsLibrary_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_NetworkingUtils_SIK_NetworkingUtilsLibrary_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSIK_NetworkingUtilsLibrary(); \
	friend struct ::Z_Construct_UClass_USIK_NetworkingUtilsLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMINTEGRATIONKIT_API UClass* ::Z_Construct_UClass_USIK_NetworkingUtilsLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(USIK_NetworkingUtilsLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamIntegrationKit"), Z_Construct_UClass_USIK_NetworkingUtilsLibrary_NoRegister) \
	DECLARE_SERIALIZER(USIK_NetworkingUtilsLibrary)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_NetworkingUtils_SIK_NetworkingUtilsLibrary_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USIK_NetworkingUtilsLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USIK_NetworkingUtilsLibrary(USIK_NetworkingUtilsLibrary&&) = delete; \
	USIK_NetworkingUtilsLibrary(const USIK_NetworkingUtilsLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USIK_NetworkingUtilsLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USIK_NetworkingUtilsLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USIK_NetworkingUtilsLibrary) \
	NO_API virtual ~USIK_NetworkingUtilsLibrary();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_NetworkingUtils_SIK_NetworkingUtilsLibrary_h_13_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_NetworkingUtils_SIK_NetworkingUtilsLibrary_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_NetworkingUtils_SIK_NetworkingUtilsLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_NetworkingUtils_SIK_NetworkingUtilsLibrary_h_16_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_NetworkingUtils_SIK_NetworkingUtilsLibrary_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USIK_NetworkingUtilsLibrary;

// ********** End Class USIK_NetworkingUtilsLibrary ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_NetworkingUtils_SIK_NetworkingUtilsLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
