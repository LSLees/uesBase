// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Functions/Music/SIK_MusicSubsystem.h"

#ifdef STEAMINTEGRATIONKIT_SIK_MusicSubsystem_generated_h
#error "SIK_MusicSubsystem.generated.h already included, missing '#pragma once' in SIK_MusicSubsystem.h"
#endif
#define STEAMINTEGRATIONKIT_SIK_MusicSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FPlaybackStatusHasChanged *********************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Music_SIK_MusicSubsystem_h_10_DELEGATE \
STEAMINTEGRATIONKIT_API void FPlaybackStatusHasChanged_DelegateWrapper(const FMulticastScriptDelegate& PlaybackStatusHasChanged);


// ********** End Delegate FPlaybackStatusHasChanged ***********************************************

// ********** Begin Delegate FVolumeHasChanged *****************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Music_SIK_MusicSubsystem_h_11_DELEGATE \
STEAMINTEGRATIONKIT_API void FVolumeHasChanged_DelegateWrapper(const FMulticastScriptDelegate& VolumeHasChanged, float Volume);


// ********** End Delegate FVolumeHasChanged *******************************************************

// ********** Begin Class USIK_MusicSubsystem ******************************************************
struct Z_Construct_UClass_USIK_MusicSubsystem_Statics;
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_MusicSubsystem_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Music_SIK_MusicSubsystem_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSIK_MusicSubsystem(); \
	friend struct ::Z_Construct_UClass_USIK_MusicSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMINTEGRATIONKIT_API UClass* ::Z_Construct_UClass_USIK_MusicSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(USIK_MusicSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamIntegrationKit"), Z_Construct_UClass_USIK_MusicSubsystem_NoRegister) \
	DECLARE_SERIALIZER(USIK_MusicSubsystem)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Music_SIK_MusicSubsystem_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USIK_MusicSubsystem(USIK_MusicSubsystem&&) = delete; \
	USIK_MusicSubsystem(const USIK_MusicSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USIK_MusicSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USIK_MusicSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USIK_MusicSubsystem)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Music_SIK_MusicSubsystem_h_12_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Music_SIK_MusicSubsystem_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Music_SIK_MusicSubsystem_h_15_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Music_SIK_MusicSubsystem_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USIK_MusicSubsystem;

// ********** End Class USIK_MusicSubsystem ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Music_SIK_MusicSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
