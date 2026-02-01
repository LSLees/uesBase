// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Functions/MusicRemote/SIK_MusicRemoteLibrary.h"

#ifdef STEAMINTEGRATIONKIT_SIK_MusicRemoteLibrary_generated_h
#error "SIK_MusicRemoteLibrary.generated.h already included, missing '#pragma once' in SIK_MusicRemoteLibrary.h"
#endif
#define STEAMINTEGRATIONKIT_SIK_MusicRemoteLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USIK_MusicRemoteLibrary **************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_MusicRemote_SIK_MusicRemoteLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateVolume); \
	DECLARE_FUNCTION(execUpdateShuffled); \
	DECLARE_FUNCTION(execUpdatePlaybackStatus); \
	DECLARE_FUNCTION(execUpdateLooped); \
	DECLARE_FUNCTION(execUpdateCurrentEntryText); \
	DECLARE_FUNCTION(execUpdateCurrentEntryElapsedSeconds); \
	DECLARE_FUNCTION(execUpdateCurrentEntryCoverArt); \
	DECLARE_FUNCTION(execSetQueueEntry); \
	DECLARE_FUNCTION(execSetPNGIcon_64x64); \
	DECLARE_FUNCTION(execSetPlaylistEntry); \
	DECLARE_FUNCTION(execSetDisplayName); \
	DECLARE_FUNCTION(execSetCurrentQueueEntry); \
	DECLARE_FUNCTION(execSetCurrentPlaylistEntry); \
	DECLARE_FUNCTION(execResetQueueEntries); \
	DECLARE_FUNCTION(execResetPlaylistEntries); \
	DECLARE_FUNCTION(execRegisterSteamMusicRemote); \
	DECLARE_FUNCTION(execQueueWillChange); \
	DECLARE_FUNCTION(execQueueDidChange); \
	DECLARE_FUNCTION(execPlaylistWillChange); \
	DECLARE_FUNCTION(execPlaylistDidChange); \
	DECLARE_FUNCTION(execEnableShuffled); \
	DECLARE_FUNCTION(execEnableQueue); \
	DECLARE_FUNCTION(execEnablePlayPrevious); \
	DECLARE_FUNCTION(execEnablePlayNext); \
	DECLARE_FUNCTION(execEnablePlaylists); \
	DECLARE_FUNCTION(execEnableLooped); \
	DECLARE_FUNCTION(execDeregisterSteamMusicRemote); \
	DECLARE_FUNCTION(execCurrentEntryWillChange); \
	DECLARE_FUNCTION(execCurrentEntryIsAvailable); \
	DECLARE_FUNCTION(execCurrentEntryDidChange); \
	DECLARE_FUNCTION(execIsCurrentMusicRemote); \
	DECLARE_FUNCTION(execActivationSuccess);


struct Z_Construct_UClass_USIK_MusicRemoteLibrary_Statics;
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_MusicRemoteLibrary_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_MusicRemote_SIK_MusicRemoteLibrary_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSIK_MusicRemoteLibrary(); \
	friend struct ::Z_Construct_UClass_USIK_MusicRemoteLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMINTEGRATIONKIT_API UClass* ::Z_Construct_UClass_USIK_MusicRemoteLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(USIK_MusicRemoteLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamIntegrationKit"), Z_Construct_UClass_USIK_MusicRemoteLibrary_NoRegister) \
	DECLARE_SERIALIZER(USIK_MusicRemoteLibrary)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_MusicRemote_SIK_MusicRemoteLibrary_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USIK_MusicRemoteLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USIK_MusicRemoteLibrary(USIK_MusicRemoteLibrary&&) = delete; \
	USIK_MusicRemoteLibrary(const USIK_MusicRemoteLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USIK_MusicRemoteLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USIK_MusicRemoteLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USIK_MusicRemoteLibrary) \
	NO_API virtual ~USIK_MusicRemoteLibrary();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_MusicRemote_SIK_MusicRemoteLibrary_h_13_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_MusicRemote_SIK_MusicRemoteLibrary_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_MusicRemote_SIK_MusicRemoteLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_MusicRemote_SIK_MusicRemoteLibrary_h_16_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_MusicRemote_SIK_MusicRemoteLibrary_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USIK_MusicRemoteLibrary;

// ********** End Class USIK_MusicRemoteLibrary ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_MusicRemote_SIK_MusicRemoteLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
