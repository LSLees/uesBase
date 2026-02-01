// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Functions/Utils/SIK_UtilsSubsystem.h"

#ifdef STEAMINTEGRATIONKIT_SIK_UtilsSubsystem_generated_h
#error "SIK_UtilsSubsystem.generated.h already included, missing '#pragma once' in SIK_UtilsSubsystem.h"
#endif
#define STEAMINTEGRATIONKIT_SIK_UtilsSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FOnGamepadTextInputDismissed ******************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Utils_SIK_UtilsSubsystem_h_10_DELEGATE \
STEAMINTEGRATIONKIT_API void FOnGamepadTextInputDismissed_DelegateWrapper(const FMulticastScriptDelegate& OnGamepadTextInputDismissed, bool bSubmitted, int32 nSubmittedText);


// ********** End Delegate FOnGamepadTextInputDismissed ********************************************

// ********** Begin Delegate FOnIPCountry **********************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Utils_SIK_UtilsSubsystem_h_11_DELEGATE \
STEAMINTEGRATIONKIT_API void FOnIPCountry_DelegateWrapper(const FMulticastScriptDelegate& OnIPCountry);


// ********** End Delegate FOnIPCountry ************************************************************

// ********** Begin Delegate FOnLowBatteryPower ****************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Utils_SIK_UtilsSubsystem_h_12_DELEGATE \
STEAMINTEGRATIONKIT_API void FOnLowBatteryPower_DelegateWrapper(const FMulticastScriptDelegate& OnLowBatteryPower, int32 nMinutesBatteryLeft);


// ********** End Delegate FOnLowBatteryPower ******************************************************

// ********** Begin Delegate FOnAppResumingFromSuspend *********************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Utils_SIK_UtilsSubsystem_h_13_DELEGATE \
STEAMINTEGRATIONKIT_API void FOnAppResumingFromSuspend_DelegateWrapper(const FMulticastScriptDelegate& OnAppResumingFromSuspend);


// ********** End Delegate FOnAppResumingFromSuspend ***********************************************

// ********** Begin Delegate FOnSteamShutdown ******************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Utils_SIK_UtilsSubsystem_h_14_DELEGATE \
STEAMINTEGRATIONKIT_API void FOnSteamShutdown_DelegateWrapper(const FMulticastScriptDelegate& OnSteamShutdown);


// ********** End Delegate FOnSteamShutdown ********************************************************

// ********** Begin Class USIK_UtilsSubsystem ******************************************************
struct Z_Construct_UClass_USIK_UtilsSubsystem_Statics;
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_UtilsSubsystem_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Utils_SIK_UtilsSubsystem_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSIK_UtilsSubsystem(); \
	friend struct ::Z_Construct_UClass_USIK_UtilsSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMINTEGRATIONKIT_API UClass* ::Z_Construct_UClass_USIK_UtilsSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(USIK_UtilsSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamIntegrationKit"), Z_Construct_UClass_USIK_UtilsSubsystem_NoRegister) \
	DECLARE_SERIALIZER(USIK_UtilsSubsystem)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Utils_SIK_UtilsSubsystem_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USIK_UtilsSubsystem(USIK_UtilsSubsystem&&) = delete; \
	USIK_UtilsSubsystem(const USIK_UtilsSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USIK_UtilsSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USIK_UtilsSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USIK_UtilsSubsystem)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Utils_SIK_UtilsSubsystem_h_16_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Utils_SIK_UtilsSubsystem_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Utils_SIK_UtilsSubsystem_h_19_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Utils_SIK_UtilsSubsystem_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USIK_UtilsSubsystem;

// ********** End Class USIK_UtilsSubsystem ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Utils_SIK_UtilsSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
