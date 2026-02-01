// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Settings/SIKSettings.h"

#ifdef STEAMINTEGRATIONKIT_SIKSettings_generated_h
#error "SIKSettings.generated.h already included, missing '#pragma once' in SIKSettings.h"
#endif
#define STEAMINTEGRATIONKIT_SIKSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USIKSettings *************************************************************
struct Z_Construct_UClass_USIKSettings_Statics;
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIKSettings_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Settings_SIKSettings_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSIKSettings(); \
	friend struct ::Z_Construct_UClass_USIKSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMINTEGRATIONKIT_API UClass* ::Z_Construct_UClass_USIKSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(USIKSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamIntegrationKit"), Z_Construct_UClass_USIKSettings_NoRegister) \
	DECLARE_SERIALIZER(USIKSettings)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Settings_SIKSettings_h_41_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USIKSettings(USIKSettings&&) = delete; \
	USIKSettings(const USIKSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USIKSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USIKSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USIKSettings) \
	NO_API virtual ~USIKSettings();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Settings_SIKSettings_h_38_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Settings_SIKSettings_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Settings_SIKSettings_h_41_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Settings_SIKSettings_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USIKSettings;

// ********** End Class USIKSettings ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Settings_SIKSettings_h

// ********** Begin Enum ESIK_BuildConfiguration ***************************************************
#define FOREACH_ENUM_ESIK_BUILDCONFIGURATION(op) \
	op(UnknownBuild1) \
	op(Debug1) \
	op(DebugGame1) \
	op(Development1) \
	op(Shipping1) \
	op(Test1) 
// ********** End Enum ESIK_BuildConfiguration *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
