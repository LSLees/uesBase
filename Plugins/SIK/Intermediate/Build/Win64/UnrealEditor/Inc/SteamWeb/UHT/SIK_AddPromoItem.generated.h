// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Functions/Inventory/SIK_AddPromoItem.h"

#ifdef STEAMWEB_SIK_AddPromoItem_generated_h
#error "SIK_AddPromoItem.generated.h already included, missing '#pragma once' in SIK_AddPromoItem.h"
#endif
#define STEAMWEB_SIK_AddPromoItem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USIK_AddPromoItem;
struct FSIK_AddPromoItemOptional;

// ********** Begin ScriptStruct FSIK_AddPromoItemOptional *****************************************
struct Z_Construct_UScriptStruct_FSIK_AddPromoItemOptional_Statics;
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Inventory_SIK_AddPromoItem_h_12_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSIK_AddPromoItemOptional_Statics; \
	STEAMWEB_API static class UScriptStruct* StaticStruct();


struct FSIK_AddPromoItemOptional;
// ********** End ScriptStruct FSIK_AddPromoItemOptional *******************************************

// ********** Begin Class USIK_AddPromoItem ********************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Inventory_SIK_AddPromoItem_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddPromoItem);


struct Z_Construct_UClass_USIK_AddPromoItem_Statics;
STEAMWEB_API UClass* Z_Construct_UClass_USIK_AddPromoItem_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Inventory_SIK_AddPromoItem_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSIK_AddPromoItem(); \
	friend struct ::Z_Construct_UClass_USIK_AddPromoItem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMWEB_API UClass* ::Z_Construct_UClass_USIK_AddPromoItem_NoRegister(); \
public: \
	DECLARE_CLASS2(USIK_AddPromoItem, USIK_BaseWebApi, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamWeb"), Z_Construct_UClass_USIK_AddPromoItem_NoRegister) \
	DECLARE_SERIALIZER(USIK_AddPromoItem)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Inventory_SIK_AddPromoItem_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USIK_AddPromoItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USIK_AddPromoItem(USIK_AddPromoItem&&) = delete; \
	USIK_AddPromoItem(const USIK_AddPromoItem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USIK_AddPromoItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USIK_AddPromoItem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USIK_AddPromoItem) \
	NO_API virtual ~USIK_AddPromoItem();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Inventory_SIK_AddPromoItem_h_22_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Inventory_SIK_AddPromoItem_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Inventory_SIK_AddPromoItem_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Inventory_SIK_AddPromoItem_h_25_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Inventory_SIK_AddPromoItem_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USIK_AddPromoItem;

// ********** End Class USIK_AddPromoItem **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Inventory_SIK_AddPromoItem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
