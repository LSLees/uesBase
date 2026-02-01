// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Functions/Parties/SIK_ChangeNumOpenSlots_AsyncFunction.h"

#ifdef STEAMINTEGRATIONKIT_SIK_ChangeNumOpenSlots_AsyncFunction_generated_h
#error "SIK_ChangeNumOpenSlots_AsyncFunction.generated.h already included, missing '#pragma once' in SIK_ChangeNumOpenSlots_AsyncFunction.h"
#endif
#define STEAMINTEGRATIONKIT_SIK_ChangeNumOpenSlots_AsyncFunction_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USIK_ChangeNumOpenSlots_AsyncFunction;
struct FSIK_PartyBeaconID;

// ********** Begin Delegate FChangeNumOpenSlotsDelegate *******************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Parties_SIK_ChangeNumOpenSlots_AsyncFunction_h_10_DELEGATE \
STEAMINTEGRATIONKIT_API void FChangeNumOpenSlotsDelegate_DelegateWrapper(const FMulticastScriptDelegate& ChangeNumOpenSlotsDelegate, const ESIK_Result Result);


// ********** End Delegate FChangeNumOpenSlotsDelegate *********************************************

// ********** Begin Class USIK_ChangeNumOpenSlots_AsyncFunction ************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Parties_SIK_ChangeNumOpenSlots_AsyncFunction_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execChangeNumOpenSlots);


struct Z_Construct_UClass_USIK_ChangeNumOpenSlots_AsyncFunction_Statics;
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_ChangeNumOpenSlots_AsyncFunction_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Parties_SIK_ChangeNumOpenSlots_AsyncFunction_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSIK_ChangeNumOpenSlots_AsyncFunction(); \
	friend struct ::Z_Construct_UClass_USIK_ChangeNumOpenSlots_AsyncFunction_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMINTEGRATIONKIT_API UClass* ::Z_Construct_UClass_USIK_ChangeNumOpenSlots_AsyncFunction_NoRegister(); \
public: \
	DECLARE_CLASS2(USIK_ChangeNumOpenSlots_AsyncFunction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamIntegrationKit"), Z_Construct_UClass_USIK_ChangeNumOpenSlots_AsyncFunction_NoRegister) \
	DECLARE_SERIALIZER(USIK_ChangeNumOpenSlots_AsyncFunction)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Parties_SIK_ChangeNumOpenSlots_AsyncFunction_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USIK_ChangeNumOpenSlots_AsyncFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USIK_ChangeNumOpenSlots_AsyncFunction(USIK_ChangeNumOpenSlots_AsyncFunction&&) = delete; \
	USIK_ChangeNumOpenSlots_AsyncFunction(const USIK_ChangeNumOpenSlots_AsyncFunction&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USIK_ChangeNumOpenSlots_AsyncFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USIK_ChangeNumOpenSlots_AsyncFunction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USIK_ChangeNumOpenSlots_AsyncFunction) \
	NO_API virtual ~USIK_ChangeNumOpenSlots_AsyncFunction();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Parties_SIK_ChangeNumOpenSlots_AsyncFunction_h_11_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Parties_SIK_ChangeNumOpenSlots_AsyncFunction_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Parties_SIK_ChangeNumOpenSlots_AsyncFunction_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Parties_SIK_ChangeNumOpenSlots_AsyncFunction_h_14_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Parties_SIK_ChangeNumOpenSlots_AsyncFunction_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USIK_ChangeNumOpenSlots_AsyncFunction;

// ********** End Class USIK_ChangeNumOpenSlots_AsyncFunction **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Parties_SIK_ChangeNumOpenSlots_AsyncFunction_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
