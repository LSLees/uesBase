// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Functions/MatchmakingServers/SIK_RequestInternetServerList_AsyncFunction.h"

#ifdef STEAMINTEGRATIONKIT_SIK_RequestInternetServerList_AsyncFunction_generated_h
#error "SIK_RequestInternetServerList_AsyncFunction.generated.h already included, missing '#pragma once' in SIK_RequestInternetServerList_AsyncFunction.h"
#endif
#define STEAMINTEGRATIONKIT_SIK_RequestInternetServerList_AsyncFunction_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USIK_RequestInternetServerList_AsyncFunction;
struct FSIK_AppId;
struct FSIK_FoundServers;

// ********** Begin Delegate FRequestInternalServerListDelegate ************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_MatchmakingServers_SIK_RequestInternetServerList_AsyncFunction_h_11_DELEGATE \
STEAMINTEGRATIONKIT_API void FRequestInternalServerListDelegate_DelegateWrapper(const FMulticastScriptDelegate& RequestInternalServerListDelegate, ESIK_MatchMakingServerResponse Response, TArray<FSIK_FoundServers> const& ServerList);


// ********** End Delegate FRequestInternalServerListDelegate **************************************

// ********** Begin Class USIK_RequestInternetServerList_AsyncFunction *****************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_MatchmakingServers_SIK_RequestInternetServerList_AsyncFunction_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRequestInternetServerList);


struct Z_Construct_UClass_USIK_RequestInternetServerList_AsyncFunction_Statics;
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_RequestInternetServerList_AsyncFunction_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_MatchmakingServers_SIK_RequestInternetServerList_AsyncFunction_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSIK_RequestInternetServerList_AsyncFunction(); \
	friend struct ::Z_Construct_UClass_USIK_RequestInternetServerList_AsyncFunction_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMINTEGRATIONKIT_API UClass* ::Z_Construct_UClass_USIK_RequestInternetServerList_AsyncFunction_NoRegister(); \
public: \
	DECLARE_CLASS2(USIK_RequestInternetServerList_AsyncFunction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamIntegrationKit"), Z_Construct_UClass_USIK_RequestInternetServerList_AsyncFunction_NoRegister) \
	DECLARE_SERIALIZER(USIK_RequestInternetServerList_AsyncFunction)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_MatchmakingServers_SIK_RequestInternetServerList_AsyncFunction_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USIK_RequestInternetServerList_AsyncFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USIK_RequestInternetServerList_AsyncFunction(USIK_RequestInternetServerList_AsyncFunction&&) = delete; \
	USIK_RequestInternetServerList_AsyncFunction(const USIK_RequestInternetServerList_AsyncFunction&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USIK_RequestInternetServerList_AsyncFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USIK_RequestInternetServerList_AsyncFunction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USIK_RequestInternetServerList_AsyncFunction) \
	NO_API virtual ~USIK_RequestInternetServerList_AsyncFunction();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_MatchmakingServers_SIK_RequestInternetServerList_AsyncFunction_h_13_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_MatchmakingServers_SIK_RequestInternetServerList_AsyncFunction_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_MatchmakingServers_SIK_RequestInternetServerList_AsyncFunction_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_MatchmakingServers_SIK_RequestInternetServerList_AsyncFunction_h_19_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_MatchmakingServers_SIK_RequestInternetServerList_AsyncFunction_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USIK_RequestInternetServerList_AsyncFunction;

// ********** End Class USIK_RequestInternetServerList_AsyncFunction *******************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_MatchmakingServers_SIK_RequestInternetServerList_AsyncFunction_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
