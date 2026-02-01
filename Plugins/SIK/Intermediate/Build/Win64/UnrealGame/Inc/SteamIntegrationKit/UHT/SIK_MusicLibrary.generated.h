// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Functions/Music/SIK_MusicLibrary.h"

#ifdef STEAMINTEGRATIONKIT_SIK_MusicLibrary_generated_h
#error "SIK_MusicLibrary.generated.h already included, missing '#pragma once' in SIK_MusicLibrary.h"
#endif
#define STEAMINTEGRATIONKIT_SIK_MusicLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USIK_MusicLibrary ********************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Music_SIK_MusicLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetVolume); \
	DECLARE_FUNCTION(execPlayPrevious); \
	DECLARE_FUNCTION(execPlayNext); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execPause); \
	DECLARE_FUNCTION(execGetVolume); \
	DECLARE_FUNCTION(execGetPlaybackStatus); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execIsEnabled);


struct Z_Construct_UClass_USIK_MusicLibrary_Statics;
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_MusicLibrary_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Music_SIK_MusicLibrary_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSIK_MusicLibrary(); \
	friend struct ::Z_Construct_UClass_USIK_MusicLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMINTEGRATIONKIT_API UClass* ::Z_Construct_UClass_USIK_MusicLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(USIK_MusicLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamIntegrationKit"), Z_Construct_UClass_USIK_MusicLibrary_NoRegister) \
	DECLARE_SERIALIZER(USIK_MusicLibrary)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Music_SIK_MusicLibrary_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USIK_MusicLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USIK_MusicLibrary(USIK_MusicLibrary&&) = delete; \
	USIK_MusicLibrary(const USIK_MusicLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USIK_MusicLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USIK_MusicLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USIK_MusicLibrary) \
	NO_API virtual ~USIK_MusicLibrary();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Music_SIK_MusicLibrary_h_13_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Music_SIK_MusicLibrary_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Music_SIK_MusicLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Music_SIK_MusicLibrary_h_16_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Music_SIK_MusicLibrary_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USIK_MusicLibrary;

// ********** End Class USIK_MusicLibrary **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Music_SIK_MusicLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
