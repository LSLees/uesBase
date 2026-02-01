// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Functions/UGC/SIK_AddAppDependency_AsyncFunction.h"

#ifdef STEAMINTEGRATIONKIT_SIK_AddAppDependency_AsyncFunction_generated_h
#error "SIK_AddAppDependency_AsyncFunction.generated.h already included, missing '#pragma once' in SIK_AddAppDependency_AsyncFunction.h"
#endif
#define STEAMINTEGRATIONKIT_SIK_AddAppDependency_AsyncFunction_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USIK_AddAppDependency_AsyncFunction;
struct FSIK_AppId;
struct FSIK_PublishedFileId;

// ********** Begin Delegate FOnAddAppDependencyComplete *******************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_AddAppDependency_AsyncFunction_h_9_DELEGATE \
STEAMINTEGRATIONKIT_API void FOnAddAppDependencyComplete_DelegateWrapper(const FMulticastScriptDelegate& OnAddAppDependencyComplete, ESIK_Result Result, FSIK_PublishedFileId PublishedFileID, FSIK_AppId AppID);


// ********** End Delegate FOnAddAppDependencyComplete *********************************************

// ********** Begin Class USIK_AddAppDependency_AsyncFunction **************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_AddAppDependency_AsyncFunction_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddAppDependency);


struct Z_Construct_UClass_USIK_AddAppDependency_AsyncFunction_Statics;
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_AddAppDependency_AsyncFunction_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_AddAppDependency_AsyncFunction_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSIK_AddAppDependency_AsyncFunction(); \
	friend struct ::Z_Construct_UClass_USIK_AddAppDependency_AsyncFunction_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMINTEGRATIONKIT_API UClass* ::Z_Construct_UClass_USIK_AddAppDependency_AsyncFunction_NoRegister(); \
public: \
	DECLARE_CLASS2(USIK_AddAppDependency_AsyncFunction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamIntegrationKit"), Z_Construct_UClass_USIK_AddAppDependency_AsyncFunction_NoRegister) \
	DECLARE_SERIALIZER(USIK_AddAppDependency_AsyncFunction)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_AddAppDependency_AsyncFunction_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USIK_AddAppDependency_AsyncFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USIK_AddAppDependency_AsyncFunction(USIK_AddAppDependency_AsyncFunction&&) = delete; \
	USIK_AddAppDependency_AsyncFunction(const USIK_AddAppDependency_AsyncFunction&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USIK_AddAppDependency_AsyncFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USIK_AddAppDependency_AsyncFunction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USIK_AddAppDependency_AsyncFunction) \
	NO_API virtual ~USIK_AddAppDependency_AsyncFunction();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_AddAppDependency_AsyncFunction_h_11_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_AddAppDependency_AsyncFunction_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_AddAppDependency_AsyncFunction_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_AddAppDependency_AsyncFunction_h_14_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_AddAppDependency_AsyncFunction_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USIK_AddAppDependency_AsyncFunction;

// ********** End Class USIK_AddAppDependency_AsyncFunction ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_AddAppDependency_AsyncFunction_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
