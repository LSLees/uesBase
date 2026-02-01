// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Functions/Video/SIK_VideoSubsystem.h"

#ifdef STEAMINTEGRATIONKIT_SIK_VideoSubsystem_generated_h
#error "SIK_VideoSubsystem.generated.h already included, missing '#pragma once' in SIK_VideoSubsystem.h"
#endif
#define STEAMINTEGRATIONKIT_SIK_VideoSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSIK_AppId;

// ********** Begin Delegate FOnGetOPFSettingsResult ***********************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Video_SIK_VideoSubsystem_h_10_DELEGATE \
STEAMINTEGRATIONKIT_API void FOnGetOPFSettingsResult_DelegateWrapper(const FMulticastScriptDelegate& OnGetOPFSettingsResult, FSIK_AppId AppID, ESIK_Result Result);


// ********** End Delegate FOnGetOPFSettingsResult *************************************************

// ********** Begin Delegate FOnGetVideoURLResult **************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Video_SIK_VideoSubsystem_h_11_DELEGATE \
STEAMINTEGRATIONKIT_API void FOnGetVideoURLResult_DelegateWrapper(const FMulticastScriptDelegate& OnGetVideoURLResult, FSIK_AppId AppID, ESIK_Result Result, const FString& URL);


// ********** End Delegate FOnGetVideoURLResult ****************************************************

// ********** Begin Class USIK_VideoSubsystem ******************************************************
struct Z_Construct_UClass_USIK_VideoSubsystem_Statics;
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_VideoSubsystem_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Video_SIK_VideoSubsystem_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSIK_VideoSubsystem(); \
	friend struct ::Z_Construct_UClass_USIK_VideoSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMINTEGRATIONKIT_API UClass* ::Z_Construct_UClass_USIK_VideoSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(USIK_VideoSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamIntegrationKit"), Z_Construct_UClass_USIK_VideoSubsystem_NoRegister) \
	DECLARE_SERIALIZER(USIK_VideoSubsystem)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Video_SIK_VideoSubsystem_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USIK_VideoSubsystem(USIK_VideoSubsystem&&) = delete; \
	USIK_VideoSubsystem(const USIK_VideoSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USIK_VideoSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USIK_VideoSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USIK_VideoSubsystem)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Video_SIK_VideoSubsystem_h_12_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Video_SIK_VideoSubsystem_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Video_SIK_VideoSubsystem_h_15_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Video_SIK_VideoSubsystem_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USIK_VideoSubsystem;

// ********** End Class USIK_VideoSubsystem ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Video_SIK_VideoSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
