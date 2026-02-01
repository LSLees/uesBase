// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Functions/Friends/SIK_FriendsLibrary.h"

#ifdef STEAMINTEGRATIONKIT_SIK_FriendsLibrary_generated_h
#error "SIK_FriendsLibrary.generated.h already included, missing '#pragma once' in SIK_FriendsLibrary.h"
#endif
#define STEAMINTEGRATIONKIT_SIK_FriendsLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;
struct FDateTime;
struct FSIK_AppId;
struct FSIK_FriendGameInfo;
struct FSIK_FriendsGroupID;
struct FSIK_SteamId;

// ********** Begin ScriptStruct FSIK_FriendGameInfo ***********************************************
struct Z_Construct_UScriptStruct_FSIK_FriendGameInfo_Statics;
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_FriendsLibrary_h_20_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSIK_FriendGameInfo_Statics; \
	STEAMINTEGRATIONKIT_API static class UScriptStruct* StaticStruct();


struct FSIK_FriendGameInfo;
// ********** End ScriptStruct FSIK_FriendGameInfo *************************************************

// ********** Begin Class USIK_FriendsLibrary ******************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_FriendsLibrary_h_87_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetProfileItemPropertyUint); \
	DECLARE_FUNCTION(execGetProfileItemPropertyString); \
	DECLARE_FUNCTION(execBHasEquippedProfileItem); \
	DECLARE_FUNCTION(execSetRichPresence); \
	DECLARE_FUNCTION(execSetPlayedWith); \
	DECLARE_FUNCTION(execSetListenForFriendMessage); \
	DECLARE_FUNCTION(execSetInGameVoiceSpeaking); \
	DECLARE_FUNCTION(execSendClanChatMessage); \
	DECLARE_FUNCTION(execRequestUserInfo); \
	DECLARE_FUNCTION(execRequestFriendRichPresence); \
	DECLARE_FUNCTION(execReplyToFriendMessage); \
	DECLARE_FUNCTION(execLeaveClanChatRoom); \
	DECLARE_FUNCTION(execIsUserInSource); \
	DECLARE_FUNCTION(execIsFollowing); \
	DECLARE_FUNCTION(execIsClanChatWindowOpenInSteam); \
	DECLARE_FUNCTION(execIsClanOfficialGameGroup); \
	DECLARE_FUNCTION(execIsClanPublic); \
	DECLARE_FUNCTION(execIsClanChatAdmin); \
	DECLARE_FUNCTION(execInviteUserToGame); \
	DECLARE_FUNCTION(execHasFriend); \
	DECLARE_FUNCTION(execGetUserRestrictions); \
	DECLARE_FUNCTION(execGetSmallFriendAvatar); \
	DECLARE_FUNCTION(execGetPlayerNickname); \
	DECLARE_FUNCTION(execGetPersonaState); \
	DECLARE_FUNCTION(execGetPersonaName); \
	DECLARE_FUNCTION(execGetMediumFriendAvatar); \
	DECLARE_FUNCTION(execGetLargeFriendAvatar); \
	DECLARE_FUNCTION(execGetFriendSteamLevel); \
	DECLARE_FUNCTION(execGetFriendsGroupName); \
	DECLARE_FUNCTION(execGetFriendsGroupMembersList); \
	DECLARE_FUNCTION(execGetFriendGroupMembersCount); \
	DECLARE_FUNCTION(execGetFriendGroupIDByIndex); \
	DECLARE_FUNCTION(execGetFriendGroupCount); \
	DECLARE_FUNCTION(execGetFriendRichPresenceKeyCount); \
	DECLARE_FUNCTION(execGetFriendRichPresenceKeyByIndex); \
	DECLARE_FUNCTION(execGetFriendRichPresence); \
	DECLARE_FUNCTION(execGetFriendRelationship); \
	DECLARE_FUNCTION(execGetFriendPersonaState); \
	DECLARE_FUNCTION(execGetFriendPersonaNameHistory); \
	DECLARE_FUNCTION(execGetFriendPersonaName); \
	DECLARE_FUNCTION(execGetFriendMessage); \
	DECLARE_FUNCTION(execGetFriendGamePlayed); \
	DECLARE_FUNCTION(execGetFriendFromSourceByIndex); \
	DECLARE_FUNCTION(execGetFriendCountFromSource); \
	DECLARE_FUNCTION(execGetFriendCount); \
	DECLARE_FUNCTION(execGetFriendCoplayTime); \
	DECLARE_FUNCTION(execGetFriendCoplayGame); \
	DECLARE_FUNCTION(execGetFriendByIndex); \
	DECLARE_FUNCTION(execGetCoplayFriendCount); \
	DECLARE_FUNCTION(execGetCoplayFriend); \
	DECLARE_FUNCTION(execGetClanTag); \
	DECLARE_FUNCTION(execGetClanOwner); \
	DECLARE_FUNCTION(execGetClanOfficerCount); \
	DECLARE_FUNCTION(execGetClanOfficerByIndex); \
	DECLARE_FUNCTION(execGetClanName); \
	DECLARE_FUNCTION(execGetClanCount); \
	DECLARE_FUNCTION(execGetClanChatMessage); \
	DECLARE_FUNCTION(execGetClanChatMemberCount); \
	DECLARE_FUNCTION(execGetClanByIndex); \
	DECLARE_FUNCTION(execGetClanActivityCounts); \
	DECLARE_FUNCTION(execGetChatMemberByIndex); \
	DECLARE_FUNCTION(execCloseClanChatWindowInSteam); \
	DECLARE_FUNCTION(execClearRichPresence); \
	DECLARE_FUNCTION(execActivateGameOverlayToWebPage); \
	DECLARE_FUNCTION(execActivateGameOverlayToUser); \
	DECLARE_FUNCTION(execActivateGameOverlayToStore); \
	DECLARE_FUNCTION(execActivateGameOverlayInviteDialog); \
	DECLARE_FUNCTION(execActivateGameOverlay);


