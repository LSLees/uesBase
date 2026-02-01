// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Functions/Sessions/SIK_CreateSession_AsyncFunction.h"

#ifdef STEAMINTEGRATIONKIT_SIK_CreateSession_AsyncFunction_generated_h
#error "SIK_CreateSession_AsyncFunction.generated.h already included, missing '#pragma once' in SIK_CreateSession_AsyncFunction.h"
#endif
#define STEAMINTEGRATIONKIT_SIK_CreateSession_AsyncFunction_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USIK_CreateSession_AsyncFunction;
struct FSIK_CreateSessionExtraSettings;
struct FSIKAttribute;
struct FSIKDedicatedServerSettings;

// ********** Begin Delegate FSIK_CreateSession_Delegate *******************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_CreateSession_AsyncFunction_h_16_DELEGATE \
STEAMINTEGRATIONKIT_API void FSIK_CreateSession_Delegate_DelegateWrapper(const FMulticastScriptDelegate& SIK_CreateSession_Delegate, const FString& SessionID);


// ********** End Delegate FSIK_CreateSession_Delegate *********************************************

// ********** Begin ScriptStruct FSIKDedicatedServerSettings ***************************************
struct Z_Construct_UScriptStruct_FSIKDedicatedServerSettings_Statics;
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_CreateSession_AsyncFunction_h_21_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSIKDedicatedServerSettings_Statics; \
	STEAMINTEGRATIONKIT_API static class UScriptStruct* StaticStruct();


struct FSIKDedicatedServerSettings;
// ********** End ScriptStruct FSIKDedicatedServerSettings *****************************************

// ********** Begin ScriptStruct FSIK_CreateSessionExtraSettings ***********************************
struct Z_Construct_UScriptStruct_FSIK_CreateSessionExtraSettings_Statics;
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_CreateSession_AsyncFunction_h_33_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSIK_CreateSessionExtraSettings_Statics; \
	STEAMINTEGRATIONKIT_API static class UScriptStruct* StaticStruct();


struct FSIK_CreateSessionExtraSettings;
// ********** End ScriptStruct FSIK_CreateSessionExtraSettings *************************************

// ********** Begin Class USIK_CreateSession_AsyncFunction *****************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_CreateSession_AsyncFunction_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateEIKSession);


struct Z_Construct_UClass_USIK_CreateSession_AsyncFunction_Statics;
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_CreateSession_AsyncFunction_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_CreateSession_AsyncFunction_h_60_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSIK_CreateSession_AsyncFunction(); \
	friend struct ::Z_Construct_UClass_USIK_CreateSession_AsyncFunction_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMINTEGRATIONKIT_API UClass* ::Z_Construct_UClass_USIK_CreateSession_AsyncFunction_NoRegister(); \
public: \
	DECLARE_CLASS2(USIK_CreateSession_AsyncFunction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamIntegrationKit"), Z_Construct_UClass_USIK_CreateSession_AsyncFunction_NoRegister) \
	DECLARE_SERIALIZER(USIK_CreateSession_AsyncFunction)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_CreateSession_AsyncFunction_h_60_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USIK_CreateSession_AsyncFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USIK_CreateSession_AsyncFunction(USIK_CreateSession_AsyncFunction&&) = delete; \
	USIK_CreateSession_AsyncFunction(const USIK_CreateSession_AsyncFunction&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USIK_CreateSession_AsyncFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USIK_CreateSession_AsyncFunction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USIK_CreateSession_AsyncFunction) \
	NO_API virtual ~USIK_CreateSession_AsyncFunction();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_CreateSession_AsyncFunction_h_57_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_CreateSession_AsyncFunction_h_60_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_CreateSession_AsyncFunction_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_CreateSession_AsyncFunction_h_60_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_CreateSession_AsyncFunction_h_60_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USIK_CreateSession_AsyncFunction;

// ********** End Class USIK_CreateSession_AsyncFunction *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_CreateSession_AsyncFunction_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
