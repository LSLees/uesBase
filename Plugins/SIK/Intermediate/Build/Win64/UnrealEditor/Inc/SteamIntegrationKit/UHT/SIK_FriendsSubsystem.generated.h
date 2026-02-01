// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Functions/Friends/SIK_FriendsSubsystem.h"

#ifdef STEAMINTEGRATIONKIT_SIK_FriendsSubsystem_generated_h
#error "SIK_FriendsSubsystem.generated.h already included, missing '#pragma once' in SIK_FriendsSubsystem.h"
#endif
#define STEAMINTEGRATIONKIT_SIK_FriendsSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSIK_AppId;
struct FSIK_SteamId;

// ********** Begin Delegate FOnAvatarImageLoaded **************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_FriendsSubsystem_h_10_DELEGATE \
STEAMINTEGRATIONKIT_API void FOnAvatarImageLoaded_DelegateWrapper(const FMulticastScriptDelegate& OnAvatarImageLoaded, FSIK_SteamId SteamId, int32 Image, int32 Wide, int32 Tall);


// ********** End Delegate FOnAvatarImageLoaded ****************************************************

// ********** Begin Delegate FOnClanOfficerList ****************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_FriendsSubsystem_h_11_DELEGATE \
STEAMINTEGRATIONKIT_API void FOnClanOfficerList_DelegateWrapper(const FMulticastScriptDelegate& OnClanOfficerList, FSIK_SteamId SteamId, int32 OfficerCount, bool bSuccess);


// ********** End Delegate FOnClanOfficerList ******************************************************

// ********** Begin Delegate FOnFriendRichPresenceUpdate *******************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_FriendsSubsystem_h_12_DELEGATE \
STEAMINTEGRATIONKIT_API void FOnFriendRichPresenceUpdate_DelegateWrapper(const FMulticastScriptDelegate& OnFriendRichPresenceUpdate, FSIK_SteamId SteamId, FSIK_AppId AppId);


// ********** End Delegate FOnFriendRichPresenceUpdate *********************************************

// ********** Begin Delegate FOnDownloadClanActivityCountsResult ***********************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_FriendsSubsystem_h_13_DELEGATE \
STEAMINTEGRATIONKIT_API void FOnDownloadClanActivityCountsResult_DelegateWrapper(const FMulticastScriptDelegate& OnDownloadClanActivityCountsResult, bool bSuccess);


// ********** End Delegate FOnDownloadClanActivityCountsResult *************************************

// ********** Begin Delegate FOnFriendEnumerateFollowingList ***************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_FriendsSubsystem_h_14_DELEGATE \
STEAMINTEGRATIONKIT_API void FOnFriendEnumerateFollowingList_DelegateWrapper(const FMulticastScriptDelegate& OnFriendEnumerateFollowingList, ESIK_Result Result, const TArray<FSIK_SteamId>& SteamId, int32 ResultsReturned, int32 TotalResults);


// ********** End Delegate FOnFriendEnumerateFollowingList *****************************************

// ********** Begin Delegate FOnFriendsGetFollowerCount ********************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_FriendsSubsystem_h_15_DELEGATE \
STEAMINTEGRATIONKIT_API void FOnFriendsGetFollowerCount_DelegateWrapper(const FMulticastScriptDelegate& OnFriendsGetFollowerCount, ESIK_Result Result, FSIK_SteamId SteamId, int32 Count);


// ********** End Delegate FOnFriendsGetFollowerCount **********************************************

// ********** Begin Delegate FOnFriendsIsFollowing *************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_FriendsSubsystem_h_16_DELEGATE \
STEAMINTEGRATIONKIT_API void FOnFriendsIsFollowing_DelegateWrapper(const FMulticastScriptDelegate& OnFriendsIsFollowing, ESIK_Result Result, FSIK_SteamId SteamId, bool bIsFollowing);


// ********** End Delegate FOnFriendsIsFollowing ***************************************************

// ********** Begin Delegate FOnGameConnectedChatJoin **********************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_FriendsSubsystem_h_17_DELEGATE \
STEAMINTEGRATIONKIT_API void FOnGameConnectedChatJoin_DelegateWrapper(const FMulticastScriptDelegate& OnGameConnectedChatJoin, FSIK_SteamId ClanChatId, FSIK_SteamId User);


// ********** End Delegate FOnGameConnectedChatJoin ************************************************

// ********** Begin Delegate FOnGameConnectedChatLeave *********************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_FriendsSubsystem_h_18_DELEGATE \
STEAMINTEGRATIONKIT_API void FOnGameConnectedChatLeave_DelegateWrapper(const FMulticastScriptDelegate& OnGameConnectedChatLeave, FSIK_SteamId ClanChatId, FSIK_SteamId User, bool Kicked, bool Dropped);


// ********** End Delegate FOnGameConnectedChatLeave ***********************************************

// ********** Begin Delegate FOnGameConnectedClanChatMsg *******************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_FriendsSubsystem_h_19_DELEGATE \
STEAMINTEGRATIONKIT_API void FOnGameConnectedClanChatMsg_DelegateWrapper(const FMulticastScriptDelegate& OnGameConnectedClanChatMsg, FSIK_SteamId ClanChatId, FSIK_SteamId User, int32 MessageID);


