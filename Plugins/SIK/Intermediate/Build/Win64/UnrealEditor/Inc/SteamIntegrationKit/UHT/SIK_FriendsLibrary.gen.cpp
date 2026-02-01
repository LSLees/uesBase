// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/Friends/SIK_FriendsLibrary.h"
#include "SIK_SharedFile.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_FriendsLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_FriendsLibrary();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_FriendsLibrary_NoRegister();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_ECommunityProfileItemProperty();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_ECommunityProfileItemType();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_FriendFlags();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_FriendRelationship();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_PersonaState();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_AppId();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_FriendGameInfo();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_FriendsGroupID();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_GameID();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_SteamId();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FSIK_FriendGameInfo ***********************************************
struct Z_Construct_UScriptStruct_FSIK_FriendGameInfo_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSIK_FriendGameInfo); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSIK_FriendGameInfo); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LobbySteamId_MetaData[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Friends" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameId_MetaData[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Friends" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IP_MetaData[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Friends" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GamePort_MetaData[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Friends" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QueryPort_MetaData[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Friends" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSIK_FriendGameInfo constinit property declarations ***************
	static const UECodeGen_Private::FStructPropertyParams NewProp_LobbySteamId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_IP;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GamePort;
	static const UECodeGen_Private::FIntPropertyParams NewProp_QueryPort;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSIK_FriendGameInfo constinit property declarations *****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSIK_FriendGameInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSIK_FriendGameInfo_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSIK_FriendGameInfo;
class UScriptStruct* FSIK_FriendGameInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_FriendGameInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSIK_FriendGameInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSIK_FriendGameInfo, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("SIK_FriendGameInfo"));
	}
	return Z_Registration_Info_UScriptStruct_FSIK_FriendGameInfo.OuterSingleton;
	}

// ********** Begin ScriptStruct FSIK_FriendGameInfo Property Definitions **************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSIK_FriendGameInfo_Statics::NewProp_LobbySteamId = { "LobbySteamId", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_FriendGameInfo, LobbySteamId), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LobbySteamId_MetaData), NewProp_LobbySteamId_MetaData) }; // 3413883574
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSIK_FriendGameInfo_Statics::NewProp_GameId = { "GameId", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_FriendGameInfo, GameId), Z_Construct_UScriptStruct_FSIK_GameID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameId_MetaData), NewProp_GameId_MetaData) }; // 119361006
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSIK_FriendGameInfo_Statics::NewProp_IP = { "IP", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_FriendGameInfo, IP), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IP_MetaData), NewProp_IP_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSIK_FriendGameInfo_Statics::NewProp_GamePort = { "GamePort", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_FriendGameInfo, GamePort), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GamePort_MetaData), NewProp_GamePort_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSIK_FriendGameInfo_Statics::NewProp_QueryPort = { "QueryPort", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_FriendGameInfo, QueryPort), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QueryPort_MetaData), NewProp_QueryPort_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSIK_FriendGameInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_FriendGameInfo_Statics::NewProp_LobbySteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_FriendGameInfo_Statics::NewProp_GameId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_FriendGameInfo_Statics::NewProp_IP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_FriendGameInfo_Statics::NewProp_GamePort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_FriendGameInfo_Statics::NewProp_QueryPort,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_FriendGameInfo_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSIK_FriendGameInfo Property Definitions ****************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSIK_FriendGameInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	&NewStructOps,
	"SIK_FriendGameInfo",
	Z_Construct_UScriptStruct_FSIK_FriendGameInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_FriendGameInfo_Statics::PropPointers),
	sizeof(FSIK_FriendGameInfo),
	alignof(FSIK_FriendGameInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_FriendGameInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSIK_FriendGameInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSIK_FriendGameInfo()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_FriendGameInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSIK_FriendGameInfo.InnerSingleton, Z_Construct_UScriptStruct_FSIK_FriendGameInfo_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSIK_FriendGameInfo.InnerSingleton);
}
// ********** End ScriptStruct FSIK_FriendGameInfo *************************************************

// ********** Begin Enum ESIK_PersonaState *********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESIK_PersonaState;
static UEnum* ESIK_PersonaState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESIK_PersonaState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESIK_PersonaState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamIntegrationKit_ESIK_PersonaState, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("ESIK_PersonaState"));
	}
	return Z_Registration_Info_UEnum_ESIK_PersonaState.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<ESIK_PersonaState>()
{
	return ESIK_PersonaState_StaticEnum();
}
struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_PersonaState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsLibrary.h" },
		{ "PersonaStateAway.DisplayName", "Away" },
		{ "PersonaStateAway.Name", "PersonaStateAway" },
		{ "PersonaStateBusy.DisplayName", "Busy" },
		{ "PersonaStateBusy.Name", "PersonaStateBusy" },
		{ "PersonaStateLookingToPlay.DisplayName", "Looking To Play" },
		{ "PersonaStateLookingToPlay.Name", "PersonaStateLookingToPlay" },
		{ "PersonaStateLookingToTrade.DisplayName", "Looking To Trade" },
		{ "PersonaStateLookingToTrade.Name", "PersonaStateLookingToTrade" },
		{ "PersonaStateMax.DisplayName", "Max" },
		{ "PersonaStateMax.Name", "PersonaStateMax" },
		{ "PersonaStateOffline.DisplayName", "Offline" },
		{ "PersonaStateOffline.Name", "PersonaStateOffline" },
		{ "PersonaStateOnline.DisplayName", "Online" },
		{ "PersonaStateOnline.Name", "PersonaStateOnline" },
		{ "PersonaStateSnooze.DisplayName", "Snooze" },
		{ "PersonaStateSnooze.Name", "PersonaStateSnooze" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "PersonaStateOffline", (int64)PersonaStateOffline },
		{ "PersonaStateOnline", (int64)PersonaStateOnline },
		{ "PersonaStateBusy", (int64)PersonaStateBusy },
		{ "PersonaStateAway", (int64)PersonaStateAway },
		{ "PersonaStateSnooze", (int64)PersonaStateSnooze },
		{ "PersonaStateLookingToTrade", (int64)PersonaStateLookingToTrade },
		{ "PersonaStateLookingToPlay", (int64)PersonaStateLookingToPlay },
		{ "PersonaStateMax", (int64)PersonaStateMax },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_PersonaState_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamIntegrationKit_ESIK_PersonaState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	"ESIK_PersonaState",
	"ESIK_PersonaState",
	Z_Construct_UEnum_SteamIntegrationKit_ESIK_PersonaState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_PersonaState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_PersonaState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamIntegrationKit_ESIK_PersonaState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_PersonaState()
{
	if (!Z_Registration_Info_UEnum_ESIK_PersonaState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESIK_PersonaState.InnerSingleton, Z_Construct_UEnum_SteamIntegrationKit_ESIK_PersonaState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESIK_PersonaState.InnerSingleton;
}
// ********** End Enum ESIK_PersonaState ***********************************************************

// ********** Begin Enum ESIK_FriendRelationship ***************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESIK_FriendRelationship;
static UEnum* ESIK_FriendRelationship_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESIK_FriendRelationship.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESIK_FriendRelationship.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamIntegrationKit_ESIK_FriendRelationship, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("ESIK_FriendRelationship"));
	}
	return Z_Registration_Info_UEnum_ESIK_FriendRelationship.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<ESIK_FriendRelationship>()
{
	return ESIK_FriendRelationship_StaticEnum();
}
struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_FriendRelationship_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "FriendRelationshipBlocked.DisplayName", "Blocked" },
		{ "FriendRelationshipBlocked.Name", "FriendRelationshipBlocked" },
		{ "FriendRelationshipFriend.DisplayName", "Friend" },
		{ "FriendRelationshipFriend.Name", "FriendRelationshipFriend" },
		{ "FriendRelationshipIgnored.DisplayName", "Ignored" },
		{ "FriendRelationshipIgnored.Name", "FriendRelationshipIgnored" },
		{ "FriendRelationshipIgnoredFriend.DisplayName", "Ignored Friend" },
		{ "FriendRelationshipIgnoredFriend.Name", "FriendRelationshipIgnoredFriend" },
		{ "FriendRelationshipMax.DisplayName", "Max" },
		{ "FriendRelationshipMax.Name", "FriendRelationshipMax" },
		{ "FriendRelationshipNone.DisplayName", "None" },
		{ "FriendRelationshipNone.Name", "FriendRelationshipNone" },
		{ "FriendRelationshipRequestInitiator.DisplayName", "Request Initiator" },
		{ "FriendRelationshipRequestInitiator.Name", "FriendRelationshipRequestInitiator" },
		{ "FriendRelationshipRequestRecipient.DisplayName", "Request Recipient" },
		{ "FriendRelationshipRequestRecipient.Name", "FriendRelationshipRequestRecipient" },
		{ "FriendRelationshipSuggested.DisplayName", "Suggested" },
		{ "FriendRelationshipSuggested.Name", "FriendRelationshipSuggested" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsLibrary.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "FriendRelationshipNone", (int64)FriendRelationshipNone },
		{ "FriendRelationshipBlocked", (int64)FriendRelationshipBlocked },
		{ "FriendRelationshipRequestRecipient", (int64)FriendRelationshipRequestRecipient },
		{ "FriendRelationshipFriend", (int64)FriendRelationshipFriend },
		{ "FriendRelationshipRequestInitiator", (int64)FriendRelationshipRequestInitiator },
		{ "FriendRelationshipIgnored", (int64)FriendRelationshipIgnored },
		{ "FriendRelationshipIgnoredFriend", (int64)FriendRelationshipIgnoredFriend },
		{ "FriendRelationshipSuggested", (int64)FriendRelationshipSuggested },
		{ "FriendRelationshipMax", (int64)FriendRelationshipMax },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_FriendRelationship_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamIntegrationKit_ESIK_FriendRelationship_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	"ESIK_FriendRelationship",
	"ESIK_FriendRelationship",
	Z_Construct_UEnum_SteamIntegrationKit_ESIK_FriendRelationship_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_FriendRelationship_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_FriendRelationship_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamIntegrationKit_ESIK_FriendRelationship_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_FriendRelationship()
{
	if (!Z_Registration_Info_UEnum_ESIK_FriendRelationship.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESIK_FriendRelationship.InnerSingleton, Z_Construct_UEnum_SteamIntegrationKit_ESIK_FriendRelationship_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESIK_FriendRelationship.InnerSingleton;
}
// ********** End Enum ESIK_FriendRelationship *****************************************************

// ********** Begin Class USIK_FriendsLibrary Function ActivateGameOverlay *************************
struct Z_Construct_UFunction_USIK_FriendsLibrary_ActivateGameOverlay_Statics
{
	struct SIK_FriendsLibrary_eventActivateGameOverlay_Parms
	{
		FString DialogToOpen;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Friends" },
		{ "Comment", "/*\n\x09""Activates the game overlay, with an optional dialog to open.\n\x09@param DialogToOpen - Valid options include \"Friends\", \"Community\", \"Players\", \"Settings\", \"OfficialGameGroup\", \"Stats\", \"Achievements\", \"chatroomgroup/nnnn\".\n\x09*/" },
		{ "DisplayName", "Activate Steam Game Overlay" },
		{ "Keywords", "ActivateGameOverlay" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsLibrary.h" },
		{ "ToolTip", "Activates the game overlay, with an optional dialog to open.\n@param DialogToOpen - Valid options include \"Friends\", \"Community\", \"Players\", \"Settings\", \"OfficialGameGroup\", \"Stats\", \"Achievements\", \"chatroomgroup/nnnn\"." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogToOpen_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ActivateGameOverlay constinit property declarations *******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_DialogToOpen;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ActivateGameOverlay constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ActivateGameOverlay Property Definitions ******************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_ActivateGameOverlay_Statics::NewProp_DialogToOpen = { "DialogToOpen", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventActivateGameOverlay_Parms, DialogToOpen), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogToOpen_MetaData), NewProp_DialogToOpen_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_FriendsLibrary_ActivateGameOverlay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_ActivateGameOverlay_Statics::NewProp_DialogToOpen,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_ActivateGameOverlay_Statics::PropPointers) < 2048);
// ********** End Function ActivateGameOverlay Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_FriendsLibrary_ActivateGameOverlay_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_FriendsLibrary, nullptr, "ActivateGameOverlay", 	Z_Construct_UFunction_USIK_FriendsLibrary_ActivateGameOverlay_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_ActivateGameOverlay_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_ActivateGameOverlay_Statics::SIK_FriendsLibrary_eventActivateGameOverlay_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_ActivateGameOverlay_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_FriendsLibrary_ActivateGameOverlay_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_ActivateGameOverlay_Statics::SIK_FriendsLibrary_eventActivateGameOverlay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_FriendsLibrary_ActivateGameOverlay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_FriendsLibrary_ActivateGameOverlay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_FriendsLibrary::execActivateGameOverlay)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_DialogToOpen);
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_FriendsLibrary::ActivateGameOverlay(Z_Param_DialogToOpen);
	P_NATIVE_END;
}
// ********** End Class USIK_FriendsLibrary Function ActivateGameOverlay ***************************

// ********** Begin Class USIK_FriendsLibrary Function ActivateGameOverlayInviteDialog *************
struct Z_Construct_UFunction_USIK_FriendsLibrary_ActivateGameOverlayInviteDialog_Statics
{
	struct SIK_FriendsLibrary_eventActivateGameOverlayInviteDialog_Parms
	{
		int64 SteamIdLobby;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Friends" },
		{ "Comment", "/*\n\x09""Activates game overlay to open the invite dialog. Invitations will be sent for the provided lobby.\n\x09@param SteamIdLobby - The Steam ID of the lobby to invite to.\n\x09*/" },
		{ "DisplayName", "Activate Steam Game Overlay Invite Dialog" },
		{ "Keywords", "ActivateGameOverlayInviteDialog" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsLibrary.h" },
		{ "ToolTip", "Activates game overlay to open the invite dialog. Invitations will be sent for the provided lobby.\n@param SteamIdLobby - The Steam ID of the lobby to invite to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamIdLobby_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ActivateGameOverlayInviteDialog constinit property declarations *******
	static const UECodeGen_Private::FInt64PropertyParams NewProp_SteamIdLobby;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ActivateGameOverlayInviteDialog constinit property declarations *********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ActivateGameOverlayInviteDialog Property Definitions ******************
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_ActivateGameOverlayInviteDialog_Statics::NewProp_SteamIdLobby = { "SteamIdLobby", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventActivateGameOverlayInviteDialog_Parms, SteamIdLobby), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamIdLobby_MetaData), NewProp_SteamIdLobby_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_FriendsLibrary_ActivateGameOverlayInviteDialog_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_ActivateGameOverlayInviteDialog_Statics::NewProp_SteamIdLobby,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_ActivateGameOverlayInviteDialog_Statics::PropPointers) < 2048);
// ********** End Function ActivateGameOverlayInviteDialog Property Definitions ********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_FriendsLibrary_ActivateGameOverlayInviteDialog_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_FriendsLibrary, nullptr, "ActivateGameOverlayInviteDialog", 	Z_Construct_UFunction_USIK_FriendsLibrary_ActivateGameOverlayInviteDialog_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_ActivateGameOverlayInviteDialog_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_ActivateGameOverlayInviteDialog_Statics::SIK_FriendsLibrary_eventActivateGameOverlayInviteDialog_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_ActivateGameOverlayInviteDialog_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_FriendsLibrary_ActivateGameOverlayInviteDialog_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_ActivateGameOverlayInviteDialog_Statics::SIK_FriendsLibrary_eventActivateGameOverlayInviteDialog_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_FriendsLibrary_ActivateGameOverlayInviteDialog()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_FriendsLibrary_ActivateGameOverlayInviteDialog_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_FriendsLibrary::execActivateGameOverlayInviteDialog)
{
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_SteamIdLobby);
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_FriendsLibrary::ActivateGameOverlayInviteDialog(Z_Param_Out_SteamIdLobby);
	P_NATIVE_END;
}
// ********** End Class USIK_FriendsLibrary Function ActivateGameOverlayInviteDialog ***************

// ********** Begin Class USIK_FriendsLibrary Function ActivateGameOverlayToStore ******************
struct Z_Construct_UFunction_USIK_FriendsLibrary_ActivateGameOverlayToStore_Statics
{
	struct SIK_FriendsLibrary_eventActivateGameOverlayToStore_Parms
	{
		FSIK_AppId AppID;
		bool bAddToCartAndShow;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Friends" },
		{ "Comment", "/*\n\x09""Activates game overlay to the store page for an app.\n\x09@param AppID - The AppID of the app to show.\n\x09@param bAddToCartAndShow - If true, add to cart and show.\n\x09*/" },
		{ "CPP_Default_bAddToCartAndShow", "true" },
		{ "DisplayName", "Activate Steam Game Overlay To Store" },
		{ "Keywords", "ActivateGameOverlayToStore" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsLibrary.h" },
		{ "ToolTip", "Activates game overlay to the store page for an app.\n@param AppID - The AppID of the app to show.\n@param bAddToCartAndShow - If true, add to cart and show." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ActivateGameOverlayToStore constinit property declarations ************
	static const UECodeGen_Private::FStructPropertyParams NewProp_AppID;
	static void NewProp_bAddToCartAndShow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddToCartAndShow;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ActivateGameOverlayToStore constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ActivateGameOverlayToStore Property Definitions ***********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_ActivateGameOverlayToStore_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventActivateGameOverlayToStore_Parms, AppID), Z_Construct_UScriptStruct_FSIK_AppId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppID_MetaData), NewProp_AppID_MetaData) }; // 3325316996
void Z_Construct_UFunction_USIK_FriendsLibrary_ActivateGameOverlayToStore_Statics::NewProp_bAddToCartAndShow_SetBit(void* Obj)
{
	((SIK_FriendsLibrary_eventActivateGameOverlayToStore_Parms*)Obj)->bAddToCartAndShow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_ActivateGameOverlayToStore_Statics::NewProp_bAddToCartAndShow = { "bAddToCartAndShow", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_FriendsLibrary_eventActivateGameOverlayToStore_Parms), &Z_Construct_UFunction_USIK_FriendsLibrary_ActivateGameOverlayToStore_Statics::NewProp_bAddToCartAndShow_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_FriendsLibrary_ActivateGameOverlayToStore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_ActivateGameOverlayToStore_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_ActivateGameOverlayToStore_Statics::NewProp_bAddToCartAndShow,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_ActivateGameOverlayToStore_Statics::PropPointers) < 2048);
// ********** End Function ActivateGameOverlayToStore Property Definitions *************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_FriendsLibrary_ActivateGameOverlayToStore_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_FriendsLibrary, nullptr, "ActivateGameOverlayToStore", 	Z_Construct_UFunction_USIK_FriendsLibrary_ActivateGameOverlayToStore_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_ActivateGameOverlayToStore_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_ActivateGameOverlayToStore_Statics::SIK_FriendsLibrary_eventActivateGameOverlayToStore_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_ActivateGameOverlayToStore_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_FriendsLibrary_ActivateGameOverlayToStore_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_ActivateGameOverlayToStore_Statics::SIK_FriendsLibrary_eventActivateGameOverlayToStore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_FriendsLibrary_ActivateGameOverlayToStore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_FriendsLibrary_ActivateGameOverlayToStore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_FriendsLibrary::execActivateGameOverlayToStore)
{
	P_GET_STRUCT_REF(FSIK_AppId,Z_Param_Out_AppID);
	P_GET_UBOOL(Z_Param_bAddToCartAndShow);
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_FriendsLibrary::ActivateGameOverlayToStore(Z_Param_Out_AppID,Z_Param_bAddToCartAndShow);
	P_NATIVE_END;
}
// ********** End Class USIK_FriendsLibrary Function ActivateGameOverlayToStore ********************

