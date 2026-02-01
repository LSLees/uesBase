// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Functions/Matchmaking/SIK_MatchmakingSubsystem.h"

#ifdef STEAMINTEGRATIONKIT_SIK_MatchmakingSubsystem_generated_h
#error "SIK_MatchmakingSubsystem.generated.h already included, missing '#pragma once' in SIK_MatchmakingSubsystem.h"
#endif
#define STEAMINTEGRATIONKIT_SIK_MatchmakingSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSIK_AppId;
struct FSIK_SteamId;

// ********** Begin Delegate FOnFavoritesListAccountsUpdated ***************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Matchmaking_SIK_MatchmakingSubsystem_h_10_DELEGATE \
STEAMINTEGRATIONKIT_API void FOnFavoritesListAccountsUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnFavoritesListAccountsUpdated, ESIK_Result Result);


// ********** End Delegate FOnFavoritesListAccountsUpdated *****************************************

// ********** Begin Delegate FOnFavoritesListChanged ***********************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Matchmaking_SIK_MatchmakingSubsystem_h_11_DELEGATE \
STEAMINTEGRATIONKIT_API void FOnFavoritesListChanged_DelegateWrapper(const FMulticastScriptDelegate& OnFavoritesListChanged, const FString& IP, int32 QueryPort, int32 ConnPort, FSIK_AppId AppID, int32 Flags, bool Add, int32 AccountId);


// ********** End Delegate FOnFavoritesListChanged *************************************************

// ********** Begin Delegate FOnLobbyMessageDel ****************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Matchmaking_SIK_MatchmakingSubsystem_h_12_DELEGATE \
STEAMINTEGRATIONKIT_API void FOnLobbyMessageDel_DelegateWrapper(const FMulticastScriptDelegate& OnLobbyMessageDel, FSIK_SteamId LobbyId, FSIK_SteamId UserId, ESIK_LobbyChatEntryType ChatEntryType, int32 ChatID);


// ********** End Delegate FOnLobbyMessageDel ******************************************************

// ********** Begin Delegate FOnLobbyChatUpdateDel *************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Matchmaking_SIK_MatchmakingSubsystem_h_13_DELEGATE \
STEAMINTEGRATIONKIT_API void FOnLobbyChatUpdateDel_DelegateWrapper(const FMulticastScriptDelegate& OnLobbyChatUpdateDel, FSIK_SteamId LobbyId, FSIK_SteamId UserId, FSIK_SteamId MemberIDMakingChange, ESIK_LobbyChatMemberStateChange ChatMemberStateChange);


// ********** End Delegate FOnLobbyChatUpdateDel ***************************************************

// ********** Begin Delegate FOnLobbyCreatedDel ****************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Matchmaking_SIK_MatchmakingSubsystem_h_14_DELEGATE \
STEAMINTEGRATIONKIT_API void FOnLobbyCreatedDel_DelegateWrapper(const FMulticastScriptDelegate& OnLobbyCreatedDel, FSIK_SteamId LobbyId, ESIK_Result Result);


// ********** End Delegate FOnLobbyCreatedDel ******************************************************

// ********** Begin Delegate FOnLobbyDataUpdateDel *************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Matchmaking_SIK_MatchmakingSubsystem_h_15_DELEGATE \
STEAMINTEGRATIONKIT_API void FOnLobbyDataUpdateDel_DelegateWrapper(const FMulticastScriptDelegate& OnLobbyDataUpdateDel, FSIK_SteamId LobbyId, FSIK_SteamId UserId, bool Success);


// ********** End Delegate FOnLobbyDataUpdateDel ***************************************************

// ********** Begin Delegate FOnLobbyEnterDel ******************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Matchmaking_SIK_MatchmakingSubsystem_h_16_DELEGATE \
STEAMINTEGRATIONKIT_API void FOnLobbyEnterDel_DelegateWrapper(const FMulticastScriptDelegate& OnLobbyEnterDel, FSIK_SteamId LobbyId, bool bLocked, ESIK_ChatRoomEnterResponse Response);


// ********** End Delegate FOnLobbyEnterDel ********************************************************

// ********** Begin Delegate FOnLobbyGameCreatedDel ************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Matchmaking_SIK_MatchmakingSubsystem_h_17_DELEGATE \
STEAMINTEGRATIONKIT_API void FOnLobbyGameCreatedDel_DelegateWrapper(const FMulticastScriptDelegate& OnLobbyGameCreatedDel, FSIK_SteamId LobbyId, FSIK_SteamId GameServerId, const FString& GameServerIP, int32 GameServerPort);


// ********** End Delegate FOnLobbyGameCreatedDel **************************************************

// ********** Begin Delegate FOnLobbyInviteDel *****************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Matchmaking_SIK_MatchmakingSubsystem_h_18_DELEGATE \
STEAMINTEGRATIONKIT_API void FOnLobbyInviteDel_DelegateWrapper(const FMulticastScriptDelegate& OnLobbyInviteDel, FSIK_SteamId LobbyId, FSIK_SteamId SenderUserId, FSIK_AppId AppId);


// ********** End Delegate FOnLobbyInviteDel *******************************************************

// ********** Begin Delegate FOnLobbyKickedDel *****************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Matchmaking_SIK_MatchmakingSubsystem_h_19_DELEGATE \
STEAMINTEGRATIONKIT_API void FOnLobbyKickedDel_DelegateWrapper(const FMulticastScriptDelegate& OnLobbyKickedDel, FSIK_SteamId LobbyId, FSIK_SteamId AdminId, bool bKickedDueToDisconnect);


// ********** End Delegate FOnLobbyKickedDel *******************************************************

// ********** Begin Delegate FOnLobbyMatchListDel **************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Matchmaking_SIK_MatchmakingSubsystem_h_20_DELEGATE \
STEAMINTEGRATIONKIT_API void FOnLobbyMatchListDel_DelegateWrapper(const FMulticastScriptDelegate& OnLobbyMatchListDel, int32 LobbyCount);


// ********** End Delegate FOnLobbyMatchListDel ****************************************************

// ********** Begin Class USIK_MatchmakingSubsystem ************************************************
struct Z_Construct_UClass_USIK_MatchmakingSubsystem_Statics;
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_MatchmakingSubsystem_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Matchmaking_SIK_MatchmakingSubsystem_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSIK_MatchmakingSubsystem(); \
	friend struct ::Z_Construct_UClass_USIK_MatchmakingSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMINTEGRATIONKIT_API UClass* ::Z_Construct_UClass_USIK_MatchmakingSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(USIK_MatchmakingSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamIntegrationKit"), Z_Construct_UClass_USIK_MatchmakingSubsystem_NoRegister) \
	DECLARE_SERIALIZER(USIK_MatchmakingSubsystem)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Matchmaking_SIK_MatchmakingSubsystem_h_25_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USIK_MatchmakingSubsystem(USIK_MatchmakingSubsystem&&) = delete; \
	USIK_MatchmakingSubsystem(const USIK_MatchmakingSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USIK_MatchmakingSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USIK_MatchmakingSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USIK_MatchmakingSubsystem)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Matchmaking_SIK_MatchmakingSubsystem_h_22_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Matchmaking_SIK_MatchmakingSubsystem_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Matchmaking_SIK_MatchmakingSubsystem_h_25_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Matchmaking_SIK_MatchmakingSubsystem_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USIK_MatchmakingSubsystem;

// ********** End Class USIK_MatchmakingSubsystem **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Matchmaking_SIK_MatchmakingSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
