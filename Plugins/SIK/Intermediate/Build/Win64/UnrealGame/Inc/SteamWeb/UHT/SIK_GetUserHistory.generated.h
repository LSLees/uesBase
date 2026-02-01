// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Functions/GameInventory/SIK_GetUserHistory.h"

#ifdef STEAMWEB_SIK_GetUserHistory_generated_h
#error "SIK_GetUserHistory.generated.h already included, missing '#pragma once' in SIK_GetUserHistory.h"
#endif
#define STEAMWEB_SIK_GetUserHistory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USIK_GetUserHistory;

// ********** Begin Class USIK_GetUserHistory ******************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameInventory_SIK_GetUserHistory_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetUserHistory);


struct Z_Construct_UClass_USIK_GetUserHistory_Statics;
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetUserHistory_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameInventory_SIK_GetUserHistory_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSIK_GetUserHistory(); \
	friend struct ::Z_Construct_UClass_USIK_GetUserHistory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMWEB_API UClass* ::Z_Construct_UClass_USIK_GetUserHistory_NoRegister(); \
public: \
	DECLARE_CLASS2(USIK_GetUserHistory, USIK_BaseWebApi, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamWeb"), Z_Construct_UClass_USIK_GetUserHistory_NoRegister) \
	DECLARE_SERIALIZER(USIK_GetUserHistory)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameInventory_SIK_GetUserHistory_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USIK_GetUserHistory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USIK_GetUserHistory(USIK_GetUserHistory&&) = delete; \
	USIK_GetUserHistory(const USIK_GetUserHistory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USIK_GetUserHistory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USIK_GetUserHistory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USIK_GetUserHistory) \
	NO_API virtual ~USIK_GetUserHistory();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameInventory_SIK_GetUserHistory_h_12_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameInventory_SIK_GetUserHistory_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameInventory_SIK_GetUserHistory_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameInventory_SIK_GetUserHistory_h_15_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameInventory_SIK_GetUserHistory_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USIK_GetUserHistory;

// ********** End Class USIK_GetUserHistory ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameInventory_SIK_GetUserHistory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
