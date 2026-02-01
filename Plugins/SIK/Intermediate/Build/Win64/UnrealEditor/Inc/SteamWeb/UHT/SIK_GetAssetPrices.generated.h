// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Functions/Economy/SIK_GetAssetPrices.h"

#ifdef STEAMWEB_SIK_GetAssetPrices_generated_h
#error "SIK_GetAssetPrices.generated.h already included, missing '#pragma once' in SIK_GetAssetPrices.h"
#endif
#define STEAMWEB_SIK_GetAssetPrices_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USIK_GetAssetPrices;
struct FSIK_GetAssetPricesOptional;

// ********** Begin ScriptStruct FSIK_GetAssetPricesOptional ***************************************
struct Z_Construct_UScriptStruct_FSIK_GetAssetPricesOptional_Statics;
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Economy_SIK_GetAssetPrices_h_12_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSIK_GetAssetPricesOptional_Statics; \
	STEAMWEB_API static class UScriptStruct* StaticStruct();


struct FSIK_GetAssetPricesOptional;
// ********** End ScriptStruct FSIK_GetAssetPricesOptional *****************************************

// ********** Begin Class USIK_GetAssetPrices ******************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Economy_SIK_GetAssetPrices_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAssetPrices);


struct Z_Construct_UClass_USIK_GetAssetPrices_Statics;
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetAssetPrices_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Economy_SIK_GetAssetPrices_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSIK_GetAssetPrices(); \
	friend struct ::Z_Construct_UClass_USIK_GetAssetPrices_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMWEB_API UClass* ::Z_Construct_UClass_USIK_GetAssetPrices_NoRegister(); \
public: \
	DECLARE_CLASS2(USIK_GetAssetPrices, USIK_BaseWebApi, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamWeb"), Z_Construct_UClass_USIK_GetAssetPrices_NoRegister) \
	DECLARE_SERIALIZER(USIK_GetAssetPrices)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Economy_SIK_GetAssetPrices_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USIK_GetAssetPrices(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USIK_GetAssetPrices(USIK_GetAssetPrices&&) = delete; \
	USIK_GetAssetPrices(const USIK_GetAssetPrices&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USIK_GetAssetPrices); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USIK_GetAssetPrices); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USIK_GetAssetPrices) \
	NO_API virtual ~USIK_GetAssetPrices();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Economy_SIK_GetAssetPrices_h_20_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Economy_SIK_GetAssetPrices_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Economy_SIK_GetAssetPrices_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Economy_SIK_GetAssetPrices_h_23_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Economy_SIK_GetAssetPrices_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USIK_GetAssetPrices;

// ********** End Class USIK_GetAssetPrices ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Economy_SIK_GetAssetPrices_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
