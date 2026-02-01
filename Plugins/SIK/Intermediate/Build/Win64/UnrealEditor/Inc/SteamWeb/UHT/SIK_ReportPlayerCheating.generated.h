// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Functions/CheatReporting/SIK_ReportPlayerCheating.h"

#ifdef STEAMWEB_SIK_ReportPlayerCheating_generated_h
#error "SIK_ReportPlayerCheating.generated.h already included, missing '#pragma once' in SIK_ReportPlayerCheating.h"
#endif
#define STEAMWEB_SIK_ReportPlayerCheating_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USIK_ReportPlayerCheating;
struct FSIK_PlayerCheatingOptional;

// ********** Begin ScriptStruct FSIK_PlayerCheatingOptional ***************************************
struct Z_Construct_UScriptStruct_FSIK_PlayerCheatingOptional_Statics;
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_CheatReporting_SIK_ReportPlayerCheating_h_12_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSIK_PlayerCheatingOptional_Statics; \
	STEAMWEB_API static class UScriptStruct* StaticStruct();


struct FSIK_PlayerCheatingOptional;
// ********** End ScriptStruct FSIK_PlayerCheatingOptional *****************************************

// ********** Begin Class USIK_ReportPlayerCheating ************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_CheatReporting_SIK_ReportPlayerCheating_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execReportPlayerCheating);


struct Z_Construct_UClass_USIK_ReportPlayerCheating_Statics;
STEAMWEB_API UClass* Z_Construct_UClass_USIK_ReportPlayerCheating_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_CheatReporting_SIK_ReportPlayerCheating_h_53_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSIK_ReportPlayerCheating(); \
	friend struct ::Z_Construct_UClass_USIK_ReportPlayerCheating_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMWEB_API UClass* ::Z_Construct_UClass_USIK_ReportPlayerCheating_NoRegister(); \
public: \
	DECLARE_CLASS2(USIK_ReportPlayerCheating, USIK_BaseWebApi, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamWeb"), Z_Construct_UClass_USIK_ReportPlayerCheating_NoRegister) \
	DECLARE_SERIALIZER(USIK_ReportPlayerCheating)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_CheatReporting_SIK_ReportPlayerCheating_h_53_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USIK_ReportPlayerCheating(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USIK_ReportPlayerCheating(USIK_ReportPlayerCheating&&) = delete; \
	USIK_ReportPlayerCheating(const USIK_ReportPlayerCheating&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USIK_ReportPlayerCheating); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USIK_ReportPlayerCheating); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USIK_ReportPlayerCheating) \
	NO_API virtual ~USIK_ReportPlayerCheating();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_CheatReporting_SIK_ReportPlayerCheating_h_50_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_CheatReporting_SIK_ReportPlayerCheating_h_53_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_CheatReporting_SIK_ReportPlayerCheating_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_CheatReporting_SIK_ReportPlayerCheating_h_53_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_CheatReporting_SIK_ReportPlayerCheating_h_53_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USIK_ReportPlayerCheating;

// ********** End Class USIK_ReportPlayerCheating **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_CheatReporting_SIK_ReportPlayerCheating_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
