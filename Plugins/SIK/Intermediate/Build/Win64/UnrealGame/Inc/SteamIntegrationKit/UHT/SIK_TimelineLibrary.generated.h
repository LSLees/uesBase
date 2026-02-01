// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Functions/Timeline/SIK_TimelineLibrary.h"

#ifdef STEAMINTEGRATIONKIT_SIK_TimelineLibrary_generated_h
#error "SIK_TimelineLibrary.generated.h already included, missing '#pragma once' in SIK_TimelineLibrary.h"
#endif
#define STEAMINTEGRATIONKIT_SIK_TimelineLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USIK_TimelineLibrary *****************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Timeline_SIK_TimelineLibrary_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetTimelineGameMode); \
	DECLARE_FUNCTION(execAddTimelineEvent); \
	DECLARE_FUNCTION(execClearTimelineStateDescription); \
	DECLARE_FUNCTION(execSetTimelineStateDescription);


struct Z_Construct_UClass_USIK_TimelineLibrary_Statics;
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_TimelineLibrary_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Timeline_SIK_TimelineLibrary_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSIK_TimelineLibrary(); \
	friend struct ::Z_Construct_UClass_USIK_TimelineLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMINTEGRATIONKIT_API UClass* ::Z_Construct_UClass_USIK_TimelineLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(USIK_TimelineLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamIntegrationKit"), Z_Construct_UClass_USIK_TimelineLibrary_NoRegister) \
	DECLARE_SERIALIZER(USIK_TimelineLibrary)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Timeline_SIK_TimelineLibrary_h_39_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USIK_TimelineLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USIK_TimelineLibrary(USIK_TimelineLibrary&&) = delete; \
	USIK_TimelineLibrary(const USIK_TimelineLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USIK_TimelineLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USIK_TimelineLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USIK_TimelineLibrary) \
	NO_API virtual ~USIK_TimelineLibrary();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Timeline_SIK_TimelineLibrary_h_36_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Timeline_SIK_TimelineLibrary_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Timeline_SIK_TimelineLibrary_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Timeline_SIK_TimelineLibrary_h_39_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Timeline_SIK_TimelineLibrary_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USIK_TimelineLibrary;

// ********** End Class USIK_TimelineLibrary *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Timeline_SIK_TimelineLibrary_h

// ********** Begin Enum ESIK_TimelineGameMode *****************************************************
#define FOREACH_ENUM_ESIK_TIMELINEGAMEMODE(op) \
	op(ESIK_TimelineGameMode_Invalid) \
	op(ESIK_TimelineGameMode_Playing) \
	op(ESIK_TimelineGameMode_Staging) \
	op(ESIK_TimelineGameMode_Menus) \
	op(ESIK_TimelineGameMode_LoadingScreen) 
// ********** End Enum ESIK_TimelineGameMode *******************************************************

// ********** Begin Enum ESIK_TimelineEventClipPriority ********************************************
#define FOREACH_ENUM_ESIK_TIMELINEEVENTCLIPPRIORITY(op) \
	op(ESIK_TimelineEventClipPriority_Invalid) \
	op(ESIK_TimelineEventClipPriority_None) \
	op(ESIK_TimelineEventClipPriority_Standard) \
	op(ESIK_TimelineEventClipPriority_Featured) 
// ********** End Enum ESIK_TimelineEventClipPriority **********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
