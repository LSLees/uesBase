// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Functions/LobbyMatchmaking/SIK_CreateLobby.h"

#ifdef STEAMWEB_SIK_CreateLobby_generated_h
#error "SIK_CreateLobby.generated.h already included, missing '#pragma once' in SIK_CreateLobby.h"
#endif
#define STEAMWEB_SIK_CreateLobby_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USIK_CreateLobby;
struct FSIK_CreateLobbyOptional;

// ********** Begin ScriptStruct FSIK_CreateLobbyOptional ******************************************
struct Z_Construct_UScriptStruct_FSIK_CreateLobbyOptional_Statics;
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_LobbyMatchmaking_SIK_CreateLobby_h_12_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSIK_CreateLobbyOptional_Statics; \
	STEAMWEB_API static class UScriptStruct* StaticStruct();


struct FSIK_CreateLobbyOptional;
// ********** End ScriptStruct FSIK_CreateLobbyOptional ********************************************

// ********** Begin Class USIK_CreateLobby *********************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_LobbyMatchmaking_SIK_CreateLobby_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateLobby);


struct Z_Construct_UClass_USIK_CreateLobby_Statics;
STEAMWEB_API UClass* Z_Construct_UClass_USIK_CreateLobby_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_LobbyMatchmaking_SIK_CreateLobby_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSIK_CreateLobby(); \
	friend struct ::Z_Construct_UClass_USIK_CreateLobby_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMWEB_API UClass* ::Z_Construct_UClass_USIK_CreateLobby_NoRegister(); \
public: \
	DECLARE_CLASS2(USIK_CreateLobby, USIK_BaseWebApi, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamWeb"), Z_Construct_UClass_USIK_CreateLobby_NoRegister) \
	DECLARE_SERIALIZER(USIK_CreateLobby)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_LobbyMatchmaking_SIK_CreateLobby_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USIK_CreateLobby(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USIK_CreateLobby(USIK_CreateLobby&&) = delete; \
	USIK_CreateLobby(const USIK_CreateLobby&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USIK_CreateLobby); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USIK_CreateLobby); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USIK_CreateLobby) \
	NO_API virtual ~USIK_CreateLobby();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_LobbyMatchmaking_SIK_CreateLobby_h_23_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_LobbyMatchmaking_SIK_CreateLobby_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_LobbyMatchmaking_SIK_CreateLobby_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_LobbyMatchmaking_SIK_CreateLobby_h_26_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_LobbyMatchmaking_SIK_CreateLobby_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USIK_CreateLobby;

// ********** End Class USIK_CreateLobby ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_LobbyMatchmaking_SIK_CreateLobby_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
