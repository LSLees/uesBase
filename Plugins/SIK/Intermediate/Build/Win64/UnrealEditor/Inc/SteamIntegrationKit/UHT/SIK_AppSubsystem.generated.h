// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Functions/Apps/SIK_AppSubsystem.h"

#ifdef STEAMINTEGRATIONKIT_SIK_AppSubsystem_generated_h
#error "SIK_AppSubsystem.generated.h already included, missing '#pragma once' in SIK_AppSubsystem.h"
#endif
#define STEAMINTEGRATIONKIT_SIK_AppSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FDlcInstalledDelegate *************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Apps_SIK_AppSubsystem_h_20_DELEGATE \
STEAMINTEGRATIONKIT_API void FDlcInstalledDelegate_DelegateWrapper(const FMulticastScriptDelegate& DlcInstalledDelegate, int32 AppID);


// ********** End Delegate FDlcInstalledDelegate ***************************************************

// ********** Begin Delegate FFileDetailsDelegate **************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Apps_SIK_AppSubsystem_h_21_DELEGATE \
STEAMINTEGRATIONKIT_API void FFileDetailsDelegate_DelegateWrapper(const FMulticastScriptDelegate& FileDetailsDelegate, ESIK_Result Result, int32 FileSize, int32 Flags, TArray<uint8> const& SHA);


// ********** End Delegate FFileDetailsDelegate ****************************************************

// ********** Begin Delegate FNewUrlLaunchParametersDelegate ***************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Apps_SIK_AppSubsystem_h_22_DELEGATE \
STEAMINTEGRATIONKIT_API void FNewUrlLaunchParametersDelegate_DelegateWrapper(const FMulticastScriptDelegate& NewUrlLaunchParametersDelegate);


// ********** End Delegate FNewUrlLaunchParametersDelegate *****************************************

// ********** Begin Delegate FTimedTrialStatusDelegate *********************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Apps_SIK_AppSubsystem_h_23_DELEGATE \
STEAMINTEGRATIONKIT_API void FTimedTrialStatusDelegate_DelegateWrapper(const FMulticastScriptDelegate& TimedTrialStatusDelegate, int32 AppID, bool bIsOffline, int32 SecondsAllowed, int32 SecondsPlayed);


// ********** End Delegate FTimedTrialStatusDelegate ***********************************************

// ********** Begin Class USIK_AppSubsystem ********************************************************
struct Z_Construct_UClass_USIK_AppSubsystem_Statics;
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_AppSubsystem_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Apps_SIK_AppSubsystem_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSIK_AppSubsystem(); \
	friend struct ::Z_Construct_UClass_USIK_AppSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMINTEGRATIONKIT_API UClass* ::Z_Construct_UClass_USIK_AppSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(USIK_AppSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamIntegrationKit"), Z_Construct_UClass_USIK_AppSubsystem_NoRegister) \
	DECLARE_SERIALIZER(USIK_AppSubsystem)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Apps_SIK_AppSubsystem_h_28_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USIK_AppSubsystem(USIK_AppSubsystem&&) = delete; \
	USIK_AppSubsystem(const USIK_AppSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USIK_AppSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USIK_AppSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USIK_AppSubsystem)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Apps_SIK_AppSubsystem_h_25_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Apps_SIK_AppSubsystem_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Apps_SIK_AppSubsystem_h_28_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Apps_SIK_AppSubsystem_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USIK_AppSubsystem;

// ********** End Class USIK_AppSubsystem **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Apps_SIK_AppSubsystem_h

// ********** Begin Enum ESIK_RegisterActivationCodeResult *****************************************
#define FOREACH_ENUM_ESIK_REGISTERACTIVATIONCODERESULT(op) \
	op(RegisterActivationCodeResultOK) \
	op(RegisterActivationCodeResultFail) \
	op(RegisterActivationCodeResultAlreadyRegistered) \
	op(RegisterActivationCodeResultTimeout) \
	op(RegisterActivationCodeAlreadyOwned) 
// ********** End Enum ESIK_RegisterActivationCodeResult *******************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
