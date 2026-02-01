// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Functions/Inventory/SIK_RequestPrices_AsyncFunction.h"

#ifdef STEAMINTEGRATIONKIT_SIK_RequestPrices_AsyncFunction_generated_h
#error "SIK_RequestPrices_AsyncFunction.generated.h already included, missing '#pragma once' in SIK_RequestPrices_AsyncFunction.h"
#endif
#define STEAMINTEGRATIONKIT_SIK_RequestPrices_AsyncFunction_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USIK_RequestPrices_AsyncFunction;

// ********** Begin Delegate FOnRequestPrices ******************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Inventory_SIK_RequestPrices_AsyncFunction_h_10_DELEGATE \
STEAMINTEGRATIONKIT_API void FOnRequestPrices_DelegateWrapper(const FMulticastScriptDelegate& OnRequestPrices, ESIK_Result Result, const FString& CurrencyCode);


// ********** End Delegate FOnRequestPrices ********************************************************

// ********** Begin Class USIK_RequestPrices_AsyncFunction *****************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Inventory_SIK_RequestPrices_AsyncFunction_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRequestPrices);


struct Z_Construct_UClass_USIK_RequestPrices_AsyncFunction_Statics;
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_RequestPrices_AsyncFunction_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Inventory_SIK_RequestPrices_AsyncFunction_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSIK_RequestPrices_AsyncFunction(); \
	friend struct ::Z_Construct_UClass_USIK_RequestPrices_AsyncFunction_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMINTEGRATIONKIT_API UClass* ::Z_Construct_UClass_USIK_RequestPrices_AsyncFunction_NoRegister(); \
public: \
	DECLARE_CLASS2(USIK_RequestPrices_AsyncFunction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamIntegrationKit"), Z_Construct_UClass_USIK_RequestPrices_AsyncFunction_NoRegister) \
	DECLARE_SERIALIZER(USIK_RequestPrices_AsyncFunction)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Inventory_SIK_RequestPrices_AsyncFunction_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USIK_RequestPrices_AsyncFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USIK_RequestPrices_AsyncFunction(USIK_RequestPrices_AsyncFunction&&) = delete; \
	USIK_RequestPrices_AsyncFunction(const USIK_RequestPrices_AsyncFunction&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USIK_RequestPrices_AsyncFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USIK_RequestPrices_AsyncFunction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USIK_RequestPrices_AsyncFunction) \
	NO_API virtual ~USIK_RequestPrices_AsyncFunction();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Inventory_SIK_RequestPrices_AsyncFunction_h_12_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Inventory_SIK_RequestPrices_AsyncFunction_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Inventory_SIK_RequestPrices_AsyncFunction_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Inventory_SIK_RequestPrices_AsyncFunction_h_15_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Inventory_SIK_RequestPrices_AsyncFunction_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USIK_RequestPrices_AsyncFunction;

// ********** End Class USIK_RequestPrices_AsyncFunction *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Inventory_SIK_RequestPrices_AsyncFunction_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
