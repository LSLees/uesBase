// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Functions/Parties/SIK_CreateBeacon_AsyncFunction.h"

#ifdef STEAMINTEGRATIONKIT_SIK_CreateBeacon_AsyncFunction_generated_h
#error "SIK_CreateBeacon_AsyncFunction.generated.h already included, missing '#pragma once' in SIK_CreateBeacon_AsyncFunction.h"
#endif
#define STEAMINTEGRATIONKIT_SIK_CreateBeacon_AsyncFunction_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USIK_CreateBeacon_AsyncFunction;
struct FSIK_PartyBeaconID;
struct FSIK_SteamPartyBeaconLocation;

// ********** Begin Delegate FCreateBeaconDelegate *************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Parties_SIK_CreateBeacon_AsyncFunction_h_10_DELEGATE \
STEAMINTEGRATIONKIT_API void FCreateBeaconDelegate_DelegateWrapper(const FMulticastScriptDelegate& CreateBeaconDelegate, ESIK_Result Result, FSIK_PartyBeaconID BeaconID);


// ********** End Delegate FCreateBeaconDelegate ***************************************************

// ********** Begin Class USIK_CreateBeacon_AsyncFunction ******************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Parties_SIK_CreateBeacon_AsyncFunction_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateBeacon);


struct Z_Construct_UClass_USIK_CreateBeacon_AsyncFunction_Statics;
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_CreateBeacon_AsyncFunction_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Parties_SIK_CreateBeacon_AsyncFunction_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSIK_CreateBeacon_AsyncFunction(); \
	friend struct ::Z_Construct_UClass_USIK_CreateBeacon_AsyncFunction_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMINTEGRATIONKIT_API UClass* ::Z_Construct_UClass_USIK_CreateBeacon_AsyncFunction_NoRegister(); \
public: \
	DECLARE_CLASS2(USIK_CreateBeacon_AsyncFunction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamIntegrationKit"), Z_Construct_UClass_USIK_CreateBeacon_AsyncFunction_NoRegister) \
	DECLARE_SERIALIZER(USIK_CreateBeacon_AsyncFunction)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Parties_SIK_CreateBeacon_AsyncFunction_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USIK_CreateBeacon_AsyncFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USIK_CreateBeacon_AsyncFunction(USIK_CreateBeacon_AsyncFunction&&) = delete; \
	USIK_CreateBeacon_AsyncFunction(const USIK_CreateBeacon_AsyncFunction&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USIK_CreateBeacon_AsyncFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USIK_CreateBeacon_AsyncFunction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USIK_CreateBeacon_AsyncFunction) \
	NO_API virtual ~USIK_CreateBeacon_AsyncFunction();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Parties_SIK_CreateBeacon_AsyncFunction_h_11_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Parties_SIK_CreateBeacon_AsyncFunction_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Parties_SIK_CreateBeacon_AsyncFunction_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Parties_SIK_CreateBeacon_AsyncFunction_h_14_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Parties_SIK_CreateBeacon_AsyncFunction_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USIK_CreateBeacon_AsyncFunction;

// ********** End Class USIK_CreateBeacon_AsyncFunction ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Parties_SIK_CreateBeacon_AsyncFunction_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