// ********** Begin Class USIK_FriendsLibrary Function ActivateGameOverlayToUser *******************
struct Z_Construct_UFunction_USIK_FriendsLibrary_ActivateGameOverlayToUser_Statics
{
	struct SIK_FriendsLibrary_eventActivateGameOverlayToUser_Parms
	{
		FString Dialog;
		int64 SteamIdUser;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Friends" },
		{ "Comment", "/*\n\x09""Activates game overlay to a specific place.\n\x09@param Dialog - Valid options include \"steamid\", \"chat\", \"jointrade\", \"stats\", \"achievements\", \"friendadd\", \"friendremove\", \"friendrequestaccept\", \"friendrequestignore\".\n\x09@param SteamIdUser - The Steam ID of the user to interact with.\n\x09*/" },
		{ "DisplayName", "Activate Steam Game Overlay To User" },
		{ "Keywords", "ActivateGameOverlayToUser" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsLibrary.h" },
		{ "ToolTip", "Activates game overlay to a specific place.\n@param Dialog - Valid options include \"steamid\", \"chat\", \"jointrade\", \"stats\", \"achievements\", \"friendadd\", \"friendremove\", \"friendrequestaccept\", \"friendrequestignore\".\n@param SteamIdUser - The Steam ID of the user to interact with." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Dialog_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ActivateGameOverlayToUser constinit property declarations *************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Dialog;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_SteamIdUser;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ActivateGameOverlayToUser constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ActivateGameOverlayToUser Property Definitions ************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_ActivateGameOverlayToUser_Statics::NewProp_Dialog = { "Dialog", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventActivateGameOverlayToUser_Parms, Dialog), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Dialog_MetaData), NewProp_Dialog_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_ActivateGameOverlayToUser_Statics::NewProp_SteamIdUser = { "SteamIdUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventActivateGameOverlayToUser_Parms, SteamIdUser), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_FriendsLibrary_ActivateGameOverlayToUser_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_ActivateGameOverlayToUser_Statics::NewProp_Dialog,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_ActivateGameOverlayToUser_Statics::NewProp_SteamIdUser,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_ActivateGameOverlayToUser_Statics::PropPointers) < 2048);
// ********** End Function ActivateGameOverlayToUser Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_FriendsLibrary_ActivateGameOverlayToUser_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_FriendsLibrary, nullptr, "ActivateGameOverlayToUser", 	Z_Construct_UFunction_USIK_FriendsLibrary_ActivateGameOverlayToUser_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_ActivateGameOverlayToUser_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_ActivateGameOverlayToUser_Statics::SIK_FriendsLibrary_eventActivateGameOverlayToUser_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_ActivateGameOverlayToUser_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_FriendsLibrary_ActivateGameOverlayToUser_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_ActivateGameOverlayToUser_Statics::SIK_FriendsLibrary_eventActivateGameOverlayToUser_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_FriendsLibrary_ActivateGameOverlayToUser()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_FriendsLibrary_ActivateGameOverlayToUser_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_FriendsLibrary::execActivateGameOverlayToUser)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Dialog);
	P_GET_PROPERTY(FInt64Property,Z_Param_SteamIdUser);
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_FriendsLibrary::ActivateGameOverlayToUser(Z_Param_Dialog,Z_Param_SteamIdUser);
	P_NATIVE_END;
}
// ********** End Class USIK_FriendsLibrary Function ActivateGameOverlayToUser *********************

// ********** Begin Class USIK_FriendsLibrary Function ActivateGameOverlayToWebPage ****************
struct Z_Construct_UFunction_USIK_FriendsLibrary_ActivateGameOverlayToWebPage_Statics
{
	struct SIK_FriendsLibrary_eventActivateGameOverlayToWebPage_Parms
	{
		FString URL;
		bool bUseModal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Friends" },
		{ "Comment", "/*\n\x09""Activates game overlay web browser directly to the specified URL.\n\x09@param URL - The full address with protocol type.\n\x09@param bUseModal - If true, the browser will be opened in a special overlay configuration.\n\x09*/" },
		{ "CPP_Default_bUseModal", "false" },
		{ "DisplayName", "Activate Steam Game Overlay To WebPage" },
		{ "Keywords", "ActivateGameOverlayToWebPage" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsLibrary.h" },
		{ "ToolTip", "Activates game overlay web browser directly to the specified URL.\n@param URL - The full address with protocol type.\n@param bUseModal - If true, the browser will be opened in a special overlay configuration." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ActivateGameOverlayToWebPage constinit property declarations **********
	static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
	static void NewProp_bUseModal_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseModal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ActivateGameOverlayToWebPage constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ActivateGameOverlayToWebPage Property Definitions *********************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_ActivateGameOverlayToWebPage_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventActivateGameOverlayToWebPage_Parms, URL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_URL_MetaData), NewProp_URL_MetaData) };
void Z_Construct_UFunction_USIK_FriendsLibrary_ActivateGameOverlayToWebPage_Statics::NewProp_bUseModal_SetBit(void* Obj)
{
	((SIK_FriendsLibrary_eventActivateGameOverlayToWebPage_Parms*)Obj)->bUseModal = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_ActivateGameOverlayToWebPage_Statics::NewProp_bUseModal = { "bUseModal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_FriendsLibrary_eventActivateGameOverlayToWebPage_Parms), &Z_Construct_UFunction_USIK_FriendsLibrary_ActivateGameOverlayToWebPage_Statics::NewProp_bUseModal_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_FriendsLibrary_ActivateGameOverlayToWebPage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_ActivateGameOverlayToWebPage_Statics::NewProp_URL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_ActivateGameOverlayToWebPage_Statics::NewProp_bUseModal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_ActivateGameOverlayToWebPage_Statics::PropPointers) < 2048);
// ********** End Function ActivateGameOverlayToWebPage Property Definitions ***********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_FriendsLibrary_ActivateGameOverlayToWebPage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_FriendsLibrary, nullptr, "ActivateGameOverlayToWebPage", 	Z_Construct_UFunction_USIK_FriendsLibrary_ActivateGameOverlayToWebPage_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_ActivateGameOverlayToWebPage_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_ActivateGameOverlayToWebPage_Statics::SIK_FriendsLibrary_eventActivateGameOverlayToWebPage_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_ActivateGameOverlayToWebPage_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_FriendsLibrary_ActivateGameOverlayToWebPage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_ActivateGameOverlayToWebPage_Statics::SIK_FriendsLibrary_eventActivateGameOverlayToWebPage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_FriendsLibrary_ActivateGameOverlayToWebPage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_FriendsLibrary_ActivateGameOverlayToWebPage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_FriendsLibrary::execActivateGameOverlayToWebPage)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_URL);
	P_GET_UBOOL(Z_Param_bUseModal);
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_FriendsLibrary::ActivateGameOverlayToWebPage(Z_Param_URL,Z_Param_bUseModal);
	P_NATIVE_END;
}
// ********** End Class USIK_FriendsLibrary Function ActivateGameOverlayToWebPage ******************

// ********** Begin Class USIK_FriendsLibrary Function BHasEquippedProfileItem *********************
struct Z_Construct_UFunction_USIK_FriendsLibrary_BHasEquippedProfileItem_Statics
{
	struct SIK_FriendsLibrary_eventBHasEquippedProfileItem_Parms
	{
		FSIK_SteamId SteamIdUser;
		TEnumAsByte<ESIK_ECommunityProfileItemType> ItemType;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Friends" },
		{ "Comment", "//After calling RequestEquippedProfileItems, you can use this function to check if the user has a type of profile item equipped or not\n" },
		{ "DisplayName", "B Has Equipped Profile Item" },
		{ "Keywords", "BHasEquippedProfileItem" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsLibrary.h" },
		{ "ToolTip", "After calling RequestEquippedProfileItems, you can use this function to check if the user has a type of profile item equipped or not" },
	};
#endif // WITH_METADATA

// ********** Begin Function BHasEquippedProfileItem constinit property declarations ***************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIdUser;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ItemType;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BHasEquippedProfileItem constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BHasEquippedProfileItem Property Definitions **************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_BHasEquippedProfileItem_Statics::NewProp_SteamIdUser = { "SteamIdUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventBHasEquippedProfileItem_Parms, SteamIdUser), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_BHasEquippedProfileItem_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventBHasEquippedProfileItem_Parms, ItemType), Z_Construct_UEnum_SteamIntegrationKit_ESIK_ECommunityProfileItemType, METADATA_PARAMS(0, nullptr) }; // 2137244242
void Z_Construct_UFunction_USIK_FriendsLibrary_BHasEquippedProfileItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_FriendsLibrary_eventBHasEquippedProfileItem_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_BHasEquippedProfileItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_FriendsLibrary_eventBHasEquippedProfileItem_Parms), &Z_Construct_UFunction_USIK_FriendsLibrary_BHasEquippedProfileItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_FriendsLibrary_BHasEquippedProfileItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_BHasEquippedProfileItem_Statics::NewProp_SteamIdUser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_BHasEquippedProfileItem_Statics::NewProp_ItemType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_BHasEquippedProfileItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_BHasEquippedProfileItem_Statics::PropPointers) < 2048);
// ********** End Function BHasEquippedProfileItem Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_FriendsLibrary_BHasEquippedProfileItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_FriendsLibrary, nullptr, "BHasEquippedProfileItem", 	Z_Construct_UFunction_USIK_FriendsLibrary_BHasEquippedProfileItem_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_BHasEquippedProfileItem_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_BHasEquippedProfileItem_Statics::SIK_FriendsLibrary_eventBHasEquippedProfileItem_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_BHasEquippedProfileItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_FriendsLibrary_BHasEquippedProfileItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_BHasEquippedProfileItem_Statics::SIK_FriendsLibrary_eventBHasEquippedProfileItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_FriendsLibrary_BHasEquippedProfileItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_FriendsLibrary_BHasEquippedProfileItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_FriendsLibrary::execBHasEquippedProfileItem)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_SteamIdUser);
	P_GET_PROPERTY(FByteProperty,Z_Param_ItemType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_FriendsLibrary::BHasEquippedProfileItem(Z_Param_SteamIdUser,ESIK_ECommunityProfileItemType(Z_Param_ItemType));
	P_NATIVE_END;
}
// ********** End Class USIK_FriendsLibrary Function BHasEquippedProfileItem ***********************

// ********** Begin Class USIK_FriendsLibrary Function ClearRichPresence ***************************
struct Z_Construct_UFunction_USIK_FriendsLibrary_ClearRichPresence_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Friends" },
		{ "Comment", "/*\n\x09""Clears the rich presence data of the local user.\n\x09*/" },
		{ "DisplayName", "Clear Steam Rich Presence" },
		{ "Keywords", "ClearRichPresence" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsLibrary.h" },
		{ "ToolTip", "Clears the rich presence data of the local user." },
	};
#endif // WITH_METADATA

// ********** Begin Function ClearRichPresence constinit property declarations *********************
// ********** End Function ClearRichPresence constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_FriendsLibrary_ClearRichPresence_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_FriendsLibrary, nullptr, "ClearRichPresence", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_ClearRichPresence_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_FriendsLibrary_ClearRichPresence_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USIK_FriendsLibrary_ClearRichPresence()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_FriendsLibrary_ClearRichPresence_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_FriendsLibrary::execClearRichPresence)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_FriendsLibrary::ClearRichPresence();
	P_NATIVE_END;
}
// ********** End Class USIK_FriendsLibrary Function ClearRichPresence *****************************

// ********** Begin Class USIK_FriendsLibrary Function CloseClanChatWindowInSteam ******************
struct Z_Construct_UFunction_USIK_FriendsLibrary_CloseClanChatWindowInSteam_Statics
{
	struct SIK_FriendsLibrary_eventCloseClanChatWindowInSteam_Parms
	{
		int64 SteamIdClanChat;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Friends" },
		{ "Comment", "/*\n\x09""Closes the Steam clan chat window in Steam.\n\x09@param SteamIdClanChat - The Steam ID of the clan chat.\n\x09@return - true if successful, false otherwise.\n\x09*/" },
		{ "DisplayName", "Close Steam Clan Chat Window In Steam" },
		{ "Keywords", "CloseClanChatWindow" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsLibrary.h" },
		{ "ToolTip", "Closes the Steam clan chat window in Steam.\n@param SteamIdClanChat - The Steam ID of the clan chat.\n@return - true if successful, false otherwise." },
	};
#endif // WITH_METADATA

// ********** Begin Function CloseClanChatWindowInSteam constinit property declarations ************
	static const UECodeGen_Private::FInt64PropertyParams NewProp_SteamIdClanChat;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CloseClanChatWindowInSteam constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CloseClanChatWindowInSteam Property Definitions ***********************
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_CloseClanChatWindowInSteam_Statics::NewProp_SteamIdClanChat = { "SteamIdClanChat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventCloseClanChatWindowInSteam_Parms, SteamIdClanChat), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_FriendsLibrary_CloseClanChatWindowInSteam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_FriendsLibrary_eventCloseClanChatWindowInSteam_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_CloseClanChatWindowInSteam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_FriendsLibrary_eventCloseClanChatWindowInSteam_Parms), &Z_Construct_UFunction_USIK_FriendsLibrary_CloseClanChatWindowInSteam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_FriendsLibrary_CloseClanChatWindowInSteam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_CloseClanChatWindowInSteam_Statics::NewProp_SteamIdClanChat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_CloseClanChatWindowInSteam_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_CloseClanChatWindowInSteam_Statics::PropPointers) < 2048);
// ********** End Function CloseClanChatWindowInSteam Property Definitions *************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_FriendsLibrary_CloseClanChatWindowInSteam_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_FriendsLibrary, nullptr, "CloseClanChatWindowInSteam", 	Z_Construct_UFunction_USIK_FriendsLibrary_CloseClanChatWindowInSteam_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_CloseClanChatWindowInSteam_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_CloseClanChatWindowInSteam_Statics::SIK_FriendsLibrary_eventCloseClanChatWindowInSteam_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_CloseClanChatWindowInSteam_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_FriendsLibrary_CloseClanChatWindowInSteam_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_CloseClanChatWindowInSteam_Statics::SIK_FriendsLibrary_eventCloseClanChatWindowInSteam_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_FriendsLibrary_CloseClanChatWindowInSteam()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_FriendsLibrary_CloseClanChatWindowInSteam_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_FriendsLibrary::execCloseClanChatWindowInSteam)
{
	P_GET_PROPERTY(FInt64Property,Z_Param_SteamIdClanChat);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_FriendsLibrary::CloseClanChatWindowInSteam(Z_Param_SteamIdClanChat);
	P_NATIVE_END;
}
// ********** End Class USIK_FriendsLibrary Function CloseClanChatWindowInSteam ********************

// ********** Begin Class USIK_FriendsLibrary Function GetChatMemberByIndex ************************
struct Z_Construct_UFunction_USIK_FriendsLibrary_GetChatMemberByIndex_Statics
{
	struct SIK_FriendsLibrary_eventGetChatMemberByIndex_Parms
	{
		FSIK_SteamId SteamIdClan;
		int32 MemberIndex;
		FSIK_SteamId ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Friends" },
		{ "Comment", "/*\n\x09Gets a Steam chat member by index.\n\x09@param SteamIdClan - The Steam ID of the clan.\n\x09@param MemberIndex - The index of the member.\n\x09@return - The Steam ID of the member.\n\x09*/" },
		{ "DisplayName", "Get Steam Chat Member By Index" },
		{ "Keywords", "GetChatMemberByIndex" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsLibrary.h" },
		{ "ToolTip", "Gets a Steam chat member by index.\n@param SteamIdClan - The Steam ID of the clan.\n@param MemberIndex - The index of the member.\n@return - The Steam ID of the member." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetChatMemberByIndex constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIdClan;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MemberIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetChatMemberByIndex constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetChatMemberByIndex Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetChatMemberByIndex_Statics::NewProp_SteamIdClan = { "SteamIdClan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetChatMemberByIndex_Parms, SteamIdClan), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetChatMemberByIndex_Statics::NewProp_MemberIndex = { "MemberIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetChatMemberByIndex_Parms, MemberIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetChatMemberByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetChatMemberByIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_FriendsLibrary_GetChatMemberByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetChatMemberByIndex_Statics::NewProp_SteamIdClan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetChatMemberByIndex_Statics::NewProp_MemberIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetChatMemberByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetChatMemberByIndex_Statics::PropPointers) < 2048);
// ********** End Function GetChatMemberByIndex Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_FriendsLibrary_GetChatMemberByIndex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_FriendsLibrary, nullptr, "GetChatMemberByIndex", 	Z_Construct_UFunction_USIK_FriendsLibrary_GetChatMemberByIndex_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetChatMemberByIndex_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_GetChatMemberByIndex_Statics::SIK_FriendsLibrary_eventGetChatMemberByIndex_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetChatMemberByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_FriendsLibrary_GetChatMemberByIndex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_GetChatMemberByIndex_Statics::SIK_FriendsLibrary_eventGetChatMemberByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_FriendsLibrary_GetChatMemberByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_FriendsLibrary_GetChatMemberByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_FriendsLibrary::execGetChatMemberByIndex)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_SteamIdClan);
	P_GET_PROPERTY(FIntProperty,Z_Param_MemberIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSIK_SteamId*)Z_Param__Result=USIK_FriendsLibrary::GetChatMemberByIndex(Z_Param_SteamIdClan,Z_Param_MemberIndex);
	P_NATIVE_END;
}
// ********** End Class USIK_FriendsLibrary Function GetChatMemberByIndex **************************

// ********** Begin Class USIK_FriendsLibrary Function GetClanActivityCounts ***********************
struct Z_Construct_UFunction_USIK_FriendsLibrary_GetClanActivityCounts_Statics
{
	struct SIK_FriendsLibrary_eventGetClanActivityCounts_Parms
	{
		FSIK_SteamId SteamIdClan;
		int32 Online;
		int32 InGame;
		int32 Chatting;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Friends" },
		{ "Comment", "/*\n\x09Gets the activity counts for a Steam clan.\n\x09@param SteamIdClan - The Steam ID of the clan.\n\x09@param Online - The number of members online.\n\x09@param InGame - The number of members in-game.\n\x09@param Chatting - The number of members chatting.\n\x09@return - true if successful, false otherwise.\n\x09*/" },
		{ "DisplayName", "Get Steam Clan Activity Counts" },
		{ "Keywords", "GetClanActivityCounts" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsLibrary.h" },
		{ "ToolTip", "Gets the activity counts for a Steam clan.\n@param SteamIdClan - The Steam ID of the clan.\n@param Online - The number of members online.\n@param InGame - The number of members in-game.\n@param Chatting - The number of members chatting.\n@return - true if successful, false otherwise." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetClanActivityCounts constinit property declarations *****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIdClan;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Online;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InGame;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Chatting;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetClanActivityCounts constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetClanActivityCounts Property Definitions ****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetClanActivityCounts_Statics::NewProp_SteamIdClan = { "SteamIdClan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetClanActivityCounts_Parms, SteamIdClan), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetClanActivityCounts_Statics::NewProp_Online = { "Online", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetClanActivityCounts_Parms, Online), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetClanActivityCounts_Statics::NewProp_InGame = { "InGame", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetClanActivityCounts_Parms, InGame), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetClanActivityCounts_Statics::NewProp_Chatting = { "Chatting", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetClanActivityCounts_Parms, Chatting), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_FriendsLibrary_GetClanActivityCounts_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_FriendsLibrary_eventGetClanActivityCounts_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetClanActivityCounts_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_FriendsLibrary_eventGetClanActivityCounts_Parms), &Z_Construct_UFunction_USIK_FriendsLibrary_GetClanActivityCounts_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_FriendsLibrary_GetClanActivityCounts_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetClanActivityCounts_Statics::NewProp_SteamIdClan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetClanActivityCounts_Statics::NewProp_Online,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetClanActivityCounts_Statics::NewProp_InGame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetClanActivityCounts_Statics::NewProp_Chatting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetClanActivityCounts_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetClanActivityCounts_Statics::PropPointers) < 2048);
// ********** End Function GetClanActivityCounts Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_FriendsLibrary_GetClanActivityCounts_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_FriendsLibrary, nullptr, "GetClanActivityCounts", 	Z_Construct_UFunction_USIK_FriendsLibrary_GetClanActivityCounts_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetClanActivityCounts_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_GetClanActivityCounts_Statics::SIK_FriendsLibrary_eventGetClanActivityCounts_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetClanActivityCounts_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_FriendsLibrary_GetClanActivityCounts_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_GetClanActivityCounts_Statics::SIK_FriendsLibrary_eventGetClanActivityCounts_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_FriendsLibrary_GetClanActivityCounts()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_FriendsLibrary_GetClanActivityCounts_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_FriendsLibrary::execGetClanActivityCounts)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_SteamIdClan);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Online);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_InGame);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Chatting);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_FriendsLibrary::GetClanActivityCounts(Z_Param_SteamIdClan,Z_Param_Out_Online,Z_Param_Out_InGame,Z_Param_Out_Chatting);
	P_NATIVE_END;
}
// ********** End Class USIK_FriendsLibrary Function GetClanActivityCounts *************************

// ********** Begin Class USIK_FriendsLibrary Function GetClanByIndex ******************************
struct Z_Construct_UFunction_USIK_FriendsLibrary_GetClanByIndex_Statics
{
	struct SIK_FriendsLibrary_eventGetClanByIndex_Parms
	{
		int32 ClanIndex;
		FSIK_SteamId ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Friends" },
		{ "Comment", "/*\n\x09Gets a Steam clan by index.\n\x09@param ClanIndex - The index of the clan.\n\x09@return - The Steam ID of the clan.\n\x09*/" },
		{ "DisplayName", "Get Steam Clan By Index" },
		{ "Keywords", "GetClanByIndex" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsLibrary.h" },
		{ "ToolTip", "Gets a Steam clan by index.\n@param ClanIndex - The index of the clan.\n@return - The Steam ID of the clan." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetClanByIndex constinit property declarations ************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ClanIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetClanByIndex constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetClanByIndex Property Definitions ***********************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetClanByIndex_Statics::NewProp_ClanIndex = { "ClanIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetClanByIndex_Parms, ClanIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetClanByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetClanByIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_FriendsLibrary_GetClanByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetClanByIndex_Statics::NewProp_ClanIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetClanByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetClanByIndex_Statics::PropPointers) < 2048);
// ********** End Function GetClanByIndex Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_FriendsLibrary_GetClanByIndex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_FriendsLibrary, nullptr, "GetClanByIndex", 	Z_Construct_UFunction_USIK_FriendsLibrary_GetClanByIndex_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetClanByIndex_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_GetClanByIndex_Statics::SIK_FriendsLibrary_eventGetClanByIndex_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetClanByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_FriendsLibrary_GetClanByIndex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_GetClanByIndex_Statics::SIK_FriendsLibrary_eventGetClanByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_FriendsLibrary_GetClanByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_FriendsLibrary_GetClanByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_FriendsLibrary::execGetClanByIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ClanIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSIK_SteamId*)Z_Param__Result=USIK_FriendsLibrary::GetClanByIndex(Z_Param_ClanIndex);
	P_NATIVE_END;
}
// ********** End Class USIK_FriendsLibrary Function GetClanByIndex ********************************

// ********** Begin Class USIK_FriendsLibrary Function GetClanChatMemberCount **********************
struct Z_Construct_UFunction_USIK_FriendsLibrary_GetClanChatMemberCount_Statics
{
	struct SIK_FriendsLibrary_eventGetClanChatMemberCount_Parms
	{
		FSIK_SteamId SteamIdClan;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Friends" },
		{ "Comment", "/*\n\x09Gets the number of chat members in a Steam clan.\n\x09@param SteamIdClan - The Steam ID of the clan.\n\x09@return - The number of chat members.\n\x09*/" },
		{ "DisplayName", "Get Steam Clan Chat Member Count" },
		{ "Keywords", "GetClanChatMemberCount" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsLibrary.h" },
		{ "ToolTip", "Gets the number of chat members in a Steam clan.\n@param SteamIdClan - The Steam ID of the clan.\n@return - The number of chat members." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetClanChatMemberCount constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIdClan;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetClanChatMemberCount constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetClanChatMemberCount Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetClanChatMemberCount_Statics::NewProp_SteamIdClan = { "SteamIdClan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetClanChatMemberCount_Parms, SteamIdClan), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetClanChatMemberCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetClanChatMemberCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_FriendsLibrary_GetClanChatMemberCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetClanChatMemberCount_Statics::NewProp_SteamIdClan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetClanChatMemberCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetClanChatMemberCount_Statics::PropPointers) < 2048);
// ********** End Function GetClanChatMemberCount Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_FriendsLibrary_GetClanChatMemberCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_FriendsLibrary, nullptr, "GetClanChatMemberCount", 	Z_Construct_UFunction_USIK_FriendsLibrary_GetClanChatMemberCount_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetClanChatMemberCount_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_GetClanChatMemberCount_Statics::SIK_FriendsLibrary_eventGetClanChatMemberCount_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetClanChatMemberCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_FriendsLibrary_GetClanChatMemberCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_GetClanChatMemberCount_Statics::SIK_FriendsLibrary_eventGetClanChatMemberCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_FriendsLibrary_GetClanChatMemberCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_FriendsLibrary_GetClanChatMemberCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_FriendsLibrary::execGetClanChatMemberCount)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_SteamIdClan);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USIK_FriendsLibrary::GetClanChatMemberCount(Z_Param_SteamIdClan);
	P_NATIVE_END;
}
// ********** End Class USIK_FriendsLibrary Function GetClanChatMemberCount ************************

// ********** Begin Class USIK_FriendsLibrary Function GetClanChatMessage **************************
struct Z_Construct_UFunction_USIK_FriendsLibrary_GetClanChatMessage_Statics
{
	struct SIK_FriendsLibrary_eventGetClanChatMessage_Parms
	{
		FSIK_SteamId SteamIdClan;
		int32 MessageIndex;
		TArray<uint8> Text;
		FSIK_SteamId SteamIdUser;
		FString ChatEntryType;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Friends" },
		{ "Comment", "/*\n\x09Gets a chat message from a Steam clan chat.\n\x09@param SteamIdClan - The Steam ID of the clan.\n\x09@param MessageIndex - The index of the message.\n\x09@param Text - The text of the message.\n\x09@param SteamIdUser - The Steam ID of the user who sent the message.\n\x09@param ChatEntryType - The type of chat entry.\n\x09@return - The number of bytes in the message.\n\x09*/" },
		{ "DisplayName", "Get Steam Clan Chat Message" },
		{ "Keywords", "GetClanChatMessage" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsLibrary.h" },
		{ "ToolTip", "Gets a chat message from a Steam clan chat.\n@param SteamIdClan - The Steam ID of the clan.\n@param MessageIndex - The index of the message.\n@param Text - The text of the message.\n@param SteamIdUser - The Steam ID of the user who sent the message.\n@param ChatEntryType - The type of chat entry.\n@return - The number of bytes in the message." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetClanChatMessage constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIdClan;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MessageIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Text_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Text;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIdUser;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ChatEntryType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetClanChatMessage constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetClanChatMessage Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetClanChatMessage_Statics::NewProp_SteamIdClan = { "SteamIdClan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetClanChatMessage_Parms, SteamIdClan), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetClanChatMessage_Statics::NewProp_MessageIndex = { "MessageIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetClanChatMessage_Parms, MessageIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetClanChatMessage_Statics::NewProp_Text_Inner = { "Text", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetClanChatMessage_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetClanChatMessage_Parms, Text), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetClanChatMessage_Statics::NewProp_SteamIdUser = { "SteamIdUser", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetClanChatMessage_Parms, SteamIdUser), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetClanChatMessage_Statics::NewProp_ChatEntryType = { "ChatEntryType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetClanChatMessage_Parms, ChatEntryType), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetClanChatMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetClanChatMessage_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_FriendsLibrary_GetClanChatMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetClanChatMessage_Statics::NewProp_SteamIdClan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetClanChatMessage_Statics::NewProp_MessageIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetClanChatMessage_Statics::NewProp_Text_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetClanChatMessage_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetClanChatMessage_Statics::NewProp_SteamIdUser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetClanChatMessage_Statics::NewProp_ChatEntryType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetClanChatMessage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetClanChatMessage_Statics::PropPointers) < 2048);
// ********** End Function GetClanChatMessage Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_FriendsLibrary_GetClanChatMessage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_FriendsLibrary, nullptr, "GetClanChatMessage", 	Z_Construct_UFunction_USIK_FriendsLibrary_GetClanChatMessage_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetClanChatMessage_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_GetClanChatMessage_Statics::SIK_FriendsLibrary_eventGetClanChatMessage_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetClanChatMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_FriendsLibrary_GetClanChatMessage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_GetClanChatMessage_Statics::SIK_FriendsLibrary_eventGetClanChatMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_FriendsLibrary_GetClanChatMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_FriendsLibrary_GetClanChatMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_FriendsLibrary::execGetClanChatMessage)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_SteamIdClan);
	P_GET_PROPERTY(FIntProperty,Z_Param_MessageIndex);
	P_GET_TARRAY_REF(uint8,Z_Param_Out_Text);
	P_GET_STRUCT_REF(FSIK_SteamId,Z_Param_Out_SteamIdUser);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_ChatEntryType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USIK_FriendsLibrary::GetClanChatMessage(Z_Param_SteamIdClan,Z_Param_MessageIndex,Z_Param_Out_Text,Z_Param_Out_SteamIdUser,Z_Param_Out_ChatEntryType);
	P_NATIVE_END;
}
// ********** End Class USIK_FriendsLibrary Function GetClanChatMessage ****************************

// ********** Begin Class USIK_FriendsLibrary Function GetClanCount ********************************
struct Z_Construct_UFunction_USIK_FriendsLibrary_GetClanCount_Statics
{
	struct SIK_FriendsLibrary_eventGetClanCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Friends" },
		{ "Comment", "/*\n\x09Gets the number of Steam clans.\n\x09@return - The number of clans.\n\x09*/" },
		{ "DisplayName", "Get Steam Clan Count" },
		{ "Keywords", "GetClanCount" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsLibrary.h" },
		{ "ToolTip", "Gets the number of Steam clans.\n@return - The number of clans." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetClanCount constinit property declarations **************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetClanCount constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetClanCount Property Definitions *************************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetClanCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetClanCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_FriendsLibrary_GetClanCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetClanCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetClanCount_Statics::PropPointers) < 2048);
// ********** End Function GetClanCount Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_FriendsLibrary_GetClanCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_FriendsLibrary, nullptr, "GetClanCount", 	Z_Construct_UFunction_USIK_FriendsLibrary_GetClanCount_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetClanCount_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_GetClanCount_Statics::SIK_FriendsLibrary_eventGetClanCount_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetClanCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_FriendsLibrary_GetClanCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_GetClanCount_Statics::SIK_FriendsLibrary_eventGetClanCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_FriendsLibrary_GetClanCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_FriendsLibrary_GetClanCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_FriendsLibrary::execGetClanCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USIK_FriendsLibrary::GetClanCount();
	P_NATIVE_END;
}
// ********** End Class USIK_FriendsLibrary Function GetClanCount **********************************

// ********** Begin Class USIK_FriendsLibrary Function GetClanName *********************************
struct Z_Construct_UFunction_USIK_FriendsLibrary_GetClanName_Statics
{
	struct SIK_FriendsLibrary_eventGetClanName_Parms
	{
		FSIK_SteamId SteamIdClan;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Friends" },
		{ "DisplayName", "Get Steam Clan Name" },
		{ "Keywords", "GetClanName" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetClanName constinit property declarations ***************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIdClan;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetClanName constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetClanName Property Definitions **************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetClanName_Statics::NewProp_SteamIdClan = { "SteamIdClan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetClanName_Parms, SteamIdClan), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetClanName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetClanName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_FriendsLibrary_GetClanName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetClanName_Statics::NewProp_SteamIdClan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetClanName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetClanName_Statics::PropPointers) < 2048);
// ********** End Function GetClanName Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_FriendsLibrary_GetClanName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_FriendsLibrary, nullptr, "GetClanName", 	Z_Construct_UFunction_USIK_FriendsLibrary_GetClanName_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetClanName_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_GetClanName_Statics::SIK_FriendsLibrary_eventGetClanName_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetClanName_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_FriendsLibrary_GetClanName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_GetClanName_Statics::SIK_FriendsLibrary_eventGetClanName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_FriendsLibrary_GetClanName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_FriendsLibrary_GetClanName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_FriendsLibrary::execGetClanName)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_SteamIdClan);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USIK_FriendsLibrary::GetClanName(Z_Param_SteamIdClan);
	P_NATIVE_END;
}
// ********** End Class USIK_FriendsLibrary Function GetClanName ***********************************

// ********** Begin Class USIK_FriendsLibrary Function GetClanOfficerByIndex ***********************
struct Z_Construct_UFunction_USIK_FriendsLibrary_GetClanOfficerByIndex_Statics
{
	struct SIK_FriendsLibrary_eventGetClanOfficerByIndex_Parms
	{
		FSIK_SteamId SteamIdClan;
		int32 OfficerIndex;
		FSIK_SteamId ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Friends" },
		{ "Comment", "/*\n\x09Gets the officer of a Steam clan by index.\n\x09@param SteamIdClan - The Steam ID of the clan.\n\x09@param OfficerIndex - The index of the officer.\n\x09@return - The Steam ID of the officer.\n\x09*/" },
		{ "DisplayName", "Get Steam Clan Officer By Index" },
		{ "Keywords", "GetClanOfficerByIndex" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsLibrary.h" },
		{ "ToolTip", "Gets the officer of a Steam clan by index.\n@param SteamIdClan - The Steam ID of the clan.\n@param OfficerIndex - The index of the officer.\n@return - The Steam ID of the officer." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetClanOfficerByIndex constinit property declarations *****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIdClan;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OfficerIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetClanOfficerByIndex constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetClanOfficerByIndex Property Definitions ****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetClanOfficerByIndex_Statics::NewProp_SteamIdClan = { "SteamIdClan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetClanOfficerByIndex_Parms, SteamIdClan), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetClanOfficerByIndex_Statics::NewProp_OfficerIndex = { "OfficerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetClanOfficerByIndex_Parms, OfficerIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetClanOfficerByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetClanOfficerByIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_FriendsLibrary_GetClanOfficerByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetClanOfficerByIndex_Statics::NewProp_SteamIdClan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetClanOfficerByIndex_Statics::NewProp_OfficerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetClanOfficerByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetClanOfficerByIndex_Statics::PropPointers) < 2048);
// ********** End Function GetClanOfficerByIndex Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_FriendsLibrary_GetClanOfficerByIndex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_FriendsLibrary, nullptr, "GetClanOfficerByIndex", 	Z_Construct_UFunction_USIK_FriendsLibrary_GetClanOfficerByIndex_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetClanOfficerByIndex_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_GetClanOfficerByIndex_Statics::SIK_FriendsLibrary_eventGetClanOfficerByIndex_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetClanOfficerByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_FriendsLibrary_GetClanOfficerByIndex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_GetClanOfficerByIndex_Statics::SIK_FriendsLibrary_eventGetClanOfficerByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_FriendsLibrary_GetClanOfficerByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_FriendsLibrary_GetClanOfficerByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_FriendsLibrary::execGetClanOfficerByIndex)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_SteamIdClan);
	P_GET_PROPERTY(FIntProperty,Z_Param_OfficerIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSIK_SteamId*)Z_Param__Result=USIK_FriendsLibrary::GetClanOfficerByIndex(Z_Param_SteamIdClan,Z_Param_OfficerIndex);
	P_NATIVE_END;
}
// ********** End Class USIK_FriendsLibrary Function GetClanOfficerByIndex *************************

// ********** Begin Class USIK_FriendsLibrary Function GetClanOfficerCount *************************
struct Z_Construct_UFunction_USIK_FriendsLibrary_GetClanOfficerCount_Statics
{
	struct SIK_FriendsLibrary_eventGetClanOfficerCount_Parms
	{
		FSIK_SteamId SteamIdClan;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Friends" },
		{ "Comment", "/*\n\x09Gets the number of officers in a Steam clan.\n\x09@param SteamIdClan - The Steam ID of the clan.\n\x09@return - The number of officers.\n\x09*/" },
		{ "DisplayName", "Get Steam Clan Officer Count" },
		{ "Keywords", "GetClanOfficerCount" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsLibrary.h" },
		{ "ToolTip", "Gets the number of officers in a Steam clan.\n@param SteamIdClan - The Steam ID of the clan.\n@return - The number of officers." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetClanOfficerCount constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIdClan;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetClanOfficerCount constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetClanOfficerCount Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetClanOfficerCount_Statics::NewProp_SteamIdClan = { "SteamIdClan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetClanOfficerCount_Parms, SteamIdClan), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetClanOfficerCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetClanOfficerCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_FriendsLibrary_GetClanOfficerCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetClanOfficerCount_Statics::NewProp_SteamIdClan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetClanOfficerCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetClanOfficerCount_Statics::PropPointers) < 2048);
// ********** End Function GetClanOfficerCount Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_FriendsLibrary_GetClanOfficerCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_FriendsLibrary, nullptr, "GetClanOfficerCount", 	Z_Construct_UFunction_USIK_FriendsLibrary_GetClanOfficerCount_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetClanOfficerCount_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_GetClanOfficerCount_Statics::SIK_FriendsLibrary_eventGetClanOfficerCount_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetClanOfficerCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_FriendsLibrary_GetClanOfficerCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_GetClanOfficerCount_Statics::SIK_FriendsLibrary_eventGetClanOfficerCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_FriendsLibrary_GetClanOfficerCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_FriendsLibrary_GetClanOfficerCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_FriendsLibrary::execGetClanOfficerCount)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_SteamIdClan);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USIK_FriendsLibrary::GetClanOfficerCount(Z_Param_SteamIdClan);
	P_NATIVE_END;
}
// ********** End Class USIK_FriendsLibrary Function GetClanOfficerCount ***************************

// ********** Begin Class USIK_FriendsLibrary Function GetClanOwner ********************************
struct Z_Construct_UFunction_USIK_FriendsLibrary_GetClanOwner_Statics
{
	struct SIK_FriendsLibrary_eventGetClanOwner_Parms
	{
		FSIK_SteamId SteamIdClan;
		FSIK_SteamId ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Friends" },
		{ "Comment", "/*\n\x09Gets the owner of a Steam clan.\n\x09@param SteamIdClan - The Steam ID of the clan.\n\x09@return - The Steam ID of the clan owner.\n\x09*/" },
		{ "DisplayName", "Get Steam Clan Owner" },
		{ "Keywords", "GetClanOwner" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsLibrary.h" },
		{ "ToolTip", "Gets the owner of a Steam clan.\n@param SteamIdClan - The Steam ID of the clan.\n@return - The Steam ID of the clan owner." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetClanOwner constinit property declarations **************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIdClan;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetClanOwner constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetClanOwner Property Definitions *************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetClanOwner_Statics::NewProp_SteamIdClan = { "SteamIdClan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetClanOwner_Parms, SteamIdClan), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetClanOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetClanOwner_Parms, ReturnValue), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_FriendsLibrary_GetClanOwner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetClanOwner_Statics::NewProp_SteamIdClan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetClanOwner_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetClanOwner_Statics::PropPointers) < 2048);
// ********** End Function GetClanOwner Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_FriendsLibrary_GetClanOwner_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_FriendsLibrary, nullptr, "GetClanOwner", 	Z_Construct_UFunction_USIK_FriendsLibrary_GetClanOwner_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetClanOwner_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_GetClanOwner_Statics::SIK_FriendsLibrary_eventGetClanOwner_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetClanOwner_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_FriendsLibrary_GetClanOwner_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_GetClanOwner_Statics::SIK_FriendsLibrary_eventGetClanOwner_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_FriendsLibrary_GetClanOwner()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_FriendsLibrary_GetClanOwner_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_FriendsLibrary::execGetClanOwner)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_SteamIdClan);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSIK_SteamId*)Z_Param__Result=USIK_FriendsLibrary::GetClanOwner(Z_Param_SteamIdClan);
	P_NATIVE_END;
}
// ********** End Class USIK_FriendsLibrary Function GetClanOwner **********************************

// ********** Begin Class USIK_FriendsLibrary Function GetClanTag **********************************
struct Z_Construct_UFunction_USIK_FriendsLibrary_GetClanTag_Statics
{
	struct SIK_FriendsLibrary_eventGetClanTag_Parms
	{
		FSIK_SteamId SteamIdClan;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Friends" },
		{ "Comment", "/*\n\x09Gets the tag of a Steam clan.\n\x09@param SteamIdClan - The Steam ID of the clan.\n\x09@return - The tag of the clan.\n\x09*/" },
		{ "DisplayName", "Get Steam Clan Tag" },
		{ "Keywords", "GetClanTag" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsLibrary.h" },
		{ "ToolTip", "Gets the tag of a Steam clan.\n@param SteamIdClan - The Steam ID of the clan.\n@return - The tag of the clan." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetClanTag constinit property declarations ****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIdClan;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetClanTag constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetClanTag Property Definitions ***************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetClanTag_Statics::NewProp_SteamIdClan = { "SteamIdClan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetClanTag_Parms, SteamIdClan), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetClanTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetClanTag_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_FriendsLibrary_GetClanTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetClanTag_Statics::NewProp_SteamIdClan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetClanTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetClanTag_Statics::PropPointers) < 2048);
// ********** End Function GetClanTag Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_FriendsLibrary_GetClanTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_FriendsLibrary, nullptr, "GetClanTag", 	Z_Construct_UFunction_USIK_FriendsLibrary_GetClanTag_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetClanTag_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_GetClanTag_Statics::SIK_FriendsLibrary_eventGetClanTag_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetClanTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_FriendsLibrary_GetClanTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_GetClanTag_Statics::SIK_FriendsLibrary_eventGetClanTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_FriendsLibrary_GetClanTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_FriendsLibrary_GetClanTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_FriendsLibrary::execGetClanTag)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_SteamIdClan);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USIK_FriendsLibrary::GetClanTag(Z_Param_SteamIdClan);
	P_NATIVE_END;
}
// ********** End Class USIK_FriendsLibrary Function GetClanTag ************************************

// ********** Begin Class USIK_FriendsLibrary Function GetCoplayFriend *****************************
struct Z_Construct_UFunction_USIK_FriendsLibrary_GetCoplayFriend_Statics
{
	struct SIK_FriendsLibrary_eventGetCoplayFriend_Parms
	{
		int32 CoplayFriend;
		FSIK_SteamId ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Friends" },
		{ "Comment", "/*\n\x09Gets a Steam co-play friend by index.\n\x09@param CoplayFriend - The index of the co-play friend.\n\x09@return - The Steam ID of the co-play friend.\n\x09*/" },
		{ "DisplayName", "Get Steam Coplay Friend" },
		{ "Keywords", "GetCoplayFriend" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsLibrary.h" },
		{ "ToolTip", "Gets a Steam co-play friend by index.\n@param CoplayFriend - The index of the co-play friend.\n@return - The Steam ID of the co-play friend." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetCoplayFriend constinit property declarations ***********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_CoplayFriend;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCoplayFriend constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCoplayFriend Property Definitions **********************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetCoplayFriend_Statics::NewProp_CoplayFriend = { "CoplayFriend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetCoplayFriend_Parms, CoplayFriend), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetCoplayFriend_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetCoplayFriend_Parms, ReturnValue), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_FriendsLibrary_GetCoplayFriend_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetCoplayFriend_Statics::NewProp_CoplayFriend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetCoplayFriend_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetCoplayFriend_Statics::PropPointers) < 2048);
// ********** End Function GetCoplayFriend Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_FriendsLibrary_GetCoplayFriend_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_FriendsLibrary, nullptr, "GetCoplayFriend", 	Z_Construct_UFunction_USIK_FriendsLibrary_GetCoplayFriend_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetCoplayFriend_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_GetCoplayFriend_Statics::SIK_FriendsLibrary_eventGetCoplayFriend_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetCoplayFriend_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_FriendsLibrary_GetCoplayFriend_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_GetCoplayFriend_Statics::SIK_FriendsLibrary_eventGetCoplayFriend_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_FriendsLibrary_GetCoplayFriend()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_FriendsLibrary_GetCoplayFriend_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_FriendsLibrary::execGetCoplayFriend)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_CoplayFriend);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSIK_SteamId*)Z_Param__Result=USIK_FriendsLibrary::GetCoplayFriend(Z_Param_CoplayFriend);
	P_NATIVE_END;
}
// ********** End Class USIK_FriendsLibrary Function GetCoplayFriend *******************************

// ********** Begin Class USIK_FriendsLibrary Function GetCoplayFriendCount ************************
struct Z_Construct_UFunction_USIK_FriendsLibrary_GetCoplayFriendCount_Statics
{
	struct SIK_FriendsLibrary_eventGetCoplayFriendCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Friends" },
		{ "Comment", "/*\n\x09Gets the number of Steam co-play friends.\n\x09@return - The number of co-play friends.\n\x09*/" },
		{ "DisplayName", "Get Steam Coplay Friend Count" },
		{ "Keywords", "GetCoplayFriendCount" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsLibrary.h" },
		{ "ToolTip", "Gets the number of Steam co-play friends.\n@return - The number of co-play friends." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetCoplayFriendCount constinit property declarations ******************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCoplayFriendCount constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCoplayFriendCount Property Definitions *****************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetCoplayFriendCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetCoplayFriendCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_FriendsLibrary_GetCoplayFriendCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetCoplayFriendCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetCoplayFriendCount_Statics::PropPointers) < 2048);
// ********** End Function GetCoplayFriendCount Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_FriendsLibrary_GetCoplayFriendCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_FriendsLibrary, nullptr, "GetCoplayFriendCount", 	Z_Construct_UFunction_USIK_FriendsLibrary_GetCoplayFriendCount_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetCoplayFriendCount_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_GetCoplayFriendCount_Statics::SIK_FriendsLibrary_eventGetCoplayFriendCount_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetCoplayFriendCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_FriendsLibrary_GetCoplayFriendCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_GetCoplayFriendCount_Statics::SIK_FriendsLibrary_eventGetCoplayFriendCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_FriendsLibrary_GetCoplayFriendCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_FriendsLibrary_GetCoplayFriendCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_FriendsLibrary::execGetCoplayFriendCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USIK_FriendsLibrary::GetCoplayFriendCount();
	P_NATIVE_END;
}
// ********** End Class USIK_FriendsLibrary Function GetCoplayFriendCount **************************

// ********** Begin Class USIK_FriendsLibrary Function GetFriendByIndex ****************************
struct Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendByIndex_Statics
{
	struct SIK_FriendsLibrary_eventGetFriendByIndex_Parms
	{
		int32 FriendIndex;
		TArray<TEnumAsByte<ESIK_FriendFlags>> FriendFlags;
		FSIK_SteamId ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Friends" },
		{ "Comment", "/*\n\x09Gets a Steam friend by index.\n\x09@param FriendIndex - The index of the friend.\n\x09@param FriendFlags - Flags to filter friends.\n\x09@return - The Steam ID of the friend.\n\x09*/" },
		{ "DisplayName", "Get Steam Friend By Index" },
		{ "Keywords", "GetFriendByIndex" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsLibrary.h" },
		{ "ToolTip", "Gets a Steam friend by index.\n@param FriendIndex - The index of the friend.\n@param FriendFlags - Flags to filter friends.\n@return - The Steam ID of the friend." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetFriendByIndex constinit property declarations **********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_FriendIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FriendFlags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FriendFlags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetFriendByIndex constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetFriendByIndex Property Definitions *********************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendByIndex_Statics::NewProp_FriendIndex = { "FriendIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetFriendByIndex_Parms, FriendIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendByIndex_Statics::NewProp_FriendFlags_Inner = { "FriendFlags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_SteamIntegrationKit_ESIK_FriendFlags, METADATA_PARAMS(0, nullptr) }; // 1113207765
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendByIndex_Statics::NewProp_FriendFlags = { "FriendFlags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetFriendByIndex_Parms, FriendFlags), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1113207765
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetFriendByIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendByIndex_Statics::NewProp_FriendIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendByIndex_Statics::NewProp_FriendFlags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendByIndex_Statics::NewProp_FriendFlags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendByIndex_Statics::PropPointers) < 2048);
// ********** End Function GetFriendByIndex Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendByIndex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_FriendsLibrary, nullptr, "GetFriendByIndex", 	Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendByIndex_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendByIndex_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendByIndex_Statics::SIK_FriendsLibrary_eventGetFriendByIndex_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendByIndex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendByIndex_Statics::SIK_FriendsLibrary_eventGetFriendByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_FriendsLibrary::execGetFriendByIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_FriendIndex);
	P_GET_TARRAY(TEnumAsByte<ESIK_FriendFlags>,Z_Param_FriendFlags);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSIK_SteamId*)Z_Param__Result=USIK_FriendsLibrary::GetFriendByIndex(Z_Param_FriendIndex,Z_Param_FriendFlags);
	P_NATIVE_END;
}
// ********** End Class USIK_FriendsLibrary Function GetFriendByIndex ******************************

// ********** Begin Class USIK_FriendsLibrary Function GetFriendCoplayGame *************************
struct Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendCoplayGame_Statics
{
	struct SIK_FriendsLibrary_eventGetFriendCoplayGame_Parms
	{
		FSIK_SteamId SteamIdFriend;
		FSIK_AppId ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Friends" },
		{ "Comment", "/*\n\x09Gets the game that a Steam friend is currently playing.\n\x09@param SteamIdFriend - The Steam ID of the friend.\n\x09@return - The Steam ID of the game.\n\x09*/" },
		{ "DisplayName", "Get Steam Friend Coplay Game" },
		{ "Keywords", "GetFriendCoplayGame" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsLibrary.h" },
		{ "ToolTip", "Gets the game that a Steam friend is currently playing.\n@param SteamIdFriend - The Steam ID of the friend.\n@return - The Steam ID of the game." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetFriendCoplayGame constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIdFriend;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetFriendCoplayGame constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetFriendCoplayGame Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendCoplayGame_Statics::NewProp_SteamIdFriend = { "SteamIdFriend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetFriendCoplayGame_Parms, SteamIdFriend), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendCoplayGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetFriendCoplayGame_Parms, ReturnValue), Z_Construct_UScriptStruct_FSIK_AppId, METADATA_PARAMS(0, nullptr) }; // 3325316996
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendCoplayGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendCoplayGame_Statics::NewProp_SteamIdFriend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendCoplayGame_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendCoplayGame_Statics::PropPointers) < 2048);
// ********** End Function GetFriendCoplayGame Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendCoplayGame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_FriendsLibrary, nullptr, "GetFriendCoplayGame", 	Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendCoplayGame_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendCoplayGame_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendCoplayGame_Statics::SIK_FriendsLibrary_eventGetFriendCoplayGame_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendCoplayGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendCoplayGame_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendCoplayGame_Statics::SIK_FriendsLibrary_eventGetFriendCoplayGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendCoplayGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendCoplayGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_FriendsLibrary::execGetFriendCoplayGame)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_SteamIdFriend);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSIK_AppId*)Z_Param__Result=USIK_FriendsLibrary::GetFriendCoplayGame(Z_Param_SteamIdFriend);
	P_NATIVE_END;
}
// ********** End Class USIK_FriendsLibrary Function GetFriendCoplayGame ***************************

// ********** Begin Class USIK_FriendsLibrary Function GetFriendCoplayTime *************************
struct Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendCoplayTime_Statics
{
	struct SIK_FriendsLibrary_eventGetFriendCoplayTime_Parms
	{
		FSIK_SteamId SteamIdFriend;
		FDateTime ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Friends" },
		{ "Comment", "/*\n\x09Gets the co-play time with a Steam friend.\n\x09@param SteamIdFriend - The Steam ID of the friend.\n\x09@return - The co-play time as a FDateTime object.\n\x09*/" },
		{ "DisplayName", "Get Steam Friend Coplay Time" },
		{ "Keywords", "GetFriendCoplayTime" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsLibrary.h" },
		{ "ToolTip", "Gets the co-play time with a Steam friend.\n@param SteamIdFriend - The Steam ID of the friend.\n@return - The co-play time as a FDateTime object." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetFriendCoplayTime constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIdFriend;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetFriendCoplayTime constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetFriendCoplayTime Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendCoplayTime_Statics::NewProp_SteamIdFriend = { "SteamIdFriend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetFriendCoplayTime_Parms, SteamIdFriend), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendCoplayTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetFriendCoplayTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendCoplayTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendCoplayTime_Statics::NewProp_SteamIdFriend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendCoplayTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendCoplayTime_Statics::PropPointers) < 2048);
// ********** End Function GetFriendCoplayTime Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendCoplayTime_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_FriendsLibrary, nullptr, "GetFriendCoplayTime", 	Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendCoplayTime_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendCoplayTime_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendCoplayTime_Statics::SIK_FriendsLibrary_eventGetFriendCoplayTime_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendCoplayTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendCoplayTime_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendCoplayTime_Statics::SIK_FriendsLibrary_eventGetFriendCoplayTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendCoplayTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendCoplayTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_FriendsLibrary::execGetFriendCoplayTime)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_SteamIdFriend);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FDateTime*)Z_Param__Result=USIK_FriendsLibrary::GetFriendCoplayTime(Z_Param_SteamIdFriend);
	P_NATIVE_END;
}
// ********** End Class USIK_FriendsLibrary Function GetFriendCoplayTime ***************************

// ********** Begin Class USIK_FriendsLibrary Function GetFriendCount ******************************
struct Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendCount_Statics
{
	struct SIK_FriendsLibrary_eventGetFriendCount_Parms
	{
		TArray<TEnumAsByte<ESIK_FriendFlags>> FriendFlags;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Friends" },
		{ "Comment", "/*\n\x09Gets the number of friends for a specific friend list.\n\x09@param FriendFlags - Flags to filter the friend list.\n\x09@return - The number of friends.\n\x09*/" },
		{ "DisplayName", "Get Steam Friend Count" },
		{ "Keywords", "GetFriendCount" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsLibrary.h" },
		{ "ToolTip", "Gets the number of friends for a specific friend list.\n@param FriendFlags - Flags to filter the friend list.\n@return - The number of friends." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetFriendCount constinit property declarations ************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_FriendFlags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FriendFlags;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetFriendCount constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetFriendCount Property Definitions ***********************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendCount_Statics::NewProp_FriendFlags_Inner = { "FriendFlags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_SteamIntegrationKit_ESIK_FriendFlags, METADATA_PARAMS(0, nullptr) }; // 1113207765
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendCount_Statics::NewProp_FriendFlags = { "FriendFlags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetFriendCount_Parms, FriendFlags), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1113207765
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetFriendCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendCount_Statics::NewProp_FriendFlags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendCount_Statics::NewProp_FriendFlags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendCount_Statics::PropPointers) < 2048);
// ********** End Function GetFriendCount Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_FriendsLibrary, nullptr, "GetFriendCount", 	Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendCount_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendCount_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendCount_Statics::SIK_FriendsLibrary_eventGetFriendCount_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendCount_Statics::SIK_FriendsLibrary_eventGetFriendCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_FriendsLibrary::execGetFriendCount)
{
	P_GET_TARRAY(TEnumAsByte<ESIK_FriendFlags>,Z_Param_FriendFlags);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USIK_FriendsLibrary::GetFriendCount(Z_Param_FriendFlags);
	P_NATIVE_END;
}
// ********** End Class USIK_FriendsLibrary Function GetFriendCount ********************************

// ********** Begin Class USIK_FriendsLibrary Function GetFriendCountFromSource ********************
struct Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendCountFromSource_Statics
{
	struct SIK_FriendsLibrary_eventGetFriendCountFromSource_Parms
	{
		FSIK_SteamId SteamIdSource;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Friends" },
		{ "Comment", "/*\n\x09Gets the number of friends from a specific source.\n\x09@param SteamIdSource - The Steam ID of the source.\n\x09@return - The number of friends from the source.\n\x09*/" },
		{ "DisplayName", "Get Steam Friend Count From Source" },
		{ "Keywords", "GetFriendCountFromSource" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsLibrary.h" },
		{ "ToolTip", "Gets the number of friends from a specific source.\n@param SteamIdSource - The Steam ID of the source.\n@return - The number of friends from the source." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetFriendCountFromSource constinit property declarations **************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIdSource;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetFriendCountFromSource constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetFriendCountFromSource Property Definitions *************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendCountFromSource_Statics::NewProp_SteamIdSource = { "SteamIdSource", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetFriendCountFromSource_Parms, SteamIdSource), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendCountFromSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetFriendCountFromSource_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendCountFromSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendCountFromSource_Statics::NewProp_SteamIdSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendCountFromSource_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendCountFromSource_Statics::PropPointers) < 2048);
// ********** End Function GetFriendCountFromSource Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendCountFromSource_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_FriendsLibrary, nullptr, "GetFriendCountFromSource", 	Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendCountFromSource_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendCountFromSource_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendCountFromSource_Statics::SIK_FriendsLibrary_eventGetFriendCountFromSource_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendCountFromSource_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendCountFromSource_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendCountFromSource_Statics::SIK_FriendsLibrary_eventGetFriendCountFromSource_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendCountFromSource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendCountFromSource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_FriendsLibrary::execGetFriendCountFromSource)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_SteamIdSource);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USIK_FriendsLibrary::GetFriendCountFromSource(Z_Param_SteamIdSource);
	P_NATIVE_END;
}
// ********** End Class USIK_FriendsLibrary Function GetFriendCountFromSource **********************

// ********** Begin Class USIK_FriendsLibrary Function GetFriendFromSourceByIndex ******************
struct Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendFromSourceByIndex_Statics
{
	struct SIK_FriendsLibrary_eventGetFriendFromSourceByIndex_Parms
	{
		FSIK_SteamId SteamIdSource;
		int32 FriendIndex;
		FSIK_SteamId ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Friends" },
		{ "Comment", "/*\n\x09Gets a friend from a specific source by index.\n\x09@param SteamIdSource - The Steam ID of the source.\n\x09@param FriendIndex - The index of the friend.\n\x09@return - The Steam ID of the friend.\n\x09*/" },
		{ "DisplayName", "Get Steam Friend From Source By Index" },
		{ "Keywords", "GetFriendFromSourceByIndex" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsLibrary.h" },
		{ "ToolTip", "Gets a friend from a specific source by index.\n@param SteamIdSource - The Steam ID of the source.\n@param FriendIndex - The index of the friend.\n@return - The Steam ID of the friend." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetFriendFromSourceByIndex constinit property declarations ************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIdSource;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FriendIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetFriendFromSourceByIndex constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetFriendFromSourceByIndex Property Definitions ***********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendFromSourceByIndex_Statics::NewProp_SteamIdSource = { "SteamIdSource", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetFriendFromSourceByIndex_Parms, SteamIdSource), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendFromSourceByIndex_Statics::NewProp_FriendIndex = { "FriendIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetFriendFromSourceByIndex_Parms, FriendIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendFromSourceByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetFriendFromSourceByIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendFromSourceByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendFromSourceByIndex_Statics::NewProp_SteamIdSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendFromSourceByIndex_Statics::NewProp_FriendIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendFromSourceByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendFromSourceByIndex_Statics::PropPointers) < 2048);
// ********** End Function GetFriendFromSourceByIndex Property Definitions *************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendFromSourceByIndex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_FriendsLibrary, nullptr, "GetFriendFromSourceByIndex", 	Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendFromSourceByIndex_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendFromSourceByIndex_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendFromSourceByIndex_Statics::SIK_FriendsLibrary_eventGetFriendFromSourceByIndex_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendFromSourceByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendFromSourceByIndex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendFromSourceByIndex_Statics::SIK_FriendsLibrary_eventGetFriendFromSourceByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendFromSourceByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendFromSourceByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_FriendsLibrary::execGetFriendFromSourceByIndex)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_SteamIdSource);
	P_GET_PROPERTY(FIntProperty,Z_Param_FriendIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSIK_SteamId*)Z_Param__Result=USIK_FriendsLibrary::GetFriendFromSourceByIndex(Z_Param_SteamIdSource,Z_Param_FriendIndex);
	P_NATIVE_END;
}
// ********** End Class USIK_FriendsLibrary Function GetFriendFromSourceByIndex ********************

// ********** Begin Class USIK_FriendsLibrary Function GetFriendGamePlayed *************************
struct Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendGamePlayed_Statics
{
	struct SIK_FriendsLibrary_eventGetFriendGamePlayed_Parms
	{
		FSIK_SteamId SteamIdFriend;
		FSIK_FriendGameInfo GameInfo;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Friends" },
		{ "Comment", "/*\n\x09Gets the game played information of a Steam friend.\n\x09@param SteamIdFriend - The Steam ID of the friend.\n\x09@param GameInfo - The game information structure to populate.\n\x09@return - true if successful, false otherwise.\n\x09*/" },
		{ "DisplayName", "Get Steam Friend Game Played" },
		{ "Keywords", "GetFriendGamePlayed" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsLibrary.h" },
		{ "ToolTip", "Gets the game played information of a Steam friend.\n@param SteamIdFriend - The Steam ID of the friend.\n@param GameInfo - The game information structure to populate.\n@return - true if successful, false otherwise." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetFriendGamePlayed constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIdFriend;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameInfo;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetFriendGamePlayed constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetFriendGamePlayed Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendGamePlayed_Statics::NewProp_SteamIdFriend = { "SteamIdFriend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetFriendGamePlayed_Parms, SteamIdFriend), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendGamePlayed_Statics::NewProp_GameInfo = { "GameInfo", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetFriendGamePlayed_Parms, GameInfo), Z_Construct_UScriptStruct_FSIK_FriendGameInfo, METADATA_PARAMS(0, nullptr) }; // 1453229092
void Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendGamePlayed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_FriendsLibrary_eventGetFriendGamePlayed_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendGamePlayed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_FriendsLibrary_eventGetFriendGamePlayed_Parms), &Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendGamePlayed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendGamePlayed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendGamePlayed_Statics::NewProp_SteamIdFriend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendGamePlayed_Statics::NewProp_GameInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendGamePlayed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendGamePlayed_Statics::PropPointers) < 2048);
// ********** End Function GetFriendGamePlayed Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendGamePlayed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_FriendsLibrary, nullptr, "GetFriendGamePlayed", 	Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendGamePlayed_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendGamePlayed_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendGamePlayed_Statics::SIK_FriendsLibrary_eventGetFriendGamePlayed_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendGamePlayed_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendGamePlayed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendGamePlayed_Statics::SIK_FriendsLibrary_eventGetFriendGamePlayed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendGamePlayed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendGamePlayed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_FriendsLibrary::execGetFriendGamePlayed)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_SteamIdFriend);
	P_GET_STRUCT_REF(FSIK_FriendGameInfo,Z_Param_Out_GameInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_FriendsLibrary::GetFriendGamePlayed(Z_Param_SteamIdFriend,Z_Param_Out_GameInfo);
	P_NATIVE_END;
}
// ********** End Class USIK_FriendsLibrary Function GetFriendGamePlayed ***************************

// ********** Begin Class USIK_FriendsLibrary Function GetFriendGroupCount *************************
struct Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendGroupCount_Statics
{
	struct SIK_FriendsLibrary_eventGetFriendGroupCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Friends" },
		{ "Comment", "/*\n\x09Gets the number of friends groups.\n\x09@return - The number of friends groups.\n\x09*/" },
		{ "DisplayName", "Get Steam Friends Group Count" },
		{ "Keywords", "GetFriendsGroupCount" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsLibrary.h" },
		{ "ToolTip", "Gets the number of friends groups.\n@return - The number of friends groups." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetFriendGroupCount constinit property declarations *******************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetFriendGroupCount constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetFriendGroupCount Property Definitions ******************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendGroupCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetFriendGroupCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendGroupCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendGroupCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendGroupCount_Statics::PropPointers) < 2048);
// ********** End Function GetFriendGroupCount Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendGroupCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_FriendsLibrary, nullptr, "GetFriendGroupCount", 	Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendGroupCount_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendGroupCount_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendGroupCount_Statics::SIK_FriendsLibrary_eventGetFriendGroupCount_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendGroupCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendGroupCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendGroupCount_Statics::SIK_FriendsLibrary_eventGetFriendGroupCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendGroupCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendGroupCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_FriendsLibrary::execGetFriendGroupCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USIK_FriendsLibrary::GetFriendGroupCount();
	P_NATIVE_END;
}
// ********** End Class USIK_FriendsLibrary Function GetFriendGroupCount ***************************

// ********** Begin Class USIK_FriendsLibrary Function GetFriendGroupIDByIndex *********************
struct Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendGroupIDByIndex_Statics
{
	struct SIK_FriendsLibrary_eventGetFriendGroupIDByIndex_Parms
	{
		int32 GroupIndex;
		FSIK_FriendsGroupID ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Friends" },
		{ "Comment", "/*\n\x09Gets the friends group ID by index.\n\x09@param GroupIndex - The index of the friends group.\n\x09@return - The Steam ID of the friends group.\n\x09*/" },
		{ "DisplayName", "Get Steam Friends Group ID By Index" },
		{ "Keywords", "GetFriendsGroupIDByIndex" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsLibrary.h" },
		{ "ToolTip", "Gets the friends group ID by index.\n@param GroupIndex - The index of the friends group.\n@return - The Steam ID of the friends group." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetFriendGroupIDByIndex constinit property declarations ***************
	static const UECodeGen_Private::FIntPropertyParams NewProp_GroupIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetFriendGroupIDByIndex constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetFriendGroupIDByIndex Property Definitions **************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendGroupIDByIndex_Statics::NewProp_GroupIndex = { "GroupIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetFriendGroupIDByIndex_Parms, GroupIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendGroupIDByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetFriendGroupIDByIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FSIK_FriendsGroupID, METADATA_PARAMS(0, nullptr) }; // 2027989783
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendGroupIDByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendGroupIDByIndex_Statics::NewProp_GroupIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendGroupIDByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendGroupIDByIndex_Statics::PropPointers) < 2048);
// ********** End Function GetFriendGroupIDByIndex Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendGroupIDByIndex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_FriendsLibrary, nullptr, "GetFriendGroupIDByIndex", 	Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendGroupIDByIndex_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendGroupIDByIndex_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendGroupIDByIndex_Statics::SIK_FriendsLibrary_eventGetFriendGroupIDByIndex_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendGroupIDByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendGroupIDByIndex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendGroupIDByIndex_Statics::SIK_FriendsLibrary_eventGetFriendGroupIDByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendGroupIDByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendGroupIDByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_FriendsLibrary::execGetFriendGroupIDByIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_GroupIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSIK_FriendsGroupID*)Z_Param__Result=USIK_FriendsLibrary::GetFriendGroupIDByIndex(Z_Param_GroupIndex);
	P_NATIVE_END;
}
// ********** End Class USIK_FriendsLibrary Function GetFriendGroupIDByIndex ***********************

// ********** Begin Class USIK_FriendsLibrary Function GetFriendGroupMembersCount ******************
struct Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendGroupMembersCount_Statics
{
	struct SIK_FriendsLibrary_eventGetFriendGroupMembersCount_Parms
	{
		FSIK_FriendsGroupID FriendsGroupID;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Friends" },
		{ "Comment", "/*\n\x09Gets the number of members in a friends group.\n\x09@param FriendsGroupID - The Steam ID of the friends group.\n\x09@return - The number of members.\n\x09*/" },
		{ "DisplayName", "Get Steam Friends Group Members Count" },
		{ "Keywords", "GetFriendsGroupMembersCount" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsLibrary.h" },
		{ "ToolTip", "Gets the number of members in a friends group.\n@param FriendsGroupID - The Steam ID of the friends group.\n@return - The number of members." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetFriendGroupMembersCount constinit property declarations ************
	static const UECodeGen_Private::FStructPropertyParams NewProp_FriendsGroupID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetFriendGroupMembersCount constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetFriendGroupMembersCount Property Definitions ***********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendGroupMembersCount_Statics::NewProp_FriendsGroupID = { "FriendsGroupID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetFriendGroupMembersCount_Parms, FriendsGroupID), Z_Construct_UScriptStruct_FSIK_FriendsGroupID, METADATA_PARAMS(0, nullptr) }; // 2027989783
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendGroupMembersCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetFriendGroupMembersCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendGroupMembersCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendGroupMembersCount_Statics::NewProp_FriendsGroupID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendGroupMembersCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendGroupMembersCount_Statics::PropPointers) < 2048);
// ********** End Function GetFriendGroupMembersCount Property Definitions *************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendGroupMembersCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_FriendsLibrary, nullptr, "GetFriendGroupMembersCount", 	Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendGroupMembersCount_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendGroupMembersCount_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendGroupMembersCount_Statics::SIK_FriendsLibrary_eventGetFriendGroupMembersCount_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendGroupMembersCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendGroupMembersCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendGroupMembersCount_Statics::SIK_FriendsLibrary_eventGetFriendGroupMembersCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendGroupMembersCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendGroupMembersCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_FriendsLibrary::execGetFriendGroupMembersCount)
{
	P_GET_STRUCT(FSIK_FriendsGroupID,Z_Param_FriendsGroupID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USIK_FriendsLibrary::GetFriendGroupMembersCount(Z_Param_FriendsGroupID);
	P_NATIVE_END;
}
// ********** End Class USIK_FriendsLibrary Function GetFriendGroupMembersCount ********************

// ********** Begin Class USIK_FriendsLibrary Function GetFriendMessage ****************************
struct Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendMessage_Statics
{
	struct SIK_FriendsLibrary_eventGetFriendMessage_Parms
	{
		FSIK_SteamId SteamIdFriend;
		int32 MessageIndex;
		TArray<uint8> Text;
		FString ChatEntryType;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Friends" },
		{ "Comment", "/*\n\x09Gets a message from a Steam friend.\n\x09@param SteamIdFriend - The Steam ID of the friend.\n\x09@param MessageIndex - The index of the message.\n\x09@param Text - The text of the message.\n\x09@param ChatEntryType - The type of chat entry.\n\x09@return - The number of bytes in the message.\n\x09*/" },
		{ "DisplayName", "Get Steam Friend Message" },
		{ "Keywords", "GetFriendMessage" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsLibrary.h" },
		{ "ToolTip", "Gets a message from a Steam friend.\n@param SteamIdFriend - The Steam ID of the friend.\n@param MessageIndex - The index of the message.\n@param Text - The text of the message.\n@param ChatEntryType - The type of chat entry.\n@return - The number of bytes in the message." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetFriendMessage constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIdFriend;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MessageIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Text_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Text;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ChatEntryType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetFriendMessage constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetFriendMessage Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendMessage_Statics::NewProp_SteamIdFriend = { "SteamIdFriend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetFriendMessage_Parms, SteamIdFriend), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendMessage_Statics::NewProp_MessageIndex = { "MessageIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetFriendMessage_Parms, MessageIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendMessage_Statics::NewProp_Text_Inner = { "Text", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendMessage_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetFriendMessage_Parms, Text), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendMessage_Statics::NewProp_ChatEntryType = { "ChatEntryType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetFriendMessage_Parms, ChatEntryType), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetFriendMessage_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendMessage_Statics::NewProp_SteamIdFriend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendMessage_Statics::NewProp_MessageIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendMessage_Statics::NewProp_Text_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendMessage_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendMessage_Statics::NewProp_ChatEntryType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendMessage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendMessage_Statics::PropPointers) < 2048);
// ********** End Function GetFriendMessage Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendMessage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_FriendsLibrary, nullptr, "GetFriendMessage", 	Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendMessage_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendMessage_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendMessage_Statics::SIK_FriendsLibrary_eventGetFriendMessage_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendMessage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendMessage_Statics::SIK_FriendsLibrary_eventGetFriendMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_FriendsLibrary::execGetFriendMessage)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_SteamIdFriend);
	P_GET_PROPERTY(FIntProperty,Z_Param_MessageIndex);
	P_GET_TARRAY_REF(uint8,Z_Param_Out_Text);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_ChatEntryType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USIK_FriendsLibrary::GetFriendMessage(Z_Param_SteamIdFriend,Z_Param_MessageIndex,Z_Param_Out_Text,Z_Param_Out_ChatEntryType);
	P_NATIVE_END;
}
// ********** End Class USIK_FriendsLibrary Function GetFriendMessage ******************************

// ********** Begin Class USIK_FriendsLibrary Function GetFriendPersonaName ************************
struct Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendPersonaName_Statics
{
	struct SIK_FriendsLibrary_eventGetFriendPersonaName_Parms
	{
		FSIK_SteamId SteamIdFriend;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Friends" },
		{ "Comment", "/*\n\x09Gets the persona name of a Steam friend.\n\x09@param SteamIdFriend - The Steam ID of the friend.\n\x09@return - The persona name of the friend.\n\x09*/" },
		{ "DisplayName", "Get Steam Friend Persona Name" },
		{ "Keywords", "GetFriendPersonaName" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsLibrary.h" },
		{ "ToolTip", "Gets the persona name of a Steam friend.\n@param SteamIdFriend - The Steam ID of the friend.\n@return - The persona name of the friend." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetFriendPersonaName constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIdFriend;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetFriendPersonaName constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetFriendPersonaName Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendPersonaName_Statics::NewProp_SteamIdFriend = { "SteamIdFriend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetFriendPersonaName_Parms, SteamIdFriend), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendPersonaName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetFriendPersonaName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendPersonaName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendPersonaName_Statics::NewProp_SteamIdFriend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendPersonaName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendPersonaName_Statics::PropPointers) < 2048);
// ********** End Function GetFriendPersonaName Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendPersonaName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_FriendsLibrary, nullptr, "GetFriendPersonaName", 	Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendPersonaName_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendPersonaName_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendPersonaName_Statics::SIK_FriendsLibrary_eventGetFriendPersonaName_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendPersonaName_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendPersonaName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendPersonaName_Statics::SIK_FriendsLibrary_eventGetFriendPersonaName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendPersonaName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendPersonaName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_FriendsLibrary::execGetFriendPersonaName)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_SteamIdFriend);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USIK_FriendsLibrary::GetFriendPersonaName(Z_Param_SteamIdFriend);
	P_NATIVE_END;
}
// ********** End Class USIK_FriendsLibrary Function GetFriendPersonaName **************************

// ********** Begin Class USIK_FriendsLibrary Function GetFriendPersonaNameHistory *****************
struct Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendPersonaNameHistory_Statics
{
	struct SIK_FriendsLibrary_eventGetFriendPersonaNameHistory_Parms
	{
		FSIK_SteamId SteamIdFriend;
		int32 PersonaNameIndex;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Friends" },
		{ "Comment", "/*\n\x09Gets the history of persona names for a Steam friend.\n\x09@param SteamIdFriend - The Steam ID of the friend.\n\x09@param PersonaNameIndex - The index of the persona name.\n\x09@return - The persona name.\n\x09*/" },
		{ "DisplayName", "Get Steam Friend Persona Name History" },
		{ "Keywords", "GetFriendPersonaNameHistory" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsLibrary.h" },
		{ "ToolTip", "Gets the history of persona names for a Steam friend.\n@param SteamIdFriend - The Steam ID of the friend.\n@param PersonaNameIndex - The index of the persona name.\n@return - The persona name." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetFriendPersonaNameHistory constinit property declarations ***********
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIdFriend;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PersonaNameIndex;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetFriendPersonaNameHistory constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetFriendPersonaNameHistory Property Definitions **********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendPersonaNameHistory_Statics::NewProp_SteamIdFriend = { "SteamIdFriend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetFriendPersonaNameHistory_Parms, SteamIdFriend), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendPersonaNameHistory_Statics::NewProp_PersonaNameIndex = { "PersonaNameIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetFriendPersonaNameHistory_Parms, PersonaNameIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendPersonaNameHistory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetFriendPersonaNameHistory_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendPersonaNameHistory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendPersonaNameHistory_Statics::NewProp_SteamIdFriend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendPersonaNameHistory_Statics::NewProp_PersonaNameIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendPersonaNameHistory_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendPersonaNameHistory_Statics::PropPointers) < 2048);
// ********** End Function GetFriendPersonaNameHistory Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendPersonaNameHistory_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_FriendsLibrary, nullptr, "GetFriendPersonaNameHistory", 	Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendPersonaNameHistory_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendPersonaNameHistory_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendPersonaNameHistory_Statics::SIK_FriendsLibrary_eventGetFriendPersonaNameHistory_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendPersonaNameHistory_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendPersonaNameHistory_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendPersonaNameHistory_Statics::SIK_FriendsLibrary_eventGetFriendPersonaNameHistory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendPersonaNameHistory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendPersonaNameHistory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_FriendsLibrary::execGetFriendPersonaNameHistory)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_SteamIdFriend);
	P_GET_PROPERTY(FIntProperty,Z_Param_PersonaNameIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USIK_FriendsLibrary::GetFriendPersonaNameHistory(Z_Param_SteamIdFriend,Z_Param_PersonaNameIndex);
	P_NATIVE_END;
}
// ********** End Class USIK_FriendsLibrary Function GetFriendPersonaNameHistory *******************

// ********** Begin Class USIK_FriendsLibrary Function GetFriendPersonaState ***********************
struct Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendPersonaState_Statics
{
	struct SIK_FriendsLibrary_eventGetFriendPersonaState_Parms
	{
		FSIK_SteamId SteamIdFriend;
		TEnumAsByte<ESIK_PersonaState> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Friends" },
		{ "Comment", "/*\n\x09Gets the current persona state of a Steam friend.\n\x09@param SteamIdFriend - The Steam ID of the friend.\n\x09@return - The persona state as an ESIK_PersonaState enum.\n\x09*/" },
		{ "DisplayName", "Get Steam Friend Persona State" },
		{ "Keywords", "GetFriendPersonaState" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsLibrary.h" },
		{ "ToolTip", "Gets the current persona state of a Steam friend.\n@param SteamIdFriend - The Steam ID of the friend.\n@return - The persona state as an ESIK_PersonaState enum." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetFriendPersonaState constinit property declarations *****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIdFriend;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetFriendPersonaState constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetFriendPersonaState Property Definitions ****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendPersonaState_Statics::NewProp_SteamIdFriend = { "SteamIdFriend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetFriendPersonaState_Parms, SteamIdFriend), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendPersonaState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetFriendPersonaState_Parms, ReturnValue), Z_Construct_UEnum_SteamIntegrationKit_ESIK_PersonaState, METADATA_PARAMS(0, nullptr) }; // 2697633552
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendPersonaState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendPersonaState_Statics::NewProp_SteamIdFriend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendPersonaState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendPersonaState_Statics::PropPointers) < 2048);
// ********** End Function GetFriendPersonaState Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendPersonaState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_FriendsLibrary, nullptr, "GetFriendPersonaState", 	Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendPersonaState_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendPersonaState_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendPersonaState_Statics::SIK_FriendsLibrary_eventGetFriendPersonaState_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendPersonaState_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendPersonaState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendPersonaState_Statics::SIK_FriendsLibrary_eventGetFriendPersonaState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendPersonaState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendPersonaState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_FriendsLibrary::execGetFriendPersonaState)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_SteamIdFriend);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<ESIK_PersonaState>*)Z_Param__Result=USIK_FriendsLibrary::GetFriendPersonaState(Z_Param_SteamIdFriend);
	P_NATIVE_END;
}
// ********** End Class USIK_FriendsLibrary Function GetFriendPersonaState *************************

// ********** Begin Class USIK_FriendsLibrary Function GetFriendRelationship ***********************
struct Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendRelationship_Statics
{
	struct SIK_FriendsLibrary_eventGetFriendRelationship_Parms
	{
		FSIK_SteamId SteamIdFriend;
		TEnumAsByte<ESIK_FriendRelationship> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Friends" },
		{ "Comment", "/*\n\x09Gets the relationship to a Steam friend.\n\x09@param SteamIdFriend - The Steam ID of the friend.\n\x09@return - The relationship as an ESIK_FriendRelationship enum.\n\x09*/" },
		{ "DisplayName", "Get Steam Friend Relationship" },
		{ "Keywords", "GetFriendRelationship" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsLibrary.h" },
		{ "ToolTip", "Gets the relationship to a Steam friend.\n@param SteamIdFriend - The Steam ID of the friend.\n@return - The relationship as an ESIK_FriendRelationship enum." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetFriendRelationship constinit property declarations *****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIdFriend;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetFriendRelationship constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetFriendRelationship Property Definitions ****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendRelationship_Statics::NewProp_SteamIdFriend = { "SteamIdFriend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetFriendRelationship_Parms, SteamIdFriend), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendRelationship_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetFriendRelationship_Parms, ReturnValue), Z_Construct_UEnum_SteamIntegrationKit_ESIK_FriendRelationship, METADATA_PARAMS(0, nullptr) }; // 4158209204
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendRelationship_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendRelationship_Statics::NewProp_SteamIdFriend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendRelationship_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendRelationship_Statics::PropPointers) < 2048);
// ********** End Function GetFriendRelationship Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendRelationship_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_FriendsLibrary, nullptr, "GetFriendRelationship", 	Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendRelationship_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendRelationship_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendRelationship_Statics::SIK_FriendsLibrary_eventGetFriendRelationship_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendRelationship_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendRelationship_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendRelationship_Statics::SIK_FriendsLibrary_eventGetFriendRelationship_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendRelationship()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendRelationship_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_FriendsLibrary::execGetFriendRelationship)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_SteamIdFriend);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<ESIK_FriendRelationship>*)Z_Param__Result=USIK_FriendsLibrary::GetFriendRelationship(Z_Param_SteamIdFriend);
	P_NATIVE_END;
}
// ********** End Class USIK_FriendsLibrary Function GetFriendRelationship *************************

// ********** Begin Class USIK_FriendsLibrary Function GetFriendRichPresence ***********************
struct Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendRichPresence_Statics
{
	struct SIK_FriendsLibrary_eventGetFriendRichPresence_Parms
	{
		FSIK_SteamId SteamIdFriend;
		FString Key;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Friends" },
		{ "Comment", "/*\n\x09Gets the rich presence value of a Steam friend by key.\n\x09@param SteamIdFriend - The Steam ID of the friend.\n\x09@param Key - The key to look up.\n\x09@return - The rich presence value.\n\x09*/" },
		{ "DisplayName", "Get Steam Friend Rich Presence" },
		{ "Keywords", "GetFriendRichPresence" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsLibrary.h" },
		{ "ToolTip", "Gets the rich presence value of a Steam friend by key.\n@param SteamIdFriend - The Steam ID of the friend.\n@param Key - The key to look up.\n@return - The rich presence value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetFriendRichPresence constinit property declarations *****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIdFriend;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetFriendRichPresence constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetFriendRichPresence Property Definitions ****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendRichPresence_Statics::NewProp_SteamIdFriend = { "SteamIdFriend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetFriendRichPresence_Parms, SteamIdFriend), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendRichPresence_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetFriendRichPresence_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendRichPresence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetFriendRichPresence_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendRichPresence_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendRichPresence_Statics::NewProp_SteamIdFriend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendRichPresence_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendRichPresence_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendRichPresence_Statics::PropPointers) < 2048);
// ********** End Function GetFriendRichPresence Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendRichPresence_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_FriendsLibrary, nullptr, "GetFriendRichPresence", 	Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendRichPresence_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendRichPresence_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendRichPresence_Statics::SIK_FriendsLibrary_eventGetFriendRichPresence_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendRichPresence_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendRichPresence_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendRichPresence_Statics::SIK_FriendsLibrary_eventGetFriendRichPresence_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendRichPresence()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendRichPresence_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_FriendsLibrary::execGetFriendRichPresence)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_SteamIdFriend);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USIK_FriendsLibrary::GetFriendRichPresence(Z_Param_SteamIdFriend,Z_Param_Key);
	P_NATIVE_END;
}
// ********** End Class USIK_FriendsLibrary Function GetFriendRichPresence *************************

// ********** Begin Class USIK_FriendsLibrary Function GetFriendRichPresenceKeyByIndex *************
struct Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendRichPresenceKeyByIndex_Statics
{
	struct SIK_FriendsLibrary_eventGetFriendRichPresenceKeyByIndex_Parms
	{
		FSIK_SteamId SteamIdFriend;
		int32 KeyIndex;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Friends" },
		{ "Comment", "/*\n\x09Gets the rich presence key by index for a Steam friend.\n\x09@param SteamIdFriend - The Steam ID of the friend.\n\x09@param KeyIndex - The index of the key.\n\x09@return - The rich presence key.\n\x09*/" },
		{ "DisplayName", "Get Steam Friend Rich Presence Key By Index" },
		{ "Keywords", "GetFriendRichPresenceKeyByIndex" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsLibrary.h" },
		{ "ToolTip", "Gets the rich presence key by index for a Steam friend.\n@param SteamIdFriend - The Steam ID of the friend.\n@param KeyIndex - The index of the key.\n@return - The rich presence key." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetFriendRichPresenceKeyByIndex constinit property declarations *******
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIdFriend;
	static const UECodeGen_Private::FIntPropertyParams NewProp_KeyIndex;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetFriendRichPresenceKeyByIndex constinit property declarations *********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetFriendRichPresenceKeyByIndex Property Definitions ******************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendRichPresenceKeyByIndex_Statics::NewProp_SteamIdFriend = { "SteamIdFriend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetFriendRichPresenceKeyByIndex_Parms, SteamIdFriend), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendRichPresenceKeyByIndex_Statics::NewProp_KeyIndex = { "KeyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetFriendRichPresenceKeyByIndex_Parms, KeyIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendRichPresenceKeyByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetFriendRichPresenceKeyByIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendRichPresenceKeyByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendRichPresenceKeyByIndex_Statics::NewProp_SteamIdFriend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendRichPresenceKeyByIndex_Statics::NewProp_KeyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendRichPresenceKeyByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendRichPresenceKeyByIndex_Statics::PropPointers) < 2048);
// ********** End Function GetFriendRichPresenceKeyByIndex Property Definitions ********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendRichPresenceKeyByIndex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_FriendsLibrary, nullptr, "GetFriendRichPresenceKeyByIndex", 	Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendRichPresenceKeyByIndex_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendRichPresenceKeyByIndex_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendRichPresenceKeyByIndex_Statics::SIK_FriendsLibrary_eventGetFriendRichPresenceKeyByIndex_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendRichPresenceKeyByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendRichPresenceKeyByIndex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendRichPresenceKeyByIndex_Statics::SIK_FriendsLibrary_eventGetFriendRichPresenceKeyByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendRichPresenceKeyByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendRichPresenceKeyByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_FriendsLibrary::execGetFriendRichPresenceKeyByIndex)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_SteamIdFriend);
	P_GET_PROPERTY(FIntProperty,Z_Param_KeyIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USIK_FriendsLibrary::GetFriendRichPresenceKeyByIndex(Z_Param_SteamIdFriend,Z_Param_KeyIndex);
	P_NATIVE_END;
}
// ********** End Class USIK_FriendsLibrary Function GetFriendRichPresenceKeyByIndex ***************

// ********** Begin Class USIK_FriendsLibrary Function GetFriendRichPresenceKeyCount ***************
struct Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendRichPresenceKeyCount_Statics
{
	struct SIK_FriendsLibrary_eventGetFriendRichPresenceKeyCount_Parms
	{
		FSIK_SteamId SteamIdFriend;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Friends" },
		{ "Comment", "/*\n\x09Gets the number of rich presence keys for a Steam friend.\n\x09@param SteamIdFriend - The Steam ID of the friend.\n\x09@return - The number of rich presence keys.\n\x09*/" },
		{ "DisplayName", "Get Steam Friend Rich Presence Key Count" },
		{ "Keywords", "GetFriendRichPresenceKeyCount" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsLibrary.h" },
		{ "ToolTip", "Gets the number of rich presence keys for a Steam friend.\n@param SteamIdFriend - The Steam ID of the friend.\n@return - The number of rich presence keys." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetFriendRichPresenceKeyCount constinit property declarations *********
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIdFriend;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetFriendRichPresenceKeyCount constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetFriendRichPresenceKeyCount Property Definitions ********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendRichPresenceKeyCount_Statics::NewProp_SteamIdFriend = { "SteamIdFriend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetFriendRichPresenceKeyCount_Parms, SteamIdFriend), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendRichPresenceKeyCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetFriendRichPresenceKeyCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendRichPresenceKeyCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendRichPresenceKeyCount_Statics::NewProp_SteamIdFriend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendRichPresenceKeyCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendRichPresenceKeyCount_Statics::PropPointers) < 2048);
// ********** End Function GetFriendRichPresenceKeyCount Property Definitions **********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendRichPresenceKeyCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_FriendsLibrary, nullptr, "GetFriendRichPresenceKeyCount", 	Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendRichPresenceKeyCount_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendRichPresenceKeyCount_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendRichPresenceKeyCount_Statics::SIK_FriendsLibrary_eventGetFriendRichPresenceKeyCount_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendRichPresenceKeyCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendRichPresenceKeyCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendRichPresenceKeyCount_Statics::SIK_FriendsLibrary_eventGetFriendRichPresenceKeyCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendRichPresenceKeyCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendRichPresenceKeyCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_FriendsLibrary::execGetFriendRichPresenceKeyCount)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_SteamIdFriend);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USIK_FriendsLibrary::GetFriendRichPresenceKeyCount(Z_Param_SteamIdFriend);
	P_NATIVE_END;
}
// ********** End Class USIK_FriendsLibrary Function GetFriendRichPresenceKeyCount *****************

// ********** Begin Class USIK_FriendsLibrary Function GetFriendsGroupMembersList ******************
struct Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendsGroupMembersList_Statics
{
	struct SIK_FriendsLibrary_eventGetFriendsGroupMembersList_Parms
	{
		FSIK_FriendsGroupID FriendsGroupID;
		int32 MembersCount;
		TArray<FSIK_SteamId> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Friends" },
		{ "Comment", "/*\n\x09Gets the list of members in a friends group.\n\x09@param FriendsGroupID - The Steam ID of the friends group.\n\x09@param MembersCount - The number of members.\n\x09@return - An array of Steam IDs of the members.\n\x09*/" },
		{ "DisplayName", "Get Steam Friends Group Members List" },
		{ "Keywords", "GetFriendsGroupMembersList" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsLibrary.h" },
		{ "ToolTip", "Gets the list of members in a friends group.\n@param FriendsGroupID - The Steam ID of the friends group.\n@param MembersCount - The number of members.\n@return - An array of Steam IDs of the members." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetFriendsGroupMembersList constinit property declarations ************
	static const UECodeGen_Private::FStructPropertyParams NewProp_FriendsGroupID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MembersCount;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetFriendsGroupMembersList constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetFriendsGroupMembersList Property Definitions ***********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendsGroupMembersList_Statics::NewProp_FriendsGroupID = { "FriendsGroupID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetFriendsGroupMembersList_Parms, FriendsGroupID), Z_Construct_UScriptStruct_FSIK_FriendsGroupID, METADATA_PARAMS(0, nullptr) }; // 2027989783
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendsGroupMembersList_Statics::NewProp_MembersCount = { "MembersCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetFriendsGroupMembersList_Parms, MembersCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendsGroupMembersList_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendsGroupMembersList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetFriendsGroupMembersList_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendsGroupMembersList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendsGroupMembersList_Statics::NewProp_FriendsGroupID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendsGroupMembersList_Statics::NewProp_MembersCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendsGroupMembersList_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendsGroupMembersList_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendsGroupMembersList_Statics::PropPointers) < 2048);
// ********** End Function GetFriendsGroupMembersList Property Definitions *************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendsGroupMembersList_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_FriendsLibrary, nullptr, "GetFriendsGroupMembersList", 	Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendsGroupMembersList_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendsGroupMembersList_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendsGroupMembersList_Statics::SIK_FriendsLibrary_eventGetFriendsGroupMembersList_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendsGroupMembersList_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendsGroupMembersList_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendsGroupMembersList_Statics::SIK_FriendsLibrary_eventGetFriendsGroupMembersList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendsGroupMembersList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendsGroupMembersList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_FriendsLibrary::execGetFriendsGroupMembersList)
{
	P_GET_STRUCT(FSIK_FriendsGroupID,Z_Param_FriendsGroupID);
	P_GET_PROPERTY(FIntProperty,Z_Param_MembersCount);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FSIK_SteamId>*)Z_Param__Result=USIK_FriendsLibrary::GetFriendsGroupMembersList(Z_Param_FriendsGroupID,Z_Param_MembersCount);
	P_NATIVE_END;
}
// ********** End Class USIK_FriendsLibrary Function GetFriendsGroupMembersList ********************

// ********** Begin Class USIK_FriendsLibrary Function GetFriendsGroupName *************************
struct Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendsGroupName_Statics
{
	struct SIK_FriendsLibrary_eventGetFriendsGroupName_Parms
	{
		FSIK_FriendsGroupID FriendsGroupID;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Friends" },
		{ "Comment", "/*\n\x09Gets the name of a friends group.\n\x09@param FriendsGroupID - The Steam ID of the friends group.\n\x09@return - The name of the friends group.\n\x09*/" },
		{ "DisplayName", "Get Steam Friends Group Name" },
		{ "Keywords", "GetFriendsGroupName" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsLibrary.h" },
		{ "ToolTip", "Gets the name of a friends group.\n@param FriendsGroupID - The Steam ID of the friends group.\n@return - The name of the friends group." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetFriendsGroupName constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_FriendsGroupID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetFriendsGroupName constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetFriendsGroupName Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendsGroupName_Statics::NewProp_FriendsGroupID = { "FriendsGroupID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetFriendsGroupName_Parms, FriendsGroupID), Z_Construct_UScriptStruct_FSIK_FriendsGroupID, METADATA_PARAMS(0, nullptr) }; // 2027989783
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendsGroupName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetFriendsGroupName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendsGroupName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendsGroupName_Statics::NewProp_FriendsGroupID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendsGroupName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendsGroupName_Statics::PropPointers) < 2048);
// ********** End Function GetFriendsGroupName Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendsGroupName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_FriendsLibrary, nullptr, "GetFriendsGroupName", 	Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendsGroupName_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendsGroupName_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendsGroupName_Statics::SIK_FriendsLibrary_eventGetFriendsGroupName_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendsGroupName_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendsGroupName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendsGroupName_Statics::SIK_FriendsLibrary_eventGetFriendsGroupName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendsGroupName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendsGroupName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_FriendsLibrary::execGetFriendsGroupName)
{
	P_GET_STRUCT(FSIK_FriendsGroupID,Z_Param_FriendsGroupID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USIK_FriendsLibrary::GetFriendsGroupName(Z_Param_FriendsGroupID);
	P_NATIVE_END;
}
// ********** End Class USIK_FriendsLibrary Function GetFriendsGroupName ***************************

// ********** Begin Class USIK_FriendsLibrary Function GetFriendSteamLevel *************************
struct Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendSteamLevel_Statics
{
	struct SIK_FriendsLibrary_eventGetFriendSteamLevel_Parms
	{
		FSIK_SteamId SteamIdFriend;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Friends" },
		{ "Comment", "/*\n\x09Gets the Steam level of a friend.\n\x09@param SteamIdFriend - The Steam ID of the friend.\n\x09@return - The Steam level of the friend.\n\x09*/" },
		{ "DisplayName", "Get Steam Friend Steam Level" },
		{ "Keywords", "GetFriendSteamLevel" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsLibrary.h" },
		{ "ToolTip", "Gets the Steam level of a friend.\n@param SteamIdFriend - The Steam ID of the friend.\n@return - The Steam level of the friend." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetFriendSteamLevel constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIdFriend;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetFriendSteamLevel constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetFriendSteamLevel Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendSteamLevel_Statics::NewProp_SteamIdFriend = { "SteamIdFriend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetFriendSteamLevel_Parms, SteamIdFriend), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendSteamLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetFriendSteamLevel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendSteamLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendSteamLevel_Statics::NewProp_SteamIdFriend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendSteamLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendSteamLevel_Statics::PropPointers) < 2048);
// ********** End Function GetFriendSteamLevel Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendSteamLevel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_FriendsLibrary, nullptr, "GetFriendSteamLevel", 	Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendSteamLevel_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendSteamLevel_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendSteamLevel_Statics::SIK_FriendsLibrary_eventGetFriendSteamLevel_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendSteamLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendSteamLevel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendSteamLevel_Statics::SIK_FriendsLibrary_eventGetFriendSteamLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendSteamLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendSteamLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_FriendsLibrary::execGetFriendSteamLevel)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_SteamIdFriend);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USIK_FriendsLibrary::GetFriendSteamLevel(Z_Param_SteamIdFriend);
	P_NATIVE_END;
}
// ********** End Class USIK_FriendsLibrary Function GetFriendSteamLevel ***************************

// ********** Begin Class USIK_FriendsLibrary Function GetLargeFriendAvatar ************************
struct Z_Construct_UFunction_USIK_FriendsLibrary_GetLargeFriendAvatar_Statics
{
	struct SIK_FriendsLibrary_eventGetLargeFriendAvatar_Parms
	{
		FSIK_SteamId SteamIdFriend;
		int32 Avatar;
		UTexture2D* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Friends" },
		{ "Comment", "/*\n\x09Gets the large avatar of a friend.\n\x09@param SteamIdFriend - The Steam ID of the friend.\n\x09@return - The large avatar as an int.\n\x09*/" },
		{ "DisplayName", "Get Steam Large Friend Avatar" },
		{ "Keywords", "GetLargeFriendAvatar" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsLibrary.h" },
		{ "ToolTip", "Gets the large avatar of a friend.\n@param SteamIdFriend - The Steam ID of the friend.\n@return - The large avatar as an int." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetLargeFriendAvatar constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIdFriend;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Avatar;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetLargeFriendAvatar constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetLargeFriendAvatar Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetLargeFriendAvatar_Statics::NewProp_SteamIdFriend = { "SteamIdFriend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetLargeFriendAvatar_Parms, SteamIdFriend), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetLargeFriendAvatar_Statics::NewProp_Avatar = { "Avatar", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetLargeFriendAvatar_Parms, Avatar), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetLargeFriendAvatar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetLargeFriendAvatar_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_FriendsLibrary_GetLargeFriendAvatar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetLargeFriendAvatar_Statics::NewProp_SteamIdFriend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetLargeFriendAvatar_Statics::NewProp_Avatar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetLargeFriendAvatar_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetLargeFriendAvatar_Statics::PropPointers) < 2048);
// ********** End Function GetLargeFriendAvatar Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_FriendsLibrary_GetLargeFriendAvatar_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_FriendsLibrary, nullptr, "GetLargeFriendAvatar", 	Z_Construct_UFunction_USIK_FriendsLibrary_GetLargeFriendAvatar_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetLargeFriendAvatar_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_GetLargeFriendAvatar_Statics::SIK_FriendsLibrary_eventGetLargeFriendAvatar_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetLargeFriendAvatar_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_FriendsLibrary_GetLargeFriendAvatar_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_GetLargeFriendAvatar_Statics::SIK_FriendsLibrary_eventGetLargeFriendAvatar_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_FriendsLibrary_GetLargeFriendAvatar()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_FriendsLibrary_GetLargeFriendAvatar_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_FriendsLibrary::execGetLargeFriendAvatar)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_SteamIdFriend);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Avatar);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTexture2D**)Z_Param__Result=USIK_FriendsLibrary::GetLargeFriendAvatar(Z_Param_SteamIdFriend,Z_Param_Out_Avatar);
	P_NATIVE_END;
}
// ********** End Class USIK_FriendsLibrary Function GetLargeFriendAvatar **************************

// ********** Begin Class USIK_FriendsLibrary Function GetMediumFriendAvatar ***********************
struct Z_Construct_UFunction_USIK_FriendsLibrary_GetMediumFriendAvatar_Statics
{
	struct SIK_FriendsLibrary_eventGetMediumFriendAvatar_Parms
	{
		FSIK_SteamId SteamIdFriend;
		int32 Avatar;
		UTexture2D* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Friends" },
		{ "Comment", "/*\n\x09Gets the medium avatar of a friend.\n\x09@param SteamIdFriend - The Steam ID of the friend.\n\x09@return - The medium avatar as an int.\n\x09*/" },
		{ "DisplayName", "Get Steam Medium Friend Avatar" },
		{ "Keywords", "GetMediumFriendAvatar" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsLibrary.h" },
		{ "ToolTip", "Gets the medium avatar of a friend.\n@param SteamIdFriend - The Steam ID of the friend.\n@return - The medium avatar as an int." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetMediumFriendAvatar constinit property declarations *****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIdFriend;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Avatar;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetMediumFriendAvatar constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetMediumFriendAvatar Property Definitions ****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetMediumFriendAvatar_Statics::NewProp_SteamIdFriend = { "SteamIdFriend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetMediumFriendAvatar_Parms, SteamIdFriend), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetMediumFriendAvatar_Statics::NewProp_Avatar = { "Avatar", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetMediumFriendAvatar_Parms, Avatar), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetMediumFriendAvatar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetMediumFriendAvatar_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_FriendsLibrary_GetMediumFriendAvatar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetMediumFriendAvatar_Statics::NewProp_SteamIdFriend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetMediumFriendAvatar_Statics::NewProp_Avatar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetMediumFriendAvatar_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetMediumFriendAvatar_Statics::PropPointers) < 2048);
// ********** End Function GetMediumFriendAvatar Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_FriendsLibrary_GetMediumFriendAvatar_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_FriendsLibrary, nullptr, "GetMediumFriendAvatar", 	Z_Construct_UFunction_USIK_FriendsLibrary_GetMediumFriendAvatar_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetMediumFriendAvatar_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_GetMediumFriendAvatar_Statics::SIK_FriendsLibrary_eventGetMediumFriendAvatar_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetMediumFriendAvatar_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_FriendsLibrary_GetMediumFriendAvatar_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_GetMediumFriendAvatar_Statics::SIK_FriendsLibrary_eventGetMediumFriendAvatar_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_FriendsLibrary_GetMediumFriendAvatar()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_FriendsLibrary_GetMediumFriendAvatar_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_FriendsLibrary::execGetMediumFriendAvatar)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_SteamIdFriend);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Avatar);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTexture2D**)Z_Param__Result=USIK_FriendsLibrary::GetMediumFriendAvatar(Z_Param_SteamIdFriend,Z_Param_Out_Avatar);
	P_NATIVE_END;
}
// ********** End Class USIK_FriendsLibrary Function GetMediumFriendAvatar *************************

// ********** Begin Class USIK_FriendsLibrary Function GetPersonaName ******************************
struct Z_Construct_UFunction_USIK_FriendsLibrary_GetPersonaName_Statics
{
	struct SIK_FriendsLibrary_eventGetPersonaName_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Friends" },
		{ "Comment", "/*\n\x09Gets the current persona name of the local user.\n\x09@return - The persona name.\n\x09*/" },
		{ "DisplayName", "Get Steam Persona Name" },
		{ "Keywords", "GetPersonaName" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsLibrary.h" },
		{ "ToolTip", "Gets the current persona name of the local user.\n@return - The persona name." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetPersonaName constinit property declarations ************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPersonaName constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPersonaName Property Definitions ***********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetPersonaName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetPersonaName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_FriendsLibrary_GetPersonaName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetPersonaName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetPersonaName_Statics::PropPointers) < 2048);
// ********** End Function GetPersonaName Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_FriendsLibrary_GetPersonaName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_FriendsLibrary, nullptr, "GetPersonaName", 	Z_Construct_UFunction_USIK_FriendsLibrary_GetPersonaName_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetPersonaName_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_GetPersonaName_Statics::SIK_FriendsLibrary_eventGetPersonaName_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetPersonaName_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_FriendsLibrary_GetPersonaName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_GetPersonaName_Statics::SIK_FriendsLibrary_eventGetPersonaName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_FriendsLibrary_GetPersonaName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_FriendsLibrary_GetPersonaName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_FriendsLibrary::execGetPersonaName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USIK_FriendsLibrary::GetPersonaName();
	P_NATIVE_END;
}
// ********** End Class USIK_FriendsLibrary Function GetPersonaName ********************************

// ********** Begin Class USIK_FriendsLibrary Function GetPersonaState *****************************
struct Z_Construct_UFunction_USIK_FriendsLibrary_GetPersonaState_Statics
{
	struct SIK_FriendsLibrary_eventGetPersonaState_Parms
	{
		TEnumAsByte<ESIK_PersonaState> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Friends" },
		{ "Comment", "/*\n\x09Gets the current persona state of the local user.\n\x09@return - The persona state as an ESIK_PersonaState enum.\n\x09*/" },
		{ "DisplayName", "Get Steam Persona State" },
		{ "Keywords", "GetPersonaState" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsLibrary.h" },
		{ "ToolTip", "Gets the current persona state of the local user.\n@return - The persona state as an ESIK_PersonaState enum." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetPersonaState constinit property declarations ***********************
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPersonaState constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPersonaState Property Definitions **********************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetPersonaState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetPersonaState_Parms, ReturnValue), Z_Construct_UEnum_SteamIntegrationKit_ESIK_PersonaState, METADATA_PARAMS(0, nullptr) }; // 2697633552
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_FriendsLibrary_GetPersonaState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetPersonaState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetPersonaState_Statics::PropPointers) < 2048);
// ********** End Function GetPersonaState Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_FriendsLibrary_GetPersonaState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_FriendsLibrary, nullptr, "GetPersonaState", 	Z_Construct_UFunction_USIK_FriendsLibrary_GetPersonaState_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetPersonaState_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_GetPersonaState_Statics::SIK_FriendsLibrary_eventGetPersonaState_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetPersonaState_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_FriendsLibrary_GetPersonaState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_GetPersonaState_Statics::SIK_FriendsLibrary_eventGetPersonaState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_FriendsLibrary_GetPersonaState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_FriendsLibrary_GetPersonaState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_FriendsLibrary::execGetPersonaState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<ESIK_PersonaState>*)Z_Param__Result=USIK_FriendsLibrary::GetPersonaState();
	P_NATIVE_END;
}
// ********** End Class USIK_FriendsLibrary Function GetPersonaState *******************************

// ********** Begin Class USIK_FriendsLibrary Function GetPlayerNickname ***************************
struct Z_Construct_UFunction_USIK_FriendsLibrary_GetPlayerNickname_Statics
{
	struct SIK_FriendsLibrary_eventGetPlayerNickname_Parms
	{
		FSIK_SteamId SteamIdPlayer;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Friends" },
		{ "Comment", "/*\n\x09Gets the nickname of a player.\n\x09@param SteamIdPlayer - The Steam ID of the player.\n\x09@return - The player's nickname.\n\x09*/" },
		{ "DisplayName", "Get Steam Player Nickname" },
		{ "Keywords", "GetPlayerNickname" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsLibrary.h" },
		{ "ToolTip", "Gets the nickname of a player.\n@param SteamIdPlayer - The Steam ID of the player.\n@return - The player's nickname." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetPlayerNickname constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIdPlayer;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPlayerNickname constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPlayerNickname Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetPlayerNickname_Statics::NewProp_SteamIdPlayer = { "SteamIdPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetPlayerNickname_Parms, SteamIdPlayer), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetPlayerNickname_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetPlayerNickname_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_FriendsLibrary_GetPlayerNickname_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetPlayerNickname_Statics::NewProp_SteamIdPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetPlayerNickname_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetPlayerNickname_Statics::PropPointers) < 2048);
// ********** End Function GetPlayerNickname Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_FriendsLibrary_GetPlayerNickname_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_FriendsLibrary, nullptr, "GetPlayerNickname", 	Z_Construct_UFunction_USIK_FriendsLibrary_GetPlayerNickname_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetPlayerNickname_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_GetPlayerNickname_Statics::SIK_FriendsLibrary_eventGetPlayerNickname_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetPlayerNickname_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_FriendsLibrary_GetPlayerNickname_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_GetPlayerNickname_Statics::SIK_FriendsLibrary_eventGetPlayerNickname_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_FriendsLibrary_GetPlayerNickname()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_FriendsLibrary_GetPlayerNickname_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_FriendsLibrary::execGetPlayerNickname)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_SteamIdPlayer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USIK_FriendsLibrary::GetPlayerNickname(Z_Param_SteamIdPlayer);
	P_NATIVE_END;
}
// ********** End Class USIK_FriendsLibrary Function GetPlayerNickname *****************************

// ********** Begin Class USIK_FriendsLibrary Function GetProfileItemPropertyString ****************
struct Z_Construct_UFunction_USIK_FriendsLibrary_GetProfileItemPropertyString_Statics
{
	struct SIK_FriendsLibrary_eventGetProfileItemPropertyString_Parms
	{
		FSIK_SteamId SteamIdUser;
		TEnumAsByte<ESIK_ECommunityProfileItemType> ItemType;
		TEnumAsByte<ESIK_ECommunityProfileItemProperty> Property;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Friends" },
		{ "Comment", "//Returns a string property for a user's equipped profile item\n" },
		{ "DisplayName", "Get Profile Item Property String" },
		{ "Keywords", "GetProfileItemPropertyString" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsLibrary.h" },
		{ "ToolTip", "Returns a string property for a user's equipped profile item" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetProfileItemPropertyString constinit property declarations **********
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIdUser;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ItemType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Property;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetProfileItemPropertyString constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetProfileItemPropertyString Property Definitions *********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetProfileItemPropertyString_Statics::NewProp_SteamIdUser = { "SteamIdUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetProfileItemPropertyString_Parms, SteamIdUser), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetProfileItemPropertyString_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetProfileItemPropertyString_Parms, ItemType), Z_Construct_UEnum_SteamIntegrationKit_ESIK_ECommunityProfileItemType, METADATA_PARAMS(0, nullptr) }; // 2137244242
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetProfileItemPropertyString_Statics::NewProp_Property = { "Property", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetProfileItemPropertyString_Parms, Property), Z_Construct_UEnum_SteamIntegrationKit_ESIK_ECommunityProfileItemProperty, METADATA_PARAMS(0, nullptr) }; // 2037082194
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetProfileItemPropertyString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetProfileItemPropertyString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_FriendsLibrary_GetProfileItemPropertyString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetProfileItemPropertyString_Statics::NewProp_SteamIdUser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetProfileItemPropertyString_Statics::NewProp_ItemType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetProfileItemPropertyString_Statics::NewProp_Property,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetProfileItemPropertyString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetProfileItemPropertyString_Statics::PropPointers) < 2048);
// ********** End Function GetProfileItemPropertyString Property Definitions ***********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_FriendsLibrary_GetProfileItemPropertyString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_FriendsLibrary, nullptr, "GetProfileItemPropertyString", 	Z_Construct_UFunction_USIK_FriendsLibrary_GetProfileItemPropertyString_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetProfileItemPropertyString_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_GetProfileItemPropertyString_Statics::SIK_FriendsLibrary_eventGetProfileItemPropertyString_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetProfileItemPropertyString_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_FriendsLibrary_GetProfileItemPropertyString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_GetProfileItemPropertyString_Statics::SIK_FriendsLibrary_eventGetProfileItemPropertyString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_FriendsLibrary_GetProfileItemPropertyString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_FriendsLibrary_GetProfileItemPropertyString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_FriendsLibrary::execGetProfileItemPropertyString)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_SteamIdUser);
	P_GET_PROPERTY(FByteProperty,Z_Param_ItemType);
	P_GET_PROPERTY(FByteProperty,Z_Param_Property);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USIK_FriendsLibrary::GetProfileItemPropertyString(Z_Param_SteamIdUser,ESIK_ECommunityProfileItemType(Z_Param_ItemType),ESIK_ECommunityProfileItemProperty(Z_Param_Property));
	P_NATIVE_END;
}
// ********** End Class USIK_FriendsLibrary Function GetProfileItemPropertyString ******************

// ********** Begin Class USIK_FriendsLibrary Function GetProfileItemPropertyUint ******************
struct Z_Construct_UFunction_USIK_FriendsLibrary_GetProfileItemPropertyUint_Statics
{
	struct SIK_FriendsLibrary_eventGetProfileItemPropertyUint_Parms
	{
		FSIK_SteamId SteamIdUser;
		TEnumAsByte<ESIK_ECommunityProfileItemType> ItemType;
		TEnumAsByte<ESIK_ECommunityProfileItemProperty> Property;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Friends" },
		{ "Comment", "//Returns an unsigned integer property for a user's equipped profile item.\n" },
		{ "DisplayName", "Get Profile Item Property Uint" },
		{ "Keywords", "GetProfileItemPropertyUint" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsLibrary.h" },
		{ "ToolTip", "Returns an unsigned integer property for a user's equipped profile item." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetProfileItemPropertyUint constinit property declarations ************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIdUser;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ItemType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Property;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetProfileItemPropertyUint constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetProfileItemPropertyUint Property Definitions ***********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetProfileItemPropertyUint_Statics::NewProp_SteamIdUser = { "SteamIdUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetProfileItemPropertyUint_Parms, SteamIdUser), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetProfileItemPropertyUint_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetProfileItemPropertyUint_Parms, ItemType), Z_Construct_UEnum_SteamIntegrationKit_ESIK_ECommunityProfileItemType, METADATA_PARAMS(0, nullptr) }; // 2137244242
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetProfileItemPropertyUint_Statics::NewProp_Property = { "Property", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetProfileItemPropertyUint_Parms, Property), Z_Construct_UEnum_SteamIntegrationKit_ESIK_ECommunityProfileItemProperty, METADATA_PARAMS(0, nullptr) }; // 2037082194
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetProfileItemPropertyUint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetProfileItemPropertyUint_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_FriendsLibrary_GetProfileItemPropertyUint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetProfileItemPropertyUint_Statics::NewProp_SteamIdUser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetProfileItemPropertyUint_Statics::NewProp_ItemType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetProfileItemPropertyUint_Statics::NewProp_Property,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetProfileItemPropertyUint_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetProfileItemPropertyUint_Statics::PropPointers) < 2048);
// ********** End Function GetProfileItemPropertyUint Property Definitions *************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_FriendsLibrary_GetProfileItemPropertyUint_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_FriendsLibrary, nullptr, "GetProfileItemPropertyUint", 	Z_Construct_UFunction_USIK_FriendsLibrary_GetProfileItemPropertyUint_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetProfileItemPropertyUint_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_GetProfileItemPropertyUint_Statics::SIK_FriendsLibrary_eventGetProfileItemPropertyUint_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetProfileItemPropertyUint_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_FriendsLibrary_GetProfileItemPropertyUint_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_GetProfileItemPropertyUint_Statics::SIK_FriendsLibrary_eventGetProfileItemPropertyUint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_FriendsLibrary_GetProfileItemPropertyUint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_FriendsLibrary_GetProfileItemPropertyUint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_FriendsLibrary::execGetProfileItemPropertyUint)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_SteamIdUser);
	P_GET_PROPERTY(FByteProperty,Z_Param_ItemType);
	P_GET_PROPERTY(FByteProperty,Z_Param_Property);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USIK_FriendsLibrary::GetProfileItemPropertyUint(Z_Param_SteamIdUser,ESIK_ECommunityProfileItemType(Z_Param_ItemType),ESIK_ECommunityProfileItemProperty(Z_Param_Property));
	P_NATIVE_END;
}
// ********** End Class USIK_FriendsLibrary Function GetProfileItemPropertyUint ********************

// ********** Begin Class USIK_FriendsLibrary Function GetSmallFriendAvatar ************************
struct Z_Construct_UFunction_USIK_FriendsLibrary_GetSmallFriendAvatar_Statics
{
	struct SIK_FriendsLibrary_eventGetSmallFriendAvatar_Parms
	{
		FSIK_SteamId SteamIdFriend;
		int32 Avatar;
		UTexture2D* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Friends" },
		{ "Comment", "/*\n\x09Gets the small avatar of a friend.\n\x09@param SteamIdFriend - The Steam ID of the friend.\n\x09@return - The small avatar as an int.\n\x09*/" },
		{ "DisplayName", "Get Steam Small Friend Avatar" },
		{ "Keywords", "GetSmallFriendAvatar" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsLibrary.h" },
		{ "ToolTip", "Gets the small avatar of a friend.\n@param SteamIdFriend - The Steam ID of the friend.\n@return - The small avatar as an int." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetSmallFriendAvatar constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIdFriend;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Avatar;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSmallFriendAvatar constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSmallFriendAvatar Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetSmallFriendAvatar_Statics::NewProp_SteamIdFriend = { "SteamIdFriend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetSmallFriendAvatar_Parms, SteamIdFriend), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetSmallFriendAvatar_Statics::NewProp_Avatar = { "Avatar", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetSmallFriendAvatar_Parms, Avatar), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetSmallFriendAvatar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetSmallFriendAvatar_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_FriendsLibrary_GetSmallFriendAvatar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetSmallFriendAvatar_Statics::NewProp_SteamIdFriend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetSmallFriendAvatar_Statics::NewProp_Avatar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetSmallFriendAvatar_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetSmallFriendAvatar_Statics::PropPointers) < 2048);
// ********** End Function GetSmallFriendAvatar Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_FriendsLibrary_GetSmallFriendAvatar_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_FriendsLibrary, nullptr, "GetSmallFriendAvatar", 	Z_Construct_UFunction_USIK_FriendsLibrary_GetSmallFriendAvatar_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetSmallFriendAvatar_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_GetSmallFriendAvatar_Statics::SIK_FriendsLibrary_eventGetSmallFriendAvatar_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetSmallFriendAvatar_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_FriendsLibrary_GetSmallFriendAvatar_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_GetSmallFriendAvatar_Statics::SIK_FriendsLibrary_eventGetSmallFriendAvatar_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_FriendsLibrary_GetSmallFriendAvatar()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_FriendsLibrary_GetSmallFriendAvatar_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_FriendsLibrary::execGetSmallFriendAvatar)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_SteamIdFriend);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Avatar);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTexture2D**)Z_Param__Result=USIK_FriendsLibrary::GetSmallFriendAvatar(Z_Param_SteamIdFriend,Z_Param_Out_Avatar);
	P_NATIVE_END;
}
// ********** End Class USIK_FriendsLibrary Function GetSmallFriendAvatar **************************

// ********** Begin Class USIK_FriendsLibrary Function GetUserRestrictions *************************
struct Z_Construct_UFunction_USIK_FriendsLibrary_GetUserRestrictions_Statics
{
	struct SIK_FriendsLibrary_eventGetUserRestrictions_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Friends" },
		{ "Comment", "/*\n\x09Gets the user restrictions.\n\x09@return - The user restrictions as an int.\n\x09*/" },
		{ "DisplayName", "Get Steam User Restrictions" },
		{ "Keywords", "GetUserRestrictions" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsLibrary.h" },
		{ "ToolTip", "Gets the user restrictions.\n@return - The user restrictions as an int." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetUserRestrictions constinit property declarations *******************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetUserRestrictions constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetUserRestrictions Property Definitions ******************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_GetUserRestrictions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventGetUserRestrictions_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_FriendsLibrary_GetUserRestrictions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_GetUserRestrictions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetUserRestrictions_Statics::PropPointers) < 2048);
// ********** End Function GetUserRestrictions Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_FriendsLibrary_GetUserRestrictions_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_FriendsLibrary, nullptr, "GetUserRestrictions", 	Z_Construct_UFunction_USIK_FriendsLibrary_GetUserRestrictions_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetUserRestrictions_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_GetUserRestrictions_Statics::SIK_FriendsLibrary_eventGetUserRestrictions_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_GetUserRestrictions_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_FriendsLibrary_GetUserRestrictions_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_GetUserRestrictions_Statics::SIK_FriendsLibrary_eventGetUserRestrictions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_FriendsLibrary_GetUserRestrictions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_FriendsLibrary_GetUserRestrictions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_FriendsLibrary::execGetUserRestrictions)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USIK_FriendsLibrary::GetUserRestrictions();
	P_NATIVE_END;
}
// ********** End Class USIK_FriendsLibrary Function GetUserRestrictions ***************************

// ********** Begin Class USIK_FriendsLibrary Function HasFriend ***********************************
struct Z_Construct_UFunction_USIK_FriendsLibrary_HasFriend_Statics
{
	struct SIK_FriendsLibrary_eventHasFriend_Parms
	{
		FSIK_SteamId SteamIdFriend;
		TArray<TEnumAsByte<ESIK_FriendFlags>> FriendFlags;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Friends" },
		{ "Comment", "/*\n\x09""Checks if the user has a specific friend.\n\x09@param SteamIdFriend - The Steam ID of the friend.\n\x09@param FriendFlags - Flags to filter friends.\n\x09@return - true if the user has the friend, false otherwise.\n\x09*/" },
		{ "DisplayName", "Has Steam Friend" },
		{ "Keywords", "HasFriend" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsLibrary.h" },
		{ "ToolTip", "Checks if the user has a specific friend.\n@param SteamIdFriend - The Steam ID of the friend.\n@param FriendFlags - Flags to filter friends.\n@return - true if the user has the friend, false otherwise." },
	};
#endif // WITH_METADATA

// ********** Begin Function HasFriend constinit property declarations *****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIdFriend;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FriendFlags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FriendFlags;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HasFriend constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HasFriend Property Definitions ****************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_HasFriend_Statics::NewProp_SteamIdFriend = { "SteamIdFriend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventHasFriend_Parms, SteamIdFriend), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_HasFriend_Statics::NewProp_FriendFlags_Inner = { "FriendFlags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_SteamIntegrationKit_ESIK_FriendFlags, METADATA_PARAMS(0, nullptr) }; // 1113207765
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_HasFriend_Statics::NewProp_FriendFlags = { "FriendFlags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventHasFriend_Parms, FriendFlags), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1113207765
void Z_Construct_UFunction_USIK_FriendsLibrary_HasFriend_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_FriendsLibrary_eventHasFriend_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_HasFriend_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_FriendsLibrary_eventHasFriend_Parms), &Z_Construct_UFunction_USIK_FriendsLibrary_HasFriend_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_FriendsLibrary_HasFriend_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_HasFriend_Statics::NewProp_SteamIdFriend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_HasFriend_Statics::NewProp_FriendFlags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_HasFriend_Statics::NewProp_FriendFlags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_HasFriend_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_HasFriend_Statics::PropPointers) < 2048);
// ********** End Function HasFriend Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_FriendsLibrary_HasFriend_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_FriendsLibrary, nullptr, "HasFriend", 	Z_Construct_UFunction_USIK_FriendsLibrary_HasFriend_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_HasFriend_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_HasFriend_Statics::SIK_FriendsLibrary_eventHasFriend_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_HasFriend_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_FriendsLibrary_HasFriend_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_HasFriend_Statics::SIK_FriendsLibrary_eventHasFriend_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_FriendsLibrary_HasFriend()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_FriendsLibrary_HasFriend_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_FriendsLibrary::execHasFriend)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_SteamIdFriend);
	P_GET_TARRAY(TEnumAsByte<ESIK_FriendFlags>,Z_Param_FriendFlags);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_FriendsLibrary::HasFriend(Z_Param_SteamIdFriend,Z_Param_FriendFlags);
	P_NATIVE_END;
}
// ********** End Class USIK_FriendsLibrary Function HasFriend *************************************

// ********** Begin Class USIK_FriendsLibrary Function InviteUserToGame ****************************
struct Z_Construct_UFunction_USIK_FriendsLibrary_InviteUserToGame_Statics
{
	struct SIK_FriendsLibrary_eventInviteUserToGame_Parms
	{
		FSIK_SteamId SteamIdFriend;
		FString ConnectString;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Friends" },
		{ "Comment", "/*\n\x09Invites a user to a game.\n\x09@param SteamIdFriend - The Steam ID of the friend.\n\x09@param ConnectString - The connection string for the invite.\n\x09@return - true if the invite was successful, false otherwise.\n\x09*/" },
		{ "DisplayName", "Invite Steam User To Game" },
		{ "Keywords", "InviteUserToGame" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsLibrary.h" },
		{ "ToolTip", "Invites a user to a game.\n@param SteamIdFriend - The Steam ID of the friend.\n@param ConnectString - The connection string for the invite.\n@return - true if the invite was successful, false otherwise." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConnectString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function InviteUserToGame constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIdFriend;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ConnectString;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function InviteUserToGame constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function InviteUserToGame Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_InviteUserToGame_Statics::NewProp_SteamIdFriend = { "SteamIdFriend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventInviteUserToGame_Parms, SteamIdFriend), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_InviteUserToGame_Statics::NewProp_ConnectString = { "ConnectString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventInviteUserToGame_Parms, ConnectString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConnectString_MetaData), NewProp_ConnectString_MetaData) };
void Z_Construct_UFunction_USIK_FriendsLibrary_InviteUserToGame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_FriendsLibrary_eventInviteUserToGame_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_InviteUserToGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_FriendsLibrary_eventInviteUserToGame_Parms), &Z_Construct_UFunction_USIK_FriendsLibrary_InviteUserToGame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_FriendsLibrary_InviteUserToGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_InviteUserToGame_Statics::NewProp_SteamIdFriend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_InviteUserToGame_Statics::NewProp_ConnectString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_InviteUserToGame_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_InviteUserToGame_Statics::PropPointers) < 2048);
// ********** End Function InviteUserToGame Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_FriendsLibrary_InviteUserToGame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_FriendsLibrary, nullptr, "InviteUserToGame", 	Z_Construct_UFunction_USIK_FriendsLibrary_InviteUserToGame_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_InviteUserToGame_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_InviteUserToGame_Statics::SIK_FriendsLibrary_eventInviteUserToGame_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_InviteUserToGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_FriendsLibrary_InviteUserToGame_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_InviteUserToGame_Statics::SIK_FriendsLibrary_eventInviteUserToGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_FriendsLibrary_InviteUserToGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_FriendsLibrary_InviteUserToGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_FriendsLibrary::execInviteUserToGame)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_SteamIdFriend);
	P_GET_PROPERTY(FStrProperty,Z_Param_ConnectString);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_FriendsLibrary::InviteUserToGame(Z_Param_SteamIdFriend,Z_Param_ConnectString);
	P_NATIVE_END;
}
// ********** End Class USIK_FriendsLibrary Function InviteUserToGame ******************************

// ********** Begin Class USIK_FriendsLibrary Function IsClanChatAdmin *****************************
struct Z_Construct_UFunction_USIK_FriendsLibrary_IsClanChatAdmin_Statics
{
	struct SIK_FriendsLibrary_eventIsClanChatAdmin_Parms
	{
		FSIK_SteamId SteamIdClanChat;
		FSIK_SteamId SteamIdUser;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Friends" },
		{ "Comment", "/*\n\x09""Checks if a user is an admin in a clan chat.\n\x09@param SteamIdClanChat - The Steam ID of the clan chat.\n\x09@param SteamIdUser - The Steam ID of the user.\n\x09@return - true if the user is an admin, false otherwise.\n\x09*/" },
		{ "DisplayName", "Is Steam Clan Chat Admin" },
		{ "Keywords", "IsClanChatAdmin" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsLibrary.h" },
		{ "ToolTip", "Checks if a user is an admin in a clan chat.\n@param SteamIdClanChat - The Steam ID of the clan chat.\n@param SteamIdUser - The Steam ID of the user.\n@return - true if the user is an admin, false otherwise." },
	};
#endif // WITH_METADATA

// ********** Begin Function IsClanChatAdmin constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIdClanChat;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIdUser;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsClanChatAdmin constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsClanChatAdmin Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_IsClanChatAdmin_Statics::NewProp_SteamIdClanChat = { "SteamIdClanChat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventIsClanChatAdmin_Parms, SteamIdClanChat), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_IsClanChatAdmin_Statics::NewProp_SteamIdUser = { "SteamIdUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventIsClanChatAdmin_Parms, SteamIdUser), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
void Z_Construct_UFunction_USIK_FriendsLibrary_IsClanChatAdmin_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_FriendsLibrary_eventIsClanChatAdmin_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_IsClanChatAdmin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_FriendsLibrary_eventIsClanChatAdmin_Parms), &Z_Construct_UFunction_USIK_FriendsLibrary_IsClanChatAdmin_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_FriendsLibrary_IsClanChatAdmin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_IsClanChatAdmin_Statics::NewProp_SteamIdClanChat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_IsClanChatAdmin_Statics::NewProp_SteamIdUser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_IsClanChatAdmin_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_IsClanChatAdmin_Statics::PropPointers) < 2048);
// ********** End Function IsClanChatAdmin Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_FriendsLibrary_IsClanChatAdmin_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_FriendsLibrary, nullptr, "IsClanChatAdmin", 	Z_Construct_UFunction_USIK_FriendsLibrary_IsClanChatAdmin_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_IsClanChatAdmin_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_IsClanChatAdmin_Statics::SIK_FriendsLibrary_eventIsClanChatAdmin_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_IsClanChatAdmin_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_FriendsLibrary_IsClanChatAdmin_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_IsClanChatAdmin_Statics::SIK_FriendsLibrary_eventIsClanChatAdmin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_FriendsLibrary_IsClanChatAdmin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_FriendsLibrary_IsClanChatAdmin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_FriendsLibrary::execIsClanChatAdmin)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_SteamIdClanChat);
	P_GET_STRUCT(FSIK_SteamId,Z_Param_SteamIdUser);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_FriendsLibrary::IsClanChatAdmin(Z_Param_SteamIdClanChat,Z_Param_SteamIdUser);
	P_NATIVE_END;
}
// ********** End Class USIK_FriendsLibrary Function IsClanChatAdmin *******************************

// ********** Begin Class USIK_FriendsLibrary Function IsClanChatWindowOpenInSteam *****************
struct Z_Construct_UFunction_USIK_FriendsLibrary_IsClanChatWindowOpenInSteam_Statics
{
	struct SIK_FriendsLibrary_eventIsClanChatWindowOpenInSteam_Parms
	{
		FSIK_SteamId SteamIdClanChat;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Friends" },
		{ "Comment", "/*\n\x09""Checks if a clan chat window is open in Steam.\n\x09@param SteamIdClanChat - The Steam ID of the clan chat.\n\x09@return - true if the clan chat window is open, false otherwise.\n\x09*/" },
		{ "DisplayName", "Is Steam Clan Chat Window Open In Steam" },
		{ "Keywords", "IsClanChatWindowOpen" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsLibrary.h" },
		{ "ToolTip", "Checks if a clan chat window is open in Steam.\n@param SteamIdClanChat - The Steam ID of the clan chat.\n@return - true if the clan chat window is open, false otherwise." },
	};
#endif // WITH_METADATA

// ********** Begin Function IsClanChatWindowOpenInSteam constinit property declarations ***********
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIdClanChat;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsClanChatWindowOpenInSteam constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsClanChatWindowOpenInSteam Property Definitions **********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_IsClanChatWindowOpenInSteam_Statics::NewProp_SteamIdClanChat = { "SteamIdClanChat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventIsClanChatWindowOpenInSteam_Parms, SteamIdClanChat), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
void Z_Construct_UFunction_USIK_FriendsLibrary_IsClanChatWindowOpenInSteam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_FriendsLibrary_eventIsClanChatWindowOpenInSteam_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_IsClanChatWindowOpenInSteam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_FriendsLibrary_eventIsClanChatWindowOpenInSteam_Parms), &Z_Construct_UFunction_USIK_FriendsLibrary_IsClanChatWindowOpenInSteam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_FriendsLibrary_IsClanChatWindowOpenInSteam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_IsClanChatWindowOpenInSteam_Statics::NewProp_SteamIdClanChat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_IsClanChatWindowOpenInSteam_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_IsClanChatWindowOpenInSteam_Statics::PropPointers) < 2048);
// ********** End Function IsClanChatWindowOpenInSteam Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_FriendsLibrary_IsClanChatWindowOpenInSteam_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_FriendsLibrary, nullptr, "IsClanChatWindowOpenInSteam", 	Z_Construct_UFunction_USIK_FriendsLibrary_IsClanChatWindowOpenInSteam_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_IsClanChatWindowOpenInSteam_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_IsClanChatWindowOpenInSteam_Statics::SIK_FriendsLibrary_eventIsClanChatWindowOpenInSteam_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_IsClanChatWindowOpenInSteam_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_FriendsLibrary_IsClanChatWindowOpenInSteam_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_IsClanChatWindowOpenInSteam_Statics::SIK_FriendsLibrary_eventIsClanChatWindowOpenInSteam_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_FriendsLibrary_IsClanChatWindowOpenInSteam()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_FriendsLibrary_IsClanChatWindowOpenInSteam_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_FriendsLibrary::execIsClanChatWindowOpenInSteam)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_SteamIdClanChat);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_FriendsLibrary::IsClanChatWindowOpenInSteam(Z_Param_SteamIdClanChat);
	P_NATIVE_END;
}
// ********** End Class USIK_FriendsLibrary Function IsClanChatWindowOpenInSteam *******************

// ********** Begin Class USIK_FriendsLibrary Function IsClanOfficialGameGroup *********************
struct Z_Construct_UFunction_USIK_FriendsLibrary_IsClanOfficialGameGroup_Statics
{
	struct SIK_FriendsLibrary_eventIsClanOfficialGameGroup_Parms
	{
		FSIK_SteamId SteamIdClan;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Friends" },
		{ "Comment", "/*\n\x09""Checks if a clan is an official game group.\n\x09@param SteamIdClan - The Steam ID of the clan.\n\x09@return - true if the clan is an official game group, false otherwise.\n\x09*/" },
		{ "DisplayName", "Is Steam Clan Official Game Group" },
		{ "Keywords", "IsClanOfficialGameGroup" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsLibrary.h" },
		{ "ToolTip", "Checks if a clan is an official game group.\n@param SteamIdClan - The Steam ID of the clan.\n@return - true if the clan is an official game group, false otherwise." },
	};
#endif // WITH_METADATA

// ********** Begin Function IsClanOfficialGameGroup constinit property declarations ***************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIdClan;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsClanOfficialGameGroup constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsClanOfficialGameGroup Property Definitions **************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_IsClanOfficialGameGroup_Statics::NewProp_SteamIdClan = { "SteamIdClan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventIsClanOfficialGameGroup_Parms, SteamIdClan), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
void Z_Construct_UFunction_USIK_FriendsLibrary_IsClanOfficialGameGroup_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_FriendsLibrary_eventIsClanOfficialGameGroup_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_IsClanOfficialGameGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_FriendsLibrary_eventIsClanOfficialGameGroup_Parms), &Z_Construct_UFunction_USIK_FriendsLibrary_IsClanOfficialGameGroup_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_FriendsLibrary_IsClanOfficialGameGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_IsClanOfficialGameGroup_Statics::NewProp_SteamIdClan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_IsClanOfficialGameGroup_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_IsClanOfficialGameGroup_Statics::PropPointers) < 2048);
// ********** End Function IsClanOfficialGameGroup Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_FriendsLibrary_IsClanOfficialGameGroup_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_FriendsLibrary, nullptr, "IsClanOfficialGameGroup", 	Z_Construct_UFunction_USIK_FriendsLibrary_IsClanOfficialGameGroup_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_IsClanOfficialGameGroup_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_IsClanOfficialGameGroup_Statics::SIK_FriendsLibrary_eventIsClanOfficialGameGroup_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_IsClanOfficialGameGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_FriendsLibrary_IsClanOfficialGameGroup_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_IsClanOfficialGameGroup_Statics::SIK_FriendsLibrary_eventIsClanOfficialGameGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_FriendsLibrary_IsClanOfficialGameGroup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_FriendsLibrary_IsClanOfficialGameGroup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_FriendsLibrary::execIsClanOfficialGameGroup)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_SteamIdClan);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_FriendsLibrary::IsClanOfficialGameGroup(Z_Param_SteamIdClan);
	P_NATIVE_END;
}
// ********** End Class USIK_FriendsLibrary Function IsClanOfficialGameGroup ***********************

// ********** Begin Class USIK_FriendsLibrary Function IsClanPublic ********************************
struct Z_Construct_UFunction_USIK_FriendsLibrary_IsClanPublic_Statics
{
	struct SIK_FriendsLibrary_eventIsClanPublic_Parms
	{
		FSIK_SteamId SteamIdClan;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Friends" },
		{ "Comment", "/*\n\x09""Checks if a clan is public.\n\x09@param SteamIdClan - The Steam ID of the clan.\n\x09@return - true if the clan is public, false otherwise.\n\x09*/" },
		{ "DisplayName", "Is Steam Clan Public" },
		{ "Keywords", "IsClanPublic" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsLibrary.h" },
		{ "ToolTip", "Checks if a clan is public.\n@param SteamIdClan - The Steam ID of the clan.\n@return - true if the clan is public, false otherwise." },
	};
#endif // WITH_METADATA

// ********** Begin Function IsClanPublic constinit property declarations **************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIdClan;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsClanPublic constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsClanPublic Property Definitions *************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_IsClanPublic_Statics::NewProp_SteamIdClan = { "SteamIdClan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventIsClanPublic_Parms, SteamIdClan), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
void Z_Construct_UFunction_USIK_FriendsLibrary_IsClanPublic_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_FriendsLibrary_eventIsClanPublic_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_IsClanPublic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_FriendsLibrary_eventIsClanPublic_Parms), &Z_Construct_UFunction_USIK_FriendsLibrary_IsClanPublic_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_FriendsLibrary_IsClanPublic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_IsClanPublic_Statics::NewProp_SteamIdClan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_IsClanPublic_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_IsClanPublic_Statics::PropPointers) < 2048);
// ********** End Function IsClanPublic Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_FriendsLibrary_IsClanPublic_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_FriendsLibrary, nullptr, "IsClanPublic", 	Z_Construct_UFunction_USIK_FriendsLibrary_IsClanPublic_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_IsClanPublic_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_IsClanPublic_Statics::SIK_FriendsLibrary_eventIsClanPublic_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_IsClanPublic_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_FriendsLibrary_IsClanPublic_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_IsClanPublic_Statics::SIK_FriendsLibrary_eventIsClanPublic_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_FriendsLibrary_IsClanPublic()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_FriendsLibrary_IsClanPublic_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_FriendsLibrary::execIsClanPublic)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_SteamIdClan);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_FriendsLibrary::IsClanPublic(Z_Param_SteamIdClan);
	P_NATIVE_END;
}
// ********** End Class USIK_FriendsLibrary Function IsClanPublic **********************************

// ********** Begin Class USIK_FriendsLibrary Function IsFollowing *********************************
struct Z_Construct_UFunction_USIK_FriendsLibrary_IsFollowing_Statics
{
	struct SIK_FriendsLibrary_eventIsFollowing_Parms
	{
		FSIK_SteamId SteamIdFriend;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Friends" },
		{ "Comment", "/*\n\x09""Checks if the user is following another user.\n\x09@param SteamIdFriend - The Steam ID of the friend.\n\x09@return - true if the user is following the friend, false otherwise.\n\x09*/" },
		{ "DisplayName", "Is Steam Following" },
		{ "Keywords", "IsFollowing" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsLibrary.h" },
		{ "ToolTip", "Checks if the user is following another user.\n@param SteamIdFriend - The Steam ID of the friend.\n@return - true if the user is following the friend, false otherwise." },
	};
#endif // WITH_METADATA

// ********** Begin Function IsFollowing constinit property declarations ***************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIdFriend;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsFollowing constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsFollowing Property Definitions **************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_IsFollowing_Statics::NewProp_SteamIdFriend = { "SteamIdFriend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventIsFollowing_Parms, SteamIdFriend), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
void Z_Construct_UFunction_USIK_FriendsLibrary_IsFollowing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_FriendsLibrary_eventIsFollowing_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_IsFollowing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_FriendsLibrary_eventIsFollowing_Parms), &Z_Construct_UFunction_USIK_FriendsLibrary_IsFollowing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_FriendsLibrary_IsFollowing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_IsFollowing_Statics::NewProp_SteamIdFriend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_IsFollowing_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_IsFollowing_Statics::PropPointers) < 2048);
// ********** End Function IsFollowing Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_FriendsLibrary_IsFollowing_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_FriendsLibrary, nullptr, "IsFollowing", 	Z_Construct_UFunction_USIK_FriendsLibrary_IsFollowing_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_IsFollowing_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_IsFollowing_Statics::SIK_FriendsLibrary_eventIsFollowing_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_IsFollowing_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_FriendsLibrary_IsFollowing_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_IsFollowing_Statics::SIK_FriendsLibrary_eventIsFollowing_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_FriendsLibrary_IsFollowing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_FriendsLibrary_IsFollowing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_FriendsLibrary::execIsFollowing)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_SteamIdFriend);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_FriendsLibrary::IsFollowing(Z_Param_SteamIdFriend);
	P_NATIVE_END;
}
// ********** End Class USIK_FriendsLibrary Function IsFollowing ***********************************

// ********** Begin Class USIK_FriendsLibrary Function IsUserInSource ******************************
struct Z_Construct_UFunction_USIK_FriendsLibrary_IsUserInSource_Statics
{
	struct SIK_FriendsLibrary_eventIsUserInSource_Parms
	{
		FSIK_SteamId SteamIdFriend;
		FSIK_SteamId SteamIdSource;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Friends" },
		{ "Comment", "/*\n\x09""Checks if a user is in a specific source.\n\x09@param SteamIdFriend - The Steam ID of the friend.\n\x09@param SteamIdSource - The Steam ID of the source.\n\x09@return - true if the user is in the source, false otherwise.\n\x09*/" },
		{ "DisplayName", "Is Steam User In Source" },
		{ "Keywords", "IsUserInSource" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsLibrary.h" },
		{ "ToolTip", "Checks if a user is in a specific source.\n@param SteamIdFriend - The Steam ID of the friend.\n@param SteamIdSource - The Steam ID of the source.\n@return - true if the user is in the source, false otherwise." },
	};
#endif // WITH_METADATA

// ********** Begin Function IsUserInSource constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIdFriend;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIdSource;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsUserInSource constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsUserInSource Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_IsUserInSource_Statics::NewProp_SteamIdFriend = { "SteamIdFriend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventIsUserInSource_Parms, SteamIdFriend), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_IsUserInSource_Statics::NewProp_SteamIdSource = { "SteamIdSource", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventIsUserInSource_Parms, SteamIdSource), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
void Z_Construct_UFunction_USIK_FriendsLibrary_IsUserInSource_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_FriendsLibrary_eventIsUserInSource_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_IsUserInSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_FriendsLibrary_eventIsUserInSource_Parms), &Z_Construct_UFunction_USIK_FriendsLibrary_IsUserInSource_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_FriendsLibrary_IsUserInSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_IsUserInSource_Statics::NewProp_SteamIdFriend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_IsUserInSource_Statics::NewProp_SteamIdSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_IsUserInSource_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_IsUserInSource_Statics::PropPointers) < 2048);
// ********** End Function IsUserInSource Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_FriendsLibrary_IsUserInSource_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_FriendsLibrary, nullptr, "IsUserInSource", 	Z_Construct_UFunction_USIK_FriendsLibrary_IsUserInSource_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_IsUserInSource_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_IsUserInSource_Statics::SIK_FriendsLibrary_eventIsUserInSource_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_IsUserInSource_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_FriendsLibrary_IsUserInSource_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_IsUserInSource_Statics::SIK_FriendsLibrary_eventIsUserInSource_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_FriendsLibrary_IsUserInSource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_FriendsLibrary_IsUserInSource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_FriendsLibrary::execIsUserInSource)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_SteamIdFriend);
	P_GET_STRUCT(FSIK_SteamId,Z_Param_SteamIdSource);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_FriendsLibrary::IsUserInSource(Z_Param_SteamIdFriend,Z_Param_SteamIdSource);
	P_NATIVE_END;
}
// ********** End Class USIK_FriendsLibrary Function IsUserInSource ********************************

// ********** Begin Class USIK_FriendsLibrary Function LeaveClanChatRoom ***************************
struct Z_Construct_UFunction_USIK_FriendsLibrary_LeaveClanChatRoom_Statics
{
	struct SIK_FriendsLibrary_eventLeaveClanChatRoom_Parms
	{
		FSIK_SteamId SteamIdClanChat;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Friends" },
		{ "Comment", "/*\n\x09Leaves a clan chat room.\n\x09@param SteamIdClanChat - The Steam ID of the clan chat.\n\x09@return - true if successful, false otherwise.\n\x09*/" },
		{ "DisplayName", "Leave Steam Clan Chat Room" },
		{ "Keywords", "LeaveClanChatRoom" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsLibrary.h" },
		{ "ToolTip", "Leaves a clan chat room.\n@param SteamIdClanChat - The Steam ID of the clan chat.\n@return - true if successful, false otherwise." },
	};
#endif // WITH_METADATA

// ********** Begin Function LeaveClanChatRoom constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIdClanChat;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function LeaveClanChatRoom constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function LeaveClanChatRoom Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_LeaveClanChatRoom_Statics::NewProp_SteamIdClanChat = { "SteamIdClanChat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventLeaveClanChatRoom_Parms, SteamIdClanChat), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
void Z_Construct_UFunction_USIK_FriendsLibrary_LeaveClanChatRoom_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_FriendsLibrary_eventLeaveClanChatRoom_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_LeaveClanChatRoom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_FriendsLibrary_eventLeaveClanChatRoom_Parms), &Z_Construct_UFunction_USIK_FriendsLibrary_LeaveClanChatRoom_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_FriendsLibrary_LeaveClanChatRoom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_LeaveClanChatRoom_Statics::NewProp_SteamIdClanChat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_LeaveClanChatRoom_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_LeaveClanChatRoom_Statics::PropPointers) < 2048);
// ********** End Function LeaveClanChatRoom Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_FriendsLibrary_LeaveClanChatRoom_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_FriendsLibrary, nullptr, "LeaveClanChatRoom", 	Z_Construct_UFunction_USIK_FriendsLibrary_LeaveClanChatRoom_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_LeaveClanChatRoom_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_LeaveClanChatRoom_Statics::SIK_FriendsLibrary_eventLeaveClanChatRoom_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_LeaveClanChatRoom_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_FriendsLibrary_LeaveClanChatRoom_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_LeaveClanChatRoom_Statics::SIK_FriendsLibrary_eventLeaveClanChatRoom_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_FriendsLibrary_LeaveClanChatRoom()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_FriendsLibrary_LeaveClanChatRoom_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_FriendsLibrary::execLeaveClanChatRoom)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_SteamIdClanChat);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_FriendsLibrary::LeaveClanChatRoom(Z_Param_SteamIdClanChat);
	P_NATIVE_END;
}
// ********** End Class USIK_FriendsLibrary Function LeaveClanChatRoom *****************************

// ********** Begin Class USIK_FriendsLibrary Function ReplyToFriendMessage ************************
struct Z_Construct_UFunction_USIK_FriendsLibrary_ReplyToFriendMessage_Statics
{
	struct SIK_FriendsLibrary_eventReplyToFriendMessage_Parms
	{
		FSIK_SteamId SteamIdFriend;
		FString Text;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Friends" },
		{ "Comment", "/*\n\x09Replies to a message from a Steam friend.\n\x09@param SteamIdFriend - The Steam ID of the friend.\n\x09@param Text - The text of the reply.\n\x09@return - true if successful, false otherwise.\n\x09*/" },
		{ "DisplayName", "Reply To Steam Friend Message" },
		{ "Keywords", "ReplyToFriendMessage" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsLibrary.h" },
		{ "ToolTip", "Replies to a message from a Steam friend.\n@param SteamIdFriend - The Steam ID of the friend.\n@param Text - The text of the reply.\n@return - true if successful, false otherwise." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ReplyToFriendMessage constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIdFriend;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Text;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ReplyToFriendMessage constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ReplyToFriendMessage Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_ReplyToFriendMessage_Statics::NewProp_SteamIdFriend = { "SteamIdFriend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventReplyToFriendMessage_Parms, SteamIdFriend), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_ReplyToFriendMessage_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventReplyToFriendMessage_Parms, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
void Z_Construct_UFunction_USIK_FriendsLibrary_ReplyToFriendMessage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_FriendsLibrary_eventReplyToFriendMessage_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_ReplyToFriendMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_FriendsLibrary_eventReplyToFriendMessage_Parms), &Z_Construct_UFunction_USIK_FriendsLibrary_ReplyToFriendMessage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_FriendsLibrary_ReplyToFriendMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_ReplyToFriendMessage_Statics::NewProp_SteamIdFriend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_ReplyToFriendMessage_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_ReplyToFriendMessage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_ReplyToFriendMessage_Statics::PropPointers) < 2048);
// ********** End Function ReplyToFriendMessage Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_FriendsLibrary_ReplyToFriendMessage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_FriendsLibrary, nullptr, "ReplyToFriendMessage", 	Z_Construct_UFunction_USIK_FriendsLibrary_ReplyToFriendMessage_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_ReplyToFriendMessage_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_ReplyToFriendMessage_Statics::SIK_FriendsLibrary_eventReplyToFriendMessage_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_ReplyToFriendMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_FriendsLibrary_ReplyToFriendMessage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_ReplyToFriendMessage_Statics::SIK_FriendsLibrary_eventReplyToFriendMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_FriendsLibrary_ReplyToFriendMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_FriendsLibrary_ReplyToFriendMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_FriendsLibrary::execReplyToFriendMessage)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_SteamIdFriend);
	P_GET_PROPERTY(FStrProperty,Z_Param_Text);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_FriendsLibrary::ReplyToFriendMessage(Z_Param_SteamIdFriend,Z_Param_Text);
	P_NATIVE_END;
}
// ********** End Class USIK_FriendsLibrary Function ReplyToFriendMessage **************************

// ********** Begin Class USIK_FriendsLibrary Function RequestFriendRichPresence *******************
struct Z_Construct_UFunction_USIK_FriendsLibrary_RequestFriendRichPresence_Statics
{
	struct SIK_FriendsLibrary_eventRequestFriendRichPresence_Parms
	{
		FSIK_SteamId SteamIdFriend;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Friends" },
		{ "Comment", "/*\n\x09Requests rich presence data from a Steam friend.\n\x09@param SteamIdFriend - The Steam ID of the friend.\n\x09*/" },
		{ "DisplayName", "Request Steam Friend Rich Presence" },
		{ "Keywords", "RequestFriendRichPresence" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsLibrary.h" },
		{ "ToolTip", "Requests rich presence data from a Steam friend.\n@param SteamIdFriend - The Steam ID of the friend." },
	};
#endif // WITH_METADATA

// ********** Begin Function RequestFriendRichPresence constinit property declarations *************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIdFriend;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RequestFriendRichPresence constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RequestFriendRichPresence Property Definitions ************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_RequestFriendRichPresence_Statics::NewProp_SteamIdFriend = { "SteamIdFriend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventRequestFriendRichPresence_Parms, SteamIdFriend), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_FriendsLibrary_RequestFriendRichPresence_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_RequestFriendRichPresence_Statics::NewProp_SteamIdFriend,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_RequestFriendRichPresence_Statics::PropPointers) < 2048);
// ********** End Function RequestFriendRichPresence Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_FriendsLibrary_RequestFriendRichPresence_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_FriendsLibrary, nullptr, "RequestFriendRichPresence", 	Z_Construct_UFunction_USIK_FriendsLibrary_RequestFriendRichPresence_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_RequestFriendRichPresence_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_RequestFriendRichPresence_Statics::SIK_FriendsLibrary_eventRequestFriendRichPresence_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_RequestFriendRichPresence_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_FriendsLibrary_RequestFriendRichPresence_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_RequestFriendRichPresence_Statics::SIK_FriendsLibrary_eventRequestFriendRichPresence_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_FriendsLibrary_RequestFriendRichPresence()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_FriendsLibrary_RequestFriendRichPresence_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_FriendsLibrary::execRequestFriendRichPresence)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_SteamIdFriend);
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_FriendsLibrary::RequestFriendRichPresence(Z_Param_SteamIdFriend);
	P_NATIVE_END;
}
// ********** End Class USIK_FriendsLibrary Function RequestFriendRichPresence *********************

// ********** Begin Class USIK_FriendsLibrary Function RequestUserInfo *****************************
struct Z_Construct_UFunction_USIK_FriendsLibrary_RequestUserInfo_Statics
{
	struct SIK_FriendsLibrary_eventRequestUserInfo_Parms
	{
		FSIK_SteamId SteamIdUser;
		bool bRequireNameOnly;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Friends" },
		{ "Comment", "/*\n\x09Requests information about a Steam user.\n\x09@param SteamIdUser - The Steam ID of the user.\n\x09@param bRequireNameOnly - If true, only the name is required.\n\x09@return - true if successful, false otherwise.\n\x09*/" },
		{ "DisplayName", "Request Steam User Information" },
		{ "Keywords", "RequestUserInfo" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsLibrary.h" },
		{ "ToolTip", "Requests information about a Steam user.\n@param SteamIdUser - The Steam ID of the user.\n@param bRequireNameOnly - If true, only the name is required.\n@return - true if successful, false otherwise." },
	};
#endif // WITH_METADATA

// ********** Begin Function RequestUserInfo constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIdUser;
	static void NewProp_bRequireNameOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequireNameOnly;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RequestUserInfo constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RequestUserInfo Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_RequestUserInfo_Statics::NewProp_SteamIdUser = { "SteamIdUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventRequestUserInfo_Parms, SteamIdUser), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
void Z_Construct_UFunction_USIK_FriendsLibrary_RequestUserInfo_Statics::NewProp_bRequireNameOnly_SetBit(void* Obj)
{
	((SIK_FriendsLibrary_eventRequestUserInfo_Parms*)Obj)->bRequireNameOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_RequestUserInfo_Statics::NewProp_bRequireNameOnly = { "bRequireNameOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_FriendsLibrary_eventRequestUserInfo_Parms), &Z_Construct_UFunction_USIK_FriendsLibrary_RequestUserInfo_Statics::NewProp_bRequireNameOnly_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_FriendsLibrary_RequestUserInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_FriendsLibrary_eventRequestUserInfo_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_RequestUserInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_FriendsLibrary_eventRequestUserInfo_Parms), &Z_Construct_UFunction_USIK_FriendsLibrary_RequestUserInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_FriendsLibrary_RequestUserInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_RequestUserInfo_Statics::NewProp_SteamIdUser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_RequestUserInfo_Statics::NewProp_bRequireNameOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_RequestUserInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_RequestUserInfo_Statics::PropPointers) < 2048);
// ********** End Function RequestUserInfo Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_FriendsLibrary_RequestUserInfo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_FriendsLibrary, nullptr, "RequestUserInfo", 	Z_Construct_UFunction_USIK_FriendsLibrary_RequestUserInfo_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_RequestUserInfo_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_RequestUserInfo_Statics::SIK_FriendsLibrary_eventRequestUserInfo_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_RequestUserInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_FriendsLibrary_RequestUserInfo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_RequestUserInfo_Statics::SIK_FriendsLibrary_eventRequestUserInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_FriendsLibrary_RequestUserInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_FriendsLibrary_RequestUserInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_FriendsLibrary::execRequestUserInfo)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_SteamIdUser);
	P_GET_UBOOL(Z_Param_bRequireNameOnly);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_FriendsLibrary::RequestUserInfo(Z_Param_SteamIdUser,Z_Param_bRequireNameOnly);
	P_NATIVE_END;
}
// ********** End Class USIK_FriendsLibrary Function RequestUserInfo *******************************

// ********** Begin Class USIK_FriendsLibrary Function SendClanChatMessage *************************
struct Z_Construct_UFunction_USIK_FriendsLibrary_SendClanChatMessage_Statics
{
	struct SIK_FriendsLibrary_eventSendClanChatMessage_Parms
	{
		FSIK_SteamId SteamIdClanChat;
		FString Text;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Friends" },
		{ "Comment", "/*\n\x09Sends a message to a Steam clan chat.\n\x09@param SteamIdClanChat - The Steam ID of the clan chat.\n\x09@param Text - The text of the message.\n\x09@return - true if successful, false otherwise.\n\x09*/" },
		{ "DisplayName", "Send Steam Clan Chat Message" },
		{ "Keywords", "SendClanChatMessage" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsLibrary.h" },
		{ "ToolTip", "Sends a message to a Steam clan chat.\n@param SteamIdClanChat - The Steam ID of the clan chat.\n@param Text - The text of the message.\n@return - true if successful, false otherwise." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SendClanChatMessage constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIdClanChat;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Text;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SendClanChatMessage constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SendClanChatMessage Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_SendClanChatMessage_Statics::NewProp_SteamIdClanChat = { "SteamIdClanChat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventSendClanChatMessage_Parms, SteamIdClanChat), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_SendClanChatMessage_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventSendClanChatMessage_Parms, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
void Z_Construct_UFunction_USIK_FriendsLibrary_SendClanChatMessage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_FriendsLibrary_eventSendClanChatMessage_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_SendClanChatMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_FriendsLibrary_eventSendClanChatMessage_Parms), &Z_Construct_UFunction_USIK_FriendsLibrary_SendClanChatMessage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_FriendsLibrary_SendClanChatMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_SendClanChatMessage_Statics::NewProp_SteamIdClanChat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_SendClanChatMessage_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_SendClanChatMessage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_SendClanChatMessage_Statics::PropPointers) < 2048);
// ********** End Function SendClanChatMessage Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_FriendsLibrary_SendClanChatMessage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_FriendsLibrary, nullptr, "SendClanChatMessage", 	Z_Construct_UFunction_USIK_FriendsLibrary_SendClanChatMessage_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_SendClanChatMessage_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_SendClanChatMessage_Statics::SIK_FriendsLibrary_eventSendClanChatMessage_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_SendClanChatMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_FriendsLibrary_SendClanChatMessage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_SendClanChatMessage_Statics::SIK_FriendsLibrary_eventSendClanChatMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_FriendsLibrary_SendClanChatMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_FriendsLibrary_SendClanChatMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_FriendsLibrary::execSendClanChatMessage)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_SteamIdClanChat);
	P_GET_PROPERTY(FStrProperty,Z_Param_Text);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_FriendsLibrary::SendClanChatMessage(Z_Param_SteamIdClanChat,Z_Param_Text);
	P_NATIVE_END;
}
// ********** End Class USIK_FriendsLibrary Function SendClanChatMessage ***************************

// ********** Begin Class USIK_FriendsLibrary Function SetInGameVoiceSpeaking **********************
struct Z_Construct_UFunction_USIK_FriendsLibrary_SetInGameVoiceSpeaking_Statics
{
	struct SIK_FriendsLibrary_eventSetInGameVoiceSpeaking_Parms
	{
		FSIK_SteamId SteamIdFriend;
		bool bSpeaking;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Friends" },
		{ "Comment", "/*\n\x09Sets whether the local player is speaking in-game voice.\n\x09@param SteamIdFriend - The Steam ID of the friend.\n\x09@param bSpeaking - If true, the player is speaking.\n\x09*/" },
		{ "DisplayName", "Set Steam In Game Voice Speaking" },
		{ "Keywords", "SetInGameVoiceSpeaking" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsLibrary.h" },
		{ "ToolTip", "Sets whether the local player is speaking in-game voice.\n@param SteamIdFriend - The Steam ID of the friend.\n@param bSpeaking - If true, the player is speaking." },
	};
#endif // WITH_METADATA

// ********** Begin Function SetInGameVoiceSpeaking constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIdFriend;
	static void NewProp_bSpeaking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSpeaking;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetInGameVoiceSpeaking constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetInGameVoiceSpeaking Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_SetInGameVoiceSpeaking_Statics::NewProp_SteamIdFriend = { "SteamIdFriend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventSetInGameVoiceSpeaking_Parms, SteamIdFriend), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
void Z_Construct_UFunction_USIK_FriendsLibrary_SetInGameVoiceSpeaking_Statics::NewProp_bSpeaking_SetBit(void* Obj)
{
	((SIK_FriendsLibrary_eventSetInGameVoiceSpeaking_Parms*)Obj)->bSpeaking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_SetInGameVoiceSpeaking_Statics::NewProp_bSpeaking = { "bSpeaking", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_FriendsLibrary_eventSetInGameVoiceSpeaking_Parms), &Z_Construct_UFunction_USIK_FriendsLibrary_SetInGameVoiceSpeaking_Statics::NewProp_bSpeaking_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_FriendsLibrary_SetInGameVoiceSpeaking_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_SetInGameVoiceSpeaking_Statics::NewProp_SteamIdFriend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_SetInGameVoiceSpeaking_Statics::NewProp_bSpeaking,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_SetInGameVoiceSpeaking_Statics::PropPointers) < 2048);
// ********** End Function SetInGameVoiceSpeaking Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_FriendsLibrary_SetInGameVoiceSpeaking_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_FriendsLibrary, nullptr, "SetInGameVoiceSpeaking", 	Z_Construct_UFunction_USIK_FriendsLibrary_SetInGameVoiceSpeaking_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_SetInGameVoiceSpeaking_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_SetInGameVoiceSpeaking_Statics::SIK_FriendsLibrary_eventSetInGameVoiceSpeaking_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_SetInGameVoiceSpeaking_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_FriendsLibrary_SetInGameVoiceSpeaking_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_SetInGameVoiceSpeaking_Statics::SIK_FriendsLibrary_eventSetInGameVoiceSpeaking_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_FriendsLibrary_SetInGameVoiceSpeaking()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_FriendsLibrary_SetInGameVoiceSpeaking_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_FriendsLibrary::execSetInGameVoiceSpeaking)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_SteamIdFriend);
	P_GET_UBOOL(Z_Param_bSpeaking);
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_FriendsLibrary::SetInGameVoiceSpeaking(Z_Param_SteamIdFriend,Z_Param_bSpeaking);
	P_NATIVE_END;
}
// ********** End Class USIK_FriendsLibrary Function SetInGameVoiceSpeaking ************************

// ********** Begin Class USIK_FriendsLibrary Function SetListenForFriendMessage *******************
struct Z_Construct_UFunction_USIK_FriendsLibrary_SetListenForFriendMessage_Statics
{
	struct SIK_FriendsLibrary_eventSetListenForFriendMessage_Parms
	{
		bool bInterceptEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Friends" },
		{ "Comment", "/*\n\x09Sets whether to listen for friend messages.\n\x09@param bInterceptEnabled - If true, interception is enabled.\n\x09*/" },
		{ "CPP_Default_bInterceptEnabled", "true" },
		{ "DisplayName", "Set Steam Listen For Friend Message" },
		{ "Keywords", "SetListenForFriendMessage" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsLibrary.h" },
		{ "ToolTip", "Sets whether to listen for friend messages.\n@param bInterceptEnabled - If true, interception is enabled." },
	};
#endif // WITH_METADATA

// ********** Begin Function SetListenForFriendMessage constinit property declarations *************
	static void NewProp_bInterceptEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterceptEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetListenForFriendMessage constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetListenForFriendMessage Property Definitions ************************
void Z_Construct_UFunction_USIK_FriendsLibrary_SetListenForFriendMessage_Statics::NewProp_bInterceptEnabled_SetBit(void* Obj)
{
	((SIK_FriendsLibrary_eventSetListenForFriendMessage_Parms*)Obj)->bInterceptEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_SetListenForFriendMessage_Statics::NewProp_bInterceptEnabled = { "bInterceptEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_FriendsLibrary_eventSetListenForFriendMessage_Parms), &Z_Construct_UFunction_USIK_FriendsLibrary_SetListenForFriendMessage_Statics::NewProp_bInterceptEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_FriendsLibrary_SetListenForFriendMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_SetListenForFriendMessage_Statics::NewProp_bInterceptEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_SetListenForFriendMessage_Statics::PropPointers) < 2048);
// ********** End Function SetListenForFriendMessage Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_FriendsLibrary_SetListenForFriendMessage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_FriendsLibrary, nullptr, "SetListenForFriendMessage", 	Z_Construct_UFunction_USIK_FriendsLibrary_SetListenForFriendMessage_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_SetListenForFriendMessage_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_SetListenForFriendMessage_Statics::SIK_FriendsLibrary_eventSetListenForFriendMessage_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_SetListenForFriendMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_FriendsLibrary_SetListenForFriendMessage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_SetListenForFriendMessage_Statics::SIK_FriendsLibrary_eventSetListenForFriendMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_FriendsLibrary_SetListenForFriendMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_FriendsLibrary_SetListenForFriendMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_FriendsLibrary::execSetListenForFriendMessage)
{
	P_GET_UBOOL(Z_Param_bInterceptEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_FriendsLibrary::SetListenForFriendMessage(Z_Param_bInterceptEnabled);
	P_NATIVE_END;
}
// ********** End Class USIK_FriendsLibrary Function SetListenForFriendMessage *********************

// ********** Begin Class USIK_FriendsLibrary Function SetPlayedWith *******************************
struct Z_Construct_UFunction_USIK_FriendsLibrary_SetPlayedWith_Statics
{
	struct SIK_FriendsLibrary_eventSetPlayedWith_Parms
	{
		FSIK_SteamId SteamIdUser;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Friends" },
		{ "Comment", "/*\n\x09\n\x09*Mark a target user as 'played with'.\n\x09NOTE: The current user must be in game with the other player for the association to work.\n\x09You can view the players you have recently played with here on the Steam community and in the Steam Overlay.\n\x09*/" },
		{ "DisplayName", "Set Steam Played With" },
		{ "Keywords", "SetPlayedWith" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsLibrary.h" },
		{ "ToolTip", "*Mark a target user as 'played with'.\nNOTE: The current user must be in game with the other player for the association to work.\nYou can view the players you have recently played with here on the Steam community and in the Steam Overlay." },
	};
#endif // WITH_METADATA

// ********** Begin Function SetPlayedWith constinit property declarations *************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIdUser;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetPlayedWith constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetPlayedWith Property Definitions ************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_SetPlayedWith_Statics::NewProp_SteamIdUser = { "SteamIdUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventSetPlayedWith_Parms, SteamIdUser), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_FriendsLibrary_SetPlayedWith_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_SetPlayedWith_Statics::NewProp_SteamIdUser,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_SetPlayedWith_Statics::PropPointers) < 2048);
// ********** End Function SetPlayedWith Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_FriendsLibrary_SetPlayedWith_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_FriendsLibrary, nullptr, "SetPlayedWith", 	Z_Construct_UFunction_USIK_FriendsLibrary_SetPlayedWith_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_SetPlayedWith_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_SetPlayedWith_Statics::SIK_FriendsLibrary_eventSetPlayedWith_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_SetPlayedWith_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_FriendsLibrary_SetPlayedWith_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_SetPlayedWith_Statics::SIK_FriendsLibrary_eventSetPlayedWith_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_FriendsLibrary_SetPlayedWith()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_FriendsLibrary_SetPlayedWith_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_FriendsLibrary::execSetPlayedWith)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_SteamIdUser);
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_FriendsLibrary::SetPlayedWith(Z_Param_SteamIdUser);
	P_NATIVE_END;
}
// ********** End Class USIK_FriendsLibrary Function SetPlayedWith *********************************

// ********** Begin Class USIK_FriendsLibrary Function SetRichPresence *****************************
struct Z_Construct_UFunction_USIK_FriendsLibrary_SetRichPresence_Statics
{
	struct SIK_FriendsLibrary_eventSetRichPresence_Parms
	{
		FString Key;
		FString Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Friends" },
		{ "Comment", "/*\n\x09*\n\x09Sets a Rich Presence key/value for the current user that is automatically shared to all friends playing the same game.\n\x09""Each user can have up to 20 keys set as defined by k_cchMaxRichPresenceKeys.\n\x09There are two special keys used for viewing/joining games:\n\x09\"status\" - A UTF-8 string that will show up in the 'view game info' dialog in the Steam friends list.\n\x09\"connect\" - A UTF-8 string that contains the command-line for how a friend can connect to a game. This enables the 'join game' button in the 'view game info' dialog, in the steam friends list right click menu, and on the players Steam community profile. Be sure your app implements ISteamApps::GetLaunchCommandLine so you can disable the popup warning when launched via a command line.\n\x09There are three additional special keys used by the new Steam Chat:\n\x09\"steam_display\" - Names a rich presence localization token that will be displayed in the viewing user's selected language in the Steam client UI. See Rich Presence Localization for more info, including a link to a page for testing this rich presence data. If steam_display is not set to a valid localization tag, then rich presence will not be displayed in the Steam client.\n\x09\"steam_player_group\" - When set, indicates to the Steam client that the player is a member of a particular group. Players in the same group may be organized together in various places in the Steam UI. This string could identify a party, a server, or whatever grouping is relevant for your game. The string itself is not displayed to users.\n\x09\"steam_player_group_size\" - When set, indicates the total number of players in the steam_player_group. The Steam client may use this number to display additional information about a group when all of the members are not part of a user's friends list. (For example, \"Bob, Pete, and 4 more\".)\n\x09You can clear all of the keys for the current user with ClearRichPresence.\n\x09*/" },
		{ "DisplayName", "Set Steam Rich Presence" },
		{ "Keywords", "SetRichPresence" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsLibrary.h" },
		{ "ToolTip", "Sets a Rich Presence key/value for the current user that is automatically shared to all friends playing the same game.\nEach user can have up to 20 keys set as defined by k_cchMaxRichPresenceKeys.\nThere are two special keys used for viewing/joining games:\n\"status\" - A UTF-8 string that will show up in the 'view game info' dialog in the Steam friends list.\n\"connect\" - A UTF-8 string that contains the command-line for how a friend can connect to a game. This enables the 'join game' button in the 'view game info' dialog, in the steam friends list right click menu, and on the players Steam community profile. Be sure your app implements ISteamApps::GetLaunchCommandLine so you can disable the popup warning when launched via a command line.\nThere are three additional special keys used by the new Steam Chat:\n\"steam_display\" - Names a rich presence localization token that will be displayed in the viewing user's selected language in the Steam client UI. See Rich Presence Localization for more info, including a link to a page for testing this rich presence data. If steam_display is not set to a valid localization tag, then rich presence will not be displayed in the Steam client.\n\"steam_player_group\" - When set, indicates to the Steam client that the player is a member of a particular group. Players in the same group may be organized together in various places in the Steam UI. This string could identify a party, a server, or whatever grouping is relevant for your game. The string itself is not displayed to users.\n\"steam_player_group_size\" - When set, indicates the total number of players in the steam_player_group. The Steam client may use this number to display additional information about a group when all of the members are not part of a user's friends list. (For example, \"Bob, Pete, and 4 more\".)\nYou can clear all of the keys for the current user with ClearRichPresence." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetRichPresence constinit property declarations ***********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetRichPresence constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetRichPresence Property Definitions **********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_SetRichPresence_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventSetRichPresence_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_SetRichPresence_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FriendsLibrary_eventSetRichPresence_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
void Z_Construct_UFunction_USIK_FriendsLibrary_SetRichPresence_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_FriendsLibrary_eventSetRichPresence_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_FriendsLibrary_SetRichPresence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_FriendsLibrary_eventSetRichPresence_Parms), &Z_Construct_UFunction_USIK_FriendsLibrary_SetRichPresence_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_FriendsLibrary_SetRichPresence_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_SetRichPresence_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_SetRichPresence_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FriendsLibrary_SetRichPresence_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_SetRichPresence_Statics::PropPointers) < 2048);
// ********** End Function SetRichPresence Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_FriendsLibrary_SetRichPresence_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_FriendsLibrary, nullptr, "SetRichPresence", 	Z_Construct_UFunction_USIK_FriendsLibrary_SetRichPresence_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_SetRichPresence_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_SetRichPresence_Statics::SIK_FriendsLibrary_eventSetRichPresence_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FriendsLibrary_SetRichPresence_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_FriendsLibrary_SetRichPresence_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_FriendsLibrary_SetRichPresence_Statics::SIK_FriendsLibrary_eventSetRichPresence_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_FriendsLibrary_SetRichPresence()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_FriendsLibrary_SetRichPresence_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_FriendsLibrary::execSetRichPresence)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_FriendsLibrary::SetRichPresence(Z_Param_Key,Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class USIK_FriendsLibrary Function SetRichPresence *******************************

// ********** Begin Class USIK_FriendsLibrary ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_FriendsLibrary;
UClass* USIK_FriendsLibrary::GetPrivateStaticClass()
{
	using TClass = USIK_FriendsLibrary;
	if (!Z_Registration_Info_UClass_USIK_FriendsLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_FriendsLibrary"),
			Z_Registration_Info_UClass_USIK_FriendsLibrary.InnerSingleton,
			StaticRegisterNativesUSIK_FriendsLibrary,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_USIK_FriendsLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_FriendsLibrary_NoRegister()
{
	return USIK_FriendsLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_FriendsLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Functions/Friends/SIK_FriendsLibrary.h" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_FriendsLibrary constinit property declarations **********************
// ********** End Class USIK_FriendsLibrary constinit property declarations ************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ActivateGameOverlay"), .Pointer = &USIK_FriendsLibrary::execActivateGameOverlay },
		{ .NameUTF8 = UTF8TEXT("ActivateGameOverlayInviteDialog"), .Pointer = &USIK_FriendsLibrary::execActivateGameOverlayInviteDialog },
		{ .NameUTF8 = UTF8TEXT("ActivateGameOverlayToStore"), .Pointer = &USIK_FriendsLibrary::execActivateGameOverlayToStore },
		{ .NameUTF8 = UTF8TEXT("ActivateGameOverlayToUser"), .Pointer = &USIK_FriendsLibrary::execActivateGameOverlayToUser },
		{ .NameUTF8 = UTF8TEXT("ActivateGameOverlayToWebPage"), .Pointer = &USIK_FriendsLibrary::execActivateGameOverlayToWebPage },
		{ .NameUTF8 = UTF8TEXT("BHasEquippedProfileItem"), .Pointer = &USIK_FriendsLibrary::execBHasEquippedProfileItem },
		{ .NameUTF8 = UTF8TEXT("ClearRichPresence"), .Pointer = &USIK_FriendsLibrary::execClearRichPresence },
		{ .NameUTF8 = UTF8TEXT("CloseClanChatWindowInSteam"), .Pointer = &USIK_FriendsLibrary::execCloseClanChatWindowInSteam },
		{ .NameUTF8 = UTF8TEXT("GetChatMemberByIndex"), .Pointer = &USIK_FriendsLibrary::execGetChatMemberByIndex },
		{ .NameUTF8 = UTF8TEXT("GetClanActivityCounts"), .Pointer = &USIK_FriendsLibrary::execGetClanActivityCounts },
		{ .NameUTF8 = UTF8TEXT("GetClanByIndex"), .Pointer = &USIK_FriendsLibrary::execGetClanByIndex },
		{ .NameUTF8 = UTF8TEXT("GetClanChatMemberCount"), .Pointer = &USIK_FriendsLibrary::execGetClanChatMemberCount },
		{ .NameUTF8 = UTF8TEXT("GetClanChatMessage"), .Pointer = &USIK_FriendsLibrary::execGetClanChatMessage },
		{ .NameUTF8 = UTF8TEXT("GetClanCount"), .Pointer = &USIK_FriendsLibrary::execGetClanCount },
		{ .NameUTF8 = UTF8TEXT("GetClanName"), .Pointer = &USIK_FriendsLibrary::execGetClanName },
		{ .NameUTF8 = UTF8TEXT("GetClanOfficerByIndex"), .Pointer = &USIK_FriendsLibrary::execGetClanOfficerByIndex },
		{ .NameUTF8 = UTF8TEXT("GetClanOfficerCount"), .Pointer = &USIK_FriendsLibrary::execGetClanOfficerCount },
		{ .NameUTF8 = UTF8TEXT("GetClanOwner"), .Pointer = &USIK_FriendsLibrary::execGetClanOwner },
		{ .NameUTF8 = UTF8TEXT("GetClanTag"), .Pointer = &USIK_FriendsLibrary::execGetClanTag },
		{ .NameUTF8 = UTF8TEXT("GetCoplayFriend"), .Pointer = &USIK_FriendsLibrary::execGetCoplayFriend },
		{ .NameUTF8 = UTF8TEXT("GetCoplayFriendCount"), .Pointer = &USIK_FriendsLibrary::execGetCoplayFriendCount },
		{ .NameUTF8 = UTF8TEXT("GetFriendByIndex"), .Pointer = &USIK_FriendsLibrary::execGetFriendByIndex },
		{ .NameUTF8 = UTF8TEXT("GetFriendCoplayGame"), .Pointer = &USIK_FriendsLibrary::execGetFriendCoplayGame },
		{ .NameUTF8 = UTF8TEXT("GetFriendCoplayTime"), .Pointer = &USIK_FriendsLibrary::execGetFriendCoplayTime },
		{ .NameUTF8 = UTF8TEXT("GetFriendCount"), .Pointer = &USIK_FriendsLibrary::execGetFriendCount },
		{ .NameUTF8 = UTF8TEXT("GetFriendCountFromSource"), .Pointer = &USIK_FriendsLibrary::execGetFriendCountFromSource },
		{ .NameUTF8 = UTF8TEXT("GetFriendFromSourceByIndex"), .Pointer = &USIK_FriendsLibrary::execGetFriendFromSourceByIndex },
		{ .NameUTF8 = UTF8TEXT("GetFriendGamePlayed"), .Pointer = &USIK_FriendsLibrary::execGetFriendGamePlayed },
		{ .NameUTF8 = UTF8TEXT("GetFriendGroupCount"), .Pointer = &USIK_FriendsLibrary::execGetFriendGroupCount },
		{ .NameUTF8 = UTF8TEXT("GetFriendGroupIDByIndex"), .Pointer = &USIK_FriendsLibrary::execGetFriendGroupIDByIndex },
		{ .NameUTF8 = UTF8TEXT("GetFriendGroupMembersCount"), .Pointer = &USIK_FriendsLibrary::execGetFriendGroupMembersCount },
		{ .NameUTF8 = UTF8TEXT("GetFriendMessage"), .Pointer = &USIK_FriendsLibrary::execGetFriendMessage },
		{ .NameUTF8 = UTF8TEXT("GetFriendPersonaName"), .Pointer = &USIK_FriendsLibrary::execGetFriendPersonaName },
		{ .NameUTF8 = UTF8TEXT("GetFriendPersonaNameHistory"), .Pointer = &USIK_FriendsLibrary::execGetFriendPersonaNameHistory },
		{ .NameUTF8 = UTF8TEXT("GetFriendPersonaState"), .Pointer = &USIK_FriendsLibrary::execGetFriendPersonaState },
		{ .NameUTF8 = UTF8TEXT("GetFriendRelationship"), .Pointer = &USIK_FriendsLibrary::execGetFriendRelationship },
		{ .NameUTF8 = UTF8TEXT("GetFriendRichPresence"), .Pointer = &USIK_FriendsLibrary::execGetFriendRichPresence },
		{ .NameUTF8 = UTF8TEXT("GetFriendRichPresenceKeyByIndex"), .Pointer = &USIK_FriendsLibrary::execGetFriendRichPresenceKeyByIndex },
		{ .NameUTF8 = UTF8TEXT("GetFriendRichPresenceKeyCount"), .Pointer = &USIK_FriendsLibrary::execGetFriendRichPresenceKeyCount },
		{ .NameUTF8 = UTF8TEXT("GetFriendsGroupMembersList"), .Pointer = &USIK_FriendsLibrary::execGetFriendsGroupMembersList },
		{ .NameUTF8 = UTF8TEXT("GetFriendsGroupName"), .Pointer = &USIK_FriendsLibrary::execGetFriendsGroupName },
		{ .NameUTF8 = UTF8TEXT("GetFriendSteamLevel"), .Pointer = &USIK_FriendsLibrary::execGetFriendSteamLevel },
		{ .NameUTF8 = UTF8TEXT("GetLargeFriendAvatar"), .Pointer = &USIK_FriendsLibrary::execGetLargeFriendAvatar },
		{ .NameUTF8 = UTF8TEXT("GetMediumFriendAvatar"), .Pointer = &USIK_FriendsLibrary::execGetMediumFriendAvatar },
		{ .NameUTF8 = UTF8TEXT("GetPersonaName"), .Pointer = &USIK_FriendsLibrary::execGetPersonaName },
		{ .NameUTF8 = UTF8TEXT("GetPersonaState"), .Pointer = &USIK_FriendsLibrary::execGetPersonaState },
		{ .NameUTF8 = UTF8TEXT("GetPlayerNickname"), .Pointer = &USIK_FriendsLibrary::execGetPlayerNickname },
		{ .NameUTF8 = UTF8TEXT("GetProfileItemPropertyString"), .Pointer = &USIK_FriendsLibrary::execGetProfileItemPropertyString },
		{ .NameUTF8 = UTF8TEXT("GetProfileItemPropertyUint"), .Pointer = &USIK_FriendsLibrary::execGetProfileItemPropertyUint },
		{ .NameUTF8 = UTF8TEXT("GetSmallFriendAvatar"), .Pointer = &USIK_FriendsLibrary::execGetSmallFriendAvatar },
		{ .NameUTF8 = UTF8TEXT("GetUserRestrictions"), .Pointer = &USIK_FriendsLibrary::execGetUserRestrictions },
		{ .NameUTF8 = UTF8TEXT("HasFriend"), .Pointer = &USIK_FriendsLibrary::execHasFriend },
		{ .NameUTF8 = UTF8TEXT("InviteUserToGame"), .Pointer = &USIK_FriendsLibrary::execInviteUserToGame },
		{ .NameUTF8 = UTF8TEXT("IsClanChatAdmin"), .Pointer = &USIK_FriendsLibrary::execIsClanChatAdmin },
		{ .NameUTF8 = UTF8TEXT("IsClanChatWindowOpenInSteam"), .Pointer = &USIK_FriendsLibrary::execIsClanChatWindowOpenInSteam },
		{ .NameUTF8 = UTF8TEXT("IsClanOfficialGameGroup"), .Pointer = &USIK_FriendsLibrary::execIsClanOfficialGameGroup },
		{ .NameUTF8 = UTF8TEXT("IsClanPublic"), .Pointer = &USIK_FriendsLibrary::execIsClanPublic },
		{ .NameUTF8 = UTF8TEXT("IsFollowing"), .Pointer = &USIK_FriendsLibrary::execIsFollowing },
		{ .NameUTF8 = UTF8TEXT("IsUserInSource"), .Pointer = &USIK_FriendsLibrary::execIsUserInSource },
		{ .NameUTF8 = UTF8TEXT("LeaveClanChatRoom"), .Pointer = &USIK_FriendsLibrary::execLeaveClanChatRoom },
		{ .NameUTF8 = UTF8TEXT("ReplyToFriendMessage"), .Pointer = &USIK_FriendsLibrary::execReplyToFriendMessage },
		{ .NameUTF8 = UTF8TEXT("RequestFriendRichPresence"), .Pointer = &USIK_FriendsLibrary::execRequestFriendRichPresence },
		{ .NameUTF8 = UTF8TEXT("RequestUserInfo"), .Pointer = &USIK_FriendsLibrary::execRequestUserInfo },
		{ .NameUTF8 = UTF8TEXT("SendClanChatMessage"), .Pointer = &USIK_FriendsLibrary::execSendClanChatMessage },
		{ .NameUTF8 = UTF8TEXT("SetInGameVoiceSpeaking"), .Pointer = &USIK_FriendsLibrary::execSetInGameVoiceSpeaking },
		{ .NameUTF8 = UTF8TEXT("SetListenForFriendMessage"), .Pointer = &USIK_FriendsLibrary::execSetListenForFriendMessage },
		{ .NameUTF8 = UTF8TEXT("SetPlayedWith"), .Pointer = &USIK_FriendsLibrary::execSetPlayedWith },
		{ .NameUTF8 = UTF8TEXT("SetRichPresence"), .Pointer = &USIK_FriendsLibrary::execSetRichPresence },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_FriendsLibrary_ActivateGameOverlay, "ActivateGameOverlay" }, // 3926332342
		{ &Z_Construct_UFunction_USIK_FriendsLibrary_ActivateGameOverlayInviteDialog, "ActivateGameOverlayInviteDialog" }, // 4283806087
		{ &Z_Construct_UFunction_USIK_FriendsLibrary_ActivateGameOverlayToStore, "ActivateGameOverlayToStore" }, // 2467366633
		{ &Z_Construct_UFunction_USIK_FriendsLibrary_ActivateGameOverlayToUser, "ActivateGameOverlayToUser" }, // 1042715107
		{ &Z_Construct_UFunction_USIK_FriendsLibrary_ActivateGameOverlayToWebPage, "ActivateGameOverlayToWebPage" }, // 269156602
		{ &Z_Construct_UFunction_USIK_FriendsLibrary_BHasEquippedProfileItem, "BHasEquippedProfileItem" }, // 1165911348
		{ &Z_Construct_UFunction_USIK_FriendsLibrary_ClearRichPresence, "ClearRichPresence" }, // 3119232623
		{ &Z_Construct_UFunction_USIK_FriendsLibrary_CloseClanChatWindowInSteam, "CloseClanChatWindowInSteam" }, // 2822949960
		{ &Z_Construct_UFunction_USIK_FriendsLibrary_GetChatMemberByIndex, "GetChatMemberByIndex" }, // 1315372534
		{ &Z_Construct_UFunction_USIK_FriendsLibrary_GetClanActivityCounts, "GetClanActivityCounts" }, // 418655405
		{ &Z_Construct_UFunction_USIK_FriendsLibrary_GetClanByIndex, "GetClanByIndex" }, // 1992008312
		{ &Z_Construct_UFunction_USIK_FriendsLibrary_GetClanChatMemberCount, "GetClanChatMemberCount" }, // 23852935
		{ &Z_Construct_UFunction_USIK_FriendsLibrary_GetClanChatMessage, "GetClanChatMessage" }, // 1896525948
		{ &Z_Construct_UFunction_USIK_FriendsLibrary_GetClanCount, "GetClanCount" }, // 3106638758
		{ &Z_Construct_UFunction_USIK_FriendsLibrary_GetClanName, "GetClanName" }, // 1501057095
		{ &Z_Construct_UFunction_USIK_FriendsLibrary_GetClanOfficerByIndex, "GetClanOfficerByIndex" }, // 1624357488
		{ &Z_Construct_UFunction_USIK_FriendsLibrary_GetClanOfficerCount, "GetClanOfficerCount" }, // 3126961631
		{ &Z_Construct_UFunction_USIK_FriendsLibrary_GetClanOwner, "GetClanOwner" }, // 3653133951
		{ &Z_Construct_UFunction_USIK_FriendsLibrary_GetClanTag, "GetClanTag" }, // 2048598610
		{ &Z_Construct_UFunction_USIK_FriendsLibrary_GetCoplayFriend, "GetCoplayFriend" }, // 2686373517
		{ &Z_Construct_UFunction_USIK_FriendsLibrary_GetCoplayFriendCount, "GetCoplayFriendCount" }, // 3503414628
		{ &Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendByIndex, "GetFriendByIndex" }, // 612587920
		{ &Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendCoplayGame, "GetFriendCoplayGame" }, // 3416393811
		{ &Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendCoplayTime, "GetFriendCoplayTime" }, // 38918527
		{ &Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendCount, "GetFriendCount" }, // 3656239504
		{ &Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendCountFromSource, "GetFriendCountFromSource" }, // 2359899421
		{ &Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendFromSourceByIndex, "GetFriendFromSourceByIndex" }, // 3651533155
		{ &Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendGamePlayed, "GetFriendGamePlayed" }, // 298780934
		{ &Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendGroupCount, "GetFriendGroupCount" }, // 4276701647
		{ &Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendGroupIDByIndex, "GetFriendGroupIDByIndex" }, // 2942594585
		{ &Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendGroupMembersCount, "GetFriendGroupMembersCount" }, // 3415006559
		{ &Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendMessage, "GetFriendMessage" }, // 1711217373
		{ &Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendPersonaName, "GetFriendPersonaName" }, // 525334664
		{ &Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendPersonaNameHistory, "GetFriendPersonaNameHistory" }, // 217265764
		{ &Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendPersonaState, "GetFriendPersonaState" }, // 4292299398
		{ &Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendRelationship, "GetFriendRelationship" }, // 1688740527
		{ &Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendRichPresence, "GetFriendRichPresence" }, // 1249012855
		{ &Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendRichPresenceKeyByIndex, "GetFriendRichPresenceKeyByIndex" }, // 603457314
		{ &Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendRichPresenceKeyCount, "GetFriendRichPresenceKeyCount" }, // 3274344758
		{ &Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendsGroupMembersList, "GetFriendsGroupMembersList" }, // 3457859987
		{ &Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendsGroupName, "GetFriendsGroupName" }, // 2313406717
		{ &Z_Construct_UFunction_USIK_FriendsLibrary_GetFriendSteamLevel, "GetFriendSteamLevel" }, // 3735610685
		{ &Z_Construct_UFunction_USIK_FriendsLibrary_GetLargeFriendAvatar, "GetLargeFriendAvatar" }, // 3298100760
		{ &Z_Construct_UFunction_USIK_FriendsLibrary_GetMediumFriendAvatar, "GetMediumFriendAvatar" }, // 3961907598
		{ &Z_Construct_UFunction_USIK_FriendsLibrary_GetPersonaName, "GetPersonaName" }, // 3336048866
		{ &Z_Construct_UFunction_USIK_FriendsLibrary_GetPersonaState, "GetPersonaState" }, // 2214092733
		{ &Z_Construct_UFunction_USIK_FriendsLibrary_GetPlayerNickname, "GetPlayerNickname" }, // 1521426821
		{ &Z_Construct_UFunction_USIK_FriendsLibrary_GetProfileItemPropertyString, "GetProfileItemPropertyString" }, // 3958672954
		{ &Z_Construct_UFunction_USIK_FriendsLibrary_GetProfileItemPropertyUint, "GetProfileItemPropertyUint" }, // 2705059004
		{ &Z_Construct_UFunction_USIK_FriendsLibrary_GetSmallFriendAvatar, "GetSmallFriendAvatar" }, // 4259778014
		{ &Z_Construct_UFunction_USIK_FriendsLibrary_GetUserRestrictions, "GetUserRestrictions" }, // 2633357795
		{ &Z_Construct_UFunction_USIK_FriendsLibrary_HasFriend, "HasFriend" }, // 1410069064
		{ &Z_Construct_UFunction_USIK_FriendsLibrary_InviteUserToGame, "InviteUserToGame" }, // 366818348
		{ &Z_Construct_UFunction_USIK_FriendsLibrary_IsClanChatAdmin, "IsClanChatAdmin" }, // 3803053993
		{ &Z_Construct_UFunction_USIK_FriendsLibrary_IsClanChatWindowOpenInSteam, "IsClanChatWindowOpenInSteam" }, // 209407913
		{ &Z_Construct_UFunction_USIK_FriendsLibrary_IsClanOfficialGameGroup, "IsClanOfficialGameGroup" }, // 2483609895
		{ &Z_Construct_UFunction_USIK_FriendsLibrary_IsClanPublic, "IsClanPublic" }, // 459679649
		{ &Z_Construct_UFunction_USIK_FriendsLibrary_IsFollowing, "IsFollowing" }, // 4180944577
		{ &Z_Construct_UFunction_USIK_FriendsLibrary_IsUserInSource, "IsUserInSource" }, // 2551676876
		{ &Z_Construct_UFunction_USIK_FriendsLibrary_LeaveClanChatRoom, "LeaveClanChatRoom" }, // 827142768
		{ &Z_Construct_UFunction_USIK_FriendsLibrary_ReplyToFriendMessage, "ReplyToFriendMessage" }, // 343270770
		{ &Z_Construct_UFunction_USIK_FriendsLibrary_RequestFriendRichPresence, "RequestFriendRichPresence" }, // 1392777777
		{ &Z_Construct_UFunction_USIK_FriendsLibrary_RequestUserInfo, "RequestUserInfo" }, // 2428021442
		{ &Z_Construct_UFunction_USIK_FriendsLibrary_SendClanChatMessage, "SendClanChatMessage" }, // 1734969183
		{ &Z_Construct_UFunction_USIK_FriendsLibrary_SetInGameVoiceSpeaking, "SetInGameVoiceSpeaking" }, // 682045472
		{ &Z_Construct_UFunction_USIK_FriendsLibrary_SetListenForFriendMessage, "SetListenForFriendMessage" }, // 496095851
		{ &Z_Construct_UFunction_USIK_FriendsLibrary_SetPlayedWith, "SetPlayedWith" }, // 1533864827
		{ &Z_Construct_UFunction_USIK_FriendsLibrary_SetRichPresence, "SetRichPresence" }, // 806495420
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_FriendsLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_FriendsLibrary_Statics
UObject* (*const Z_Construct_UClass_USIK_FriendsLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_FriendsLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_FriendsLibrary_Statics::ClassParams = {
	&USIK_FriendsLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_FriendsLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_FriendsLibrary_Statics::Class_MetaDataParams)
};
void USIK_FriendsLibrary::StaticRegisterNativesUSIK_FriendsLibrary()
{
	UClass* Class = USIK_FriendsLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_FriendsLibrary_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_FriendsLibrary()
{
	if (!Z_Registration_Info_UClass_USIK_FriendsLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_FriendsLibrary.OuterSingleton, Z_Construct_UClass_USIK_FriendsLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_FriendsLibrary.OuterSingleton;
}
USIK_FriendsLibrary::USIK_FriendsLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_FriendsLibrary);
USIK_FriendsLibrary::~USIK_FriendsLibrary() {}
// ********** End Class USIK_FriendsLibrary ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_FriendsLibrary_h__Script_SteamIntegrationKit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESIK_PersonaState_StaticEnum, TEXT("ESIK_PersonaState"), &Z_Registration_Info_UEnum_ESIK_PersonaState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2697633552U) },
		{ ESIK_FriendRelationship_StaticEnum, TEXT("ESIK_FriendRelationship"), &Z_Registration_Info_UEnum_ESIK_FriendRelationship, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4158209204U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSIK_FriendGameInfo::StaticStruct, Z_Construct_UScriptStruct_FSIK_FriendGameInfo_Statics::NewStructOps, TEXT("SIK_FriendGameInfo"),&Z_Registration_Info_UScriptStruct_FSIK_FriendGameInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSIK_FriendGameInfo), 1453229092U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_FriendsLibrary, USIK_FriendsLibrary::StaticClass, TEXT("USIK_FriendsLibrary"), &Z_Registration_Info_UClass_USIK_FriendsLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_FriendsLibrary), 964829649U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_FriendsLibrary_h__Script_SteamIntegrationKit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_FriendsLibrary_h__Script_SteamIntegrationKit_2916061887{
	TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_FriendsLibrary_h__Script_SteamIntegrationKit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_FriendsLibrary_h__Script_SteamIntegrationKit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_FriendsLibrary_h__Script_SteamIntegrationKit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_FriendsLibrary_h__Script_SteamIntegrationKit_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_FriendsLibrary_h__Script_SteamIntegrationKit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_FriendsLibrary_h__Script_SteamIntegrationKit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
