// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Functions/GameInventory/SIK_UpdateItemDefs.h"

#ifdef STEAMWEB_SIK_UpdateItemDefs_generated_h
#error "SIK_UpdateItemDefs.generated.h already included, missing '#pragma once' in SIK_UpdateItemDefs.h"
#endif
#define STEAMWEB_SIK_UpdateItemDefs_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USIK_UpdateItemDefs;
struct FSIK_WebItemDef;

// ********** Begin ScriptStruct FSIK_WebItemDef ***************************************************
struct Z_Construct_UScriptStruct_FSIK_WebItemDef_Statics;
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameInventory_SIK_UpdateItemDefs_h_12_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSIK_WebItemDef_Statics; \
	STEAMWEB_API static class UScriptStruct* StaticStruct();


struct FSIK_WebItemDef;
// ********** End ScriptStruct FSIK_WebItemDef *****************************************************

// ********** Begin Class USIK_UpdateItemDefs ******************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameInventory_SIK_UpdateItemDefs_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateItemDefs);


struct Z_Construct_UClass_USIK_UpdateItemDefs_Statics;
STEAMWEB_API UClass* Z_Construct_UClass_USIK_UpdateItemDefs_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameInventory_SIK_UpdateItemDefs_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSIK_UpdateItemDefs(); \
	friend struct ::Z_Construct_UClass_USIK_UpdateItemDefs_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMWEB_API UClass* ::Z_Construct_UClass_USIK_UpdateItemDefs_NoRegister(); \
public: \
	DECLARE_CLASS2(USIK_UpdateItemDefs, USIK_BaseWebApi, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamWeb"), Z_Construct_UClass_USIK_UpdateItemDefs_NoRegister) \
	DECLARE_SERIALIZER(USIK_UpdateItemDefs)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameInventory_SIK_UpdateItemDefs_h_51_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USIK_UpdateItemDefs(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USIK_UpdateItemDefs(USIK_UpdateItemDefs&&) = delete; \
	USIK_UpdateItemDefs(const USIK_UpdateItemDefs&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USIK_UpdateItemDefs); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USIK_UpdateItemDefs); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USIK_UpdateItemDefs) \
	NO_API virtual ~USIK_UpdateItemDefs();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameInventory_SIK_UpdateItemDefs_h_48_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameInventory_SIK_UpdateItemDefs_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameInventory_SIK_UpdateItemDefs_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameInventory_SIK_UpdateItemDefs_h_51_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameInventory_SIK_UpdateItemDefs_h_51_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USIK_UpdateItemDefs;

// ********** End Class USIK_UpdateItemDefs ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameInventory_SIK_UpdateItemDefs_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
