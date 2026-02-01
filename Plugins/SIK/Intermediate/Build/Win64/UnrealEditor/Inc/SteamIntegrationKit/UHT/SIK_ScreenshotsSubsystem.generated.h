// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Functions/Screenshots/SIK_ScreenshotsSubsystem.h"

#ifdef STEAMINTEGRATIONKIT_SIK_ScreenshotsSubsystem_generated_h
#error "SIK_ScreenshotsSubsystem.generated.h already included, missing '#pragma once' in SIK_ScreenshotsSubsystem.h"
#endif
#define STEAMINTEGRATIONKIT_SIK_ScreenshotsSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSIK_ScreenshotHandle;

// ********** Begin Delegate FOnScreenshotReady ****************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Screenshots_SIK_ScreenshotsSubsystem_h_10_DELEGATE \
STEAMINTEGRATIONKIT_API void FOnScreenshotReady_DelegateWrapper(const FMulticastScriptDelegate& OnScreenshotReady, FSIK_ScreenshotHandle ScreenshotHandle, TEnumAsByte<ESIK_Result> const& Result);


// ********** End Delegate FOnScreenshotReady ******************************************************

// ********** Begin Delegate FOnScreenshotRequested ************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Screenshots_SIK_ScreenshotsSubsystem_h_11_DELEGATE \
STEAMINTEGRATIONKIT_API void FOnScreenshotRequested_DelegateWrapper(const FMulticastScriptDelegate& OnScreenshotRequested);


// ********** End Delegate FOnScreenshotRequested **************************************************

// ********** Begin Class USIK_ScreenshotsSubsystem ************************************************
struct Z_Construct_UClass_USIK_ScreenshotsSubsystem_Statics;
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_ScreenshotsSubsystem_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Screenshots_SIK_ScreenshotsSubsystem_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSIK_ScreenshotsSubsystem(); \
	friend struct ::Z_Construct_UClass_USIK_ScreenshotsSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMINTEGRATIONKIT_API UClass* ::Z_Construct_UClass_USIK_ScreenshotsSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(USIK_ScreenshotsSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamIntegrationKit"), Z_Construct_UClass_USIK_ScreenshotsSubsystem_NoRegister) \
	DECLARE_SERIALIZER(USIK_ScreenshotsSubsystem)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Screenshots_SIK_ScreenshotsSubsystem_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USIK_ScreenshotsSubsystem(USIK_ScreenshotsSubsystem&&) = delete; \
	USIK_ScreenshotsSubsystem(const USIK_ScreenshotsSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USIK_ScreenshotsSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USIK_ScreenshotsSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USIK_ScreenshotsSubsystem)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Screenshots_SIK_ScreenshotsSubsystem_h_13_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Screenshots_SIK_ScreenshotsSubsystem_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Screenshots_SIK_ScreenshotsSubsystem_h_16_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Screenshots_SIK_ScreenshotsSubsystem_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USIK_ScreenshotsSubsystem;

// ********** End Class USIK_ScreenshotsSubsystem **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Screenshots_SIK_ScreenshotsSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
