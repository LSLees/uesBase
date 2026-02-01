// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Functions/UGC/SIK_SendQueryUGCRequest_AsyncFunction.h"

#ifdef STEAMINTEGRATIONKIT_SIK_SendQueryUGCRequest_AsyncFunction_generated_h
#error "SIK_SendQueryUGCRequest_AsyncFunction.generated.h already included, missing '#pragma once' in SIK_SendQueryUGCRequest_AsyncFunction.h"
#endif
#define STEAMINTEGRATIONKIT_SIK_SendQueryUGCRequest_AsyncFunction_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USIK_SendQueryUGCRequest_AsyncFunction;
struct FSIK_UGCQueryHandle;

// ********** Begin Delegate FOnSendQueryUGCRequestComplete ****************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_SendQueryUGCRequest_AsyncFunction_h_9_DELEGATE \
STEAMINTEGRATIONKIT_API void FOnSendQueryUGCRequestComplete_DelegateWrapper(const FMulticastScriptDelegate& OnSendQueryUGCRequestComplete, FSIK_UGCQueryHandle QueryHandle, ESIK_Result Result, int32 NumResultsReturned, int32 TotalMatchingResults, bool bCachedData);


// ********** End Delegate FOnSendQueryUGCRequestComplete ******************************************

// ********** Begin Class USIK_SendQueryUGCRequest_AsyncFunction ***********************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_SendQueryUGCRequest_AsyncFunction_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSendQueryUGCRequest);


struct Z_Construct_UClass_USIK_SendQueryUGCRequest_AsyncFunction_Statics;
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_SendQueryUGCRequest_AsyncFunction_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_SendQueryUGCRequest_AsyncFunction_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSIK_SendQueryUGCRequest_AsyncFunction(); \
	friend struct ::Z_Construct_UClass_USIK_SendQueryUGCRequest_AsyncFunction_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMINTEGRATIONKIT_API UClass* ::Z_Construct_UClass_USIK_SendQueryUGCRequest_AsyncFunction_NoRegister(); \
public: \
	DECLARE_CLASS2(USIK_SendQueryUGCRequest_AsyncFunction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamIntegrationKit"), Z_Construct_UClass_USIK_SendQueryUGCRequest_AsyncFunction_NoRegister) \
	DECLARE_SERIALIZER(USIK_SendQueryUGCRequest_AsyncFunction)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_SendQueryUGCRequest_AsyncFunction_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USIK_SendQueryUGCRequest_AsyncFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USIK_SendQueryUGCRequest_AsyncFunction(USIK_SendQueryUGCRequest_AsyncFunction&&) = delete; \
	USIK_SendQueryUGCRequest_AsyncFunction(const USIK_SendQueryUGCRequest_AsyncFunction&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USIK_SendQueryUGCRequest_AsyncFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USIK_SendQueryUGCRequest_AsyncFunction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USIK_SendQueryUGCRequest_AsyncFunction) \
	NO_API virtual ~USIK_SendQueryUGCRequest_AsyncFunction();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_SendQueryUGCRequest_AsyncFunction_h_11_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_SendQueryUGCRequest_AsyncFunction_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_SendQueryUGCRequest_AsyncFunction_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_SendQueryUGCRequest_AsyncFunction_h_14_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_SendQueryUGCRequest_AsyncFunction_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USIK_SendQueryUGCRequest_AsyncFunction;

// ********** End Class USIK_SendQueryUGCRequest_AsyncFunction *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_SendQueryUGCRequest_AsyncFunction_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
