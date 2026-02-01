// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Functions/MatchmakingServers/SIK_RequestLANServerList_AsyncFunction.h"

#ifdef STEAMINTEGRATIONKIT_SIK_RequestLANServerList_AsyncFunction_generated_h
#error "SIK_RequestLANServerList_AsyncFunction.generated.h already included, missing '#pragma once' in SIK_RequestLANServerList_AsyncFunction.h"
#endif
#define STEAMINTEGRATIONKIT_SIK_RequestLANServerList_AsyncFunction_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USIK_RequestLANServerList_AsyncFunction;
struct FSIK_AppId;
struct FSIK_FoundServers;

// ********** Begin Delegate FRequestLANServerListDelegate *****************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_MatchmakingServers_SIK_RequestLANServerList_AsyncFunction_h_11_DELEGATE \
STEAMINTEGRATIONKIT_API void FRequestLANServerListDelegate_DelegateWrapper(const FMulticastScriptDelegate& RequestLANServerListDelegate, ESIK_MatchMakingServerResponse Response, TArray<FSIK_FoundServers> const& ServerList);


// ********** End Delegate FRequestLANServerListDelegate *******************************************

// ********** Begin Class USIK_RequestLANServerList_AsyncFunction **********************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_MatchmakingServers_SIK_RequestLANServerList_AsyncFunction_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRequestLANServerList);


struct Z_Construct_UClass_USIK_RequestLANServerList_AsyncFunction_Statics;
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_RequestLANServerList_AsyncFunction_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_MatchmakingServers_SIK_RequestLANServerList_AsyncFunction_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSIK_RequestLANServerList_AsyncFunction(); \
	friend struct ::Z_Construct_UClass_USIK_RequestLANServerList_AsyncFunction_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMINTEGRATIONKIT_API UClass* ::Z_Construct_UClass_USIK_RequestLANServerList_AsyncFunction_NoRegister(); \
public: \
	DECLARE_CLASS2(USIK_RequestLANServerList_AsyncFunction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamIntegrationKit"), Z_Construct_UClass_USIK_RequestLANServerList_AsyncFunction_NoRegister) \
	DECLARE_SERIALIZER(USIK_RequestLANServerList_AsyncFunction)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_MatchmakingServers_SIK_RequestLANServerList_AsyncFunction_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USIK_RequestLANServerList_AsyncFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USIK_RequestLANServerList_AsyncFunction(USIK_RequestLANServerList_AsyncFunction&&) = delete; \
	USIK_RequestLANServerList_AsyncFunction(const USIK_RequestLANServerList_AsyncFunction&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USIK_RequestLANServerList_AsyncFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USIK_RequestLANServerList_AsyncFunction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USIK_RequestLANServerList_AsyncFunction) \
	NO_API virtual ~USIK_RequestLANServerList_AsyncFunction();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_MatchmakingServers_SIK_RequestLANServerList_AsyncFunction_h_13_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_MatchmakingServers_SIK_RequestLANServerList_AsyncFunction_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_MatchmakingServers_SIK_RequestLANServerList_AsyncFunction_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_MatchmakingServers_SIK_RequestLANServerList_AsyncFunction_h_19_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_MatchmakingServers_SIK_RequestLANServerList_AsyncFunction_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USIK_RequestLANServerList_AsyncFunction;

// ********** End Class USIK_RequestLANServerList_AsyncFunction ************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_MatchmakingServers_SIK_RequestLANServerList_AsyncFunction_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
