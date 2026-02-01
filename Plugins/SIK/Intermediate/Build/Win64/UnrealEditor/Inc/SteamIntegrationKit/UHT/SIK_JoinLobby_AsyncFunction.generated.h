// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Functions/Matchmaking/SIK_JoinLobby_AsyncFunction.h"

#ifdef STEAMINTEGRATIONKIT_SIK_JoinLobby_AsyncFunction_generated_h
#error "SIK_JoinLobby_AsyncFunction.generated.h already included, missing '#pragma once' in SIK_JoinLobby_AsyncFunction.h"
#endif
#define STEAMINTEGRATIONKIT_SIK_JoinLobby_AsyncFunction_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USIK_JoinLobby_AsyncFunction;
struct FSIK_SteamId;

// ********** Begin Delegate FOnJoinLobby **********************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Matchmaking_SIK_JoinLobby_AsyncFunction_h_10_DELEGATE \
STEAMINTEGRATIONKIT_API void FOnJoinLobby_DelegateWrapper(const FMulticastScriptDelegate& OnJoinLobby, ESIK_Result Result, bool bLocked, ESIK_ChatRoomEnterResponse ChatRoomEnterResponse);


// ********** End Delegate FOnJoinLobby ************************************************************

// ********** Begin Class USIK_JoinLobby_AsyncFunction *********************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Matchmaking_SIK_JoinLobby_AsyncFunction_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execJoinLobby);


struct Z_Construct_UClass_USIK_JoinLobby_AsyncFunction_Statics;
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_JoinLobby_AsyncFunction_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Matchmaking_SIK_JoinLobby_AsyncFunction_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSIK_JoinLobby_AsyncFunction(); \
	friend struct ::Z_Construct_UClass_USIK_JoinLobby_AsyncFunction_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMINTEGRATIONKIT_API UClass* ::Z_Construct_UClass_USIK_JoinLobby_AsyncFunction_NoRegister(); \
public: \
	DECLARE_CLASS2(USIK_JoinLobby_AsyncFunction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamIntegrationKit"), Z_Construct_UClass_USIK_JoinLobby_AsyncFunction_NoRegister) \
	DECLARE_SERIALIZER(USIK_JoinLobby_AsyncFunction)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Matchmaking_SIK_JoinLobby_AsyncFunction_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USIK_JoinLobby_AsyncFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USIK_JoinLobby_AsyncFunction(USIK_JoinLobby_AsyncFunction&&) = delete; \
	USIK_JoinLobby_AsyncFunction(const USIK_JoinLobby_AsyncFunction&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USIK_JoinLobby_AsyncFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USIK_JoinLobby_AsyncFunction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USIK_JoinLobby_AsyncFunction) \
	NO_API virtual ~USIK_JoinLobby_AsyncFunction();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Matchmaking_SIK_JoinLobby_AsyncFunction_h_11_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Matchmaking_SIK_JoinLobby_AsyncFunction_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Matchmaking_SIK_JoinLobby_AsyncFunction_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Matchmaking_SIK_JoinLobby_AsyncFunction_h_14_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Matchmaking_SIK_JoinLobby_AsyncFunction_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USIK_JoinLobby_AsyncFunction;

// ********** End Class USIK_JoinLobby_AsyncFunction ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Matchmaking_SIK_JoinLobby_AsyncFunction_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
