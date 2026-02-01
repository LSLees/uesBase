// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Functions/Matchmaking/SIK_MatchmakingLibrary.h"

#ifdef STEAMINTEGRATIONKIT_SIK_MatchmakingLibrary_generated_h
#error "SIK_MatchmakingLibrary.generated.h already included, missing '#pragma once' in SIK_MatchmakingLibrary.h"
#endif
#define STEAMINTEGRATIONKIT_SIK_MatchmakingLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSIK_AppId;
struct FSIK_SteamId;

// ********** Begin Class USIK_MatchmakingLibrary **************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Matchmaking_SIK_MatchmakingLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetLobbyType); \
	DECLARE_FUNCTION(execSetLobbyOwner); \
	DECLARE_FUNCTION(execSetLobbyMemberLimit); \
	DECLARE_FUNCTION(execSetLobbyMemberData); \
	DECLARE_FUNCTION(execSetLobbyJoinable); \
	DECLARE_FUNCTION(execSetLobbyGameServer); \
	DECLARE_FUNCTION(execSetLobbyData); \
	DECLARE_FUNCTION(execSetLinkedLobby); \
	DECLARE_FUNCTION(execSendLobbyChatMessage); \
	DECLARE_FUNCTION(execRequestLobbyData); \
	DECLARE_FUNCTION(execRemoveFavoriteGame); \
	DECLARE_FUNCTION(execLeaveLobby); \
	DECLARE_FUNCTION(execInviteUserToLobby); \
	DECLARE_FUNCTION(execGetNumLobbyMembers); \
	DECLARE_FUNCTION(execGetLobbyOwner); \
	DECLARE_FUNCTION(execGetLobbyMemberLimit); \
	DECLARE_FUNCTION(execGetLobbyMemberData); \
	DECLARE_FUNCTION(execGetLobbyMemberByIndex); \
	DECLARE_FUNCTION(execGetLobbyGameServer); \
	DECLARE_FUNCTION(execGetLobbyDataCount); \
	DECLARE_FUNCTION(execGetLobbyDataByIndex); \
	DECLARE_FUNCTION(execGetLobbyData); \
	DECLARE_FUNCTION(execGetLobbyChatEntry); \
	DECLARE_FUNCTION(execGetLobbyByIndex); \
	DECLARE_FUNCTION(execGetFavoriteGameCount); \
	DECLARE_FUNCTION(execGetFavoriteGame); \
	DECLARE_FUNCTION(execDeleteLobbyData); \
	DECLARE_FUNCTION(execAddRequestLobbyListStringFilter); \
	DECLARE_FUNCTION(execAddRequestLobbyListResultCountFilter); \
	DECLARE_FUNCTION(execAddRequestLobbyListNumericalFilter); \
	DECLARE_FUNCTION(execAddRequestLobbyListNearValueFilter); \
	DECLARE_FUNCTION(execAddRequestLobbyListFilterSlotsAvailable); \
	DECLARE_FUNCTION(execAddRequestLobbyListDistanceFilter); \
	DECLARE_FUNCTION(execAddRequestLobbyListCompatibleMembersFilter); \
	DECLARE_FUNCTION(execAddFavoriteGame);


struct Z_Construct_UClass_USIK_MatchmakingLibrary_Statics;
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_MatchmakingLibrary_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Matchmaking_SIK_MatchmakingLibrary_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSIK_MatchmakingLibrary(); \
	friend struct ::Z_Construct_UClass_USIK_MatchmakingLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMINTEGRATIONKIT_API UClass* ::Z_Construct_UClass_USIK_MatchmakingLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(USIK_MatchmakingLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamIntegrationKit"), Z_Construct_UClass_USIK_MatchmakingLibrary_NoRegister) \
	DECLARE_SERIALIZER(USIK_MatchmakingLibrary)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Matchmaking_SIK_MatchmakingLibrary_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USIK_MatchmakingLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USIK_MatchmakingLibrary(USIK_MatchmakingLibrary&&) = delete; \
	USIK_MatchmakingLibrary(const USIK_MatchmakingLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USIK_MatchmakingLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USIK_MatchmakingLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USIK_MatchmakingLibrary) \
	NO_API virtual ~USIK_MatchmakingLibrary();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Matchmaking_SIK_MatchmakingLibrary_h_13_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Matchmaking_SIK_MatchmakingLibrary_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Matchmaking_SIK_MatchmakingLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Matchmaking_SIK_MatchmakingLibrary_h_16_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Matchmaking_SIK_MatchmakingLibrary_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USIK_MatchmakingLibrary;

// ********** End Class USIK_MatchmakingLibrary ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Matchmaking_SIK_MatchmakingLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
