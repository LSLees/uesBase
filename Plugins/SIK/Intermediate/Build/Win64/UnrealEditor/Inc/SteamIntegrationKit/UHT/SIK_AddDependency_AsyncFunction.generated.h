// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Functions/UGC/SIK_AddDependency_AsyncFunction.h"

#ifdef STEAMINTEGRATIONKIT_SIK_AddDependency_AsyncFunction_generated_h
#error "SIK_AddDependency_AsyncFunction.generated.h already included, missing '#pragma once' in SIK_AddDependency_AsyncFunction.h"
#endif
#define STEAMINTEGRATIONKIT_SIK_AddDependency_AsyncFunction_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USIK_AddDependency_AsyncFunction;
struct FSIK_PublishedFileId;

// ********** Begin Delegate FOnAddDependencyComplete **********************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_AddDependency_AsyncFunction_h_9_DELEGATE \
STEAMINTEGRATIONKIT_API void FOnAddDependencyComplete_DelegateWrapper(const FMulticastScriptDelegate& OnAddDependencyComplete, ESIK_Result Result, FSIK_PublishedFileId ParentPublishedFileID, FSIK_PublishedFileId ChildPublishedFileID);


// ********** End Delegate FOnAddDependencyComplete ************************************************

// ********** Begin Class USIK_AddDependency_AsyncFunction *****************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_AddDependency_AsyncFunction_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddDependency);


struct Z_Construct_UClass_USIK_AddDependency_AsyncFunction_Statics;
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_AddDependency_AsyncFunction_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_AddDependency_AsyncFunction_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSIK_AddDependency_AsyncFunction(); \
	friend struct ::Z_Construct_UClass_USIK_AddDependency_AsyncFunction_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMINTEGRATIONKIT_API UClass* ::Z_Construct_UClass_USIK_AddDependency_AsyncFunction_NoRegister(); \
public: \
	DECLARE_CLASS2(USIK_AddDependency_AsyncFunction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamIntegrationKit"), Z_Construct_UClass_USIK_AddDependency_AsyncFunction_NoRegister) \
	DECLARE_SERIALIZER(USIK_AddDependency_AsyncFunction)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_AddDependency_AsyncFunction_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USIK_AddDependency_AsyncFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USIK_AddDependency_AsyncFunction(USIK_AddDependency_AsyncFunction&&) = delete; \
	USIK_AddDependency_AsyncFunction(const USIK_AddDependency_AsyncFunction&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USIK_AddDependency_AsyncFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USIK_AddDependency_AsyncFunction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USIK_AddDependency_AsyncFunction) \
	NO_API virtual ~USIK_AddDependency_AsyncFunction();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_AddDependency_AsyncFunction_h_11_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_AddDependency_AsyncFunction_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_AddDependency_AsyncFunction_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_AddDependency_AsyncFunction_h_14_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_AddDependency_AsyncFunction_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USIK_AddDependency_AsyncFunction;

// ********** End Class USIK_AddDependency_AsyncFunction *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_AddDependency_AsyncFunction_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