struct Z_Construct_UClass_USIK_FriendsLibrary_Statics;
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_FriendsLibrary_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_FriendsLibrary_h_87_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSIK_FriendsLibrary(); \
	friend struct ::Z_Construct_UClass_USIK_FriendsLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMINTEGRATIONKIT_API UClass* ::Z_Construct_UClass_USIK_FriendsLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(USIK_FriendsLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamIntegrationKit"), Z_Construct_UClass_USIK_FriendsLibrary_NoRegister) \
	DECLARE_SERIALIZER(USIK_FriendsLibrary)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_FriendsLibrary_h_87_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USIK_FriendsLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USIK_FriendsLibrary(USIK_FriendsLibrary&&) = delete; \
	USIK_FriendsLibrary(const USIK_FriendsLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USIK_FriendsLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USIK_FriendsLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USIK_FriendsLibrary) \
	NO_API virtual ~USIK_FriendsLibrary();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_FriendsLibrary_h_84_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_FriendsLibrary_h_87_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_FriendsLibrary_h_87_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_FriendsLibrary_h_87_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_FriendsLibrary_h_87_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USIK_FriendsLibrary;

// ********** End Class USIK_FriendsLibrary ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_FriendsLibrary_h

// ********** Begin Enum ESIK_PersonaState *********************************************************
#define FOREACH_ENUM_ESIK_PERSONASTATE(op) \
	op(PersonaStateOffline) \
	op(PersonaStateOnline) \
	op(PersonaStateBusy) \
	op(PersonaStateAway) \
	op(PersonaStateSnooze) \
	op(PersonaStateLookingToTrade) \
	op(PersonaStateLookingToPlay) \
	op(PersonaStateMax) 
// ********** End Enum ESIK_PersonaState ***********************************************************

// ********** Begin Enum ESIK_FriendRelationship ***************************************************
#define FOREACH_ENUM_ESIK_FRIENDRELATIONSHIP(op) \
	op(FriendRelationshipNone) \
	op(FriendRelationshipBlocked) \
	op(FriendRelationshipRequestRecipient) \
	op(FriendRelationshipFriend) \
	op(FriendRelationshipRequestInitiator) \
	op(FriendRelationshipIgnored) \
	op(FriendRelationshipIgnoredFriend) \
	op(FriendRelationshipSuggested) \
	op(FriendRelationshipMax) 
// ********** End Enum ESIK_FriendRelationship *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