// ********** End Delegate FOnGameConnectedClanChatMsg *********************************************

// ********** Begin Delegate FOnGameConnectedFriendChatMsg *****************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_FriendsSubsystem_h_20_DELEGATE \
STEAMINTEGRATIONKIT_API void FOnGameConnectedFriendChatMsg_DelegateWrapper(const FMulticastScriptDelegate& OnGameConnectedFriendChatMsg, FSIK_SteamId User, int32 MessageID);


// ********** End Delegate FOnGameConnectedFriendChatMsg *******************************************

// ********** Begin Delegate FOnGameLobbyJoinRequested *********************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_FriendsSubsystem_h_21_DELEGATE \
STEAMINTEGRATIONKIT_API void FOnGameLobbyJoinRequested_DelegateWrapper(const FMulticastScriptDelegate& OnGameLobbyJoinRequested, FSIK_SteamId SteamId, FSIK_SteamId LobbyId);


// ********** End Delegate FOnGameLobbyJoinRequested ***********************************************

// ********** Begin Delegate FOnGameOverlayActivated ***********************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_FriendsSubsystem_h_22_DELEGATE \
STEAMINTEGRATIONKIT_API void FOnGameOverlayActivated_DelegateWrapper(const FMulticastScriptDelegate& OnGameOverlayActivated, bool bActive);


// ********** End Delegate FOnGameOverlayActivated *************************************************

// ********** Begin Delegate FOnGameRichPresenceJoinRequested **************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_FriendsSubsystem_h_23_DELEGATE \
STEAMINTEGRATIONKIT_API void FOnGameRichPresenceJoinRequested_DelegateWrapper(const FMulticastScriptDelegate& OnGameRichPresenceJoinRequested, FSIK_SteamId SteamId, const FString& ConnectString);


// ********** End Delegate FOnGameRichPresenceJoinRequested ****************************************

// ********** Begin Delegate FOnGameServerChangeRequested ******************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_FriendsSubsystem_h_24_DELEGATE \
STEAMINTEGRATIONKIT_API void FOnGameServerChangeRequested_DelegateWrapper(const FMulticastScriptDelegate& OnGameServerChangeRequested, const FString& Server, const FString& Password);


// ********** End Delegate FOnGameServerChangeRequested ********************************************

// ********** Begin Delegate FOnJoinClanChatRoomCompletionResult ***********************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_FriendsSubsystem_h_25_DELEGATE \
STEAMINTEGRATIONKIT_API void FOnJoinClanChatRoomCompletionResult_DelegateWrapper(const FMulticastScriptDelegate& OnJoinClanChatRoomCompletionResult, FSIK_SteamId ClanChatId, ESIK_ChatRoomEnterResponse ChatRoomEnterResponse);


// ********** End Delegate FOnJoinClanChatRoomCompletionResult *************************************

// ********** Begin Delegate FOnPersonaStateChange *************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_FriendsSubsystem_h_26_DELEGATE \
STEAMINTEGRATIONKIT_API void FOnPersonaStateChange_DelegateWrapper(const FMulticastScriptDelegate& OnPersonaStateChange, FSIK_SteamId SteamId, int32 ChangeFlags);


// ********** End Delegate FOnPersonaStateChange ***************************************************

// ********** Begin Delegate FOnSetPersonaNameResponse *********************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_FriendsSubsystem_h_27_DELEGATE \
STEAMINTEGRATIONKIT_API void FOnSetPersonaNameResponse_DelegateWrapper(const FMulticastScriptDelegate& OnSetPersonaNameResponse, ESIK_Result Result, bool bLocalSuccess, bool bRemoteSuccess);


// ********** End Delegate FOnSetPersonaNameResponse ***********************************************

// ********** Begin Class USIK_FriendsSubsystem ****************************************************
struct Z_Construct_UClass_USIK_FriendsSubsystem_Statics;
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_FriendsSubsystem_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_FriendsSubsystem_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSIK_FriendsSubsystem(); \
	friend struct ::Z_Construct_UClass_USIK_FriendsSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMINTEGRATIONKIT_API UClass* ::Z_Construct_UClass_USIK_FriendsSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(USIK_FriendsSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamIntegrationKit"), Z_Construct_UClass_USIK_FriendsSubsystem_NoRegister) \
	DECLARE_SERIALIZER(USIK_FriendsSubsystem)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_FriendsSubsystem_h_35_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USIK_FriendsSubsystem(USIK_FriendsSubsystem&&) = delete; \
	USIK_FriendsSubsystem(const USIK_FriendsSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USIK_FriendsSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USIK_FriendsSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USIK_FriendsSubsystem)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_FriendsSubsystem_h_32_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_FriendsSubsystem_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_FriendsSubsystem_h_35_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_FriendsSubsystem_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USIK_FriendsSubsystem;

// ********** End Class USIK_FriendsSubsystem ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_FriendsSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
