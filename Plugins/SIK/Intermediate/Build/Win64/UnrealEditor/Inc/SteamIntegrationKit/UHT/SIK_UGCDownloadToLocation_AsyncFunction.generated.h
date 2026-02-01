// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Functions/RemoteStorage/SIK_UGCDownloadToLocation_AsyncFunction.h"

#ifdef STEAMINTEGRATIONKIT_SIK_UGCDownloadToLocation_AsyncFunction_generated_h
#error "SIK_UGCDownloadToLocation_AsyncFunction.generated.h already included, missing '#pragma once' in SIK_UGCDownloadToLocation_AsyncFunction.h"
#endif
#define STEAMINTEGRATIONKIT_SIK_UGCDownloadToLocation_AsyncFunction_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USIK_UGCDownloadToLocation_AsyncFunction;
struct FSIK_SteamId;
struct FSIK_UGCHandle;

// ********** Begin Delegate FOnUGCDownloadToLocationComplete **************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_RemoteStorage_SIK_UGCDownloadToLocation_AsyncFunction_h_10_DELEGATE \
STEAMINTEGRATIONKIT_API void FOnUGCDownloadToLocationComplete_DelegateWrapper(const FMulticastScriptDelegate& OnUGCDownloadToLocationComplete, ESIK_Result Result, FSIK_UGCHandle UGCHandle, int32 AppID, const FString& FileName, int32 Size, FSIK_SteamId SteamIDOwner);


// ********** End Delegate FOnUGCDownloadToLocationComplete ****************************************

// ********** Begin Class USIK_UGCDownloadToLocation_AsyncFunction *********************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_RemoteStorage_SIK_UGCDownloadToLocation_AsyncFunction_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUGCDownloadToLocation);


struct Z_Construct_UClass_USIK_UGCDownloadToLocation_AsyncFunction_Statics;
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_UGCDownloadToLocation_AsyncFunction_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_RemoteStorage_SIK_UGCDownloadToLocation_AsyncFunction_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSIK_UGCDownloadToLocation_AsyncFunction(); \
	friend struct ::Z_Construct_UClass_USIK_UGCDownloadToLocation_AsyncFunction_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMINTEGRATIONKIT_API UClass* ::Z_Construct_UClass_USIK_UGCDownloadToLocation_AsyncFunction_NoRegister(); \
public: \
	DECLARE_CLASS2(USIK_UGCDownloadToLocation_AsyncFunction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamIntegrationKit"), Z_Construct_UClass_USIK_UGCDownloadToLocation_AsyncFunction_NoRegister) \
	DECLARE_SERIALIZER(USIK_UGCDownloadToLocation_AsyncFunction)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_RemoteStorage_SIK_UGCDownloadToLocation_AsyncFunction_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USIK_UGCDownloadToLocation_AsyncFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USIK_UGCDownloadToLocation_AsyncFunction(USIK_UGCDownloadToLocation_AsyncFunction&&) = delete; \
	USIK_UGCDownloadToLocation_AsyncFunction(const USIK_UGCDownloadToLocation_AsyncFunction&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USIK_UGCDownloadToLocation_AsyncFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USIK_UGCDownloadToLocation_AsyncFunction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USIK_UGCDownloadToLocation_AsyncFunction) \
	NO_API virtual ~USIK_UGCDownloadToLocation_AsyncFunction();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_RemoteStorage_SIK_UGCDownloadToLocation_AsyncFunction_h_12_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_RemoteStorage_SIK_UGCDownloadToLocation_AsyncFunction_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_RemoteStorage_SIK_UGCDownloadToLocation_AsyncFunction_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_RemoteStorage_SIK_UGCDownloadToLocation_AsyncFunction_h_15_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_RemoteStorage_SIK_UGCDownloadToLocation_AsyncFunction_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USIK_UGCDownloadToLocation_AsyncFunction;

// ********** End Class USIK_UGCDownloadToLocation_AsyncFunction ***********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_RemoteStorage_SIK_UGCDownloadToLocation_AsyncFunction_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
