// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SIK_SharedFile.h"
#include "FindSessionsCallbackProxy.h"
#include "GameFramework/OnlineReplStructs.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_SharedFile() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
ONLINESUBSYSTEMUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintSessionResult();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_SharedFile();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_SharedFile_NoRegister();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_AudioPlayback_Status();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_BeginAuthSessionResult();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_ChatRoomEnterResponse();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_DenyReason();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_ECommunityProfileItemProperty();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_ECommunityProfileItemType();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_EFloatingGamepadTextInputMode();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_EGamepadTextInputLineMode();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_EGamepadTextInputMode();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_FriendFlags();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_InputActionOrigin();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_InputSourceMode();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_ItemPreviewType();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_ItemState();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_ItemStatistic();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_ItemUpdateStatus();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_LobbyChatEntryType();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_LobbyChatMemberStateChange();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_LobbyComparisonType();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_LobbyDistanceFilter();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_LobbyType();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_MatchMakingServerResponse();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_NotificationPosition();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_P2PSend();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_P2PSessionError();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_RemoteStorageFilePathType();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_RemoteStorageLocalFileChange();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_RemoteStoragePlatform();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_RemoteStoragePublishedFileVisibility();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_ScePadTriggerEffectMode();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamControllerLEDFlag();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamControllerPad();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamInputType();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamIPType();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamItemFlags();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamNetworkingAvailability();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamNetworkingIdentityType();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamPartyBeaconLocationType();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_TextFilteringContext();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_UGCContentDescriptorID();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_UGCMatchingUGCType();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_UGCQuery();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_UGCReadAction();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_Universe();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_UserUGCList();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_UserUGCListSortOrder();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_VoiceResult();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_VRScreenshotType();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_WorkshopEnumerationType();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_WorkshopFileType();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_XboxOrigin();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIKAttributeType();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESMatchType();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_AccountID();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_AppId();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_AuthTicket();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_DepotId();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_FoundServers();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_FriendsGroupID();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_GameID();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_InputActionSetHandle();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_InputAnalogActionData();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_InputAnalogActionHandle();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_InputDigitalActionData();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_InputDigitalActionHandle();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_InputHandle();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_InputMotionData();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_P2PSessionState();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_PartyBeaconID();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_PublishedFileId();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_PublishedFileUpdateHandle();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectCommand();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectCommandData();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectFeedbackParam();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectMultiplePositionFeedbackParam();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectMultiplePositionVibrationParam();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectOffParam();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectSlopeFeedbackParam();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectVibrationParam();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectWeaponParam();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_ScreenshotHandle();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_ServerNetAddress();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_SessionFindSettings();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_SteamId();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_SteamInventoryResult();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_SteamInventoryUpdateHandle();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_SteamIPAddress();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_SteamItemDef();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_SteamItemDetails();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_SteamItemInstanceID();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_SteamLeaderboard();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_SteamLeaderboardEntries();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_SteamNetworkingIdentity();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_SteamNetworkingIPAddr();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_SteamNetworkingPOPID();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_SteamNetworkPingLocation();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_SteamPartyBeaconLocation();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_SteamUGCDetails();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_UGCFileWriteStreamHandle();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_UGCHandle();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_UGCQueryHandle();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_UGCUpdateHandle();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIKAttribute();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSSessionFindStruct();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ESIK_BeginAuthSessionResult ***********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESIK_BeginAuthSessionResult;
static UEnum* ESIK_BeginAuthSessionResult_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESIK_BeginAuthSessionResult.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESIK_BeginAuthSessionResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamIntegrationKit_ESIK_BeginAuthSessionResult, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("ESIK_BeginAuthSessionResult"));
	}
	return Z_Registration_Info_UEnum_ESIK_BeginAuthSessionResult.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<ESIK_BeginAuthSessionResult>()
{
	return ESIK_BeginAuthSessionResult_StaticEnum();
}
struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_BeginAuthSessionResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BeginAuthSessionResultDuplicateRequest.DisplayName", "Duplicate Request" },
		{ "BeginAuthSessionResultDuplicateRequest.Name", "BeginAuthSessionResultDuplicateRequest" },
		{ "BeginAuthSessionResultExpiredTicket.DisplayName", "Expired Ticket" },
		{ "BeginAuthSessionResultExpiredTicket.Name", "BeginAuthSessionResultExpiredTicket" },
		{ "BeginAuthSessionResultFailure.DisplayName", "Failure" },
		{ "BeginAuthSessionResultFailure.Name", "BeginAuthSessionResultFailure" },
		{ "BeginAuthSessionResultGameMismatch.DisplayName", "Game Mismatch" },
		{ "BeginAuthSessionResultGameMismatch.Name", "BeginAuthSessionResultGameMismatch" },
		{ "BeginAuthSessionResultInvalidTicket.DisplayName", "Invalid Ticket" },
		{ "BeginAuthSessionResultInvalidTicket.Name", "BeginAuthSessionResultInvalidTicket" },
		{ "BeginAuthSessionResultInvalidVersion.DisplayName", "Invalid Version" },
		{ "BeginAuthSessionResultInvalidVersion.Name", "BeginAuthSessionResultInvalidVersion" },
		{ "BeginAuthSessionResultOK.DisplayName", "OK" },
		{ "BeginAuthSessionResultOK.Name", "BeginAuthSessionResultOK" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "BeginAuthSessionResultOK", (int64)BeginAuthSessionResultOK },
		{ "BeginAuthSessionResultInvalidTicket", (int64)BeginAuthSessionResultInvalidTicket },
		{ "BeginAuthSessionResultDuplicateRequest", (int64)BeginAuthSessionResultDuplicateRequest },
		{ "BeginAuthSessionResultInvalidVersion", (int64)BeginAuthSessionResultInvalidVersion },
		{ "BeginAuthSessionResultGameMismatch", (int64)BeginAuthSessionResultGameMismatch },
		{ "BeginAuthSessionResultExpiredTicket", (int64)BeginAuthSessionResultExpiredTicket },
		{ "BeginAuthSessionResultFailure", (int64)BeginAuthSessionResultFailure },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_BeginAuthSessionResult_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamIntegrationKit_ESIK_BeginAuthSessionResult_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	"ESIK_BeginAuthSessionResult",
	"ESIK_BeginAuthSessionResult",
	Z_Construct_UEnum_SteamIntegrationKit_ESIK_BeginAuthSessionResult_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_BeginAuthSessionResult_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_BeginAuthSessionResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamIntegrationKit_ESIK_BeginAuthSessionResult_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_BeginAuthSessionResult()
{
	if (!Z_Registration_Info_UEnum_ESIK_BeginAuthSessionResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESIK_BeginAuthSessionResult.InnerSingleton, Z_Construct_UEnum_SteamIntegrationKit_ESIK_BeginAuthSessionResult_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESIK_BeginAuthSessionResult.InnerSingleton;
}
// ********** End Enum ESIK_BeginAuthSessionResult *************************************************

// ********** Begin Enum ESIK_VoiceResult **********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESIK_VoiceResult;
static UEnum* ESIK_VoiceResult_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESIK_VoiceResult.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESIK_VoiceResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamIntegrationKit_ESIK_VoiceResult, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("ESIK_VoiceResult"));
	}
	return Z_Registration_Info_UEnum_ESIK_VoiceResult.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<ESIK_VoiceResult>()
{
	return ESIK_VoiceResult_StaticEnum();
}
struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_VoiceResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
		{ "VoiceResultBufferTooSmall.DisplayName", "Buffer Too Small" },
		{ "VoiceResultBufferTooSmall.Name", "VoiceResultBufferTooSmall" },
		{ "VoiceResultDataCorrupted.DisplayName", "Data Corrupted" },
		{ "VoiceResultDataCorrupted.Name", "VoiceResultDataCorrupted" },
		{ "VoiceResultNoData.DisplayName", "No Data" },
		{ "VoiceResultNoData.Name", "VoiceResultNoData" },
		{ "VoiceResultNotInitialized.DisplayName", "Not Initialized" },
		{ "VoiceResultNotInitialized.Name", "VoiceResultNotInitialized" },
		{ "VoiceResultNotRecording.DisplayName", "Not Recording" },
		{ "VoiceResultNotRecording.Name", "VoiceResultNotRecording" },
		{ "VoiceResultOK.DisplayName", "OK" },
		{ "VoiceResultOK.Name", "VoiceResultOK" },
		{ "VoiceResultReceiverDidNotAnswer.DisplayName", "Receiver Did Not Answer" },
		{ "VoiceResultReceiverDidNotAnswer.Name", "VoiceResultReceiverDidNotAnswer" },
		{ "VoiceResultReceiverOutOfDate.DisplayName", "Receiver Out Of Date" },
		{ "VoiceResultReceiverOutOfDate.Name", "VoiceResultReceiverOutOfDate" },
		{ "VoiceResultRestricted.DisplayName", "Restricted" },
		{ "VoiceResultRestricted.Name", "VoiceResultRestricted" },
		{ "VoiceResultUnsupportedCodec.DisplayName", "Unsupported Codec" },
		{ "VoiceResultUnsupportedCodec.Name", "VoiceResultUnsupportedCodec" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "VoiceResultOK", (int64)VoiceResultOK },
		{ "VoiceResultNotInitialized", (int64)VoiceResultNotInitialized },
		{ "VoiceResultNotRecording", (int64)VoiceResultNotRecording },
		{ "VoiceResultNoData", (int64)VoiceResultNoData },
		{ "VoiceResultBufferTooSmall", (int64)VoiceResultBufferTooSmall },
		{ "VoiceResultDataCorrupted", (int64)VoiceResultDataCorrupted },
		{ "VoiceResultRestricted", (int64)VoiceResultRestricted },
		{ "VoiceResultUnsupportedCodec", (int64)VoiceResultUnsupportedCodec },
		{ "VoiceResultReceiverOutOfDate", (int64)VoiceResultReceiverOutOfDate },
		{ "VoiceResultReceiverDidNotAnswer", (int64)VoiceResultReceiverDidNotAnswer },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_VoiceResult_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamIntegrationKit_ESIK_VoiceResult_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	"ESIK_VoiceResult",
	"ESIK_VoiceResult",
	Z_Construct_UEnum_SteamIntegrationKit_ESIK_VoiceResult_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_VoiceResult_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_VoiceResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamIntegrationKit_ESIK_VoiceResult_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_VoiceResult()
{
	if (!Z_Registration_Info_UEnum_ESIK_VoiceResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESIK_VoiceResult.InnerSingleton, Z_Construct_UEnum_SteamIntegrationKit_ESIK_VoiceResult_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESIK_VoiceResult.InnerSingleton;
}
// ********** End Enum ESIK_VoiceResult ************************************************************

// ********** Begin ScriptStruct FSIK_AppId ********************************************************
struct Z_Construct_UScriptStruct_FSIK_AppId_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSIK_AppId); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSIK_AppId); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppID_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSIK_AppId constinit property declarations ************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSIK_AppId constinit property declarations **************************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSIK_AppId>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSIK_AppId_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSIK_AppId;
class UScriptStruct* FSIK_AppId::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_AppId.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSIK_AppId.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSIK_AppId, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("SIK_AppId"));
	}
	return Z_Registration_Info_UScriptStruct_FSIK_AppId.OuterSingleton;
	}

// ********** Begin ScriptStruct FSIK_AppId Property Definitions ***********************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSIK_AppId_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_AppId, AppID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppID_MetaData), NewProp_AppID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSIK_AppId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_AppId_Statics::NewProp_AppID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_AppId_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSIK_AppId Property Definitions *************************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSIK_AppId_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	&NewStructOps,
	"SIK_AppId",
	Z_Construct_UScriptStruct_FSIK_AppId_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_AppId_Statics::PropPointers),
	sizeof(FSIK_AppId),
	alignof(FSIK_AppId),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_AppId_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSIK_AppId_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSIK_AppId()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_AppId.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSIK_AppId.InnerSingleton, Z_Construct_UScriptStruct_FSIK_AppId_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSIK_AppId.InnerSingleton);
}
// ********** End ScriptStruct FSIK_AppId **********************************************************

// ********** Begin ScriptStruct FSIK_DepotId ******************************************************
struct Z_Construct_UScriptStruct_FSIK_DepotId_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSIK_DepotId); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSIK_DepotId); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DepotID_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSIK_DepotId constinit property declarations **********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_DepotID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSIK_DepotId constinit property declarations ************************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSIK_DepotId>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSIK_DepotId_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSIK_DepotId;
class UScriptStruct* FSIK_DepotId::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_DepotId.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSIK_DepotId.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSIK_DepotId, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("SIK_DepotId"));
	}
	return Z_Registration_Info_UScriptStruct_FSIK_DepotId.OuterSingleton;
	}

// ********** Begin ScriptStruct FSIK_DepotId Property Definitions *********************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSIK_DepotId_Statics::NewProp_DepotID = { "DepotID", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_DepotId, DepotID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DepotID_MetaData), NewProp_DepotID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSIK_DepotId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_DepotId_Statics::NewProp_DepotID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_DepotId_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSIK_DepotId Property Definitions ***********************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSIK_DepotId_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	&NewStructOps,
	"SIK_DepotId",
	Z_Construct_UScriptStruct_FSIK_DepotId_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_DepotId_Statics::PropPointers),
	sizeof(FSIK_DepotId),
	alignof(FSIK_DepotId),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_DepotId_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSIK_DepotId_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSIK_DepotId()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_DepotId.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSIK_DepotId.InnerSingleton, Z_Construct_UScriptStruct_FSIK_DepotId_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSIK_DepotId.InnerSingleton);
}
// ********** End ScriptStruct FSIK_DepotId ********************************************************

// ********** Begin ScriptStruct FSIK_AccountID ****************************************************
struct Z_Construct_UScriptStruct_FSIK_AccountID_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSIK_AccountID); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSIK_AccountID); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccountID_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSIK_AccountID constinit property declarations ********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_AccountID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSIK_AccountID constinit property declarations **********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSIK_AccountID>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSIK_AccountID_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSIK_AccountID;
class UScriptStruct* FSIK_AccountID::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_AccountID.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSIK_AccountID.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSIK_AccountID, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("SIK_AccountID"));
	}
	return Z_Registration_Info_UScriptStruct_FSIK_AccountID.OuterSingleton;
	}

// ********** Begin ScriptStruct FSIK_AccountID Property Definitions *******************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSIK_AccountID_Statics::NewProp_AccountID = { "AccountID", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_AccountID, AccountID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccountID_MetaData), NewProp_AccountID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSIK_AccountID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_AccountID_Statics::NewProp_AccountID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_AccountID_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSIK_AccountID Property Definitions *********************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSIK_AccountID_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	&NewStructOps,
	"SIK_AccountID",
	Z_Construct_UScriptStruct_FSIK_AccountID_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_AccountID_Statics::PropPointers),
	sizeof(FSIK_AccountID),
	alignof(FSIK_AccountID),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_AccountID_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSIK_AccountID_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSIK_AccountID()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_AccountID.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSIK_AccountID.InnerSingleton, Z_Construct_UScriptStruct_FSIK_AccountID_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSIK_AccountID.InnerSingleton);
}
// ********** End ScriptStruct FSIK_AccountID ******************************************************

// ********** Begin Enum ESIK_Result ***************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESIK_Result;
static UEnum* ESIK_Result_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESIK_Result.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESIK_Result.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("ESIK_Result"));
	}
	return Z_Registration_Info_UEnum_ESIK_Result.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<ESIK_Result>()
{
	return ESIK_Result_StaticEnum();
}
struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
		{ "ResultAccessDenied.Comment", "// name is not unique\n" },
		{ "ResultAccessDenied.Name", "ResultAccessDenied" },
		{ "ResultAccessDenied.ToolTip", "name is not unique" },
		{ "ResultAccountActivityLimitExceeded.Comment", "// Too many accounts access this resource\n" },
		{ "ResultAccountActivityLimitExceeded.Name", "ResultAccountActivityLimitExceeded" },
		{ "ResultAccountActivityLimitExceeded.ToolTip", "Too many accounts access this resource" },
		{ "ResultAccountAssociatedToMultiplePartners.Comment", "// activation code for two-factor didn't match\n" },
		{ "ResultAccountAssociatedToMultiplePartners.Name", "ResultAccountAssociatedToMultiplePartners" },
		{ "ResultAccountAssociatedToMultiplePartners.ToolTip", "activation code for two-factor didn't match" },
		{ "ResultAccountDeleted.Comment", "// item can't be removed\n" },
		{ "ResultAccountDeleted.Name", "ResultAccountDeleted" },
		{ "ResultAccountDeleted.ToolTip", "item can't be removed" },
		{ "ResultAccountDisabled.Comment", "// nothing matching the request found\n" },
		{ "ResultAccountDisabled.Name", "ResultAccountDisabled" },
		{ "ResultAccountDisabled.ToolTip", "nothing matching the request found" },
		{ "ResultAccountLimitExceeded.Comment", "// SMS code failure (no match, none pending, etc.)\n" },
		{ "ResultAccountLimitExceeded.Name", "ResultAccountLimitExceeded" },
		{ "ResultAccountLimitExceeded.ToolTip", "SMS code failure (no match, none pending, etc.)" },
		{ "ResultAccountLockedDown.Name", "ResultAccountLockedDown" },
		{ "ResultAccountLoginDeniedNeedTwoFactor.Comment", "// Temporary rate limit exceeded, try again later, different from ResultLimitExceeded which may be permanent\n" },
		{ "ResultAccountLoginDeniedNeedTwoFactor.Name", "ResultAccountLoginDeniedNeedTwoFactor" },
		{ "ResultAccountLoginDeniedNeedTwoFactor.ToolTip", "Temporary rate limit exceeded, try again later, different from ResultLimitExceeded which may be permanent" },
		{ "ResultAccountLoginDeniedThrottle.Comment", "// The thing we're trying to access has been deleted\n" },
		{ "ResultAccountLoginDeniedThrottle.Name", "ResultAccountLoginDeniedThrottle" },
		{ "ResultAccountLoginDeniedThrottle.ToolTip", "The thing we're trying to access has been deleted" },
		{ "ResultAccountLogonDenied.Comment", "// new value is the same as the old one ( secret question and answer )\n" },
		{ "ResultAccountLogonDenied.Name", "ResultAccountLogonDenied" },
		{ "ResultAccountLogonDenied.ToolTip", "new value is the same as the old one ( secret question and answer )" },
		{ "ResultAccountLogonDeniedNoMail.Comment", "// account login denied due to auth code invalid\n" },
		{ "ResultAccountLogonDeniedNoMail.Name", "ResultAccountLogonDeniedNoMail" },
		{ "ResultAccountLogonDeniedNoMail.ToolTip", "account login denied due to auth code invalid" },
		{ "ResultAccountLogonDeniedVerifiedEmailRequired.Name", "ResultAccountLogonDeniedVerifiedEmailRequired" },
		{ "ResultAccountNotFeatured.Comment", "// this service is not accepting content changes right now\n" },
		{ "ResultAccountNotFeatured.Name", "ResultAccountNotFeatured" },
		{ "ResultAccountNotFeatured.ToolTip", "this service is not accepting content changes right now" },
		{ "ResultAccountNotFound.Comment", "// VAC2 banned\n" },
		{ "ResultAccountNotFound.Name", "ResultAccountNotFound" },
		{ "ResultAccountNotFound.ToolTip", "VAC2 banned" },
		{ "ResultAccountNotFriends.Comment", "// the WG couldn't send a response because we exceeded max network send size\n" },
		{ "ResultAccountNotFriends.Name", "ResultAccountNotFriends" },
		{ "ResultAccountNotFriends.ToolTip", "the WG couldn't send a response because we exceeded max network send size" },
		{ "ResultAdministratorOK.Comment", "// account doesn't have value, so this feature isn't available\n" },
		{ "ResultAdministratorOK.Name", "ResultAdministratorOK" },
		{ "ResultAdministratorOK.ToolTip", "account doesn't have value, so this feature isn't available" },
		{ "ResultAlreadyLoggedInElsewhere.Comment", "// You are already logged in elsewhere, this cached credential login has failed.\n" },
		{ "ResultAlreadyLoggedInElsewhere.Name", "ResultAlreadyLoggedInElsewhere" },
		{ "ResultAlreadyLoggedInElsewhere.ToolTip", "You are already logged in elsewhere, this cached credential login has failed." },
		{ "ResultAlreadyOwned.Comment", "// The request is a duplicate and the action has already occurred in the past, ignored this time\n" },
		{ "ResultAlreadyOwned.Name", "ResultAlreadyOwned" },
		{ "ResultAlreadyOwned.ToolTip", "The request is a duplicate and the action has already occurred in the past, ignored this time" },
		{ "ResultAlreadyRedeemed.Comment", "// License/Guest pass the user is trying to access is expired\n" },
		{ "ResultAlreadyRedeemed.Name", "ResultAlreadyRedeemed" },
		{ "ResultAlreadyRedeemed.ToolTip", "License/Guest pass the user is trying to access is expired" },
		{ "ResultBadResponse.Name", "ResultBadResponse" },
		{ "ResultBanned.Comment", "// operation timed out\n" },
		{ "ResultBanned.Name", "ResultBanned" },
		{ "ResultBanned.ToolTip", "operation timed out" },
		{ "ResultBlocked.Comment", "// failed to find the shopping cart requested\n" },
		{ "ResultBlocked.Name", "ResultBlocked" },
		{ "ResultBlocked.ToolTip", "failed to find the shopping cart requested" },
		{ "ResultBusy.Comment", "// file was not found\n" },
		{ "ResultBusy.Name", "ResultBusy" },
		{ "ResultBusy.ToolTip", "file was not found" },
		{ "ResultCancelled.Comment", "// Long running operation (content download) suspended/paused\n" },
		{ "ResultCancelled.Name", "ResultCancelled" },
		{ "ResultCancelled.ToolTip", "Long running operation (content download) suspended/paused" },
		{ "ResultCannotUseOldPassword.Comment", "// account login denied due to 2nd factor authentication failure\n" },
		{ "ResultCannotUseOldPassword.Name", "ResultCannotUseOldPassword" },
		{ "ResultCannotUseOldPassword.ToolTip", "account login denied due to 2nd factor authentication failure" },
		{ "ResultCantRemoveItem.Comment", "// the user is limited\n" },
		{ "ResultCantRemoveItem.Name", "ResultCantRemoveItem" },
		{ "ResultCantRemoveItem.ToolTip", "the user is limited" },
		{ "ResultCommunityCooldown.Comment", "// A license for this already exists, but cancelled\n" },
		{ "ResultCommunityCooldown.Name", "ResultCommunityCooldown" },
		{ "ResultCommunityCooldown.ToolTip", "A license for this already exists, but cancelled" },
		{ "ResultConnectFailed.Name", "ResultConnectFailed" },
		{ "ResultContentVersion.Comment", "// allowed to take this action, but only because requester is admin\n" },
		{ "ResultContentVersion.Name", "ResultContentVersion" },
		{ "ResultContentVersion.ToolTip", "allowed to take this action, but only because requester is admin" },
		{ "ResultDataCorruption.Comment", "// Operation canceled (typically by user: content download)\n" },
		{ "ResultDataCorruption.Name", "ResultDataCorruption" },
		{ "ResultDataCorruption.ToolTip", "Operation canceled (typically by user: content download)" },
		{ "ResultDisabled.Comment", "// something happened that we didn't expect to ever happen\n" },
		{ "ResultDisabled.Name", "ResultDisabled" },
		{ "ResultDisabled.ToolTip", "something happened that we didn't expect to ever happen" },
		{ "ResultDiskFull.Comment", "// Operation canceled because data is ill formed or unrecoverable\n" },
		{ "ResultDiskFull.Name", "ResultDiskFull" },
		{ "ResultDiskFull.ToolTip", "Operation canceled because data is ill formed or unrecoverable" },
		{ "ResultDuplicateName.Comment", "// email is invalid\n" },
		{ "ResultDuplicateName.Name", "ResultDuplicateName" },
		{ "ResultDuplicateName.ToolTip", "email is invalid" },
		{ "ResultDuplicateRequest.Comment", "// Guest pass has already been redeemed by account, cannot be acked again\n" },
		{ "ResultDuplicateRequest.Name", "ResultDuplicateRequest" },
		{ "ResultDuplicateRequest.ToolTip", "Guest pass has already been redeemed by account, cannot be acked again" },
		{ "ResultEmailSendFailure.Comment", "// Cannot refund to payment method, must use wallet\n" },
		{ "ResultEmailSendFailure.Name", "ResultEmailSendFailure" },
		{ "ResultEmailSendFailure.ToolTip", "Cannot refund to payment method, must use wallet" },
		{ "ResultEncryptionFailure.Comment", "// Request is pending (may be in process, or waiting on third party)\n" },
		{ "ResultEncryptionFailure.Name", "ResultEncryptionFailure" },
		{ "ResultEncryptionFailure.ToolTip", "Request is pending (may be in process, or waiting on third party)" },
		{ "ResultExistingUserCancelledLicense.Comment", "// account has been deleted\n" },
		{ "ResultExistingUserCancelledLicense.Name", "ResultExistingUserCancelledLicense" },
		{ "ResultExistingUserCancelledLicense.ToolTip", "account has been deleted" },
		{ "ResultExpired.Comment", "// Access has been revoked (used for revoked guest passes)\n" },
		{ "ResultExpired.Name", "ResultExpired" },
		{ "ResultExpired.ToolTip", "Access has been revoked (used for revoked guest passes)" },
		{ "ResultExpiredLoginAuthCode.Comment", "// Facebook query returned an error\n" },
		{ "ResultExpiredLoginAuthCode.Name", "ResultExpiredLoginAuthCode" },
		{ "ResultExpiredLoginAuthCode.ToolTip", "Facebook query returned an error" },
		{ "ResultExternalAccountAlreadyLinked.Comment", "// PSN ticket was invalid\n" },
		{ "ResultExternalAccountAlreadyLinked.Name", "ResultExternalAccountAlreadyLinked" },
		{ "ResultExternalAccountAlreadyLinked.ToolTip", "PSN ticket was invalid" },
		{ "ResultExternalAccountUnlinked.Comment", "// Password could not be verified as it's unset server side\n" },
		{ "ResultExternalAccountUnlinked.Name", "ResultExternalAccountUnlinked" },
		{ "ResultExternalAccountUnlinked.ToolTip", "Password could not be verified as it's unset server side" },
		{ "ResultFacebookQueryError.Comment", "// \n// \n// operation failed due to parental control restrictions for current user\n" },
		{ "ResultFacebookQueryError.Name", "ResultFacebookQueryError" },
		{ "ResultFacebookQueryError.ToolTip", "operation failed due to parental control restrictions for current user" },
		{ "ResultFail.Comment", "// success\n" },
		{ "ResultFail.Name", "ResultFail" },
		{ "ResultFail.ToolTip", "success" },
		{ "ResultFileNotFound.Comment", "// a parameter is incorrect\n" },
		{ "ResultFileNotFound.Name", "ResultFileNotFound" },
		{ "ResultFileNotFound.ToolTip", "a parameter is incorrect" },
		{ "ResultGSLTDenied.Comment", "// Needs to provide a valid captcha\n" },
		{ "ResultGSLTDenied.Name", "ResultGSLTDenied" },
		{ "ResultGSLTDenied.ToolTip", "Needs to provide a valid captcha" },
		{ "ResultGSLTExpired.Comment", "// the ip address has been banned from taking this action\n" },
		{ "ResultGSLTExpired.Name", "ResultGSLTExpired" },
		{ "ResultGSLTExpired.ToolTip", "the ip address has been banned from taking this action" },
		{ "ResultGSOwnerDenied.Comment", "// a game server login token owned by this token's owner has been banned\n" },
		{ "ResultGSOwnerDenied.Name", "ResultGSOwnerDenied" },
		{ "ResultGSOwnerDenied.ToolTip", "a game server login token owned by this token's owner has been banned" },
		{ "ResultHandshakeFailed.Name", "ResultHandshakeFailed" },
		{ "ResultHardwareNotCapableOfIPT.Comment", "// account login denied due to 2nd factor auth failure - and no mail has been sent\n" },
		{ "ResultHardwareNotCapableOfIPT.Name", "ResultHardwareNotCapableOfIPT" },
		{ "ResultHardwareNotCapableOfIPT.ToolTip", "account login denied due to 2nd factor auth failure - and no mail has been sent" },
		{ "ResultIgnored.Comment", "// a user didn't allow it\n" },
		{ "ResultIgnored.Name", "ResultIgnored" },
		{ "ResultIgnored.ToolTip", "a user didn't allow it" },
		{ "ResultIllegalPassword.Comment", "// The sync cannot resume due to a conflict between the local and remote files\n" },
		{ "ResultIllegalPassword.Name", "ResultIllegalPassword" },
		{ "ResultIllegalPassword.ToolTip", "The sync cannot resume due to a conflict between the local and remote files" },
		{ "ResultInsufficientFunds.Comment", "// this token has expired from disuse; can be reset for use\n" },
		{ "ResultInsufficientFunds.Name", "ResultInsufficientFunds" },
		{ "ResultInsufficientFunds.ToolTip", "this token has expired from disuse; can be reset for use" },
		{ "ResultInsufficientPrivilege.Comment", "// Encryption or Decryption failed\n" },
		{ "ResultInsufficientPrivilege.Name", "ResultInsufficientPrivilege" },
		{ "ResultInsufficientPrivilege.ToolTip", "Encryption or Decryption failed" },
		{ "ResultInvalidCEGSubmission.Comment", "// The requested service has been configured to be unavailable\n" },
		{ "ResultInvalidCEGSubmission.Name", "ResultInvalidCEGSubmission" },
		{ "ResultInvalidCEGSubmission.ToolTip", "The requested service has been configured to be unavailable" },
		{ "ResultInvalidEmail.Comment", "// name is invalid\n" },
		{ "ResultInvalidEmail.Name", "ResultInvalidEmail" },
		{ "ResultInvalidEmail.ToolTip", "name is invalid" },
		{ "ResultInvalidItemType.Comment", "// game server owner is denied for other reason (account lock, community ban, vac ban, missing phone)\n" },
		{ "ResultInvalidItemType.Name", "ResultInvalidItemType" },
		{ "ResultInvalidItemType.ToolTip", "game server owner is denied for other reason (account lock, community ban, vac ban, missing phone)" },
		{ "ResultInvalidLoginAuthCode.Comment", "// The requested new password is not legal\n" },
		{ "ResultInvalidLoginAuthCode.Name", "ResultInvalidLoginAuthCode" },
		{ "ResultInvalidLoginAuthCode.ToolTip", "The requested new password is not legal" },
		{ "ResultInvalidName.Comment", "// called object was in an invalid state\n" },
		{ "ResultInvalidName.Name", "ResultInvalidName" },
		{ "ResultInvalidName.ToolTip", "called object was in an invalid state" },
		{ "ResultInvalidParam.Comment", "// protocol version is incorrect\n" },
		{ "ResultInvalidParam.Name", "ResultInvalidParam" },
		{ "ResultInvalidParam.ToolTip", "protocol version is incorrect" },
		{ "ResultInvalidPassword.Comment", "// no/failed network connection\n//\x09ResultNoConnectionRetry = 4,\x09\x09\x09\x09// OBSOLETE - removed\n" },
		{ "ResultInvalidPassword.Name", "ResultInvalidPassword" },
		{ "ResultInvalidPassword.ToolTip", "no/failed network connection\n      ResultNoConnectionRetry = 4,                             OBSOLETE - removed" },
		{ "ResultInvalidProtocolVer.Comment", "// same user logged in elsewhere\n" },
		{ "ResultInvalidProtocolVer.Name", "ResultInvalidProtocolVer" },
		{ "ResultInvalidProtocolVer.ToolTip", "same user logged in elsewhere" },
		{ "ResultInvalidSignature.Comment", "// The user's realm does not match the realm of the requested resource\n" },
		{ "ResultInvalidSignature.Name", "ResultInvalidSignature" },
		{ "ResultInvalidSignature.ToolTip", "The user's realm does not match the realm of the requested resource" },
		{ "ResultInvalidState.Comment", "// called method busy - action not taken\n" },
		{ "ResultInvalidState.Name", "ResultInvalidState" },
		{ "ResultInvalidState.ToolTip", "called method busy - action not taken" },
		{ "ResultInvalidSteamID.Comment", "// account not found\n" },
		{ "ResultInvalidSteamID.Name", "ResultInvalidSteamID" },
		{ "ResultInvalidSteamID.ToolTip", "account not found" },
		{ "ResultIOFailure.Name", "ResultIOFailure" },
		{ "ResultIPBanned.Comment", "// the type of thing we were requested to act on is invalid\n" },
		{ "ResultIPBanned.Name", "ResultIPBanned" },
		{ "ResultIPBanned.ToolTip", "the type of thing we were requested to act on is invalid" },
		{ "ResultIPLoginRestrictionFailed.Comment", "// account login denied due to auth code expired\n" },
		{ "ResultIPLoginRestrictionFailed.Name", "ResultIPLoginRestrictionFailed" },
		{ "ResultIPLoginRestrictionFailed.ToolTip", "account login denied due to auth code expired" },
		{ "ResultIPNotFound.Comment", "// All the games in this guest pass redemption request are already owned by the user\n" },
		{ "ResultIPNotFound.Name", "ResultIPNotFound" },
		{ "ResultIPNotFound.ToolTip", "All the games in this guest pass redemption request are already owned by the user" },
		{ "ResultIPTInitError.Comment", "// \n" },
		{ "ResultIPTInitError.Name", "ResultIPTInitError" },
		{ "ResultItemDeleted.Comment", "// Need two-factor code to login\n" },
		{ "ResultItemDeleted.Name", "ResultItemDeleted" },
		{ "ResultItemDeleted.ToolTip", "Need two-factor code to login" },
		{ "ResultLauncherMigrated.Comment", "// User must agree to china SSA or global SSA before login\n" },
		{ "ResultLauncherMigrated.Name", "ResultLauncherMigrated" },
		{ "ResultLauncherMigrated.ToolTip", "User must agree to china SSA or global SSA before login" },
		{ "ResultLimitedUserAccount.Comment", "// the user is not mutually friends\n" },
		{ "ResultLimitedUserAccount.Name", "ResultLimitedUserAccount" },
		{ "ResultLimitedUserAccount.ToolTip", "the user is not mutually friends" },
		{ "ResultLimitExceeded.Comment", "// Insufficient privilege\n" },
		{ "ResultLimitExceeded.Name", "ResultLimitExceeded" },
		{ "ResultLimitExceeded.ToolTip", "Insufficient privilege" },
		{ "ResultLockingFailed.Comment", "// failed to write change to the data store\n" },
		{ "ResultLockingFailed.Name", "ResultLockingFailed" },
		{ "ResultLockingFailed.ToolTip", "failed to write change to the data store" },
		{ "ResultLoggedInElsewhere.Comment", "// password/ticket is invalid\n" },
		{ "ResultLoggedInElsewhere.Name", "ResultLoggedInElsewhere" },
		{ "ResultLoggedInElsewhere.ToolTip", "password/ticket is invalid" },
		{ "ResultLogonSessionReplaced.Comment", "// failed to acquire access lock for this operation\n" },
		{ "ResultLogonSessionReplaced.Name", "ResultLogonSessionReplaced" },
		{ "ResultLogonSessionReplaced.ToolTip", "failed to acquire access lock for this operation" },
		{ "ResultMustAgreeToSSA.Comment", "// No launcher was specified, but a launcher was needed to choose correct realm for operation.\n" },
		{ "ResultMustAgreeToSSA.Name", "ResultMustAgreeToSSA" },
		{ "ResultMustAgreeToSSA.ToolTip", "No launcher was specified, but a launcher was needed to choose correct realm for operation." },
		{ "ResultNeedCaptcha.Comment", "// Can't perform operation till payment has settled\n" },
		{ "ResultNeedCaptcha.Name", "ResultNeedCaptcha" },
		{ "ResultNeedCaptcha.ToolTip", "Can't perform operation till payment has settled" },
		{ "ResultNoConnection.Comment", "// generic failure \n" },
		{ "ResultNoConnection.Name", "ResultNoConnection" },
		{ "ResultNoConnection.ToolTip", "generic failure" },
		{ "ResultNoLauncherSpecified.Comment", "// access is denied because of a community cooldown (probably from support profile data resets)\n" },
		{ "ResultNoLauncherSpecified.Name", "ResultNoLauncherSpecified" },
		{ "ResultNoLauncherSpecified.ToolTip", "access is denied because of a community cooldown (probably from support profile data resets)" },
		{ "ResultNoMatch.Comment", "// target is ignoring sender\n" },
		{ "ResultNoMatch.Name", "ResultNoMatch" },
		{ "ResultNoMatch.ToolTip", "target is ignoring sender" },
		{ "ResultNoMatchingURL.Name", "ResultNoMatchingURL" },
		{ "ResultNoMobileDevice.Comment", "// data not modified\n" },
		{ "ResultNoMobileDevice.Name", "ResultNoMobileDevice" },
		{ "ResultNoMobileDevice.ToolTip", "data not modified" },
		{ "ResultNone.Name", "ResultNone" },
		{ "ResultNoSiteLicensesFound.Comment", "// There are too many of this thing pending already\n" },
		{ "ResultNoSiteLicensesFound.Name", "ResultNoSiteLicensesFound" },
		{ "ResultNoSiteLicensesFound.ToolTip", "There are too many of this thing pending already" },
		{ "ResultNotLoggedOn.Comment", "// The requested service is currently unavailable\n" },
		{ "ResultNotLoggedOn.Name", "ResultNotLoggedOn" },
		{ "ResultNotLoggedOn.ToolTip", "The requested service is currently unavailable" },
		{ "ResultNotModified.Comment", "// account has been associated with multiple partners\n" },
		{ "ResultNotModified.Name", "ResultNotModified" },
		{ "ResultNotModified.ToolTip", "account has been associated with multiple partners" },
		{ "ResultNotSettled.Comment", "// Cannot send an email\n" },
		{ "ResultNotSettled.Name", "ResultNotSettled" },
		{ "ResultNotSettled.ToolTip", "Cannot send an email" },
		{ "ResultNoVerifiedPhone.Comment", "// Failed to parse input\n" },
		{ "ResultNoVerifiedPhone.Name", "ResultNoVerifiedPhone" },
		{ "ResultNoVerifiedPhone.ToolTip", "Failed to parse input" },
		{ "ResultOK.Comment", "// no result\n" },
		{ "ResultOK.Name", "ResultOK" },
		{ "ResultOK.ToolTip", "no result" },
		{ "ResultParentalControlRestricted.Comment", "// \n// \n" },
		{ "ResultParentalControlRestricted.Name", "ResultParentalControlRestricted" },
		{ "ResultParseFailure.Comment", "// signature check did not match\n" },
		{ "ResultParseFailure.Name", "ResultParseFailure" },
		{ "ResultParseFailure.ToolTip", "signature check did not match" },
		{ "ResultPasswordRequiredToKickSession.Comment", "// The current CM can't service the user making a request, user should try another.\n" },
		{ "ResultPasswordRequiredToKickSession.Name", "ResultPasswordRequiredToKickSession" },
		{ "ResultPasswordRequiredToKickSession.ToolTip", "The current CM can't service the user making a request, user should try another." },
		{ "ResultPasswordUnset.Comment", "// an remote call or IPC call failed\n" },
		{ "ResultPasswordUnset.Name", "ResultPasswordUnset" },
		{ "ResultPasswordUnset.ToolTip", "an remote call or IPC call failed" },
		{ "ResultPending.Comment", "// The user is not logged on\n" },
		{ "ResultPending.Name", "ResultPending" },
		{ "ResultPending.ToolTip", "The user is not logged on" },
		{ "ResultPersistFailed.Comment", "// IP address not found\n" },
		{ "ResultPersistFailed.Name", "ResultPersistFailed" },
		{ "ResultPersistFailed.ToolTip", "IP address not found" },
		{ "ResultPhoneActivityLimitExceeded.Comment", "// Too many changes to this account\n" },
		{ "ResultPhoneActivityLimitExceeded.Name", "ResultPhoneActivityLimitExceeded" },
		{ "ResultPhoneActivityLimitExceeded.ToolTip", "Too many changes to this account" },
		{ "ResultPSNTicketInvalid.Comment", "// External account (PSN, Facebook...) is not linked to a Steam account\n" },
		{ "ResultPSNTicketInvalid.Name", "ResultPSNTicketInvalid" },
		{ "ResultPSNTicketInvalid.ToolTip", "External account (PSN, Facebook...) is not linked to a Steam account" },
		{ "ResultRateLimitExceeded.Comment", "// The action could not be complete because it is region restricted\n" },
		{ "ResultRateLimitExceeded.Name", "ResultRateLimitExceeded" },
		{ "ResultRateLimitExceeded.ToolTip", "The action could not be complete because it is region restricted" },
		{ "ResultRefundToWallet.Comment", "// Too many changes to this phone\n" },
		{ "ResultRefundToWallet.Name", "ResultRefundToWallet" },
		{ "ResultRefundToWallet.ToolTip", "Too many changes to this phone" },
		{ "ResultRegionLocked.Comment", "// The device being used is not allowed to perform this action\n" },
		{ "ResultRegionLocked.Name", "ResultRegionLocked" },
		{ "ResultRegionLocked.ToolTip", "The device being used is not allowed to perform this action" },
		{ "ResultRemoteCallFailed.Comment", "// Operation canceled - not enough disk space.\n" },
		{ "ResultRemoteCallFailed.Name", "ResultRemoteCallFailed" },
		{ "ResultRemoteCallFailed.ToolTip", "Operation canceled - not enough disk space." },
		{ "ResultRemoteDisconnect.Name", "ResultRemoteDisconnect" },
		{ "ResultRemoteFileConflict.Comment", "// External account (PSN, Facebook...) is already linked to some other account, must explicitly request to replace/delete the link first\n" },
		{ "ResultRemoteFileConflict.Name", "ResultRemoteFileConflict" },
		{ "ResultRemoteFileConflict.ToolTip", "External account (PSN, Facebook...) is already linked to some other account, must explicitly request to replace/delete the link first" },
		{ "ResultRequirePasswordReEntry.Comment", "// parse failure, missing field, etc.\n" },
		{ "ResultRequirePasswordReEntry.Name", "ResultRequirePasswordReEntry" },
		{ "ResultRequirePasswordReEntry.ToolTip", "parse failure, missing field, etc." },
		{ "ResultRestrictedDevice.Comment", "// The set of files submitted to the CEG server are not valid !\n" },
		{ "ResultRestrictedDevice.Name", "ResultRestrictedDevice" },
		{ "ResultRestrictedDevice.ToolTip", "The set of files submitted to the CEG server are not valid !" },
		{ "ResultRevoked.Comment", "// Too much of a good thing\n" },
		{ "ResultRevoked.Name", "ResultRevoked" },
		{ "ResultRevoked.ToolTip", "Too much of a good thing" },
		{ "ResultSameAsPreviousValue.Comment", "// The requested new password is not legal\n" },
		{ "ResultSameAsPreviousValue.Name", "ResultSameAsPreviousValue" },
		{ "ResultSameAsPreviousValue.ToolTip", "The requested new password is not legal" },
		{ "ResultServiceReadOnly.Name", "ResultServiceReadOnly" },
		{ "ResultServiceUnavailable.Comment", "// steamID is invalid\n" },
		{ "ResultServiceUnavailable.Name", "ResultServiceUnavailable" },
		{ "ResultServiceUnavailable.ToolTip", "steamID is invalid" },
		{ "ResultShoppingCartNotFound.Name", "ResultShoppingCartNotFound" },
		{ "ResultSmsCodeFailed.Comment", "// the time presented is out of range or tolerance\n" },
		{ "ResultSmsCodeFailed.Name", "ResultSmsCodeFailed" },
		{ "ResultSmsCodeFailed.ToolTip", "the time presented is out of range or tolerance" },
		{ "ResultSteamRealmMismatch.Comment", "// The specified launcher type is no longer supported; the user should be directed elsewhere\n" },
		{ "ResultSteamRealmMismatch.Name", "ResultSteamRealmMismatch" },
		{ "ResultSteamRealmMismatch.ToolTip", "The specified launcher type is no longer supported; the user should be directed elsewhere" },
		{ "ResultSuspended.Comment", "// You are already logged in elsewhere, you must wait\n" },
		{ "ResultSuspended.Name", "ResultSuspended" },
		{ "ResultSuspended.ToolTip", "You are already logged in elsewhere, you must wait" },
		{ "ResultTimeNotSynced.Comment", "// the account does not have a mobile device associated with it\n" },
		{ "ResultTimeNotSynced.Name", "ResultTimeNotSynced" },
		{ "ResultTimeNotSynced.ToolTip", "the account does not have a mobile device associated with it" },
		{ "ResultTimeout.Comment", "// access is denied\n" },
		{ "ResultTimeout.Name", "ResultTimeout" },
		{ "ResultTimeout.ToolTip", "access is denied" },
		{ "ResultTooManyPending.Comment", "// user doesn't have enough wallet funds to complete the action\n" },
		{ "ResultTooManyPending.Name", "ResultTooManyPending" },
		{ "ResultTooManyPending.ToolTip", "user doesn't have enough wallet funds to complete the action" },
		{ "ResultTryAnotherCM.Comment", "// A Version mismatch in content transmitted within the Steam protocol.\n" },
		{ "ResultTryAnotherCM.Name", "ResultTryAnotherCM" },
		{ "ResultTryAnotherCM.ToolTip", "A Version mismatch in content transmitted within the Steam protocol." },
		{ "ResultTwoFactorActivationCodeMismatch.Comment", "// two factor code mismatch\n" },
		{ "ResultTwoFactorActivationCodeMismatch.Name", "ResultTwoFactorActivationCodeMismatch" },
		{ "ResultTwoFactorActivationCodeMismatch.ToolTip", "two factor code mismatch" },
		{ "ResultTwoFactorCodeMismatch.Comment", "// login attempt failed, try to throttle response to possible attacker\n" },
		{ "ResultTwoFactorCodeMismatch.Name", "ResultTwoFactorCodeMismatch" },
		{ "ResultTwoFactorCodeMismatch.ToolTip", "login attempt failed, try to throttle response to possible attacker" },
		{ "ResultUnexpectedError.Comment", "// the value entered is outside the acceptable range\n" },
		{ "ResultUnexpectedError.Name", "ResultUnexpectedError" },
		{ "ResultUnexpectedError.ToolTip", "the value entered is outside the acceptable range" },
		{ "ResultValueOutOfRange.Comment", "// The user cannot complete the action until they re-enter their password\n" },
		{ "ResultValueOutOfRange.Name", "ResultValueOutOfRange" },
		{ "ResultValueOutOfRange.ToolTip", "The user cannot complete the action until they re-enter their password" },
		{ "ResultWGNetworkSendExceeded.Comment", "// No site licenses found\n" },
		{ "ResultWGNetworkSendExceeded.Name", "ResultWGNetworkSendExceeded" },
		{ "ResultWGNetworkSendExceeded.ToolTip", "No site licenses found" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ResultNone", (int64)ResultNone },
		{ "ResultOK", (int64)ResultOK },
		{ "ResultFail", (int64)ResultFail },
		{ "ResultNoConnection", (int64)ResultNoConnection },
		{ "ResultInvalidPassword", (int64)ResultInvalidPassword },
		{ "ResultLoggedInElsewhere", (int64)ResultLoggedInElsewhere },
		{ "ResultInvalidProtocolVer", (int64)ResultInvalidProtocolVer },
		{ "ResultInvalidParam", (int64)ResultInvalidParam },
		{ "ResultFileNotFound", (int64)ResultFileNotFound },
		{ "ResultBusy", (int64)ResultBusy },
		{ "ResultInvalidState", (int64)ResultInvalidState },
		{ "ResultInvalidName", (int64)ResultInvalidName },
		{ "ResultInvalidEmail", (int64)ResultInvalidEmail },
		{ "ResultDuplicateName", (int64)ResultDuplicateName },
		{ "ResultAccessDenied", (int64)ResultAccessDenied },
		{ "ResultTimeout", (int64)ResultTimeout },
		{ "ResultBanned", (int64)ResultBanned },
		{ "ResultAccountNotFound", (int64)ResultAccountNotFound },
		{ "ResultInvalidSteamID", (int64)ResultInvalidSteamID },
		{ "ResultServiceUnavailable", (int64)ResultServiceUnavailable },
		{ "ResultNotLoggedOn", (int64)ResultNotLoggedOn },
		{ "ResultPending", (int64)ResultPending },
		{ "ResultEncryptionFailure", (int64)ResultEncryptionFailure },
		{ "ResultInsufficientPrivilege", (int64)ResultInsufficientPrivilege },
		{ "ResultLimitExceeded", (int64)ResultLimitExceeded },
		{ "ResultRevoked", (int64)ResultRevoked },
		{ "ResultExpired", (int64)ResultExpired },
		{ "ResultAlreadyRedeemed", (int64)ResultAlreadyRedeemed },
		{ "ResultDuplicateRequest", (int64)ResultDuplicateRequest },
		{ "ResultAlreadyOwned", (int64)ResultAlreadyOwned },
		{ "ResultIPNotFound", (int64)ResultIPNotFound },
		{ "ResultPersistFailed", (int64)ResultPersistFailed },
		{ "ResultLockingFailed", (int64)ResultLockingFailed },
		{ "ResultLogonSessionReplaced", (int64)ResultLogonSessionReplaced },
		{ "ResultConnectFailed", (int64)ResultConnectFailed },
		{ "ResultHandshakeFailed", (int64)ResultHandshakeFailed },
		{ "ResultIOFailure", (int64)ResultIOFailure },
		{ "ResultRemoteDisconnect", (int64)ResultRemoteDisconnect },
		{ "ResultShoppingCartNotFound", (int64)ResultShoppingCartNotFound },
		{ "ResultBlocked", (int64)ResultBlocked },
		{ "ResultIgnored", (int64)ResultIgnored },
		{ "ResultNoMatch", (int64)ResultNoMatch },
		{ "ResultAccountDisabled", (int64)ResultAccountDisabled },
		{ "ResultServiceReadOnly", (int64)ResultServiceReadOnly },
		{ "ResultAccountNotFeatured", (int64)ResultAccountNotFeatured },
		{ "ResultAdministratorOK", (int64)ResultAdministratorOK },
		{ "ResultContentVersion", (int64)ResultContentVersion },
		{ "ResultTryAnotherCM", (int64)ResultTryAnotherCM },
		{ "ResultPasswordRequiredToKickSession", (int64)ResultPasswordRequiredToKickSession },
		{ "ResultAlreadyLoggedInElsewhere", (int64)ResultAlreadyLoggedInElsewhere },
		{ "ResultSuspended", (int64)ResultSuspended },
		{ "ResultCancelled", (int64)ResultCancelled },
		{ "ResultDataCorruption", (int64)ResultDataCorruption },
		{ "ResultDiskFull", (int64)ResultDiskFull },
		{ "ResultRemoteCallFailed", (int64)ResultRemoteCallFailed },
		{ "ResultPasswordUnset", (int64)ResultPasswordUnset },
		{ "ResultExternalAccountUnlinked", (int64)ResultExternalAccountUnlinked },
		{ "ResultPSNTicketInvalid", (int64)ResultPSNTicketInvalid },
		{ "ResultExternalAccountAlreadyLinked", (int64)ResultExternalAccountAlreadyLinked },
		{ "ResultRemoteFileConflict", (int64)ResultRemoteFileConflict },
		{ "ResultIllegalPassword", (int64)ResultIllegalPassword },
		{ "ResultSameAsPreviousValue", (int64)ResultSameAsPreviousValue },
		{ "ResultAccountLogonDenied", (int64)ResultAccountLogonDenied },
		{ "ResultCannotUseOldPassword", (int64)ResultCannotUseOldPassword },
		{ "ResultInvalidLoginAuthCode", (int64)ResultInvalidLoginAuthCode },
		{ "ResultAccountLogonDeniedNoMail", (int64)ResultAccountLogonDeniedNoMail },
		{ "ResultHardwareNotCapableOfIPT", (int64)ResultHardwareNotCapableOfIPT },
		{ "ResultIPTInitError", (int64)ResultIPTInitError },
		{ "ResultParentalControlRestricted", (int64)ResultParentalControlRestricted },
		{ "ResultFacebookQueryError", (int64)ResultFacebookQueryError },
		{ "ResultExpiredLoginAuthCode", (int64)ResultExpiredLoginAuthCode },
		{ "ResultIPLoginRestrictionFailed", (int64)ResultIPLoginRestrictionFailed },
		{ "ResultAccountLockedDown", (int64)ResultAccountLockedDown },
		{ "ResultAccountLogonDeniedVerifiedEmailRequired", (int64)ResultAccountLogonDeniedVerifiedEmailRequired },
		{ "ResultNoMatchingURL", (int64)ResultNoMatchingURL },
		{ "ResultBadResponse", (int64)ResultBadResponse },
		{ "ResultRequirePasswordReEntry", (int64)ResultRequirePasswordReEntry },
		{ "ResultValueOutOfRange", (int64)ResultValueOutOfRange },
		{ "ResultUnexpectedError", (int64)ResultUnexpectedError },
		{ "ResultDisabled", (int64)ResultDisabled },
		{ "ResultInvalidCEGSubmission", (int64)ResultInvalidCEGSubmission },
		{ "ResultRestrictedDevice", (int64)ResultRestrictedDevice },
		{ "ResultRegionLocked", (int64)ResultRegionLocked },
		{ "ResultRateLimitExceeded", (int64)ResultRateLimitExceeded },
		{ "ResultAccountLoginDeniedNeedTwoFactor", (int64)ResultAccountLoginDeniedNeedTwoFactor },
		{ "ResultItemDeleted", (int64)ResultItemDeleted },
		{ "ResultAccountLoginDeniedThrottle", (int64)ResultAccountLoginDeniedThrottle },
		{ "ResultTwoFactorCodeMismatch", (int64)ResultTwoFactorCodeMismatch },
		{ "ResultTwoFactorActivationCodeMismatch", (int64)ResultTwoFactorActivationCodeMismatch },
		{ "ResultAccountAssociatedToMultiplePartners", (int64)ResultAccountAssociatedToMultiplePartners },
		{ "ResultNotModified", (int64)ResultNotModified },
		{ "ResultNoMobileDevice", (int64)ResultNoMobileDevice },
		{ "ResultTimeNotSynced", (int64)ResultTimeNotSynced },
		{ "ResultSmsCodeFailed", (int64)ResultSmsCodeFailed },
		{ "ResultAccountLimitExceeded", (int64)ResultAccountLimitExceeded },
		{ "ResultAccountActivityLimitExceeded", (int64)ResultAccountActivityLimitExceeded },
		{ "ResultPhoneActivityLimitExceeded", (int64)ResultPhoneActivityLimitExceeded },
		{ "ResultRefundToWallet", (int64)ResultRefundToWallet },
		{ "ResultEmailSendFailure", (int64)ResultEmailSendFailure },
		{ "ResultNotSettled", (int64)ResultNotSettled },
		{ "ResultNeedCaptcha", (int64)ResultNeedCaptcha },
		{ "ResultGSLTDenied", (int64)ResultGSLTDenied },
		{ "ResultGSOwnerDenied", (int64)ResultGSOwnerDenied },
		{ "ResultInvalidItemType", (int64)ResultInvalidItemType },
		{ "ResultIPBanned", (int64)ResultIPBanned },
		{ "ResultGSLTExpired", (int64)ResultGSLTExpired },
		{ "ResultInsufficientFunds", (int64)ResultInsufficientFunds },
		{ "ResultTooManyPending", (int64)ResultTooManyPending },
		{ "ResultNoSiteLicensesFound", (int64)ResultNoSiteLicensesFound },
		{ "ResultWGNetworkSendExceeded", (int64)ResultWGNetworkSendExceeded },
		{ "ResultAccountNotFriends", (int64)ResultAccountNotFriends },
		{ "ResultLimitedUserAccount", (int64)ResultLimitedUserAccount },
		{ "ResultCantRemoveItem", (int64)ResultCantRemoveItem },
		{ "ResultAccountDeleted", (int64)ResultAccountDeleted },
		{ "ResultExistingUserCancelledLicense", (int64)ResultExistingUserCancelledLicense },
		{ "ResultCommunityCooldown", (int64)ResultCommunityCooldown },
		{ "ResultNoLauncherSpecified", (int64)ResultNoLauncherSpecified },
		{ "ResultMustAgreeToSSA", (int64)ResultMustAgreeToSSA },
		{ "ResultLauncherMigrated", (int64)ResultLauncherMigrated },
		{ "ResultSteamRealmMismatch", (int64)ResultSteamRealmMismatch },
		{ "ResultInvalidSignature", (int64)ResultInvalidSignature },
		{ "ResultParseFailure", (int64)ResultParseFailure },
		{ "ResultNoVerifiedPhone", (int64)ResultNoVerifiedPhone },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	"ESIK_Result",
	"ESIK_Result",
	Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result()
{
	if (!Z_Registration_Info_UEnum_ESIK_Result.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESIK_Result.InnerSingleton, Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESIK_Result.InnerSingleton;
}
// ********** End Enum ESIK_Result *****************************************************************

// ********** Begin Enum ESMatchType ***************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESMatchType;
static UEnum* ESMatchType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESMatchType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESMatchType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamIntegrationKit_ESMatchType, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("ESMatchType"));
	}
	return Z_Registration_Info_UEnum_ESMatchType.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<ESMatchType>()
{
	return ESMatchType_StaticEnum();
}
struct Z_Construct_UEnum_SteamIntegrationKit_ESMatchType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
		{ "MT_Lobby.DisplayName", "Lobby Session" },
		{ "MT_Lobby.Name", "ESMatchType::MT_Lobby" },
		{ "MT_MatchMakingSession.DisplayName", "Matchmaking Session" },
		{ "MT_MatchMakingSession.Name", "ESMatchType::MT_MatchMakingSession" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESMatchType::MT_MatchMakingSession", (int64)ESMatchType::MT_MatchMakingSession },
		{ "ESMatchType::MT_Lobby", (int64)ESMatchType::MT_Lobby },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamIntegrationKit_ESMatchType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamIntegrationKit_ESMatchType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	"ESMatchType",
	"ESMatchType",
	Z_Construct_UEnum_SteamIntegrationKit_ESMatchType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESMatchType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESMatchType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamIntegrationKit_ESMatchType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESMatchType()
{
	if (!Z_Registration_Info_UEnum_ESMatchType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESMatchType.InnerSingleton, Z_Construct_UEnum_SteamIntegrationKit_ESMatchType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESMatchType.InnerSingleton;
}
// ********** End Enum ESMatchType *****************************************************************

// ********** Begin Enum ESIKAttributeType *********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESIKAttributeType;
static UEnum* ESIKAttributeType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESIKAttributeType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESIKAttributeType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamIntegrationKit_ESIKAttributeType, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("ESIKAttributeType"));
	}
	return Z_Registration_Info_UEnum_ESIKAttributeType.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<ESIKAttributeType>()
{
	return ESIKAttributeType_StaticEnum();
}
struct Z_Construct_UEnum_SteamIntegrationKit_ESIKAttributeType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Bool.Name", "Bool" },
		{ "Integer.Name", "Integer" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
		{ "String.Name", "String" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "String", (int64)String },
		{ "Bool", (int64)Bool },
		{ "Integer", (int64)Integer },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamIntegrationKit_ESIKAttributeType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamIntegrationKit_ESIKAttributeType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	"ESIKAttributeType",
	"ESIKAttributeType",
	Z_Construct_UEnum_SteamIntegrationKit_ESIKAttributeType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIKAttributeType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIKAttributeType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamIntegrationKit_ESIKAttributeType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIKAttributeType()
{
	if (!Z_Registration_Info_UEnum_ESIKAttributeType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESIKAttributeType.InnerSingleton, Z_Construct_UEnum_SteamIntegrationKit_ESIKAttributeType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESIKAttributeType.InnerSingleton;
}
// ********** End Enum ESIKAttributeType ***********************************************************

// ********** Begin ScriptStruct FSIKAttribute *****************************************************
struct Z_Construct_UScriptStruct_FSIKAttribute_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSIKAttribute); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSIKAttribute); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeType_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StringValue_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoolValue_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntValue_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSIKAttribute constinit property declarations *********************
	static const UECodeGen_Private::FBytePropertyParams NewProp_AttributeType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StringValue;
	static void NewProp_BoolValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_BoolValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_IntValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSIKAttribute constinit property declarations ***********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSIKAttribute>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSIKAttribute_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSIKAttribute;
class UScriptStruct* FSIKAttribute::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSIKAttribute.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSIKAttribute.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSIKAttribute, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("SIKAttribute"));
	}
	return Z_Registration_Info_UScriptStruct_FSIKAttribute.OuterSingleton;
	}

// ********** Begin ScriptStruct FSIKAttribute Property Definitions ********************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSIKAttribute_Statics::NewProp_AttributeType = { "AttributeType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIKAttribute, AttributeType), Z_Construct_UEnum_SteamIntegrationKit_ESIKAttributeType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeType_MetaData), NewProp_AttributeType_MetaData) }; // 2222882645
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSIKAttribute_Statics::NewProp_StringValue = { "StringValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIKAttribute, StringValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StringValue_MetaData), NewProp_StringValue_MetaData) };
void Z_Construct_UScriptStruct_FSIKAttribute_Statics::NewProp_BoolValue_SetBit(void* Obj)
{
	((FSIKAttribute*)Obj)->BoolValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSIKAttribute_Statics::NewProp_BoolValue = { "BoolValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSIKAttribute), &Z_Construct_UScriptStruct_FSIKAttribute_Statics::NewProp_BoolValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoolValue_MetaData), NewProp_BoolValue_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSIKAttribute_Statics::NewProp_IntValue = { "IntValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIKAttribute, IntValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntValue_MetaData), NewProp_IntValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSIKAttribute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIKAttribute_Statics::NewProp_AttributeType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIKAttribute_Statics::NewProp_StringValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIKAttribute_Statics::NewProp_BoolValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIKAttribute_Statics::NewProp_IntValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIKAttribute_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSIKAttribute Property Definitions **********************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSIKAttribute_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	&NewStructOps,
	"SIKAttribute",
	Z_Construct_UScriptStruct_FSIKAttribute_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIKAttribute_Statics::PropPointers),
	sizeof(FSIKAttribute),
	alignof(FSIKAttribute),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIKAttribute_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSIKAttribute_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSIKAttribute()
{
	if (!Z_Registration_Info_UScriptStruct_FSIKAttribute.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSIKAttribute.InnerSingleton, Z_Construct_UScriptStruct_FSIKAttribute_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSIKAttribute.InnerSingleton);
}
// ********** End ScriptStruct FSIKAttribute *******************************************************

// ********** Begin ScriptStruct FSIK_SteamId ******************************************************
struct Z_Construct_UScriptStruct_FSIK_SteamId_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSIK_SteamId); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSIK_SteamId); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSIK_SteamId constinit property declarations **********************
	static const UECodeGen_Private::FInt64PropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSIK_SteamId constinit property declarations ************************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSIK_SteamId>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSIK_SteamId_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSIK_SteamId;
class UScriptStruct* FSIK_SteamId::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_SteamId.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSIK_SteamId.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSIK_SteamId, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("SIK_SteamId"));
	}
	return Z_Registration_Info_UScriptStruct_FSIK_SteamId.OuterSingleton;
	}

// ********** Begin ScriptStruct FSIK_SteamId Property Definitions *********************************
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FSIK_SteamId_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_SteamId, Result), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSIK_SteamId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_SteamId_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_SteamId_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSIK_SteamId Property Definitions ***********************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSIK_SteamId_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	&NewStructOps,
	"SIK_SteamId",
	Z_Construct_UScriptStruct_FSIK_SteamId_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_SteamId_Statics::PropPointers),
	sizeof(FSIK_SteamId),
	alignof(FSIK_SteamId),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_SteamId_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSIK_SteamId_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSIK_SteamId()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_SteamId.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSIK_SteamId.InnerSingleton, Z_Construct_UScriptStruct_FSIK_SteamId_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSIK_SteamId.InnerSingleton);
}
// ********** End ScriptStruct FSIK_SteamId ********************************************************

// ********** Begin ScriptStruct FSSessionFindStruct ***********************************************
struct Z_Construct_UScriptStruct_FSSessionFindStruct_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSSessionFindStruct); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSSessionFindStruct); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SessionResult_MetaData[] = {
		{ "Category", "EOS Struct" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SessionSettings_MetaData[] = {
		{ "Category", "EOS Struct" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SessionName_MetaData[] = {
		{ "Category", "EOS Struct" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentNumberOfPlayers_MetaData[] = {
		{ "Category", "EOS Struct" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxNumberOfPlayers_MetaData[] = {
		{ "Category", "EOS Struct" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsDedicatedServer_MetaData[] = {
		{ "Category", "EOS Struct" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LobbyId_MetaData[] = {
		{ "Category", "EOS Struct" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSSessionFindStruct constinit property declarations ***************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SessionResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SessionSettings_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionSettings_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SessionSettings;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentNumberOfPlayers;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxNumberOfPlayers;
	static void NewProp_bIsDedicatedServer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDedicatedServer;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSSessionFindStruct constinit property declarations *****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSessionFindStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSSessionFindStruct_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSSessionFindStruct;
class UScriptStruct* FSSessionFindStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSSessionFindStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSSessionFindStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSessionFindStruct, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("SSessionFindStruct"));
	}
	return Z_Registration_Info_UScriptStruct_FSSessionFindStruct.OuterSingleton;
	}

// ********** Begin ScriptStruct FSSessionFindStruct Property Definitions **************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSSessionFindStruct_Statics::NewProp_SessionResult = { "SessionResult", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSSessionFindStruct, SessionResult), Z_Construct_UScriptStruct_FBlueprintSessionResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionResult_MetaData), NewProp_SessionResult_MetaData) }; // 2609908441
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSSessionFindStruct_Statics::NewProp_SessionSettings_ValueProp = { "SessionSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FSIKAttribute, METADATA_PARAMS(0, nullptr) }; // 1564803091
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSSessionFindStruct_Statics::NewProp_SessionSettings_Key_KeyProp = { "SessionSettings_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSSessionFindStruct_Statics::NewProp_SessionSettings = { "SessionSettings", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSSessionFindStruct, SessionSettings), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionSettings_MetaData), NewProp_SessionSettings_MetaData) }; // 1564803091
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSSessionFindStruct_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSSessionFindStruct, SessionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionName_MetaData), NewProp_SessionName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSessionFindStruct_Statics::NewProp_CurrentNumberOfPlayers = { "CurrentNumberOfPlayers", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSSessionFindStruct, CurrentNumberOfPlayers), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentNumberOfPlayers_MetaData), NewProp_CurrentNumberOfPlayers_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSessionFindStruct_Statics::NewProp_MaxNumberOfPlayers = { "MaxNumberOfPlayers", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSSessionFindStruct, MaxNumberOfPlayers), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxNumberOfPlayers_MetaData), NewProp_MaxNumberOfPlayers_MetaData) };
void Z_Construct_UScriptStruct_FSSessionFindStruct_Statics::NewProp_bIsDedicatedServer_SetBit(void* Obj)
{
	((FSSessionFindStruct*)Obj)->bIsDedicatedServer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSessionFindStruct_Statics::NewProp_bIsDedicatedServer = { "bIsDedicatedServer", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSSessionFindStruct), &Z_Construct_UScriptStruct_FSSessionFindStruct_Statics::NewProp_bIsDedicatedServer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsDedicatedServer_MetaData), NewProp_bIsDedicatedServer_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSSessionFindStruct_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSSessionFindStruct, LobbyId), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LobbyId_MetaData), NewProp_LobbyId_MetaData) }; // 3413883574
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSessionFindStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSessionFindStruct_Statics::NewProp_SessionResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSessionFindStruct_Statics::NewProp_SessionSettings_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSessionFindStruct_Statics::NewProp_SessionSettings_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSessionFindStruct_Statics::NewProp_SessionSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSessionFindStruct_Statics::NewProp_SessionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSessionFindStruct_Statics::NewProp_CurrentNumberOfPlayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSessionFindStruct_Statics::NewProp_MaxNumberOfPlayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSessionFindStruct_Statics::NewProp_bIsDedicatedServer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSessionFindStruct_Statics::NewProp_LobbyId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSessionFindStruct_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSSessionFindStruct Property Definitions ****************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSessionFindStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	&NewStructOps,
	"SSessionFindStruct",
	Z_Construct_UScriptStruct_FSSessionFindStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSessionFindStruct_Statics::PropPointers),
	sizeof(FSSessionFindStruct),
	alignof(FSSessionFindStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSessionFindStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSSessionFindStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSSessionFindStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSSessionFindStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSSessionFindStruct.InnerSingleton, Z_Construct_UScriptStruct_FSSessionFindStruct_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSSessionFindStruct.InnerSingleton);
}
// ********** End ScriptStruct FSSessionFindStruct *************************************************

// ********** Begin ScriptStruct FSIK_AuthTicket ***************************************************
struct Z_Construct_UScriptStruct_FSIK_AuthTicket_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSIK_AuthTicket); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSIK_AuthTicket); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSIK_AuthTicket constinit property declarations *******************
// ********** End ScriptStruct FSIK_AuthTicket constinit property declarations *********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSIK_AuthTicket>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSIK_AuthTicket_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSIK_AuthTicket;
class UScriptStruct* FSIK_AuthTicket::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_AuthTicket.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSIK_AuthTicket.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSIK_AuthTicket, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("SIK_AuthTicket"));
	}
	return Z_Registration_Info_UScriptStruct_FSIK_AuthTicket.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSIK_AuthTicket_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	&NewStructOps,
	"SIK_AuthTicket",
	nullptr,
	0,
	sizeof(FSIK_AuthTicket),
	alignof(FSIK_AuthTicket),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_AuthTicket_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSIK_AuthTicket_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSIK_AuthTicket()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_AuthTicket.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSIK_AuthTicket.InnerSingleton, Z_Construct_UScriptStruct_FSIK_AuthTicket_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSIK_AuthTicket.InnerSingleton);
}
// ********** End ScriptStruct FSIK_AuthTicket *****************************************************

// ********** Begin Enum ESIK_SteamIPType **********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESIK_SteamIPType;
static UEnum* ESIK_SteamIPType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESIK_SteamIPType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESIK_SteamIPType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamIPType, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("ESIK_SteamIPType"));
	}
	return Z_Registration_Info_UEnum_ESIK_SteamIPType.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<ESIK_SteamIPType>()
{
	return ESIK_SteamIPType_StaticEnum();
}
struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamIPType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
		{ "SteamIPTypeIPv4.DisplayName", "IPv4" },
		{ "SteamIPTypeIPv4.Name", "SteamIPTypeIPv4" },
		{ "SteamIPTypeIPv6.DisplayName", "IPv6" },
		{ "SteamIPTypeIPv6.Name", "SteamIPTypeIPv6" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "SteamIPTypeIPv4", (int64)SteamIPTypeIPv4 },
		{ "SteamIPTypeIPv6", (int64)SteamIPTypeIPv6 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamIPType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamIPType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	"ESIK_SteamIPType",
	"ESIK_SteamIPType",
	Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamIPType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamIPType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamIPType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamIPType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamIPType()
{
	if (!Z_Registration_Info_UEnum_ESIK_SteamIPType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESIK_SteamIPType.InnerSingleton, Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamIPType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESIK_SteamIPType.InnerSingleton;
}
// ********** End Enum ESIK_SteamIPType ************************************************************

// ********** Begin ScriptStruct FSIK_FriendsGroupID ***********************************************
struct Z_Construct_UScriptStruct_FSIK_FriendsGroupID_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSIK_FriendsGroupID); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSIK_FriendsGroupID); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSIK_FriendsGroupID constinit property declarations ***************
// ********** End ScriptStruct FSIK_FriendsGroupID constinit property declarations *****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSIK_FriendsGroupID>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSIK_FriendsGroupID_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSIK_FriendsGroupID;
class UScriptStruct* FSIK_FriendsGroupID::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_FriendsGroupID.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSIK_FriendsGroupID.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSIK_FriendsGroupID, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("SIK_FriendsGroupID"));
	}
	return Z_Registration_Info_UScriptStruct_FSIK_FriendsGroupID.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSIK_FriendsGroupID_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	&NewStructOps,
	"SIK_FriendsGroupID",
	nullptr,
	0,
	sizeof(FSIK_FriendsGroupID),
	alignof(FSIK_FriendsGroupID),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_FriendsGroupID_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSIK_FriendsGroupID_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSIK_FriendsGroupID()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_FriendsGroupID.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSIK_FriendsGroupID.InnerSingleton, Z_Construct_UScriptStruct_FSIK_FriendsGroupID_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSIK_FriendsGroupID.InnerSingleton);
}
// ********** End ScriptStruct FSIK_FriendsGroupID *************************************************

// ********** Begin ScriptStruct FSIK_SteamIPAddress ***********************************************
struct Z_Construct_UScriptStruct_FSIK_SteamIPAddress_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSIK_SteamIPAddress); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSIK_SteamIPAddress); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_eType_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_unIPv4_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_ipv6Qword_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSIK_SteamIPAddress constinit property declarations ***************
	static const UECodeGen_Private::FBytePropertyParams NewProp_m_eType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_m_unIPv4;
	static const UECodeGen_Private::FIntPropertyParams NewProp_m_ipv6Qword;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSIK_SteamIPAddress constinit property declarations *****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSIK_SteamIPAddress>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSIK_SteamIPAddress_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSIK_SteamIPAddress;
class UScriptStruct* FSIK_SteamIPAddress::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_SteamIPAddress.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSIK_SteamIPAddress.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSIK_SteamIPAddress, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("SIK_SteamIPAddress"));
	}
	return Z_Registration_Info_UScriptStruct_FSIK_SteamIPAddress.OuterSingleton;
	}

// ********** Begin ScriptStruct FSIK_SteamIPAddress Property Definitions **************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSIK_SteamIPAddress_Statics::NewProp_m_eType = { "m_eType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_SteamIPAddress, m_eType), Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamIPType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_eType_MetaData), NewProp_m_eType_MetaData) }; // 3938986146
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSIK_SteamIPAddress_Statics::NewProp_m_unIPv4 = { "m_unIPv4", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_SteamIPAddress, m_unIPv4), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_unIPv4_MetaData), NewProp_m_unIPv4_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSIK_SteamIPAddress_Statics::NewProp_m_ipv6Qword = { "m_ipv6Qword", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_SteamIPAddress, m_ipv6Qword), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_ipv6Qword_MetaData), NewProp_m_ipv6Qword_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSIK_SteamIPAddress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_SteamIPAddress_Statics::NewProp_m_eType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_SteamIPAddress_Statics::NewProp_m_unIPv4,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_SteamIPAddress_Statics::NewProp_m_ipv6Qword,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_SteamIPAddress_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSIK_SteamIPAddress Property Definitions ****************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSIK_SteamIPAddress_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	&NewStructOps,
	"SIK_SteamIPAddress",
	Z_Construct_UScriptStruct_FSIK_SteamIPAddress_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_SteamIPAddress_Statics::PropPointers),
	sizeof(FSIK_SteamIPAddress),
	alignof(FSIK_SteamIPAddress),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_SteamIPAddress_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSIK_SteamIPAddress_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSIK_SteamIPAddress()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_SteamIPAddress.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSIK_SteamIPAddress.InnerSingleton, Z_Construct_UScriptStruct_FSIK_SteamIPAddress_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSIK_SteamIPAddress.InnerSingleton);
}
// ********** End ScriptStruct FSIK_SteamIPAddress *************************************************

// ********** Begin Enum ESIK_DenyReason ***********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESIK_DenyReason;
static UEnum* ESIK_DenyReason_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESIK_DenyReason.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESIK_DenyReason.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamIntegrationKit_ESIK_DenyReason, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("ESIK_DenyReason"));
	}
	return Z_Registration_Info_UEnum_ESIK_DenyReason.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<ESIK_DenyReason>()
{
	return ESIK_DenyReason_StaticEnum();
}
struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_DenyReason_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DenyCheater.DisplayName", "Cheater" },
		{ "DenyCheater.Name", "DenyCheater" },
		{ "DenyGeneric.DisplayName", "Generic" },
		{ "DenyGeneric.Name", "DenyGeneric" },
		{ "DenyIncompatibleAnticheat.DisplayName", "Incompatible Anticheat" },
		{ "DenyIncompatibleAnticheat.Name", "DenyIncompatibleAnticheat" },
		{ "DenyIncompatibleSoftware.DisplayName", "Incompatible Software" },
		{ "DenyIncompatibleSoftware.Name", "DenyIncompatibleSoftware" },
		{ "DenyInvalid.DisplayName", "Invalid" },
		{ "DenyInvalid.Name", "DenyInvalid" },
		{ "DenyInvalidVersion.DisplayName", "Invalid Version" },
		{ "DenyInvalidVersion.Name", "DenyInvalidVersion" },
		{ "DenyLoggedInElseWhere.DisplayName", "Logged In Elsewhere" },
		{ "DenyLoggedInElseWhere.Name", "DenyLoggedInElseWhere" },
		{ "DenyMemoryCorruption.DisplayName", "Memory Corruption" },
		{ "DenyMemoryCorruption.Name", "DenyMemoryCorruption" },
		{ "DenyNoLicense.DisplayName", "No License" },
		{ "DenyNoLicense.Name", "DenyNoLicense" },
		{ "DenyNotLoggedOn.DisplayName", "Not Logged On" },
		{ "DenyNotLoggedOn.Name", "DenyNotLoggedOn" },
		{ "DenySteamConnectionError.DisplayName", "Steam Connection Error" },
		{ "DenySteamConnectionError.Name", "DenySteamConnectionError" },
		{ "DenySteamConnectionLost.DisplayName", "Steam Connection Lost" },
		{ "DenySteamConnectionLost.Name", "DenySteamConnectionLost" },
		{ "DenySteamOwnerLeftGuestUser.DisplayName", "Steam Owner Left Guest User" },
		{ "DenySteamOwnerLeftGuestUser.Name", "DenySteamOwnerLeftGuestUser" },
		{ "DenySteamResponseTimedOut.DisplayName", "Steam Response Timed Out" },
		{ "DenySteamResponseTimedOut.Name", "DenySteamResponseTimedOut" },
		{ "DenySteamValidationStalled.DisplayName", "Steam Validation Stalled" },
		{ "DenySteamValidationStalled.Name", "DenySteamValidationStalled" },
		{ "DenyUnknownText.DisplayName", "Unknown Text" },
		{ "DenyUnknownText.Name", "DenyUnknownText" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "DenyInvalid", (int64)DenyInvalid },
		{ "DenyInvalidVersion", (int64)DenyInvalidVersion },
		{ "DenyGeneric", (int64)DenyGeneric },
		{ "DenyNotLoggedOn", (int64)DenyNotLoggedOn },
		{ "DenyNoLicense", (int64)DenyNoLicense },
		{ "DenyCheater", (int64)DenyCheater },
		{ "DenyLoggedInElseWhere", (int64)DenyLoggedInElseWhere },
		{ "DenyUnknownText", (int64)DenyUnknownText },
		{ "DenyIncompatibleAnticheat", (int64)DenyIncompatibleAnticheat },
		{ "DenyMemoryCorruption", (int64)DenyMemoryCorruption },
		{ "DenyIncompatibleSoftware", (int64)DenyIncompatibleSoftware },
		{ "DenySteamConnectionLost", (int64)DenySteamConnectionLost },
		{ "DenySteamConnectionError", (int64)DenySteamConnectionError },
		{ "DenySteamResponseTimedOut", (int64)DenySteamResponseTimedOut },
		{ "DenySteamValidationStalled", (int64)DenySteamValidationStalled },
		{ "DenySteamOwnerLeftGuestUser", (int64)DenySteamOwnerLeftGuestUser },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_DenyReason_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamIntegrationKit_ESIK_DenyReason_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	"ESIK_DenyReason",
	"ESIK_DenyReason",
	Z_Construct_UEnum_SteamIntegrationKit_ESIK_DenyReason_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_DenyReason_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_DenyReason_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamIntegrationKit_ESIK_DenyReason_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_DenyReason()
{
	if (!Z_Registration_Info_UEnum_ESIK_DenyReason.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESIK_DenyReason.InnerSingleton, Z_Construct_UEnum_SteamIntegrationKit_ESIK_DenyReason_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESIK_DenyReason.InnerSingleton;
}
// ********** End Enum ESIK_DenyReason *************************************************************

// ********** Begin Enum ESIK_SteamPartyBeaconLocationType *****************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESIK_SteamPartyBeaconLocationType;
static UEnum* ESIK_SteamPartyBeaconLocationType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESIK_SteamPartyBeaconLocationType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESIK_SteamPartyBeaconLocationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamPartyBeaconLocationType, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("ESIK_SteamPartyBeaconLocationType"));
	}
	return Z_Registration_Info_UEnum_ESIK_SteamPartyBeaconLocationType.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<ESIK_SteamPartyBeaconLocationType>()
{
	return ESIK_SteamPartyBeaconLocationType_StaticEnum();
}
struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamPartyBeaconLocationType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
		{ "SteamPartyBeaconLocationType_ChatGroup.DisplayName", "Chat Group" },
		{ "SteamPartyBeaconLocationType_ChatGroup.Name", "SteamPartyBeaconLocationType_ChatGroup" },
		{ "SteamPartyBeaconLocationType_Invalid.DisplayName", "Invalid" },
		{ "SteamPartyBeaconLocationType_Invalid.Name", "SteamPartyBeaconLocationType_Invalid" },
		{ "SteamPartyBeaconLocationType_Max.DisplayName", "Max" },
		{ "SteamPartyBeaconLocationType_Max.Name", "SteamPartyBeaconLocationType_Max" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "SteamPartyBeaconLocationType_Invalid", (int64)SteamPartyBeaconLocationType_Invalid },
		{ "SteamPartyBeaconLocationType_ChatGroup", (int64)SteamPartyBeaconLocationType_ChatGroup },
		{ "SteamPartyBeaconLocationType_Max", (int64)SteamPartyBeaconLocationType_Max },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamPartyBeaconLocationType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamPartyBeaconLocationType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	"ESIK_SteamPartyBeaconLocationType",
	"ESIK_SteamPartyBeaconLocationType",
	Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamPartyBeaconLocationType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamPartyBeaconLocationType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamPartyBeaconLocationType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamPartyBeaconLocationType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamPartyBeaconLocationType()
{
	if (!Z_Registration_Info_UEnum_ESIK_SteamPartyBeaconLocationType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESIK_SteamPartyBeaconLocationType.InnerSingleton, Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamPartyBeaconLocationType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESIK_SteamPartyBeaconLocationType.InnerSingleton;
}
// ********** End Enum ESIK_SteamPartyBeaconLocationType *******************************************

// ********** Begin ScriptStruct FSIK_SteamPartyBeaconLocation *************************************
struct Z_Construct_UScriptStruct_FSIK_SteamPartyBeaconLocation_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSIK_SteamPartyBeaconLocation); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSIK_SteamPartyBeaconLocation); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_eType_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_ulLocationID_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSIK_SteamPartyBeaconLocation constinit property declarations *****
	static const UECodeGen_Private::FBytePropertyParams NewProp_m_eType;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_m_ulLocationID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSIK_SteamPartyBeaconLocation constinit property declarations *******
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSIK_SteamPartyBeaconLocation>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSIK_SteamPartyBeaconLocation_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSIK_SteamPartyBeaconLocation;
class UScriptStruct* FSIK_SteamPartyBeaconLocation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_SteamPartyBeaconLocation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSIK_SteamPartyBeaconLocation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSIK_SteamPartyBeaconLocation, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("SIK_SteamPartyBeaconLocation"));
	}
	return Z_Registration_Info_UScriptStruct_FSIK_SteamPartyBeaconLocation.OuterSingleton;
	}

// ********** Begin ScriptStruct FSIK_SteamPartyBeaconLocation Property Definitions ****************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSIK_SteamPartyBeaconLocation_Statics::NewProp_m_eType = { "m_eType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_SteamPartyBeaconLocation, m_eType), Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamPartyBeaconLocationType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_eType_MetaData), NewProp_m_eType_MetaData) }; // 389953079
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FSIK_SteamPartyBeaconLocation_Statics::NewProp_m_ulLocationID = { "m_ulLocationID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_SteamPartyBeaconLocation, m_ulLocationID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_ulLocationID_MetaData), NewProp_m_ulLocationID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSIK_SteamPartyBeaconLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_SteamPartyBeaconLocation_Statics::NewProp_m_eType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_SteamPartyBeaconLocation_Statics::NewProp_m_ulLocationID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_SteamPartyBeaconLocation_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSIK_SteamPartyBeaconLocation Property Definitions ******************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSIK_SteamPartyBeaconLocation_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	&NewStructOps,
	"SIK_SteamPartyBeaconLocation",
	Z_Construct_UScriptStruct_FSIK_SteamPartyBeaconLocation_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_SteamPartyBeaconLocation_Statics::PropPointers),
	sizeof(FSIK_SteamPartyBeaconLocation),
	alignof(FSIK_SteamPartyBeaconLocation),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_SteamPartyBeaconLocation_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSIK_SteamPartyBeaconLocation_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSIK_SteamPartyBeaconLocation()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_SteamPartyBeaconLocation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSIK_SteamPartyBeaconLocation.InnerSingleton, Z_Construct_UScriptStruct_FSIK_SteamPartyBeaconLocation_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSIK_SteamPartyBeaconLocation.InnerSingleton);
}
// ********** End ScriptStruct FSIK_SteamPartyBeaconLocation ***************************************

// ********** Begin Enum ESIK_LobbyDistanceFilter **************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESIK_LobbyDistanceFilter;
static UEnum* ESIK_LobbyDistanceFilter_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESIK_LobbyDistanceFilter.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESIK_LobbyDistanceFilter.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamIntegrationKit_ESIK_LobbyDistanceFilter, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("ESIK_LobbyDistanceFilter"));
	}
	return Z_Registration_Info_UEnum_ESIK_LobbyDistanceFilter.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<ESIK_LobbyDistanceFilter>()
{
	return ESIK_LobbyDistanceFilter_StaticEnum();
}
struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_LobbyDistanceFilter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "LobbyDistanceFilterClose.DisplayName", "Close" },
		{ "LobbyDistanceFilterClose.Name", "LobbyDistanceFilterClose" },
		{ "LobbyDistanceFilterDefault.DisplayName", "Default" },
		{ "LobbyDistanceFilterDefault.Name", "LobbyDistanceFilterDefault" },
		{ "LobbyDistanceFilterFar.DisplayName", "Far" },
		{ "LobbyDistanceFilterFar.Name", "LobbyDistanceFilterFar" },
		{ "LobbyDistanceFilterWorldwide.DisplayName", "Worldwide" },
		{ "LobbyDistanceFilterWorldwide.Name", "LobbyDistanceFilterWorldwide" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "LobbyDistanceFilterClose", (int64)LobbyDistanceFilterClose },
		{ "LobbyDistanceFilterDefault", (int64)LobbyDistanceFilterDefault },
		{ "LobbyDistanceFilterFar", (int64)LobbyDistanceFilterFar },
		{ "LobbyDistanceFilterWorldwide", (int64)LobbyDistanceFilterWorldwide },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_LobbyDistanceFilter_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamIntegrationKit_ESIK_LobbyDistanceFilter_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	"ESIK_LobbyDistanceFilter",
	"ESIK_LobbyDistanceFilter",
	Z_Construct_UEnum_SteamIntegrationKit_ESIK_LobbyDistanceFilter_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_LobbyDistanceFilter_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_LobbyDistanceFilter_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamIntegrationKit_ESIK_LobbyDistanceFilter_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_LobbyDistanceFilter()
{
	if (!Z_Registration_Info_UEnum_ESIK_LobbyDistanceFilter.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESIK_LobbyDistanceFilter.InnerSingleton, Z_Construct_UEnum_SteamIntegrationKit_ESIK_LobbyDistanceFilter_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESIK_LobbyDistanceFilter.InnerSingleton;
}
// ********** End Enum ESIK_LobbyDistanceFilter ****************************************************

// ********** Begin Enum ESIK_LobbyComparisonType **************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESIK_LobbyComparisonType;
static UEnum* ESIK_LobbyComparisonType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESIK_LobbyComparisonType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESIK_LobbyComparisonType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamIntegrationKit_ESIK_LobbyComparisonType, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("ESIK_LobbyComparisonType"));
	}
	return Z_Registration_Info_UEnum_ESIK_LobbyComparisonType.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<ESIK_LobbyComparisonType>()
{
	return ESIK_LobbyComparisonType_StaticEnum();
}
struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_LobbyComparisonType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "LobbyComparisonEqualTo.DisplayName", "Equal To" },
		{ "LobbyComparisonEqualTo.Name", "LobbyComparisonEqualTo" },
		{ "LobbyComparisonEqualToOrGreaterThan.DisplayName", "Equal To Or Greater Than" },
		{ "LobbyComparisonEqualToOrGreaterThan.Name", "LobbyComparisonEqualToOrGreaterThan" },
		{ "LobbyComparisonEqualToOrLessThan.DisplayName", "Equal To Or Less Than" },
		{ "LobbyComparisonEqualToOrLessThan.Name", "LobbyComparisonEqualToOrLessThan" },
		{ "LobbyComparisonGreaterThan.DisplayName", "Greater Than" },
		{ "LobbyComparisonGreaterThan.Name", "LobbyComparisonGreaterThan" },
		{ "LobbyComparisonLessThan.DisplayName", "Less Than" },
		{ "LobbyComparisonLessThan.Name", "LobbyComparisonLessThan" },
		{ "LobbyComparisonNotEqualTo.DisplayName", "Not Equal To" },
		{ "LobbyComparisonNotEqualTo.Name", "LobbyComparisonNotEqualTo" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "LobbyComparisonEqualToOrLessThan", (int64)LobbyComparisonEqualToOrLessThan },
		{ "LobbyComparisonLessThan", (int64)LobbyComparisonLessThan },
		{ "LobbyComparisonEqualTo", (int64)LobbyComparisonEqualTo },
		{ "LobbyComparisonGreaterThan", (int64)LobbyComparisonGreaterThan },
		{ "LobbyComparisonEqualToOrGreaterThan", (int64)LobbyComparisonEqualToOrGreaterThan },
		{ "LobbyComparisonNotEqualTo", (int64)LobbyComparisonNotEqualTo },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_LobbyComparisonType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamIntegrationKit_ESIK_LobbyComparisonType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	"ESIK_LobbyComparisonType",
	"ESIK_LobbyComparisonType",
	Z_Construct_UEnum_SteamIntegrationKit_ESIK_LobbyComparisonType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_LobbyComparisonType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_LobbyComparisonType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamIntegrationKit_ESIK_LobbyComparisonType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_LobbyComparisonType()
{
	if (!Z_Registration_Info_UEnum_ESIK_LobbyComparisonType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESIK_LobbyComparisonType.InnerSingleton, Z_Construct_UEnum_SteamIntegrationKit_ESIK_LobbyComparisonType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESIK_LobbyComparisonType.InnerSingleton;
}
// ********** End Enum ESIK_LobbyComparisonType ****************************************************

// ********** Begin Enum ESIK_LobbyType ************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESIK_LobbyType;
static UEnum* ESIK_LobbyType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESIK_LobbyType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESIK_LobbyType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamIntegrationKit_ESIK_LobbyType, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("ESIK_LobbyType"));
	}
	return Z_Registration_Info_UEnum_ESIK_LobbyType.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<ESIK_LobbyType>()
{
	return ESIK_LobbyType_StaticEnum();
}
struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_LobbyType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "LobbyTypeFriendsOnly.DisplayName", "Friends Only" },
		{ "LobbyTypeFriendsOnly.Name", "LobbyTypeFriendsOnly" },
		{ "LobbyTypeInvisible.DisplayName", "Invisible" },
		{ "LobbyTypeInvisible.Name", "LobbyTypeInvisible" },
		{ "LobbyTypePrivate.DisplayName", "Private" },
		{ "LobbyTypePrivate.Name", "LobbyTypePrivate" },
		{ "LobbyTypePublic.DisplayName", "Public" },
		{ "LobbyTypePublic.Name", "LobbyTypePublic" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "LobbyTypePrivate", (int64)LobbyTypePrivate },
		{ "LobbyTypeFriendsOnly", (int64)LobbyTypeFriendsOnly },
		{ "LobbyTypePublic", (int64)LobbyTypePublic },
		{ "LobbyTypeInvisible", (int64)LobbyTypeInvisible },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_LobbyType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamIntegrationKit_ESIK_LobbyType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	"ESIK_LobbyType",
	"ESIK_LobbyType",
	Z_Construct_UEnum_SteamIntegrationKit_ESIK_LobbyType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_LobbyType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_LobbyType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamIntegrationKit_ESIK_LobbyType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_LobbyType()
{
	if (!Z_Registration_Info_UEnum_ESIK_LobbyType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESIK_LobbyType.InnerSingleton, Z_Construct_UEnum_SteamIntegrationKit_ESIK_LobbyType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESIK_LobbyType.InnerSingleton;
}
// ********** End Enum ESIK_LobbyType **************************************************************

// ********** Begin Enum ESIK_LobbyChatEntryType ***************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESIK_LobbyChatEntryType;
static UEnum* ESIK_LobbyChatEntryType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESIK_LobbyChatEntryType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESIK_LobbyChatEntryType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamIntegrationKit_ESIK_LobbyChatEntryType, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("ESIK_LobbyChatEntryType"));
	}
	return Z_Registration_Info_UEnum_ESIK_LobbyChatEntryType.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<ESIK_LobbyChatEntryType>()
{
	return ESIK_LobbyChatEntryType_StaticEnum();
}
struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_LobbyChatEntryType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ChatEntryTypeChatMsg.DisplayName", "Chat Message" },
		{ "ChatEntryTypeChatMsg.Name", "ChatEntryTypeChatMsg" },
		{ "ChatEntryTypeDisconnected.DisplayName", "Disconnected" },
		{ "ChatEntryTypeDisconnected.Name", "ChatEntryTypeDisconnected" },
		{ "ChatEntryTypeEmote.DisplayName", "Emote" },
		{ "ChatEntryTypeEmote.Name", "ChatEntryTypeEmote" },
		{ "ChatEntryTypeEntered.DisplayName", "Entered" },
		{ "ChatEntryTypeEntered.Name", "ChatEntryTypeEntered" },
		{ "ChatEntryTypeHistoricalChat.DisplayName", "Historical Chat" },
		{ "ChatEntryTypeHistoricalChat.Name", "ChatEntryTypeHistoricalChat" },
		{ "ChatEntryTypeInvalid.DisplayName", "Invalid" },
		{ "ChatEntryTypeInvalid.Name", "ChatEntryTypeInvalid" },
		{ "ChatEntryTypeInviteGame.DisplayName", "Invite Game" },
		{ "ChatEntryTypeInviteGame.Name", "ChatEntryTypeInviteGame" },
		{ "ChatEntryTypeLeftConversation.DisplayName", "Left Conversation" },
		{ "ChatEntryTypeLeftConversation.Name", "ChatEntryTypeLeftConversation" },
		{ "ChatEntryTypeLinkBlocked.DisplayName", "Link Blocked" },
		{ "ChatEntryTypeLinkBlocked.Name", "ChatEntryTypeLinkBlocked" },
		{ "ChatEntryTypeTyping.DisplayName", "Typing" },
		{ "ChatEntryTypeTyping.Name", "ChatEntryTypeTyping" },
		{ "ChatEntryTypeWasBanned.DisplayName", "Was Banned" },
		{ "ChatEntryTypeWasBanned.Name", "ChatEntryTypeWasBanned" },
		{ "ChatEntryTypeWasKicked.DisplayName", "Was Kicked" },
		{ "ChatEntryTypeWasKicked.Name", "ChatEntryTypeWasKicked" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ChatEntryTypeInvalid", (int64)ChatEntryTypeInvalid },
		{ "ChatEntryTypeChatMsg", (int64)ChatEntryTypeChatMsg },
		{ "ChatEntryTypeTyping", (int64)ChatEntryTypeTyping },
		{ "ChatEntryTypeInviteGame", (int64)ChatEntryTypeInviteGame },
		{ "ChatEntryTypeEmote", (int64)ChatEntryTypeEmote },
		{ "ChatEntryTypeLeftConversation", (int64)ChatEntryTypeLeftConversation },
		{ "ChatEntryTypeEntered", (int64)ChatEntryTypeEntered },
		{ "ChatEntryTypeWasKicked", (int64)ChatEntryTypeWasKicked },
		{ "ChatEntryTypeWasBanned", (int64)ChatEntryTypeWasBanned },
		{ "ChatEntryTypeDisconnected", (int64)ChatEntryTypeDisconnected },
		{ "ChatEntryTypeHistoricalChat", (int64)ChatEntryTypeHistoricalChat },
		{ "ChatEntryTypeLinkBlocked", (int64)ChatEntryTypeLinkBlocked },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_LobbyChatEntryType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamIntegrationKit_ESIK_LobbyChatEntryType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	"ESIK_LobbyChatEntryType",
	"ESIK_LobbyChatEntryType",
	Z_Construct_UEnum_SteamIntegrationKit_ESIK_LobbyChatEntryType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_LobbyChatEntryType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_LobbyChatEntryType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamIntegrationKit_ESIK_LobbyChatEntryType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_LobbyChatEntryType()
{
	if (!Z_Registration_Info_UEnum_ESIK_LobbyChatEntryType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESIK_LobbyChatEntryType.InnerSingleton, Z_Construct_UEnum_SteamIntegrationKit_ESIK_LobbyChatEntryType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESIK_LobbyChatEntryType.InnerSingleton;
}
// ********** End Enum ESIK_LobbyChatEntryType *****************************************************

// ********** Begin Enum ESIK_ChatRoomEnterResponse ************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESIK_ChatRoomEnterResponse;
static UEnum* ESIK_ChatRoomEnterResponse_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESIK_ChatRoomEnterResponse.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESIK_ChatRoomEnterResponse.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamIntegrationKit_ESIK_ChatRoomEnterResponse, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("ESIK_ChatRoomEnterResponse"));
	}
	return Z_Registration_Info_UEnum_ESIK_ChatRoomEnterResponse.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<ESIK_ChatRoomEnterResponse>()
{
	return ESIK_ChatRoomEnterResponse_StaticEnum();
}
struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_ChatRoomEnterResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ChatRoomEnterResponseBanned.DisplayName", "Banned" },
		{ "ChatRoomEnterResponseBanned.Name", "ChatRoomEnterResponseBanned" },
		{ "ChatRoomEnterResponseClanDisabled.DisplayName", "Clan Disabled" },
		{ "ChatRoomEnterResponseClanDisabled.Name", "ChatRoomEnterResponseClanDisabled" },
		{ "ChatRoomEnterResponseCommunityBan.DisplayName", "Community Ban" },
		{ "ChatRoomEnterResponseCommunityBan.Name", "ChatRoomEnterResponseCommunityBan" },
		{ "ChatRoomEnterResponseDoesntExist.DisplayName", "Doesn't Exist" },
		{ "ChatRoomEnterResponseDoesntExist.Name", "ChatRoomEnterResponseDoesntExist" },
		{ "ChatRoomEnterResponseError.DisplayName", "Error" },
		{ "ChatRoomEnterResponseError.Name", "ChatRoomEnterResponseError" },
		{ "ChatRoomEnterResponseFull.DisplayName", "Full" },
		{ "ChatRoomEnterResponseFull.Name", "ChatRoomEnterResponseFull" },
		{ "ChatRoomEnterResponseLimited.DisplayName", "Limited" },
		{ "ChatRoomEnterResponseLimited.Name", "ChatRoomEnterResponseLimited" },
		{ "ChatRoomEnterResponseMemberBlockedYou.DisplayName", "Member Blocked You" },
		{ "ChatRoomEnterResponseMemberBlockedYou.Name", "ChatRoomEnterResponseMemberBlockedYou" },
		{ "ChatRoomEnterResponseNotAllowed.DisplayName", "Not Allowed" },
		{ "ChatRoomEnterResponseNotAllowed.Name", "ChatRoomEnterResponseNotAllowed" },
		{ "ChatRoomEnterResponseRatelimitExceeded.DisplayName", "Ratelimit Exceeded" },
		{ "ChatRoomEnterResponseRatelimitExceeded.Name", "ChatRoomEnterResponseRatelimitExceeded" },
		{ "ChatRoomEnterResponseSuccess.DisplayName", "Success" },
		{ "ChatRoomEnterResponseSuccess.Name", "ChatRoomEnterResponseSuccess" },
		{ "ChatRoomEnterResponseYouBlockedMember.DisplayName", "You Blocked Member" },
		{ "ChatRoomEnterResponseYouBlockedMember.Name", "ChatRoomEnterResponseYouBlockedMember" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "None" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "None", (int64)None },
		{ "ChatRoomEnterResponseSuccess", (int64)ChatRoomEnterResponseSuccess },
		{ "ChatRoomEnterResponseDoesntExist", (int64)ChatRoomEnterResponseDoesntExist },
		{ "ChatRoomEnterResponseNotAllowed", (int64)ChatRoomEnterResponseNotAllowed },
		{ "ChatRoomEnterResponseFull", (int64)ChatRoomEnterResponseFull },
		{ "ChatRoomEnterResponseError", (int64)ChatRoomEnterResponseError },
		{ "ChatRoomEnterResponseBanned", (int64)ChatRoomEnterResponseBanned },
		{ "ChatRoomEnterResponseLimited", (int64)ChatRoomEnterResponseLimited },
		{ "ChatRoomEnterResponseClanDisabled", (int64)ChatRoomEnterResponseClanDisabled },
		{ "ChatRoomEnterResponseCommunityBan", (int64)ChatRoomEnterResponseCommunityBan },
		{ "ChatRoomEnterResponseMemberBlockedYou", (int64)ChatRoomEnterResponseMemberBlockedYou },
		{ "ChatRoomEnterResponseYouBlockedMember", (int64)ChatRoomEnterResponseYouBlockedMember },
		{ "ChatRoomEnterResponseRatelimitExceeded", (int64)ChatRoomEnterResponseRatelimitExceeded },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_ChatRoomEnterResponse_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamIntegrationKit_ESIK_ChatRoomEnterResponse_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	"ESIK_ChatRoomEnterResponse",
	"ESIK_ChatRoomEnterResponse",
	Z_Construct_UEnum_SteamIntegrationKit_ESIK_ChatRoomEnterResponse_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_ChatRoomEnterResponse_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_ChatRoomEnterResponse_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamIntegrationKit_ESIK_ChatRoomEnterResponse_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_ChatRoomEnterResponse()
{
	if (!Z_Registration_Info_UEnum_ESIK_ChatRoomEnterResponse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESIK_ChatRoomEnterResponse.InnerSingleton, Z_Construct_UEnum_SteamIntegrationKit_ESIK_ChatRoomEnterResponse_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESIK_ChatRoomEnterResponse.InnerSingleton;
}
// ********** End Enum ESIK_ChatRoomEnterResponse **************************************************

// ********** Begin Enum ESIK_LobbyChatMemberStateChange *******************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESIK_LobbyChatMemberStateChange;
static UEnum* ESIK_LobbyChatMemberStateChange_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESIK_LobbyChatMemberStateChange.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESIK_LobbyChatMemberStateChange.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamIntegrationKit_ESIK_LobbyChatMemberStateChange, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("ESIK_LobbyChatMemberStateChange"));
	}
	return Z_Registration_Info_UEnum_ESIK_LobbyChatMemberStateChange.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<ESIK_LobbyChatMemberStateChange>()
{
	return ESIK_LobbyChatMemberStateChange_StaticEnum();
}
struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_LobbyChatMemberStateChange_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ChatMemberStateChangeBanned.DisplayName", "Banned" },
		{ "ChatMemberStateChangeBanned.Name", "ChatMemberStateChangeBanned" },
		{ "ChatMemberStateChangeDisconnected.DisplayName", "Disconnected" },
		{ "ChatMemberStateChangeDisconnected.Name", "ChatMemberStateChangeDisconnected" },
		{ "ChatMemberStateChangeEntered.DisplayName", "Entered" },
		{ "ChatMemberStateChangeEntered.Name", "ChatMemberStateChangeEntered" },
		{ "ChatMemberStateChangeInvalid.DisplayName", "Invalid" },
		{ "ChatMemberStateChangeInvalid.Name", "ChatMemberStateChangeInvalid" },
		{ "ChatMemberStateChangeKicked.DisplayName", "Kicked" },
		{ "ChatMemberStateChangeKicked.Name", "ChatMemberStateChangeKicked" },
		{ "ChatMemberStateChangeLeft.DisplayName", "Left" },
		{ "ChatMemberStateChangeLeft.Name", "ChatMemberStateChangeLeft" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ChatMemberStateChangeInvalid", (int64)ChatMemberStateChangeInvalid },
		{ "ChatMemberStateChangeEntered", (int64)ChatMemberStateChangeEntered },
		{ "ChatMemberStateChangeLeft", (int64)ChatMemberStateChangeLeft },
		{ "ChatMemberStateChangeDisconnected", (int64)ChatMemberStateChangeDisconnected },
		{ "ChatMemberStateChangeKicked", (int64)ChatMemberStateChangeKicked },
		{ "ChatMemberStateChangeBanned", (int64)ChatMemberStateChangeBanned },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_LobbyChatMemberStateChange_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamIntegrationKit_ESIK_LobbyChatMemberStateChange_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	"ESIK_LobbyChatMemberStateChange",
	"ESIK_LobbyChatMemberStateChange",
	Z_Construct_UEnum_SteamIntegrationKit_ESIK_LobbyChatMemberStateChange_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_LobbyChatMemberStateChange_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_LobbyChatMemberStateChange_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamIntegrationKit_ESIK_LobbyChatMemberStateChange_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_LobbyChatMemberStateChange()
{
	if (!Z_Registration_Info_UEnum_ESIK_LobbyChatMemberStateChange.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESIK_LobbyChatMemberStateChange.InnerSingleton, Z_Construct_UEnum_SteamIntegrationKit_ESIK_LobbyChatMemberStateChange_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESIK_LobbyChatMemberStateChange.InnerSingleton;
}
// ********** End Enum ESIK_LobbyChatMemberStateChange *********************************************

// ********** Begin ScriptStruct FSIK_SessionFindSettings ******************************************
struct Z_Construct_UScriptStruct_FSIK_SessionFindSettings_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSIK_SessionFindSettings); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSIK_SessionFindSettings); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSIK_SessionFindSettings constinit property declarations **********
// ********** End ScriptStruct FSIK_SessionFindSettings constinit property declarations ************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSIK_SessionFindSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSIK_SessionFindSettings_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSIK_SessionFindSettings;
class UScriptStruct* FSIK_SessionFindSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_SessionFindSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSIK_SessionFindSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSIK_SessionFindSettings, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("SIK_SessionFindSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FSIK_SessionFindSettings.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSIK_SessionFindSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	&NewStructOps,
	"SIK_SessionFindSettings",
	nullptr,
	0,
	sizeof(FSIK_SessionFindSettings),
	alignof(FSIK_SessionFindSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_SessionFindSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSIK_SessionFindSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSIK_SessionFindSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_SessionFindSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSIK_SessionFindSettings.InnerSingleton, Z_Construct_UScriptStruct_FSIK_SessionFindSettings_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSIK_SessionFindSettings.InnerSingleton);
}
// ********** End ScriptStruct FSIK_SessionFindSettings ********************************************

// ********** Begin ScriptStruct FSIK_ServerNetAddress *********************************************
struct Z_Construct_UScriptStruct_FSIK_ServerNetAddress_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSIK_ServerNetAddress); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSIK_ServerNetAddress); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QueryPort_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConnectionPort_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IP_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConnectionAddress_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QueryAddress_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSIK_ServerNetAddress constinit property declarations *************
	static const UECodeGen_Private::FIntPropertyParams NewProp_QueryPort;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ConnectionPort;
	static const UECodeGen_Private::FStrPropertyParams NewProp_IP;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ConnectionAddress;
	static const UECodeGen_Private::FStrPropertyParams NewProp_QueryAddress;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSIK_ServerNetAddress constinit property declarations ***************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSIK_ServerNetAddress>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSIK_ServerNetAddress_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSIK_ServerNetAddress;
class UScriptStruct* FSIK_ServerNetAddress::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_ServerNetAddress.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSIK_ServerNetAddress.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSIK_ServerNetAddress, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("SIK_ServerNetAddress"));
	}
	return Z_Registration_Info_UScriptStruct_FSIK_ServerNetAddress.OuterSingleton;
	}

// ********** Begin ScriptStruct FSIK_ServerNetAddress Property Definitions ************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSIK_ServerNetAddress_Statics::NewProp_QueryPort = { "QueryPort", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_ServerNetAddress, QueryPort), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QueryPort_MetaData), NewProp_QueryPort_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSIK_ServerNetAddress_Statics::NewProp_ConnectionPort = { "ConnectionPort", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_ServerNetAddress, ConnectionPort), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConnectionPort_MetaData), NewProp_ConnectionPort_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSIK_ServerNetAddress_Statics::NewProp_IP = { "IP", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_ServerNetAddress, IP), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IP_MetaData), NewProp_IP_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSIK_ServerNetAddress_Statics::NewProp_ConnectionAddress = { "ConnectionAddress", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_ServerNetAddress, ConnectionAddress), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConnectionAddress_MetaData), NewProp_ConnectionAddress_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSIK_ServerNetAddress_Statics::NewProp_QueryAddress = { "QueryAddress", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_ServerNetAddress, QueryAddress), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QueryAddress_MetaData), NewProp_QueryAddress_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSIK_ServerNetAddress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_ServerNetAddress_Statics::NewProp_QueryPort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_ServerNetAddress_Statics::NewProp_ConnectionPort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_ServerNetAddress_Statics::NewProp_IP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_ServerNetAddress_Statics::NewProp_ConnectionAddress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_ServerNetAddress_Statics::NewProp_QueryAddress,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_ServerNetAddress_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSIK_ServerNetAddress Property Definitions **************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSIK_ServerNetAddress_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	&NewStructOps,
	"SIK_ServerNetAddress",
	Z_Construct_UScriptStruct_FSIK_ServerNetAddress_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_ServerNetAddress_Statics::PropPointers),
	sizeof(FSIK_ServerNetAddress),
	alignof(FSIK_ServerNetAddress),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_ServerNetAddress_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSIK_ServerNetAddress_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSIK_ServerNetAddress()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_ServerNetAddress.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSIK_ServerNetAddress.InnerSingleton, Z_Construct_UScriptStruct_FSIK_ServerNetAddress_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSIK_ServerNetAddress.InnerSingleton);
}
// ********** End ScriptStruct FSIK_ServerNetAddress ***********************************************

// ********** Begin ScriptStruct FSIK_FoundServers *************************************************
struct Z_Construct_UScriptStruct_FSIK_FoundServers_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSIK_FoundServers); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSIK_FoundServers); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ping_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHadSuccessfulResponse_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDoNotRefresh_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameDir_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Map_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameDescription_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppID_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerID_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Players_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPlayers_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BotPlayers_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPasswordProtected_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSecure_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeLastPlayed_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerVersion_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerName_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameTags_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerNetAddress_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSIK_FoundServers constinit property declarations *****************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Ping;
	static void NewProp_bHadSuccessfulResponse_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHadSuccessfulResponse;
	static void NewProp_bDoNotRefresh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoNotRefresh;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GameDir;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Map;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GameDescription;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ServerID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Players;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPlayers;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BotPlayers;
	static void NewProp_bPasswordProtected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPasswordProtected;
	static void NewProp_bSecure_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSecure;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TimeLastPlayed;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ServerVersion;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ServerName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GameTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ServerNetAddress;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSIK_FoundServers constinit property declarations *******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSIK_FoundServers>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSIK_FoundServers_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSIK_FoundServers;
class UScriptStruct* FSIK_FoundServers::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_FoundServers.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSIK_FoundServers.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSIK_FoundServers, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("SIK_FoundServers"));
	}
	return Z_Registration_Info_UScriptStruct_FSIK_FoundServers.OuterSingleton;
	}

// ********** Begin ScriptStruct FSIK_FoundServers Property Definitions ****************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSIK_FoundServers_Statics::NewProp_Ping = { "Ping", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_FoundServers, Ping), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ping_MetaData), NewProp_Ping_MetaData) };
void Z_Construct_UScriptStruct_FSIK_FoundServers_Statics::NewProp_bHadSuccessfulResponse_SetBit(void* Obj)
{
	((FSIK_FoundServers*)Obj)->bHadSuccessfulResponse = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSIK_FoundServers_Statics::NewProp_bHadSuccessfulResponse = { "bHadSuccessfulResponse", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSIK_FoundServers), &Z_Construct_UScriptStruct_FSIK_FoundServers_Statics::NewProp_bHadSuccessfulResponse_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHadSuccessfulResponse_MetaData), NewProp_bHadSuccessfulResponse_MetaData) };
void Z_Construct_UScriptStruct_FSIK_FoundServers_Statics::NewProp_bDoNotRefresh_SetBit(void* Obj)
{
	((FSIK_FoundServers*)Obj)->bDoNotRefresh = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSIK_FoundServers_Statics::NewProp_bDoNotRefresh = { "bDoNotRefresh", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSIK_FoundServers), &Z_Construct_UScriptStruct_FSIK_FoundServers_Statics::NewProp_bDoNotRefresh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDoNotRefresh_MetaData), NewProp_bDoNotRefresh_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSIK_FoundServers_Statics::NewProp_GameDir = { "GameDir", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_FoundServers, GameDir), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameDir_MetaData), NewProp_GameDir_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSIK_FoundServers_Statics::NewProp_Map = { "Map", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_FoundServers, Map), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Map_MetaData), NewProp_Map_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSIK_FoundServers_Statics::NewProp_GameDescription = { "GameDescription", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_FoundServers, GameDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameDescription_MetaData), NewProp_GameDescription_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSIK_FoundServers_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_FoundServers, AppID), Z_Construct_UScriptStruct_FSIK_AppId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppID_MetaData), NewProp_AppID_MetaData) }; // 3325316996
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSIK_FoundServers_Statics::NewProp_ServerID = { "ServerID", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_FoundServers, ServerID), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerID_MetaData), NewProp_ServerID_MetaData) }; // 3413883574
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSIK_FoundServers_Statics::NewProp_Players = { "Players", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_FoundServers, Players), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Players_MetaData), NewProp_Players_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSIK_FoundServers_Statics::NewProp_MaxPlayers = { "MaxPlayers", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_FoundServers, MaxPlayers), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPlayers_MetaData), NewProp_MaxPlayers_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSIK_FoundServers_Statics::NewProp_BotPlayers = { "BotPlayers", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_FoundServers, BotPlayers), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BotPlayers_MetaData), NewProp_BotPlayers_MetaData) };
void Z_Construct_UScriptStruct_FSIK_FoundServers_Statics::NewProp_bPasswordProtected_SetBit(void* Obj)
{
	((FSIK_FoundServers*)Obj)->bPasswordProtected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSIK_FoundServers_Statics::NewProp_bPasswordProtected = { "bPasswordProtected", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSIK_FoundServers), &Z_Construct_UScriptStruct_FSIK_FoundServers_Statics::NewProp_bPasswordProtected_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPasswordProtected_MetaData), NewProp_bPasswordProtected_MetaData) };
void Z_Construct_UScriptStruct_FSIK_FoundServers_Statics::NewProp_bSecure_SetBit(void* Obj)
{
	((FSIK_FoundServers*)Obj)->bSecure = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSIK_FoundServers_Statics::NewProp_bSecure = { "bSecure", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSIK_FoundServers), &Z_Construct_UScriptStruct_FSIK_FoundServers_Statics::NewProp_bSecure_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSecure_MetaData), NewProp_bSecure_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSIK_FoundServers_Statics::NewProp_TimeLastPlayed = { "TimeLastPlayed", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_FoundServers, TimeLastPlayed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeLastPlayed_MetaData), NewProp_TimeLastPlayed_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSIK_FoundServers_Statics::NewProp_ServerVersion = { "ServerVersion", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_FoundServers, ServerVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerVersion_MetaData), NewProp_ServerVersion_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSIK_FoundServers_Statics::NewProp_ServerName = { "ServerName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_FoundServers, ServerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerName_MetaData), NewProp_ServerName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSIK_FoundServers_Statics::NewProp_GameTags = { "GameTags", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_FoundServers, GameTags), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameTags_MetaData), NewProp_GameTags_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSIK_FoundServers_Statics::NewProp_ServerNetAddress = { "ServerNetAddress", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_FoundServers, ServerNetAddress), Z_Construct_UScriptStruct_FSIK_ServerNetAddress, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerNetAddress_MetaData), NewProp_ServerNetAddress_MetaData) }; // 997588644
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSIK_FoundServers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_FoundServers_Statics::NewProp_Ping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_FoundServers_Statics::NewProp_bHadSuccessfulResponse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_FoundServers_Statics::NewProp_bDoNotRefresh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_FoundServers_Statics::NewProp_GameDir,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_FoundServers_Statics::NewProp_Map,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_FoundServers_Statics::NewProp_GameDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_FoundServers_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_FoundServers_Statics::NewProp_ServerID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_FoundServers_Statics::NewProp_Players,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_FoundServers_Statics::NewProp_MaxPlayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_FoundServers_Statics::NewProp_BotPlayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_FoundServers_Statics::NewProp_bPasswordProtected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_FoundServers_Statics::NewProp_bSecure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_FoundServers_Statics::NewProp_TimeLastPlayed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_FoundServers_Statics::NewProp_ServerVersion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_FoundServers_Statics::NewProp_ServerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_FoundServers_Statics::NewProp_GameTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_FoundServers_Statics::NewProp_ServerNetAddress,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_FoundServers_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSIK_FoundServers Property Definitions ******************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSIK_FoundServers_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	&NewStructOps,
	"SIK_FoundServers",
	Z_Construct_UScriptStruct_FSIK_FoundServers_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_FoundServers_Statics::PropPointers),
	sizeof(FSIK_FoundServers),
	alignof(FSIK_FoundServers),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_FoundServers_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSIK_FoundServers_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSIK_FoundServers()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_FoundServers.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSIK_FoundServers.InnerSingleton, Z_Construct_UScriptStruct_FSIK_FoundServers_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSIK_FoundServers.InnerSingleton);
}
// ********** End ScriptStruct FSIK_FoundServers ***************************************************

// ********** Begin Enum ESIK_MatchMakingServerResponse ********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESIK_MatchMakingServerResponse;
static UEnum* ESIK_MatchMakingServerResponse_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESIK_MatchMakingServerResponse.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESIK_MatchMakingServerResponse.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamIntegrationKit_ESIK_MatchMakingServerResponse, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("ESIK_MatchMakingServerResponse"));
	}
	return Z_Registration_Info_UEnum_ESIK_MatchMakingServerResponse.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<ESIK_MatchMakingServerResponse>()
{
	return ESIK_MatchMakingServerResponse_StaticEnum();
}
struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_MatchMakingServerResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
		{ "NoServersListedOnMasterServer.DisplayName", "No Servers Listed On Master Server" },
		{ "NoServersListedOnMasterServer.Name", "NoServersListedOnMasterServer" },
		{ "ServerFailedToRespond.DisplayName", "Server Failed To Respond" },
		{ "ServerFailedToRespond.Name", "ServerFailedToRespond" },
		{ "ServerResponded.DisplayName", "Server Responded" },
		{ "ServerResponded.Name", "ServerResponded" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ServerResponded", (int64)ServerResponded },
		{ "ServerFailedToRespond", (int64)ServerFailedToRespond },
		{ "NoServersListedOnMasterServer", (int64)NoServersListedOnMasterServer },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_MatchMakingServerResponse_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamIntegrationKit_ESIK_MatchMakingServerResponse_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	"ESIK_MatchMakingServerResponse",
	"ESIK_MatchMakingServerResponse",
	Z_Construct_UEnum_SteamIntegrationKit_ESIK_MatchMakingServerResponse_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_MatchMakingServerResponse_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_MatchMakingServerResponse_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamIntegrationKit_ESIK_MatchMakingServerResponse_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_MatchMakingServerResponse()
{
	if (!Z_Registration_Info_UEnum_ESIK_MatchMakingServerResponse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESIK_MatchMakingServerResponse.InnerSingleton, Z_Construct_UEnum_SteamIntegrationKit_ESIK_MatchMakingServerResponse_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESIK_MatchMakingServerResponse.InnerSingleton;
}
// ********** End Enum ESIK_MatchMakingServerResponse **********************************************

// ********** Begin Enum ESIK_SteamNetworkingIdentityType ******************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESIK_SteamNetworkingIdentityType;
static UEnum* ESIK_SteamNetworkingIdentityType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESIK_SteamNetworkingIdentityType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESIK_SteamNetworkingIdentityType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamNetworkingIdentityType, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("ESIK_SteamNetworkingIdentityType"));
	}
	return Z_Registration_Info_UEnum_ESIK_SteamNetworkingIdentityType.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<ESIK_SteamNetworkingIdentityType>()
{
	return ESIK_SteamNetworkingIdentityType_StaticEnum();
}
struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamNetworkingIdentityType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
		{ "SteamNetworkingIdentityType__Force32bit.DisplayName", "Force 32bit" },
		{ "SteamNetworkingIdentityType__Force32bit.Name", "SteamNetworkingIdentityType__Force32bit" },
		{ "SteamNetworkingIdentityType_GenericBytes.DisplayName", "Generic Bytes" },
		{ "SteamNetworkingIdentityType_GenericBytes.Name", "SteamNetworkingIdentityType_GenericBytes" },
		{ "SteamNetworkingIdentityType_GenericString.DisplayName", "Generic String" },
		{ "SteamNetworkingIdentityType_GenericString.Name", "SteamNetworkingIdentityType_GenericString" },
		{ "SteamNetworkingIdentityType_Invalid.DisplayName", "Invalid" },
		{ "SteamNetworkingIdentityType_Invalid.Name", "SteamNetworkingIdentityType_Invalid" },
		{ "SteamNetworkingIdentityType_InvalidString.DisplayName", "Invalid String" },
		{ "SteamNetworkingIdentityType_InvalidString.Name", "SteamNetworkingIdentityType_InvalidString" },
		{ "SteamNetworkingIdentityType_IPAddress.DisplayName", "IP Address" },
		{ "SteamNetworkingIdentityType_IPAddress.Name", "SteamNetworkingIdentityType_IPAddress" },
		{ "SteamNetworkingIdentityType_SonyPSN.DisplayName", "Sony PSN" },
		{ "SteamNetworkingIdentityType_SonyPSN.Name", "SteamNetworkingIdentityType_SonyPSN" },
		{ "SteamNetworkingIdentityType_SteamID.DisplayName", "SteamID" },
		{ "SteamNetworkingIdentityType_SteamID.Name", "SteamNetworkingIdentityType_SteamID" },
		{ "SteamNetworkingIdentityType_XboxPairwiseID.DisplayName", "Xbox Pairwise ID" },
		{ "SteamNetworkingIdentityType_XboxPairwiseID.Name", "SteamNetworkingIdentityType_XboxPairwiseID" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "SteamNetworkingIdentityType_Invalid", (int64)SteamNetworkingIdentityType_Invalid },
		{ "SteamNetworkingIdentityType_SteamID", (int64)SteamNetworkingIdentityType_SteamID },
		{ "SteamNetworkingIdentityType_IPAddress", (int64)SteamNetworkingIdentityType_IPAddress },
		{ "SteamNetworkingIdentityType_GenericString", (int64)SteamNetworkingIdentityType_GenericString },
		{ "SteamNetworkingIdentityType_GenericBytes", (int64)SteamNetworkingIdentityType_GenericBytes },
		{ "SteamNetworkingIdentityType_InvalidString", (int64)SteamNetworkingIdentityType_InvalidString },
		{ "SteamNetworkingIdentityType__Force32bit", (int64)SteamNetworkingIdentityType__Force32bit },
		{ "SteamNetworkingIdentityType_XboxPairwiseID", (int64)SteamNetworkingIdentityType_XboxPairwiseID },
		{ "SteamNetworkingIdentityType_SonyPSN", (int64)SteamNetworkingIdentityType_SonyPSN },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamNetworkingIdentityType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamNetworkingIdentityType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	"ESIK_SteamNetworkingIdentityType",
	"ESIK_SteamNetworkingIdentityType",
	Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamNetworkingIdentityType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamNetworkingIdentityType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamNetworkingIdentityType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamNetworkingIdentityType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamNetworkingIdentityType()
{
	if (!Z_Registration_Info_UEnum_ESIK_SteamNetworkingIdentityType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESIK_SteamNetworkingIdentityType.InnerSingleton, Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamNetworkingIdentityType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESIK_SteamNetworkingIdentityType.InnerSingleton;
}
// ********** End Enum ESIK_SteamNetworkingIdentityType ********************************************

// ********** Begin ScriptStruct FSIK_SteamNetworkingIPAddr ****************************************
struct Z_Construct_UScriptStruct_FSIK_SteamNetworkingIPAddr_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSIK_SteamNetworkingIPAddr); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSIK_SteamNetworkingIPAddr); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_eType_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IpV4_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IpV6_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_port_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSIK_SteamNetworkingIPAddr constinit property declarations ********
	static const UECodeGen_Private::FBytePropertyParams NewProp_m_eType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_IpV4;
	static const UECodeGen_Private::FStrPropertyParams NewProp_IpV6;
	static const UECodeGen_Private::FIntPropertyParams NewProp_m_port;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSIK_SteamNetworkingIPAddr constinit property declarations **********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSIK_SteamNetworkingIPAddr>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSIK_SteamNetworkingIPAddr_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSIK_SteamNetworkingIPAddr;
class UScriptStruct* FSIK_SteamNetworkingIPAddr::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_SteamNetworkingIPAddr.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSIK_SteamNetworkingIPAddr.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSIK_SteamNetworkingIPAddr, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("SIK_SteamNetworkingIPAddr"));
	}
	return Z_Registration_Info_UScriptStruct_FSIK_SteamNetworkingIPAddr.OuterSingleton;
	}

// ********** Begin ScriptStruct FSIK_SteamNetworkingIPAddr Property Definitions *******************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSIK_SteamNetworkingIPAddr_Statics::NewProp_m_eType = { "m_eType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_SteamNetworkingIPAddr, m_eType), Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamIPType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_eType_MetaData), NewProp_m_eType_MetaData) }; // 3938986146
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSIK_SteamNetworkingIPAddr_Statics::NewProp_IpV4 = { "IpV4", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_SteamNetworkingIPAddr, IpV4), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IpV4_MetaData), NewProp_IpV4_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSIK_SteamNetworkingIPAddr_Statics::NewProp_IpV6 = { "IpV6", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_SteamNetworkingIPAddr, IpV6), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IpV6_MetaData), NewProp_IpV6_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSIK_SteamNetworkingIPAddr_Statics::NewProp_m_port = { "m_port", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_SteamNetworkingIPAddr, m_port), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_port_MetaData), NewProp_m_port_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSIK_SteamNetworkingIPAddr_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_SteamNetworkingIPAddr_Statics::NewProp_m_eType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_SteamNetworkingIPAddr_Statics::NewProp_IpV4,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_SteamNetworkingIPAddr_Statics::NewProp_IpV6,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_SteamNetworkingIPAddr_Statics::NewProp_m_port,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_SteamNetworkingIPAddr_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSIK_SteamNetworkingIPAddr Property Definitions *********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSIK_SteamNetworkingIPAddr_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	&NewStructOps,
	"SIK_SteamNetworkingIPAddr",
	Z_Construct_UScriptStruct_FSIK_SteamNetworkingIPAddr_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_SteamNetworkingIPAddr_Statics::PropPointers),
	sizeof(FSIK_SteamNetworkingIPAddr),
	alignof(FSIK_SteamNetworkingIPAddr),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_SteamNetworkingIPAddr_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSIK_SteamNetworkingIPAddr_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSIK_SteamNetworkingIPAddr()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_SteamNetworkingIPAddr.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSIK_SteamNetworkingIPAddr.InnerSingleton, Z_Construct_UScriptStruct_FSIK_SteamNetworkingIPAddr_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSIK_SteamNetworkingIPAddr.InnerSingleton);
}
// ********** End ScriptStruct FSIK_SteamNetworkingIPAddr ******************************************

// ********** Begin ScriptStruct FSIK_SteamNetworkingIdentity **************************************
struct Z_Construct_UScriptStruct_FSIK_SteamNetworkingIdentity_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSIK_SteamNetworkingIdentity); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSIK_SteamNetworkingIdentity); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_eType_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_steamID_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_szGenericString_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_szGenericBytes_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_ipAddress_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSIK_SteamNetworkingIdentity constinit property declarations ******
	static const UECodeGen_Private::FBytePropertyParams NewProp_m_eType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_m_steamID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_m_szGenericString;
	static const UECodeGen_Private::FBytePropertyParams NewProp_m_szGenericBytes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_m_szGenericBytes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_m_ipAddress;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSIK_SteamNetworkingIdentity constinit property declarations ********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSIK_SteamNetworkingIdentity>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSIK_SteamNetworkingIdentity_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSIK_SteamNetworkingIdentity;
class UScriptStruct* FSIK_SteamNetworkingIdentity::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_SteamNetworkingIdentity.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSIK_SteamNetworkingIdentity.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSIK_SteamNetworkingIdentity, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("SIK_SteamNetworkingIdentity"));
	}
	return Z_Registration_Info_UScriptStruct_FSIK_SteamNetworkingIdentity.OuterSingleton;
	}

// ********** Begin ScriptStruct FSIK_SteamNetworkingIdentity Property Definitions *****************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSIK_SteamNetworkingIdentity_Statics::NewProp_m_eType = { "m_eType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_SteamNetworkingIdentity, m_eType), Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamNetworkingIdentityType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_eType_MetaData), NewProp_m_eType_MetaData) }; // 204549727
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSIK_SteamNetworkingIdentity_Statics::NewProp_m_steamID = { "m_steamID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_SteamNetworkingIdentity, m_steamID), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_steamID_MetaData), NewProp_m_steamID_MetaData) }; // 3413883574
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSIK_SteamNetworkingIdentity_Statics::NewProp_m_szGenericString = { "m_szGenericString", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_SteamNetworkingIdentity, m_szGenericString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_szGenericString_MetaData), NewProp_m_szGenericString_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSIK_SteamNetworkingIdentity_Statics::NewProp_m_szGenericBytes_Inner = { "m_szGenericBytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSIK_SteamNetworkingIdentity_Statics::NewProp_m_szGenericBytes = { "m_szGenericBytes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_SteamNetworkingIdentity, m_szGenericBytes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_szGenericBytes_MetaData), NewProp_m_szGenericBytes_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSIK_SteamNetworkingIdentity_Statics::NewProp_m_ipAddress = { "m_ipAddress", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_SteamNetworkingIdentity, m_ipAddress), Z_Construct_UScriptStruct_FSIK_SteamNetworkingIPAddr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_ipAddress_MetaData), NewProp_m_ipAddress_MetaData) }; // 4010561450
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSIK_SteamNetworkingIdentity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_SteamNetworkingIdentity_Statics::NewProp_m_eType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_SteamNetworkingIdentity_Statics::NewProp_m_steamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_SteamNetworkingIdentity_Statics::NewProp_m_szGenericString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_SteamNetworkingIdentity_Statics::NewProp_m_szGenericBytes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_SteamNetworkingIdentity_Statics::NewProp_m_szGenericBytes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_SteamNetworkingIdentity_Statics::NewProp_m_ipAddress,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_SteamNetworkingIdentity_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSIK_SteamNetworkingIdentity Property Definitions *******************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSIK_SteamNetworkingIdentity_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	&NewStructOps,
	"SIK_SteamNetworkingIdentity",
	Z_Construct_UScriptStruct_FSIK_SteamNetworkingIdentity_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_SteamNetworkingIdentity_Statics::PropPointers),
	sizeof(FSIK_SteamNetworkingIdentity),
	alignof(FSIK_SteamNetworkingIdentity),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_SteamNetworkingIdentity_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSIK_SteamNetworkingIdentity_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSIK_SteamNetworkingIdentity()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_SteamNetworkingIdentity.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSIK_SteamNetworkingIdentity.InnerSingleton, Z_Construct_UScriptStruct_FSIK_SteamNetworkingIdentity_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSIK_SteamNetworkingIdentity.InnerSingleton);
}
// ********** End ScriptStruct FSIK_SteamNetworkingIdentity ****************************************

// ********** Begin Enum ESIK_NotificationPosition *************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESIK_NotificationPosition;
static UEnum* ESIK_NotificationPosition_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESIK_NotificationPosition.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESIK_NotificationPosition.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamIntegrationKit_ESIK_NotificationPosition, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("ESIK_NotificationPosition"));
	}
	return Z_Registration_Info_UEnum_ESIK_NotificationPosition.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<ESIK_NotificationPosition>()
{
	return ESIK_NotificationPosition_StaticEnum();
}
struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_NotificationPosition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
		{ "PositionBottomLeft.DisplayName", "Bottom Left" },
		{ "PositionBottomLeft.Name", "PositionBottomLeft" },
		{ "PositionBottomRight.DisplayName", "Bottom Right" },
		{ "PositionBottomRight.Name", "PositionBottomRight" },
		{ "PositionTopLeft.DisplayName", "Top Left" },
		{ "PositionTopLeft.Name", "PositionTopLeft" },
		{ "PositionTopRight.DisplayName", "Top Right" },
		{ "PositionTopRight.Name", "PositionTopRight" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "PositionTopLeft", (int64)PositionTopLeft },
		{ "PositionTopRight", (int64)PositionTopRight },
		{ "PositionBottomLeft", (int64)PositionBottomLeft },
		{ "PositionBottomRight", (int64)PositionBottomRight },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_NotificationPosition_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamIntegrationKit_ESIK_NotificationPosition_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	"ESIK_NotificationPosition",
	"ESIK_NotificationPosition",
	Z_Construct_UEnum_SteamIntegrationKit_ESIK_NotificationPosition_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_NotificationPosition_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_NotificationPosition_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamIntegrationKit_ESIK_NotificationPosition_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_NotificationPosition()
{
	if (!Z_Registration_Info_UEnum_ESIK_NotificationPosition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESIK_NotificationPosition.InnerSingleton, Z_Construct_UEnum_SteamIntegrationKit_ESIK_NotificationPosition_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESIK_NotificationPosition.InnerSingleton;
}
// ********** End Enum ESIK_NotificationPosition ***************************************************

// ********** Begin Enum ESIK_SteamItemFlags *******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESIK_SteamItemFlags;
static UEnum* ESIK_SteamItemFlags_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESIK_SteamItemFlags.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESIK_SteamItemFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamItemFlags, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("ESIK_SteamItemFlags"));
	}
	return Z_Registration_Info_UEnum_ESIK_SteamItemFlags.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<ESIK_SteamItemFlags>()
{
	return ESIK_SteamItemFlags_StaticEnum();
}
struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamItemFlags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
		{ "SteamItemFlagsConsumed.DisplayName", "Consumed" },
		{ "SteamItemFlagsConsumed.Name", "SteamItemFlagsConsumed" },
		{ "SteamItemFlagsNoTrade.DisplayName", "No Trade" },
		{ "SteamItemFlagsNoTrade.Name", "SteamItemFlagsNoTrade" },
		{ "SteamItemFlagsRemoved.DisplayName", "Removed" },
		{ "SteamItemFlagsRemoved.Name", "SteamItemFlagsRemoved" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "SteamItemFlagsNoTrade", (int64)SteamItemFlagsNoTrade },
		{ "SteamItemFlagsRemoved", (int64)SteamItemFlagsRemoved },
		{ "SteamItemFlagsConsumed", (int64)SteamItemFlagsConsumed },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamItemFlags_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamItemFlags_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	"ESIK_SteamItemFlags",
	"ESIK_SteamItemFlags",
	Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamItemFlags_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamItemFlags_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamItemFlags_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamItemFlags_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamItemFlags()
{
	if (!Z_Registration_Info_UEnum_ESIK_SteamItemFlags.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESIK_SteamItemFlags.InnerSingleton, Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamItemFlags_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESIK_SteamItemFlags.InnerSingleton;
}
// ********** End Enum ESIK_SteamItemFlags *********************************************************

// ********** Begin ScriptStruct FSIK_SteamInventoryResult *****************************************
struct Z_Construct_UScriptStruct_FSIK_SteamInventoryResult_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSIK_SteamInventoryResult); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSIK_SteamInventoryResult); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSIK_SteamInventoryResult constinit property declarations *********
	static const UECodeGen_Private::FIntPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSIK_SteamInventoryResult constinit property declarations ***********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSIK_SteamInventoryResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSIK_SteamInventoryResult_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSIK_SteamInventoryResult;
class UScriptStruct* FSIK_SteamInventoryResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_SteamInventoryResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSIK_SteamInventoryResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSIK_SteamInventoryResult, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("SIK_SteamInventoryResult"));
	}
	return Z_Registration_Info_UScriptStruct_FSIK_SteamInventoryResult.OuterSingleton;
	}

// ********** Begin ScriptStruct FSIK_SteamInventoryResult Property Definitions ********************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSIK_SteamInventoryResult_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_SteamInventoryResult, Result), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSIK_SteamInventoryResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_SteamInventoryResult_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_SteamInventoryResult_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSIK_SteamInventoryResult Property Definitions **********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSIK_SteamInventoryResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	&NewStructOps,
	"SIK_SteamInventoryResult",
	Z_Construct_UScriptStruct_FSIK_SteamInventoryResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_SteamInventoryResult_Statics::PropPointers),
	sizeof(FSIK_SteamInventoryResult),
	alignof(FSIK_SteamInventoryResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_SteamInventoryResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSIK_SteamInventoryResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSIK_SteamInventoryResult()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_SteamInventoryResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSIK_SteamInventoryResult.InnerSingleton, Z_Construct_UScriptStruct_FSIK_SteamInventoryResult_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSIK_SteamInventoryResult.InnerSingleton);
}
// ********** End ScriptStruct FSIK_SteamInventoryResult *******************************************

// ********** Begin ScriptStruct FSIK_SteamItemDef *************************************************
struct Z_Construct_UScriptStruct_FSIK_SteamItemDef_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSIK_SteamItemDef); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSIK_SteamItemDef); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSIK_SteamItemDef constinit property declarations *****************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSIK_SteamItemDef constinit property declarations *******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSIK_SteamItemDef>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSIK_SteamItemDef_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSIK_SteamItemDef;
class UScriptStruct* FSIK_SteamItemDef::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_SteamItemDef.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSIK_SteamItemDef.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSIK_SteamItemDef, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("SIK_SteamItemDef"));
	}
	return Z_Registration_Info_UScriptStruct_FSIK_SteamItemDef.OuterSingleton;
	}

// ********** Begin ScriptStruct FSIK_SteamItemDef Property Definitions ****************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSIK_SteamItemDef_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_SteamItemDef, Result), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSIK_SteamItemDef_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_SteamItemDef_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_SteamItemDef_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSIK_SteamItemDef Property Definitions ******************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSIK_SteamItemDef_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	&NewStructOps,
	"SIK_SteamItemDef",
	Z_Construct_UScriptStruct_FSIK_SteamItemDef_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_SteamItemDef_Statics::PropPointers),
	sizeof(FSIK_SteamItemDef),
	alignof(FSIK_SteamItemDef),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_SteamItemDef_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSIK_SteamItemDef_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSIK_SteamItemDef()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_SteamItemDef.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSIK_SteamItemDef.InnerSingleton, Z_Construct_UScriptStruct_FSIK_SteamItemDef_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSIK_SteamItemDef.InnerSingleton);
}
// ********** End ScriptStruct FSIK_SteamItemDef ***************************************************

// ********** Begin ScriptStruct FSIK_SteamItemInstanceID ******************************************
struct Z_Construct_UScriptStruct_FSIK_SteamItemInstanceID_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSIK_SteamItemInstanceID); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSIK_SteamItemInstanceID); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSIK_SteamItemInstanceID constinit property declarations **********
	static const UECodeGen_Private::FInt64PropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSIK_SteamItemInstanceID constinit property declarations ************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSIK_SteamItemInstanceID>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSIK_SteamItemInstanceID_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSIK_SteamItemInstanceID;
class UScriptStruct* FSIK_SteamItemInstanceID::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_SteamItemInstanceID.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSIK_SteamItemInstanceID.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSIK_SteamItemInstanceID, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("SIK_SteamItemInstanceID"));
	}
	return Z_Registration_Info_UScriptStruct_FSIK_SteamItemInstanceID.OuterSingleton;
	}

// ********** Begin ScriptStruct FSIK_SteamItemInstanceID Property Definitions *********************
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FSIK_SteamItemInstanceID_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_SteamItemInstanceID, Result), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSIK_SteamItemInstanceID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_SteamItemInstanceID_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_SteamItemInstanceID_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSIK_SteamItemInstanceID Property Definitions ***********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSIK_SteamItemInstanceID_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	&NewStructOps,
	"SIK_SteamItemInstanceID",
	Z_Construct_UScriptStruct_FSIK_SteamItemInstanceID_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_SteamItemInstanceID_Statics::PropPointers),
	sizeof(FSIK_SteamItemInstanceID),
	alignof(FSIK_SteamItemInstanceID),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_SteamItemInstanceID_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSIK_SteamItemInstanceID_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSIK_SteamItemInstanceID()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_SteamItemInstanceID.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSIK_SteamItemInstanceID.InnerSingleton, Z_Construct_UScriptStruct_FSIK_SteamItemInstanceID_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSIK_SteamItemInstanceID.InnerSingleton);
}
// ********** End ScriptStruct FSIK_SteamItemInstanceID ********************************************

// ********** Begin ScriptStruct FSIK_SteamInventoryUpdateHandle ***********************************
struct Z_Construct_UScriptStruct_FSIK_SteamInventoryUpdateHandle_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSIK_SteamInventoryUpdateHandle); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSIK_SteamInventoryUpdateHandle); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSIK_SteamInventoryUpdateHandle constinit property declarations ***
	static const UECodeGen_Private::FInt64PropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSIK_SteamInventoryUpdateHandle constinit property declarations *****
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSIK_SteamInventoryUpdateHandle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSIK_SteamInventoryUpdateHandle_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSIK_SteamInventoryUpdateHandle;
class UScriptStruct* FSIK_SteamInventoryUpdateHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_SteamInventoryUpdateHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSIK_SteamInventoryUpdateHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSIK_SteamInventoryUpdateHandle, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("SIK_SteamInventoryUpdateHandle"));
	}
	return Z_Registration_Info_UScriptStruct_FSIK_SteamInventoryUpdateHandle.OuterSingleton;
	}

// ********** Begin ScriptStruct FSIK_SteamInventoryUpdateHandle Property Definitions **************
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FSIK_SteamInventoryUpdateHandle_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_SteamInventoryUpdateHandle, Result), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSIK_SteamInventoryUpdateHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_SteamInventoryUpdateHandle_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_SteamInventoryUpdateHandle_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSIK_SteamInventoryUpdateHandle Property Definitions ****************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSIK_SteamInventoryUpdateHandle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	&NewStructOps,
	"SIK_SteamInventoryUpdateHandle",
	Z_Construct_UScriptStruct_FSIK_SteamInventoryUpdateHandle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_SteamInventoryUpdateHandle_Statics::PropPointers),
	sizeof(FSIK_SteamInventoryUpdateHandle),
	alignof(FSIK_SteamInventoryUpdateHandle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_SteamInventoryUpdateHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSIK_SteamInventoryUpdateHandle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSIK_SteamInventoryUpdateHandle()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_SteamInventoryUpdateHandle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSIK_SteamInventoryUpdateHandle.InnerSingleton, Z_Construct_UScriptStruct_FSIK_SteamInventoryUpdateHandle_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSIK_SteamInventoryUpdateHandle.InnerSingleton);
}
// ********** End ScriptStruct FSIK_SteamInventoryUpdateHandle *************************************

// ********** Begin ScriptStruct FSIK_SteamItemDetails *********************************************
struct Z_Construct_UScriptStruct_FSIK_SteamItemDetails_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSIK_SteamItemDetails); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSIK_SteamItemDetails); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemID_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Definition_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Flags_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSIK_SteamItemDetails constinit property declarations *************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Definition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Flags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSIK_SteamItemDetails constinit property declarations ***************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSIK_SteamItemDetails>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSIK_SteamItemDetails_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSIK_SteamItemDetails;
class UScriptStruct* FSIK_SteamItemDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_SteamItemDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSIK_SteamItemDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSIK_SteamItemDetails, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("SIK_SteamItemDetails"));
	}
	return Z_Registration_Info_UScriptStruct_FSIK_SteamItemDetails.OuterSingleton;
	}

// ********** Begin ScriptStruct FSIK_SteamItemDetails Property Definitions ************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSIK_SteamItemDetails_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_SteamItemDetails, ItemID), Z_Construct_UScriptStruct_FSIK_SteamItemInstanceID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemID_MetaData), NewProp_ItemID_MetaData) }; // 2091965911
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSIK_SteamItemDetails_Statics::NewProp_Definition = { "Definition", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_SteamItemDetails, Definition), Z_Construct_UScriptStruct_FSIK_SteamItemDef, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Definition_MetaData), NewProp_Definition_MetaData) }; // 2053655220
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSIK_SteamItemDetails_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_SteamItemDetails, Quantity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quantity_MetaData), NewProp_Quantity_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSIK_SteamItemDetails_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_SteamItemDetails, Flags), Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamItemFlags, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Flags_MetaData), NewProp_Flags_MetaData) }; // 1931557512
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSIK_SteamItemDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_SteamItemDetails_Statics::NewProp_ItemID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_SteamItemDetails_Statics::NewProp_Definition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_SteamItemDetails_Statics::NewProp_Quantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_SteamItemDetails_Statics::NewProp_Flags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_SteamItemDetails_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSIK_SteamItemDetails Property Definitions **************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSIK_SteamItemDetails_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	&NewStructOps,
	"SIK_SteamItemDetails",
	Z_Construct_UScriptStruct_FSIK_SteamItemDetails_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_SteamItemDetails_Statics::PropPointers),
	sizeof(FSIK_SteamItemDetails),
	alignof(FSIK_SteamItemDetails),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_SteamItemDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSIK_SteamItemDetails_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSIK_SteamItemDetails()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_SteamItemDetails.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSIK_SteamItemDetails.InnerSingleton, Z_Construct_UScriptStruct_FSIK_SteamItemDetails_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSIK_SteamItemDetails.InnerSingleton);
}
// ********** End ScriptStruct FSIK_SteamItemDetails ***********************************************

// ********** Begin Enum ESIK_AudioPlayback_Status *************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESIK_AudioPlayback_Status;
static UEnum* ESIK_AudioPlayback_Status_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESIK_AudioPlayback_Status.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESIK_AudioPlayback_Status.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamIntegrationKit_ESIK_AudioPlayback_Status, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("ESIK_AudioPlayback_Status"));
	}
	return Z_Registration_Info_UEnum_ESIK_AudioPlayback_Status.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<ESIK_AudioPlayback_Status>()
{
	return ESIK_AudioPlayback_Status_StaticEnum();
}
struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_AudioPlayback_Status_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
		{ "Playback_Idle.DisplayName", "Idle" },
		{ "Playback_Idle.Name", "Playback_Idle" },
		{ "Playback_Paused.DisplayName", "Paused" },
		{ "Playback_Paused.Name", "Playback_Paused" },
		{ "Playback_Playing.DisplayName", "Playing" },
		{ "Playback_Playing.Name", "Playback_Playing" },
		{ "Playback_Undefined.DisplayName", "Undefined" },
		{ "Playback_Undefined.Name", "Playback_Undefined" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "Playback_Undefined", (int64)Playback_Undefined },
		{ "Playback_Playing", (int64)Playback_Playing },
		{ "Playback_Paused", (int64)Playback_Paused },
		{ "Playback_Idle", (int64)Playback_Idle },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_AudioPlayback_Status_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamIntegrationKit_ESIK_AudioPlayback_Status_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	"ESIK_AudioPlayback_Status",
	"ESIK_AudioPlayback_Status",
	Z_Construct_UEnum_SteamIntegrationKit_ESIK_AudioPlayback_Status_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_AudioPlayback_Status_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_AudioPlayback_Status_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamIntegrationKit_ESIK_AudioPlayback_Status_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_AudioPlayback_Status()
{
	if (!Z_Registration_Info_UEnum_ESIK_AudioPlayback_Status.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESIK_AudioPlayback_Status.InnerSingleton, Z_Construct_UEnum_SteamIntegrationKit_ESIK_AudioPlayback_Status_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESIK_AudioPlayback_Status.InnerSingleton;
}
// ********** End Enum ESIK_AudioPlayback_Status ***************************************************

// ********** Begin Enum ESIK_SteamNetworkingAvailability ******************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESIK_SteamNetworkingAvailability;
static UEnum* ESIK_SteamNetworkingAvailability_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESIK_SteamNetworkingAvailability.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESIK_SteamNetworkingAvailability.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamNetworkingAvailability, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("ESIK_SteamNetworkingAvailability"));
	}
	return Z_Registration_Info_UEnum_ESIK_SteamNetworkingAvailability.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<ESIK_SteamNetworkingAvailability>()
{
	return ESIK_SteamNetworkingAvailability_StaticEnum();
}
struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamNetworkingAvailability_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
		{ "SteamNetworkingAvailability__Force32bit.DisplayName", "Force 32bit" },
		{ "SteamNetworkingAvailability__Force32bit.Name", "SteamNetworkingAvailability__Force32bit" },
		{ "SteamNetworkingAvailability_Attempting.DisplayName", "Attempting" },
		{ "SteamNetworkingAvailability_Attempting.Name", "SteamNetworkingAvailability_Attempting" },
		{ "SteamNetworkingAvailability_CannotTry.DisplayName", "Cannot Try" },
		{ "SteamNetworkingAvailability_CannotTry.Name", "SteamNetworkingAvailability_CannotTry" },
		{ "SteamNetworkingAvailability_Current.DisplayName", "Current" },
		{ "SteamNetworkingAvailability_Current.Name", "SteamNetworkingAvailability_Current" },
		{ "SteamNetworkingAvailability_Failed.DisplayName", "Failed" },
		{ "SteamNetworkingAvailability_Failed.Name", "SteamNetworkingAvailability_Failed" },
		{ "SteamNetworkingAvailability_NeverTried.DisplayName", "Never Tried" },
		{ "SteamNetworkingAvailability_NeverTried.Name", "SteamNetworkingAvailability_NeverTried" },
		{ "SteamNetworkingAvailability_Previously.DisplayName", "Previously" },
		{ "SteamNetworkingAvailability_Previously.Name", "SteamNetworkingAvailability_Previously" },
		{ "SteamNetworkingAvailability_Retrying.DisplayName", "Retrying" },
		{ "SteamNetworkingAvailability_Retrying.Name", "SteamNetworkingAvailability_Retrying" },
		{ "SteamNetworkingAvailability_Unknown.DisplayName", "Unknown" },
		{ "SteamNetworkingAvailability_Unknown.Name", "SteamNetworkingAvailability_Unknown" },
		{ "SteamNetworkingAvailability_Waiting.DisplayName", "Waiting" },
		{ "SteamNetworkingAvailability_Waiting.Name", "SteamNetworkingAvailability_Waiting" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "SteamNetworkingAvailability_CannotTry", (int64)SteamNetworkingAvailability_CannotTry },
		{ "SteamNetworkingAvailability_Failed", (int64)SteamNetworkingAvailability_Failed },
		{ "SteamNetworkingAvailability_Previously", (int64)SteamNetworkingAvailability_Previously },
		{ "SteamNetworkingAvailability_Retrying", (int64)SteamNetworkingAvailability_Retrying },
		{ "SteamNetworkingAvailability_NeverTried", (int64)SteamNetworkingAvailability_NeverTried },
		{ "SteamNetworkingAvailability_Waiting", (int64)SteamNetworkingAvailability_Waiting },
		{ "SteamNetworkingAvailability_Attempting", (int64)SteamNetworkingAvailability_Attempting },
		{ "SteamNetworkingAvailability_Current", (int64)SteamNetworkingAvailability_Current },
		{ "SteamNetworkingAvailability_Unknown", (int64)SteamNetworkingAvailability_Unknown },
		{ "SteamNetworkingAvailability__Force32bit", (int64)SteamNetworkingAvailability__Force32bit },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamNetworkingAvailability_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamNetworkingAvailability_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	"ESIK_SteamNetworkingAvailability",
	"ESIK_SteamNetworkingAvailability",
	Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamNetworkingAvailability_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamNetworkingAvailability_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamNetworkingAvailability_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamNetworkingAvailability_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamNetworkingAvailability()
{
	if (!Z_Registration_Info_UEnum_ESIK_SteamNetworkingAvailability.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESIK_SteamNetworkingAvailability.InnerSingleton, Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamNetworkingAvailability_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESIK_SteamNetworkingAvailability.InnerSingleton;
}
// ********** End Enum ESIK_SteamNetworkingAvailability ********************************************

// ********** Begin ScriptStruct FSIK_SteamNetworkPingLocation *************************************
struct Z_Construct_UScriptStruct_FSIK_SteamNetworkPingLocation_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSIK_SteamNetworkPingLocation); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSIK_SteamNetworkPingLocation); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSIK_SteamNetworkPingLocation constinit property declarations *****
	static const UECodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSIK_SteamNetworkPingLocation constinit property declarations *******
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSIK_SteamNetworkPingLocation>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSIK_SteamNetworkPingLocation_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSIK_SteamNetworkPingLocation;
class UScriptStruct* FSIK_SteamNetworkPingLocation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_SteamNetworkPingLocation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSIK_SteamNetworkPingLocation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSIK_SteamNetworkPingLocation, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("SIK_SteamNetworkPingLocation"));
	}
	return Z_Registration_Info_UScriptStruct_FSIK_SteamNetworkPingLocation.OuterSingleton;
	}

// ********** Begin ScriptStruct FSIK_SteamNetworkPingLocation Property Definitions ****************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSIK_SteamNetworkPingLocation_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSIK_SteamNetworkPingLocation_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_SteamNetworkPingLocation, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSIK_SteamNetworkPingLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_SteamNetworkPingLocation_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_SteamNetworkPingLocation_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_SteamNetworkPingLocation_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSIK_SteamNetworkPingLocation Property Definitions ******************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSIK_SteamNetworkPingLocation_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	&NewStructOps,
	"SIK_SteamNetworkPingLocation",
	Z_Construct_UScriptStruct_FSIK_SteamNetworkPingLocation_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_SteamNetworkPingLocation_Statics::PropPointers),
	sizeof(FSIK_SteamNetworkPingLocation),
	alignof(FSIK_SteamNetworkPingLocation),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_SteamNetworkPingLocation_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSIK_SteamNetworkPingLocation_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSIK_SteamNetworkPingLocation()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_SteamNetworkPingLocation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSIK_SteamNetworkPingLocation.InnerSingleton, Z_Construct_UScriptStruct_FSIK_SteamNetworkPingLocation_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSIK_SteamNetworkPingLocation.InnerSingleton);
}
// ********** End ScriptStruct FSIK_SteamNetworkPingLocation ***************************************

// ********** Begin ScriptStruct FSIK_SteamNetworkingPOPID *****************************************
struct Z_Construct_UScriptStruct_FSIK_SteamNetworkingPOPID_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSIK_SteamNetworkingPOPID); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSIK_SteamNetworkingPOPID); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSIK_SteamNetworkingPOPID constinit property declarations *********
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSIK_SteamNetworkingPOPID constinit property declarations ***********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSIK_SteamNetworkingPOPID>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSIK_SteamNetworkingPOPID_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSIK_SteamNetworkingPOPID;
class UScriptStruct* FSIK_SteamNetworkingPOPID::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_SteamNetworkingPOPID.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSIK_SteamNetworkingPOPID.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSIK_SteamNetworkingPOPID, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("SIK_SteamNetworkingPOPID"));
	}
	return Z_Registration_Info_UScriptStruct_FSIK_SteamNetworkingPOPID.OuterSingleton;
	}

// ********** Begin ScriptStruct FSIK_SteamNetworkingPOPID Property Definitions ********************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSIK_SteamNetworkingPOPID_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_SteamNetworkingPOPID, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSIK_SteamNetworkingPOPID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_SteamNetworkingPOPID_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_SteamNetworkingPOPID_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSIK_SteamNetworkingPOPID Property Definitions **********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSIK_SteamNetworkingPOPID_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	&NewStructOps,
	"SIK_SteamNetworkingPOPID",
	Z_Construct_UScriptStruct_FSIK_SteamNetworkingPOPID_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_SteamNetworkingPOPID_Statics::PropPointers),
	sizeof(FSIK_SteamNetworkingPOPID),
	alignof(FSIK_SteamNetworkingPOPID),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_SteamNetworkingPOPID_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSIK_SteamNetworkingPOPID_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSIK_SteamNetworkingPOPID()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_SteamNetworkingPOPID.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSIK_SteamNetworkingPOPID.InnerSingleton, Z_Construct_UScriptStruct_FSIK_SteamNetworkingPOPID_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSIK_SteamNetworkingPOPID.InnerSingleton);
}
// ********** End ScriptStruct FSIK_SteamNetworkingPOPID *******************************************

// ********** Begin Enum ESIK_P2PSessionError ******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESIK_P2PSessionError;
static UEnum* ESIK_P2PSessionError_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESIK_P2PSessionError.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESIK_P2PSessionError.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamIntegrationKit_ESIK_P2PSessionError, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("ESIK_P2PSessionError"));
	}
	return Z_Registration_Info_UEnum_ESIK_P2PSessionError.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<ESIK_P2PSessionError>()
{
	return ESIK_P2PSessionError_StaticEnum();
}
struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_P2PSessionError_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
		{ "P2PSessionErrorDestinationNotLoggedIn.DisplayName", "Destination Not Logged In" },
		{ "P2PSessionErrorDestinationNotLoggedIn.Name", "P2PSessionErrorDestinationNotLoggedIn" },
		{ "P2PSessionErrorMax.DisplayName", "Max" },
		{ "P2PSessionErrorMax.Name", "P2PSessionErrorMax" },
		{ "P2PSessionErrorNone.DisplayName", "None" },
		{ "P2PSessionErrorNone.Name", "P2PSessionErrorNone" },
		{ "P2PSessionErrorNoRightsToApp.DisplayName", "No Rights To App" },
		{ "P2PSessionErrorNoRightsToApp.Name", "P2PSessionErrorNoRightsToApp" },
		{ "P2PSessionErrorNotRunningApp.DisplayName", "Not Running App" },
		{ "P2PSessionErrorNotRunningApp.Name", "P2PSessionErrorNotRunningApp" },
		{ "P2PSessionErrorTimeout.DisplayName", "Timeout" },
		{ "P2PSessionErrorTimeout.Name", "P2PSessionErrorTimeout" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "P2PSessionErrorNone", (int64)P2PSessionErrorNone },
		{ "P2PSessionErrorNotRunningApp", (int64)P2PSessionErrorNotRunningApp },
		{ "P2PSessionErrorNoRightsToApp", (int64)P2PSessionErrorNoRightsToApp },
		{ "P2PSessionErrorDestinationNotLoggedIn", (int64)P2PSessionErrorDestinationNotLoggedIn },
		{ "P2PSessionErrorTimeout", (int64)P2PSessionErrorTimeout },
		{ "P2PSessionErrorMax", (int64)P2PSessionErrorMax },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_P2PSessionError_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamIntegrationKit_ESIK_P2PSessionError_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	"ESIK_P2PSessionError",
	"ESIK_P2PSessionError",
	Z_Construct_UEnum_SteamIntegrationKit_ESIK_P2PSessionError_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_P2PSessionError_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_P2PSessionError_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamIntegrationKit_ESIK_P2PSessionError_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_P2PSessionError()
{
	if (!Z_Registration_Info_UEnum_ESIK_P2PSessionError.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESIK_P2PSessionError.InnerSingleton, Z_Construct_UEnum_SteamIntegrationKit_ESIK_P2PSessionError_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESIK_P2PSessionError.InnerSingleton;
}
// ********** End Enum ESIK_P2PSessionError ********************************************************

// ********** Begin ScriptStruct FSIK_P2PSessionState **********************************************
struct Z_Construct_UScriptStruct_FSIK_P2PSessionState_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSIK_P2PSessionState); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSIK_P2PSessionState); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bConnectionActive_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bConnecting_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_P2PSessionError_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsingRelay_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BytesQueuedForSend_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PacketsQueuedForSend_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemoteIP_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemotePort_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSIK_P2PSessionState constinit property declarations **************
	static void NewProp_bConnectionActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bConnectionActive;
	static void NewProp_bConnecting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bConnecting;
	static const UECodeGen_Private::FBytePropertyParams NewProp_P2PSessionError;
	static void NewProp_bUsingRelay_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsingRelay;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BytesQueuedForSend;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PacketsQueuedForSend;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RemoteIP;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RemotePort;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSIK_P2PSessionState constinit property declarations ****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSIK_P2PSessionState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSIK_P2PSessionState_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSIK_P2PSessionState;
class UScriptStruct* FSIK_P2PSessionState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_P2PSessionState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSIK_P2PSessionState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSIK_P2PSessionState, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("SIK_P2PSessionState"));
	}
	return Z_Registration_Info_UScriptStruct_FSIK_P2PSessionState.OuterSingleton;
	}

// ********** Begin ScriptStruct FSIK_P2PSessionState Property Definitions *************************
void Z_Construct_UScriptStruct_FSIK_P2PSessionState_Statics::NewProp_bConnectionActive_SetBit(void* Obj)
{
	((FSIK_P2PSessionState*)Obj)->bConnectionActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSIK_P2PSessionState_Statics::NewProp_bConnectionActive = { "bConnectionActive", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSIK_P2PSessionState), &Z_Construct_UScriptStruct_FSIK_P2PSessionState_Statics::NewProp_bConnectionActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bConnectionActive_MetaData), NewProp_bConnectionActive_MetaData) };
void Z_Construct_UScriptStruct_FSIK_P2PSessionState_Statics::NewProp_bConnecting_SetBit(void* Obj)
{
	((FSIK_P2PSessionState*)Obj)->bConnecting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSIK_P2PSessionState_Statics::NewProp_bConnecting = { "bConnecting", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSIK_P2PSessionState), &Z_Construct_UScriptStruct_FSIK_P2PSessionState_Statics::NewProp_bConnecting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bConnecting_MetaData), NewProp_bConnecting_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSIK_P2PSessionState_Statics::NewProp_P2PSessionError = { "P2PSessionError", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_P2PSessionState, P2PSessionError), Z_Construct_UEnum_SteamIntegrationKit_ESIK_P2PSessionError, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_P2PSessionError_MetaData), NewProp_P2PSessionError_MetaData) }; // 3194943706
void Z_Construct_UScriptStruct_FSIK_P2PSessionState_Statics::NewProp_bUsingRelay_SetBit(void* Obj)
{
	((FSIK_P2PSessionState*)Obj)->bUsingRelay = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSIK_P2PSessionState_Statics::NewProp_bUsingRelay = { "bUsingRelay", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSIK_P2PSessionState), &Z_Construct_UScriptStruct_FSIK_P2PSessionState_Statics::NewProp_bUsingRelay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsingRelay_MetaData), NewProp_bUsingRelay_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSIK_P2PSessionState_Statics::NewProp_BytesQueuedForSend = { "BytesQueuedForSend", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_P2PSessionState, BytesQueuedForSend), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BytesQueuedForSend_MetaData), NewProp_BytesQueuedForSend_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSIK_P2PSessionState_Statics::NewProp_PacketsQueuedForSend = { "PacketsQueuedForSend", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_P2PSessionState, PacketsQueuedForSend), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PacketsQueuedForSend_MetaData), NewProp_PacketsQueuedForSend_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSIK_P2PSessionState_Statics::NewProp_RemoteIP = { "RemoteIP", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_P2PSessionState, RemoteIP), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemoteIP_MetaData), NewProp_RemoteIP_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSIK_P2PSessionState_Statics::NewProp_RemotePort = { "RemotePort", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_P2PSessionState, RemotePort), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemotePort_MetaData), NewProp_RemotePort_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSIK_P2PSessionState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_P2PSessionState_Statics::NewProp_bConnectionActive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_P2PSessionState_Statics::NewProp_bConnecting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_P2PSessionState_Statics::NewProp_P2PSessionError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_P2PSessionState_Statics::NewProp_bUsingRelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_P2PSessionState_Statics::NewProp_BytesQueuedForSend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_P2PSessionState_Statics::NewProp_PacketsQueuedForSend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_P2PSessionState_Statics::NewProp_RemoteIP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_P2PSessionState_Statics::NewProp_RemotePort,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_P2PSessionState_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSIK_P2PSessionState Property Definitions ***************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSIK_P2PSessionState_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	&NewStructOps,
	"SIK_P2PSessionState",
	Z_Construct_UScriptStruct_FSIK_P2PSessionState_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_P2PSessionState_Statics::PropPointers),
	sizeof(FSIK_P2PSessionState),
	alignof(FSIK_P2PSessionState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_P2PSessionState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSIK_P2PSessionState_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSIK_P2PSessionState()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_P2PSessionState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSIK_P2PSessionState.InnerSingleton, Z_Construct_UScriptStruct_FSIK_P2PSessionState_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSIK_P2PSessionState.InnerSingleton);
}
// ********** End ScriptStruct FSIK_P2PSessionState ************************************************

// ********** Begin Enum ESIK_P2PSend **************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESIK_P2PSend;
static UEnum* ESIK_P2PSend_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESIK_P2PSend.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESIK_P2PSend.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamIntegrationKit_ESIK_P2PSend, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("ESIK_P2PSend"));
	}
	return Z_Registration_Info_UEnum_ESIK_P2PSend.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<ESIK_P2PSend>()
{
	return ESIK_P2PSend_StaticEnum();
}
struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_P2PSend_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
		{ "P2PSendReliable.DisplayName", "Reliable" },
		{ "P2PSendReliable.Name", "P2PSendReliable" },
		{ "P2PSendReliableWithBuffering.DisplayName", "Reliable With Buffering" },
		{ "P2PSendReliableWithBuffering.Name", "P2PSendReliableWithBuffering" },
		{ "P2PSendUnreliable.DisplayName", "Unreliable" },
		{ "P2PSendUnreliable.Name", "P2PSendUnreliable" },
		{ "P2PSendUnreliableNoDelay.DisplayName", "Unreliable No Delay" },
		{ "P2PSendUnreliableNoDelay.Name", "P2PSendUnreliableNoDelay" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "P2PSendUnreliable", (int64)P2PSendUnreliable },
		{ "P2PSendUnreliableNoDelay", (int64)P2PSendUnreliableNoDelay },
		{ "P2PSendReliable", (int64)P2PSendReliable },
		{ "P2PSendReliableWithBuffering", (int64)P2PSendReliableWithBuffering },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_P2PSend_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamIntegrationKit_ESIK_P2PSend_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	"ESIK_P2PSend",
	"ESIK_P2PSend",
	Z_Construct_UEnum_SteamIntegrationKit_ESIK_P2PSend_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_P2PSend_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_P2PSend_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamIntegrationKit_ESIK_P2PSend_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_P2PSend()
{
	if (!Z_Registration_Info_UEnum_ESIK_P2PSend.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESIK_P2PSend.InnerSingleton, Z_Construct_UEnum_SteamIntegrationKit_ESIK_P2PSend_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESIK_P2PSend.InnerSingleton;
}
// ********** End Enum ESIK_P2PSend ****************************************************************

// ********** Begin ScriptStruct FSIK_PublishedFileId **********************************************
struct Z_Construct_UScriptStruct_FSIK_PublishedFileId_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSIK_PublishedFileId); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSIK_PublishedFileId); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PublishedFileId_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSIK_PublishedFileId constinit property declarations **************
	static const UECodeGen_Private::FInt64PropertyParams NewProp_PublishedFileId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSIK_PublishedFileId constinit property declarations ****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSIK_PublishedFileId>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSIK_PublishedFileId_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSIK_PublishedFileId;
class UScriptStruct* FSIK_PublishedFileId::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_PublishedFileId.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSIK_PublishedFileId.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSIK_PublishedFileId, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("SIK_PublishedFileId"));
	}
	return Z_Registration_Info_UScriptStruct_FSIK_PublishedFileId.OuterSingleton;
	}

// ********** Begin ScriptStruct FSIK_PublishedFileId Property Definitions *************************
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FSIK_PublishedFileId_Statics::NewProp_PublishedFileId = { "PublishedFileId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_PublishedFileId, PublishedFileId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PublishedFileId_MetaData), NewProp_PublishedFileId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSIK_PublishedFileId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_PublishedFileId_Statics::NewProp_PublishedFileId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_PublishedFileId_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSIK_PublishedFileId Property Definitions ***************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSIK_PublishedFileId_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	&NewStructOps,
	"SIK_PublishedFileId",
	Z_Construct_UScriptStruct_FSIK_PublishedFileId_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_PublishedFileId_Statics::PropPointers),
	sizeof(FSIK_PublishedFileId),
	alignof(FSIK_PublishedFileId),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_PublishedFileId_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSIK_PublishedFileId_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSIK_PublishedFileId()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_PublishedFileId.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSIK_PublishedFileId.InnerSingleton, Z_Construct_UScriptStruct_FSIK_PublishedFileId_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSIK_PublishedFileId.InnerSingleton);
}
// ********** End ScriptStruct FSIK_PublishedFileId ************************************************

// ********** Begin ScriptStruct FSIK_PublishedFileUpdateHandle ************************************
struct Z_Construct_UScriptStruct_FSIK_PublishedFileUpdateHandle_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSIK_PublishedFileUpdateHandle); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSIK_PublishedFileUpdateHandle); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PublishedFileUpdateHandle_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSIK_PublishedFileUpdateHandle constinit property declarations ****
	static const UECodeGen_Private::FInt64PropertyParams NewProp_PublishedFileUpdateHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSIK_PublishedFileUpdateHandle constinit property declarations ******
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSIK_PublishedFileUpdateHandle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSIK_PublishedFileUpdateHandle_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSIK_PublishedFileUpdateHandle;
class UScriptStruct* FSIK_PublishedFileUpdateHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_PublishedFileUpdateHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSIK_PublishedFileUpdateHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSIK_PublishedFileUpdateHandle, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("SIK_PublishedFileUpdateHandle"));
	}
	return Z_Registration_Info_UScriptStruct_FSIK_PublishedFileUpdateHandle.OuterSingleton;
	}

// ********** Begin ScriptStruct FSIK_PublishedFileUpdateHandle Property Definitions ***************
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FSIK_PublishedFileUpdateHandle_Statics::NewProp_PublishedFileUpdateHandle = { "PublishedFileUpdateHandle", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_PublishedFileUpdateHandle, PublishedFileUpdateHandle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PublishedFileUpdateHandle_MetaData), NewProp_PublishedFileUpdateHandle_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSIK_PublishedFileUpdateHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_PublishedFileUpdateHandle_Statics::NewProp_PublishedFileUpdateHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_PublishedFileUpdateHandle_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSIK_PublishedFileUpdateHandle Property Definitions *****************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSIK_PublishedFileUpdateHandle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	&NewStructOps,
	"SIK_PublishedFileUpdateHandle",
	Z_Construct_UScriptStruct_FSIK_PublishedFileUpdateHandle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_PublishedFileUpdateHandle_Statics::PropPointers),
	sizeof(FSIK_PublishedFileUpdateHandle),
	alignof(FSIK_PublishedFileUpdateHandle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_PublishedFileUpdateHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSIK_PublishedFileUpdateHandle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSIK_PublishedFileUpdateHandle()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_PublishedFileUpdateHandle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSIK_PublishedFileUpdateHandle.InnerSingleton, Z_Construct_UScriptStruct_FSIK_PublishedFileUpdateHandle_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSIK_PublishedFileUpdateHandle.InnerSingleton);
}
// ********** End ScriptStruct FSIK_PublishedFileUpdateHandle **************************************

// ********** Begin ScriptStruct FSIK_UGCFileWriteStreamHandle *************************************
struct Z_Construct_UScriptStruct_FSIK_UGCFileWriteStreamHandle_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSIK_UGCFileWriteStreamHandle); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSIK_UGCFileWriteStreamHandle); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UGCFileWriteStreamHandle_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSIK_UGCFileWriteStreamHandle constinit property declarations *****
	static const UECodeGen_Private::FInt64PropertyParams NewProp_UGCFileWriteStreamHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSIK_UGCFileWriteStreamHandle constinit property declarations *******
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSIK_UGCFileWriteStreamHandle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSIK_UGCFileWriteStreamHandle_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSIK_UGCFileWriteStreamHandle;
class UScriptStruct* FSIK_UGCFileWriteStreamHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_UGCFileWriteStreamHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSIK_UGCFileWriteStreamHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSIK_UGCFileWriteStreamHandle, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("SIK_UGCFileWriteStreamHandle"));
	}
	return Z_Registration_Info_UScriptStruct_FSIK_UGCFileWriteStreamHandle.OuterSingleton;
	}

// ********** Begin ScriptStruct FSIK_UGCFileWriteStreamHandle Property Definitions ****************
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FSIK_UGCFileWriteStreamHandle_Statics::NewProp_UGCFileWriteStreamHandle = { "UGCFileWriteStreamHandle", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_UGCFileWriteStreamHandle, UGCFileWriteStreamHandle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UGCFileWriteStreamHandle_MetaData), NewProp_UGCFileWriteStreamHandle_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSIK_UGCFileWriteStreamHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_UGCFileWriteStreamHandle_Statics::NewProp_UGCFileWriteStreamHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_UGCFileWriteStreamHandle_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSIK_UGCFileWriteStreamHandle Property Definitions ******************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSIK_UGCFileWriteStreamHandle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	&NewStructOps,
	"SIK_UGCFileWriteStreamHandle",
	Z_Construct_UScriptStruct_FSIK_UGCFileWriteStreamHandle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_UGCFileWriteStreamHandle_Statics::PropPointers),
	sizeof(FSIK_UGCFileWriteStreamHandle),
	alignof(FSIK_UGCFileWriteStreamHandle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_UGCFileWriteStreamHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSIK_UGCFileWriteStreamHandle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSIK_UGCFileWriteStreamHandle()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_UGCFileWriteStreamHandle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSIK_UGCFileWriteStreamHandle.InnerSingleton, Z_Construct_UScriptStruct_FSIK_UGCFileWriteStreamHandle_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSIK_UGCFileWriteStreamHandle.InnerSingleton);
}
// ********** End ScriptStruct FSIK_UGCFileWriteStreamHandle ***************************************

// ********** Begin ScriptStruct FSIK_UGCHandle ****************************************************
struct Z_Construct_UScriptStruct_FSIK_UGCHandle_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSIK_UGCHandle); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSIK_UGCHandle); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UGCHandle_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSIK_UGCHandle constinit property declarations ********************
	static const UECodeGen_Private::FInt64PropertyParams NewProp_UGCHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSIK_UGCHandle constinit property declarations **********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSIK_UGCHandle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSIK_UGCHandle_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSIK_UGCHandle;
class UScriptStruct* FSIK_UGCHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_UGCHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSIK_UGCHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSIK_UGCHandle, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("SIK_UGCHandle"));
	}
	return Z_Registration_Info_UScriptStruct_FSIK_UGCHandle.OuterSingleton;
	}

// ********** Begin ScriptStruct FSIK_UGCHandle Property Definitions *******************************
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FSIK_UGCHandle_Statics::NewProp_UGCHandle = { "UGCHandle", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_UGCHandle, UGCHandle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UGCHandle_MetaData), NewProp_UGCHandle_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSIK_UGCHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_UGCHandle_Statics::NewProp_UGCHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_UGCHandle_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSIK_UGCHandle Property Definitions *********************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSIK_UGCHandle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	&NewStructOps,
	"SIK_UGCHandle",
	Z_Construct_UScriptStruct_FSIK_UGCHandle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_UGCHandle_Statics::PropPointers),
	sizeof(FSIK_UGCHandle),
	alignof(FSIK_UGCHandle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_UGCHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSIK_UGCHandle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSIK_UGCHandle()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_UGCHandle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSIK_UGCHandle.InnerSingleton, Z_Construct_UScriptStruct_FSIK_UGCHandle_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSIK_UGCHandle.InnerSingleton);
}
// ********** End ScriptStruct FSIK_UGCHandle ******************************************************

// ********** Begin Enum ESIK_RemoteStorageLocalFileChange *****************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESIK_RemoteStorageLocalFileChange;
static UEnum* ESIK_RemoteStorageLocalFileChange_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESIK_RemoteStorageLocalFileChange.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESIK_RemoteStorageLocalFileChange.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamIntegrationKit_ESIK_RemoteStorageLocalFileChange, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("ESIK_RemoteStorageLocalFileChange"));
	}
	return Z_Registration_Info_UEnum_ESIK_RemoteStorageLocalFileChange.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<ESIK_RemoteStorageLocalFileChange>()
{
	return ESIK_RemoteStorageLocalFileChange_StaticEnum();
}
struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_RemoteStorageLocalFileChange_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
		{ "RemoteStorageLocalFileChange_FileDeleted.DisplayName", "File Deleted" },
		{ "RemoteStorageLocalFileChange_FileDeleted.Name", "RemoteStorageLocalFileChange_FileDeleted" },
		{ "RemoteStorageLocalFileChange_FileUpdated.DisplayName", "File Updated" },
		{ "RemoteStorageLocalFileChange_FileUpdated.Name", "RemoteStorageLocalFileChange_FileUpdated" },
		{ "RemoteStorageLocalFileChange_Invalid.DisplayName", "Invalid" },
		{ "RemoteStorageLocalFileChange_Invalid.Name", "RemoteStorageLocalFileChange_Invalid" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "RemoteStorageLocalFileChange_Invalid", (int64)RemoteStorageLocalFileChange_Invalid },
		{ "RemoteStorageLocalFileChange_FileUpdated", (int64)RemoteStorageLocalFileChange_FileUpdated },
		{ "RemoteStorageLocalFileChange_FileDeleted", (int64)RemoteStorageLocalFileChange_FileDeleted },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_RemoteStorageLocalFileChange_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamIntegrationKit_ESIK_RemoteStorageLocalFileChange_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	"ESIK_RemoteStorageLocalFileChange",
	"ESIK_RemoteStorageLocalFileChange",
	Z_Construct_UEnum_SteamIntegrationKit_ESIK_RemoteStorageLocalFileChange_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_RemoteStorageLocalFileChange_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_RemoteStorageLocalFileChange_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamIntegrationKit_ESIK_RemoteStorageLocalFileChange_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_RemoteStorageLocalFileChange()
{
	if (!Z_Registration_Info_UEnum_ESIK_RemoteStorageLocalFileChange.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESIK_RemoteStorageLocalFileChange.InnerSingleton, Z_Construct_UEnum_SteamIntegrationKit_ESIK_RemoteStorageLocalFileChange_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESIK_RemoteStorageLocalFileChange.InnerSingleton;
}
// ********** End Enum ESIK_RemoteStorageLocalFileChange *******************************************

// ********** Begin Enum ESIK_RemoteStorageFilePathType ********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESIK_RemoteStorageFilePathType;
static UEnum* ESIK_RemoteStorageFilePathType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESIK_RemoteStorageFilePathType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESIK_RemoteStorageFilePathType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamIntegrationKit_ESIK_RemoteStorageFilePathType, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("ESIK_RemoteStorageFilePathType"));
	}
	return Z_Registration_Info_UEnum_ESIK_RemoteStorageFilePathType.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<ESIK_RemoteStorageFilePathType>()
{
	return ESIK_RemoteStorageFilePathType_StaticEnum();
}
struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_RemoteStorageFilePathType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
		{ "RemoteStorageFilePathType_Absolute.DisplayName", "Absolute" },
		{ "RemoteStorageFilePathType_Absolute.Name", "RemoteStorageFilePathType_Absolute" },
		{ "RemoteStorageFilePathType_APIFilename.DisplayName", "API Filename" },
		{ "RemoteStorageFilePathType_APIFilename.Name", "RemoteStorageFilePathType_APIFilename" },
		{ "RemoteStorageFilePathType_Invalid.DisplayName", "Invalid" },
		{ "RemoteStorageFilePathType_Invalid.Name", "RemoteStorageFilePathType_Invalid" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "RemoteStorageFilePathType_Invalid", (int64)RemoteStorageFilePathType_Invalid },
		{ "RemoteStorageFilePathType_Absolute", (int64)RemoteStorageFilePathType_Absolute },
		{ "RemoteStorageFilePathType_APIFilename", (int64)RemoteStorageFilePathType_APIFilename },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_RemoteStorageFilePathType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamIntegrationKit_ESIK_RemoteStorageFilePathType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	"ESIK_RemoteStorageFilePathType",
	"ESIK_RemoteStorageFilePathType",
	Z_Construct_UEnum_SteamIntegrationKit_ESIK_RemoteStorageFilePathType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_RemoteStorageFilePathType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_RemoteStorageFilePathType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamIntegrationKit_ESIK_RemoteStorageFilePathType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_RemoteStorageFilePathType()
{
	if (!Z_Registration_Info_UEnum_ESIK_RemoteStorageFilePathType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESIK_RemoteStorageFilePathType.InnerSingleton, Z_Construct_UEnum_SteamIntegrationKit_ESIK_RemoteStorageFilePathType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESIK_RemoteStorageFilePathType.InnerSingleton;
}
// ********** End Enum ESIK_RemoteStorageFilePathType **********************************************

// ********** Begin Enum ESIK_RemoteStoragePlatform ************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESIK_RemoteStoragePlatform;
static UEnum* ESIK_RemoteStoragePlatform_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESIK_RemoteStoragePlatform.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESIK_RemoteStoragePlatform.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamIntegrationKit_ESIK_RemoteStoragePlatform, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("ESIK_RemoteStoragePlatform"));
	}
	return Z_Registration_Info_UEnum_ESIK_RemoteStoragePlatform.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<ESIK_RemoteStoragePlatform>()
{
	return ESIK_RemoteStoragePlatform_StaticEnum();
}
struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_RemoteStoragePlatform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
		{ "RemoteStoragePlatformAll.DisplayName", "All" },
		{ "RemoteStoragePlatformAll.Name", "RemoteStoragePlatformAll" },
		{ "RemoteStoragePlatformLinux.DisplayName", "Linux" },
		{ "RemoteStoragePlatformLinux.Name", "RemoteStoragePlatformLinux" },
		{ "RemoteStoragePlatformNone.DisplayName", "None" },
		{ "RemoteStoragePlatformNone.Name", "RemoteStoragePlatformNone" },
		{ "RemoteStoragePlatformOSX.DisplayName", "Mac OSX" },
		{ "RemoteStoragePlatformOSX.Name", "RemoteStoragePlatformOSX" },
		{ "RemoteStoragePlatformPS3.DisplayName", "PS3" },
		{ "RemoteStoragePlatformPS3.Name", "RemoteStoragePlatformPS3" },
		{ "RemoteStoragePlatformReserved2.DisplayName", "Reserved2" },
		{ "RemoteStoragePlatformReserved2.Name", "RemoteStoragePlatformReserved2" },
		{ "RemoteStoragePlatformWindows.DisplayName", "Windows" },
		{ "RemoteStoragePlatformWindows.Name", "RemoteStoragePlatformWindows" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "RemoteStoragePlatformNone", (int64)RemoteStoragePlatformNone },
		{ "RemoteStoragePlatformWindows", (int64)RemoteStoragePlatformWindows },
		{ "RemoteStoragePlatformOSX", (int64)RemoteStoragePlatformOSX },
		{ "RemoteStoragePlatformPS3", (int64)RemoteStoragePlatformPS3 },
		{ "RemoteStoragePlatformLinux", (int64)RemoteStoragePlatformLinux },
		{ "RemoteStoragePlatformReserved2", (int64)RemoteStoragePlatformReserved2 },
		{ "RemoteStoragePlatformAll", (int64)RemoteStoragePlatformAll },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_RemoteStoragePlatform_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamIntegrationKit_ESIK_RemoteStoragePlatform_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	"ESIK_RemoteStoragePlatform",
	"ESIK_RemoteStoragePlatform",
	Z_Construct_UEnum_SteamIntegrationKit_ESIK_RemoteStoragePlatform_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_RemoteStoragePlatform_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_RemoteStoragePlatform_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamIntegrationKit_ESIK_RemoteStoragePlatform_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_RemoteStoragePlatform()
{
	if (!Z_Registration_Info_UEnum_ESIK_RemoteStoragePlatform.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESIK_RemoteStoragePlatform.InnerSingleton, Z_Construct_UEnum_SteamIntegrationKit_ESIK_RemoteStoragePlatform_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESIK_RemoteStoragePlatform.InnerSingleton;
}
// ********** End Enum ESIK_RemoteStoragePlatform **************************************************

// ********** Begin Enum ESIK_RemoteStoragePublishedFileVisibility *********************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESIK_RemoteStoragePublishedFileVisibility;
static UEnum* ESIK_RemoteStoragePublishedFileVisibility_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESIK_RemoteStoragePublishedFileVisibility.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESIK_RemoteStoragePublishedFileVisibility.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamIntegrationKit_ESIK_RemoteStoragePublishedFileVisibility, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("ESIK_RemoteStoragePublishedFileVisibility"));
	}
	return Z_Registration_Info_UEnum_ESIK_RemoteStoragePublishedFileVisibility.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<ESIK_RemoteStoragePublishedFileVisibility>()
{
	return ESIK_RemoteStoragePublishedFileVisibility_StaticEnum();
}
struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_RemoteStoragePublishedFileVisibility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ERemoteStoragePublishedFileVisibilityUnlisted.DisplayName", "Unlisted" },
		{ "ERemoteStoragePublishedFileVisibilityUnlisted.Name", "ERemoteStoragePublishedFileVisibilityUnlisted" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
		{ "RemoteStoragePublishedFileVisibilityFriendsOnly.DisplayName", "Friends Only" },
		{ "RemoteStoragePublishedFileVisibilityFriendsOnly.Name", "RemoteStoragePublishedFileVisibilityFriendsOnly" },
		{ "RemoteStoragePublishedFileVisibilityPrivate.DisplayName", "Private" },
		{ "RemoteStoragePublishedFileVisibilityPrivate.Name", "RemoteStoragePublishedFileVisibilityPrivate" },
		{ "RemoteStoragePublishedFileVisibilityPublic.DisplayName", "Public" },
		{ "RemoteStoragePublishedFileVisibilityPublic.Name", "RemoteStoragePublishedFileVisibilityPublic" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "RemoteStoragePublishedFileVisibilityPublic", (int64)RemoteStoragePublishedFileVisibilityPublic },
		{ "RemoteStoragePublishedFileVisibilityFriendsOnly", (int64)RemoteStoragePublishedFileVisibilityFriendsOnly },
		{ "RemoteStoragePublishedFileVisibilityPrivate", (int64)RemoteStoragePublishedFileVisibilityPrivate },
		{ "ERemoteStoragePublishedFileVisibilityUnlisted", (int64)ERemoteStoragePublishedFileVisibilityUnlisted },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_RemoteStoragePublishedFileVisibility_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamIntegrationKit_ESIK_RemoteStoragePublishedFileVisibility_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	"ESIK_RemoteStoragePublishedFileVisibility",
	"ESIK_RemoteStoragePublishedFileVisibility",
	Z_Construct_UEnum_SteamIntegrationKit_ESIK_RemoteStoragePublishedFileVisibility_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_RemoteStoragePublishedFileVisibility_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_RemoteStoragePublishedFileVisibility_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamIntegrationKit_ESIK_RemoteStoragePublishedFileVisibility_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_RemoteStoragePublishedFileVisibility()
{
	if (!Z_Registration_Info_UEnum_ESIK_RemoteStoragePublishedFileVisibility.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESIK_RemoteStoragePublishedFileVisibility.InnerSingleton, Z_Construct_UEnum_SteamIntegrationKit_ESIK_RemoteStoragePublishedFileVisibility_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESIK_RemoteStoragePublishedFileVisibility.InnerSingleton;
}
// ********** End Enum ESIK_RemoteStoragePublishedFileVisibility ***********************************

// ********** Begin Enum ESIK_UGCReadAction ********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESIK_UGCReadAction;
static UEnum* ESIK_UGCReadAction_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESIK_UGCReadAction.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESIK_UGCReadAction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamIntegrationKit_ESIK_UGCReadAction, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("ESIK_UGCReadAction"));
	}
	return Z_Registration_Info_UEnum_ESIK_UGCReadAction.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<ESIK_UGCReadAction>()
{
	return ESIK_UGCReadAction_StaticEnum();
}
struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_UGCReadAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
		{ "UGCRead_Close.DisplayName", "Close" },
		{ "UGCRead_Close.Name", "UGCRead_Close" },
		{ "UGCRead_ContinueReading.DisplayName", "Continue Reading" },
		{ "UGCRead_ContinueReading.Name", "UGCRead_ContinueReading" },
		{ "UGCRead_ContinueReadingUntilFinished.DisplayName", "Continue Reading Until Finished" },
		{ "UGCRead_ContinueReadingUntilFinished.Name", "UGCRead_ContinueReadingUntilFinished" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "UGCRead_ContinueReadingUntilFinished", (int64)UGCRead_ContinueReadingUntilFinished },
		{ "UGCRead_ContinueReading", (int64)UGCRead_ContinueReading },
		{ "UGCRead_Close", (int64)UGCRead_Close },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_UGCReadAction_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamIntegrationKit_ESIK_UGCReadAction_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	"ESIK_UGCReadAction",
	"ESIK_UGCReadAction",
	Z_Construct_UEnum_SteamIntegrationKit_ESIK_UGCReadAction_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_UGCReadAction_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_UGCReadAction_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamIntegrationKit_ESIK_UGCReadAction_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_UGCReadAction()
{
	if (!Z_Registration_Info_UEnum_ESIK_UGCReadAction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESIK_UGCReadAction.InnerSingleton, Z_Construct_UEnum_SteamIntegrationKit_ESIK_UGCReadAction_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESIK_UGCReadAction.InnerSingleton;
}
// ********** End Enum ESIK_UGCReadAction **********************************************************

// ********** Begin Enum ESIK_WorkshopEnumerationType **********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESIK_WorkshopEnumerationType;
static UEnum* ESIK_WorkshopEnumerationType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESIK_WorkshopEnumerationType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESIK_WorkshopEnumerationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamIntegrationKit_ESIK_WorkshopEnumerationType, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("ESIK_WorkshopEnumerationType"));
	}
	return Z_Registration_Info_UEnum_ESIK_WorkshopEnumerationType.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<ESIK_WorkshopEnumerationType>()
{
	return ESIK_WorkshopEnumerationType_StaticEnum();
}
struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_WorkshopEnumerationType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
		{ "WorkshopEnumerationTypeContentByFriends.DisplayName", "Content By Friends" },
		{ "WorkshopEnumerationTypeContentByFriends.Name", "WorkshopEnumerationTypeContentByFriends" },
		{ "WorkshopEnumerationTypeFavoritesOfFriends.DisplayName", "Favorites Of Friends" },
		{ "WorkshopEnumerationTypeFavoritesOfFriends.Name", "WorkshopEnumerationTypeFavoritesOfFriends" },
		{ "WorkshopEnumerationTypeRankedByVote.DisplayName", "Ranked By Vote" },
		{ "WorkshopEnumerationTypeRankedByVote.Name", "WorkshopEnumerationTypeRankedByVote" },
		{ "WorkshopEnumerationTypeRecent.DisplayName", "Recent" },
		{ "WorkshopEnumerationTypeRecent.Name", "WorkshopEnumerationTypeRecent" },
		{ "WorkshopEnumerationTypeRecentFromFollowedUsers.DisplayName", "Recent From Followed Users" },
		{ "WorkshopEnumerationTypeRecentFromFollowedUsers.Name", "WorkshopEnumerationTypeRecentFromFollowedUsers" },
		{ "WorkshopEnumerationTypeTrending.DisplayName", "Trending" },
		{ "WorkshopEnumerationTypeTrending.Name", "WorkshopEnumerationTypeTrending" },
		{ "WorkshopEnumerationTypeVotedByFriends.DisplayName", "Voted By Friends" },
		{ "WorkshopEnumerationTypeVotedByFriends.Name", "WorkshopEnumerationTypeVotedByFriends" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "WorkshopEnumerationTypeRankedByVote", (int64)WorkshopEnumerationTypeRankedByVote },
		{ "WorkshopEnumerationTypeRecent", (int64)WorkshopEnumerationTypeRecent },
		{ "WorkshopEnumerationTypeTrending", (int64)WorkshopEnumerationTypeTrending },
		{ "WorkshopEnumerationTypeFavoritesOfFriends", (int64)WorkshopEnumerationTypeFavoritesOfFriends },
		{ "WorkshopEnumerationTypeVotedByFriends", (int64)WorkshopEnumerationTypeVotedByFriends },
		{ "WorkshopEnumerationTypeContentByFriends", (int64)WorkshopEnumerationTypeContentByFriends },
		{ "WorkshopEnumerationTypeRecentFromFollowedUsers", (int64)WorkshopEnumerationTypeRecentFromFollowedUsers },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_WorkshopEnumerationType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamIntegrationKit_ESIK_WorkshopEnumerationType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	"ESIK_WorkshopEnumerationType",
	"ESIK_WorkshopEnumerationType",
	Z_Construct_UEnum_SteamIntegrationKit_ESIK_WorkshopEnumerationType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_WorkshopEnumerationType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_WorkshopEnumerationType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamIntegrationKit_ESIK_WorkshopEnumerationType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_WorkshopEnumerationType()
{
	if (!Z_Registration_Info_UEnum_ESIK_WorkshopEnumerationType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESIK_WorkshopEnumerationType.InnerSingleton, Z_Construct_UEnum_SteamIntegrationKit_ESIK_WorkshopEnumerationType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESIK_WorkshopEnumerationType.InnerSingleton;
}
// ********** End Enum ESIK_WorkshopEnumerationType ************************************************

// ********** Begin Enum ESIK_TextFilteringContext *************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESIK_TextFilteringContext;
static UEnum* ESIK_TextFilteringContext_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESIK_TextFilteringContext.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESIK_TextFilteringContext.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamIntegrationKit_ESIK_TextFilteringContext, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("ESIK_TextFilteringContext"));
	}
	return Z_Registration_Info_UEnum_ESIK_TextFilteringContext.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<ESIK_TextFilteringContext>()
{
	return ESIK_TextFilteringContext_StaticEnum();
}
struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_TextFilteringContext_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
		{ "TextFilteringContextChat.DisplayName", "Chat" },
		{ "TextFilteringContextChat.Name", "TextFilteringContextChat" },
		{ "TextFilteringContextGameContent.DisplayName", "Game Content" },
		{ "TextFilteringContextGameContent.Name", "TextFilteringContextGameContent" },
		{ "TextFilteringContextName.DisplayName", "Name" },
		{ "TextFilteringContextName.Name", "TextFilteringContextName" },
		{ "TextFilteringContextUnknown.DisplayName", "Unknown" },
		{ "TextFilteringContextUnknown.Name", "TextFilteringContextUnknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "TextFilteringContextUnknown", (int64)TextFilteringContextUnknown },
		{ "TextFilteringContextGameContent", (int64)TextFilteringContextGameContent },
		{ "TextFilteringContextChat", (int64)TextFilteringContextChat },
		{ "TextFilteringContextName", (int64)TextFilteringContextName },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_TextFilteringContext_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamIntegrationKit_ESIK_TextFilteringContext_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	"ESIK_TextFilteringContext",
	"ESIK_TextFilteringContext",
	Z_Construct_UEnum_SteamIntegrationKit_ESIK_TextFilteringContext_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_TextFilteringContext_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_TextFilteringContext_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamIntegrationKit_ESIK_TextFilteringContext_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_TextFilteringContext()
{
	if (!Z_Registration_Info_UEnum_ESIK_TextFilteringContext.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESIK_TextFilteringContext.InnerSingleton, Z_Construct_UEnum_SteamIntegrationKit_ESIK_TextFilteringContext_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESIK_TextFilteringContext.InnerSingleton;
}
// ********** End Enum ESIK_TextFilteringContext ***************************************************

// ********** Begin Enum ESIK_WorkshopFileType *****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESIK_WorkshopFileType;
static UEnum* ESIK_WorkshopFileType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESIK_WorkshopFileType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESIK_WorkshopFileType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamIntegrationKit_ESIK_WorkshopFileType, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("ESIK_WorkshopFileType"));
	}
	return Z_Registration_Info_UEnum_ESIK_WorkshopFileType.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<ESIK_WorkshopFileType>()
{
	return ESIK_WorkshopFileType_StaticEnum();
}
struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_WorkshopFileType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
		{ "WorkshopFileTypeArt.DisplayName", "Art" },
		{ "WorkshopFileTypeArt.Name", "WorkshopFileTypeArt" },
		{ "WorkshopFileTypeCollection.DisplayName", "Collection" },
		{ "WorkshopFileTypeCollection.Name", "WorkshopFileTypeCollection" },
		{ "WorkshopFileTypeCommunity.DisplayName", "Community" },
		{ "WorkshopFileTypeCommunity.Name", "WorkshopFileTypeCommunity" },
		{ "WorkshopFileTypeConcept.DisplayName", "Concept" },
		{ "WorkshopFileTypeConcept.Name", "WorkshopFileTypeConcept" },
		{ "WorkshopFileTypeControllerBinding.DisplayName", "Controller Binding" },
		{ "WorkshopFileTypeControllerBinding.Name", "WorkshopFileTypeControllerBinding" },
		{ "WorkshopFileTypeGame.DisplayName", "Game" },
		{ "WorkshopFileTypeGame.Name", "WorkshopFileTypeGame" },
		{ "WorkshopFileTypeGameManagedItem.DisplayName", "Game Managed Item" },
		{ "WorkshopFileTypeGameManagedItem.Name", "WorkshopFileTypeGameManagedItem" },
		{ "WorkshopFileTypeIntegratedGuide.DisplayName", "Integrated Guide" },
		{ "WorkshopFileTypeIntegratedGuide.Name", "WorkshopFileTypeIntegratedGuide" },
		{ "WorkshopFileTypeMax.DisplayName", "Max" },
		{ "WorkshopFileTypeMax.Name", "WorkshopFileTypeMax" },
		{ "WorkshopFileTypeMerch.DisplayName", "Merch" },
		{ "WorkshopFileTypeMerch.Name", "WorkshopFileTypeMerch" },
		{ "WorkshopFileTypeMicrotransaction.DisplayName", "Microtransaction" },
		{ "WorkshopFileTypeMicrotransaction.Name", "WorkshopFileTypeMicrotransaction" },
		{ "WorkshopFileTypeScreenshot.DisplayName", "Screenshot" },
		{ "WorkshopFileTypeScreenshot.Name", "WorkshopFileTypeScreenshot" },
		{ "WorkshopFileTypeSoftware.DisplayName", "Software" },
		{ "WorkshopFileTypeSoftware.Name", "WorkshopFileTypeSoftware" },
		{ "WorkshopFileTypeSteamVideo.DisplayName", "Steam Video" },
		{ "WorkshopFileTypeSteamVideo.Name", "WorkshopFileTypeSteamVideo" },
		{ "WorkshopFileTypeSteamworksAccessInvite.DisplayName", "Steamworks Access Invite" },
		{ "WorkshopFileTypeSteamworksAccessInvite.Name", "WorkshopFileTypeSteamworksAccessInvite" },
		{ "WorkshopFileTypeVideo.DisplayName", "Video" },
		{ "WorkshopFileTypeVideo.Name", "WorkshopFileTypeVideo" },
		{ "WorkshopFileTypeWebGuide.DisplayName", "Web Guide" },
		{ "WorkshopFileTypeWebGuide.Name", "WorkshopFileTypeWebGuide" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "WorkshopFileTypeCommunity", (int64)WorkshopFileTypeCommunity },
		{ "WorkshopFileTypeMicrotransaction", (int64)WorkshopFileTypeMicrotransaction },
		{ "WorkshopFileTypeCollection", (int64)WorkshopFileTypeCollection },
		{ "WorkshopFileTypeArt", (int64)WorkshopFileTypeArt },
		{ "WorkshopFileTypeVideo", (int64)WorkshopFileTypeVideo },
		{ "WorkshopFileTypeScreenshot", (int64)WorkshopFileTypeScreenshot },
		{ "WorkshopFileTypeGame", (int64)WorkshopFileTypeGame },
		{ "WorkshopFileTypeSoftware", (int64)WorkshopFileTypeSoftware },
		{ "WorkshopFileTypeConcept", (int64)WorkshopFileTypeConcept },
		{ "WorkshopFileTypeWebGuide", (int64)WorkshopFileTypeWebGuide },
		{ "WorkshopFileTypeIntegratedGuide", (int64)WorkshopFileTypeIntegratedGuide },
		{ "WorkshopFileTypeMerch", (int64)WorkshopFileTypeMerch },
		{ "WorkshopFileTypeControllerBinding", (int64)WorkshopFileTypeControllerBinding },
		{ "WorkshopFileTypeSteamworksAccessInvite", (int64)WorkshopFileTypeSteamworksAccessInvite },
		{ "WorkshopFileTypeSteamVideo", (int64)WorkshopFileTypeSteamVideo },
		{ "WorkshopFileTypeGameManagedItem", (int64)WorkshopFileTypeGameManagedItem },
		{ "WorkshopFileTypeMax", (int64)WorkshopFileTypeMax },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_WorkshopFileType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamIntegrationKit_ESIK_WorkshopFileType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	"ESIK_WorkshopFileType",
	"ESIK_WorkshopFileType",
	Z_Construct_UEnum_SteamIntegrationKit_ESIK_WorkshopFileType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_WorkshopFileType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_WorkshopFileType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamIntegrationKit_ESIK_WorkshopFileType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_WorkshopFileType()
{
	if (!Z_Registration_Info_UEnum_ESIK_WorkshopFileType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESIK_WorkshopFileType.InnerSingleton, Z_Construct_UEnum_SteamIntegrationKit_ESIK_WorkshopFileType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESIK_WorkshopFileType.InnerSingleton;
}
// ********** End Enum ESIK_WorkshopFileType *******************************************************

// ********** Begin Enum ESIK_VRScreenshotType *****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESIK_VRScreenshotType;
static UEnum* ESIK_VRScreenshotType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESIK_VRScreenshotType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESIK_VRScreenshotType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamIntegrationKit_ESIK_VRScreenshotType, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("ESIK_VRScreenshotType"));
	}
	return Z_Registration_Info_UEnum_ESIK_VRScreenshotType.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<ESIK_VRScreenshotType>()
{
	return ESIK_VRScreenshotType_StaticEnum();
}
struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_VRScreenshotType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
		{ "VRScreenshotType_Mono.DisplayName", "Mono" },
		{ "VRScreenshotType_Mono.Name", "VRScreenshotType_Mono" },
		{ "VRScreenshotType_MonoCubemap.DisplayName", "Mono Cubemap" },
		{ "VRScreenshotType_MonoCubemap.Name", "VRScreenshotType_MonoCubemap" },
		{ "VRScreenshotType_MonoPanorama.DisplayName", "Mono Panorama" },
		{ "VRScreenshotType_MonoPanorama.Name", "VRScreenshotType_MonoPanorama" },
		{ "VRScreenshotType_None.DisplayName", "None" },
		{ "VRScreenshotType_None.Name", "VRScreenshotType_None" },
		{ "VRScreenshotType_Stereo.DisplayName", "Stereo" },
		{ "VRScreenshotType_Stereo.Name", "VRScreenshotType_Stereo" },
		{ "VRScreenshotType_StereoPanorama.DisplayName", "Stereo Panorama" },
		{ "VRScreenshotType_StereoPanorama.Name", "VRScreenshotType_StereoPanorama" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "VRScreenshotType_None", (int64)VRScreenshotType_None },
		{ "VRScreenshotType_Mono", (int64)VRScreenshotType_Mono },
		{ "VRScreenshotType_Stereo", (int64)VRScreenshotType_Stereo },
		{ "VRScreenshotType_MonoCubemap", (int64)VRScreenshotType_MonoCubemap },
		{ "VRScreenshotType_MonoPanorama", (int64)VRScreenshotType_MonoPanorama },
		{ "VRScreenshotType_StereoPanorama", (int64)VRScreenshotType_StereoPanorama },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_VRScreenshotType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamIntegrationKit_ESIK_VRScreenshotType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	"ESIK_VRScreenshotType",
	"ESIK_VRScreenshotType",
	Z_Construct_UEnum_SteamIntegrationKit_ESIK_VRScreenshotType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_VRScreenshotType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_VRScreenshotType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamIntegrationKit_ESIK_VRScreenshotType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_VRScreenshotType()
{
	if (!Z_Registration_Info_UEnum_ESIK_VRScreenshotType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESIK_VRScreenshotType.InnerSingleton, Z_Construct_UEnum_SteamIntegrationKit_ESIK_VRScreenshotType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESIK_VRScreenshotType.InnerSingleton;
}
// ********** End Enum ESIK_VRScreenshotType *******************************************************

// ********** Begin ScriptStruct FSIK_ScreenshotHandle *********************************************
struct Z_Construct_UScriptStruct_FSIK_ScreenshotHandle_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSIK_ScreenshotHandle); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSIK_ScreenshotHandle); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSIK_ScreenshotHandle constinit property declarations *************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSIK_ScreenshotHandle constinit property declarations ***************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSIK_ScreenshotHandle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSIK_ScreenshotHandle_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSIK_ScreenshotHandle;
class UScriptStruct* FSIK_ScreenshotHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_ScreenshotHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSIK_ScreenshotHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSIK_ScreenshotHandle, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("SIK_ScreenshotHandle"));
	}
	return Z_Registration_Info_UScriptStruct_FSIK_ScreenshotHandle.OuterSingleton;
	}

// ********** Begin ScriptStruct FSIK_ScreenshotHandle Property Definitions ************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSIK_ScreenshotHandle_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_ScreenshotHandle, Result), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSIK_ScreenshotHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_ScreenshotHandle_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_ScreenshotHandle_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSIK_ScreenshotHandle Property Definitions **************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSIK_ScreenshotHandle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	&NewStructOps,
	"SIK_ScreenshotHandle",
	Z_Construct_UScriptStruct_FSIK_ScreenshotHandle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_ScreenshotHandle_Statics::PropPointers),
	sizeof(FSIK_ScreenshotHandle),
	alignof(FSIK_ScreenshotHandle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_ScreenshotHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSIK_ScreenshotHandle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSIK_ScreenshotHandle()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_ScreenshotHandle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSIK_ScreenshotHandle.InnerSingleton, Z_Construct_UScriptStruct_FSIK_ScreenshotHandle_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSIK_ScreenshotHandle.InnerSingleton);
}
// ********** End ScriptStruct FSIK_ScreenshotHandle ***********************************************

// ********** Begin Enum ESIK_ItemPreviewType ******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESIK_ItemPreviewType;
static UEnum* ESIK_ItemPreviewType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESIK_ItemPreviewType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESIK_ItemPreviewType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamIntegrationKit_ESIK_ItemPreviewType, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("ESIK_ItemPreviewType"));
	}
	return Z_Registration_Info_UEnum_ESIK_ItemPreviewType.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<ESIK_ItemPreviewType>()
{
	return ESIK_ItemPreviewType_StaticEnum();
}
struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_ItemPreviewType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ItemPreviewType_EnvironmentMap_HorizontalCross.DisplayName", "Environment Map Horizontal Cross" },
		{ "ItemPreviewType_EnvironmentMap_HorizontalCross.Name", "ItemPreviewType_EnvironmentMap_HorizontalCross" },
		{ "ItemPreviewType_EnvironmentMap_LatLong.DisplayName", "Environment Map Lat Long" },
		{ "ItemPreviewType_EnvironmentMap_LatLong.Name", "ItemPreviewType_EnvironmentMap_LatLong" },
		{ "ItemPreviewType_Image.DisplayName", "Image" },
		{ "ItemPreviewType_Image.Name", "ItemPreviewType_Image" },
		{ "ItemPreviewType_ReservedMax.DisplayName", "Reserved Max" },
		{ "ItemPreviewType_ReservedMax.Name", "ItemPreviewType_ReservedMax" },
		{ "ItemPreviewType_Sketchfab.DisplayName", "Sketchfab" },
		{ "ItemPreviewType_Sketchfab.Name", "ItemPreviewType_Sketchfab" },
		{ "ItemPreviewType_YouTubeVideo.DisplayName", "YouTube Video" },
		{ "ItemPreviewType_YouTubeVideo.Name", "ItemPreviewType_YouTubeVideo" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ItemPreviewType_Image", (int64)ItemPreviewType_Image },
		{ "ItemPreviewType_YouTubeVideo", (int64)ItemPreviewType_YouTubeVideo },
		{ "ItemPreviewType_Sketchfab", (int64)ItemPreviewType_Sketchfab },
		{ "ItemPreviewType_EnvironmentMap_HorizontalCross", (int64)ItemPreviewType_EnvironmentMap_HorizontalCross },
		{ "ItemPreviewType_EnvironmentMap_LatLong", (int64)ItemPreviewType_EnvironmentMap_LatLong },
		{ "ItemPreviewType_ReservedMax", (int64)ItemPreviewType_ReservedMax },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_ItemPreviewType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamIntegrationKit_ESIK_ItemPreviewType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	"ESIK_ItemPreviewType",
	"ESIK_ItemPreviewType",
	Z_Construct_UEnum_SteamIntegrationKit_ESIK_ItemPreviewType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_ItemPreviewType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_ItemPreviewType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamIntegrationKit_ESIK_ItemPreviewType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_ItemPreviewType()
{
	if (!Z_Registration_Info_UEnum_ESIK_ItemPreviewType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESIK_ItemPreviewType.InnerSingleton, Z_Construct_UEnum_SteamIntegrationKit_ESIK_ItemPreviewType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESIK_ItemPreviewType.InnerSingleton;
}
// ********** End Enum ESIK_ItemPreviewType ********************************************************

// ********** Begin Enum ESIK_ItemState ************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESIK_ItemState;
static UEnum* ESIK_ItemState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESIK_ItemState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESIK_ItemState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamIntegrationKit_ESIK_ItemState, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("ESIK_ItemState"));
	}
	return Z_Registration_Info_UEnum_ESIK_ItemState.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<ESIK_ItemState>()
{
	return ESIK_ItemState_StaticEnum();
}
struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_ItemState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ItemStateDownloading.DisplayName", "Downloading" },
		{ "ItemStateDownloading.Name", "ItemStateDownloading" },
		{ "ItemStateDownloadPending.DisplayName", "Download Pending" },
		{ "ItemStateDownloadPending.Name", "ItemStateDownloadPending" },
		{ "ItemStateInstalled.DisplayName", "Installed" },
		{ "ItemStateInstalled.Name", "ItemStateInstalled" },
		{ "ItemStateLegacyItem.DisplayName", "Legacy Item" },
		{ "ItemStateLegacyItem.Name", "ItemStateLegacyItem" },
		{ "ItemStateNeedsUpdate.DisplayName", "Needs Update" },
		{ "ItemStateNeedsUpdate.Name", "ItemStateNeedsUpdate" },
		{ "ItemStateNone.DisplayName", "None" },
		{ "ItemStateNone.Name", "ItemStateNone" },
		{ "ItemStateSubscribed.DisplayName", "Subscribed" },
		{ "ItemStateSubscribed.Name", "ItemStateSubscribed" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ItemStateNone", (int64)ItemStateNone },
		{ "ItemStateSubscribed", (int64)ItemStateSubscribed },
		{ "ItemStateLegacyItem", (int64)ItemStateLegacyItem },
		{ "ItemStateInstalled", (int64)ItemStateInstalled },
		{ "ItemStateNeedsUpdate", (int64)ItemStateNeedsUpdate },
		{ "ItemStateDownloading", (int64)ItemStateDownloading },
		{ "ItemStateDownloadPending", (int64)ItemStateDownloadPending },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_ItemState_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamIntegrationKit_ESIK_ItemState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	"ESIK_ItemState",
	"ESIK_ItemState",
	Z_Construct_UEnum_SteamIntegrationKit_ESIK_ItemState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_ItemState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_ItemState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamIntegrationKit_ESIK_ItemState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_ItemState()
{
	if (!Z_Registration_Info_UEnum_ESIK_ItemState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESIK_ItemState.InnerSingleton, Z_Construct_UEnum_SteamIntegrationKit_ESIK_ItemState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESIK_ItemState.InnerSingleton;
}
// ********** End Enum ESIK_ItemState **************************************************************

// ********** Begin Enum ESIK_ItemStatistic ********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESIK_ItemStatistic;
static UEnum* ESIK_ItemStatistic_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESIK_ItemStatistic.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESIK_ItemStatistic.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamIntegrationKit_ESIK_ItemStatistic, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("ESIK_ItemStatistic"));
	}
	return Z_Registration_Info_UEnum_ESIK_ItemStatistic.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<ESIK_ItemStatistic>()
{
	return ESIK_ItemStatistic_StaticEnum();
}
struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_ItemStatistic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ItemStatistic_NumComments.DisplayName", "Num Comments" },
		{ "ItemStatistic_NumComments.Name", "ItemStatistic_NumComments" },
		{ "ItemStatistic_NumFavorites.DisplayName", "Num Favorites" },
		{ "ItemStatistic_NumFavorites.Name", "ItemStatistic_NumFavorites" },
		{ "ItemStatistic_NumFollowers.DisplayName", "Num Followers" },
		{ "ItemStatistic_NumFollowers.Name", "ItemStatistic_NumFollowers" },
		{ "ItemStatistic_NumPlaytimeSessions.DisplayName", "Num Playtime Sessions" },
		{ "ItemStatistic_NumPlaytimeSessions.Name", "ItemStatistic_NumPlaytimeSessions" },
		{ "ItemStatistic_NumPlaytimeSessionsDuringTimePeriod.DisplayName", "Num Playtime Sessions During Time Period" },
		{ "ItemStatistic_NumPlaytimeSessionsDuringTimePeriod.Name", "ItemStatistic_NumPlaytimeSessionsDuringTimePeriod" },
		{ "ItemStatistic_NumSecondsPlayed.DisplayName", "Num Seconds Played" },
		{ "ItemStatistic_NumSecondsPlayed.Name", "ItemStatistic_NumSecondsPlayed" },
		{ "ItemStatistic_NumSecondsPlayedDuringTimePeriod.DisplayName", "Num Seconds Played During Time Period" },
		{ "ItemStatistic_NumSecondsPlayedDuringTimePeriod.Name", "ItemStatistic_NumSecondsPlayedDuringTimePeriod" },
		{ "ItemStatistic_NumSubscriptions.DisplayName", "Num Subscriptions" },
		{ "ItemStatistic_NumSubscriptions.Name", "ItemStatistic_NumSubscriptions" },
		{ "ItemStatistic_NumUniqueFavorites.DisplayName", "Num Unique Favorites" },
		{ "ItemStatistic_NumUniqueFavorites.Name", "ItemStatistic_NumUniqueFavorites" },
		{ "ItemStatistic_NumUniqueFollowers.DisplayName", "Num Unique Followers" },
		{ "ItemStatistic_NumUniqueFollowers.Name", "ItemStatistic_NumUniqueFollowers" },
		{ "ItemStatistic_NumUniqueSubscriptions.DisplayName", "Num Unique Subscriptions" },
		{ "ItemStatistic_NumUniqueSubscriptions.Name", "ItemStatistic_NumUniqueSubscriptions" },
		{ "ItemStatistic_NumUniqueWebsiteViews.DisplayName", "Num Unique Website Views" },
		{ "ItemStatistic_NumUniqueWebsiteViews.Name", "ItemStatistic_NumUniqueWebsiteViews" },
		{ "ItemStatistic_ReportScore.DisplayName", "Report Score" },
		{ "ItemStatistic_ReportScore.Name", "ItemStatistic_ReportScore" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ItemStatistic_NumSubscriptions", (int64)ItemStatistic_NumSubscriptions },
		{ "ItemStatistic_NumFavorites", (int64)ItemStatistic_NumFavorites },
		{ "ItemStatistic_NumFollowers", (int64)ItemStatistic_NumFollowers },
		{ "ItemStatistic_NumUniqueSubscriptions", (int64)ItemStatistic_NumUniqueSubscriptions },
		{ "ItemStatistic_NumUniqueFavorites", (int64)ItemStatistic_NumUniqueFavorites },
		{ "ItemStatistic_NumUniqueFollowers", (int64)ItemStatistic_NumUniqueFollowers },
		{ "ItemStatistic_NumUniqueWebsiteViews", (int64)ItemStatistic_NumUniqueWebsiteViews },
		{ "ItemStatistic_ReportScore", (int64)ItemStatistic_ReportScore },
		{ "ItemStatistic_NumSecondsPlayed", (int64)ItemStatistic_NumSecondsPlayed },
		{ "ItemStatistic_NumPlaytimeSessions", (int64)ItemStatistic_NumPlaytimeSessions },
		{ "ItemStatistic_NumComments", (int64)ItemStatistic_NumComments },
		{ "ItemStatistic_NumSecondsPlayedDuringTimePeriod", (int64)ItemStatistic_NumSecondsPlayedDuringTimePeriod },
		{ "ItemStatistic_NumPlaytimeSessionsDuringTimePeriod", (int64)ItemStatistic_NumPlaytimeSessionsDuringTimePeriod },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_ItemStatistic_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamIntegrationKit_ESIK_ItemStatistic_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	"ESIK_ItemStatistic",
	"ESIK_ItemStatistic",
	Z_Construct_UEnum_SteamIntegrationKit_ESIK_ItemStatistic_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_ItemStatistic_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_ItemStatistic_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamIntegrationKit_ESIK_ItemStatistic_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_ItemStatistic()
{
	if (!Z_Registration_Info_UEnum_ESIK_ItemStatistic.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESIK_ItemStatistic.InnerSingleton, Z_Construct_UEnum_SteamIntegrationKit_ESIK_ItemStatistic_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESIK_ItemStatistic.InnerSingleton;
}
// ********** End Enum ESIK_ItemStatistic **********************************************************

// ********** Begin Enum ESIK_ItemUpdateStatus *****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESIK_ItemUpdateStatus;
static UEnum* ESIK_ItemUpdateStatus_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESIK_ItemUpdateStatus.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESIK_ItemUpdateStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamIntegrationKit_ESIK_ItemUpdateStatus, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("ESIK_ItemUpdateStatus"));
	}
	return Z_Registration_Info_UEnum_ESIK_ItemUpdateStatus.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<ESIK_ItemUpdateStatus>()
{
	return ESIK_ItemUpdateStatus_StaticEnum();
}
struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_ItemUpdateStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ItemUpdateStatusCommittingChanges.DisplayName", "Committing Changes" },
		{ "ItemUpdateStatusCommittingChanges.Name", "ItemUpdateStatusCommittingChanges" },
		{ "ItemUpdateStatusInvalid.DisplayName", "Invalid" },
		{ "ItemUpdateStatusInvalid.Name", "ItemUpdateStatusInvalid" },
		{ "ItemUpdateStatusPreparingConfig.DisplayName", "Preparing Config" },
		{ "ItemUpdateStatusPreparingConfig.Name", "ItemUpdateStatusPreparingConfig" },
		{ "ItemUpdateStatusPreparingContent.DisplayName", "Preparing Content" },
		{ "ItemUpdateStatusPreparingContent.Name", "ItemUpdateStatusPreparingContent" },
		{ "ItemUpdateStatusUploadingContent.DisplayName", "Uploading Content" },
		{ "ItemUpdateStatusUploadingContent.Name", "ItemUpdateStatusUploadingContent" },
		{ "ItemUpdateStatusUploadingPreviewFile.DisplayName", "Uploading Preview File" },
		{ "ItemUpdateStatusUploadingPreviewFile.Name", "ItemUpdateStatusUploadingPreviewFile" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ItemUpdateStatusInvalid", (int64)ItemUpdateStatusInvalid },
		{ "ItemUpdateStatusPreparingConfig", (int64)ItemUpdateStatusPreparingConfig },
		{ "ItemUpdateStatusPreparingContent", (int64)ItemUpdateStatusPreparingContent },
		{ "ItemUpdateStatusUploadingContent", (int64)ItemUpdateStatusUploadingContent },
		{ "ItemUpdateStatusUploadingPreviewFile", (int64)ItemUpdateStatusUploadingPreviewFile },
		{ "ItemUpdateStatusCommittingChanges", (int64)ItemUpdateStatusCommittingChanges },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_ItemUpdateStatus_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamIntegrationKit_ESIK_ItemUpdateStatus_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	"ESIK_ItemUpdateStatus",
	"ESIK_ItemUpdateStatus",
	Z_Construct_UEnum_SteamIntegrationKit_ESIK_ItemUpdateStatus_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_ItemUpdateStatus_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_ItemUpdateStatus_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamIntegrationKit_ESIK_ItemUpdateStatus_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_ItemUpdateStatus()
{
	if (!Z_Registration_Info_UEnum_ESIK_ItemUpdateStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESIK_ItemUpdateStatus.InnerSingleton, Z_Construct_UEnum_SteamIntegrationKit_ESIK_ItemUpdateStatus_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESIK_ItemUpdateStatus.InnerSingleton;
}
// ********** End Enum ESIK_ItemUpdateStatus *******************************************************

// ********** Begin Enum ESIK_UGCMatchingUGCType ***************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESIK_UGCMatchingUGCType;
static UEnum* ESIK_UGCMatchingUGCType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESIK_UGCMatchingUGCType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESIK_UGCMatchingUGCType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamIntegrationKit_ESIK_UGCMatchingUGCType, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("ESIK_UGCMatchingUGCType"));
	}
	return Z_Registration_Info_UEnum_ESIK_UGCMatchingUGCType.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<ESIK_UGCMatchingUGCType>()
{
	return ESIK_UGCMatchingUGCType_StaticEnum();
}
struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_UGCMatchingUGCType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
		{ "UGCMatchingUGCType_All.DisplayName", "All" },
		{ "UGCMatchingUGCType_All.Name", "UGCMatchingUGCType_All" },
		{ "UGCMatchingUGCType_AllGuides.DisplayName", "All Guides" },
		{ "UGCMatchingUGCType_AllGuides.Name", "UGCMatchingUGCType_AllGuides" },
		{ "UGCMatchingUGCType_Artwork.DisplayName", "Artwork" },
		{ "UGCMatchingUGCType_Artwork.Name", "UGCMatchingUGCType_Artwork" },
		{ "UGCMatchingUGCType_Collections.DisplayName", "Collections" },
		{ "UGCMatchingUGCType_Collections.Name", "UGCMatchingUGCType_Collections" },
		{ "UGCMatchingUGCType_ControllerBindings.DisplayName", "Controller Bindings" },
		{ "UGCMatchingUGCType_ControllerBindings.Name", "UGCMatchingUGCType_ControllerBindings" },
		{ "UGCMatchingUGCType_GameManagedItems.DisplayName", "Game Managed Items" },
		{ "UGCMatchingUGCType_GameManagedItems.Name", "UGCMatchingUGCType_GameManagedItems" },
		{ "UGCMatchingUGCType_IntegratedGuides.DisplayName", "Integrated Guides" },
		{ "UGCMatchingUGCType_IntegratedGuides.Name", "UGCMatchingUGCType_IntegratedGuides" },
		{ "UGCMatchingUGCType_Items.DisplayName", "Items" },
		{ "UGCMatchingUGCType_Items.Name", "UGCMatchingUGCType_Items" },
		{ "UGCMatchingUGCType_Items_Mtx.DisplayName", "Items Mtx" },
		{ "UGCMatchingUGCType_Items_Mtx.Name", "UGCMatchingUGCType_Items_Mtx" },
		{ "UGCMatchingUGCType_Items_ReadyToUse.DisplayName", "Items Ready To Use" },
		{ "UGCMatchingUGCType_Items_ReadyToUse.Name", "UGCMatchingUGCType_Items_ReadyToUse" },
		{ "UGCMatchingUGCType_Screenshots.DisplayName", "Screenshots" },
		{ "UGCMatchingUGCType_Screenshots.Name", "UGCMatchingUGCType_Screenshots" },
		{ "UGCMatchingUGCType_UsableInGame.DisplayName", "Usable In Game" },
		{ "UGCMatchingUGCType_UsableInGame.Name", "UGCMatchingUGCType_UsableInGame" },
		{ "UGCMatchingUGCType_Videos.DisplayName", "Videos" },
		{ "UGCMatchingUGCType_Videos.Name", "UGCMatchingUGCType_Videos" },
		{ "UGCMatchingUGCType_WebGuides.DisplayName", "Web Guides" },
		{ "UGCMatchingUGCType_WebGuides.Name", "UGCMatchingUGCType_WebGuides" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "UGCMatchingUGCType_Items", (int64)UGCMatchingUGCType_Items },
		{ "UGCMatchingUGCType_Items_Mtx", (int64)UGCMatchingUGCType_Items_Mtx },
		{ "UGCMatchingUGCType_Items_ReadyToUse", (int64)UGCMatchingUGCType_Items_ReadyToUse },
		{ "UGCMatchingUGCType_Collections", (int64)UGCMatchingUGCType_Collections },
		{ "UGCMatchingUGCType_Artwork", (int64)UGCMatchingUGCType_Artwork },
		{ "UGCMatchingUGCType_Videos", (int64)UGCMatchingUGCType_Videos },
		{ "UGCMatchingUGCType_Screenshots", (int64)UGCMatchingUGCType_Screenshots },
		{ "UGCMatchingUGCType_AllGuides", (int64)UGCMatchingUGCType_AllGuides },
		{ "UGCMatchingUGCType_WebGuides", (int64)UGCMatchingUGCType_WebGuides },
		{ "UGCMatchingUGCType_IntegratedGuides", (int64)UGCMatchingUGCType_IntegratedGuides },
		{ "UGCMatchingUGCType_UsableInGame", (int64)UGCMatchingUGCType_UsableInGame },
		{ "UGCMatchingUGCType_ControllerBindings", (int64)UGCMatchingUGCType_ControllerBindings },
		{ "UGCMatchingUGCType_GameManagedItems", (int64)UGCMatchingUGCType_GameManagedItems },
		{ "UGCMatchingUGCType_All", (int64)UGCMatchingUGCType_All },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_UGCMatchingUGCType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamIntegrationKit_ESIK_UGCMatchingUGCType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	"ESIK_UGCMatchingUGCType",
	"ESIK_UGCMatchingUGCType",
	Z_Construct_UEnum_SteamIntegrationKit_ESIK_UGCMatchingUGCType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_UGCMatchingUGCType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_UGCMatchingUGCType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamIntegrationKit_ESIK_UGCMatchingUGCType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_UGCMatchingUGCType()
{
	if (!Z_Registration_Info_UEnum_ESIK_UGCMatchingUGCType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESIK_UGCMatchingUGCType.InnerSingleton, Z_Construct_UEnum_SteamIntegrationKit_ESIK_UGCMatchingUGCType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESIK_UGCMatchingUGCType.InnerSingleton;
}
// ********** End Enum ESIK_UGCMatchingUGCType *****************************************************

// ********** Begin Enum ESIK_UGCQuery *************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESIK_UGCQuery;
static UEnum* ESIK_UGCQuery_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESIK_UGCQuery.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESIK_UGCQuery.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamIntegrationKit_ESIK_UGCQuery, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("ESIK_UGCQuery"));
	}
	return Z_Registration_Info_UEnum_ESIK_UGCQuery.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<ESIK_UGCQuery>()
{
	return ESIK_UGCQuery_StaticEnum();
}
struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_UGCQuery_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
		{ "UGCQuery_AcceptedForGameRankedByAcceptanceDate.DisplayName", "Accepted For Game Ranked By Acceptance Date" },
		{ "UGCQuery_AcceptedForGameRankedByAcceptanceDate.Name", "UGCQuery_AcceptedForGameRankedByAcceptanceDate" },
		{ "UGCQuery_CreatedByFollowedUsersRankedByPublicationDate.DisplayName", "Created By Followed Users Ranked By Publication Date" },
		{ "UGCQuery_CreatedByFollowedUsersRankedByPublicationDate.Name", "UGCQuery_CreatedByFollowedUsersRankedByPublicationDate" },
		{ "UGCQuery_CreatedByFriendsRankedByPublicationDate.DisplayName", "Created By Friends Ranked By Publication Date" },
		{ "UGCQuery_CreatedByFriendsRankedByPublicationDate.Name", "UGCQuery_CreatedByFriendsRankedByPublicationDate" },
		{ "UGCQuery_FavoritedByFriendsRankedByPublicationDate.DisplayName", "Favorited By Friends Ranked By Publication Date" },
		{ "UGCQuery_FavoritedByFriendsRankedByPublicationDate.Name", "UGCQuery_FavoritedByFriendsRankedByPublicationDate" },
		{ "UGCQuery_NotYetRated.DisplayName", "Not Yet Rated" },
		{ "UGCQuery_NotYetRated.Name", "UGCQuery_NotYetRated" },
		{ "UGCQuery_RankedByAveragePlaytimeTrend.DisplayName", "Ranked By Average Playtime Trend" },
		{ "UGCQuery_RankedByAveragePlaytimeTrend.Name", "UGCQuery_RankedByAveragePlaytimeTrend" },
		{ "UGCQuery_RankedByLastUpdatedDate.DisplayName", "Ranked By Last Updated Date" },
		{ "UGCQuery_RankedByLastUpdatedDate.Name", "UGCQuery_RankedByLastUpdatedDate" },
		{ "UGCQuery_RankedByLifetimeAveragePlaytime.DisplayName", "Ranked By Lifetime Average Playtime" },
		{ "UGCQuery_RankedByLifetimeAveragePlaytime.Name", "UGCQuery_RankedByLifetimeAveragePlaytime" },
		{ "UGCQuery_RankedByLifetimePlaytimeSessions.DisplayName", "Ranked By Lifetime Playtime Sessions" },
		{ "UGCQuery_RankedByLifetimePlaytimeSessions.Name", "UGCQuery_RankedByLifetimePlaytimeSessions" },
		{ "UGCQuery_RankedByNumTimesReported.DisplayName", "Ranked By Num Times Reported" },
		{ "UGCQuery_RankedByNumTimesReported.Name", "UGCQuery_RankedByNumTimesReported" },
		{ "UGCQuery_RankedByPlaytimeSessionsTrend.DisplayName", "Ranked By Playtime Sessions Trend" },
		{ "UGCQuery_RankedByPlaytimeSessionsTrend.Name", "UGCQuery_RankedByPlaytimeSessionsTrend" },
		{ "UGCQuery_RankedByPlaytimeTrend.DisplayName", "Ranked By Playtime Trend" },
		{ "UGCQuery_RankedByPlaytimeTrend.Name", "UGCQuery_RankedByPlaytimeTrend" },
		{ "UGCQuery_RankedByPublicationDate.DisplayName", "Ranked By Publication Date" },
		{ "UGCQuery_RankedByPublicationDate.Name", "UGCQuery_RankedByPublicationDate" },
		{ "UGCQuery_RankedByTextSearch.DisplayName", "Ranked By Text Search" },
		{ "UGCQuery_RankedByTextSearch.Name", "UGCQuery_RankedByTextSearch" },
		{ "UGCQuery_RankedByTotalPlaytime.DisplayName", "Ranked By Total Playtime" },
		{ "UGCQuery_RankedByTotalPlaytime.Name", "UGCQuery_RankedByTotalPlaytime" },
		{ "UGCQuery_RankedByTotalUniqueSubscriptions.DisplayName", "Ranked By Total Unique Subscriptions" },
		{ "UGCQuery_RankedByTotalUniqueSubscriptions.Name", "UGCQuery_RankedByTotalUniqueSubscriptions" },
		{ "UGCQuery_RankedByTotalVotesAsc.DisplayName", "Ranked By Total Votes Asc" },
		{ "UGCQuery_RankedByTotalVotesAsc.Name", "UGCQuery_RankedByTotalVotesAsc" },
		{ "UGCQuery_RankedByTrend.DisplayName", "Ranked By Trend" },
		{ "UGCQuery_RankedByTrend.Name", "UGCQuery_RankedByTrend" },
		{ "UGCQuery_RankedByVote.DisplayName", "Ranked By Vote" },
		{ "UGCQuery_RankedByVote.Name", "UGCQuery_RankedByVote" },
		{ "UGCQuery_RankedByVotesUp.DisplayName", "Ranked By Votes Up" },
		{ "UGCQuery_RankedByVotesUp.Name", "UGCQuery_RankedByVotesUp" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "UGCQuery_RankedByVote", (int64)UGCQuery_RankedByVote },
		{ "UGCQuery_RankedByPublicationDate", (int64)UGCQuery_RankedByPublicationDate },
		{ "UGCQuery_AcceptedForGameRankedByAcceptanceDate", (int64)UGCQuery_AcceptedForGameRankedByAcceptanceDate },
		{ "UGCQuery_RankedByTrend", (int64)UGCQuery_RankedByTrend },
		{ "UGCQuery_FavoritedByFriendsRankedByPublicationDate", (int64)UGCQuery_FavoritedByFriendsRankedByPublicationDate },
		{ "UGCQuery_CreatedByFriendsRankedByPublicationDate", (int64)UGCQuery_CreatedByFriendsRankedByPublicationDate },
		{ "UGCQuery_RankedByNumTimesReported", (int64)UGCQuery_RankedByNumTimesReported },
		{ "UGCQuery_CreatedByFollowedUsersRankedByPublicationDate", (int64)UGCQuery_CreatedByFollowedUsersRankedByPublicationDate },
		{ "UGCQuery_NotYetRated", (int64)UGCQuery_NotYetRated },
		{ "UGCQuery_RankedByTotalVotesAsc", (int64)UGCQuery_RankedByTotalVotesAsc },
		{ "UGCQuery_RankedByVotesUp", (int64)UGCQuery_RankedByVotesUp },
		{ "UGCQuery_RankedByTextSearch", (int64)UGCQuery_RankedByTextSearch },
		{ "UGCQuery_RankedByTotalUniqueSubscriptions", (int64)UGCQuery_RankedByTotalUniqueSubscriptions },
		{ "UGCQuery_RankedByPlaytimeTrend", (int64)UGCQuery_RankedByPlaytimeTrend },
		{ "UGCQuery_RankedByTotalPlaytime", (int64)UGCQuery_RankedByTotalPlaytime },
		{ "UGCQuery_RankedByAveragePlaytimeTrend", (int64)UGCQuery_RankedByAveragePlaytimeTrend },
		{ "UGCQuery_RankedByLifetimeAveragePlaytime", (int64)UGCQuery_RankedByLifetimeAveragePlaytime },
		{ "UGCQuery_RankedByPlaytimeSessionsTrend", (int64)UGCQuery_RankedByPlaytimeSessionsTrend },
		{ "UGCQuery_RankedByLifetimePlaytimeSessions", (int64)UGCQuery_RankedByLifetimePlaytimeSessions },
		{ "UGCQuery_RankedByLastUpdatedDate", (int64)UGCQuery_RankedByLastUpdatedDate },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_UGCQuery_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamIntegrationKit_ESIK_UGCQuery_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	"ESIK_UGCQuery",
	"ESIK_UGCQuery",
	Z_Construct_UEnum_SteamIntegrationKit_ESIK_UGCQuery_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_UGCQuery_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_UGCQuery_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamIntegrationKit_ESIK_UGCQuery_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_UGCQuery()
{
	if (!Z_Registration_Info_UEnum_ESIK_UGCQuery.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESIK_UGCQuery.InnerSingleton, Z_Construct_UEnum_SteamIntegrationKit_ESIK_UGCQuery_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESIK_UGCQuery.InnerSingleton;
}
// ********** End Enum ESIK_UGCQuery ***************************************************************

// ********** Begin Enum ESIK_UserUGCList **********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESIK_UserUGCList;
static UEnum* ESIK_UserUGCList_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESIK_UserUGCList.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESIK_UserUGCList.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamIntegrationKit_ESIK_UserUGCList, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("ESIK_UserUGCList"));
	}
	return Z_Registration_Info_UEnum_ESIK_UserUGCList.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<ESIK_UserUGCList>()
{
	return ESIK_UserUGCList_StaticEnum();
}
struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_UserUGCList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
		{ "UserUGCList_Favorited.DisplayName", "Favorited" },
		{ "UserUGCList_Favorited.Name", "UserUGCList_Favorited" },
		{ "UserUGCList_Followed.DisplayName", "Followed" },
		{ "UserUGCList_Followed.Name", "UserUGCList_Followed" },
		{ "UserUGCList_Published.DisplayName", "Published" },
		{ "UserUGCList_Published.Name", "UserUGCList_Published" },
		{ "UserUGCList_Subscribed.DisplayName", "Subscribed" },
		{ "UserUGCList_Subscribed.Name", "UserUGCList_Subscribed" },
		{ "UserUGCList_UsedOrPlayed.DisplayName", "Used Or Played" },
		{ "UserUGCList_UsedOrPlayed.Name", "UserUGCList_UsedOrPlayed" },
		{ "UserUGCList_VotedDown.DisplayName", "Voted Down" },
		{ "UserUGCList_VotedDown.Name", "UserUGCList_VotedDown" },
		{ "UserUGCList_VotedOn.DisplayName", "Voted On" },
		{ "UserUGCList_VotedOn.Name", "UserUGCList_VotedOn" },
		{ "UserUGCList_VotedUp.DisplayName", "Voted Up" },
		{ "UserUGCList_VotedUp.Name", "UserUGCList_VotedUp" },
		{ "UserUGCList_WillVoteLater.DisplayName", "Will Vote Later" },
		{ "UserUGCList_WillVoteLater.Name", "UserUGCList_WillVoteLater" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "UserUGCList_Published", (int64)UserUGCList_Published },
		{ "UserUGCList_VotedOn", (int64)UserUGCList_VotedOn },
		{ "UserUGCList_VotedUp", (int64)UserUGCList_VotedUp },
		{ "UserUGCList_VotedDown", (int64)UserUGCList_VotedDown },
		{ "UserUGCList_WillVoteLater", (int64)UserUGCList_WillVoteLater },
		{ "UserUGCList_Favorited", (int64)UserUGCList_Favorited },
		{ "UserUGCList_Subscribed", (int64)UserUGCList_Subscribed },
		{ "UserUGCList_UsedOrPlayed", (int64)UserUGCList_UsedOrPlayed },
		{ "UserUGCList_Followed", (int64)UserUGCList_Followed },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_UserUGCList_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamIntegrationKit_ESIK_UserUGCList_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	"ESIK_UserUGCList",
	"ESIK_UserUGCList",
	Z_Construct_UEnum_SteamIntegrationKit_ESIK_UserUGCList_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_UserUGCList_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_UserUGCList_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamIntegrationKit_ESIK_UserUGCList_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_UserUGCList()
{
	if (!Z_Registration_Info_UEnum_ESIK_UserUGCList.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESIK_UserUGCList.InnerSingleton, Z_Construct_UEnum_SteamIntegrationKit_ESIK_UserUGCList_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESIK_UserUGCList.InnerSingleton;
}
// ********** End Enum ESIK_UserUGCList ************************************************************

// ********** Begin Enum ESIK_UserUGCListSortOrder *************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESIK_UserUGCListSortOrder;
static UEnum* ESIK_UserUGCListSortOrder_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESIK_UserUGCListSortOrder.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESIK_UserUGCListSortOrder.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamIntegrationKit_ESIK_UserUGCListSortOrder, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("ESIK_UserUGCListSortOrder"));
	}
	return Z_Registration_Info_UEnum_ESIK_UserUGCListSortOrder.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<ESIK_UserUGCListSortOrder>()
{
	return ESIK_UserUGCListSortOrder_StaticEnum();
}
struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_UserUGCListSortOrder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
		{ "UserUGCListSortOrder_CreationOrderAsc.DisplayName", "Creation Order Asc" },
		{ "UserUGCListSortOrder_CreationOrderAsc.Name", "UserUGCListSortOrder_CreationOrderAsc" },
		{ "UserUGCListSortOrder_CreationOrderDesc.DisplayName", "Creation Order Desc" },
		{ "UserUGCListSortOrder_CreationOrderDesc.Name", "UserUGCListSortOrder_CreationOrderDesc" },
		{ "UserUGCListSortOrder_ForModeration.DisplayName", "For Moderation" },
		{ "UserUGCListSortOrder_ForModeration.Name", "UserUGCListSortOrder_ForModeration" },
		{ "UserUGCListSortOrder_LastUpdatedDesc.DisplayName", "Last Updated Desc" },
		{ "UserUGCListSortOrder_LastUpdatedDesc.Name", "UserUGCListSortOrder_LastUpdatedDesc" },
		{ "UserUGCListSortOrder_SubscriptionDateDesc.DisplayName", "Subscription Date Desc" },
		{ "UserUGCListSortOrder_SubscriptionDateDesc.Name", "UserUGCListSortOrder_SubscriptionDateDesc" },
		{ "UserUGCListSortOrder_TitleAsc.DisplayName", "Title Asc" },
		{ "UserUGCListSortOrder_TitleAsc.Name", "UserUGCListSortOrder_TitleAsc" },
		{ "UserUGCListSortOrder_VoteScoreDesc.DisplayName", "Vote Score Desc" },
		{ "UserUGCListSortOrder_VoteScoreDesc.Name", "UserUGCListSortOrder_VoteScoreDesc" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "UserUGCListSortOrder_CreationOrderDesc", (int64)UserUGCListSortOrder_CreationOrderDesc },
		{ "UserUGCListSortOrder_CreationOrderAsc", (int64)UserUGCListSortOrder_CreationOrderAsc },
		{ "UserUGCListSortOrder_TitleAsc", (int64)UserUGCListSortOrder_TitleAsc },
		{ "UserUGCListSortOrder_LastUpdatedDesc", (int64)UserUGCListSortOrder_LastUpdatedDesc },
		{ "UserUGCListSortOrder_SubscriptionDateDesc", (int64)UserUGCListSortOrder_SubscriptionDateDesc },
		{ "UserUGCListSortOrder_VoteScoreDesc", (int64)UserUGCListSortOrder_VoteScoreDesc },
		{ "UserUGCListSortOrder_ForModeration", (int64)UserUGCListSortOrder_ForModeration },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_UserUGCListSortOrder_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamIntegrationKit_ESIK_UserUGCListSortOrder_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	"ESIK_UserUGCListSortOrder",
	"ESIK_UserUGCListSortOrder",
	Z_Construct_UEnum_SteamIntegrationKit_ESIK_UserUGCListSortOrder_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_UserUGCListSortOrder_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_UserUGCListSortOrder_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamIntegrationKit_ESIK_UserUGCListSortOrder_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_UserUGCListSortOrder()
{
	if (!Z_Registration_Info_UEnum_ESIK_UserUGCListSortOrder.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESIK_UserUGCListSortOrder.InnerSingleton, Z_Construct_UEnum_SteamIntegrationKit_ESIK_UserUGCListSortOrder_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESIK_UserUGCListSortOrder.InnerSingleton;
}
// ********** End Enum ESIK_UserUGCListSortOrder ***************************************************

// ********** Begin Enum ESIK_UGCContentDescriptorID ***********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESIK_UGCContentDescriptorID;
static UEnum* ESIK_UGCContentDescriptorID_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESIK_UGCContentDescriptorID.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESIK_UGCContentDescriptorID.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamIntegrationKit_ESIK_UGCContentDescriptorID, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("ESIK_UGCContentDescriptorID"));
	}
	return Z_Registration_Info_UEnum_ESIK_UGCContentDescriptorID.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<ESIK_UGCContentDescriptorID>()
{
	return ESIK_UGCContentDescriptorID_StaticEnum();
}
struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_UGCContentDescriptorID_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
		{ "UGCContentDescriptor_AdultOnlySexualContent.DisplayName", "Adult Only Sexual Content" },
		{ "UGCContentDescriptor_AdultOnlySexualContent.Name", "UGCContentDescriptor_AdultOnlySexualContent" },
		{ "UGCContentDescriptor_AnyMatureContent.DisplayName", "Any Mature Content" },
		{ "UGCContentDescriptor_AnyMatureContent.Name", "UGCContentDescriptor_AnyMatureContent" },
		{ "UGCContentDescriptor_FrequentViolenceOrGore.DisplayName", "Frequent Violence Or Gore" },
		{ "UGCContentDescriptor_FrequentViolenceOrGore.Name", "UGCContentDescriptor_FrequentViolenceOrGore" },
		{ "UGCContentDescriptor_GratuitousSexualContent.DisplayName", "Gratuitous Sexual Content" },
		{ "UGCContentDescriptor_GratuitousSexualContent.Name", "UGCContentDescriptor_GratuitousSexualContent" },
		{ "UGCContentDescriptor_NudityOrSexualContent.DisplayName", "Nudity Or Sexual Content" },
		{ "UGCContentDescriptor_NudityOrSexualContent.Name", "UGCContentDescriptor_NudityOrSexualContent" },
		{ "UserUGCListSortOrder_None.DisplayName", "None" },
		{ "UserUGCListSortOrder_None.Name", "UserUGCListSortOrder_None" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "UserUGCListSortOrder_None", (int64)UserUGCListSortOrder_None },
		{ "UGCContentDescriptor_NudityOrSexualContent", (int64)UGCContentDescriptor_NudityOrSexualContent },
		{ "UGCContentDescriptor_FrequentViolenceOrGore", (int64)UGCContentDescriptor_FrequentViolenceOrGore },
		{ "UGCContentDescriptor_AdultOnlySexualContent", (int64)UGCContentDescriptor_AdultOnlySexualContent },
		{ "UGCContentDescriptor_GratuitousSexualContent", (int64)UGCContentDescriptor_GratuitousSexualContent },
		{ "UGCContentDescriptor_AnyMatureContent", (int64)UGCContentDescriptor_AnyMatureContent },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_UGCContentDescriptorID_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamIntegrationKit_ESIK_UGCContentDescriptorID_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	"ESIK_UGCContentDescriptorID",
	"ESIK_UGCContentDescriptorID",
	Z_Construct_UEnum_SteamIntegrationKit_ESIK_UGCContentDescriptorID_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_UGCContentDescriptorID_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_UGCContentDescriptorID_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamIntegrationKit_ESIK_UGCContentDescriptorID_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_UGCContentDescriptorID()
{
	if (!Z_Registration_Info_UEnum_ESIK_UGCContentDescriptorID.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESIK_UGCContentDescriptorID.InnerSingleton, Z_Construct_UEnum_SteamIntegrationKit_ESIK_UGCContentDescriptorID_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESIK_UGCContentDescriptorID.InnerSingleton;
}
// ********** End Enum ESIK_UGCContentDescriptorID *************************************************

// ********** Begin ScriptStruct FSIK_UGCQueryHandle ***********************************************
struct Z_Construct_UScriptStruct_FSIK_UGCQueryHandle_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSIK_UGCQueryHandle); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSIK_UGCQueryHandle); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSIK_UGCQueryHandle constinit property declarations ***************
	static const UECodeGen_Private::FInt64PropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSIK_UGCQueryHandle constinit property declarations *****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSIK_UGCQueryHandle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSIK_UGCQueryHandle_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSIK_UGCQueryHandle;
class UScriptStruct* FSIK_UGCQueryHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_UGCQueryHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSIK_UGCQueryHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSIK_UGCQueryHandle, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("SIK_UGCQueryHandle"));
	}
	return Z_Registration_Info_UScriptStruct_FSIK_UGCQueryHandle.OuterSingleton;
	}

// ********** Begin ScriptStruct FSIK_UGCQueryHandle Property Definitions **************************
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FSIK_UGCQueryHandle_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_UGCQueryHandle, Result), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSIK_UGCQueryHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_UGCQueryHandle_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_UGCQueryHandle_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSIK_UGCQueryHandle Property Definitions ****************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSIK_UGCQueryHandle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	&NewStructOps,
	"SIK_UGCQueryHandle",
	Z_Construct_UScriptStruct_FSIK_UGCQueryHandle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_UGCQueryHandle_Statics::PropPointers),
	sizeof(FSIK_UGCQueryHandle),
	alignof(FSIK_UGCQueryHandle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_UGCQueryHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSIK_UGCQueryHandle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSIK_UGCQueryHandle()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_UGCQueryHandle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSIK_UGCQueryHandle.InnerSingleton, Z_Construct_UScriptStruct_FSIK_UGCQueryHandle_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSIK_UGCQueryHandle.InnerSingleton);
}
// ********** End ScriptStruct FSIK_UGCQueryHandle *************************************************

// ********** Begin ScriptStruct FSIK_UGCUpdateHandle **********************************************
struct Z_Construct_UScriptStruct_FSIK_UGCUpdateHandle_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSIK_UGCUpdateHandle); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSIK_UGCUpdateHandle); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSIK_UGCUpdateHandle constinit property declarations **************
	static const UECodeGen_Private::FInt64PropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSIK_UGCUpdateHandle constinit property declarations ****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSIK_UGCUpdateHandle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSIK_UGCUpdateHandle_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSIK_UGCUpdateHandle;
class UScriptStruct* FSIK_UGCUpdateHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_UGCUpdateHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSIK_UGCUpdateHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSIK_UGCUpdateHandle, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("SIK_UGCUpdateHandle"));
	}
	return Z_Registration_Info_UScriptStruct_FSIK_UGCUpdateHandle.OuterSingleton;
	}

// ********** Begin ScriptStruct FSIK_UGCUpdateHandle Property Definitions *************************
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FSIK_UGCUpdateHandle_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_UGCUpdateHandle, Result), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSIK_UGCUpdateHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_UGCUpdateHandle_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_UGCUpdateHandle_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSIK_UGCUpdateHandle Property Definitions ***************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSIK_UGCUpdateHandle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	&NewStructOps,
	"SIK_UGCUpdateHandle",
	Z_Construct_UScriptStruct_FSIK_UGCUpdateHandle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_UGCUpdateHandle_Statics::PropPointers),
	sizeof(FSIK_UGCUpdateHandle),
	alignof(FSIK_UGCUpdateHandle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_UGCUpdateHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSIK_UGCUpdateHandle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSIK_UGCUpdateHandle()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_UGCUpdateHandle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSIK_UGCUpdateHandle.InnerSingleton, Z_Construct_UScriptStruct_FSIK_UGCUpdateHandle_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSIK_UGCUpdateHandle.InnerSingleton);
}
// ********** End ScriptStruct FSIK_UGCUpdateHandle ************************************************

// ********** Begin ScriptStruct FSIK_SteamUGCDetails **********************************************
struct Z_Construct_UScriptStruct_FSIK_SteamUGCDetails_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSIK_SteamUGCDetails); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSIK_SteamUGCDetails); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PublishedFileId_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FileType_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CreatorAppID_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConsumerAppID_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeCreate_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeUpdated_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeAddedToUserList_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Visibility_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBanned_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAcceptedForUse_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTagsTruncated_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_File_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewFile_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FileSize_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewFileSize_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VotesUp_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VotesDown_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Score_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumChildren_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSIK_SteamUGCDetails constinit property declarations **************
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FileType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CreatorAppID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConsumerAppID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Title;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TimeCreate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TimeUpdated;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TimeAddedToUserList;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Visibility;
	static void NewProp_bBanned_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBanned;
	static void NewProp_bAcceptedForUse_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAcceptedForUse;
	static void NewProp_bTagsTruncated_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTagsTruncated;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Tags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_File;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PreviewFile;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FileSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PreviewFileSize;
	static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
	static const UECodeGen_Private::FIntPropertyParams NewProp_VotesUp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_VotesDown;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Score;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumChildren;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSIK_SteamUGCDetails constinit property declarations ****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSIK_SteamUGCDetails>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSIK_SteamUGCDetails_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSIK_SteamUGCDetails;
class UScriptStruct* FSIK_SteamUGCDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_SteamUGCDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSIK_SteamUGCDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSIK_SteamUGCDetails, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("SIK_SteamUGCDetails"));
	}
	return Z_Registration_Info_UScriptStruct_FSIK_SteamUGCDetails.OuterSingleton;
	}

// ********** Begin ScriptStruct FSIK_SteamUGCDetails Property Definitions *************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSIK_SteamUGCDetails_Statics::NewProp_PublishedFileId = { "PublishedFileId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_SteamUGCDetails, PublishedFileId), Z_Construct_UScriptStruct_FSIK_PublishedFileId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PublishedFileId_MetaData), NewProp_PublishedFileId_MetaData) }; // 3479136102
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSIK_SteamUGCDetails_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_SteamUGCDetails, Result), Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 655382749
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSIK_SteamUGCDetails_Statics::NewProp_FileType = { "FileType", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_SteamUGCDetails, FileType), Z_Construct_UEnum_SteamIntegrationKit_ESIK_WorkshopFileType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileType_MetaData), NewProp_FileType_MetaData) }; // 1356562597
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSIK_SteamUGCDetails_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_SteamUGCDetails, Owner), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Owner_MetaData), NewProp_Owner_MetaData) }; // 3413883574
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSIK_SteamUGCDetails_Statics::NewProp_CreatorAppID = { "CreatorAppID", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_SteamUGCDetails, CreatorAppID), Z_Construct_UScriptStruct_FSIK_AppId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CreatorAppID_MetaData), NewProp_CreatorAppID_MetaData) }; // 3325316996
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSIK_SteamUGCDetails_Statics::NewProp_ConsumerAppID = { "ConsumerAppID", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_SteamUGCDetails, ConsumerAppID), Z_Construct_UScriptStruct_FSIK_AppId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConsumerAppID_MetaData), NewProp_ConsumerAppID_MetaData) }; // 3325316996
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSIK_SteamUGCDetails_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_SteamUGCDetails, Title), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Title_MetaData), NewProp_Title_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSIK_SteamUGCDetails_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_SteamUGCDetails, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSIK_SteamUGCDetails_Statics::NewProp_TimeCreate = { "TimeCreate", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_SteamUGCDetails, TimeCreate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeCreate_MetaData), NewProp_TimeCreate_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSIK_SteamUGCDetails_Statics::NewProp_TimeUpdated = { "TimeUpdated", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_SteamUGCDetails, TimeUpdated), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeUpdated_MetaData), NewProp_TimeUpdated_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSIK_SteamUGCDetails_Statics::NewProp_TimeAddedToUserList = { "TimeAddedToUserList", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_SteamUGCDetails, TimeAddedToUserList), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeAddedToUserList_MetaData), NewProp_TimeAddedToUserList_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSIK_SteamUGCDetails_Statics::NewProp_Visibility = { "Visibility", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_SteamUGCDetails, Visibility), Z_Construct_UEnum_SteamIntegrationKit_ESIK_RemoteStoragePublishedFileVisibility, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Visibility_MetaData), NewProp_Visibility_MetaData) }; // 184679934
void Z_Construct_UScriptStruct_FSIK_SteamUGCDetails_Statics::NewProp_bBanned_SetBit(void* Obj)
{
	((FSIK_SteamUGCDetails*)Obj)->bBanned = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSIK_SteamUGCDetails_Statics::NewProp_bBanned = { "bBanned", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSIK_SteamUGCDetails), &Z_Construct_UScriptStruct_FSIK_SteamUGCDetails_Statics::NewProp_bBanned_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBanned_MetaData), NewProp_bBanned_MetaData) };
void Z_Construct_UScriptStruct_FSIK_SteamUGCDetails_Statics::NewProp_bAcceptedForUse_SetBit(void* Obj)
{
	((FSIK_SteamUGCDetails*)Obj)->bAcceptedForUse = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSIK_SteamUGCDetails_Statics::NewProp_bAcceptedForUse = { "bAcceptedForUse", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSIK_SteamUGCDetails), &Z_Construct_UScriptStruct_FSIK_SteamUGCDetails_Statics::NewProp_bAcceptedForUse_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAcceptedForUse_MetaData), NewProp_bAcceptedForUse_MetaData) };
void Z_Construct_UScriptStruct_FSIK_SteamUGCDetails_Statics::NewProp_bTagsTruncated_SetBit(void* Obj)
{
	((FSIK_SteamUGCDetails*)Obj)->bTagsTruncated = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSIK_SteamUGCDetails_Statics::NewProp_bTagsTruncated = { "bTagsTruncated", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSIK_SteamUGCDetails), &Z_Construct_UScriptStruct_FSIK_SteamUGCDetails_Statics::NewProp_bTagsTruncated_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTagsTruncated_MetaData), NewProp_bTagsTruncated_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSIK_SteamUGCDetails_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_SteamUGCDetails, Tags), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tags_MetaData), NewProp_Tags_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSIK_SteamUGCDetails_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_SteamUGCDetails, File), Z_Construct_UScriptStruct_FSIK_UGCHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_File_MetaData), NewProp_File_MetaData) }; // 3467694534
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSIK_SteamUGCDetails_Statics::NewProp_PreviewFile = { "PreviewFile", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_SteamUGCDetails, PreviewFile), Z_Construct_UScriptStruct_FSIK_UGCHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewFile_MetaData), NewProp_PreviewFile_MetaData) }; // 3467694534
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSIK_SteamUGCDetails_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_SteamUGCDetails, FileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileName_MetaData), NewProp_FileName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSIK_SteamUGCDetails_Statics::NewProp_FileSize = { "FileSize", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_SteamUGCDetails, FileSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileSize_MetaData), NewProp_FileSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSIK_SteamUGCDetails_Statics::NewProp_PreviewFileSize = { "PreviewFileSize", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_SteamUGCDetails, PreviewFileSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewFileSize_MetaData), NewProp_PreviewFileSize_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSIK_SteamUGCDetails_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_SteamUGCDetails, URL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_URL_MetaData), NewProp_URL_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSIK_SteamUGCDetails_Statics::NewProp_VotesUp = { "VotesUp", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_SteamUGCDetails, VotesUp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VotesUp_MetaData), NewProp_VotesUp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSIK_SteamUGCDetails_Statics::NewProp_VotesDown = { "VotesDown", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_SteamUGCDetails, VotesDown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VotesDown_MetaData), NewProp_VotesDown_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSIK_SteamUGCDetails_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_SteamUGCDetails, Score), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Score_MetaData), NewProp_Score_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSIK_SteamUGCDetails_Statics::NewProp_NumChildren = { "NumChildren", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_SteamUGCDetails, NumChildren), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumChildren_MetaData), NewProp_NumChildren_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSIK_SteamUGCDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_SteamUGCDetails_Statics::NewProp_PublishedFileId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_SteamUGCDetails_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_SteamUGCDetails_Statics::NewProp_FileType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_SteamUGCDetails_Statics::NewProp_Owner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_SteamUGCDetails_Statics::NewProp_CreatorAppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_SteamUGCDetails_Statics::NewProp_ConsumerAppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_SteamUGCDetails_Statics::NewProp_Title,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_SteamUGCDetails_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_SteamUGCDetails_Statics::NewProp_TimeCreate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_SteamUGCDetails_Statics::NewProp_TimeUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_SteamUGCDetails_Statics::NewProp_TimeAddedToUserList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_SteamUGCDetails_Statics::NewProp_Visibility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_SteamUGCDetails_Statics::NewProp_bBanned,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_SteamUGCDetails_Statics::NewProp_bAcceptedForUse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_SteamUGCDetails_Statics::NewProp_bTagsTruncated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_SteamUGCDetails_Statics::NewProp_Tags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_SteamUGCDetails_Statics::NewProp_File,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_SteamUGCDetails_Statics::NewProp_PreviewFile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_SteamUGCDetails_Statics::NewProp_FileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_SteamUGCDetails_Statics::NewProp_FileSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_SteamUGCDetails_Statics::NewProp_PreviewFileSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_SteamUGCDetails_Statics::NewProp_URL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_SteamUGCDetails_Statics::NewProp_VotesUp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_SteamUGCDetails_Statics::NewProp_VotesDown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_SteamUGCDetails_Statics::NewProp_Score,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_SteamUGCDetails_Statics::NewProp_NumChildren,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_SteamUGCDetails_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSIK_SteamUGCDetails Property Definitions ***************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSIK_SteamUGCDetails_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	&NewStructOps,
	"SIK_SteamUGCDetails",
	Z_Construct_UScriptStruct_FSIK_SteamUGCDetails_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_SteamUGCDetails_Statics::PropPointers),
	sizeof(FSIK_SteamUGCDetails),
	alignof(FSIK_SteamUGCDetails),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_SteamUGCDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSIK_SteamUGCDetails_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSIK_SteamUGCDetails()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_SteamUGCDetails.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSIK_SteamUGCDetails.InnerSingleton, Z_Construct_UScriptStruct_FSIK_SteamUGCDetails_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSIK_SteamUGCDetails.InnerSingleton);
}
// ********** End ScriptStruct FSIK_SteamUGCDetails ************************************************

// ********** Begin ScriptStruct FSIK_SteamLeaderboardEntries **************************************
struct Z_Construct_UScriptStruct_FSIK_SteamLeaderboardEntries_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSIK_SteamLeaderboardEntries); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSIK_SteamLeaderboardEntries); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSIK_SteamLeaderboardEntries constinit property declarations ******
	static const UECodeGen_Private::FInt64PropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSIK_SteamLeaderboardEntries constinit property declarations ********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSIK_SteamLeaderboardEntries>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSIK_SteamLeaderboardEntries_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSIK_SteamLeaderboardEntries;
class UScriptStruct* FSIK_SteamLeaderboardEntries::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_SteamLeaderboardEntries.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSIK_SteamLeaderboardEntries.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSIK_SteamLeaderboardEntries, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("SIK_SteamLeaderboardEntries"));
	}
	return Z_Registration_Info_UScriptStruct_FSIK_SteamLeaderboardEntries.OuterSingleton;
	}

// ********** Begin ScriptStruct FSIK_SteamLeaderboardEntries Property Definitions *****************
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FSIK_SteamLeaderboardEntries_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_SteamLeaderboardEntries, Result), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSIK_SteamLeaderboardEntries_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_SteamLeaderboardEntries_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_SteamLeaderboardEntries_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSIK_SteamLeaderboardEntries Property Definitions *******************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSIK_SteamLeaderboardEntries_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	&NewStructOps,
	"SIK_SteamLeaderboardEntries",
	Z_Construct_UScriptStruct_FSIK_SteamLeaderboardEntries_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_SteamLeaderboardEntries_Statics::PropPointers),
	sizeof(FSIK_SteamLeaderboardEntries),
	alignof(FSIK_SteamLeaderboardEntries),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_SteamLeaderboardEntries_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSIK_SteamLeaderboardEntries_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSIK_SteamLeaderboardEntries()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_SteamLeaderboardEntries.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSIK_SteamLeaderboardEntries.InnerSingleton, Z_Construct_UScriptStruct_FSIK_SteamLeaderboardEntries_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSIK_SteamLeaderboardEntries.InnerSingleton);
}
// ********** End ScriptStruct FSIK_SteamLeaderboardEntries ****************************************

// ********** Begin ScriptStruct FSIK_SteamLeaderboard *********************************************
struct Z_Construct_UScriptStruct_FSIK_SteamLeaderboard_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSIK_SteamLeaderboard); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSIK_SteamLeaderboard); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSIK_SteamLeaderboard constinit property declarations *************
	static const UECodeGen_Private::FInt64PropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSIK_SteamLeaderboard constinit property declarations ***************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSIK_SteamLeaderboard>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSIK_SteamLeaderboard_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSIK_SteamLeaderboard;
class UScriptStruct* FSIK_SteamLeaderboard::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_SteamLeaderboard.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSIK_SteamLeaderboard.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSIK_SteamLeaderboard, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("SIK_SteamLeaderboard"));
	}
	return Z_Registration_Info_UScriptStruct_FSIK_SteamLeaderboard.OuterSingleton;
	}

// ********** Begin ScriptStruct FSIK_SteamLeaderboard Property Definitions ************************
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FSIK_SteamLeaderboard_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_SteamLeaderboard, Result), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSIK_SteamLeaderboard_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_SteamLeaderboard_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_SteamLeaderboard_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSIK_SteamLeaderboard Property Definitions **************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSIK_SteamLeaderboard_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	&NewStructOps,
	"SIK_SteamLeaderboard",
	Z_Construct_UScriptStruct_FSIK_SteamLeaderboard_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_SteamLeaderboard_Statics::PropPointers),
	sizeof(FSIK_SteamLeaderboard),
	alignof(FSIK_SteamLeaderboard),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_SteamLeaderboard_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSIK_SteamLeaderboard_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSIK_SteamLeaderboard()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_SteamLeaderboard.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSIK_SteamLeaderboard.InnerSingleton, Z_Construct_UScriptStruct_FSIK_SteamLeaderboard_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSIK_SteamLeaderboard.InnerSingleton);
}
// ********** End ScriptStruct FSIK_SteamLeaderboard ***********************************************

// ********** Begin Enum ESIK_Universe *************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESIK_Universe;
static UEnum* ESIK_Universe_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESIK_Universe.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESIK_Universe.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamIntegrationKit_ESIK_Universe, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("ESIK_Universe"));
	}
	return Z_Registration_Info_UEnum_ESIK_Universe.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<ESIK_Universe>()
{
	return ESIK_Universe_StaticEnum();
}
struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_Universe_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
		{ "UniverseBeta.DisplayName", "Beta" },
		{ "UniverseBeta.Name", "UniverseBeta" },
		{ "UniverseDev.DisplayName", "Dev" },
		{ "UniverseDev.Name", "UniverseDev" },
		{ "UniverseInternal.DisplayName", "Internal" },
		{ "UniverseInternal.Name", "UniverseInternal" },
		{ "UniverseInvalid.DisplayName", "Invalid" },
		{ "UniverseInvalid.Name", "UniverseInvalid" },
		{ "UniverseMax.DisplayName", "Max" },
		{ "UniverseMax.Name", "UniverseMax" },
		{ "UniversePublic.DisplayName", "Public" },
		{ "UniversePublic.Name", "UniversePublic" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "UniverseInvalid", (int64)UniverseInvalid },
		{ "UniversePublic", (int64)UniversePublic },
		{ "UniverseBeta", (int64)UniverseBeta },
		{ "UniverseInternal", (int64)UniverseInternal },
		{ "UniverseDev", (int64)UniverseDev },
		{ "UniverseMax", (int64)UniverseMax },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_Universe_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamIntegrationKit_ESIK_Universe_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	"ESIK_Universe",
	"ESIK_Universe",
	Z_Construct_UEnum_SteamIntegrationKit_ESIK_Universe_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_Universe_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_Universe_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamIntegrationKit_ESIK_Universe_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_Universe()
{
	if (!Z_Registration_Info_UEnum_ESIK_Universe.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESIK_Universe.InnerSingleton, Z_Construct_UEnum_SteamIntegrationKit_ESIK_Universe_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESIK_Universe.InnerSingleton;
}
// ********** End Enum ESIK_Universe ***************************************************************

// ********** Begin ScriptStruct FSIK_PartyBeaconID ************************************************
struct Z_Construct_UScriptStruct_FSIK_PartyBeaconID_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSIK_PartyBeaconID); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSIK_PartyBeaconID); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSIK_PartyBeaconID constinit property declarations ****************
// ********** End ScriptStruct FSIK_PartyBeaconID constinit property declarations ******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSIK_PartyBeaconID>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSIK_PartyBeaconID_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSIK_PartyBeaconID;
class UScriptStruct* FSIK_PartyBeaconID::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_PartyBeaconID.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSIK_PartyBeaconID.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSIK_PartyBeaconID, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("SIK_PartyBeaconID"));
	}
	return Z_Registration_Info_UScriptStruct_FSIK_PartyBeaconID.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSIK_PartyBeaconID_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	&NewStructOps,
	"SIK_PartyBeaconID",
	nullptr,
	0,
	sizeof(FSIK_PartyBeaconID),
	alignof(FSIK_PartyBeaconID),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_PartyBeaconID_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSIK_PartyBeaconID_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSIK_PartyBeaconID()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_PartyBeaconID.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSIK_PartyBeaconID.InnerSingleton, Z_Construct_UScriptStruct_FSIK_PartyBeaconID_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSIK_PartyBeaconID.InnerSingleton);
}
// ********** End ScriptStruct FSIK_PartyBeaconID **************************************************

// ********** Begin ScriptStruct FSIK_GameID *******************************************************
struct Z_Construct_UScriptStruct_FSIK_GameID_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSIK_GameID); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSIK_GameID); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSIK_GameID constinit property declarations ***********************
// ********** End ScriptStruct FSIK_GameID constinit property declarations *************************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSIK_GameID>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSIK_GameID_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSIK_GameID;
class UScriptStruct* FSIK_GameID::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_GameID.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSIK_GameID.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSIK_GameID, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("SIK_GameID"));
	}
	return Z_Registration_Info_UScriptStruct_FSIK_GameID.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSIK_GameID_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	&NewStructOps,
	"SIK_GameID",
	nullptr,
	0,
	sizeof(FSIK_GameID),
	alignof(FSIK_GameID),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_GameID_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSIK_GameID_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSIK_GameID()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_GameID.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSIK_GameID.InnerSingleton, Z_Construct_UScriptStruct_FSIK_GameID_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSIK_GameID.InnerSingleton);
}
// ********** End ScriptStruct FSIK_GameID *********************************************************

// ********** Begin Enum ESIK_FriendFlags **********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESIK_FriendFlags;
static UEnum* ESIK_FriendFlags_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESIK_FriendFlags.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESIK_FriendFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamIntegrationKit_ESIK_FriendFlags, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("ESIK_FriendFlags"));
	}
	return Z_Registration_Info_UEnum_ESIK_FriendFlags.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<ESIK_FriendFlags>()
{
	return ESIK_FriendFlags_StaticEnum();
}
struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_FriendFlags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "FriendFlagBlocked.DisplayName", "Blocked" },
		{ "FriendFlagBlocked.Name", "FriendFlagBlocked" },
		{ "FriendFlagChatMember.DisplayName", "Chat Member" },
		{ "FriendFlagChatMember.Name", "FriendFlagChatMember" },
		{ "FriendFlagClanMember.DisplayName", "Clan Member" },
		{ "FriendFlagClanMember.Name", "FriendFlagClanMember" },
		{ "FriendFlagFlagAll.DisplayName", "Flag All" },
		{ "FriendFlagFlagAll.Name", "FriendFlagFlagAll" },
		{ "FriendFlagFriendshipRequested.DisplayName", "Friendship Requested" },
		{ "FriendFlagFriendshipRequested.Name", "FriendFlagFriendshipRequested" },
		{ "FriendFlagIgnored.DisplayName", "Ignored" },
		{ "FriendFlagIgnored.Name", "FriendFlagIgnored" },
		{ "FriendFlagIgnoredFriend.DisplayName", "Ignored Friend" },
		{ "FriendFlagIgnoredFriend.Name", "FriendFlagIgnoredFriend" },
		{ "FriendFlagImmediate.DisplayName", "Immediate" },
		{ "FriendFlagImmediate.Name", "FriendFlagImmediate" },
		{ "FriendFlagNone.DisplayName", "None" },
		{ "FriendFlagNone.Name", "FriendFlagNone" },
		{ "FriendFlagOnGameServer.DisplayName", "On Game Server" },
		{ "FriendFlagOnGameServer.Name", "FriendFlagOnGameServer" },
		{ "FriendFlagRequestingFriendship.DisplayName", "Requesting Friendship" },
		{ "FriendFlagRequestingFriendship.Name", "FriendFlagRequestingFriendship" },
		{ "FriendFlagRequestingInfo.DisplayName", "Requesting Info" },
		{ "FriendFlagRequestingInfo.Name", "FriendFlagRequestingInfo" },
		{ "FriendFlagSuggested.DisplayName", "Suggested" },
		{ "FriendFlagSuggested.Name", "FriendFlagSuggested" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "FriendFlagNone", (int64)FriendFlagNone },
		{ "FriendFlagBlocked", (int64)FriendFlagBlocked },
		{ "FriendFlagFriendshipRequested", (int64)FriendFlagFriendshipRequested },
		{ "FriendFlagImmediate", (int64)FriendFlagImmediate },
		{ "FriendFlagClanMember", (int64)FriendFlagClanMember },
		{ "FriendFlagOnGameServer", (int64)FriendFlagOnGameServer },
		{ "FriendFlagRequestingFriendship", (int64)FriendFlagRequestingFriendship },
		{ "FriendFlagRequestingInfo", (int64)FriendFlagRequestingInfo },
		{ "FriendFlagIgnored", (int64)FriendFlagIgnored },
		{ "FriendFlagIgnoredFriend", (int64)FriendFlagIgnoredFriend },
		{ "FriendFlagSuggested", (int64)FriendFlagSuggested },
		{ "FriendFlagChatMember", (int64)FriendFlagChatMember },
		{ "FriendFlagFlagAll", (int64)FriendFlagFlagAll },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_FriendFlags_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamIntegrationKit_ESIK_FriendFlags_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	"ESIK_FriendFlags",
	"ESIK_FriendFlags",
	Z_Construct_UEnum_SteamIntegrationKit_ESIK_FriendFlags_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_FriendFlags_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_FriendFlags_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamIntegrationKit_ESIK_FriendFlags_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_FriendFlags()
{
	if (!Z_Registration_Info_UEnum_ESIK_FriendFlags.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESIK_FriendFlags.InnerSingleton, Z_Construct_UEnum_SteamIntegrationKit_ESIK_FriendFlags_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESIK_FriendFlags.InnerSingleton;
}
// ********** End Enum ESIK_FriendFlags ************************************************************

// ********** Begin Enum ESIK_EGamepadTextInputLineMode ********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESIK_EGamepadTextInputLineMode;
static UEnum* ESIK_EGamepadTextInputLineMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESIK_EGamepadTextInputLineMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESIK_EGamepadTextInputLineMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamIntegrationKit_ESIK_EGamepadTextInputLineMode, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("ESIK_EGamepadTextInputLineMode"));
	}
	return Z_Registration_Info_UEnum_ESIK_EGamepadTextInputLineMode.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<ESIK_EGamepadTextInputLineMode>()
{
	return ESIK_EGamepadTextInputLineMode_StaticEnum();
}
struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_EGamepadTextInputLineMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ESIK_EGamepadTextInputLineModeMultipleLines.DisplayName", "Multiple Lines" },
		{ "ESIK_EGamepadTextInputLineModeMultipleLines.Name", "ESIK_EGamepadTextInputLineModeMultipleLines" },
		{ "ESIK_EGamepadTextInputLineModeSingleLine.DisplayName", "Single Line" },
		{ "ESIK_EGamepadTextInputLineModeSingleLine.Name", "ESIK_EGamepadTextInputLineModeSingleLine" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESIK_EGamepadTextInputLineModeSingleLine", (int64)ESIK_EGamepadTextInputLineModeSingleLine },
		{ "ESIK_EGamepadTextInputLineModeMultipleLines", (int64)ESIK_EGamepadTextInputLineModeMultipleLines },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_EGamepadTextInputLineMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamIntegrationKit_ESIK_EGamepadTextInputLineMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	"ESIK_EGamepadTextInputLineMode",
	"ESIK_EGamepadTextInputLineMode",
	Z_Construct_UEnum_SteamIntegrationKit_ESIK_EGamepadTextInputLineMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_EGamepadTextInputLineMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_EGamepadTextInputLineMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamIntegrationKit_ESIK_EGamepadTextInputLineMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_EGamepadTextInputLineMode()
{
	if (!Z_Registration_Info_UEnum_ESIK_EGamepadTextInputLineMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESIK_EGamepadTextInputLineMode.InnerSingleton, Z_Construct_UEnum_SteamIntegrationKit_ESIK_EGamepadTextInputLineMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESIK_EGamepadTextInputLineMode.InnerSingleton;
}
// ********** End Enum ESIK_EGamepadTextInputLineMode **********************************************

// ********** Begin Enum ESIK_EGamepadTextInputMode ************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESIK_EGamepadTextInputMode;
static UEnum* ESIK_EGamepadTextInputMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESIK_EGamepadTextInputMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESIK_EGamepadTextInputMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamIntegrationKit_ESIK_EGamepadTextInputMode, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("ESIK_EGamepadTextInputMode"));
	}
	return Z_Registration_Info_UEnum_ESIK_EGamepadTextInputMode.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<ESIK_EGamepadTextInputMode>()
{
	return ESIK_EGamepadTextInputMode_StaticEnum();
}
struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_EGamepadTextInputMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ESIK_EGamepadTextInputModeNormal.DisplayName", "Normal" },
		{ "ESIK_EGamepadTextInputModeNormal.Name", "ESIK_EGamepadTextInputModeNormal" },
		{ "ESIK_EGamepadTextInputModePassword.DisplayName", "Password" },
		{ "ESIK_EGamepadTextInputModePassword.Name", "ESIK_EGamepadTextInputModePassword" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESIK_EGamepadTextInputModeNormal", (int64)ESIK_EGamepadTextInputModeNormal },
		{ "ESIK_EGamepadTextInputModePassword", (int64)ESIK_EGamepadTextInputModePassword },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_EGamepadTextInputMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamIntegrationKit_ESIK_EGamepadTextInputMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	"ESIK_EGamepadTextInputMode",
	"ESIK_EGamepadTextInputMode",
	Z_Construct_UEnum_SteamIntegrationKit_ESIK_EGamepadTextInputMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_EGamepadTextInputMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_EGamepadTextInputMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamIntegrationKit_ESIK_EGamepadTextInputMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_EGamepadTextInputMode()
{
	if (!Z_Registration_Info_UEnum_ESIK_EGamepadTextInputMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESIK_EGamepadTextInputMode.InnerSingleton, Z_Construct_UEnum_SteamIntegrationKit_ESIK_EGamepadTextInputMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESIK_EGamepadTextInputMode.InnerSingleton;
}
// ********** End Enum ESIK_EGamepadTextInputMode **************************************************

// ********** Begin Enum ESIK_EFloatingGamepadTextInputMode ****************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESIK_EFloatingGamepadTextInputMode;
static UEnum* ESIK_EFloatingGamepadTextInputMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESIK_EFloatingGamepadTextInputMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESIK_EFloatingGamepadTextInputMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamIntegrationKit_ESIK_EFloatingGamepadTextInputMode, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("ESIK_EFloatingGamepadTextInputMode"));
	}
	return Z_Registration_Info_UEnum_ESIK_EFloatingGamepadTextInputMode.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<ESIK_EFloatingGamepadTextInputMode>()
{
	return ESIK_EFloatingGamepadTextInputMode_StaticEnum();
}
struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_EFloatingGamepadTextInputMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ESIK_EFloatingGamepadTextInputModeModeEmail.Comment", "//Keyboard is displayed in a special mode that makes it easier to enter emails\n" },
		{ "ESIK_EFloatingGamepadTextInputModeModeEmail.DisplayName", "Email" },
		{ "ESIK_EFloatingGamepadTextInputModeModeEmail.Name", "ESIK_EFloatingGamepadTextInputModeModeEmail" },
		{ "ESIK_EFloatingGamepadTextInputModeModeEmail.ToolTip", "Keyboard is displayed in a special mode that makes it easier to enter emails" },
		{ "ESIK_EFloatingGamepadTextInputModeModeMultipleLines.Comment", "//User needs to explicitly dismiss the keyboard\n" },
		{ "ESIK_EFloatingGamepadTextInputModeModeMultipleLines.DisplayName", "Multiple Lines" },
		{ "ESIK_EFloatingGamepadTextInputModeModeMultipleLines.Name", "ESIK_EFloatingGamepadTextInputModeModeMultipleLines" },
		{ "ESIK_EFloatingGamepadTextInputModeModeMultipleLines.ToolTip", "User needs to explicitly dismiss the keyboard" },
		{ "ESIK_EFloatingGamepadTextInputModeModeNumeric.Comment", "//Numeric keypad is shown\n" },
		{ "ESIK_EFloatingGamepadTextInputModeModeNumeric.DisplayName", "Numeric" },
		{ "ESIK_EFloatingGamepadTextInputModeModeNumeric.Name", "ESIK_EFloatingGamepadTextInputModeModeNumeric" },
		{ "ESIK_EFloatingGamepadTextInputModeModeNumeric.ToolTip", "Numeric keypad is shown" },
		{ "ESIK_EFloatingGamepadTextInputModeModeSingleLine.Comment", "//Enter dismisses the keyboard\n" },
		{ "ESIK_EFloatingGamepadTextInputModeModeSingleLine.DisplayName", "Single Line" },
		{ "ESIK_EFloatingGamepadTextInputModeModeSingleLine.Name", "ESIK_EFloatingGamepadTextInputModeModeSingleLine" },
		{ "ESIK_EFloatingGamepadTextInputModeModeSingleLine.ToolTip", "Enter dismisses the keyboard" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESIK_EFloatingGamepadTextInputModeModeSingleLine", (int64)ESIK_EFloatingGamepadTextInputModeModeSingleLine },
		{ "ESIK_EFloatingGamepadTextInputModeModeMultipleLines", (int64)ESIK_EFloatingGamepadTextInputModeModeMultipleLines },
		{ "ESIK_EFloatingGamepadTextInputModeModeEmail", (int64)ESIK_EFloatingGamepadTextInputModeModeEmail },
		{ "ESIK_EFloatingGamepadTextInputModeModeNumeric", (int64)ESIK_EFloatingGamepadTextInputModeModeNumeric },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_EFloatingGamepadTextInputMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamIntegrationKit_ESIK_EFloatingGamepadTextInputMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	"ESIK_EFloatingGamepadTextInputMode",
	"ESIK_EFloatingGamepadTextInputMode",
	Z_Construct_UEnum_SteamIntegrationKit_ESIK_EFloatingGamepadTextInputMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_EFloatingGamepadTextInputMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_EFloatingGamepadTextInputMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamIntegrationKit_ESIK_EFloatingGamepadTextInputMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_EFloatingGamepadTextInputMode()
{
	if (!Z_Registration_Info_UEnum_ESIK_EFloatingGamepadTextInputMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESIK_EFloatingGamepadTextInputMode.InnerSingleton, Z_Construct_UEnum_SteamIntegrationKit_ESIK_EFloatingGamepadTextInputMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESIK_EFloatingGamepadTextInputMode.InnerSingleton;
}
// ********** End Enum ESIK_EFloatingGamepadTextInputMode ******************************************

// ********** Begin Enum ESIK_ECommunityProfileItemType ********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESIK_ECommunityProfileItemType;
static UEnum* ESIK_ECommunityProfileItemType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESIK_ECommunityProfileItemType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESIK_ECommunityProfileItemType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamIntegrationKit_ESIK_ECommunityProfileItemType, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("ESIK_ECommunityProfileItemType"));
	}
	return Z_Registration_Info_UEnum_ESIK_ECommunityProfileItemType.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<ESIK_ECommunityProfileItemType>()
{
	return ESIK_ECommunityProfileItemType_StaticEnum();
}
struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_ECommunityProfileItemType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ESIK_ECommunityProfileItemType_AnimatedAvatar.DisplayName", "Animated avatar image (GIF)" },
		{ "ESIK_ECommunityProfileItemType_AnimatedAvatar.Name", "ESIK_ECommunityProfileItemType_AnimatedAvatar" },
		{ "ESIK_ECommunityProfileItemType_AvatarFrame.DisplayName", "Avatar frame (may or may not be an animated PNG)" },
		{ "ESIK_ECommunityProfileItemType_AvatarFrame.Name", "ESIK_ECommunityProfileItemType_AvatarFrame" },
		{ "ESIK_ECommunityProfileItemType_MiniProfileBackground.DisplayName", "Background image or movie for the hover flyout for a user" },
		{ "ESIK_ECommunityProfileItemType_MiniProfileBackground.Name", "ESIK_ECommunityProfileItemType_MiniProfileBackground" },
		{ "ESIK_ECommunityProfileItemType_ProfileBackground.DisplayName", "Profile background image or movie" },
		{ "ESIK_ECommunityProfileItemType_ProfileBackground.Name", "ESIK_ECommunityProfileItemType_ProfileBackground" },
		{ "ESIK_ECommunityProfileItemType_ProfileModifier.DisplayName", "Special profile modifier item, like Seasonal Profile or Artist Profile" },
		{ "ESIK_ECommunityProfileItemType_ProfileModifier.Name", "ESIK_ECommunityProfileItemType_ProfileModifier" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESIK_ECommunityProfileItemType_AnimatedAvatar", (int64)ESIK_ECommunityProfileItemType_AnimatedAvatar },
		{ "ESIK_ECommunityProfileItemType_AvatarFrame", (int64)ESIK_ECommunityProfileItemType_AvatarFrame },
		{ "ESIK_ECommunityProfileItemType_ProfileModifier", (int64)ESIK_ECommunityProfileItemType_ProfileModifier },
		{ "ESIK_ECommunityProfileItemType_ProfileBackground", (int64)ESIK_ECommunityProfileItemType_ProfileBackground },
		{ "ESIK_ECommunityProfileItemType_MiniProfileBackground", (int64)ESIK_ECommunityProfileItemType_MiniProfileBackground },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_ECommunityProfileItemType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamIntegrationKit_ESIK_ECommunityProfileItemType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	"ESIK_ECommunityProfileItemType",
	"ESIK_ECommunityProfileItemType",
	Z_Construct_UEnum_SteamIntegrationKit_ESIK_ECommunityProfileItemType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_ECommunityProfileItemType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_ECommunityProfileItemType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamIntegrationKit_ESIK_ECommunityProfileItemType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_ECommunityProfileItemType()
{
	if (!Z_Registration_Info_UEnum_ESIK_ECommunityProfileItemType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESIK_ECommunityProfileItemType.InnerSingleton, Z_Construct_UEnum_SteamIntegrationKit_ESIK_ECommunityProfileItemType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESIK_ECommunityProfileItemType.InnerSingleton;
}
// ********** End Enum ESIK_ECommunityProfileItemType **********************************************

// ********** Begin Enum ESIK_ECommunityProfileItemProperty ****************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESIK_ECommunityProfileItemProperty;
static UEnum* ESIK_ECommunityProfileItemProperty_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESIK_ECommunityProfileItemProperty.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESIK_ECommunityProfileItemProperty.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamIntegrationKit_ESIK_ECommunityProfileItemProperty, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("ESIK_ECommunityProfileItemProperty"));
	}
	return Z_Registration_Info_UEnum_ESIK_ECommunityProfileItemProperty.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<ESIK_ECommunityProfileItemProperty>()
{
	return ESIK_ECommunityProfileItemProperty_StaticEnum();
}
struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_ECommunityProfileItemProperty_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ESIK_ECommunityProfileItemProperty_AppID.DisplayName", "AppID of the item (unsigned integer)" },
		{ "ESIK_ECommunityProfileItemProperty_AppID.Name", "ESIK_ECommunityProfileItemProperty_AppID" },
		{ "ESIK_ECommunityProfileItemProperty_Class.DisplayName", "Class or type of item (internal value, unsigned integer)" },
		{ "ESIK_ECommunityProfileItemProperty_Class.Name", "ESIK_ECommunityProfileItemProperty_Class" },
		{ "ESIK_ECommunityProfileItemProperty_Description.DisplayName", "Localized description of the item" },
		{ "ESIK_ECommunityProfileItemProperty_Description.Name", "ESIK_ECommunityProfileItemProperty_Description" },
		{ "ESIK_ECommunityProfileItemProperty_ImageLarge.DisplayName", "URL to the large or static version of the image" },
		{ "ESIK_ECommunityProfileItemProperty_ImageLarge.Name", "ESIK_ECommunityProfileItemProperty_ImageLarge" },
		{ "ESIK_ECommunityProfileItemProperty_ImageSmall.DisplayName", "URL to the small or animated version of the image" },
		{ "ESIK_ECommunityProfileItemProperty_ImageSmall.Name", "ESIK_ECommunityProfileItemProperty_ImageSmall" },
		{ "ESIK_ECommunityProfileItemProperty_InternalName.DisplayName", "Internal name entered on the partner site (for debugging)" },
		{ "ESIK_ECommunityProfileItemProperty_InternalName.Name", "ESIK_ECommunityProfileItemProperty_InternalName" },
		{ "ESIK_ECommunityProfileItemProperty_MovieMP4.DisplayName", "URL to the mp4 video file" },
		{ "ESIK_ECommunityProfileItemProperty_MovieMP4.Name", "ESIK_ECommunityProfileItemProperty_MovieMP4" },
		{ "ESIK_ECommunityProfileItemProperty_MovieMP4Small.DisplayName", "URL to the small mp4 video file" },
		{ "ESIK_ECommunityProfileItemProperty_MovieMP4Small.Name", "ESIK_ECommunityProfileItemProperty_MovieMP4Small" },
		{ "ESIK_ECommunityProfileItemProperty_MovieWebM.DisplayName", "URL to the webm video file" },
		{ "ESIK_ECommunityProfileItemProperty_MovieWebM.Name", "ESIK_ECommunityProfileItemProperty_MovieWebM" },
		{ "ESIK_ECommunityProfileItemProperty_MovieWebMSmall.DisplayName", "URL to the small webm video file" },
		{ "ESIK_ECommunityProfileItemProperty_MovieWebMSmall.Name", "ESIK_ECommunityProfileItemProperty_MovieWebMSmall" },
		{ "ESIK_ECommunityProfileItemProperty_Title.DisplayName", "Localized name of the item" },
		{ "ESIK_ECommunityProfileItemProperty_Title.Name", "ESIK_ECommunityProfileItemProperty_Title" },
		{ "ESIK_ECommunityProfileItemProperty_TypeID.DisplayName", "Type id of the item, unique to the appid (unsigned integer)" },
		{ "ESIK_ECommunityProfileItemProperty_TypeID.Name", "ESIK_ECommunityProfileItemProperty_TypeID" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESIK_ECommunityProfileItemProperty_ImageSmall", (int64)ESIK_ECommunityProfileItemProperty_ImageSmall },
		{ "ESIK_ECommunityProfileItemProperty_ImageLarge", (int64)ESIK_ECommunityProfileItemProperty_ImageLarge },
		{ "ESIK_ECommunityProfileItemProperty_InternalName", (int64)ESIK_ECommunityProfileItemProperty_InternalName },
		{ "ESIK_ECommunityProfileItemProperty_Title", (int64)ESIK_ECommunityProfileItemProperty_Title },
		{ "ESIK_ECommunityProfileItemProperty_Description", (int64)ESIK_ECommunityProfileItemProperty_Description },
		{ "ESIK_ECommunityProfileItemProperty_AppID", (int64)ESIK_ECommunityProfileItemProperty_AppID },
		{ "ESIK_ECommunityProfileItemProperty_TypeID", (int64)ESIK_ECommunityProfileItemProperty_TypeID },
		{ "ESIK_ECommunityProfileItemProperty_Class", (int64)ESIK_ECommunityProfileItemProperty_Class },
		{ "ESIK_ECommunityProfileItemProperty_MovieWebM", (int64)ESIK_ECommunityProfileItemProperty_MovieWebM },
		{ "ESIK_ECommunityProfileItemProperty_MovieMP4", (int64)ESIK_ECommunityProfileItemProperty_MovieMP4 },
		{ "ESIK_ECommunityProfileItemProperty_MovieWebMSmall", (int64)ESIK_ECommunityProfileItemProperty_MovieWebMSmall },
		{ "ESIK_ECommunityProfileItemProperty_MovieMP4Small", (int64)ESIK_ECommunityProfileItemProperty_MovieMP4Small },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_ECommunityProfileItemProperty_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamIntegrationKit_ESIK_ECommunityProfileItemProperty_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	"ESIK_ECommunityProfileItemProperty",
	"ESIK_ECommunityProfileItemProperty",
	Z_Construct_UEnum_SteamIntegrationKit_ESIK_ECommunityProfileItemProperty_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_ECommunityProfileItemProperty_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_ECommunityProfileItemProperty_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamIntegrationKit_ESIK_ECommunityProfileItemProperty_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_ECommunityProfileItemProperty()
{
	if (!Z_Registration_Info_UEnum_ESIK_ECommunityProfileItemProperty.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESIK_ECommunityProfileItemProperty.InnerSingleton, Z_Construct_UEnum_SteamIntegrationKit_ESIK_ECommunityProfileItemProperty_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESIK_ECommunityProfileItemProperty.InnerSingleton;
}
// ********** End Enum ESIK_ECommunityProfileItemProperty ******************************************

// ********** Begin ScriptStruct FSIK_InputActionSetHandle *****************************************
struct Z_Construct_UScriptStruct_FSIK_InputActionSetHandle_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSIK_InputActionSetHandle); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSIK_InputActionSetHandle); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSIK_InputActionSetHandle constinit property declarations *********
	static const UECodeGen_Private::FInt64PropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSIK_InputActionSetHandle constinit property declarations ***********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSIK_InputActionSetHandle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSIK_InputActionSetHandle_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSIK_InputActionSetHandle;
class UScriptStruct* FSIK_InputActionSetHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_InputActionSetHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSIK_InputActionSetHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSIK_InputActionSetHandle, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("SIK_InputActionSetHandle"));
	}
	return Z_Registration_Info_UScriptStruct_FSIK_InputActionSetHandle.OuterSingleton;
	}

// ********** Begin ScriptStruct FSIK_InputActionSetHandle Property Definitions ********************
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FSIK_InputActionSetHandle_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_InputActionSetHandle, Result), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSIK_InputActionSetHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_InputActionSetHandle_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_InputActionSetHandle_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSIK_InputActionSetHandle Property Definitions **********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSIK_InputActionSetHandle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	&NewStructOps,
	"SIK_InputActionSetHandle",
	Z_Construct_UScriptStruct_FSIK_InputActionSetHandle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_InputActionSetHandle_Statics::PropPointers),
	sizeof(FSIK_InputActionSetHandle),
	alignof(FSIK_InputActionSetHandle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_InputActionSetHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSIK_InputActionSetHandle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSIK_InputActionSetHandle()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_InputActionSetHandle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSIK_InputActionSetHandle.InnerSingleton, Z_Construct_UScriptStruct_FSIK_InputActionSetHandle_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSIK_InputActionSetHandle.InnerSingleton);
}
// ********** End ScriptStruct FSIK_InputActionSetHandle *******************************************

// ********** Begin ScriptStruct FSIK_InputDigitalActionHandle *************************************
struct Z_Construct_UScriptStruct_FSIK_InputDigitalActionHandle_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSIK_InputDigitalActionHandle); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSIK_InputDigitalActionHandle); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSIK_InputDigitalActionHandle constinit property declarations *****
	static const UECodeGen_Private::FInt64PropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSIK_InputDigitalActionHandle constinit property declarations *******
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSIK_InputDigitalActionHandle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSIK_InputDigitalActionHandle_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSIK_InputDigitalActionHandle;
class UScriptStruct* FSIK_InputDigitalActionHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_InputDigitalActionHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSIK_InputDigitalActionHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSIK_InputDigitalActionHandle, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("SIK_InputDigitalActionHandle"));
	}
	return Z_Registration_Info_UScriptStruct_FSIK_InputDigitalActionHandle.OuterSingleton;
	}

// ********** Begin ScriptStruct FSIK_InputDigitalActionHandle Property Definitions ****************
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FSIK_InputDigitalActionHandle_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_InputDigitalActionHandle, Result), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSIK_InputDigitalActionHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_InputDigitalActionHandle_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_InputDigitalActionHandle_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSIK_InputDigitalActionHandle Property Definitions ******************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSIK_InputDigitalActionHandle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	&NewStructOps,
	"SIK_InputDigitalActionHandle",
	Z_Construct_UScriptStruct_FSIK_InputDigitalActionHandle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_InputDigitalActionHandle_Statics::PropPointers),
	sizeof(FSIK_InputDigitalActionHandle),
	alignof(FSIK_InputDigitalActionHandle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_InputDigitalActionHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSIK_InputDigitalActionHandle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSIK_InputDigitalActionHandle()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_InputDigitalActionHandle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSIK_InputDigitalActionHandle.InnerSingleton, Z_Construct_UScriptStruct_FSIK_InputDigitalActionHandle_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSIK_InputDigitalActionHandle.InnerSingleton);
}
// ********** End ScriptStruct FSIK_InputDigitalActionHandle ***************************************

// ********** Begin ScriptStruct FSIK_InputAnalogActionHandle **************************************
struct Z_Construct_UScriptStruct_FSIK_InputAnalogActionHandle_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSIK_InputAnalogActionHandle); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSIK_InputAnalogActionHandle); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSIK_InputAnalogActionHandle constinit property declarations ******
	static const UECodeGen_Private::FInt64PropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSIK_InputAnalogActionHandle constinit property declarations ********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSIK_InputAnalogActionHandle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSIK_InputAnalogActionHandle_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSIK_InputAnalogActionHandle;
class UScriptStruct* FSIK_InputAnalogActionHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_InputAnalogActionHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSIK_InputAnalogActionHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSIK_InputAnalogActionHandle, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("SIK_InputAnalogActionHandle"));
	}
	return Z_Registration_Info_UScriptStruct_FSIK_InputAnalogActionHandle.OuterSingleton;
	}

// ********** Begin ScriptStruct FSIK_InputAnalogActionHandle Property Definitions *****************
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FSIK_InputAnalogActionHandle_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_InputAnalogActionHandle, Result), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSIK_InputAnalogActionHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_InputAnalogActionHandle_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_InputAnalogActionHandle_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSIK_InputAnalogActionHandle Property Definitions *******************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSIK_InputAnalogActionHandle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	&NewStructOps,
	"SIK_InputAnalogActionHandle",
	Z_Construct_UScriptStruct_FSIK_InputAnalogActionHandle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_InputAnalogActionHandle_Statics::PropPointers),
	sizeof(FSIK_InputAnalogActionHandle),
	alignof(FSIK_InputAnalogActionHandle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_InputAnalogActionHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSIK_InputAnalogActionHandle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSIK_InputAnalogActionHandle()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_InputAnalogActionHandle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSIK_InputAnalogActionHandle.InnerSingleton, Z_Construct_UScriptStruct_FSIK_InputAnalogActionHandle_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSIK_InputAnalogActionHandle.InnerSingleton);
}
// ********** End ScriptStruct FSIK_InputAnalogActionHandle ****************************************

// ********** Begin ScriptStruct FSIK_InputHandle **************************************************
struct Z_Construct_UScriptStruct_FSIK_InputHandle_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSIK_InputHandle); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSIK_InputHandle); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSIK_InputHandle constinit property declarations ******************
	static const UECodeGen_Private::FInt64PropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSIK_InputHandle constinit property declarations ********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSIK_InputHandle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSIK_InputHandle_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSIK_InputHandle;
class UScriptStruct* FSIK_InputHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_InputHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSIK_InputHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSIK_InputHandle, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("SIK_InputHandle"));
	}
	return Z_Registration_Info_UScriptStruct_FSIK_InputHandle.OuterSingleton;
	}

// ********** Begin ScriptStruct FSIK_InputHandle Property Definitions *****************************
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FSIK_InputHandle_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_InputHandle, Result), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSIK_InputHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_InputHandle_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_InputHandle_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSIK_InputHandle Property Definitions *******************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSIK_InputHandle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	&NewStructOps,
	"SIK_InputHandle",
	Z_Construct_UScriptStruct_FSIK_InputHandle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_InputHandle_Statics::PropPointers),
	sizeof(FSIK_InputHandle),
	alignof(FSIK_InputHandle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_InputHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSIK_InputHandle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSIK_InputHandle()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_InputHandle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSIK_InputHandle.InnerSingleton, Z_Construct_UScriptStruct_FSIK_InputHandle_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSIK_InputHandle.InnerSingleton);
}
// ********** End ScriptStruct FSIK_InputHandle ****************************************************

// ********** Begin Enum ESIK_InputSourceMode ******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESIK_InputSourceMode;
static UEnum* ESIK_InputSourceMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESIK_InputSourceMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESIK_InputSourceMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamIntegrationKit_ESIK_InputSourceMode, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("ESIK_InputSourceMode"));
	}
	return Z_Registration_Info_UEnum_ESIK_InputSourceMode.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<ESIK_InputSourceMode>()
{
	return ESIK_InputSourceMode_StaticEnum();
}
struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_InputSourceMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ESIK_InputSourceMode_AbsoluteMouse.DisplayName", "Absolute Mouse" },
		{ "ESIK_InputSourceMode_AbsoluteMouse.Name", "ESIK_InputSourceMode_AbsoluteMouse" },
		{ "ESIK_InputSourceMode_Buttons.DisplayName", "Buttons" },
		{ "ESIK_InputSourceMode_Buttons.Name", "ESIK_InputSourceMode_Buttons" },
		{ "ESIK_InputSourceMode_Dpad.DisplayName", "Dpad" },
		{ "ESIK_InputSourceMode_Dpad.Name", "ESIK_InputSourceMode_Dpad" },
		{ "ESIK_InputSourceMode_FourButtons.DisplayName", "Four Buttons" },
		{ "ESIK_InputSourceMode_FourButtons.Name", "ESIK_InputSourceMode_FourButtons" },
		{ "ESIK_InputSourceMode_JoystickCamera.DisplayName", "Joystick Camera" },
		{ "ESIK_InputSourceMode_JoystickCamera.Name", "ESIK_InputSourceMode_JoystickCamera" },
		{ "ESIK_InputSourceMode_JoystickMouse.DisplayName", "Joystick Mouse" },
		{ "ESIK_InputSourceMode_JoystickMouse.Name", "ESIK_InputSourceMode_JoystickMouse" },
		{ "ESIK_InputSourceMode_JoystickMove.DisplayName", "Joystick Move" },
		{ "ESIK_InputSourceMode_JoystickMove.Name", "ESIK_InputSourceMode_JoystickMove" },
		{ "ESIK_InputSourceMode_MouseJoystick.DisplayName", "Mouse Joystick" },
		{ "ESIK_InputSourceMode_MouseJoystick.Name", "ESIK_InputSourceMode_MouseJoystick" },
		{ "ESIK_InputSourceMode_MouseRegion.DisplayName", "Mouse Region" },
		{ "ESIK_InputSourceMode_MouseRegion.Name", "ESIK_InputSourceMode_MouseRegion" },
		{ "ESIK_InputSourceMode_None.DisplayName", "None" },
		{ "ESIK_InputSourceMode_None.Name", "ESIK_InputSourceMode_None" },
		{ "ESIK_InputSourceMode_RadialMenu.DisplayName", "Radial Menu" },
		{ "ESIK_InputSourceMode_RadialMenu.Name", "ESIK_InputSourceMode_RadialMenu" },
		{ "ESIK_InputSourceMode_RelativeMouse.DisplayName", "Relative Mouse" },
		{ "ESIK_InputSourceMode_RelativeMouse.Name", "ESIK_InputSourceMode_RelativeMouse" },
		{ "ESIK_InputSourceMode_ScrollWheel.DisplayName", "Scroll Wheel" },
		{ "ESIK_InputSourceMode_ScrollWheel.Name", "ESIK_InputSourceMode_ScrollWheel" },
		{ "ESIK_InputSourceMode_SingleButton.DisplayName", "Single Button" },
		{ "ESIK_InputSourceMode_SingleButton.Name", "ESIK_InputSourceMode_SingleButton" },
		{ "ESIK_InputSourceMode_Switches.DisplayName", "Switches" },
		{ "ESIK_InputSourceMode_Switches.Name", "ESIK_InputSourceMode_Switches" },
		{ "ESIK_InputSourceMode_TouchMenu.DisplayName", "Touch Menu" },
		{ "ESIK_InputSourceMode_TouchMenu.Name", "ESIK_InputSourceMode_TouchMenu" },
		{ "ESIK_InputSourceMode_Trigger.DisplayName", "Trigger" },
		{ "ESIK_InputSourceMode_Trigger.Name", "ESIK_InputSourceMode_Trigger" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESIK_InputSourceMode_None", (int64)ESIK_InputSourceMode_None },
		{ "ESIK_InputSourceMode_Dpad", (int64)ESIK_InputSourceMode_Dpad },
		{ "ESIK_InputSourceMode_Buttons", (int64)ESIK_InputSourceMode_Buttons },
		{ "ESIK_InputSourceMode_FourButtons", (int64)ESIK_InputSourceMode_FourButtons },
		{ "ESIK_InputSourceMode_AbsoluteMouse", (int64)ESIK_InputSourceMode_AbsoluteMouse },
		{ "ESIK_InputSourceMode_RelativeMouse", (int64)ESIK_InputSourceMode_RelativeMouse },
		{ "ESIK_InputSourceMode_JoystickMove", (int64)ESIK_InputSourceMode_JoystickMove },
		{ "ESIK_InputSourceMode_JoystickMouse", (int64)ESIK_InputSourceMode_JoystickMouse },
		{ "ESIK_InputSourceMode_JoystickCamera", (int64)ESIK_InputSourceMode_JoystickCamera },
		{ "ESIK_InputSourceMode_ScrollWheel", (int64)ESIK_InputSourceMode_ScrollWheel },
		{ "ESIK_InputSourceMode_Trigger", (int64)ESIK_InputSourceMode_Trigger },
		{ "ESIK_InputSourceMode_TouchMenu", (int64)ESIK_InputSourceMode_TouchMenu },
		{ "ESIK_InputSourceMode_MouseJoystick", (int64)ESIK_InputSourceMode_MouseJoystick },
		{ "ESIK_InputSourceMode_MouseRegion", (int64)ESIK_InputSourceMode_MouseRegion },
		{ "ESIK_InputSourceMode_RadialMenu", (int64)ESIK_InputSourceMode_RadialMenu },
		{ "ESIK_InputSourceMode_SingleButton", (int64)ESIK_InputSourceMode_SingleButton },
		{ "ESIK_InputSourceMode_Switches", (int64)ESIK_InputSourceMode_Switches },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_InputSourceMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamIntegrationKit_ESIK_InputSourceMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	"ESIK_InputSourceMode",
	"ESIK_InputSourceMode",
	Z_Construct_UEnum_SteamIntegrationKit_ESIK_InputSourceMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_InputSourceMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_InputSourceMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamIntegrationKit_ESIK_InputSourceMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_InputSourceMode()
{
	if (!Z_Registration_Info_UEnum_ESIK_InputSourceMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESIK_InputSourceMode.InnerSingleton, Z_Construct_UEnum_SteamIntegrationKit_ESIK_InputSourceMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESIK_InputSourceMode.InnerSingleton;
}
// ********** End Enum ESIK_InputSourceMode ********************************************************

// ********** Begin ScriptStruct FSIK_InputAnalogActionData ****************************************
struct Z_Construct_UScriptStruct_FSIK_InputAnalogActionData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSIK_InputAnalogActionData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSIK_InputAnalogActionData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bActive_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSIK_InputAnalogActionData constinit property declarations ********
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_X;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Y;
	static void NewProp_bActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bActive;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSIK_InputAnalogActionData constinit property declarations **********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSIK_InputAnalogActionData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSIK_InputAnalogActionData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSIK_InputAnalogActionData;
class UScriptStruct* FSIK_InputAnalogActionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_InputAnalogActionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSIK_InputAnalogActionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSIK_InputAnalogActionData, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("SIK_InputAnalogActionData"));
	}
	return Z_Registration_Info_UScriptStruct_FSIK_InputAnalogActionData.OuterSingleton;
	}

// ********** Begin ScriptStruct FSIK_InputAnalogActionData Property Definitions *******************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSIK_InputAnalogActionData_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_InputAnalogActionData, Mode), Z_Construct_UEnum_SteamIntegrationKit_ESIK_InputSourceMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mode_MetaData), NewProp_Mode_MetaData) }; // 1299451004
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSIK_InputAnalogActionData_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_InputAnalogActionData, X), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_X_MetaData), NewProp_X_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSIK_InputAnalogActionData_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_InputAnalogActionData, Y), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Y_MetaData), NewProp_Y_MetaData) };
void Z_Construct_UScriptStruct_FSIK_InputAnalogActionData_Statics::NewProp_bActive_SetBit(void* Obj)
{
	((FSIK_InputAnalogActionData*)Obj)->bActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSIK_InputAnalogActionData_Statics::NewProp_bActive = { "bActive", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSIK_InputAnalogActionData), &Z_Construct_UScriptStruct_FSIK_InputAnalogActionData_Statics::NewProp_bActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bActive_MetaData), NewProp_bActive_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSIK_InputAnalogActionData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_InputAnalogActionData_Statics::NewProp_Mode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_InputAnalogActionData_Statics::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_InputAnalogActionData_Statics::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_InputAnalogActionData_Statics::NewProp_bActive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_InputAnalogActionData_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSIK_InputAnalogActionData Property Definitions *********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSIK_InputAnalogActionData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	&NewStructOps,
	"SIK_InputAnalogActionData",
	Z_Construct_UScriptStruct_FSIK_InputAnalogActionData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_InputAnalogActionData_Statics::PropPointers),
	sizeof(FSIK_InputAnalogActionData),
	alignof(FSIK_InputAnalogActionData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_InputAnalogActionData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSIK_InputAnalogActionData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSIK_InputAnalogActionData()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_InputAnalogActionData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSIK_InputAnalogActionData.InnerSingleton, Z_Construct_UScriptStruct_FSIK_InputAnalogActionData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSIK_InputAnalogActionData.InnerSingleton);
}
// ********** End ScriptStruct FSIK_InputAnalogActionData ******************************************

// ********** Begin ScriptStruct FSIK_InputDigitalActionData ***************************************
struct Z_Construct_UScriptStruct_FSIK_InputDigitalActionData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSIK_InputDigitalActionData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSIK_InputDigitalActionData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bActive_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bState_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSIK_InputDigitalActionData constinit property declarations *******
	static void NewProp_bActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bActive;
	static void NewProp_bState_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSIK_InputDigitalActionData constinit property declarations *********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSIK_InputDigitalActionData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSIK_InputDigitalActionData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSIK_InputDigitalActionData;
class UScriptStruct* FSIK_InputDigitalActionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_InputDigitalActionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSIK_InputDigitalActionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSIK_InputDigitalActionData, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("SIK_InputDigitalActionData"));
	}
	return Z_Registration_Info_UScriptStruct_FSIK_InputDigitalActionData.OuterSingleton;
	}

// ********** Begin ScriptStruct FSIK_InputDigitalActionData Property Definitions ******************
void Z_Construct_UScriptStruct_FSIK_InputDigitalActionData_Statics::NewProp_bActive_SetBit(void* Obj)
{
	((FSIK_InputDigitalActionData*)Obj)->bActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSIK_InputDigitalActionData_Statics::NewProp_bActive = { "bActive", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSIK_InputDigitalActionData), &Z_Construct_UScriptStruct_FSIK_InputDigitalActionData_Statics::NewProp_bActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bActive_MetaData), NewProp_bActive_MetaData) };
void Z_Construct_UScriptStruct_FSIK_InputDigitalActionData_Statics::NewProp_bState_SetBit(void* Obj)
{
	((FSIK_InputDigitalActionData*)Obj)->bState = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSIK_InputDigitalActionData_Statics::NewProp_bState = { "bState", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSIK_InputDigitalActionData), &Z_Construct_UScriptStruct_FSIK_InputDigitalActionData_Statics::NewProp_bState_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bState_MetaData), NewProp_bState_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSIK_InputDigitalActionData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_InputDigitalActionData_Statics::NewProp_bActive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_InputDigitalActionData_Statics::NewProp_bState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_InputDigitalActionData_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSIK_InputDigitalActionData Property Definitions ********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSIK_InputDigitalActionData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	&NewStructOps,
	"SIK_InputDigitalActionData",
	Z_Construct_UScriptStruct_FSIK_InputDigitalActionData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_InputDigitalActionData_Statics::PropPointers),
	sizeof(FSIK_InputDigitalActionData),
	alignof(FSIK_InputDigitalActionData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_InputDigitalActionData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSIK_InputDigitalActionData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSIK_InputDigitalActionData()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_InputDigitalActionData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSIK_InputDigitalActionData.InnerSingleton, Z_Construct_UScriptStruct_FSIK_InputDigitalActionData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSIK_InputDigitalActionData.InnerSingleton);
}
// ********** End ScriptStruct FSIK_InputDigitalActionData *****************************************

// ********** Begin Enum ESIK_SteamInputType *******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESIK_SteamInputType;
static UEnum* ESIK_SteamInputType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESIK_SteamInputType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESIK_SteamInputType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamInputType, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("ESIK_SteamInputType"));
	}
	return Z_Registration_Info_UEnum_ESIK_SteamInputType.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<ESIK_SteamInputType>()
{
	return ESIK_SteamInputType_StaticEnum();
}
struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamInputType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ESIK_SteamInputType_AndroidController.Comment", "// Unused\n" },
		{ "ESIK_SteamInputType_AndroidController.Name", "ESIK_SteamInputType_AndroidController" },
		{ "ESIK_SteamInputType_AndroidController.ToolTip", "Unused" },
		{ "ESIK_SteamInputType_AppleMFiController.Name", "ESIK_SteamInputType_AppleMFiController" },
		{ "ESIK_SteamInputType_Count.Comment", "// Added in SDK 153\n" },
		{ "ESIK_SteamInputType_Count.Name", "ESIK_SteamInputType_Count" },
		{ "ESIK_SteamInputType_Count.ToolTip", "Added in SDK 153" },
		{ "ESIK_SteamInputType_GenericGamepad.Name", "ESIK_SteamInputType_GenericGamepad" },
		{ "ESIK_SteamInputType_MaximumPossibleValue.Name", "ESIK_SteamInputType_MaximumPossibleValue" },
		{ "ESIK_SteamInputType_MobileTouch.Name", "ESIK_SteamInputType_MobileTouch" },
		{ "ESIK_SteamInputType_PS3Controller.Comment", "// Steam Link App On-screen Virtual Controller\n" },
		{ "ESIK_SteamInputType_PS3Controller.Name", "ESIK_SteamInputType_PS3Controller" },
		{ "ESIK_SteamInputType_PS3Controller.ToolTip", "Steam Link App On-screen Virtual Controller" },
		{ "ESIK_SteamInputType_PS4Controller.Comment", "// DirectInput controllers\n" },
		{ "ESIK_SteamInputType_PS4Controller.Name", "ESIK_SteamInputType_PS4Controller" },
		{ "ESIK_SteamInputType_PS4Controller.ToolTip", "DirectInput controllers" },
		{ "ESIK_SteamInputType_PS5Controller.Comment", "// Currently uses PS4 Origins\n" },
		{ "ESIK_SteamInputType_PS5Controller.Name", "ESIK_SteamInputType_PS5Controller" },
		{ "ESIK_SteamInputType_PS5Controller.ToolTip", "Currently uses PS4 Origins" },
		{ "ESIK_SteamInputType_SteamController.Name", "ESIK_SteamInputType_SteamController" },
		{ "ESIK_SteamInputType_SteamDeckController.Comment", "// Added in SDK 151\n" },
		{ "ESIK_SteamInputType_SteamDeckController.Name", "ESIK_SteamInputType_SteamDeckController" },
		{ "ESIK_SteamInputType_SteamDeckController.ToolTip", "Added in SDK 151" },
		{ "ESIK_SteamInputType_SwitchJoyConPair.Comment", "// Unused\n" },
		{ "ESIK_SteamInputType_SwitchJoyConPair.Name", "ESIK_SteamInputType_SwitchJoyConPair" },
		{ "ESIK_SteamInputType_SwitchJoyConPair.ToolTip", "Unused" },
		{ "ESIK_SteamInputType_SwitchJoyConSingle.Comment", "// Unused\n" },
		{ "ESIK_SteamInputType_SwitchJoyConSingle.Name", "ESIK_SteamInputType_SwitchJoyConSingle" },
		{ "ESIK_SteamInputType_SwitchJoyConSingle.ToolTip", "Unused" },
		{ "ESIK_SteamInputType_SwitchProController.Comment", "// Unused\n" },
		{ "ESIK_SteamInputType_SwitchProController.Name", "ESIK_SteamInputType_SwitchProController" },
		{ "ESIK_SteamInputType_SwitchProController.ToolTip", "Unused" },
		{ "ESIK_SteamInputType_Unknown.Name", "ESIK_SteamInputType_Unknown" },
		{ "ESIK_SteamInputType_XBox360Controller.Name", "ESIK_SteamInputType_XBox360Controller" },
		{ "ESIK_SteamInputType_XBoxOneController.Name", "ESIK_SteamInputType_XBoxOneController" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESIK_SteamInputType_Unknown", (int64)ESIK_SteamInputType_Unknown },
		{ "ESIK_SteamInputType_SteamController", (int64)ESIK_SteamInputType_SteamController },
		{ "ESIK_SteamInputType_XBox360Controller", (int64)ESIK_SteamInputType_XBox360Controller },
		{ "ESIK_SteamInputType_XBoxOneController", (int64)ESIK_SteamInputType_XBoxOneController },
		{ "ESIK_SteamInputType_GenericGamepad", (int64)ESIK_SteamInputType_GenericGamepad },
		{ "ESIK_SteamInputType_PS4Controller", (int64)ESIK_SteamInputType_PS4Controller },
		{ "ESIK_SteamInputType_AppleMFiController", (int64)ESIK_SteamInputType_AppleMFiController },
		{ "ESIK_SteamInputType_AndroidController", (int64)ESIK_SteamInputType_AndroidController },
		{ "ESIK_SteamInputType_SwitchJoyConPair", (int64)ESIK_SteamInputType_SwitchJoyConPair },
		{ "ESIK_SteamInputType_SwitchJoyConSingle", (int64)ESIK_SteamInputType_SwitchJoyConSingle },
		{ "ESIK_SteamInputType_SwitchProController", (int64)ESIK_SteamInputType_SwitchProController },
		{ "ESIK_SteamInputType_MobileTouch", (int64)ESIK_SteamInputType_MobileTouch },
		{ "ESIK_SteamInputType_PS3Controller", (int64)ESIK_SteamInputType_PS3Controller },
		{ "ESIK_SteamInputType_PS5Controller", (int64)ESIK_SteamInputType_PS5Controller },
		{ "ESIK_SteamInputType_SteamDeckController", (int64)ESIK_SteamInputType_SteamDeckController },
		{ "ESIK_SteamInputType_Count", (int64)ESIK_SteamInputType_Count },
		{ "ESIK_SteamInputType_MaximumPossibleValue", (int64)ESIK_SteamInputType_MaximumPossibleValue },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamInputType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamInputType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	"ESIK_SteamInputType",
	"ESIK_SteamInputType",
	Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamInputType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamInputType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamInputType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamInputType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamInputType()
{
	if (!Z_Registration_Info_UEnum_ESIK_SteamInputType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESIK_SteamInputType.InnerSingleton, Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamInputType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESIK_SteamInputType.InnerSingleton;
}
// ********** End Enum ESIK_SteamInputType *********************************************************

// ********** Begin ScriptStruct FSIK_InputMotionData **********************************************
struct Z_Construct_UScriptStruct_FSIK_InputMotionData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSIK_InputMotionData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSIK_InputMotionData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rotQuatX_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "Comment", "// Sensor-fused absolute rotation; will drift in heading toward average\n" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
		{ "ToolTip", "Sensor-fused absolute rotation; will drift in heading toward average" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rotQuatY_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rotQuatZ_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rotQuatW_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_posAccelX_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "Comment", "// Positional acceleration\n" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
		{ "ToolTip", "Positional acceleration" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_posAccelY_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_posAccelZ_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rotVelX_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "Comment", "// Angular velocity\n" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
		{ "ToolTip", "Angular velocity" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rotVelY_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rotVelZ_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSIK_InputMotionData constinit property declarations **************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_rotQuatX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_rotQuatY;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_rotQuatZ;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_rotQuatW;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_posAccelX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_posAccelY;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_posAccelZ;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_rotVelX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_rotVelY;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_rotVelZ;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSIK_InputMotionData constinit property declarations ****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSIK_InputMotionData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSIK_InputMotionData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSIK_InputMotionData;
class UScriptStruct* FSIK_InputMotionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_InputMotionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSIK_InputMotionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSIK_InputMotionData, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("SIK_InputMotionData"));
	}
	return Z_Registration_Info_UScriptStruct_FSIK_InputMotionData.OuterSingleton;
	}

// ********** Begin ScriptStruct FSIK_InputMotionData Property Definitions *************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSIK_InputMotionData_Statics::NewProp_rotQuatX = { "rotQuatX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_InputMotionData, rotQuatX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rotQuatX_MetaData), NewProp_rotQuatX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSIK_InputMotionData_Statics::NewProp_rotQuatY = { "rotQuatY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_InputMotionData, rotQuatY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rotQuatY_MetaData), NewProp_rotQuatY_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSIK_InputMotionData_Statics::NewProp_rotQuatZ = { "rotQuatZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_InputMotionData, rotQuatZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rotQuatZ_MetaData), NewProp_rotQuatZ_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSIK_InputMotionData_Statics::NewProp_rotQuatW = { "rotQuatW", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_InputMotionData, rotQuatW), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rotQuatW_MetaData), NewProp_rotQuatW_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSIK_InputMotionData_Statics::NewProp_posAccelX = { "posAccelX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_InputMotionData, posAccelX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_posAccelX_MetaData), NewProp_posAccelX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSIK_InputMotionData_Statics::NewProp_posAccelY = { "posAccelY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_InputMotionData, posAccelY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_posAccelY_MetaData), NewProp_posAccelY_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSIK_InputMotionData_Statics::NewProp_posAccelZ = { "posAccelZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_InputMotionData, posAccelZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_posAccelZ_MetaData), NewProp_posAccelZ_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSIK_InputMotionData_Statics::NewProp_rotVelX = { "rotVelX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_InputMotionData, rotVelX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rotVelX_MetaData), NewProp_rotVelX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSIK_InputMotionData_Statics::NewProp_rotVelY = { "rotVelY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_InputMotionData, rotVelY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rotVelY_MetaData), NewProp_rotVelY_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSIK_InputMotionData_Statics::NewProp_rotVelZ = { "rotVelZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_InputMotionData, rotVelZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rotVelZ_MetaData), NewProp_rotVelZ_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSIK_InputMotionData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_InputMotionData_Statics::NewProp_rotQuatX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_InputMotionData_Statics::NewProp_rotQuatY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_InputMotionData_Statics::NewProp_rotQuatZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_InputMotionData_Statics::NewProp_rotQuatW,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_InputMotionData_Statics::NewProp_posAccelX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_InputMotionData_Statics::NewProp_posAccelY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_InputMotionData_Statics::NewProp_posAccelZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_InputMotionData_Statics::NewProp_rotVelX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_InputMotionData_Statics::NewProp_rotVelY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_InputMotionData_Statics::NewProp_rotVelZ,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_InputMotionData_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSIK_InputMotionData Property Definitions ***************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSIK_InputMotionData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	&NewStructOps,
	"SIK_InputMotionData",
	Z_Construct_UScriptStruct_FSIK_InputMotionData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_InputMotionData_Statics::PropPointers),
	sizeof(FSIK_InputMotionData),
	alignof(FSIK_InputMotionData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_InputMotionData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSIK_InputMotionData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSIK_InputMotionData()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_InputMotionData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSIK_InputMotionData.InnerSingleton, Z_Construct_UScriptStruct_FSIK_InputMotionData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSIK_InputMotionData.InnerSingleton);
}
// ********** End ScriptStruct FSIK_InputMotionData ************************************************

// ********** Begin Enum ESIK_InputActionOrigin ****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESIK_InputActionOrigin;
static UEnum* ESIK_InputActionOrigin_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESIK_InputActionOrigin.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESIK_InputActionOrigin.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamIntegrationKit_ESIK_InputActionOrigin, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("ESIK_InputActionOrigin"));
	}
	return Z_Registration_Info_UEnum_ESIK_InputActionOrigin.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<ESIK_InputActionOrigin>()
{
	return ESIK_InputActionOrigin_StaticEnum();
}
struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_InputActionOrigin_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ESIK_InputActionOrigin_Count.Name", "ESIK_InputActionOrigin_Count" },
		{ "ESIK_InputActionOrigin_MaximumPossibleValue.Comment", "// If Steam has added support for new controllers origins will go here.\n" },
		{ "ESIK_InputActionOrigin_MaximumPossibleValue.Name", "ESIK_InputActionOrigin_MaximumPossibleValue" },
		{ "ESIK_InputActionOrigin_MaximumPossibleValue.ToolTip", "If Steam has added support for new controllers origins will go here." },
		{ "ESIK_InputActionOrigin_None.Comment", "// Steam Controller\n" },
		{ "ESIK_InputActionOrigin_None.Name", "ESIK_InputActionOrigin_None" },
		{ "ESIK_InputActionOrigin_None.ToolTip", "Steam Controller" },
		{ "ESIK_InputActionOrigin_PS4_CenterPad_Click.Name", "ESIK_InputActionOrigin_PS4_CenterPad_Click" },
		{ "ESIK_InputActionOrigin_PS4_CenterPad_DPadEast.Name", "ESIK_InputActionOrigin_PS4_CenterPad_DPadEast" },
		{ "ESIK_InputActionOrigin_PS4_CenterPad_DPadNorth.Name", "ESIK_InputActionOrigin_PS4_CenterPad_DPadNorth" },
		{ "ESIK_InputActionOrigin_PS4_CenterPad_DPadSouth.Name", "ESIK_InputActionOrigin_PS4_CenterPad_DPadSouth" },
		{ "ESIK_InputActionOrigin_PS4_CenterPad_DPadWest.Name", "ESIK_InputActionOrigin_PS4_CenterPad_DPadWest" },
		{ "ESIK_InputActionOrigin_PS4_CenterPad_Swipe.Name", "ESIK_InputActionOrigin_PS4_CenterPad_Swipe" },
		{ "ESIK_InputActionOrigin_PS4_CenterPad_Touch.Name", "ESIK_InputActionOrigin_PS4_CenterPad_Touch" },
		{ "ESIK_InputActionOrigin_PS4_Circle.Name", "ESIK_InputActionOrigin_PS4_Circle" },
		{ "ESIK_InputActionOrigin_PS4_DPad_East.Name", "ESIK_InputActionOrigin_PS4_DPad_East" },
		{ "ESIK_InputActionOrigin_PS4_DPad_Move.Name", "ESIK_InputActionOrigin_PS4_DPad_Move" },
		{ "ESIK_InputActionOrigin_PS4_DPad_North.Name", "ESIK_InputActionOrigin_PS4_DPad_North" },
		{ "ESIK_InputActionOrigin_PS4_DPad_South.Name", "ESIK_InputActionOrigin_PS4_DPad_South" },
		{ "ESIK_InputActionOrigin_PS4_DPad_West.Name", "ESIK_InputActionOrigin_PS4_DPad_West" },
		{ "ESIK_InputActionOrigin_PS4_Gyro_Move.Name", "ESIK_InputActionOrigin_PS4_Gyro_Move" },
		{ "ESIK_InputActionOrigin_PS4_Gyro_Pitch.Name", "ESIK_InputActionOrigin_PS4_Gyro_Pitch" },
		{ "ESIK_InputActionOrigin_PS4_Gyro_Roll.Name", "ESIK_InputActionOrigin_PS4_Gyro_Roll" },
		{ "ESIK_InputActionOrigin_PS4_Gyro_Yaw.Name", "ESIK_InputActionOrigin_PS4_Gyro_Yaw" },
		{ "ESIK_InputActionOrigin_PS4_LeftBumper.Name", "ESIK_InputActionOrigin_PS4_LeftBumper" },
		{ "ESIK_InputActionOrigin_PS4_LeftPad_Click.Name", "ESIK_InputActionOrigin_PS4_LeftPad_Click" },
		{ "ESIK_InputActionOrigin_PS4_LeftPad_DPadEast.Name", "ESIK_InputActionOrigin_PS4_LeftPad_DPadEast" },
		{ "ESIK_InputActionOrigin_PS4_LeftPad_DPadNorth.Name", "ESIK_InputActionOrigin_PS4_LeftPad_DPadNorth" },
		{ "ESIK_InputActionOrigin_PS4_LeftPad_DPadSouth.Name", "ESIK_InputActionOrigin_PS4_LeftPad_DPadSouth" },
		{ "ESIK_InputActionOrigin_PS4_LeftPad_DPadWest.Name", "ESIK_InputActionOrigin_PS4_LeftPad_DPadWest" },
		{ "ESIK_InputActionOrigin_PS4_LeftPad_Swipe.Name", "ESIK_InputActionOrigin_PS4_LeftPad_Swipe" },
		{ "ESIK_InputActionOrigin_PS4_LeftPad_Touch.Comment", "//Back\n" },
		{ "ESIK_InputActionOrigin_PS4_LeftPad_Touch.Name", "ESIK_InputActionOrigin_PS4_LeftPad_Touch" },
		{ "ESIK_InputActionOrigin_PS4_LeftPad_Touch.ToolTip", "Back" },
		{ "ESIK_InputActionOrigin_PS4_LeftStick_Click.Name", "ESIK_InputActionOrigin_PS4_LeftStick_Click" },
		{ "ESIK_InputActionOrigin_PS4_LeftStick_DPadEast.Name", "ESIK_InputActionOrigin_PS4_LeftStick_DPadEast" },
		{ "ESIK_InputActionOrigin_PS4_LeftStick_DPadNorth.Name", "ESIK_InputActionOrigin_PS4_LeftStick_DPadNorth" },
		{ "ESIK_InputActionOrigin_PS4_LeftStick_DPadSouth.Name", "ESIK_InputActionOrigin_PS4_LeftStick_DPadSouth" },
		{ "ESIK_InputActionOrigin_PS4_LeftStick_DPadWest.Name", "ESIK_InputActionOrigin_PS4_LeftStick_DPadWest" },
		{ "ESIK_InputActionOrigin_PS4_LeftStick_Move.Name", "ESIK_InputActionOrigin_PS4_LeftStick_Move" },
		{ "ESIK_InputActionOrigin_PS4_LeftTrigger_Click.Name", "ESIK_InputActionOrigin_PS4_LeftTrigger_Click" },
		{ "ESIK_InputActionOrigin_PS4_LeftTrigger_Pull.Name", "ESIK_InputActionOrigin_PS4_LeftTrigger_Pull" },
		{ "ESIK_InputActionOrigin_PS4_Options.Name", "ESIK_InputActionOrigin_PS4_Options" },
		{ "ESIK_InputActionOrigin_PS4_Reserved1.Name", "ESIK_InputActionOrigin_PS4_Reserved1" },
		{ "ESIK_InputActionOrigin_PS4_Reserved10.Name", "ESIK_InputActionOrigin_PS4_Reserved10" },
		{ "ESIK_InputActionOrigin_PS4_Reserved2.Name", "ESIK_InputActionOrigin_PS4_Reserved2" },
		{ "ESIK_InputActionOrigin_PS4_Reserved3.Name", "ESIK_InputActionOrigin_PS4_Reserved3" },
		{ "ESIK_InputActionOrigin_PS4_Reserved4.Name", "ESIK_InputActionOrigin_PS4_Reserved4" },
		{ "ESIK_InputActionOrigin_PS4_Reserved5.Name", "ESIK_InputActionOrigin_PS4_Reserved5" },
		{ "ESIK_InputActionOrigin_PS4_Reserved6.Name", "ESIK_InputActionOrigin_PS4_Reserved6" },
		{ "ESIK_InputActionOrigin_PS4_Reserved7.Name", "ESIK_InputActionOrigin_PS4_Reserved7" },
		{ "ESIK_InputActionOrigin_PS4_Reserved8.Name", "ESIK_InputActionOrigin_PS4_Reserved8" },
		{ "ESIK_InputActionOrigin_PS4_Reserved9.Name", "ESIK_InputActionOrigin_PS4_Reserved9" },
		{ "ESIK_InputActionOrigin_PS4_RightBumper.Name", "ESIK_InputActionOrigin_PS4_RightBumper" },
		{ "ESIK_InputActionOrigin_PS4_RightPad_Click.Name", "ESIK_InputActionOrigin_PS4_RightPad_Click" },
		{ "ESIK_InputActionOrigin_PS4_RightPad_DPadEast.Name", "ESIK_InputActionOrigin_PS4_RightPad_DPadEast" },
		{ "ESIK_InputActionOrigin_PS4_RightPad_DPadNorth.Name", "ESIK_InputActionOrigin_PS4_RightPad_DPadNorth" },
		{ "ESIK_InputActionOrigin_PS4_RightPad_DPadSouth.Name", "ESIK_InputActionOrigin_PS4_RightPad_DPadSouth" },
		{ "ESIK_InputActionOrigin_PS4_RightPad_DPadWest.Name", "ESIK_InputActionOrigin_PS4_RightPad_DPadWest" },
		{ "ESIK_InputActionOrigin_PS4_RightPad_Swipe.Name", "ESIK_InputActionOrigin_PS4_RightPad_Swipe" },
		{ "ESIK_InputActionOrigin_PS4_RightPad_Touch.Name", "ESIK_InputActionOrigin_PS4_RightPad_Touch" },
		{ "ESIK_InputActionOrigin_PS4_RightStick_Click.Name", "ESIK_InputActionOrigin_PS4_RightStick_Click" },
		{ "ESIK_InputActionOrigin_PS4_RightStick_DPadEast.Name", "ESIK_InputActionOrigin_PS4_RightStick_DPadEast" },
		{ "ESIK_InputActionOrigin_PS4_RightStick_DPadNorth.Name", "ESIK_InputActionOrigin_PS4_RightStick_DPadNorth" },
		{ "ESIK_InputActionOrigin_PS4_RightStick_DPadSouth.Name", "ESIK_InputActionOrigin_PS4_RightStick_DPadSouth" },
		{ "ESIK_InputActionOrigin_PS4_RightStick_DPadWest.Name", "ESIK_InputActionOrigin_PS4_RightStick_DPadWest" },
		{ "ESIK_InputActionOrigin_PS4_RightStick_Move.Name", "ESIK_InputActionOrigin_PS4_RightStick_Move" },
		{ "ESIK_InputActionOrigin_PS4_RightTrigger_Click.Name", "ESIK_InputActionOrigin_PS4_RightTrigger_Click" },
		{ "ESIK_InputActionOrigin_PS4_RightTrigger_Pull.Name", "ESIK_InputActionOrigin_PS4_RightTrigger_Pull" },
		{ "ESIK_InputActionOrigin_PS4_Share.Comment", "//Start\n" },
		{ "ESIK_InputActionOrigin_PS4_Share.Name", "ESIK_InputActionOrigin_PS4_Share" },
		{ "ESIK_InputActionOrigin_PS4_Share.ToolTip", "Start" },
		{ "ESIK_InputActionOrigin_PS4_Square.Name", "ESIK_InputActionOrigin_PS4_Square" },
		{ "ESIK_InputActionOrigin_PS4_Triangle.Name", "ESIK_InputActionOrigin_PS4_Triangle" },
		{ "ESIK_InputActionOrigin_PS4_X.Comment", "// PS4 Dual Shock\n" },
		{ "ESIK_InputActionOrigin_PS4_X.Name", "ESIK_InputActionOrigin_PS4_X" },
		{ "ESIK_InputActionOrigin_PS4_X.ToolTip", "PS4 Dual Shock" },
		{ "ESIK_InputActionOrigin_PS5_CenterPad_Click.Name", "ESIK_InputActionOrigin_PS5_CenterPad_Click" },
		{ "ESIK_InputActionOrigin_PS5_CenterPad_DPadEast.Name", "ESIK_InputActionOrigin_PS5_CenterPad_DPadEast" },
		{ "ESIK_InputActionOrigin_PS5_CenterPad_DPadNorth.Name", "ESIK_InputActionOrigin_PS5_CenterPad_DPadNorth" },
		{ "ESIK_InputActionOrigin_PS5_CenterPad_DPadSouth.Name", "ESIK_InputActionOrigin_PS5_CenterPad_DPadSouth" },
		{ "ESIK_InputActionOrigin_PS5_CenterPad_DPadWest.Name", "ESIK_InputActionOrigin_PS5_CenterPad_DPadWest" },
		{ "ESIK_InputActionOrigin_PS5_CenterPad_Swipe.Name", "ESIK_InputActionOrigin_PS5_CenterPad_Swipe" },
		{ "ESIK_InputActionOrigin_PS5_CenterPad_Touch.Name", "ESIK_InputActionOrigin_PS5_CenterPad_Touch" },
		{ "ESIK_InputActionOrigin_PS5_Circle.Name", "ESIK_InputActionOrigin_PS5_Circle" },
		{ "ESIK_InputActionOrigin_PS5_Create.Comment", "//Start\n" },
		{ "ESIK_InputActionOrigin_PS5_Create.Name", "ESIK_InputActionOrigin_PS5_Create" },
		{ "ESIK_InputActionOrigin_PS5_Create.ToolTip", "Start" },
		{ "ESIK_InputActionOrigin_PS5_DPad_East.Name", "ESIK_InputActionOrigin_PS5_DPad_East" },
		{ "ESIK_InputActionOrigin_PS5_DPad_Move.Name", "ESIK_InputActionOrigin_PS5_DPad_Move" },
		{ "ESIK_InputActionOrigin_PS5_DPad_North.Name", "ESIK_InputActionOrigin_PS5_DPad_North" },
		{ "ESIK_InputActionOrigin_PS5_DPad_South.Name", "ESIK_InputActionOrigin_PS5_DPad_South" },
		{ "ESIK_InputActionOrigin_PS5_DPad_West.Name", "ESIK_InputActionOrigin_PS5_DPad_West" },
		{ "ESIK_InputActionOrigin_PS5_Gyro_Move.Name", "ESIK_InputActionOrigin_PS5_Gyro_Move" },
		{ "ESIK_InputActionOrigin_PS5_Gyro_Pitch.Name", "ESIK_InputActionOrigin_PS5_Gyro_Pitch" },
		{ "ESIK_InputActionOrigin_PS5_Gyro_Roll.Name", "ESIK_InputActionOrigin_PS5_Gyro_Roll" },
		{ "ESIK_InputActionOrigin_PS5_Gyro_Yaw.Name", "ESIK_InputActionOrigin_PS5_Gyro_Yaw" },
		{ "ESIK_InputActionOrigin_PS5_LeftBumper.Name", "ESIK_InputActionOrigin_PS5_LeftBumper" },
		{ "ESIK_InputActionOrigin_PS5_LeftFn.Name", "ESIK_InputActionOrigin_PS5_LeftFn" },
		{ "ESIK_InputActionOrigin_PS5_LeftGrip.Name", "ESIK_InputActionOrigin_PS5_LeftGrip" },
		{ "ESIK_InputActionOrigin_PS5_LeftPad_Click.Name", "ESIK_InputActionOrigin_PS5_LeftPad_Click" },
		{ "ESIK_InputActionOrigin_PS5_LeftPad_DPadEast.Name", "ESIK_InputActionOrigin_PS5_LeftPad_DPadEast" },
		{ "ESIK_InputActionOrigin_PS5_LeftPad_DPadNorth.Name", "ESIK_InputActionOrigin_PS5_LeftPad_DPadNorth" },
		{ "ESIK_InputActionOrigin_PS5_LeftPad_DPadSouth.Name", "ESIK_InputActionOrigin_PS5_LeftPad_DPadSouth" },
		{ "ESIK_InputActionOrigin_PS5_LeftPad_DPadWest.Name", "ESIK_InputActionOrigin_PS5_LeftPad_DPadWest" },
		{ "ESIK_InputActionOrigin_PS5_LeftPad_Swipe.Name", "ESIK_InputActionOrigin_PS5_LeftPad_Swipe" },
		{ "ESIK_InputActionOrigin_PS5_LeftPad_Touch.Name", "ESIK_InputActionOrigin_PS5_LeftPad_Touch" },
		{ "ESIK_InputActionOrigin_PS5_LeftStick_Click.Name", "ESIK_InputActionOrigin_PS5_LeftStick_Click" },
		{ "ESIK_InputActionOrigin_PS5_LeftStick_DPadEast.Name", "ESIK_InputActionOrigin_PS5_LeftStick_DPadEast" },
		{ "ESIK_InputActionOrigin_PS5_LeftStick_DPadNorth.Name", "ESIK_InputActionOrigin_PS5_LeftStick_DPadNorth" },
		{ "ESIK_InputActionOrigin_PS5_LeftStick_DPadSouth.Name", "ESIK_InputActionOrigin_PS5_LeftStick_DPadSouth" },
		{ "ESIK_InputActionOrigin_PS5_LeftStick_DPadWest.Name", "ESIK_InputActionOrigin_PS5_LeftStick_DPadWest" },
		{ "ESIK_InputActionOrigin_PS5_LeftStick_Move.Name", "ESIK_InputActionOrigin_PS5_LeftStick_Move" },
		{ "ESIK_InputActionOrigin_PS5_LeftTrigger_Click.Name", "ESIK_InputActionOrigin_PS5_LeftTrigger_Click" },
		{ "ESIK_InputActionOrigin_PS5_LeftTrigger_Pull.Name", "ESIK_InputActionOrigin_PS5_LeftTrigger_Pull" },
		{ "ESIK_InputActionOrigin_PS5_Mute.Comment", "//Back\n" },
		{ "ESIK_InputActionOrigin_PS5_Mute.Name", "ESIK_InputActionOrigin_PS5_Mute" },
		{ "ESIK_InputActionOrigin_PS5_Mute.ToolTip", "Back" },
		{ "ESIK_InputActionOrigin_PS5_Option.Name", "ESIK_InputActionOrigin_PS5_Option" },
		{ "ESIK_InputActionOrigin_PS5_Reserved10.Name", "ESIK_InputActionOrigin_PS5_Reserved10" },
		{ "ESIK_InputActionOrigin_PS5_Reserved11.Name", "ESIK_InputActionOrigin_PS5_Reserved11" },
		{ "ESIK_InputActionOrigin_PS5_Reserved12.Name", "ESIK_InputActionOrigin_PS5_Reserved12" },
		{ "ESIK_InputActionOrigin_PS5_Reserved13.Name", "ESIK_InputActionOrigin_PS5_Reserved13" },
		{ "ESIK_InputActionOrigin_PS5_Reserved14.Name", "ESIK_InputActionOrigin_PS5_Reserved14" },
		{ "ESIK_InputActionOrigin_PS5_Reserved15.Name", "ESIK_InputActionOrigin_PS5_Reserved15" },
		{ "ESIK_InputActionOrigin_PS5_Reserved16.Name", "ESIK_InputActionOrigin_PS5_Reserved16" },
		{ "ESIK_InputActionOrigin_PS5_Reserved17.Name", "ESIK_InputActionOrigin_PS5_Reserved17" },
		{ "ESIK_InputActionOrigin_PS5_Reserved18.Name", "ESIK_InputActionOrigin_PS5_Reserved18" },
		{ "ESIK_InputActionOrigin_PS5_Reserved19.Name", "ESIK_InputActionOrigin_PS5_Reserved19" },
		{ "ESIK_InputActionOrigin_PS5_Reserved20.Name", "ESIK_InputActionOrigin_PS5_Reserved20" },
		{ "ESIK_InputActionOrigin_PS5_Reserved5.Name", "ESIK_InputActionOrigin_PS5_Reserved5" },
		{ "ESIK_InputActionOrigin_PS5_Reserved6.Name", "ESIK_InputActionOrigin_PS5_Reserved6" },
		{ "ESIK_InputActionOrigin_PS5_Reserved7.Name", "ESIK_InputActionOrigin_PS5_Reserved7" },
		{ "ESIK_InputActionOrigin_PS5_Reserved8.Name", "ESIK_InputActionOrigin_PS5_Reserved8" },
		{ "ESIK_InputActionOrigin_PS5_Reserved9.Name", "ESIK_InputActionOrigin_PS5_Reserved9" },
		{ "ESIK_InputActionOrigin_PS5_RightBumper.Name", "ESIK_InputActionOrigin_PS5_RightBumper" },
		{ "ESIK_InputActionOrigin_PS5_RightFn.Name", "ESIK_InputActionOrigin_PS5_RightFn" },
		{ "ESIK_InputActionOrigin_PS5_RightGrip.Name", "ESIK_InputActionOrigin_PS5_RightGrip" },
		{ "ESIK_InputActionOrigin_PS5_RightPad_Click.Name", "ESIK_InputActionOrigin_PS5_RightPad_Click" },
		{ "ESIK_InputActionOrigin_PS5_RightPad_DPadEast.Name", "ESIK_InputActionOrigin_PS5_RightPad_DPadEast" },
		{ "ESIK_InputActionOrigin_PS5_RightPad_DPadNorth.Name", "ESIK_InputActionOrigin_PS5_RightPad_DPadNorth" },
		{ "ESIK_InputActionOrigin_PS5_RightPad_DPadSouth.Name", "ESIK_InputActionOrigin_PS5_RightPad_DPadSouth" },
		{ "ESIK_InputActionOrigin_PS5_RightPad_DPadWest.Name", "ESIK_InputActionOrigin_PS5_RightPad_DPadWest" },
		{ "ESIK_InputActionOrigin_PS5_RightPad_Swipe.Name", "ESIK_InputActionOrigin_PS5_RightPad_Swipe" },
		{ "ESIK_InputActionOrigin_PS5_RightPad_Touch.Name", "ESIK_InputActionOrigin_PS5_RightPad_Touch" },
		{ "ESIK_InputActionOrigin_PS5_RightStick_Click.Name", "ESIK_InputActionOrigin_PS5_RightStick_Click" },
		{ "ESIK_InputActionOrigin_PS5_RightStick_DPadEast.Name", "ESIK_InputActionOrigin_PS5_RightStick_DPadEast" },
		{ "ESIK_InputActionOrigin_PS5_RightStick_DPadNorth.Name", "ESIK_InputActionOrigin_PS5_RightStick_DPadNorth" },
		{ "ESIK_InputActionOrigin_PS5_RightStick_DPadSouth.Name", "ESIK_InputActionOrigin_PS5_RightStick_DPadSouth" },
		{ "ESIK_InputActionOrigin_PS5_RightStick_DPadWest.Name", "ESIK_InputActionOrigin_PS5_RightStick_DPadWest" },
		{ "ESIK_InputActionOrigin_PS5_RightStick_Move.Name", "ESIK_InputActionOrigin_PS5_RightStick_Move" },
		{ "ESIK_InputActionOrigin_PS5_RightTrigger_Click.Name", "ESIK_InputActionOrigin_PS5_RightTrigger_Click" },
		{ "ESIK_InputActionOrigin_PS5_RightTrigger_Pull.Name", "ESIK_InputActionOrigin_PS5_RightTrigger_Pull" },
		{ "ESIK_InputActionOrigin_PS5_Square.Name", "ESIK_InputActionOrigin_PS5_Square" },
		{ "ESIK_InputActionOrigin_PS5_Triangle.Name", "ESIK_InputActionOrigin_PS5_Triangle" },
		{ "ESIK_InputActionOrigin_PS5_X.Comment", "// Added in SDK 1.51\n" },
		{ "ESIK_InputActionOrigin_PS5_X.Name", "ESIK_InputActionOrigin_PS5_X" },
		{ "ESIK_InputActionOrigin_PS5_X.ToolTip", "Added in SDK 1.51" },
		{ "ESIK_InputActionOrigin_SteamController_A.Name", "ESIK_InputActionOrigin_SteamController_A" },
		{ "ESIK_InputActionOrigin_SteamController_B.Name", "ESIK_InputActionOrigin_SteamController_B" },
		{ "ESIK_InputActionOrigin_SteamController_Back.Name", "ESIK_InputActionOrigin_SteamController_Back" },
		{ "ESIK_InputActionOrigin_SteamController_Gyro_Move.Name", "ESIK_InputActionOrigin_SteamController_Gyro_Move" },
		{ "ESIK_InputActionOrigin_SteamController_Gyro_Pitch.Name", "ESIK_InputActionOrigin_SteamController_Gyro_Pitch" },
		{ "ESIK_InputActionOrigin_SteamController_Gyro_Roll.Name", "ESIK_InputActionOrigin_SteamController_Gyro_Roll" },
		{ "ESIK_InputActionOrigin_SteamController_Gyro_Yaw.Name", "ESIK_InputActionOrigin_SteamController_Gyro_Yaw" },
		{ "ESIK_InputActionOrigin_SteamController_LeftBumper.Name", "ESIK_InputActionOrigin_SteamController_LeftBumper" },
		{ "ESIK_InputActionOrigin_SteamController_LeftGrip.Name", "ESIK_InputActionOrigin_SteamController_LeftGrip" },
		{ "ESIK_InputActionOrigin_SteamController_LeftPad_Click.Name", "ESIK_InputActionOrigin_SteamController_LeftPad_Click" },
		{ "ESIK_InputActionOrigin_SteamController_LeftPad_DPadEast.Name", "ESIK_InputActionOrigin_SteamController_LeftPad_DPadEast" },
		{ "ESIK_InputActionOrigin_SteamController_LeftPad_DPadNorth.Name", "ESIK_InputActionOrigin_SteamController_LeftPad_DPadNorth" },
		{ "ESIK_InputActionOrigin_SteamController_LeftPad_DPadSouth.Name", "ESIK_InputActionOrigin_SteamController_LeftPad_DPadSouth" },
		{ "ESIK_InputActionOrigin_SteamController_LeftPad_DPadWest.Name", "ESIK_InputActionOrigin_SteamController_LeftPad_DPadWest" },
		{ "ESIK_InputActionOrigin_SteamController_LeftPad_Swipe.Name", "ESIK_InputActionOrigin_SteamController_LeftPad_Swipe" },
		{ "ESIK_InputActionOrigin_SteamController_LeftPad_Touch.Name", "ESIK_InputActionOrigin_SteamController_LeftPad_Touch" },
		{ "ESIK_InputActionOrigin_SteamController_LeftStick_Click.Name", "ESIK_InputActionOrigin_SteamController_LeftStick_Click" },
		{ "ESIK_InputActionOrigin_SteamController_LeftStick_DPadEast.Name", "ESIK_InputActionOrigin_SteamController_LeftStick_DPadEast" },
		{ "ESIK_InputActionOrigin_SteamController_LeftStick_DPadNorth.Name", "ESIK_InputActionOrigin_SteamController_LeftStick_DPadNorth" },
		{ "ESIK_InputActionOrigin_SteamController_LeftStick_DPadSouth.Name", "ESIK_InputActionOrigin_SteamController_LeftStick_DPadSouth" },
		{ "ESIK_InputActionOrigin_SteamController_LeftStick_DPadWest.Name", "ESIK_InputActionOrigin_SteamController_LeftStick_DPadWest" },
		{ "ESIK_InputActionOrigin_SteamController_LeftStick_Move.Name", "ESIK_InputActionOrigin_SteamController_LeftStick_Move" },
		{ "ESIK_InputActionOrigin_SteamController_LeftTrigger_Click.Name", "ESIK_InputActionOrigin_SteamController_LeftTrigger_Click" },
		{ "ESIK_InputActionOrigin_SteamController_LeftTrigger_Pull.Name", "ESIK_InputActionOrigin_SteamController_LeftTrigger_Pull" },
		{ "ESIK_InputActionOrigin_SteamController_Reserved0.Name", "ESIK_InputActionOrigin_SteamController_Reserved0" },
		{ "ESIK_InputActionOrigin_SteamController_Reserved1.Name", "ESIK_InputActionOrigin_SteamController_Reserved1" },
		{ "ESIK_InputActionOrigin_SteamController_Reserved10.Name", "ESIK_InputActionOrigin_SteamController_Reserved10" },
		{ "ESIK_InputActionOrigin_SteamController_Reserved2.Name", "ESIK_InputActionOrigin_SteamController_Reserved2" },
		{ "ESIK_InputActionOrigin_SteamController_Reserved3.Name", "ESIK_InputActionOrigin_SteamController_Reserved3" },
		{ "ESIK_InputActionOrigin_SteamController_Reserved4.Name", "ESIK_InputActionOrigin_SteamController_Reserved4" },
		{ "ESIK_InputActionOrigin_SteamController_Reserved5.Name", "ESIK_InputActionOrigin_SteamController_Reserved5" },
		{ "ESIK_InputActionOrigin_SteamController_Reserved6.Name", "ESIK_InputActionOrigin_SteamController_Reserved6" },
		{ "ESIK_InputActionOrigin_SteamController_Reserved7.Name", "ESIK_InputActionOrigin_SteamController_Reserved7" },
		{ "ESIK_InputActionOrigin_SteamController_Reserved8.Name", "ESIK_InputActionOrigin_SteamController_Reserved8" },
		{ "ESIK_InputActionOrigin_SteamController_Reserved9.Name", "ESIK_InputActionOrigin_SteamController_Reserved9" },
		{ "ESIK_InputActionOrigin_SteamController_RightBumper.Name", "ESIK_InputActionOrigin_SteamController_RightBumper" },
		{ "ESIK_InputActionOrigin_SteamController_RightGrip.Name", "ESIK_InputActionOrigin_SteamController_RightGrip" },
		{ "ESIK_InputActionOrigin_SteamController_RightPad_Click.Name", "ESIK_InputActionOrigin_SteamController_RightPad_Click" },
		{ "ESIK_InputActionOrigin_SteamController_RightPad_DPadEast.Name", "ESIK_InputActionOrigin_SteamController_RightPad_DPadEast" },
		{ "ESIK_InputActionOrigin_SteamController_RightPad_DPadNorth.Name", "ESIK_InputActionOrigin_SteamController_RightPad_DPadNorth" },
		{ "ESIK_InputActionOrigin_SteamController_RightPad_DPadSouth.Name", "ESIK_InputActionOrigin_SteamController_RightPad_DPadSouth" },
		{ "ESIK_InputActionOrigin_SteamController_RightPad_DPadWest.Name", "ESIK_InputActionOrigin_SteamController_RightPad_DPadWest" },
		{ "ESIK_InputActionOrigin_SteamController_RightPad_Swipe.Name", "ESIK_InputActionOrigin_SteamController_RightPad_Swipe" },
		{ "ESIK_InputActionOrigin_SteamController_RightPad_Touch.Name", "ESIK_InputActionOrigin_SteamController_RightPad_Touch" },
		{ "ESIK_InputActionOrigin_SteamController_RightTrigger_Click.Name", "ESIK_InputActionOrigin_SteamController_RightTrigger_Click" },
		{ "ESIK_InputActionOrigin_SteamController_RightTrigger_Pull.Name", "ESIK_InputActionOrigin_SteamController_RightTrigger_Pull" },
		{ "ESIK_InputActionOrigin_SteamController_Start.Name", "ESIK_InputActionOrigin_SteamController_Start" },
		{ "ESIK_InputActionOrigin_SteamController_X.Name", "ESIK_InputActionOrigin_SteamController_X" },
		{ "ESIK_InputActionOrigin_SteamController_Y.Name", "ESIK_InputActionOrigin_SteamController_Y" },
		{ "ESIK_InputActionOrigin_SteamDeck_A.Comment", "// Added in SDK 1.53\n" },
		{ "ESIK_InputActionOrigin_SteamDeck_A.Name", "ESIK_InputActionOrigin_SteamDeck_A" },
		{ "ESIK_InputActionOrigin_SteamDeck_A.ToolTip", "Added in SDK 1.53" },
		{ "ESIK_InputActionOrigin_SteamDeck_B.Name", "ESIK_InputActionOrigin_SteamDeck_B" },
		{ "ESIK_InputActionOrigin_SteamDeck_DPad_East.Name", "ESIK_InputActionOrigin_SteamDeck_DPad_East" },
		{ "ESIK_InputActionOrigin_SteamDeck_DPad_Move.Name", "ESIK_InputActionOrigin_SteamDeck_DPad_Move" },
		{ "ESIK_InputActionOrigin_SteamDeck_DPad_North.Name", "ESIK_InputActionOrigin_SteamDeck_DPad_North" },
		{ "ESIK_InputActionOrigin_SteamDeck_DPad_South.Name", "ESIK_InputActionOrigin_SteamDeck_DPad_South" },
		{ "ESIK_InputActionOrigin_SteamDeck_DPad_West.Name", "ESIK_InputActionOrigin_SteamDeck_DPad_West" },
		{ "ESIK_InputActionOrigin_SteamDeck_Gyro_Move.Name", "ESIK_InputActionOrigin_SteamDeck_Gyro_Move" },
		{ "ESIK_InputActionOrigin_SteamDeck_Gyro_Pitch.Name", "ESIK_InputActionOrigin_SteamDeck_Gyro_Pitch" },
		{ "ESIK_InputActionOrigin_SteamDeck_Gyro_Roll.Name", "ESIK_InputActionOrigin_SteamDeck_Gyro_Roll" },
		{ "ESIK_InputActionOrigin_SteamDeck_Gyro_Yaw.Name", "ESIK_InputActionOrigin_SteamDeck_Gyro_Yaw" },
		{ "ESIK_InputActionOrigin_SteamDeck_L1.Name", "ESIK_InputActionOrigin_SteamDeck_L1" },
		{ "ESIK_InputActionOrigin_SteamDeck_L2.Name", "ESIK_InputActionOrigin_SteamDeck_L2" },
		{ "ESIK_InputActionOrigin_SteamDeck_L2_SoftPull.Name", "ESIK_InputActionOrigin_SteamDeck_L2_SoftPull" },
		{ "ESIK_InputActionOrigin_SteamDeck_L3.Name", "ESIK_InputActionOrigin_SteamDeck_L3" },
		{ "ESIK_InputActionOrigin_SteamDeck_L4.Name", "ESIK_InputActionOrigin_SteamDeck_L4" },
		{ "ESIK_InputActionOrigin_SteamDeck_L5.Name", "ESIK_InputActionOrigin_SteamDeck_L5" },
		{ "ESIK_InputActionOrigin_SteamDeck_LeftPad_Click.Name", "ESIK_InputActionOrigin_SteamDeck_LeftPad_Click" },
		{ "ESIK_InputActionOrigin_SteamDeck_LeftPad_DPadEast.Name", "ESIK_InputActionOrigin_SteamDeck_LeftPad_DPadEast" },
		{ "ESIK_InputActionOrigin_SteamDeck_LeftPad_DPadNorth.Name", "ESIK_InputActionOrigin_SteamDeck_LeftPad_DPadNorth" },
		{ "ESIK_InputActionOrigin_SteamDeck_LeftPad_DPadSouth.Name", "ESIK_InputActionOrigin_SteamDeck_LeftPad_DPadSouth" },
		{ "ESIK_InputActionOrigin_SteamDeck_LeftPad_DPadWest.Name", "ESIK_InputActionOrigin_SteamDeck_LeftPad_DPadWest" },
		{ "ESIK_InputActionOrigin_SteamDeck_LeftPad_Swipe.Name", "ESIK_InputActionOrigin_SteamDeck_LeftPad_Swipe" },
		{ "ESIK_InputActionOrigin_SteamDeck_LeftPad_Touch.Name", "ESIK_InputActionOrigin_SteamDeck_LeftPad_Touch" },
		{ "ESIK_InputActionOrigin_SteamDeck_LeftStick_DPadEast.Name", "ESIK_InputActionOrigin_SteamDeck_LeftStick_DPadEast" },
		{ "ESIK_InputActionOrigin_SteamDeck_LeftStick_DPadNorth.Name", "ESIK_InputActionOrigin_SteamDeck_LeftStick_DPadNorth" },
		{ "ESIK_InputActionOrigin_SteamDeck_LeftStick_DPadSouth.Name", "ESIK_InputActionOrigin_SteamDeck_LeftStick_DPadSouth" },
		{ "ESIK_InputActionOrigin_SteamDeck_LeftStick_DPadWest.Name", "ESIK_InputActionOrigin_SteamDeck_LeftStick_DPadWest" },
		{ "ESIK_InputActionOrigin_SteamDeck_LeftStick_Move.Name", "ESIK_InputActionOrigin_SteamDeck_LeftStick_Move" },
		{ "ESIK_InputActionOrigin_SteamDeck_LeftStick_Touch.Name", "ESIK_InputActionOrigin_SteamDeck_LeftStick_Touch" },
		{ "ESIK_InputActionOrigin_SteamDeck_Menu.Name", "ESIK_InputActionOrigin_SteamDeck_Menu" },
		{ "ESIK_InputActionOrigin_SteamDeck_R1.Name", "ESIK_InputActionOrigin_SteamDeck_R1" },
		{ "ESIK_InputActionOrigin_SteamDeck_R2.Name", "ESIK_InputActionOrigin_SteamDeck_R2" },
		{ "ESIK_InputActionOrigin_SteamDeck_R2_SoftPull.Name", "ESIK_InputActionOrigin_SteamDeck_R2_SoftPull" },
		{ "ESIK_InputActionOrigin_SteamDeck_R3.Name", "ESIK_InputActionOrigin_SteamDeck_R3" },
		{ "ESIK_InputActionOrigin_SteamDeck_R4.Name", "ESIK_InputActionOrigin_SteamDeck_R4" },
		{ "ESIK_InputActionOrigin_SteamDeck_R5.Name", "ESIK_InputActionOrigin_SteamDeck_R5" },
		{ "ESIK_InputActionOrigin_SteamDeck_Reserved1.Name", "ESIK_InputActionOrigin_SteamDeck_Reserved1" },
		{ "ESIK_InputActionOrigin_SteamDeck_Reserved10.Name", "ESIK_InputActionOrigin_SteamDeck_Reserved10" },
		{ "ESIK_InputActionOrigin_SteamDeck_Reserved11.Name", "ESIK_InputActionOrigin_SteamDeck_Reserved11" },
		{ "ESIK_InputActionOrigin_SteamDeck_Reserved12.Name", "ESIK_InputActionOrigin_SteamDeck_Reserved12" },
		{ "ESIK_InputActionOrigin_SteamDeck_Reserved13.Name", "ESIK_InputActionOrigin_SteamDeck_Reserved13" },
		{ "ESIK_InputActionOrigin_SteamDeck_Reserved14.Name", "ESIK_InputActionOrigin_SteamDeck_Reserved14" },
		{ "ESIK_InputActionOrigin_SteamDeck_Reserved15.Name", "ESIK_InputActionOrigin_SteamDeck_Reserved15" },
		{ "ESIK_InputActionOrigin_SteamDeck_Reserved16.Name", "ESIK_InputActionOrigin_SteamDeck_Reserved16" },
		{ "ESIK_InputActionOrigin_SteamDeck_Reserved17.Name", "ESIK_InputActionOrigin_SteamDeck_Reserved17" },
		{ "ESIK_InputActionOrigin_SteamDeck_Reserved18.Name", "ESIK_InputActionOrigin_SteamDeck_Reserved18" },
		{ "ESIK_InputActionOrigin_SteamDeck_Reserved19.Name", "ESIK_InputActionOrigin_SteamDeck_Reserved19" },
		{ "ESIK_InputActionOrigin_SteamDeck_Reserved2.Name", "ESIK_InputActionOrigin_SteamDeck_Reserved2" },
		{ "ESIK_InputActionOrigin_SteamDeck_Reserved20.Name", "ESIK_InputActionOrigin_SteamDeck_Reserved20" },
		{ "ESIK_InputActionOrigin_SteamDeck_Reserved3.Name", "ESIK_InputActionOrigin_SteamDeck_Reserved3" },
		{ "ESIK_InputActionOrigin_SteamDeck_Reserved4.Name", "ESIK_InputActionOrigin_SteamDeck_Reserved4" },
		{ "ESIK_InputActionOrigin_SteamDeck_Reserved5.Name", "ESIK_InputActionOrigin_SteamDeck_Reserved5" },
		{ "ESIK_InputActionOrigin_SteamDeck_Reserved6.Name", "ESIK_InputActionOrigin_SteamDeck_Reserved6" },
		{ "ESIK_InputActionOrigin_SteamDeck_Reserved7.Name", "ESIK_InputActionOrigin_SteamDeck_Reserved7" },
		{ "ESIK_InputActionOrigin_SteamDeck_Reserved8.Name", "ESIK_InputActionOrigin_SteamDeck_Reserved8" },
		{ "ESIK_InputActionOrigin_SteamDeck_Reserved9.Name", "ESIK_InputActionOrigin_SteamDeck_Reserved9" },
		{ "ESIK_InputActionOrigin_SteamDeck_RightPad_Click.Name", "ESIK_InputActionOrigin_SteamDeck_RightPad_Click" },
		{ "ESIK_InputActionOrigin_SteamDeck_RightPad_DPadEast.Name", "ESIK_InputActionOrigin_SteamDeck_RightPad_DPadEast" },
		{ "ESIK_InputActionOrigin_SteamDeck_RightPad_DPadNorth.Name", "ESIK_InputActionOrigin_SteamDeck_RightPad_DPadNorth" },
		{ "ESIK_InputActionOrigin_SteamDeck_RightPad_DPadSouth.Name", "ESIK_InputActionOrigin_SteamDeck_RightPad_DPadSouth" },
		{ "ESIK_InputActionOrigin_SteamDeck_RightPad_DPadWest.Name", "ESIK_InputActionOrigin_SteamDeck_RightPad_DPadWest" },
		{ "ESIK_InputActionOrigin_SteamDeck_RightPad_Swipe.Name", "ESIK_InputActionOrigin_SteamDeck_RightPad_Swipe" },
		{ "ESIK_InputActionOrigin_SteamDeck_RightPad_Touch.Name", "ESIK_InputActionOrigin_SteamDeck_RightPad_Touch" },
		{ "ESIK_InputActionOrigin_SteamDeck_RightStick_DPadEast.Name", "ESIK_InputActionOrigin_SteamDeck_RightStick_DPadEast" },
		{ "ESIK_InputActionOrigin_SteamDeck_RightStick_DPadNorth.Name", "ESIK_InputActionOrigin_SteamDeck_RightStick_DPadNorth" },
		{ "ESIK_InputActionOrigin_SteamDeck_RightStick_DPadSouth.Name", "ESIK_InputActionOrigin_SteamDeck_RightStick_DPadSouth" },
		{ "ESIK_InputActionOrigin_SteamDeck_RightStick_DPadWest.Name", "ESIK_InputActionOrigin_SteamDeck_RightStick_DPadWest" },
		{ "ESIK_InputActionOrigin_SteamDeck_RightStick_Move.Name", "ESIK_InputActionOrigin_SteamDeck_RightStick_Move" },
		{ "ESIK_InputActionOrigin_SteamDeck_RightStick_Touch.Name", "ESIK_InputActionOrigin_SteamDeck_RightStick_Touch" },
		{ "ESIK_InputActionOrigin_SteamDeck_View.Name", "ESIK_InputActionOrigin_SteamDeck_View" },
		{ "ESIK_InputActionOrigin_SteamDeck_X.Name", "ESIK_InputActionOrigin_SteamDeck_X" },
		{ "ESIK_InputActionOrigin_SteamDeck_Y.Name", "ESIK_InputActionOrigin_SteamDeck_Y" },
		{ "ESIK_InputActionOrigin_Switch_A.Comment", "// Switch - Pro or Joycons used as a single input device.\n// This does not apply to a single joycon\n" },
		{ "ESIK_InputActionOrigin_Switch_A.Name", "ESIK_InputActionOrigin_Switch_A" },
		{ "ESIK_InputActionOrigin_Switch_A.ToolTip", "Switch - Pro or Joycons used as a single input device.\nThis does not apply to a single joycon" },
		{ "ESIK_InputActionOrigin_Switch_B.Name", "ESIK_InputActionOrigin_Switch_B" },
		{ "ESIK_InputActionOrigin_Switch_Capture.Comment", "//Back\n" },
		{ "ESIK_InputActionOrigin_Switch_Capture.Name", "ESIK_InputActionOrigin_Switch_Capture" },
		{ "ESIK_InputActionOrigin_Switch_Capture.ToolTip", "Back" },
		{ "ESIK_InputActionOrigin_Switch_DPad_East.Name", "ESIK_InputActionOrigin_Switch_DPad_East" },
		{ "ESIK_InputActionOrigin_Switch_DPad_Move.Comment", "// Primary Gyro in Pro Controller, or Right JoyCon\n" },
		{ "ESIK_InputActionOrigin_Switch_DPad_Move.Name", "ESIK_InputActionOrigin_Switch_DPad_Move" },
		{ "ESIK_InputActionOrigin_Switch_DPad_Move.ToolTip", "Primary Gyro in Pro Controller, or Right JoyCon" },
		{ "ESIK_InputActionOrigin_Switch_DPad_North.Name", "ESIK_InputActionOrigin_Switch_DPad_North" },
		{ "ESIK_InputActionOrigin_Switch_DPad_South.Name", "ESIK_InputActionOrigin_Switch_DPad_South" },
		{ "ESIK_InputActionOrigin_Switch_DPad_West.Name", "ESIK_InputActionOrigin_Switch_DPad_West" },
		{ "ESIK_InputActionOrigin_Switch_JoyConButton_E.Comment", "// With a Horizontal JoyCon this will be Y or what would be Dpad Right when vertical\n" },
		{ "ESIK_InputActionOrigin_Switch_JoyConButton_E.Name", "ESIK_InputActionOrigin_Switch_JoyConButton_E" },
		{ "ESIK_InputActionOrigin_Switch_JoyConButton_E.ToolTip", "With a Horizontal JoyCon this will be Y or what would be Dpad Right when vertical" },
		{ "ESIK_InputActionOrigin_Switch_JoyConButton_N.Comment", "// Right JoyCon SR Button\n" },
		{ "ESIK_InputActionOrigin_Switch_JoyConButton_N.Name", "ESIK_InputActionOrigin_Switch_JoyConButton_N" },
		{ "ESIK_InputActionOrigin_Switch_JoyConButton_N.ToolTip", "Right JoyCon SR Button" },
		{ "ESIK_InputActionOrigin_Switch_JoyConButton_S.Comment", "// X\n" },
		{ "ESIK_InputActionOrigin_Switch_JoyConButton_S.Name", "ESIK_InputActionOrigin_Switch_JoyConButton_S" },
		{ "ESIK_InputActionOrigin_Switch_JoyConButton_S.ToolTip", "X" },
		{ "ESIK_InputActionOrigin_Switch_JoyConButton_W.Comment", "// A\n" },
		{ "ESIK_InputActionOrigin_Switch_JoyConButton_W.Name", "ESIK_InputActionOrigin_Switch_JoyConButton_W" },
		{ "ESIK_InputActionOrigin_Switch_JoyConButton_W.ToolTip", "A" },
		{ "ESIK_InputActionOrigin_Switch_LeftBumper.Name", "ESIK_InputActionOrigin_Switch_LeftBumper" },
		{ "ESIK_InputActionOrigin_Switch_LeftGrip_Lower.Name", "ESIK_InputActionOrigin_Switch_LeftGrip_Lower" },
		{ "ESIK_InputActionOrigin_Switch_LeftGrip_Upper.Comment", "// Left JoyCon SR Button\n" },
		{ "ESIK_InputActionOrigin_Switch_LeftGrip_Upper.Name", "ESIK_InputActionOrigin_Switch_LeftGrip_Upper" },
		{ "ESIK_InputActionOrigin_Switch_LeftGrip_Upper.ToolTip", "Left JoyCon SR Button" },
		{ "ESIK_InputActionOrigin_Switch_LeftGyro_Move.Comment", "// Right JoyCon Gyro generally should correspond to Pro's single gyro\n" },
		{ "ESIK_InputActionOrigin_Switch_LeftGyro_Move.Name", "ESIK_InputActionOrigin_Switch_LeftGyro_Move" },
		{ "ESIK_InputActionOrigin_Switch_LeftGyro_Move.ToolTip", "Right JoyCon Gyro generally should correspond to Pro's single gyro" },
		{ "ESIK_InputActionOrigin_Switch_LeftGyro_Pitch.Name", "ESIK_InputActionOrigin_Switch_LeftGyro_Pitch" },
		{ "ESIK_InputActionOrigin_Switch_LeftGyro_Roll.Name", "ESIK_InputActionOrigin_Switch_LeftGyro_Roll" },
		{ "ESIK_InputActionOrigin_Switch_LeftGyro_Yaw.Name", "ESIK_InputActionOrigin_Switch_LeftGyro_Yaw" },
		{ "ESIK_InputActionOrigin_Switch_LeftStick_Click.Name", "ESIK_InputActionOrigin_Switch_LeftStick_Click" },
		{ "ESIK_InputActionOrigin_Switch_LeftStick_DPadEast.Name", "ESIK_InputActionOrigin_Switch_LeftStick_DPadEast" },
		{ "ESIK_InputActionOrigin_Switch_LeftStick_DPadNorth.Name", "ESIK_InputActionOrigin_Switch_LeftStick_DPadNorth" },
		{ "ESIK_InputActionOrigin_Switch_LeftStick_DPadSouth.Name", "ESIK_InputActionOrigin_Switch_LeftStick_DPadSouth" },
		{ "ESIK_InputActionOrigin_Switch_LeftStick_DPadWest.Name", "ESIK_InputActionOrigin_Switch_LeftStick_DPadWest" },
		{ "ESIK_InputActionOrigin_Switch_LeftStick_Move.Name", "ESIK_InputActionOrigin_Switch_LeftStick_Move" },
		{ "ESIK_InputActionOrigin_Switch_LeftTrigger_Click.Name", "ESIK_InputActionOrigin_Switch_LeftTrigger_Click" },
		{ "ESIK_InputActionOrigin_Switch_LeftTrigger_Pull.Name", "ESIK_InputActionOrigin_Switch_LeftTrigger_Pull" },
		{ "ESIK_InputActionOrigin_Switch_Minus.Comment", "//Start\n" },
		{ "ESIK_InputActionOrigin_Switch_Minus.Name", "ESIK_InputActionOrigin_Switch_Minus" },
		{ "ESIK_InputActionOrigin_Switch_Minus.ToolTip", "Start" },
		{ "ESIK_InputActionOrigin_Switch_Plus.Name", "ESIK_InputActionOrigin_Switch_Plus" },
		{ "ESIK_InputActionOrigin_Switch_ProGyro_Move.Name", "ESIK_InputActionOrigin_Switch_ProGyro_Move" },
		{ "ESIK_InputActionOrigin_Switch_ProGyro_Pitch.Comment", "// Primary Gyro in Pro Controller, or Right JoyCon\n" },
		{ "ESIK_InputActionOrigin_Switch_ProGyro_Pitch.Name", "ESIK_InputActionOrigin_Switch_ProGyro_Pitch" },
		{ "ESIK_InputActionOrigin_Switch_ProGyro_Pitch.ToolTip", "Primary Gyro in Pro Controller, or Right JoyCon" },
		{ "ESIK_InputActionOrigin_Switch_ProGyro_Roll.Comment", "// Primary Gyro in Pro Controller, or Right JoyCon\n" },
		{ "ESIK_InputActionOrigin_Switch_ProGyro_Roll.Name", "ESIK_InputActionOrigin_Switch_ProGyro_Roll" },
		{ "ESIK_InputActionOrigin_Switch_ProGyro_Roll.ToolTip", "Primary Gyro in Pro Controller, or Right JoyCon" },
		{ "ESIK_InputActionOrigin_Switch_ProGyro_Yaw.Comment", "// Primary Gyro in Pro Controller, or Right JoyCon\n" },
		{ "ESIK_InputActionOrigin_Switch_ProGyro_Yaw.Name", "ESIK_InputActionOrigin_Switch_ProGyro_Yaw" },
		{ "ESIK_InputActionOrigin_Switch_ProGyro_Yaw.ToolTip", "Primary Gyro in Pro Controller, or Right JoyCon" },
		{ "ESIK_InputActionOrigin_Switch_Reserved1.Name", "ESIK_InputActionOrigin_Switch_Reserved1" },
		{ "ESIK_InputActionOrigin_Switch_Reserved10.Name", "ESIK_InputActionOrigin_Switch_Reserved10" },
		{ "ESIK_InputActionOrigin_Switch_Reserved15.Comment", "// B\n" },
		{ "ESIK_InputActionOrigin_Switch_Reserved15.Name", "ESIK_InputActionOrigin_Switch_Reserved15" },
		{ "ESIK_InputActionOrigin_Switch_Reserved15.ToolTip", "B" },
		{ "ESIK_InputActionOrigin_Switch_Reserved16.Name", "ESIK_InputActionOrigin_Switch_Reserved16" },
		{ "ESIK_InputActionOrigin_Switch_Reserved17.Name", "ESIK_InputActionOrigin_Switch_Reserved17" },
		{ "ESIK_InputActionOrigin_Switch_Reserved18.Name", "ESIK_InputActionOrigin_Switch_Reserved18" },
		{ "ESIK_InputActionOrigin_Switch_Reserved19.Name", "ESIK_InputActionOrigin_Switch_Reserved19" },
		{ "ESIK_InputActionOrigin_Switch_Reserved2.Name", "ESIK_InputActionOrigin_Switch_Reserved2" },
		{ "ESIK_InputActionOrigin_Switch_Reserved20.Name", "ESIK_InputActionOrigin_Switch_Reserved20" },
		{ "ESIK_InputActionOrigin_Switch_Reserved3.Name", "ESIK_InputActionOrigin_Switch_Reserved3" },
		{ "ESIK_InputActionOrigin_Switch_Reserved4.Name", "ESIK_InputActionOrigin_Switch_Reserved4" },
		{ "ESIK_InputActionOrigin_Switch_Reserved5.Name", "ESIK_InputActionOrigin_Switch_Reserved5" },
		{ "ESIK_InputActionOrigin_Switch_Reserved6.Name", "ESIK_InputActionOrigin_Switch_Reserved6" },
		{ "ESIK_InputActionOrigin_Switch_Reserved7.Name", "ESIK_InputActionOrigin_Switch_Reserved7" },
		{ "ESIK_InputActionOrigin_Switch_Reserved8.Name", "ESIK_InputActionOrigin_Switch_Reserved8" },
		{ "ESIK_InputActionOrigin_Switch_Reserved9.Name", "ESIK_InputActionOrigin_Switch_Reserved9" },
		{ "ESIK_InputActionOrigin_Switch_RightBumper.Name", "ESIK_InputActionOrigin_Switch_RightBumper" },
		{ "ESIK_InputActionOrigin_Switch_RightGrip_Lower.Comment", "// Left JoyCon SL Button\n" },
		{ "ESIK_InputActionOrigin_Switch_RightGrip_Lower.Name", "ESIK_InputActionOrigin_Switch_RightGrip_Lower" },
		{ "ESIK_InputActionOrigin_Switch_RightGrip_Lower.ToolTip", "Left JoyCon SL Button" },
		{ "ESIK_InputActionOrigin_Switch_RightGrip_Upper.Comment", "// Right JoyCon SL Button\n" },
		{ "ESIK_InputActionOrigin_Switch_RightGrip_Upper.Name", "ESIK_InputActionOrigin_Switch_RightGrip_Upper" },
		{ "ESIK_InputActionOrigin_Switch_RightGrip_Upper.ToolTip", "Right JoyCon SL Button" },
		{ "ESIK_InputActionOrigin_Switch_RightGyro_Move.Comment", "// Switch JoyCon Specific\n" },
		{ "ESIK_InputActionOrigin_Switch_RightGyro_Move.Name", "ESIK_InputActionOrigin_Switch_RightGyro_Move" },
		{ "ESIK_InputActionOrigin_Switch_RightGyro_Move.ToolTip", "Switch JoyCon Specific" },
		{ "ESIK_InputActionOrigin_Switch_RightGyro_Pitch.Comment", "// Right JoyCon Gyro generally should correspond to Pro's single gyro\n" },
		{ "ESIK_InputActionOrigin_Switch_RightGyro_Pitch.Name", "ESIK_InputActionOrigin_Switch_RightGyro_Pitch" },
		{ "ESIK_InputActionOrigin_Switch_RightGyro_Pitch.ToolTip", "Right JoyCon Gyro generally should correspond to Pro's single gyro" },
		{ "ESIK_InputActionOrigin_Switch_RightGyro_Roll.Comment", "// Right JoyCon Gyro generally should correspond to Pro's single gyro\n" },
		{ "ESIK_InputActionOrigin_Switch_RightGyro_Roll.Name", "ESIK_InputActionOrigin_Switch_RightGyro_Roll" },
		{ "ESIK_InputActionOrigin_Switch_RightGyro_Roll.ToolTip", "Right JoyCon Gyro generally should correspond to Pro's single gyro" },
		{ "ESIK_InputActionOrigin_Switch_RightGyro_Yaw.Comment", "// Right JoyCon Gyro generally should correspond to Pro's single gyro\n" },
		{ "ESIK_InputActionOrigin_Switch_RightGyro_Yaw.Name", "ESIK_InputActionOrigin_Switch_RightGyro_Yaw" },
		{ "ESIK_InputActionOrigin_Switch_RightGyro_Yaw.ToolTip", "Right JoyCon Gyro generally should correspond to Pro's single gyro" },
		{ "ESIK_InputActionOrigin_Switch_RightStick_Click.Name", "ESIK_InputActionOrigin_Switch_RightStick_Click" },
		{ "ESIK_InputActionOrigin_Switch_RightStick_DPadEast.Name", "ESIK_InputActionOrigin_Switch_RightStick_DPadEast" },
		{ "ESIK_InputActionOrigin_Switch_RightStick_DPadNorth.Name", "ESIK_InputActionOrigin_Switch_RightStick_DPadNorth" },
		{ "ESIK_InputActionOrigin_Switch_RightStick_DPadSouth.Name", "ESIK_InputActionOrigin_Switch_RightStick_DPadSouth" },
		{ "ESIK_InputActionOrigin_Switch_RightStick_DPadWest.Name", "ESIK_InputActionOrigin_Switch_RightStick_DPadWest" },
		{ "ESIK_InputActionOrigin_Switch_RightStick_Move.Name", "ESIK_InputActionOrigin_Switch_RightStick_Move" },
		{ "ESIK_InputActionOrigin_Switch_RightTrigger_Click.Name", "ESIK_InputActionOrigin_Switch_RightTrigger_Click" },
		{ "ESIK_InputActionOrigin_Switch_RightTrigger_Pull.Name", "ESIK_InputActionOrigin_Switch_RightTrigger_Pull" },
		{ "ESIK_InputActionOrigin_Switch_X.Name", "ESIK_InputActionOrigin_Switch_X" },
		{ "ESIK_InputActionOrigin_Switch_Y.Name", "ESIK_InputActionOrigin_Switch_Y" },
		{ "ESIK_InputActionOrigin_XBox360_A.Comment", "// XBox 360\n" },
		{ "ESIK_InputActionOrigin_XBox360_A.Name", "ESIK_InputActionOrigin_XBox360_A" },
		{ "ESIK_InputActionOrigin_XBox360_A.ToolTip", "XBox 360" },
		{ "ESIK_InputActionOrigin_XBox360_B.Name", "ESIK_InputActionOrigin_XBox360_B" },
		{ "ESIK_InputActionOrigin_XBox360_Back.Comment", "//Start\n" },
		{ "ESIK_InputActionOrigin_XBox360_Back.Name", "ESIK_InputActionOrigin_XBox360_Back" },
		{ "ESIK_InputActionOrigin_XBox360_Back.ToolTip", "Start" },
		{ "ESIK_InputActionOrigin_XBox360_DPad_East.Name", "ESIK_InputActionOrigin_XBox360_DPad_East" },
		{ "ESIK_InputActionOrigin_XBox360_DPad_Move.Name", "ESIK_InputActionOrigin_XBox360_DPad_Move" },
		{ "ESIK_InputActionOrigin_XBox360_DPad_North.Name", "ESIK_InputActionOrigin_XBox360_DPad_North" },
		{ "ESIK_InputActionOrigin_XBox360_DPad_South.Name", "ESIK_InputActionOrigin_XBox360_DPad_South" },
		{ "ESIK_InputActionOrigin_XBox360_DPad_West.Name", "ESIK_InputActionOrigin_XBox360_DPad_West" },
		{ "ESIK_InputActionOrigin_XBox360_LeftBumper.Name", "ESIK_InputActionOrigin_XBox360_LeftBumper" },
		{ "ESIK_InputActionOrigin_XBox360_LeftStick_Click.Name", "ESIK_InputActionOrigin_XBox360_LeftStick_Click" },
		{ "ESIK_InputActionOrigin_XBox360_LeftStick_DPadEast.Name", "ESIK_InputActionOrigin_XBox360_LeftStick_DPadEast" },
		{ "ESIK_InputActionOrigin_XBox360_LeftStick_DPadNorth.Name", "ESIK_InputActionOrigin_XBox360_LeftStick_DPadNorth" },
		{ "ESIK_InputActionOrigin_XBox360_LeftStick_DPadSouth.Name", "ESIK_InputActionOrigin_XBox360_LeftStick_DPadSouth" },
		{ "ESIK_InputActionOrigin_XBox360_LeftStick_DPadWest.Name", "ESIK_InputActionOrigin_XBox360_LeftStick_DPadWest" },
		{ "ESIK_InputActionOrigin_XBox360_LeftStick_Move.Name", "ESIK_InputActionOrigin_XBox360_LeftStick_Move" },
		{ "ESIK_InputActionOrigin_XBox360_LeftTrigger_Click.Name", "ESIK_InputActionOrigin_XBox360_LeftTrigger_Click" },
		{ "ESIK_InputActionOrigin_XBox360_LeftTrigger_Pull.Comment", "//Back\n" },
		{ "ESIK_InputActionOrigin_XBox360_LeftTrigger_Pull.Name", "ESIK_InputActionOrigin_XBox360_LeftTrigger_Pull" },
		{ "ESIK_InputActionOrigin_XBox360_LeftTrigger_Pull.ToolTip", "Back" },
		{ "ESIK_InputActionOrigin_XBox360_Reserved1.Name", "ESIK_InputActionOrigin_XBox360_Reserved1" },
		{ "ESIK_InputActionOrigin_XBox360_Reserved10.Name", "ESIK_InputActionOrigin_XBox360_Reserved10" },
		{ "ESIK_InputActionOrigin_XBox360_Reserved2.Name", "ESIK_InputActionOrigin_XBox360_Reserved2" },
		{ "ESIK_InputActionOrigin_XBox360_Reserved3.Name", "ESIK_InputActionOrigin_XBox360_Reserved3" },
		{ "ESIK_InputActionOrigin_XBox360_Reserved4.Name", "ESIK_InputActionOrigin_XBox360_Reserved4" },
		{ "ESIK_InputActionOrigin_XBox360_Reserved5.Name", "ESIK_InputActionOrigin_XBox360_Reserved5" },
		{ "ESIK_InputActionOrigin_XBox360_Reserved6.Name", "ESIK_InputActionOrigin_XBox360_Reserved6" },
		{ "ESIK_InputActionOrigin_XBox360_Reserved7.Name", "ESIK_InputActionOrigin_XBox360_Reserved7" },
		{ "ESIK_InputActionOrigin_XBox360_Reserved8.Name", "ESIK_InputActionOrigin_XBox360_Reserved8" },
		{ "ESIK_InputActionOrigin_XBox360_Reserved9.Name", "ESIK_InputActionOrigin_XBox360_Reserved9" },
		{ "ESIK_InputActionOrigin_XBox360_RightBumper.Name", "ESIK_InputActionOrigin_XBox360_RightBumper" },
		{ "ESIK_InputActionOrigin_XBox360_RightStick_Click.Name", "ESIK_InputActionOrigin_XBox360_RightStick_Click" },
		{ "ESIK_InputActionOrigin_XBox360_RightStick_DPadEast.Name", "ESIK_InputActionOrigin_XBox360_RightStick_DPadEast" },
		{ "ESIK_InputActionOrigin_XBox360_RightStick_DPadNorth.Name", "ESIK_InputActionOrigin_XBox360_RightStick_DPadNorth" },
		{ "ESIK_InputActionOrigin_XBox360_RightStick_DPadSouth.Name", "ESIK_InputActionOrigin_XBox360_RightStick_DPadSouth" },
		{ "ESIK_InputActionOrigin_XBox360_RightStick_DPadWest.Name", "ESIK_InputActionOrigin_XBox360_RightStick_DPadWest" },
		{ "ESIK_InputActionOrigin_XBox360_RightStick_Move.Name", "ESIK_InputActionOrigin_XBox360_RightStick_Move" },
		{ "ESIK_InputActionOrigin_XBox360_RightTrigger_Click.Name", "ESIK_InputActionOrigin_XBox360_RightTrigger_Click" },
		{ "ESIK_InputActionOrigin_XBox360_RightTrigger_Pull.Name", "ESIK_InputActionOrigin_XBox360_RightTrigger_Pull" },
		{ "ESIK_InputActionOrigin_XBox360_Start.Name", "ESIK_InputActionOrigin_XBox360_Start" },
		{ "ESIK_InputActionOrigin_XBox360_X.Name", "ESIK_InputActionOrigin_XBox360_X" },
		{ "ESIK_InputActionOrigin_XBox360_Y.Name", "ESIK_InputActionOrigin_XBox360_Y" },
		{ "ESIK_InputActionOrigin_XBoxOne_A.Comment", "// XBox One\n" },
		{ "ESIK_InputActionOrigin_XBoxOne_A.Name", "ESIK_InputActionOrigin_XBoxOne_A" },
		{ "ESIK_InputActionOrigin_XBoxOne_A.ToolTip", "XBox One" },
		{ "ESIK_InputActionOrigin_XBoxOne_B.Name", "ESIK_InputActionOrigin_XBoxOne_B" },
		{ "ESIK_InputActionOrigin_XBoxOne_DPad_East.Name", "ESIK_InputActionOrigin_XBoxOne_DPad_East" },
		{ "ESIK_InputActionOrigin_XBoxOne_DPad_Move.Name", "ESIK_InputActionOrigin_XBoxOne_DPad_Move" },
		{ "ESIK_InputActionOrigin_XBoxOne_DPad_North.Name", "ESIK_InputActionOrigin_XBoxOne_DPad_North" },
		{ "ESIK_InputActionOrigin_XBoxOne_DPad_South.Name", "ESIK_InputActionOrigin_XBoxOne_DPad_South" },
		{ "ESIK_InputActionOrigin_XBoxOne_DPad_West.Name", "ESIK_InputActionOrigin_XBoxOne_DPad_West" },
		{ "ESIK_InputActionOrigin_XBoxOne_LeftBumper.Name", "ESIK_InputActionOrigin_XBoxOne_LeftBumper" },
		{ "ESIK_InputActionOrigin_XBoxOne_LeftGrip_Lower.Name", "ESIK_InputActionOrigin_XBoxOne_LeftGrip_Lower" },
		{ "ESIK_InputActionOrigin_XBoxOne_LeftGrip_Upper.Name", "ESIK_InputActionOrigin_XBoxOne_LeftGrip_Upper" },
		{ "ESIK_InputActionOrigin_XBoxOne_LeftStick_Click.Name", "ESIK_InputActionOrigin_XBoxOne_LeftStick_Click" },
		{ "ESIK_InputActionOrigin_XBoxOne_LeftStick_DPadEast.Name", "ESIK_InputActionOrigin_XBoxOne_LeftStick_DPadEast" },
		{ "ESIK_InputActionOrigin_XBoxOne_LeftStick_DPadNorth.Name", "ESIK_InputActionOrigin_XBoxOne_LeftStick_DPadNorth" },
		{ "ESIK_InputActionOrigin_XBoxOne_LeftStick_DPadSouth.Name", "ESIK_InputActionOrigin_XBoxOne_LeftStick_DPadSouth" },
		{ "ESIK_InputActionOrigin_XBoxOne_LeftStick_DPadWest.Name", "ESIK_InputActionOrigin_XBoxOne_LeftStick_DPadWest" },
		{ "ESIK_InputActionOrigin_XBoxOne_LeftStick_Move.Name", "ESIK_InputActionOrigin_XBoxOne_LeftStick_Move" },
		{ "ESIK_InputActionOrigin_XBoxOne_LeftTrigger_Click.Name", "ESIK_InputActionOrigin_XBoxOne_LeftTrigger_Click" },
		{ "ESIK_InputActionOrigin_XBoxOne_LeftTrigger_Pull.Comment", "//Back\n" },
		{ "ESIK_InputActionOrigin_XBoxOne_LeftTrigger_Pull.Name", "ESIK_InputActionOrigin_XBoxOne_LeftTrigger_Pull" },
		{ "ESIK_InputActionOrigin_XBoxOne_LeftTrigger_Pull.ToolTip", "Back" },
		{ "ESIK_InputActionOrigin_XBoxOne_Menu.Name", "ESIK_InputActionOrigin_XBoxOne_Menu" },
		{ "ESIK_InputActionOrigin_XBoxOne_Reserved10.Name", "ESIK_InputActionOrigin_XBoxOne_Reserved10" },
		{ "ESIK_InputActionOrigin_XBoxOne_Reserved6.Comment", "// Xbox Series X controllers only\n" },
		{ "ESIK_InputActionOrigin_XBoxOne_Reserved6.Name", "ESIK_InputActionOrigin_XBoxOne_Reserved6" },
		{ "ESIK_InputActionOrigin_XBoxOne_Reserved6.ToolTip", "Xbox Series X controllers only" },
		{ "ESIK_InputActionOrigin_XBoxOne_Reserved7.Name", "ESIK_InputActionOrigin_XBoxOne_Reserved7" },
		{ "ESIK_InputActionOrigin_XBoxOne_Reserved8.Name", "ESIK_InputActionOrigin_XBoxOne_Reserved8" },
		{ "ESIK_InputActionOrigin_XBoxOne_Reserved9.Name", "ESIK_InputActionOrigin_XBoxOne_Reserved9" },
		{ "ESIK_InputActionOrigin_XBoxOne_RightBumper.Name", "ESIK_InputActionOrigin_XBoxOne_RightBumper" },
		{ "ESIK_InputActionOrigin_XBoxOne_RightGrip_Lower.Name", "ESIK_InputActionOrigin_XBoxOne_RightGrip_Lower" },
		{ "ESIK_InputActionOrigin_XBoxOne_RightGrip_Upper.Name", "ESIK_InputActionOrigin_XBoxOne_RightGrip_Upper" },
		{ "ESIK_InputActionOrigin_XBoxOne_RightStick_Click.Name", "ESIK_InputActionOrigin_XBoxOne_RightStick_Click" },
		{ "ESIK_InputActionOrigin_XBoxOne_RightStick_DPadEast.Name", "ESIK_InputActionOrigin_XBoxOne_RightStick_DPadEast" },
		{ "ESIK_InputActionOrigin_XBoxOne_RightStick_DPadNorth.Name", "ESIK_InputActionOrigin_XBoxOne_RightStick_DPadNorth" },
		{ "ESIK_InputActionOrigin_XBoxOne_RightStick_DPadSouth.Name", "ESIK_InputActionOrigin_XBoxOne_RightStick_DPadSouth" },
		{ "ESIK_InputActionOrigin_XBoxOne_RightStick_DPadWest.Name", "ESIK_InputActionOrigin_XBoxOne_RightStick_DPadWest" },
		{ "ESIK_InputActionOrigin_XBoxOne_RightStick_Move.Name", "ESIK_InputActionOrigin_XBoxOne_RightStick_Move" },
		{ "ESIK_InputActionOrigin_XBoxOne_RightTrigger_Click.Name", "ESIK_InputActionOrigin_XBoxOne_RightTrigger_Click" },
		{ "ESIK_InputActionOrigin_XBoxOne_RightTrigger_Pull.Name", "ESIK_InputActionOrigin_XBoxOne_RightTrigger_Pull" },
		{ "ESIK_InputActionOrigin_XBoxOne_Share.Name", "ESIK_InputActionOrigin_XBoxOne_Share" },
		{ "ESIK_InputActionOrigin_XBoxOne_View.Comment", "//Start\n" },
		{ "ESIK_InputActionOrigin_XBoxOne_View.Name", "ESIK_InputActionOrigin_XBoxOne_View" },
		{ "ESIK_InputActionOrigin_XBoxOne_View.ToolTip", "Start" },
		{ "ESIK_InputActionOrigin_XBoxOne_X.Name", "ESIK_InputActionOrigin_XBoxOne_X" },
		{ "ESIK_InputActionOrigin_XBoxOne_Y.Name", "ESIK_InputActionOrigin_XBoxOne_Y" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESIK_InputActionOrigin_None", (int64)ESIK_InputActionOrigin_None },
		{ "ESIK_InputActionOrigin_SteamController_A", (int64)ESIK_InputActionOrigin_SteamController_A },
		{ "ESIK_InputActionOrigin_SteamController_B", (int64)ESIK_InputActionOrigin_SteamController_B },
		{ "ESIK_InputActionOrigin_SteamController_X", (int64)ESIK_InputActionOrigin_SteamController_X },
		{ "ESIK_InputActionOrigin_SteamController_Y", (int64)ESIK_InputActionOrigin_SteamController_Y },
		{ "ESIK_InputActionOrigin_SteamController_LeftBumper", (int64)ESIK_InputActionOrigin_SteamController_LeftBumper },
		{ "ESIK_InputActionOrigin_SteamController_RightBumper", (int64)ESIK_InputActionOrigin_SteamController_RightBumper },
		{ "ESIK_InputActionOrigin_SteamController_LeftGrip", (int64)ESIK_InputActionOrigin_SteamController_LeftGrip },
		{ "ESIK_InputActionOrigin_SteamController_RightGrip", (int64)ESIK_InputActionOrigin_SteamController_RightGrip },
		{ "ESIK_InputActionOrigin_SteamController_Start", (int64)ESIK_InputActionOrigin_SteamController_Start },
		{ "ESIK_InputActionOrigin_SteamController_Back", (int64)ESIK_InputActionOrigin_SteamController_Back },
		{ "ESIK_InputActionOrigin_SteamController_LeftPad_Touch", (int64)ESIK_InputActionOrigin_SteamController_LeftPad_Touch },
		{ "ESIK_InputActionOrigin_SteamController_LeftPad_Swipe", (int64)ESIK_InputActionOrigin_SteamController_LeftPad_Swipe },
		{ "ESIK_InputActionOrigin_SteamController_LeftPad_Click", (int64)ESIK_InputActionOrigin_SteamController_LeftPad_Click },
		{ "ESIK_InputActionOrigin_SteamController_LeftPad_DPadNorth", (int64)ESIK_InputActionOrigin_SteamController_LeftPad_DPadNorth },
		{ "ESIK_InputActionOrigin_SteamController_LeftPad_DPadSouth", (int64)ESIK_InputActionOrigin_SteamController_LeftPad_DPadSouth },
		{ "ESIK_InputActionOrigin_SteamController_LeftPad_DPadWest", (int64)ESIK_InputActionOrigin_SteamController_LeftPad_DPadWest },
		{ "ESIK_InputActionOrigin_SteamController_LeftPad_DPadEast", (int64)ESIK_InputActionOrigin_SteamController_LeftPad_DPadEast },
		{ "ESIK_InputActionOrigin_SteamController_RightPad_Touch", (int64)ESIK_InputActionOrigin_SteamController_RightPad_Touch },
		{ "ESIK_InputActionOrigin_SteamController_RightPad_Swipe", (int64)ESIK_InputActionOrigin_SteamController_RightPad_Swipe },
		{ "ESIK_InputActionOrigin_SteamController_RightPad_Click", (int64)ESIK_InputActionOrigin_SteamController_RightPad_Click },
		{ "ESIK_InputActionOrigin_SteamController_RightPad_DPadNorth", (int64)ESIK_InputActionOrigin_SteamController_RightPad_DPadNorth },
		{ "ESIK_InputActionOrigin_SteamController_RightPad_DPadSouth", (int64)ESIK_InputActionOrigin_SteamController_RightPad_DPadSouth },
		{ "ESIK_InputActionOrigin_SteamController_RightPad_DPadWest", (int64)ESIK_InputActionOrigin_SteamController_RightPad_DPadWest },
		{ "ESIK_InputActionOrigin_SteamController_RightPad_DPadEast", (int64)ESIK_InputActionOrigin_SteamController_RightPad_DPadEast },
		{ "ESIK_InputActionOrigin_SteamController_LeftTrigger_Pull", (int64)ESIK_InputActionOrigin_SteamController_LeftTrigger_Pull },
		{ "ESIK_InputActionOrigin_SteamController_LeftTrigger_Click", (int64)ESIK_InputActionOrigin_SteamController_LeftTrigger_Click },
		{ "ESIK_InputActionOrigin_SteamController_RightTrigger_Pull", (int64)ESIK_InputActionOrigin_SteamController_RightTrigger_Pull },
		{ "ESIK_InputActionOrigin_SteamController_RightTrigger_Click", (int64)ESIK_InputActionOrigin_SteamController_RightTrigger_Click },
		{ "ESIK_InputActionOrigin_SteamController_LeftStick_Move", (int64)ESIK_InputActionOrigin_SteamController_LeftStick_Move },
		{ "ESIK_InputActionOrigin_SteamController_LeftStick_Click", (int64)ESIK_InputActionOrigin_SteamController_LeftStick_Click },
		{ "ESIK_InputActionOrigin_SteamController_LeftStick_DPadNorth", (int64)ESIK_InputActionOrigin_SteamController_LeftStick_DPadNorth },
		{ "ESIK_InputActionOrigin_SteamController_LeftStick_DPadSouth", (int64)ESIK_InputActionOrigin_SteamController_LeftStick_DPadSouth },
		{ "ESIK_InputActionOrigin_SteamController_LeftStick_DPadWest", (int64)ESIK_InputActionOrigin_SteamController_LeftStick_DPadWest },
		{ "ESIK_InputActionOrigin_SteamController_LeftStick_DPadEast", (int64)ESIK_InputActionOrigin_SteamController_LeftStick_DPadEast },
		{ "ESIK_InputActionOrigin_SteamController_Gyro_Move", (int64)ESIK_InputActionOrigin_SteamController_Gyro_Move },
		{ "ESIK_InputActionOrigin_SteamController_Gyro_Pitch", (int64)ESIK_InputActionOrigin_SteamController_Gyro_Pitch },
		{ "ESIK_InputActionOrigin_SteamController_Gyro_Yaw", (int64)ESIK_InputActionOrigin_SteamController_Gyro_Yaw },
		{ "ESIK_InputActionOrigin_SteamController_Gyro_Roll", (int64)ESIK_InputActionOrigin_SteamController_Gyro_Roll },
		{ "ESIK_InputActionOrigin_SteamController_Reserved0", (int64)ESIK_InputActionOrigin_SteamController_Reserved0 },
		{ "ESIK_InputActionOrigin_SteamController_Reserved1", (int64)ESIK_InputActionOrigin_SteamController_Reserved1 },
		{ "ESIK_InputActionOrigin_SteamController_Reserved2", (int64)ESIK_InputActionOrigin_SteamController_Reserved2 },
		{ "ESIK_InputActionOrigin_SteamController_Reserved3", (int64)ESIK_InputActionOrigin_SteamController_Reserved3 },
		{ "ESIK_InputActionOrigin_SteamController_Reserved4", (int64)ESIK_InputActionOrigin_SteamController_Reserved4 },
		{ "ESIK_InputActionOrigin_SteamController_Reserved5", (int64)ESIK_InputActionOrigin_SteamController_Reserved5 },
		{ "ESIK_InputActionOrigin_SteamController_Reserved6", (int64)ESIK_InputActionOrigin_SteamController_Reserved6 },
		{ "ESIK_InputActionOrigin_SteamController_Reserved7", (int64)ESIK_InputActionOrigin_SteamController_Reserved7 },
		{ "ESIK_InputActionOrigin_SteamController_Reserved8", (int64)ESIK_InputActionOrigin_SteamController_Reserved8 },
		{ "ESIK_InputActionOrigin_SteamController_Reserved9", (int64)ESIK_InputActionOrigin_SteamController_Reserved9 },
		{ "ESIK_InputActionOrigin_SteamController_Reserved10", (int64)ESIK_InputActionOrigin_SteamController_Reserved10 },
		{ "ESIK_InputActionOrigin_PS4_X", (int64)ESIK_InputActionOrigin_PS4_X },
		{ "ESIK_InputActionOrigin_PS4_Circle", (int64)ESIK_InputActionOrigin_PS4_Circle },
		{ "ESIK_InputActionOrigin_PS4_Triangle", (int64)ESIK_InputActionOrigin_PS4_Triangle },
		{ "ESIK_InputActionOrigin_PS4_Square", (int64)ESIK_InputActionOrigin_PS4_Square },
		{ "ESIK_InputActionOrigin_PS4_LeftBumper", (int64)ESIK_InputActionOrigin_PS4_LeftBumper },
		{ "ESIK_InputActionOrigin_PS4_RightBumper", (int64)ESIK_InputActionOrigin_PS4_RightBumper },
		{ "ESIK_InputActionOrigin_PS4_Options", (int64)ESIK_InputActionOrigin_PS4_Options },
		{ "ESIK_InputActionOrigin_PS4_Share", (int64)ESIK_InputActionOrigin_PS4_Share },
		{ "ESIK_InputActionOrigin_PS4_LeftPad_Touch", (int64)ESIK_InputActionOrigin_PS4_LeftPad_Touch },
		{ "ESIK_InputActionOrigin_PS4_LeftPad_Swipe", (int64)ESIK_InputActionOrigin_PS4_LeftPad_Swipe },
		{ "ESIK_InputActionOrigin_PS4_LeftPad_Click", (int64)ESIK_InputActionOrigin_PS4_LeftPad_Click },
		{ "ESIK_InputActionOrigin_PS4_LeftPad_DPadNorth", (int64)ESIK_InputActionOrigin_PS4_LeftPad_DPadNorth },
		{ "ESIK_InputActionOrigin_PS4_LeftPad_DPadSouth", (int64)ESIK_InputActionOrigin_PS4_LeftPad_DPadSouth },
		{ "ESIK_InputActionOrigin_PS4_LeftPad_DPadWest", (int64)ESIK_InputActionOrigin_PS4_LeftPad_DPadWest },
		{ "ESIK_InputActionOrigin_PS4_LeftPad_DPadEast", (int64)ESIK_InputActionOrigin_PS4_LeftPad_DPadEast },
		{ "ESIK_InputActionOrigin_PS4_RightPad_Touch", (int64)ESIK_InputActionOrigin_PS4_RightPad_Touch },
		{ "ESIK_InputActionOrigin_PS4_RightPad_Swipe", (int64)ESIK_InputActionOrigin_PS4_RightPad_Swipe },
		{ "ESIK_InputActionOrigin_PS4_RightPad_Click", (int64)ESIK_InputActionOrigin_PS4_RightPad_Click },
		{ "ESIK_InputActionOrigin_PS4_RightPad_DPadNorth", (int64)ESIK_InputActionOrigin_PS4_RightPad_DPadNorth },
		{ "ESIK_InputActionOrigin_PS4_RightPad_DPadSouth", (int64)ESIK_InputActionOrigin_PS4_RightPad_DPadSouth },
		{ "ESIK_InputActionOrigin_PS4_RightPad_DPadWest", (int64)ESIK_InputActionOrigin_PS4_RightPad_DPadWest },
		{ "ESIK_InputActionOrigin_PS4_RightPad_DPadEast", (int64)ESIK_InputActionOrigin_PS4_RightPad_DPadEast },
		{ "ESIK_InputActionOrigin_PS4_CenterPad_Touch", (int64)ESIK_InputActionOrigin_PS4_CenterPad_Touch },
		{ "ESIK_InputActionOrigin_PS4_CenterPad_Swipe", (int64)ESIK_InputActionOrigin_PS4_CenterPad_Swipe },
		{ "ESIK_InputActionOrigin_PS4_CenterPad_Click", (int64)ESIK_InputActionOrigin_PS4_CenterPad_Click },
		{ "ESIK_InputActionOrigin_PS4_CenterPad_DPadNorth", (int64)ESIK_InputActionOrigin_PS4_CenterPad_DPadNorth },
		{ "ESIK_InputActionOrigin_PS4_CenterPad_DPadSouth", (int64)ESIK_InputActionOrigin_PS4_CenterPad_DPadSouth },
		{ "ESIK_InputActionOrigin_PS4_CenterPad_DPadWest", (int64)ESIK_InputActionOrigin_PS4_CenterPad_DPadWest },
		{ "ESIK_InputActionOrigin_PS4_CenterPad_DPadEast", (int64)ESIK_InputActionOrigin_PS4_CenterPad_DPadEast },
		{ "ESIK_InputActionOrigin_PS4_LeftTrigger_Pull", (int64)ESIK_InputActionOrigin_PS4_LeftTrigger_Pull },
		{ "ESIK_InputActionOrigin_PS4_LeftTrigger_Click", (int64)ESIK_InputActionOrigin_PS4_LeftTrigger_Click },
		{ "ESIK_InputActionOrigin_PS4_RightTrigger_Pull", (int64)ESIK_InputActionOrigin_PS4_RightTrigger_Pull },
		{ "ESIK_InputActionOrigin_PS4_RightTrigger_Click", (int64)ESIK_InputActionOrigin_PS4_RightTrigger_Click },
		{ "ESIK_InputActionOrigin_PS4_LeftStick_Move", (int64)ESIK_InputActionOrigin_PS4_LeftStick_Move },
		{ "ESIK_InputActionOrigin_PS4_LeftStick_Click", (int64)ESIK_InputActionOrigin_PS4_LeftStick_Click },
		{ "ESIK_InputActionOrigin_PS4_LeftStick_DPadNorth", (int64)ESIK_InputActionOrigin_PS4_LeftStick_DPadNorth },
		{ "ESIK_InputActionOrigin_PS4_LeftStick_DPadSouth", (int64)ESIK_InputActionOrigin_PS4_LeftStick_DPadSouth },
		{ "ESIK_InputActionOrigin_PS4_LeftStick_DPadWest", (int64)ESIK_InputActionOrigin_PS4_LeftStick_DPadWest },
		{ "ESIK_InputActionOrigin_PS4_LeftStick_DPadEast", (int64)ESIK_InputActionOrigin_PS4_LeftStick_DPadEast },
		{ "ESIK_InputActionOrigin_PS4_RightStick_Move", (int64)ESIK_InputActionOrigin_PS4_RightStick_Move },
		{ "ESIK_InputActionOrigin_PS4_RightStick_Click", (int64)ESIK_InputActionOrigin_PS4_RightStick_Click },
		{ "ESIK_InputActionOrigin_PS4_RightStick_DPadNorth", (int64)ESIK_InputActionOrigin_PS4_RightStick_DPadNorth },
		{ "ESIK_InputActionOrigin_PS4_RightStick_DPadSouth", (int64)ESIK_InputActionOrigin_PS4_RightStick_DPadSouth },
		{ "ESIK_InputActionOrigin_PS4_RightStick_DPadWest", (int64)ESIK_InputActionOrigin_PS4_RightStick_DPadWest },
		{ "ESIK_InputActionOrigin_PS4_RightStick_DPadEast", (int64)ESIK_InputActionOrigin_PS4_RightStick_DPadEast },
		{ "ESIK_InputActionOrigin_PS4_DPad_North", (int64)ESIK_InputActionOrigin_PS4_DPad_North },
		{ "ESIK_InputActionOrigin_PS4_DPad_South", (int64)ESIK_InputActionOrigin_PS4_DPad_South },
		{ "ESIK_InputActionOrigin_PS4_DPad_West", (int64)ESIK_InputActionOrigin_PS4_DPad_West },
		{ "ESIK_InputActionOrigin_PS4_DPad_East", (int64)ESIK_InputActionOrigin_PS4_DPad_East },
		{ "ESIK_InputActionOrigin_PS4_Gyro_Move", (int64)ESIK_InputActionOrigin_PS4_Gyro_Move },
		{ "ESIK_InputActionOrigin_PS4_Gyro_Pitch", (int64)ESIK_InputActionOrigin_PS4_Gyro_Pitch },
		{ "ESIK_InputActionOrigin_PS4_Gyro_Yaw", (int64)ESIK_InputActionOrigin_PS4_Gyro_Yaw },
		{ "ESIK_InputActionOrigin_PS4_Gyro_Roll", (int64)ESIK_InputActionOrigin_PS4_Gyro_Roll },
		{ "ESIK_InputActionOrigin_PS4_DPad_Move", (int64)ESIK_InputActionOrigin_PS4_DPad_Move },
		{ "ESIK_InputActionOrigin_PS4_Reserved1", (int64)ESIK_InputActionOrigin_PS4_Reserved1 },
		{ "ESIK_InputActionOrigin_PS4_Reserved2", (int64)ESIK_InputActionOrigin_PS4_Reserved2 },
		{ "ESIK_InputActionOrigin_PS4_Reserved3", (int64)ESIK_InputActionOrigin_PS4_Reserved3 },
		{ "ESIK_InputActionOrigin_PS4_Reserved4", (int64)ESIK_InputActionOrigin_PS4_Reserved4 },
		{ "ESIK_InputActionOrigin_PS4_Reserved5", (int64)ESIK_InputActionOrigin_PS4_Reserved5 },
		{ "ESIK_InputActionOrigin_PS4_Reserved6", (int64)ESIK_InputActionOrigin_PS4_Reserved6 },
		{ "ESIK_InputActionOrigin_PS4_Reserved7", (int64)ESIK_InputActionOrigin_PS4_Reserved7 },
		{ "ESIK_InputActionOrigin_PS4_Reserved8", (int64)ESIK_InputActionOrigin_PS4_Reserved8 },
		{ "ESIK_InputActionOrigin_PS4_Reserved9", (int64)ESIK_InputActionOrigin_PS4_Reserved9 },
		{ "ESIK_InputActionOrigin_PS4_Reserved10", (int64)ESIK_InputActionOrigin_PS4_Reserved10 },
		{ "ESIK_InputActionOrigin_XBoxOne_A", (int64)ESIK_InputActionOrigin_XBoxOne_A },
		{ "ESIK_InputActionOrigin_XBoxOne_B", (int64)ESIK_InputActionOrigin_XBoxOne_B },
		{ "ESIK_InputActionOrigin_XBoxOne_X", (int64)ESIK_InputActionOrigin_XBoxOne_X },
		{ "ESIK_InputActionOrigin_XBoxOne_Y", (int64)ESIK_InputActionOrigin_XBoxOne_Y },
		{ "ESIK_InputActionOrigin_XBoxOne_LeftBumper", (int64)ESIK_InputActionOrigin_XBoxOne_LeftBumper },
		{ "ESIK_InputActionOrigin_XBoxOne_RightBumper", (int64)ESIK_InputActionOrigin_XBoxOne_RightBumper },
		{ "ESIK_InputActionOrigin_XBoxOne_Menu", (int64)ESIK_InputActionOrigin_XBoxOne_Menu },
		{ "ESIK_InputActionOrigin_XBoxOne_View", (int64)ESIK_InputActionOrigin_XBoxOne_View },
		{ "ESIK_InputActionOrigin_XBoxOne_LeftTrigger_Pull", (int64)ESIK_InputActionOrigin_XBoxOne_LeftTrigger_Pull },
		{ "ESIK_InputActionOrigin_XBoxOne_LeftTrigger_Click", (int64)ESIK_InputActionOrigin_XBoxOne_LeftTrigger_Click },
		{ "ESIK_InputActionOrigin_XBoxOne_RightTrigger_Pull", (int64)ESIK_InputActionOrigin_XBoxOne_RightTrigger_Pull },
		{ "ESIK_InputActionOrigin_XBoxOne_RightTrigger_Click", (int64)ESIK_InputActionOrigin_XBoxOne_RightTrigger_Click },
		{ "ESIK_InputActionOrigin_XBoxOne_LeftStick_Move", (int64)ESIK_InputActionOrigin_XBoxOne_LeftStick_Move },
		{ "ESIK_InputActionOrigin_XBoxOne_LeftStick_Click", (int64)ESIK_InputActionOrigin_XBoxOne_LeftStick_Click },
		{ "ESIK_InputActionOrigin_XBoxOne_LeftStick_DPadNorth", (int64)ESIK_InputActionOrigin_XBoxOne_LeftStick_DPadNorth },
		{ "ESIK_InputActionOrigin_XBoxOne_LeftStick_DPadSouth", (int64)ESIK_InputActionOrigin_XBoxOne_LeftStick_DPadSouth },
		{ "ESIK_InputActionOrigin_XBoxOne_LeftStick_DPadWest", (int64)ESIK_InputActionOrigin_XBoxOne_LeftStick_DPadWest },
		{ "ESIK_InputActionOrigin_XBoxOne_LeftStick_DPadEast", (int64)ESIK_InputActionOrigin_XBoxOne_LeftStick_DPadEast },
		{ "ESIK_InputActionOrigin_XBoxOne_RightStick_Move", (int64)ESIK_InputActionOrigin_XBoxOne_RightStick_Move },
		{ "ESIK_InputActionOrigin_XBoxOne_RightStick_Click", (int64)ESIK_InputActionOrigin_XBoxOne_RightStick_Click },
		{ "ESIK_InputActionOrigin_XBoxOne_RightStick_DPadNorth", (int64)ESIK_InputActionOrigin_XBoxOne_RightStick_DPadNorth },
		{ "ESIK_InputActionOrigin_XBoxOne_RightStick_DPadSouth", (int64)ESIK_InputActionOrigin_XBoxOne_RightStick_DPadSouth },
		{ "ESIK_InputActionOrigin_XBoxOne_RightStick_DPadWest", (int64)ESIK_InputActionOrigin_XBoxOne_RightStick_DPadWest },
		{ "ESIK_InputActionOrigin_XBoxOne_RightStick_DPadEast", (int64)ESIK_InputActionOrigin_XBoxOne_RightStick_DPadEast },
		{ "ESIK_InputActionOrigin_XBoxOne_DPad_North", (int64)ESIK_InputActionOrigin_XBoxOne_DPad_North },
		{ "ESIK_InputActionOrigin_XBoxOne_DPad_South", (int64)ESIK_InputActionOrigin_XBoxOne_DPad_South },
		{ "ESIK_InputActionOrigin_XBoxOne_DPad_West", (int64)ESIK_InputActionOrigin_XBoxOne_DPad_West },
		{ "ESIK_InputActionOrigin_XBoxOne_DPad_East", (int64)ESIK_InputActionOrigin_XBoxOne_DPad_East },
		{ "ESIK_InputActionOrigin_XBoxOne_DPad_Move", (int64)ESIK_InputActionOrigin_XBoxOne_DPad_Move },
		{ "ESIK_InputActionOrigin_XBoxOne_LeftGrip_Lower", (int64)ESIK_InputActionOrigin_XBoxOne_LeftGrip_Lower },
		{ "ESIK_InputActionOrigin_XBoxOne_LeftGrip_Upper", (int64)ESIK_InputActionOrigin_XBoxOne_LeftGrip_Upper },
		{ "ESIK_InputActionOrigin_XBoxOne_RightGrip_Lower", (int64)ESIK_InputActionOrigin_XBoxOne_RightGrip_Lower },
		{ "ESIK_InputActionOrigin_XBoxOne_RightGrip_Upper", (int64)ESIK_InputActionOrigin_XBoxOne_RightGrip_Upper },
		{ "ESIK_InputActionOrigin_XBoxOne_Share", (int64)ESIK_InputActionOrigin_XBoxOne_Share },
		{ "ESIK_InputActionOrigin_XBoxOne_Reserved6", (int64)ESIK_InputActionOrigin_XBoxOne_Reserved6 },
		{ "ESIK_InputActionOrigin_XBoxOne_Reserved7", (int64)ESIK_InputActionOrigin_XBoxOne_Reserved7 },
		{ "ESIK_InputActionOrigin_XBoxOne_Reserved8", (int64)ESIK_InputActionOrigin_XBoxOne_Reserved8 },
		{ "ESIK_InputActionOrigin_XBoxOne_Reserved9", (int64)ESIK_InputActionOrigin_XBoxOne_Reserved9 },
		{ "ESIK_InputActionOrigin_XBoxOne_Reserved10", (int64)ESIK_InputActionOrigin_XBoxOne_Reserved10 },
		{ "ESIK_InputActionOrigin_XBox360_A", (int64)ESIK_InputActionOrigin_XBox360_A },
		{ "ESIK_InputActionOrigin_XBox360_B", (int64)ESIK_InputActionOrigin_XBox360_B },
		{ "ESIK_InputActionOrigin_XBox360_X", (int64)ESIK_InputActionOrigin_XBox360_X },
		{ "ESIK_InputActionOrigin_XBox360_Y", (int64)ESIK_InputActionOrigin_XBox360_Y },
		{ "ESIK_InputActionOrigin_XBox360_LeftBumper", (int64)ESIK_InputActionOrigin_XBox360_LeftBumper },
		{ "ESIK_InputActionOrigin_XBox360_RightBumper", (int64)ESIK_InputActionOrigin_XBox360_RightBumper },
		{ "ESIK_InputActionOrigin_XBox360_Start", (int64)ESIK_InputActionOrigin_XBox360_Start },
		{ "ESIK_InputActionOrigin_XBox360_Back", (int64)ESIK_InputActionOrigin_XBox360_Back },
		{ "ESIK_InputActionOrigin_XBox360_LeftTrigger_Pull", (int64)ESIK_InputActionOrigin_XBox360_LeftTrigger_Pull },
		{ "ESIK_InputActionOrigin_XBox360_LeftTrigger_Click", (int64)ESIK_InputActionOrigin_XBox360_LeftTrigger_Click },
		{ "ESIK_InputActionOrigin_XBox360_RightTrigger_Pull", (int64)ESIK_InputActionOrigin_XBox360_RightTrigger_Pull },
		{ "ESIK_InputActionOrigin_XBox360_RightTrigger_Click", (int64)ESIK_InputActionOrigin_XBox360_RightTrigger_Click },
		{ "ESIK_InputActionOrigin_XBox360_LeftStick_Move", (int64)ESIK_InputActionOrigin_XBox360_LeftStick_Move },
		{ "ESIK_InputActionOrigin_XBox360_LeftStick_Click", (int64)ESIK_InputActionOrigin_XBox360_LeftStick_Click },
		{ "ESIK_InputActionOrigin_XBox360_LeftStick_DPadNorth", (int64)ESIK_InputActionOrigin_XBox360_LeftStick_DPadNorth },
		{ "ESIK_InputActionOrigin_XBox360_LeftStick_DPadSouth", (int64)ESIK_InputActionOrigin_XBox360_LeftStick_DPadSouth },
		{ "ESIK_InputActionOrigin_XBox360_LeftStick_DPadWest", (int64)ESIK_InputActionOrigin_XBox360_LeftStick_DPadWest },
		{ "ESIK_InputActionOrigin_XBox360_LeftStick_DPadEast", (int64)ESIK_InputActionOrigin_XBox360_LeftStick_DPadEast },
		{ "ESIK_InputActionOrigin_XBox360_RightStick_Move", (int64)ESIK_InputActionOrigin_XBox360_RightStick_Move },
		{ "ESIK_InputActionOrigin_XBox360_RightStick_Click", (int64)ESIK_InputActionOrigin_XBox360_RightStick_Click },
		{ "ESIK_InputActionOrigin_XBox360_RightStick_DPadNorth", (int64)ESIK_InputActionOrigin_XBox360_RightStick_DPadNorth },
		{ "ESIK_InputActionOrigin_XBox360_RightStick_DPadSouth", (int64)ESIK_InputActionOrigin_XBox360_RightStick_DPadSouth },
		{ "ESIK_InputActionOrigin_XBox360_RightStick_DPadWest", (int64)ESIK_InputActionOrigin_XBox360_RightStick_DPadWest },
		{ "ESIK_InputActionOrigin_XBox360_RightStick_DPadEast", (int64)ESIK_InputActionOrigin_XBox360_RightStick_DPadEast },
		{ "ESIK_InputActionOrigin_XBox360_DPad_North", (int64)ESIK_InputActionOrigin_XBox360_DPad_North },
		{ "ESIK_InputActionOrigin_XBox360_DPad_South", (int64)ESIK_InputActionOrigin_XBox360_DPad_South },
		{ "ESIK_InputActionOrigin_XBox360_DPad_West", (int64)ESIK_InputActionOrigin_XBox360_DPad_West },
		{ "ESIK_InputActionOrigin_XBox360_DPad_East", (int64)ESIK_InputActionOrigin_XBox360_DPad_East },
		{ "ESIK_InputActionOrigin_XBox360_DPad_Move", (int64)ESIK_InputActionOrigin_XBox360_DPad_Move },
		{ "ESIK_InputActionOrigin_XBox360_Reserved1", (int64)ESIK_InputActionOrigin_XBox360_Reserved1 },
		{ "ESIK_InputActionOrigin_XBox360_Reserved2", (int64)ESIK_InputActionOrigin_XBox360_Reserved2 },
		{ "ESIK_InputActionOrigin_XBox360_Reserved3", (int64)ESIK_InputActionOrigin_XBox360_Reserved3 },
		{ "ESIK_InputActionOrigin_XBox360_Reserved4", (int64)ESIK_InputActionOrigin_XBox360_Reserved4 },
		{ "ESIK_InputActionOrigin_XBox360_Reserved5", (int64)ESIK_InputActionOrigin_XBox360_Reserved5 },
		{ "ESIK_InputActionOrigin_XBox360_Reserved6", (int64)ESIK_InputActionOrigin_XBox360_Reserved6 },
		{ "ESIK_InputActionOrigin_XBox360_Reserved7", (int64)ESIK_InputActionOrigin_XBox360_Reserved7 },
		{ "ESIK_InputActionOrigin_XBox360_Reserved8", (int64)ESIK_InputActionOrigin_XBox360_Reserved8 },
		{ "ESIK_InputActionOrigin_XBox360_Reserved9", (int64)ESIK_InputActionOrigin_XBox360_Reserved9 },
		{ "ESIK_InputActionOrigin_XBox360_Reserved10", (int64)ESIK_InputActionOrigin_XBox360_Reserved10 },
		{ "ESIK_InputActionOrigin_Switch_A", (int64)ESIK_InputActionOrigin_Switch_A },
		{ "ESIK_InputActionOrigin_Switch_B", (int64)ESIK_InputActionOrigin_Switch_B },
		{ "ESIK_InputActionOrigin_Switch_X", (int64)ESIK_InputActionOrigin_Switch_X },
		{ "ESIK_InputActionOrigin_Switch_Y", (int64)ESIK_InputActionOrigin_Switch_Y },
		{ "ESIK_InputActionOrigin_Switch_LeftBumper", (int64)ESIK_InputActionOrigin_Switch_LeftBumper },
		{ "ESIK_InputActionOrigin_Switch_RightBumper", (int64)ESIK_InputActionOrigin_Switch_RightBumper },
		{ "ESIK_InputActionOrigin_Switch_Plus", (int64)ESIK_InputActionOrigin_Switch_Plus },
		{ "ESIK_InputActionOrigin_Switch_Minus", (int64)ESIK_InputActionOrigin_Switch_Minus },
		{ "ESIK_InputActionOrigin_Switch_Capture", (int64)ESIK_InputActionOrigin_Switch_Capture },
		{ "ESIK_InputActionOrigin_Switch_LeftTrigger_Pull", (int64)ESIK_InputActionOrigin_Switch_LeftTrigger_Pull },
		{ "ESIK_InputActionOrigin_Switch_LeftTrigger_Click", (int64)ESIK_InputActionOrigin_Switch_LeftTrigger_Click },
		{ "ESIK_InputActionOrigin_Switch_RightTrigger_Pull", (int64)ESIK_InputActionOrigin_Switch_RightTrigger_Pull },
		{ "ESIK_InputActionOrigin_Switch_RightTrigger_Click", (int64)ESIK_InputActionOrigin_Switch_RightTrigger_Click },
		{ "ESIK_InputActionOrigin_Switch_LeftStick_Move", (int64)ESIK_InputActionOrigin_Switch_LeftStick_Move },
		{ "ESIK_InputActionOrigin_Switch_LeftStick_Click", (int64)ESIK_InputActionOrigin_Switch_LeftStick_Click },
		{ "ESIK_InputActionOrigin_Switch_LeftStick_DPadNorth", (int64)ESIK_InputActionOrigin_Switch_LeftStick_DPadNorth },
		{ "ESIK_InputActionOrigin_Switch_LeftStick_DPadSouth", (int64)ESIK_InputActionOrigin_Switch_LeftStick_DPadSouth },
		{ "ESIK_InputActionOrigin_Switch_LeftStick_DPadWest", (int64)ESIK_InputActionOrigin_Switch_LeftStick_DPadWest },
		{ "ESIK_InputActionOrigin_Switch_LeftStick_DPadEast", (int64)ESIK_InputActionOrigin_Switch_LeftStick_DPadEast },
		{ "ESIK_InputActionOrigin_Switch_RightStick_Move", (int64)ESIK_InputActionOrigin_Switch_RightStick_Move },
		{ "ESIK_InputActionOrigin_Switch_RightStick_Click", (int64)ESIK_InputActionOrigin_Switch_RightStick_Click },
		{ "ESIK_InputActionOrigin_Switch_RightStick_DPadNorth", (int64)ESIK_InputActionOrigin_Switch_RightStick_DPadNorth },
		{ "ESIK_InputActionOrigin_Switch_RightStick_DPadSouth", (int64)ESIK_InputActionOrigin_Switch_RightStick_DPadSouth },
		{ "ESIK_InputActionOrigin_Switch_RightStick_DPadWest", (int64)ESIK_InputActionOrigin_Switch_RightStick_DPadWest },
		{ "ESIK_InputActionOrigin_Switch_RightStick_DPadEast", (int64)ESIK_InputActionOrigin_Switch_RightStick_DPadEast },
		{ "ESIK_InputActionOrigin_Switch_DPad_North", (int64)ESIK_InputActionOrigin_Switch_DPad_North },
		{ "ESIK_InputActionOrigin_Switch_DPad_South", (int64)ESIK_InputActionOrigin_Switch_DPad_South },
		{ "ESIK_InputActionOrigin_Switch_DPad_West", (int64)ESIK_InputActionOrigin_Switch_DPad_West },
		{ "ESIK_InputActionOrigin_Switch_DPad_East", (int64)ESIK_InputActionOrigin_Switch_DPad_East },
		{ "ESIK_InputActionOrigin_Switch_ProGyro_Move", (int64)ESIK_InputActionOrigin_Switch_ProGyro_Move },
		{ "ESIK_InputActionOrigin_Switch_ProGyro_Pitch", (int64)ESIK_InputActionOrigin_Switch_ProGyro_Pitch },
		{ "ESIK_InputActionOrigin_Switch_ProGyro_Yaw", (int64)ESIK_InputActionOrigin_Switch_ProGyro_Yaw },
		{ "ESIK_InputActionOrigin_Switch_ProGyro_Roll", (int64)ESIK_InputActionOrigin_Switch_ProGyro_Roll },
		{ "ESIK_InputActionOrigin_Switch_DPad_Move", (int64)ESIK_InputActionOrigin_Switch_DPad_Move },
		{ "ESIK_InputActionOrigin_Switch_Reserved1", (int64)ESIK_InputActionOrigin_Switch_Reserved1 },
		{ "ESIK_InputActionOrigin_Switch_Reserved2", (int64)ESIK_InputActionOrigin_Switch_Reserved2 },
		{ "ESIK_InputActionOrigin_Switch_Reserved3", (int64)ESIK_InputActionOrigin_Switch_Reserved3 },
		{ "ESIK_InputActionOrigin_Switch_Reserved4", (int64)ESIK_InputActionOrigin_Switch_Reserved4 },
		{ "ESIK_InputActionOrigin_Switch_Reserved5", (int64)ESIK_InputActionOrigin_Switch_Reserved5 },
		{ "ESIK_InputActionOrigin_Switch_Reserved6", (int64)ESIK_InputActionOrigin_Switch_Reserved6 },
		{ "ESIK_InputActionOrigin_Switch_Reserved7", (int64)ESIK_InputActionOrigin_Switch_Reserved7 },
		{ "ESIK_InputActionOrigin_Switch_Reserved8", (int64)ESIK_InputActionOrigin_Switch_Reserved8 },
		{ "ESIK_InputActionOrigin_Switch_Reserved9", (int64)ESIK_InputActionOrigin_Switch_Reserved9 },
		{ "ESIK_InputActionOrigin_Switch_Reserved10", (int64)ESIK_InputActionOrigin_Switch_Reserved10 },
		{ "ESIK_InputActionOrigin_Switch_RightGyro_Move", (int64)ESIK_InputActionOrigin_Switch_RightGyro_Move },
		{ "ESIK_InputActionOrigin_Switch_RightGyro_Pitch", (int64)ESIK_InputActionOrigin_Switch_RightGyro_Pitch },
		{ "ESIK_InputActionOrigin_Switch_RightGyro_Yaw", (int64)ESIK_InputActionOrigin_Switch_RightGyro_Yaw },
		{ "ESIK_InputActionOrigin_Switch_RightGyro_Roll", (int64)ESIK_InputActionOrigin_Switch_RightGyro_Roll },
		{ "ESIK_InputActionOrigin_Switch_LeftGyro_Move", (int64)ESIK_InputActionOrigin_Switch_LeftGyro_Move },
		{ "ESIK_InputActionOrigin_Switch_LeftGyro_Pitch", (int64)ESIK_InputActionOrigin_Switch_LeftGyro_Pitch },
		{ "ESIK_InputActionOrigin_Switch_LeftGyro_Yaw", (int64)ESIK_InputActionOrigin_Switch_LeftGyro_Yaw },
		{ "ESIK_InputActionOrigin_Switch_LeftGyro_Roll", (int64)ESIK_InputActionOrigin_Switch_LeftGyro_Roll },
		{ "ESIK_InputActionOrigin_Switch_LeftGrip_Lower", (int64)ESIK_InputActionOrigin_Switch_LeftGrip_Lower },
		{ "ESIK_InputActionOrigin_Switch_LeftGrip_Upper", (int64)ESIK_InputActionOrigin_Switch_LeftGrip_Upper },
		{ "ESIK_InputActionOrigin_Switch_RightGrip_Lower", (int64)ESIK_InputActionOrigin_Switch_RightGrip_Lower },
		{ "ESIK_InputActionOrigin_Switch_RightGrip_Upper", (int64)ESIK_InputActionOrigin_Switch_RightGrip_Upper },
		{ "ESIK_InputActionOrigin_Switch_JoyConButton_N", (int64)ESIK_InputActionOrigin_Switch_JoyConButton_N },
		{ "ESIK_InputActionOrigin_Switch_JoyConButton_E", (int64)ESIK_InputActionOrigin_Switch_JoyConButton_E },
		{ "ESIK_InputActionOrigin_Switch_JoyConButton_S", (int64)ESIK_InputActionOrigin_Switch_JoyConButton_S },
		{ "ESIK_InputActionOrigin_Switch_JoyConButton_W", (int64)ESIK_InputActionOrigin_Switch_JoyConButton_W },
		{ "ESIK_InputActionOrigin_Switch_Reserved15", (int64)ESIK_InputActionOrigin_Switch_Reserved15 },
		{ "ESIK_InputActionOrigin_Switch_Reserved16", (int64)ESIK_InputActionOrigin_Switch_Reserved16 },
		{ "ESIK_InputActionOrigin_Switch_Reserved17", (int64)ESIK_InputActionOrigin_Switch_Reserved17 },
		{ "ESIK_InputActionOrigin_Switch_Reserved18", (int64)ESIK_InputActionOrigin_Switch_Reserved18 },
		{ "ESIK_InputActionOrigin_Switch_Reserved19", (int64)ESIK_InputActionOrigin_Switch_Reserved19 },
		{ "ESIK_InputActionOrigin_Switch_Reserved20", (int64)ESIK_InputActionOrigin_Switch_Reserved20 },
		{ "ESIK_InputActionOrigin_PS5_X", (int64)ESIK_InputActionOrigin_PS5_X },
		{ "ESIK_InputActionOrigin_PS5_Circle", (int64)ESIK_InputActionOrigin_PS5_Circle },
		{ "ESIK_InputActionOrigin_PS5_Triangle", (int64)ESIK_InputActionOrigin_PS5_Triangle },
		{ "ESIK_InputActionOrigin_PS5_Square", (int64)ESIK_InputActionOrigin_PS5_Square },
		{ "ESIK_InputActionOrigin_PS5_LeftBumper", (int64)ESIK_InputActionOrigin_PS5_LeftBumper },
		{ "ESIK_InputActionOrigin_PS5_RightBumper", (int64)ESIK_InputActionOrigin_PS5_RightBumper },
		{ "ESIK_InputActionOrigin_PS5_Option", (int64)ESIK_InputActionOrigin_PS5_Option },
		{ "ESIK_InputActionOrigin_PS5_Create", (int64)ESIK_InputActionOrigin_PS5_Create },
		{ "ESIK_InputActionOrigin_PS5_Mute", (int64)ESIK_InputActionOrigin_PS5_Mute },
		{ "ESIK_InputActionOrigin_PS5_LeftPad_Touch", (int64)ESIK_InputActionOrigin_PS5_LeftPad_Touch },
		{ "ESIK_InputActionOrigin_PS5_LeftPad_Swipe", (int64)ESIK_InputActionOrigin_PS5_LeftPad_Swipe },
		{ "ESIK_InputActionOrigin_PS5_LeftPad_Click", (int64)ESIK_InputActionOrigin_PS5_LeftPad_Click },
		{ "ESIK_InputActionOrigin_PS5_LeftPad_DPadNorth", (int64)ESIK_InputActionOrigin_PS5_LeftPad_DPadNorth },
		{ "ESIK_InputActionOrigin_PS5_LeftPad_DPadSouth", (int64)ESIK_InputActionOrigin_PS5_LeftPad_DPadSouth },
		{ "ESIK_InputActionOrigin_PS5_LeftPad_DPadWest", (int64)ESIK_InputActionOrigin_PS5_LeftPad_DPadWest },
		{ "ESIK_InputActionOrigin_PS5_LeftPad_DPadEast", (int64)ESIK_InputActionOrigin_PS5_LeftPad_DPadEast },
		{ "ESIK_InputActionOrigin_PS5_RightPad_Touch", (int64)ESIK_InputActionOrigin_PS5_RightPad_Touch },
		{ "ESIK_InputActionOrigin_PS5_RightPad_Swipe", (int64)ESIK_InputActionOrigin_PS5_RightPad_Swipe },
		{ "ESIK_InputActionOrigin_PS5_RightPad_Click", (int64)ESIK_InputActionOrigin_PS5_RightPad_Click },
		{ "ESIK_InputActionOrigin_PS5_RightPad_DPadNorth", (int64)ESIK_InputActionOrigin_PS5_RightPad_DPadNorth },
		{ "ESIK_InputActionOrigin_PS5_RightPad_DPadSouth", (int64)ESIK_InputActionOrigin_PS5_RightPad_DPadSouth },
		{ "ESIK_InputActionOrigin_PS5_RightPad_DPadWest", (int64)ESIK_InputActionOrigin_PS5_RightPad_DPadWest },
		{ "ESIK_InputActionOrigin_PS5_RightPad_DPadEast", (int64)ESIK_InputActionOrigin_PS5_RightPad_DPadEast },
		{ "ESIK_InputActionOrigin_PS5_CenterPad_Touch", (int64)ESIK_InputActionOrigin_PS5_CenterPad_Touch },
		{ "ESIK_InputActionOrigin_PS5_CenterPad_Swipe", (int64)ESIK_InputActionOrigin_PS5_CenterPad_Swipe },
		{ "ESIK_InputActionOrigin_PS5_CenterPad_Click", (int64)ESIK_InputActionOrigin_PS5_CenterPad_Click },
		{ "ESIK_InputActionOrigin_PS5_CenterPad_DPadNorth", (int64)ESIK_InputActionOrigin_PS5_CenterPad_DPadNorth },
		{ "ESIK_InputActionOrigin_PS5_CenterPad_DPadSouth", (int64)ESIK_InputActionOrigin_PS5_CenterPad_DPadSouth },
		{ "ESIK_InputActionOrigin_PS5_CenterPad_DPadWest", (int64)ESIK_InputActionOrigin_PS5_CenterPad_DPadWest },
		{ "ESIK_InputActionOrigin_PS5_CenterPad_DPadEast", (int64)ESIK_InputActionOrigin_PS5_CenterPad_DPadEast },
		{ "ESIK_InputActionOrigin_PS5_LeftTrigger_Pull", (int64)ESIK_InputActionOrigin_PS5_LeftTrigger_Pull },
		{ "ESIK_InputActionOrigin_PS5_LeftTrigger_Click", (int64)ESIK_InputActionOrigin_PS5_LeftTrigger_Click },
		{ "ESIK_InputActionOrigin_PS5_RightTrigger_Pull", (int64)ESIK_InputActionOrigin_PS5_RightTrigger_Pull },
		{ "ESIK_InputActionOrigin_PS5_RightTrigger_Click", (int64)ESIK_InputActionOrigin_PS5_RightTrigger_Click },
		{ "ESIK_InputActionOrigin_PS5_LeftStick_Move", (int64)ESIK_InputActionOrigin_PS5_LeftStick_Move },
		{ "ESIK_InputActionOrigin_PS5_LeftStick_Click", (int64)ESIK_InputActionOrigin_PS5_LeftStick_Click },
		{ "ESIK_InputActionOrigin_PS5_LeftStick_DPadNorth", (int64)ESIK_InputActionOrigin_PS5_LeftStick_DPadNorth },
		{ "ESIK_InputActionOrigin_PS5_LeftStick_DPadSouth", (int64)ESIK_InputActionOrigin_PS5_LeftStick_DPadSouth },
		{ "ESIK_InputActionOrigin_PS5_LeftStick_DPadWest", (int64)ESIK_InputActionOrigin_PS5_LeftStick_DPadWest },
		{ "ESIK_InputActionOrigin_PS5_LeftStick_DPadEast", (int64)ESIK_InputActionOrigin_PS5_LeftStick_DPadEast },
		{ "ESIK_InputActionOrigin_PS5_RightStick_Move", (int64)ESIK_InputActionOrigin_PS5_RightStick_Move },
		{ "ESIK_InputActionOrigin_PS5_RightStick_Click", (int64)ESIK_InputActionOrigin_PS5_RightStick_Click },
		{ "ESIK_InputActionOrigin_PS5_RightStick_DPadNorth", (int64)ESIK_InputActionOrigin_PS5_RightStick_DPadNorth },
		{ "ESIK_InputActionOrigin_PS5_RightStick_DPadSouth", (int64)ESIK_InputActionOrigin_PS5_RightStick_DPadSouth },
		{ "ESIK_InputActionOrigin_PS5_RightStick_DPadWest", (int64)ESIK_InputActionOrigin_PS5_RightStick_DPadWest },
		{ "ESIK_InputActionOrigin_PS5_RightStick_DPadEast", (int64)ESIK_InputActionOrigin_PS5_RightStick_DPadEast },
		{ "ESIK_InputActionOrigin_PS5_DPad_North", (int64)ESIK_InputActionOrigin_PS5_DPad_North },
		{ "ESIK_InputActionOrigin_PS5_DPad_South", (int64)ESIK_InputActionOrigin_PS5_DPad_South },
		{ "ESIK_InputActionOrigin_PS5_DPad_West", (int64)ESIK_InputActionOrigin_PS5_DPad_West },
		{ "ESIK_InputActionOrigin_PS5_DPad_East", (int64)ESIK_InputActionOrigin_PS5_DPad_East },
		{ "ESIK_InputActionOrigin_PS5_Gyro_Move", (int64)ESIK_InputActionOrigin_PS5_Gyro_Move },
		{ "ESIK_InputActionOrigin_PS5_Gyro_Pitch", (int64)ESIK_InputActionOrigin_PS5_Gyro_Pitch },
		{ "ESIK_InputActionOrigin_PS5_Gyro_Yaw", (int64)ESIK_InputActionOrigin_PS5_Gyro_Yaw },
		{ "ESIK_InputActionOrigin_PS5_Gyro_Roll", (int64)ESIK_InputActionOrigin_PS5_Gyro_Roll },
		{ "ESIK_InputActionOrigin_PS5_DPad_Move", (int64)ESIK_InputActionOrigin_PS5_DPad_Move },
		{ "ESIK_InputActionOrigin_PS5_LeftGrip", (int64)ESIK_InputActionOrigin_PS5_LeftGrip },
		{ "ESIK_InputActionOrigin_PS5_RightGrip", (int64)ESIK_InputActionOrigin_PS5_RightGrip },
		{ "ESIK_InputActionOrigin_PS5_LeftFn", (int64)ESIK_InputActionOrigin_PS5_LeftFn },
		{ "ESIK_InputActionOrigin_PS5_RightFn", (int64)ESIK_InputActionOrigin_PS5_RightFn },
		{ "ESIK_InputActionOrigin_PS5_Reserved5", (int64)ESIK_InputActionOrigin_PS5_Reserved5 },
		{ "ESIK_InputActionOrigin_PS5_Reserved6", (int64)ESIK_InputActionOrigin_PS5_Reserved6 },
		{ "ESIK_InputActionOrigin_PS5_Reserved7", (int64)ESIK_InputActionOrigin_PS5_Reserved7 },
		{ "ESIK_InputActionOrigin_PS5_Reserved8", (int64)ESIK_InputActionOrigin_PS5_Reserved8 },
		{ "ESIK_InputActionOrigin_PS5_Reserved9", (int64)ESIK_InputActionOrigin_PS5_Reserved9 },
		{ "ESIK_InputActionOrigin_PS5_Reserved10", (int64)ESIK_InputActionOrigin_PS5_Reserved10 },
		{ "ESIK_InputActionOrigin_PS5_Reserved11", (int64)ESIK_InputActionOrigin_PS5_Reserved11 },
		{ "ESIK_InputActionOrigin_PS5_Reserved12", (int64)ESIK_InputActionOrigin_PS5_Reserved12 },
		{ "ESIK_InputActionOrigin_PS5_Reserved13", (int64)ESIK_InputActionOrigin_PS5_Reserved13 },
		{ "ESIK_InputActionOrigin_PS5_Reserved14", (int64)ESIK_InputActionOrigin_PS5_Reserved14 },
		{ "ESIK_InputActionOrigin_PS5_Reserved15", (int64)ESIK_InputActionOrigin_PS5_Reserved15 },
		{ "ESIK_InputActionOrigin_PS5_Reserved16", (int64)ESIK_InputActionOrigin_PS5_Reserved16 },
		{ "ESIK_InputActionOrigin_PS5_Reserved17", (int64)ESIK_InputActionOrigin_PS5_Reserved17 },
		{ "ESIK_InputActionOrigin_PS5_Reserved18", (int64)ESIK_InputActionOrigin_PS5_Reserved18 },
		{ "ESIK_InputActionOrigin_PS5_Reserved19", (int64)ESIK_InputActionOrigin_PS5_Reserved19 },
		{ "ESIK_InputActionOrigin_PS5_Reserved20", (int64)ESIK_InputActionOrigin_PS5_Reserved20 },
		{ "ESIK_InputActionOrigin_SteamDeck_A", (int64)ESIK_InputActionOrigin_SteamDeck_A },
		{ "ESIK_InputActionOrigin_SteamDeck_B", (int64)ESIK_InputActionOrigin_SteamDeck_B },
		{ "ESIK_InputActionOrigin_SteamDeck_X", (int64)ESIK_InputActionOrigin_SteamDeck_X },
		{ "ESIK_InputActionOrigin_SteamDeck_Y", (int64)ESIK_InputActionOrigin_SteamDeck_Y },
		{ "ESIK_InputActionOrigin_SteamDeck_L1", (int64)ESIK_InputActionOrigin_SteamDeck_L1 },
		{ "ESIK_InputActionOrigin_SteamDeck_R1", (int64)ESIK_InputActionOrigin_SteamDeck_R1 },
		{ "ESIK_InputActionOrigin_SteamDeck_Menu", (int64)ESIK_InputActionOrigin_SteamDeck_Menu },
		{ "ESIK_InputActionOrigin_SteamDeck_View", (int64)ESIK_InputActionOrigin_SteamDeck_View },
		{ "ESIK_InputActionOrigin_SteamDeck_LeftPad_Touch", (int64)ESIK_InputActionOrigin_SteamDeck_LeftPad_Touch },
		{ "ESIK_InputActionOrigin_SteamDeck_LeftPad_Swipe", (int64)ESIK_InputActionOrigin_SteamDeck_LeftPad_Swipe },
		{ "ESIK_InputActionOrigin_SteamDeck_LeftPad_Click", (int64)ESIK_InputActionOrigin_SteamDeck_LeftPad_Click },
		{ "ESIK_InputActionOrigin_SteamDeck_LeftPad_DPadNorth", (int64)ESIK_InputActionOrigin_SteamDeck_LeftPad_DPadNorth },
		{ "ESIK_InputActionOrigin_SteamDeck_LeftPad_DPadSouth", (int64)ESIK_InputActionOrigin_SteamDeck_LeftPad_DPadSouth },
		{ "ESIK_InputActionOrigin_SteamDeck_LeftPad_DPadWest", (int64)ESIK_InputActionOrigin_SteamDeck_LeftPad_DPadWest },
		{ "ESIK_InputActionOrigin_SteamDeck_LeftPad_DPadEast", (int64)ESIK_InputActionOrigin_SteamDeck_LeftPad_DPadEast },
		{ "ESIK_InputActionOrigin_SteamDeck_RightPad_Touch", (int64)ESIK_InputActionOrigin_SteamDeck_RightPad_Touch },
		{ "ESIK_InputActionOrigin_SteamDeck_RightPad_Swipe", (int64)ESIK_InputActionOrigin_SteamDeck_RightPad_Swipe },
		{ "ESIK_InputActionOrigin_SteamDeck_RightPad_Click", (int64)ESIK_InputActionOrigin_SteamDeck_RightPad_Click },
		{ "ESIK_InputActionOrigin_SteamDeck_RightPad_DPadNorth", (int64)ESIK_InputActionOrigin_SteamDeck_RightPad_DPadNorth },
		{ "ESIK_InputActionOrigin_SteamDeck_RightPad_DPadSouth", (int64)ESIK_InputActionOrigin_SteamDeck_RightPad_DPadSouth },
		{ "ESIK_InputActionOrigin_SteamDeck_RightPad_DPadWest", (int64)ESIK_InputActionOrigin_SteamDeck_RightPad_DPadWest },
		{ "ESIK_InputActionOrigin_SteamDeck_RightPad_DPadEast", (int64)ESIK_InputActionOrigin_SteamDeck_RightPad_DPadEast },
		{ "ESIK_InputActionOrigin_SteamDeck_L2_SoftPull", (int64)ESIK_InputActionOrigin_SteamDeck_L2_SoftPull },
		{ "ESIK_InputActionOrigin_SteamDeck_L2", (int64)ESIK_InputActionOrigin_SteamDeck_L2 },
		{ "ESIK_InputActionOrigin_SteamDeck_R2_SoftPull", (int64)ESIK_InputActionOrigin_SteamDeck_R2_SoftPull },
		{ "ESIK_InputActionOrigin_SteamDeck_R2", (int64)ESIK_InputActionOrigin_SteamDeck_R2 },
		{ "ESIK_InputActionOrigin_SteamDeck_LeftStick_Move", (int64)ESIK_InputActionOrigin_SteamDeck_LeftStick_Move },
		{ "ESIK_InputActionOrigin_SteamDeck_L3", (int64)ESIK_InputActionOrigin_SteamDeck_L3 },
		{ "ESIK_InputActionOrigin_SteamDeck_LeftStick_DPadNorth", (int64)ESIK_InputActionOrigin_SteamDeck_LeftStick_DPadNorth },
		{ "ESIK_InputActionOrigin_SteamDeck_LeftStick_DPadSouth", (int64)ESIK_InputActionOrigin_SteamDeck_LeftStick_DPadSouth },
		{ "ESIK_InputActionOrigin_SteamDeck_LeftStick_DPadWest", (int64)ESIK_InputActionOrigin_SteamDeck_LeftStick_DPadWest },
		{ "ESIK_InputActionOrigin_SteamDeck_LeftStick_DPadEast", (int64)ESIK_InputActionOrigin_SteamDeck_LeftStick_DPadEast },
		{ "ESIK_InputActionOrigin_SteamDeck_LeftStick_Touch", (int64)ESIK_InputActionOrigin_SteamDeck_LeftStick_Touch },
		{ "ESIK_InputActionOrigin_SteamDeck_RightStick_Move", (int64)ESIK_InputActionOrigin_SteamDeck_RightStick_Move },
		{ "ESIK_InputActionOrigin_SteamDeck_R3", (int64)ESIK_InputActionOrigin_SteamDeck_R3 },
		{ "ESIK_InputActionOrigin_SteamDeck_RightStick_DPadNorth", (int64)ESIK_InputActionOrigin_SteamDeck_RightStick_DPadNorth },
		{ "ESIK_InputActionOrigin_SteamDeck_RightStick_DPadSouth", (int64)ESIK_InputActionOrigin_SteamDeck_RightStick_DPadSouth },
		{ "ESIK_InputActionOrigin_SteamDeck_RightStick_DPadWest", (int64)ESIK_InputActionOrigin_SteamDeck_RightStick_DPadWest },
		{ "ESIK_InputActionOrigin_SteamDeck_RightStick_DPadEast", (int64)ESIK_InputActionOrigin_SteamDeck_RightStick_DPadEast },
		{ "ESIK_InputActionOrigin_SteamDeck_RightStick_Touch", (int64)ESIK_InputActionOrigin_SteamDeck_RightStick_Touch },
		{ "ESIK_InputActionOrigin_SteamDeck_L4", (int64)ESIK_InputActionOrigin_SteamDeck_L4 },
		{ "ESIK_InputActionOrigin_SteamDeck_R4", (int64)ESIK_InputActionOrigin_SteamDeck_R4 },
		{ "ESIK_InputActionOrigin_SteamDeck_L5", (int64)ESIK_InputActionOrigin_SteamDeck_L5 },
		{ "ESIK_InputActionOrigin_SteamDeck_R5", (int64)ESIK_InputActionOrigin_SteamDeck_R5 },
		{ "ESIK_InputActionOrigin_SteamDeck_DPad_Move", (int64)ESIK_InputActionOrigin_SteamDeck_DPad_Move },
		{ "ESIK_InputActionOrigin_SteamDeck_DPad_North", (int64)ESIK_InputActionOrigin_SteamDeck_DPad_North },
		{ "ESIK_InputActionOrigin_SteamDeck_DPad_South", (int64)ESIK_InputActionOrigin_SteamDeck_DPad_South },
		{ "ESIK_InputActionOrigin_SteamDeck_DPad_West", (int64)ESIK_InputActionOrigin_SteamDeck_DPad_West },
		{ "ESIK_InputActionOrigin_SteamDeck_DPad_East", (int64)ESIK_InputActionOrigin_SteamDeck_DPad_East },
		{ "ESIK_InputActionOrigin_SteamDeck_Gyro_Move", (int64)ESIK_InputActionOrigin_SteamDeck_Gyro_Move },
		{ "ESIK_InputActionOrigin_SteamDeck_Gyro_Pitch", (int64)ESIK_InputActionOrigin_SteamDeck_Gyro_Pitch },
		{ "ESIK_InputActionOrigin_SteamDeck_Gyro_Yaw", (int64)ESIK_InputActionOrigin_SteamDeck_Gyro_Yaw },
		{ "ESIK_InputActionOrigin_SteamDeck_Gyro_Roll", (int64)ESIK_InputActionOrigin_SteamDeck_Gyro_Roll },
		{ "ESIK_InputActionOrigin_SteamDeck_Reserved1", (int64)ESIK_InputActionOrigin_SteamDeck_Reserved1 },
		{ "ESIK_InputActionOrigin_SteamDeck_Reserved2", (int64)ESIK_InputActionOrigin_SteamDeck_Reserved2 },
		{ "ESIK_InputActionOrigin_SteamDeck_Reserved3", (int64)ESIK_InputActionOrigin_SteamDeck_Reserved3 },
		{ "ESIK_InputActionOrigin_SteamDeck_Reserved4", (int64)ESIK_InputActionOrigin_SteamDeck_Reserved4 },
		{ "ESIK_InputActionOrigin_SteamDeck_Reserved5", (int64)ESIK_InputActionOrigin_SteamDeck_Reserved5 },
		{ "ESIK_InputActionOrigin_SteamDeck_Reserved6", (int64)ESIK_InputActionOrigin_SteamDeck_Reserved6 },
		{ "ESIK_InputActionOrigin_SteamDeck_Reserved7", (int64)ESIK_InputActionOrigin_SteamDeck_Reserved7 },
		{ "ESIK_InputActionOrigin_SteamDeck_Reserved8", (int64)ESIK_InputActionOrigin_SteamDeck_Reserved8 },
		{ "ESIK_InputActionOrigin_SteamDeck_Reserved9", (int64)ESIK_InputActionOrigin_SteamDeck_Reserved9 },
		{ "ESIK_InputActionOrigin_SteamDeck_Reserved10", (int64)ESIK_InputActionOrigin_SteamDeck_Reserved10 },
		{ "ESIK_InputActionOrigin_SteamDeck_Reserved11", (int64)ESIK_InputActionOrigin_SteamDeck_Reserved11 },
		{ "ESIK_InputActionOrigin_SteamDeck_Reserved12", (int64)ESIK_InputActionOrigin_SteamDeck_Reserved12 },
		{ "ESIK_InputActionOrigin_SteamDeck_Reserved13", (int64)ESIK_InputActionOrigin_SteamDeck_Reserved13 },
		{ "ESIK_InputActionOrigin_SteamDeck_Reserved14", (int64)ESIK_InputActionOrigin_SteamDeck_Reserved14 },
		{ "ESIK_InputActionOrigin_SteamDeck_Reserved15", (int64)ESIK_InputActionOrigin_SteamDeck_Reserved15 },
		{ "ESIK_InputActionOrigin_SteamDeck_Reserved16", (int64)ESIK_InputActionOrigin_SteamDeck_Reserved16 },
		{ "ESIK_InputActionOrigin_SteamDeck_Reserved17", (int64)ESIK_InputActionOrigin_SteamDeck_Reserved17 },
		{ "ESIK_InputActionOrigin_SteamDeck_Reserved18", (int64)ESIK_InputActionOrigin_SteamDeck_Reserved18 },
		{ "ESIK_InputActionOrigin_SteamDeck_Reserved19", (int64)ESIK_InputActionOrigin_SteamDeck_Reserved19 },
		{ "ESIK_InputActionOrigin_SteamDeck_Reserved20", (int64)ESIK_InputActionOrigin_SteamDeck_Reserved20 },
		{ "ESIK_InputActionOrigin_Count", (int64)ESIK_InputActionOrigin_Count },
		{ "ESIK_InputActionOrigin_MaximumPossibleValue", (int64)ESIK_InputActionOrigin_MaximumPossibleValue },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_InputActionOrigin_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamIntegrationKit_ESIK_InputActionOrigin_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	"ESIK_InputActionOrigin",
	"ESIK_InputActionOrigin",
	Z_Construct_UEnum_SteamIntegrationKit_ESIK_InputActionOrigin_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_InputActionOrigin_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_InputActionOrigin_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamIntegrationKit_ESIK_InputActionOrigin_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_InputActionOrigin()
{
	if (!Z_Registration_Info_UEnum_ESIK_InputActionOrigin.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESIK_InputActionOrigin.InnerSingleton, Z_Construct_UEnum_SteamIntegrationKit_ESIK_InputActionOrigin_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESIK_InputActionOrigin.InnerSingleton;
}
// ********** End Enum ESIK_InputActionOrigin ******************************************************

// ********** Begin Enum ESIK_ScePadTriggerEffectMode **********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESIK_ScePadTriggerEffectMode;
static UEnum* ESIK_ScePadTriggerEffectMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESIK_ScePadTriggerEffectMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESIK_ScePadTriggerEffectMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamIntegrationKit_ESIK_ScePadTriggerEffectMode, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("ESIK_ScePadTriggerEffectMode"));
	}
	return Z_Registration_Info_UEnum_ESIK_ScePadTriggerEffectMode.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<ESIK_ScePadTriggerEffectMode>()
{
	return ESIK_ScePadTriggerEffectMode_StaticEnum();
}
struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_ScePadTriggerEffectMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ESIK_SCE_PAD_TRIGGER_EFFECT_MODE_FEEDBACK.Name", "ESIK_SCE_PAD_TRIGGER_EFFECT_MODE_FEEDBACK" },
		{ "ESIK_SCE_PAD_TRIGGER_EFFECT_MODE_MULTIPLE_POSITION_FEEDBACK.Name", "ESIK_SCE_PAD_TRIGGER_EFFECT_MODE_MULTIPLE_POSITION_FEEDBACK" },
		{ "ESIK_SCE_PAD_TRIGGER_EFFECT_MODE_MULTIPLE_POSITION_VIBRATION.Name", "ESIK_SCE_PAD_TRIGGER_EFFECT_MODE_MULTIPLE_POSITION_VIBRATION" },
		{ "ESIK_SCE_PAD_TRIGGER_EFFECT_MODE_OFF.Name", "ESIK_SCE_PAD_TRIGGER_EFFECT_MODE_OFF" },
		{ "ESIK_SCE_PAD_TRIGGER_EFFECT_MODE_SLOPE_FEEDBACK.Name", "ESIK_SCE_PAD_TRIGGER_EFFECT_MODE_SLOPE_FEEDBACK" },
		{ "ESIK_SCE_PAD_TRIGGER_EFFECT_MODE_VIBRATION.Name", "ESIK_SCE_PAD_TRIGGER_EFFECT_MODE_VIBRATION" },
		{ "ESIK_SCE_PAD_TRIGGER_EFFECT_MODE_WEAPON.Name", "ESIK_SCE_PAD_TRIGGER_EFFECT_MODE_WEAPON" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESIK_SCE_PAD_TRIGGER_EFFECT_MODE_OFF", (int64)ESIK_SCE_PAD_TRIGGER_EFFECT_MODE_OFF },
		{ "ESIK_SCE_PAD_TRIGGER_EFFECT_MODE_FEEDBACK", (int64)ESIK_SCE_PAD_TRIGGER_EFFECT_MODE_FEEDBACK },
		{ "ESIK_SCE_PAD_TRIGGER_EFFECT_MODE_WEAPON", (int64)ESIK_SCE_PAD_TRIGGER_EFFECT_MODE_WEAPON },
		{ "ESIK_SCE_PAD_TRIGGER_EFFECT_MODE_VIBRATION", (int64)ESIK_SCE_PAD_TRIGGER_EFFECT_MODE_VIBRATION },
		{ "ESIK_SCE_PAD_TRIGGER_EFFECT_MODE_MULTIPLE_POSITION_FEEDBACK", (int64)ESIK_SCE_PAD_TRIGGER_EFFECT_MODE_MULTIPLE_POSITION_FEEDBACK },
		{ "ESIK_SCE_PAD_TRIGGER_EFFECT_MODE_SLOPE_FEEDBACK", (int64)ESIK_SCE_PAD_TRIGGER_EFFECT_MODE_SLOPE_FEEDBACK },
		{ "ESIK_SCE_PAD_TRIGGER_EFFECT_MODE_MULTIPLE_POSITION_VIBRATION", (int64)ESIK_SCE_PAD_TRIGGER_EFFECT_MODE_MULTIPLE_POSITION_VIBRATION },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_ScePadTriggerEffectMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamIntegrationKit_ESIK_ScePadTriggerEffectMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	"ESIK_ScePadTriggerEffectMode",
	"ESIK_ScePadTriggerEffectMode",
	Z_Construct_UEnum_SteamIntegrationKit_ESIK_ScePadTriggerEffectMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_ScePadTriggerEffectMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_ScePadTriggerEffectMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamIntegrationKit_ESIK_ScePadTriggerEffectMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_ScePadTriggerEffectMode()
{
	if (!Z_Registration_Info_UEnum_ESIK_ScePadTriggerEffectMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESIK_ScePadTriggerEffectMode.InnerSingleton, Z_Construct_UEnum_SteamIntegrationKit_ESIK_ScePadTriggerEffectMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESIK_ScePadTriggerEffectMode.InnerSingleton;
}
// ********** End Enum ESIK_ScePadTriggerEffectMode ************************************************

// ********** Begin ScriptStruct FSIK_ScePadTriggerEffectWeaponParam *******************************
struct Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectWeaponParam_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSIK_ScePadTriggerEffectWeaponParam); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSIK_ScePadTriggerEffectWeaponParam); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartPosition_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndPosition_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSIK_ScePadTriggerEffectWeaponParam constinit property declarations 
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartPosition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EndPosition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Strength;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSIK_ScePadTriggerEffectWeaponParam constinit property declarations *
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSIK_ScePadTriggerEffectWeaponParam>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectWeaponParam_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSIK_ScePadTriggerEffectWeaponParam;
class UScriptStruct* FSIK_ScePadTriggerEffectWeaponParam::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_ScePadTriggerEffectWeaponParam.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSIK_ScePadTriggerEffectWeaponParam.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectWeaponParam, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("SIK_ScePadTriggerEffectWeaponParam"));
	}
	return Z_Registration_Info_UScriptStruct_FSIK_ScePadTriggerEffectWeaponParam.OuterSingleton;
	}

// ********** Begin ScriptStruct FSIK_ScePadTriggerEffectWeaponParam Property Definitions **********
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectWeaponParam_Statics::NewProp_StartPosition = { "StartPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_ScePadTriggerEffectWeaponParam, StartPosition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartPosition_MetaData), NewProp_StartPosition_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectWeaponParam_Statics::NewProp_EndPosition = { "EndPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_ScePadTriggerEffectWeaponParam, EndPosition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndPosition_MetaData), NewProp_EndPosition_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectWeaponParam_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_ScePadTriggerEffectWeaponParam, Strength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Strength_MetaData), NewProp_Strength_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectWeaponParam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectWeaponParam_Statics::NewProp_StartPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectWeaponParam_Statics::NewProp_EndPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectWeaponParam_Statics::NewProp_Strength,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectWeaponParam_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSIK_ScePadTriggerEffectWeaponParam Property Definitions ************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectWeaponParam_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	&NewStructOps,
	"SIK_ScePadTriggerEffectWeaponParam",
	Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectWeaponParam_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectWeaponParam_Statics::PropPointers),
	sizeof(FSIK_ScePadTriggerEffectWeaponParam),
	alignof(FSIK_ScePadTriggerEffectWeaponParam),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectWeaponParam_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectWeaponParam_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectWeaponParam()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_ScePadTriggerEffectWeaponParam.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSIK_ScePadTriggerEffectWeaponParam.InnerSingleton, Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectWeaponParam_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSIK_ScePadTriggerEffectWeaponParam.InnerSingleton);
}
// ********** End ScriptStruct FSIK_ScePadTriggerEffectWeaponParam *********************************

// ********** Begin ScriptStruct FSIK_ScePadTriggerEffectVibrationParam ****************************
struct Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectVibrationParam_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSIK_ScePadTriggerEffectVibrationParam); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSIK_ScePadTriggerEffectVibrationParam); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Frequency_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Amplitude_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSIK_ScePadTriggerEffectVibrationParam constinit property declarations 
	static const UECodeGen_Private::FIntPropertyParams NewProp_Position;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Frequency;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amplitude;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSIK_ScePadTriggerEffectVibrationParam constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSIK_ScePadTriggerEffectVibrationParam>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectVibrationParam_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSIK_ScePadTriggerEffectVibrationParam;
class UScriptStruct* FSIK_ScePadTriggerEffectVibrationParam::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_ScePadTriggerEffectVibrationParam.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSIK_ScePadTriggerEffectVibrationParam.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectVibrationParam, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("SIK_ScePadTriggerEffectVibrationParam"));
	}
	return Z_Registration_Info_UScriptStruct_FSIK_ScePadTriggerEffectVibrationParam.OuterSingleton;
	}

// ********** Begin ScriptStruct FSIK_ScePadTriggerEffectVibrationParam Property Definitions *******
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectVibrationParam_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_ScePadTriggerEffectVibrationParam, Position), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectVibrationParam_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_ScePadTriggerEffectVibrationParam, Frequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Frequency_MetaData), NewProp_Frequency_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectVibrationParam_Statics::NewProp_Amplitude = { "Amplitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_ScePadTriggerEffectVibrationParam, Amplitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Amplitude_MetaData), NewProp_Amplitude_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectVibrationParam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectVibrationParam_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectVibrationParam_Statics::NewProp_Frequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectVibrationParam_Statics::NewProp_Amplitude,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectVibrationParam_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSIK_ScePadTriggerEffectVibrationParam Property Definitions *********
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectVibrationParam_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	&NewStructOps,
	"SIK_ScePadTriggerEffectVibrationParam",
	Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectVibrationParam_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectVibrationParam_Statics::PropPointers),
	sizeof(FSIK_ScePadTriggerEffectVibrationParam),
	alignof(FSIK_ScePadTriggerEffectVibrationParam),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectVibrationParam_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectVibrationParam_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectVibrationParam()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_ScePadTriggerEffectVibrationParam.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSIK_ScePadTriggerEffectVibrationParam.InnerSingleton, Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectVibrationParam_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSIK_ScePadTriggerEffectVibrationParam.InnerSingleton);
}
// ********** End ScriptStruct FSIK_ScePadTriggerEffectVibrationParam ******************************

// ********** Begin ScriptStruct FSIK_ScePadTriggerEffectFeedbackParam *****************************
struct Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectFeedbackParam_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSIK_ScePadTriggerEffectFeedbackParam); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSIK_ScePadTriggerEffectFeedbackParam); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSIK_ScePadTriggerEffectFeedbackParam constinit property declarations 
	static const UECodeGen_Private::FIntPropertyParams NewProp_Position;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Strength;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSIK_ScePadTriggerEffectFeedbackParam constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSIK_ScePadTriggerEffectFeedbackParam>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectFeedbackParam_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSIK_ScePadTriggerEffectFeedbackParam;
class UScriptStruct* FSIK_ScePadTriggerEffectFeedbackParam::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_ScePadTriggerEffectFeedbackParam.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSIK_ScePadTriggerEffectFeedbackParam.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectFeedbackParam, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("SIK_ScePadTriggerEffectFeedbackParam"));
	}
	return Z_Registration_Info_UScriptStruct_FSIK_ScePadTriggerEffectFeedbackParam.OuterSingleton;
	}

// ********** Begin ScriptStruct FSIK_ScePadTriggerEffectFeedbackParam Property Definitions ********
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectFeedbackParam_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_ScePadTriggerEffectFeedbackParam, Position), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectFeedbackParam_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_ScePadTriggerEffectFeedbackParam, Strength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Strength_MetaData), NewProp_Strength_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectFeedbackParam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectFeedbackParam_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectFeedbackParam_Statics::NewProp_Strength,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectFeedbackParam_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSIK_ScePadTriggerEffectFeedbackParam Property Definitions **********
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectFeedbackParam_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	&NewStructOps,
	"SIK_ScePadTriggerEffectFeedbackParam",
	Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectFeedbackParam_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectFeedbackParam_Statics::PropPointers),
	sizeof(FSIK_ScePadTriggerEffectFeedbackParam),
	alignof(FSIK_ScePadTriggerEffectFeedbackParam),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectFeedbackParam_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectFeedbackParam_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectFeedbackParam()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_ScePadTriggerEffectFeedbackParam.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSIK_ScePadTriggerEffectFeedbackParam.InnerSingleton, Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectFeedbackParam_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSIK_ScePadTriggerEffectFeedbackParam.InnerSingleton);
}
// ********** End ScriptStruct FSIK_ScePadTriggerEffectFeedbackParam *******************************

// ********** Begin ScriptStruct FSIK_ScePadTriggerEffectMultiplePositionFeedbackParam *************
struct Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectMultiplePositionFeedbackParam_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSIK_ScePadTriggerEffectMultiplePositionFeedbackParam); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSIK_ScePadTriggerEffectMultiplePositionFeedbackParam); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSIK_ScePadTriggerEffectMultiplePositionFeedbackParam constinit property declarations 
	static const UECodeGen_Private::FIntPropertyParams NewProp_Strength_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Strength;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSIK_ScePadTriggerEffectMultiplePositionFeedbackParam constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSIK_ScePadTriggerEffectMultiplePositionFeedbackParam>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectMultiplePositionFeedbackParam_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSIK_ScePadTriggerEffectMultiplePositionFeedbackParam;
class UScriptStruct* FSIK_ScePadTriggerEffectMultiplePositionFeedbackParam::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_ScePadTriggerEffectMultiplePositionFeedbackParam.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSIK_ScePadTriggerEffectMultiplePositionFeedbackParam.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectMultiplePositionFeedbackParam, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("SIK_ScePadTriggerEffectMultiplePositionFeedbackParam"));
	}
	return Z_Registration_Info_UScriptStruct_FSIK_ScePadTriggerEffectMultiplePositionFeedbackParam.OuterSingleton;
	}

// ********** Begin ScriptStruct FSIK_ScePadTriggerEffectMultiplePositionFeedbackParam Property Definitions 
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectMultiplePositionFeedbackParam_Statics::NewProp_Strength_Inner = { "Strength", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectMultiplePositionFeedbackParam_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_ScePadTriggerEffectMultiplePositionFeedbackParam, Strength), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Strength_MetaData), NewProp_Strength_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectMultiplePositionFeedbackParam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectMultiplePositionFeedbackParam_Statics::NewProp_Strength_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectMultiplePositionFeedbackParam_Statics::NewProp_Strength,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectMultiplePositionFeedbackParam_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSIK_ScePadTriggerEffectMultiplePositionFeedbackParam Property Definitions 
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectMultiplePositionFeedbackParam_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	&NewStructOps,
	"SIK_ScePadTriggerEffectMultiplePositionFeedbackParam",
	Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectMultiplePositionFeedbackParam_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectMultiplePositionFeedbackParam_Statics::PropPointers),
	sizeof(FSIK_ScePadTriggerEffectMultiplePositionFeedbackParam),
	alignof(FSIK_ScePadTriggerEffectMultiplePositionFeedbackParam),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectMultiplePositionFeedbackParam_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectMultiplePositionFeedbackParam_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectMultiplePositionFeedbackParam()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_ScePadTriggerEffectMultiplePositionFeedbackParam.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSIK_ScePadTriggerEffectMultiplePositionFeedbackParam.InnerSingleton, Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectMultiplePositionFeedbackParam_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSIK_ScePadTriggerEffectMultiplePositionFeedbackParam.InnerSingleton);
}
// ********** End ScriptStruct FSIK_ScePadTriggerEffectMultiplePositionFeedbackParam ***************

// ********** Begin ScriptStruct FSIK_ScePadTriggerEffectOffParam **********************************
struct Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectOffParam_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSIK_ScePadTriggerEffectOffParam); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSIK_ScePadTriggerEffectOffParam); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSIK_ScePadTriggerEffectOffParam constinit property declarations **
// ********** End ScriptStruct FSIK_ScePadTriggerEffectOffParam constinit property declarations ****
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSIK_ScePadTriggerEffectOffParam>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectOffParam_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSIK_ScePadTriggerEffectOffParam;
class UScriptStruct* FSIK_ScePadTriggerEffectOffParam::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_ScePadTriggerEffectOffParam.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSIK_ScePadTriggerEffectOffParam.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectOffParam, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("SIK_ScePadTriggerEffectOffParam"));
	}
	return Z_Registration_Info_UScriptStruct_FSIK_ScePadTriggerEffectOffParam.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectOffParam_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	&NewStructOps,
	"SIK_ScePadTriggerEffectOffParam",
	nullptr,
	0,
	sizeof(FSIK_ScePadTriggerEffectOffParam),
	alignof(FSIK_ScePadTriggerEffectOffParam),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectOffParam_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectOffParam_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectOffParam()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_ScePadTriggerEffectOffParam.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSIK_ScePadTriggerEffectOffParam.InnerSingleton, Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectOffParam_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSIK_ScePadTriggerEffectOffParam.InnerSingleton);
}
// ********** End ScriptStruct FSIK_ScePadTriggerEffectOffParam ************************************

// ********** Begin ScriptStruct FSIK_ScePadTriggerEffectSlopeFeedbackParam ************************
struct Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectSlopeFeedbackParam_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSIK_ScePadTriggerEffectSlopeFeedbackParam); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSIK_ScePadTriggerEffectSlopeFeedbackParam); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartPosition_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndPosition_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartStrength_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndStrength_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSIK_ScePadTriggerEffectSlopeFeedbackParam constinit property declarations 
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartPosition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EndPosition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartStrength;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EndStrength;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSIK_ScePadTriggerEffectSlopeFeedbackParam constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSIK_ScePadTriggerEffectSlopeFeedbackParam>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectSlopeFeedbackParam_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSIK_ScePadTriggerEffectSlopeFeedbackParam;
class UScriptStruct* FSIK_ScePadTriggerEffectSlopeFeedbackParam::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_ScePadTriggerEffectSlopeFeedbackParam.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSIK_ScePadTriggerEffectSlopeFeedbackParam.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectSlopeFeedbackParam, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("SIK_ScePadTriggerEffectSlopeFeedbackParam"));
	}
	return Z_Registration_Info_UScriptStruct_FSIK_ScePadTriggerEffectSlopeFeedbackParam.OuterSingleton;
	}

// ********** Begin ScriptStruct FSIK_ScePadTriggerEffectSlopeFeedbackParam Property Definitions ***
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectSlopeFeedbackParam_Statics::NewProp_StartPosition = { "StartPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_ScePadTriggerEffectSlopeFeedbackParam, StartPosition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartPosition_MetaData), NewProp_StartPosition_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectSlopeFeedbackParam_Statics::NewProp_EndPosition = { "EndPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_ScePadTriggerEffectSlopeFeedbackParam, EndPosition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndPosition_MetaData), NewProp_EndPosition_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectSlopeFeedbackParam_Statics::NewProp_StartStrength = { "StartStrength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_ScePadTriggerEffectSlopeFeedbackParam, StartStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartStrength_MetaData), NewProp_StartStrength_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectSlopeFeedbackParam_Statics::NewProp_EndStrength = { "EndStrength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_ScePadTriggerEffectSlopeFeedbackParam, EndStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndStrength_MetaData), NewProp_EndStrength_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectSlopeFeedbackParam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectSlopeFeedbackParam_Statics::NewProp_StartPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectSlopeFeedbackParam_Statics::NewProp_EndPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectSlopeFeedbackParam_Statics::NewProp_StartStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectSlopeFeedbackParam_Statics::NewProp_EndStrength,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectSlopeFeedbackParam_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSIK_ScePadTriggerEffectSlopeFeedbackParam Property Definitions *****
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectSlopeFeedbackParam_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	&NewStructOps,
	"SIK_ScePadTriggerEffectSlopeFeedbackParam",
	Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectSlopeFeedbackParam_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectSlopeFeedbackParam_Statics::PropPointers),
	sizeof(FSIK_ScePadTriggerEffectSlopeFeedbackParam),
	alignof(FSIK_ScePadTriggerEffectSlopeFeedbackParam),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectSlopeFeedbackParam_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectSlopeFeedbackParam_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectSlopeFeedbackParam()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_ScePadTriggerEffectSlopeFeedbackParam.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSIK_ScePadTriggerEffectSlopeFeedbackParam.InnerSingleton, Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectSlopeFeedbackParam_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSIK_ScePadTriggerEffectSlopeFeedbackParam.InnerSingleton);
}
// ********** End ScriptStruct FSIK_ScePadTriggerEffectSlopeFeedbackParam **************************

// ********** Begin ScriptStruct FSIK_ScePadTriggerEffectMultiplePositionVibrationParam ************
struct Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectMultiplePositionVibrationParam_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSIK_ScePadTriggerEffectMultiplePositionVibrationParam); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSIK_ScePadTriggerEffectMultiplePositionVibrationParam); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Freequency_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Amplitude_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSIK_ScePadTriggerEffectMultiplePositionVibrationParam constinit property declarations 
	static const UECodeGen_Private::FIntPropertyParams NewProp_Freequency;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amplitude_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Amplitude;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSIK_ScePadTriggerEffectMultiplePositionVibrationParam constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSIK_ScePadTriggerEffectMultiplePositionVibrationParam>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectMultiplePositionVibrationParam_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSIK_ScePadTriggerEffectMultiplePositionVibrationParam;
class UScriptStruct* FSIK_ScePadTriggerEffectMultiplePositionVibrationParam::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_ScePadTriggerEffectMultiplePositionVibrationParam.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSIK_ScePadTriggerEffectMultiplePositionVibrationParam.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectMultiplePositionVibrationParam, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("SIK_ScePadTriggerEffectMultiplePositionVibrationParam"));
	}
	return Z_Registration_Info_UScriptStruct_FSIK_ScePadTriggerEffectMultiplePositionVibrationParam.OuterSingleton;
	}

// ********** Begin ScriptStruct FSIK_ScePadTriggerEffectMultiplePositionVibrationParam Property Definitions 
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectMultiplePositionVibrationParam_Statics::NewProp_Freequency = { "Freequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_ScePadTriggerEffectMultiplePositionVibrationParam, Freequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Freequency_MetaData), NewProp_Freequency_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectMultiplePositionVibrationParam_Statics::NewProp_Amplitude_Inner = { "Amplitude", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectMultiplePositionVibrationParam_Statics::NewProp_Amplitude = { "Amplitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_ScePadTriggerEffectMultiplePositionVibrationParam, Amplitude), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Amplitude_MetaData), NewProp_Amplitude_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectMultiplePositionVibrationParam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectMultiplePositionVibrationParam_Statics::NewProp_Freequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectMultiplePositionVibrationParam_Statics::NewProp_Amplitude_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectMultiplePositionVibrationParam_Statics::NewProp_Amplitude,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectMultiplePositionVibrationParam_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSIK_ScePadTriggerEffectMultiplePositionVibrationParam Property Definitions 
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectMultiplePositionVibrationParam_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	&NewStructOps,
	"SIK_ScePadTriggerEffectMultiplePositionVibrationParam",
	Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectMultiplePositionVibrationParam_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectMultiplePositionVibrationParam_Statics::PropPointers),
	sizeof(FSIK_ScePadTriggerEffectMultiplePositionVibrationParam),
	alignof(FSIK_ScePadTriggerEffectMultiplePositionVibrationParam),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectMultiplePositionVibrationParam_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectMultiplePositionVibrationParam_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectMultiplePositionVibrationParam()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_ScePadTriggerEffectMultiplePositionVibrationParam.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSIK_ScePadTriggerEffectMultiplePositionVibrationParam.InnerSingleton, Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectMultiplePositionVibrationParam_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSIK_ScePadTriggerEffectMultiplePositionVibrationParam.InnerSingleton);
}
// ********** End ScriptStruct FSIK_ScePadTriggerEffectMultiplePositionVibrationParam **************

// ********** Begin ScriptStruct FSIK_ScePadTriggerEffectCommandData *******************************
struct Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectCommandData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSIK_ScePadTriggerEffectCommandData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSIK_ScePadTriggerEffectCommandData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OffParam_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FeedbackParam_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponParam_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VibrationParam_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MultiplePositionFeedbackParam_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlopeFeedbackParam_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MultiplePositionVibrationParam_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSIK_ScePadTriggerEffectCommandData constinit property declarations 
	static const UECodeGen_Private::FStructPropertyParams NewProp_OffParam;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FeedbackParam;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WeaponParam;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VibrationParam;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MultiplePositionFeedbackParam;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SlopeFeedbackParam;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MultiplePositionVibrationParam;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSIK_ScePadTriggerEffectCommandData constinit property declarations *
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSIK_ScePadTriggerEffectCommandData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectCommandData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSIK_ScePadTriggerEffectCommandData;
class UScriptStruct* FSIK_ScePadTriggerEffectCommandData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_ScePadTriggerEffectCommandData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSIK_ScePadTriggerEffectCommandData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectCommandData, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("SIK_ScePadTriggerEffectCommandData"));
	}
	return Z_Registration_Info_UScriptStruct_FSIK_ScePadTriggerEffectCommandData.OuterSingleton;
	}

// ********** Begin ScriptStruct FSIK_ScePadTriggerEffectCommandData Property Definitions **********
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectCommandData_Statics::NewProp_OffParam = { "OffParam", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_ScePadTriggerEffectCommandData, OffParam), Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectOffParam, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OffParam_MetaData), NewProp_OffParam_MetaData) }; // 828829423
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectCommandData_Statics::NewProp_FeedbackParam = { "FeedbackParam", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_ScePadTriggerEffectCommandData, FeedbackParam), Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectFeedbackParam, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FeedbackParam_MetaData), NewProp_FeedbackParam_MetaData) }; // 4207684927
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectCommandData_Statics::NewProp_WeaponParam = { "WeaponParam", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_ScePadTriggerEffectCommandData, WeaponParam), Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectWeaponParam, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponParam_MetaData), NewProp_WeaponParam_MetaData) }; // 480340156
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectCommandData_Statics::NewProp_VibrationParam = { "VibrationParam", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_ScePadTriggerEffectCommandData, VibrationParam), Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectVibrationParam, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VibrationParam_MetaData), NewProp_VibrationParam_MetaData) }; // 375865682
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectCommandData_Statics::NewProp_MultiplePositionFeedbackParam = { "MultiplePositionFeedbackParam", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_ScePadTriggerEffectCommandData, MultiplePositionFeedbackParam), Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectMultiplePositionFeedbackParam, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MultiplePositionFeedbackParam_MetaData), NewProp_MultiplePositionFeedbackParam_MetaData) }; // 2354893207
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectCommandData_Statics::NewProp_SlopeFeedbackParam = { "SlopeFeedbackParam", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_ScePadTriggerEffectCommandData, SlopeFeedbackParam), Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectSlopeFeedbackParam, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlopeFeedbackParam_MetaData), NewProp_SlopeFeedbackParam_MetaData) }; // 1289465786
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectCommandData_Statics::NewProp_MultiplePositionVibrationParam = { "MultiplePositionVibrationParam", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_ScePadTriggerEffectCommandData, MultiplePositionVibrationParam), Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectMultiplePositionVibrationParam, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MultiplePositionVibrationParam_MetaData), NewProp_MultiplePositionVibrationParam_MetaData) }; // 3451430916
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectCommandData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectCommandData_Statics::NewProp_OffParam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectCommandData_Statics::NewProp_FeedbackParam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectCommandData_Statics::NewProp_WeaponParam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectCommandData_Statics::NewProp_VibrationParam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectCommandData_Statics::NewProp_MultiplePositionFeedbackParam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectCommandData_Statics::NewProp_SlopeFeedbackParam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectCommandData_Statics::NewProp_MultiplePositionVibrationParam,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectCommandData_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSIK_ScePadTriggerEffectCommandData Property Definitions ************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectCommandData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	&NewStructOps,
	"SIK_ScePadTriggerEffectCommandData",
	Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectCommandData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectCommandData_Statics::PropPointers),
	sizeof(FSIK_ScePadTriggerEffectCommandData),
	alignof(FSIK_ScePadTriggerEffectCommandData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectCommandData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectCommandData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectCommandData()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_ScePadTriggerEffectCommandData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSIK_ScePadTriggerEffectCommandData.InnerSingleton, Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectCommandData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSIK_ScePadTriggerEffectCommandData.InnerSingleton);
}
// ********** End ScriptStruct FSIK_ScePadTriggerEffectCommandData *********************************

// ********** Begin Enum ESIK_SteamControllerLEDFlag ***********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESIK_SteamControllerLEDFlag;
static UEnum* ESIK_SteamControllerLEDFlag_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESIK_SteamControllerLEDFlag.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESIK_SteamControllerLEDFlag.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamControllerLEDFlag, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("ESIK_SteamControllerLEDFlag"));
	}
	return Z_Registration_Info_UEnum_ESIK_SteamControllerLEDFlag.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<ESIK_SteamControllerLEDFlag>()
{
	return ESIK_SteamControllerLEDFlag_StaticEnum();
}
struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamControllerLEDFlag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ESIK_SteamControllerLEDFlag_RestoreUserDefault.Name", "ESIK_SteamControllerLEDFlag_RestoreUserDefault" },
		{ "ESIK_SteamControllerLEDFlag_SetColor.Name", "ESIK_SteamControllerLEDFlag_SetColor" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESIK_SteamControllerLEDFlag_SetColor", (int64)ESIK_SteamControllerLEDFlag_SetColor },
		{ "ESIK_SteamControllerLEDFlag_RestoreUserDefault", (int64)ESIK_SteamControllerLEDFlag_RestoreUserDefault },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamControllerLEDFlag_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamControllerLEDFlag_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	"ESIK_SteamControllerLEDFlag",
	"ESIK_SteamControllerLEDFlag",
	Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamControllerLEDFlag_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamControllerLEDFlag_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamControllerLEDFlag_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamControllerLEDFlag_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamControllerLEDFlag()
{
	if (!Z_Registration_Info_UEnum_ESIK_SteamControllerLEDFlag.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESIK_SteamControllerLEDFlag.InnerSingleton, Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamControllerLEDFlag_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESIK_SteamControllerLEDFlag.InnerSingleton;
}
// ********** End Enum ESIK_SteamControllerLEDFlag *************************************************

// ********** Begin ScriptStruct FSIK_ScePadTriggerEffectCommand ***********************************
struct Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectCommand_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSIK_ScePadTriggerEffectCommand); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSIK_ScePadTriggerEffectCommand); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommandData_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSIK_ScePadTriggerEffectCommand constinit property declarations ***
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CommandData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSIK_ScePadTriggerEffectCommand constinit property declarations *****
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSIK_ScePadTriggerEffectCommand>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectCommand_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSIK_ScePadTriggerEffectCommand;
class UScriptStruct* FSIK_ScePadTriggerEffectCommand::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_ScePadTriggerEffectCommand.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSIK_ScePadTriggerEffectCommand.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectCommand, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("SIK_ScePadTriggerEffectCommand"));
	}
	return Z_Registration_Info_UScriptStruct_FSIK_ScePadTriggerEffectCommand.OuterSingleton;
	}

// ********** Begin ScriptStruct FSIK_ScePadTriggerEffectCommand Property Definitions **************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectCommand_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_ScePadTriggerEffectCommand, Mode), Z_Construct_UEnum_SteamIntegrationKit_ESIK_ScePadTriggerEffectMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mode_MetaData), NewProp_Mode_MetaData) }; // 565869737
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectCommand_Statics::NewProp_CommandData = { "CommandData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_ScePadTriggerEffectCommand, CommandData), Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectCommandData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommandData_MetaData), NewProp_CommandData_MetaData) }; // 3501910065
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectCommand_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectCommand_Statics::NewProp_Mode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectCommand_Statics::NewProp_CommandData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectCommand_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSIK_ScePadTriggerEffectCommand Property Definitions ****************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectCommand_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	&NewStructOps,
	"SIK_ScePadTriggerEffectCommand",
	Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectCommand_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectCommand_Statics::PropPointers),
	sizeof(FSIK_ScePadTriggerEffectCommand),
	alignof(FSIK_ScePadTriggerEffectCommand),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectCommand_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectCommand_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectCommand()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_ScePadTriggerEffectCommand.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSIK_ScePadTriggerEffectCommand.InnerSingleton, Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectCommand_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSIK_ScePadTriggerEffectCommand.InnerSingleton);
}
// ********** End ScriptStruct FSIK_ScePadTriggerEffectCommand *************************************

// ********** Begin Enum ESIK_SteamControllerPad ***************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESIK_SteamControllerPad;
static UEnum* ESIK_SteamControllerPad_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESIK_SteamControllerPad.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESIK_SteamControllerPad.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamControllerPad, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("ESIK_SteamControllerPad"));
	}
	return Z_Registration_Info_UEnum_ESIK_SteamControllerPad.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<ESIK_SteamControllerPad>()
{
	return ESIK_SteamControllerPad_StaticEnum();
}
struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamControllerPad_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ESIK_LeftPad.DisplayName", "Left Pad" },
		{ "ESIK_LeftPad.Name", "ESIK_LeftPad" },
		{ "ESIK_RightPad.DisplayName", "Right Pad" },
		{ "ESIK_RightPad.Name", "ESIK_RightPad" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESIK_LeftPad", (int64)ESIK_LeftPad },
		{ "ESIK_RightPad", (int64)ESIK_RightPad },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamControllerPad_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamControllerPad_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	"ESIK_SteamControllerPad",
	"ESIK_SteamControllerPad",
	Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamControllerPad_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamControllerPad_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamControllerPad_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamControllerPad_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamControllerPad()
{
	if (!Z_Registration_Info_UEnum_ESIK_SteamControllerPad.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESIK_SteamControllerPad.InnerSingleton, Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamControllerPad_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESIK_SteamControllerPad.InnerSingleton;
}
// ********** End Enum ESIK_SteamControllerPad *****************************************************

// ********** Begin Enum ESIK_XboxOrigin ***********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESIK_XboxOrigin;
static UEnum* ESIK_XboxOrigin_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESIK_XboxOrigin.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESIK_XboxOrigin.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamIntegrationKit_ESIK_XboxOrigin, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("ESIK_XboxOrigin"));
	}
	return Z_Registration_Info_UEnum_ESIK_XboxOrigin.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<ESIK_XboxOrigin>()
{
	return ESIK_XboxOrigin_StaticEnum();
}
struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_XboxOrigin_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ESIK_XboxOrigin_A.Name", "ESIK_XboxOrigin_A" },
		{ "ESIK_XboxOrigin_B.Name", "ESIK_XboxOrigin_B" },
		{ "ESIK_XboxOrigin_Count.Name", "ESIK_XboxOrigin_Count" },
		{ "ESIK_XboxOrigin_DPad_East.Name", "ESIK_XboxOrigin_DPad_East" },
		{ "ESIK_XboxOrigin_DPad_North.Name", "ESIK_XboxOrigin_DPad_North" },
		{ "ESIK_XboxOrigin_DPad_South.Name", "ESIK_XboxOrigin_DPad_South" },
		{ "ESIK_XboxOrigin_DPad_West.Name", "ESIK_XboxOrigin_DPad_West" },
		{ "ESIK_XboxOrigin_LeftBumper.Name", "ESIK_XboxOrigin_LeftBumper" },
		{ "ESIK_XboxOrigin_LeftStick_Click.Name", "ESIK_XboxOrigin_LeftStick_Click" },
		{ "ESIK_XboxOrigin_LeftStick_DPadEast.Name", "ESIK_XboxOrigin_LeftStick_DPadEast" },
		{ "ESIK_XboxOrigin_LeftStick_DPadNorth.Name", "ESIK_XboxOrigin_LeftStick_DPadNorth" },
		{ "ESIK_XboxOrigin_LeftStick_DPadSouth.Name", "ESIK_XboxOrigin_LeftStick_DPadSouth" },
		{ "ESIK_XboxOrigin_LeftStick_DPadWest.Name", "ESIK_XboxOrigin_LeftStick_DPadWest" },
		{ "ESIK_XboxOrigin_LeftStick_Move.Name", "ESIK_XboxOrigin_LeftStick_Move" },
		{ "ESIK_XboxOrigin_LeftTrigger_Click.Name", "ESIK_XboxOrigin_LeftTrigger_Click" },
		{ "ESIK_XboxOrigin_LeftTrigger_Pull.Comment", "//Back\n" },
		{ "ESIK_XboxOrigin_LeftTrigger_Pull.Name", "ESIK_XboxOrigin_LeftTrigger_Pull" },
		{ "ESIK_XboxOrigin_LeftTrigger_Pull.ToolTip", "Back" },
		{ "ESIK_XboxOrigin_Menu.Name", "ESIK_XboxOrigin_Menu" },
		{ "ESIK_XboxOrigin_RightBumper.Name", "ESIK_XboxOrigin_RightBumper" },
		{ "ESIK_XboxOrigin_RightStick_Click.Name", "ESIK_XboxOrigin_RightStick_Click" },
		{ "ESIK_XboxOrigin_RightStick_DPadEast.Name", "ESIK_XboxOrigin_RightStick_DPadEast" },
		{ "ESIK_XboxOrigin_RightStick_DPadNorth.Name", "ESIK_XboxOrigin_RightStick_DPadNorth" },
		{ "ESIK_XboxOrigin_RightStick_DPadSouth.Name", "ESIK_XboxOrigin_RightStick_DPadSouth" },
		{ "ESIK_XboxOrigin_RightStick_DPadWest.Name", "ESIK_XboxOrigin_RightStick_DPadWest" },
		{ "ESIK_XboxOrigin_RightStick_Move.Name", "ESIK_XboxOrigin_RightStick_Move" },
		{ "ESIK_XboxOrigin_RightTrigger_Click.Name", "ESIK_XboxOrigin_RightTrigger_Click" },
		{ "ESIK_XboxOrigin_RightTrigger_Pull.Name", "ESIK_XboxOrigin_RightTrigger_Pull" },
		{ "ESIK_XboxOrigin_View.Comment", "//Start\n" },
		{ "ESIK_XboxOrigin_View.Name", "ESIK_XboxOrigin_View" },
		{ "ESIK_XboxOrigin_View.ToolTip", "Start" },
		{ "ESIK_XboxOrigin_X.Name", "ESIK_XboxOrigin_X" },
		{ "ESIK_XboxOrigin_Y.Name", "ESIK_XboxOrigin_Y" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESIK_XboxOrigin_A", (int64)ESIK_XboxOrigin_A },
		{ "ESIK_XboxOrigin_B", (int64)ESIK_XboxOrigin_B },
		{ "ESIK_XboxOrigin_X", (int64)ESIK_XboxOrigin_X },
		{ "ESIK_XboxOrigin_Y", (int64)ESIK_XboxOrigin_Y },
		{ "ESIK_XboxOrigin_LeftBumper", (int64)ESIK_XboxOrigin_LeftBumper },
		{ "ESIK_XboxOrigin_RightBumper", (int64)ESIK_XboxOrigin_RightBumper },
		{ "ESIK_XboxOrigin_Menu", (int64)ESIK_XboxOrigin_Menu },
		{ "ESIK_XboxOrigin_View", (int64)ESIK_XboxOrigin_View },
		{ "ESIK_XboxOrigin_LeftTrigger_Pull", (int64)ESIK_XboxOrigin_LeftTrigger_Pull },
		{ "ESIK_XboxOrigin_LeftTrigger_Click", (int64)ESIK_XboxOrigin_LeftTrigger_Click },
		{ "ESIK_XboxOrigin_RightTrigger_Pull", (int64)ESIK_XboxOrigin_RightTrigger_Pull },
		{ "ESIK_XboxOrigin_RightTrigger_Click", (int64)ESIK_XboxOrigin_RightTrigger_Click },
		{ "ESIK_XboxOrigin_LeftStick_Move", (int64)ESIK_XboxOrigin_LeftStick_Move },
		{ "ESIK_XboxOrigin_LeftStick_Click", (int64)ESIK_XboxOrigin_LeftStick_Click },
		{ "ESIK_XboxOrigin_LeftStick_DPadNorth", (int64)ESIK_XboxOrigin_LeftStick_DPadNorth },
		{ "ESIK_XboxOrigin_LeftStick_DPadSouth", (int64)ESIK_XboxOrigin_LeftStick_DPadSouth },
		{ "ESIK_XboxOrigin_LeftStick_DPadWest", (int64)ESIK_XboxOrigin_LeftStick_DPadWest },
		{ "ESIK_XboxOrigin_LeftStick_DPadEast", (int64)ESIK_XboxOrigin_LeftStick_DPadEast },
		{ "ESIK_XboxOrigin_RightStick_Move", (int64)ESIK_XboxOrigin_RightStick_Move },
		{ "ESIK_XboxOrigin_RightStick_Click", (int64)ESIK_XboxOrigin_RightStick_Click },
		{ "ESIK_XboxOrigin_RightStick_DPadNorth", (int64)ESIK_XboxOrigin_RightStick_DPadNorth },
		{ "ESIK_XboxOrigin_RightStick_DPadSouth", (int64)ESIK_XboxOrigin_RightStick_DPadSouth },
		{ "ESIK_XboxOrigin_RightStick_DPadWest", (int64)ESIK_XboxOrigin_RightStick_DPadWest },
		{ "ESIK_XboxOrigin_RightStick_DPadEast", (int64)ESIK_XboxOrigin_RightStick_DPadEast },
		{ "ESIK_XboxOrigin_DPad_North", (int64)ESIK_XboxOrigin_DPad_North },
		{ "ESIK_XboxOrigin_DPad_South", (int64)ESIK_XboxOrigin_DPad_South },
		{ "ESIK_XboxOrigin_DPad_West", (int64)ESIK_XboxOrigin_DPad_West },
		{ "ESIK_XboxOrigin_DPad_East", (int64)ESIK_XboxOrigin_DPad_East },
		{ "ESIK_XboxOrigin_Count", (int64)ESIK_XboxOrigin_Count },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_XboxOrigin_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamIntegrationKit_ESIK_XboxOrigin_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	"ESIK_XboxOrigin",
	"ESIK_XboxOrigin",
	Z_Construct_UEnum_SteamIntegrationKit_ESIK_XboxOrigin_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_XboxOrigin_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_XboxOrigin_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamIntegrationKit_ESIK_XboxOrigin_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_XboxOrigin()
{
	if (!Z_Registration_Info_UEnum_ESIK_XboxOrigin.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESIK_XboxOrigin.InnerSingleton, Z_Construct_UEnum_SteamIntegrationKit_ESIK_XboxOrigin_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESIK_XboxOrigin.InnerSingleton;
}
// ********** End Enum ESIK_XboxOrigin *************************************************************

// ********** Begin Class USIK_SharedFile Function ConvertFileToUint8Array *************************
struct Z_Construct_UFunction_USIK_SharedFile_ConvertFileToUint8Array_Statics
{
	struct SIK_SharedFile_eventConvertFileToUint8Array_Parms
	{
		FString FilePath;
		bool bSuccess;
		TArray<uint8> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || Helper Functions" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ConvertFileToUint8Array constinit property declarations ***************
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ConvertFileToUint8Array constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ConvertFileToUint8Array Property Definitions **************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_SharedFile_ConvertFileToUint8Array_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_SharedFile_eventConvertFileToUint8Array_Parms, FilePath), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_SharedFile_ConvertFileToUint8Array_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((SIK_SharedFile_eventConvertFileToUint8Array_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_SharedFile_ConvertFileToUint8Array_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_SharedFile_eventConvertFileToUint8Array_Parms), &Z_Construct_UFunction_USIK_SharedFile_ConvertFileToUint8Array_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_SharedFile_ConvertFileToUint8Array_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_SharedFile_ConvertFileToUint8Array_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_SharedFile_eventConvertFileToUint8Array_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_SharedFile_ConvertFileToUint8Array_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SharedFile_ConvertFileToUint8Array_Statics::NewProp_FilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SharedFile_ConvertFileToUint8Array_Statics::NewProp_bSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SharedFile_ConvertFileToUint8Array_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SharedFile_ConvertFileToUint8Array_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SharedFile_ConvertFileToUint8Array_Statics::PropPointers) < 2048);
// ********** End Function ConvertFileToUint8Array Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_SharedFile_ConvertFileToUint8Array_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_SharedFile, nullptr, "ConvertFileToUint8Array", 	Z_Construct_UFunction_USIK_SharedFile_ConvertFileToUint8Array_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SharedFile_ConvertFileToUint8Array_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_SharedFile_ConvertFileToUint8Array_Statics::SIK_SharedFile_eventConvertFileToUint8Array_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SharedFile_ConvertFileToUint8Array_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_SharedFile_ConvertFileToUint8Array_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_SharedFile_ConvertFileToUint8Array_Statics::SIK_SharedFile_eventConvertFileToUint8Array_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_SharedFile_ConvertFileToUint8Array()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_SharedFile_ConvertFileToUint8Array_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_SharedFile::execConvertFileToUint8Array)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
	P_GET_UBOOL_REF(Z_Param_Out_bSuccess);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<uint8>*)Z_Param__Result=USIK_SharedFile::ConvertFileToUint8Array(Z_Param_FilePath,Z_Param_Out_bSuccess);
	P_NATIVE_END;
}
// ********** End Class USIK_SharedFile Function ConvertFileToUint8Array ***************************

// ********** Begin Class USIK_SharedFile Function ConvertHexUint8ArrayToString ********************
struct Z_Construct_UFunction_USIK_SharedFile_ConvertHexUint8ArrayToString_Statics
{
	struct SIK_SharedFile_eventConvertHexUint8ArrayToString_Parms
	{
		TArray<uint8> Array;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || Helper Functions" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ConvertHexUint8ArrayToString constinit property declarations **********
	static const UECodeGen_Private::FBytePropertyParams NewProp_Array_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Array;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ConvertHexUint8ArrayToString constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ConvertHexUint8ArrayToString Property Definitions *********************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_SharedFile_ConvertHexUint8ArrayToString_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_SharedFile_ConvertHexUint8ArrayToString_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_SharedFile_eventConvertHexUint8ArrayToString_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_SharedFile_ConvertHexUint8ArrayToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_SharedFile_eventConvertHexUint8ArrayToString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_SharedFile_ConvertHexUint8ArrayToString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SharedFile_ConvertHexUint8ArrayToString_Statics::NewProp_Array_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SharedFile_ConvertHexUint8ArrayToString_Statics::NewProp_Array,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SharedFile_ConvertHexUint8ArrayToString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SharedFile_ConvertHexUint8ArrayToString_Statics::PropPointers) < 2048);
// ********** End Function ConvertHexUint8ArrayToString Property Definitions ***********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_SharedFile_ConvertHexUint8ArrayToString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_SharedFile, nullptr, "ConvertHexUint8ArrayToString", 	Z_Construct_UFunction_USIK_SharedFile_ConvertHexUint8ArrayToString_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SharedFile_ConvertHexUint8ArrayToString_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_SharedFile_ConvertHexUint8ArrayToString_Statics::SIK_SharedFile_eventConvertHexUint8ArrayToString_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SharedFile_ConvertHexUint8ArrayToString_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_SharedFile_ConvertHexUint8ArrayToString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_SharedFile_ConvertHexUint8ArrayToString_Statics::SIK_SharedFile_eventConvertHexUint8ArrayToString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_SharedFile_ConvertHexUint8ArrayToString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_SharedFile_ConvertHexUint8ArrayToString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_SharedFile::execConvertHexUint8ArrayToString)
{
	P_GET_TARRAY(uint8,Z_Param_Array);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USIK_SharedFile::ConvertHexUint8ArrayToString(Z_Param_Array);
	P_NATIVE_END;
}
// ********** End Class USIK_SharedFile Function ConvertHexUint8ArrayToString **********************

// ********** Begin Class USIK_SharedFile Function ConvertInt64ToSteamId ***************************
struct Z_Construct_UFunction_USIK_SharedFile_ConvertInt64ToSteamId_Statics
{
	struct SIK_SharedFile_eventConvertInt64ToSteamId_Parms
	{
		int64 Int64;
		FSIK_SteamId ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || Helper Functions" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ConvertInt64ToSteamId constinit property declarations *****************
	static const UECodeGen_Private::FInt64PropertyParams NewProp_Int64;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ConvertInt64ToSteamId constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ConvertInt64ToSteamId Property Definitions ****************************
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_SharedFile_ConvertInt64ToSteamId_Statics::NewProp_Int64 = { "Int64", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_SharedFile_eventConvertInt64ToSteamId_Parms, Int64), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_SharedFile_ConvertInt64ToSteamId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_SharedFile_eventConvertInt64ToSteamId_Parms, ReturnValue), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_SharedFile_ConvertInt64ToSteamId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SharedFile_ConvertInt64ToSteamId_Statics::NewProp_Int64,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SharedFile_ConvertInt64ToSteamId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SharedFile_ConvertInt64ToSteamId_Statics::PropPointers) < 2048);
// ********** End Function ConvertInt64ToSteamId Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_SharedFile_ConvertInt64ToSteamId_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_SharedFile, nullptr, "ConvertInt64ToSteamId", 	Z_Construct_UFunction_USIK_SharedFile_ConvertInt64ToSteamId_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SharedFile_ConvertInt64ToSteamId_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_SharedFile_ConvertInt64ToSteamId_Statics::SIK_SharedFile_eventConvertInt64ToSteamId_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SharedFile_ConvertInt64ToSteamId_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_SharedFile_ConvertInt64ToSteamId_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_SharedFile_ConvertInt64ToSteamId_Statics::SIK_SharedFile_eventConvertInt64ToSteamId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_SharedFile_ConvertInt64ToSteamId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_SharedFile_ConvertInt64ToSteamId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_SharedFile::execConvertInt64ToSteamId)
{
	P_GET_PROPERTY(FInt64Property,Z_Param_Int64);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSIK_SteamId*)Z_Param__Result=USIK_SharedFile::ConvertInt64ToSteamId(Z_Param_Int64);
	P_NATIVE_END;
}
// ********** End Class USIK_SharedFile Function ConvertInt64ToSteamId *****************************

// ********** Begin Class USIK_SharedFile Function ConvertSteamIdToInt64 ***************************
struct Z_Construct_UFunction_USIK_SharedFile_ConvertSteamIdToInt64_Statics
{
	struct SIK_SharedFile_eventConvertSteamIdToInt64_Parms
	{
		FSIK_SteamId SteamId;
		int64 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || Helper Functions" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ConvertSteamIdToInt64 constinit property declarations *****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ConvertSteamIdToInt64 constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ConvertSteamIdToInt64 Property Definitions ****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_SharedFile_ConvertSteamIdToInt64_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_SharedFile_eventConvertSteamIdToInt64_Parms, SteamId), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_SharedFile_ConvertSteamIdToInt64_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_SharedFile_eventConvertSteamIdToInt64_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_SharedFile_ConvertSteamIdToInt64_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SharedFile_ConvertSteamIdToInt64_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SharedFile_ConvertSteamIdToInt64_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SharedFile_ConvertSteamIdToInt64_Statics::PropPointers) < 2048);
// ********** End Function ConvertSteamIdToInt64 Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_SharedFile_ConvertSteamIdToInt64_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_SharedFile, nullptr, "ConvertSteamIdToInt64", 	Z_Construct_UFunction_USIK_SharedFile_ConvertSteamIdToInt64_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SharedFile_ConvertSteamIdToInt64_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_SharedFile_ConvertSteamIdToInt64_Statics::SIK_SharedFile_eventConvertSteamIdToInt64_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SharedFile_ConvertSteamIdToInt64_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_SharedFile_ConvertSteamIdToInt64_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_SharedFile_ConvertSteamIdToInt64_Statics::SIK_SharedFile_eventConvertSteamIdToInt64_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_SharedFile_ConvertSteamIdToInt64()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_SharedFile_ConvertSteamIdToInt64_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_SharedFile::execConvertSteamIdToInt64)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_SteamId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int64*)Z_Param__Result=USIK_SharedFile::ConvertSteamIdToInt64(Z_Param_SteamId);
	P_NATIVE_END;
}
// ********** End Class USIK_SharedFile Function ConvertSteamIdToInt64 *****************************

// ********** Begin Class USIK_SharedFile Function ConvertStringToUint8Array ***********************
struct Z_Construct_UFunction_USIK_SharedFile_ConvertStringToUint8Array_Statics
{
	struct SIK_SharedFile_eventConvertStringToUint8Array_Parms
	{
		FString String;
		TArray<uint8> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || Helper Functions" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ConvertStringToUint8Array constinit property declarations *************
	static const UECodeGen_Private::FStrPropertyParams NewProp_String;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ConvertStringToUint8Array constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ConvertStringToUint8Array Property Definitions ************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_SharedFile_ConvertStringToUint8Array_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_SharedFile_eventConvertStringToUint8Array_Parms, String), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_SharedFile_ConvertStringToUint8Array_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_SharedFile_ConvertStringToUint8Array_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_SharedFile_eventConvertStringToUint8Array_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_SharedFile_ConvertStringToUint8Array_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SharedFile_ConvertStringToUint8Array_Statics::NewProp_String,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SharedFile_ConvertStringToUint8Array_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SharedFile_ConvertStringToUint8Array_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SharedFile_ConvertStringToUint8Array_Statics::PropPointers) < 2048);
// ********** End Function ConvertStringToUint8Array Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_SharedFile_ConvertStringToUint8Array_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_SharedFile, nullptr, "ConvertStringToUint8Array", 	Z_Construct_UFunction_USIK_SharedFile_ConvertStringToUint8Array_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SharedFile_ConvertStringToUint8Array_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_SharedFile_ConvertStringToUint8Array_Statics::SIK_SharedFile_eventConvertStringToUint8Array_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SharedFile_ConvertStringToUint8Array_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_SharedFile_ConvertStringToUint8Array_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_SharedFile_ConvertStringToUint8Array_Statics::SIK_SharedFile_eventConvertStringToUint8Array_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_SharedFile_ConvertStringToUint8Array()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_SharedFile_ConvertStringToUint8Array_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_SharedFile::execConvertStringToUint8Array)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_String);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<uint8>*)Z_Param__Result=USIK_SharedFile::ConvertStringToUint8Array(Z_Param_String);
	P_NATIVE_END;
}
// ********** End Class USIK_SharedFile Function ConvertStringToUint8Array *************************

// ********** Begin Class USIK_SharedFile Function ConvertUint8ArrayToString ***********************
struct Z_Construct_UFunction_USIK_SharedFile_ConvertUint8ArrayToString_Statics
{
	struct SIK_SharedFile_eventConvertUint8ArrayToString_Parms
	{
		TArray<uint8> Array;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || Helper Functions" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ConvertUint8ArrayToString constinit property declarations *************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Array_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Array;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ConvertUint8ArrayToString constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ConvertUint8ArrayToString Property Definitions ************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_SharedFile_ConvertUint8ArrayToString_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_SharedFile_ConvertUint8ArrayToString_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_SharedFile_eventConvertUint8ArrayToString_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_SharedFile_ConvertUint8ArrayToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_SharedFile_eventConvertUint8ArrayToString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_SharedFile_ConvertUint8ArrayToString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SharedFile_ConvertUint8ArrayToString_Statics::NewProp_Array_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SharedFile_ConvertUint8ArrayToString_Statics::NewProp_Array,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SharedFile_ConvertUint8ArrayToString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SharedFile_ConvertUint8ArrayToString_Statics::PropPointers) < 2048);
// ********** End Function ConvertUint8ArrayToString Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_SharedFile_ConvertUint8ArrayToString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_SharedFile, nullptr, "ConvertUint8ArrayToString", 	Z_Construct_UFunction_USIK_SharedFile_ConvertUint8ArrayToString_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SharedFile_ConvertUint8ArrayToString_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_SharedFile_ConvertUint8ArrayToString_Statics::SIK_SharedFile_eventConvertUint8ArrayToString_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SharedFile_ConvertUint8ArrayToString_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_SharedFile_ConvertUint8ArrayToString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_SharedFile_ConvertUint8ArrayToString_Statics::SIK_SharedFile_eventConvertUint8ArrayToString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_SharedFile_ConvertUint8ArrayToString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_SharedFile_ConvertUint8ArrayToString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_SharedFile::execConvertUint8ArrayToString)
{
	P_GET_TARRAY(uint8,Z_Param_Array);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USIK_SharedFile::ConvertUint8ArrayToString(Z_Param_Array);
	P_NATIVE_END;
}
// ********** End Class USIK_SharedFile Function ConvertUint8ArrayToString *************************

// ********** Begin Class USIK_SharedFile Function GetAccountID ************************************
struct Z_Construct_UFunction_USIK_SharedFile_GetAccountID_Statics
{
	struct SIK_SharedFile_eventGetAccountID_Parms
	{
		FSIK_SteamId SteamId;
		FSIK_AccountID ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || Helper Functions" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAccountID constinit property declarations **************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAccountID constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAccountID Property Definitions *************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_SharedFile_GetAccountID_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_SharedFile_eventGetAccountID_Parms, SteamId), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_SharedFile_GetAccountID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_SharedFile_eventGetAccountID_Parms, ReturnValue), Z_Construct_UScriptStruct_FSIK_AccountID, METADATA_PARAMS(0, nullptr) }; // 3792032314
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_SharedFile_GetAccountID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SharedFile_GetAccountID_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SharedFile_GetAccountID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SharedFile_GetAccountID_Statics::PropPointers) < 2048);
// ********** End Function GetAccountID Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_SharedFile_GetAccountID_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_SharedFile, nullptr, "GetAccountID", 	Z_Construct_UFunction_USIK_SharedFile_GetAccountID_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SharedFile_GetAccountID_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_SharedFile_GetAccountID_Statics::SIK_SharedFile_eventGetAccountID_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SharedFile_GetAccountID_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_SharedFile_GetAccountID_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_SharedFile_GetAccountID_Statics::SIK_SharedFile_eventGetAccountID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_SharedFile_GetAccountID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_SharedFile_GetAccountID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_SharedFile::execGetAccountID)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_SteamId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSIK_AccountID*)Z_Param__Result=USIK_SharedFile::GetAccountID(Z_Param_SteamId);
	P_NATIVE_END;
}
// ********** End Class USIK_SharedFile Function GetAccountID **************************************

// ********** Begin Class USIK_SharedFile Function GetSteamIdFromUniqueNetId ***********************
struct Z_Construct_UFunction_USIK_SharedFile_GetSteamIdFromUniqueNetId_Statics
{
	struct SIK_SharedFile_eventGetSteamIdFromUniqueNetId_Parms
	{
		FUniqueNetIdRepl UniqueNetId;
		FSIK_SteamId ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || Helper Functions" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UniqueNetId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetSteamIdFromUniqueNetId constinit property declarations *************
	static const UECodeGen_Private::FStructPropertyParams NewProp_UniqueNetId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSteamIdFromUniqueNetId constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSteamIdFromUniqueNetId Property Definitions ************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_SharedFile_GetSteamIdFromUniqueNetId_Statics::NewProp_UniqueNetId = { "UniqueNetId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_SharedFile_eventGetSteamIdFromUniqueNetId_Parms, UniqueNetId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UniqueNetId_MetaData), NewProp_UniqueNetId_MetaData) }; // 2301267994
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_SharedFile_GetSteamIdFromUniqueNetId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_SharedFile_eventGetSteamIdFromUniqueNetId_Parms, ReturnValue), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_SharedFile_GetSteamIdFromUniqueNetId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SharedFile_GetSteamIdFromUniqueNetId_Statics::NewProp_UniqueNetId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SharedFile_GetSteamIdFromUniqueNetId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SharedFile_GetSteamIdFromUniqueNetId_Statics::PropPointers) < 2048);
// ********** End Function GetSteamIdFromUniqueNetId Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_SharedFile_GetSteamIdFromUniqueNetId_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_SharedFile, nullptr, "GetSteamIdFromUniqueNetId", 	Z_Construct_UFunction_USIK_SharedFile_GetSteamIdFromUniqueNetId_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SharedFile_GetSteamIdFromUniqueNetId_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_SharedFile_GetSteamIdFromUniqueNetId_Statics::SIK_SharedFile_eventGetSteamIdFromUniqueNetId_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SharedFile_GetSteamIdFromUniqueNetId_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_SharedFile_GetSteamIdFromUniqueNetId_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_SharedFile_GetSteamIdFromUniqueNetId_Statics::SIK_SharedFile_eventGetSteamIdFromUniqueNetId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_SharedFile_GetSteamIdFromUniqueNetId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_SharedFile_GetSteamIdFromUniqueNetId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_SharedFile::execGetSteamIdFromUniqueNetId)
{
	P_GET_STRUCT_REF(FUniqueNetIdRepl,Z_Param_Out_UniqueNetId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSIK_SteamId*)Z_Param__Result=USIK_SharedFile::GetSteamIdFromUniqueNetId(Z_Param_Out_UniqueNetId);
	P_NATIVE_END;
}
// ********** End Class USIK_SharedFile Function GetSteamIdFromUniqueNetId *************************

// ********** Begin Class USIK_SharedFile Function GetUniverse *************************************
struct Z_Construct_UFunction_USIK_SharedFile_GetUniverse_Statics
{
	struct SIK_SharedFile_eventGetUniverse_Parms
	{
		FSIK_SteamId SteamId;
		TEnumAsByte<ESIK_Universe> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || Helper Functions" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetUniverse constinit property declarations ***************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetUniverse constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetUniverse Property Definitions **************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_SharedFile_GetUniverse_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_SharedFile_eventGetUniverse_Parms, SteamId), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_SharedFile_GetUniverse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_SharedFile_eventGetUniverse_Parms, ReturnValue), Z_Construct_UEnum_SteamIntegrationKit_ESIK_Universe, METADATA_PARAMS(0, nullptr) }; // 2089807663
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_SharedFile_GetUniverse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SharedFile_GetUniverse_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SharedFile_GetUniverse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SharedFile_GetUniverse_Statics::PropPointers) < 2048);
// ********** End Function GetUniverse Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_SharedFile_GetUniverse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_SharedFile, nullptr, "GetUniverse", 	Z_Construct_UFunction_USIK_SharedFile_GetUniverse_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SharedFile_GetUniverse_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_SharedFile_GetUniverse_Statics::SIK_SharedFile_eventGetUniverse_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SharedFile_GetUniverse_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_SharedFile_GetUniverse_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_SharedFile_GetUniverse_Statics::SIK_SharedFile_eventGetUniverse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_SharedFile_GetUniverse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_SharedFile_GetUniverse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_SharedFile::execGetUniverse)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_SteamId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<ESIK_Universe>*)Z_Param__Result=USIK_SharedFile::GetUniverse(Z_Param_SteamId);
	P_NATIVE_END;
}
// ********** End Class USIK_SharedFile Function GetUniverse ***************************************

// ********** Begin Class USIK_SharedFile Function IsEqualGameId ***********************************
struct Z_Construct_UFunction_USIK_SharedFile_IsEqualGameId_Statics
{
	struct SIK_SharedFile_eventIsEqualGameId_Parms
	{
		FSIK_GameID GameId1;
		FSIK_GameID GameId2;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || Helper Functions" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsEqualGameId constinit property declarations *************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameId1;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameId2;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsEqualGameId constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsEqualGameId Property Definitions ************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_SharedFile_IsEqualGameId_Statics::NewProp_GameId1 = { "GameId1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_SharedFile_eventIsEqualGameId_Parms, GameId1), Z_Construct_UScriptStruct_FSIK_GameID, METADATA_PARAMS(0, nullptr) }; // 119361006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_SharedFile_IsEqualGameId_Statics::NewProp_GameId2 = { "GameId2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_SharedFile_eventIsEqualGameId_Parms, GameId2), Z_Construct_UScriptStruct_FSIK_GameID, METADATA_PARAMS(0, nullptr) }; // 119361006
void Z_Construct_UFunction_USIK_SharedFile_IsEqualGameId_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_SharedFile_eventIsEqualGameId_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_SharedFile_IsEqualGameId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_SharedFile_eventIsEqualGameId_Parms), &Z_Construct_UFunction_USIK_SharedFile_IsEqualGameId_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_SharedFile_IsEqualGameId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SharedFile_IsEqualGameId_Statics::NewProp_GameId1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SharedFile_IsEqualGameId_Statics::NewProp_GameId2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SharedFile_IsEqualGameId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SharedFile_IsEqualGameId_Statics::PropPointers) < 2048);
// ********** End Function IsEqualGameId Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_SharedFile_IsEqualGameId_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_SharedFile, nullptr, "IsEqualGameId", 	Z_Construct_UFunction_USIK_SharedFile_IsEqualGameId_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SharedFile_IsEqualGameId_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_SharedFile_IsEqualGameId_Statics::SIK_SharedFile_eventIsEqualGameId_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SharedFile_IsEqualGameId_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_SharedFile_IsEqualGameId_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_SharedFile_IsEqualGameId_Statics::SIK_SharedFile_eventIsEqualGameId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_SharedFile_IsEqualGameId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_SharedFile_IsEqualGameId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_SharedFile::execIsEqualGameId)
{
	P_GET_STRUCT(FSIK_GameID,Z_Param_GameId1);
	P_GET_STRUCT(FSIK_GameID,Z_Param_GameId2);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_SharedFile::IsEqualGameId(Z_Param_GameId1,Z_Param_GameId2);
	P_NATIVE_END;
}
// ********** End Class USIK_SharedFile Function IsEqualGameId *************************************

// ********** Begin Class USIK_SharedFile Function IsEqualSteamId **********************************
struct Z_Construct_UFunction_USIK_SharedFile_IsEqualSteamId_Statics
{
	struct SIK_SharedFile_eventIsEqualSteamId_Parms
	{
		FSIK_SteamId SteamId1;
		FSIK_SteamId SteamId2;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || Helper Functions" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsEqualSteamId constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamId1;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamId2;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsEqualSteamId constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsEqualSteamId Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_SharedFile_IsEqualSteamId_Statics::NewProp_SteamId1 = { "SteamId1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_SharedFile_eventIsEqualSteamId_Parms, SteamId1), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_SharedFile_IsEqualSteamId_Statics::NewProp_SteamId2 = { "SteamId2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_SharedFile_eventIsEqualSteamId_Parms, SteamId2), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
void Z_Construct_UFunction_USIK_SharedFile_IsEqualSteamId_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_SharedFile_eventIsEqualSteamId_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_SharedFile_IsEqualSteamId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_SharedFile_eventIsEqualSteamId_Parms), &Z_Construct_UFunction_USIK_SharedFile_IsEqualSteamId_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_SharedFile_IsEqualSteamId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SharedFile_IsEqualSteamId_Statics::NewProp_SteamId1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SharedFile_IsEqualSteamId_Statics::NewProp_SteamId2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SharedFile_IsEqualSteamId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SharedFile_IsEqualSteamId_Statics::PropPointers) < 2048);
// ********** End Function IsEqualSteamId Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_SharedFile_IsEqualSteamId_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_SharedFile, nullptr, "IsEqualSteamId", 	Z_Construct_UFunction_USIK_SharedFile_IsEqualSteamId_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SharedFile_IsEqualSteamId_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_SharedFile_IsEqualSteamId_Statics::SIK_SharedFile_eventIsEqualSteamId_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SharedFile_IsEqualSteamId_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_SharedFile_IsEqualSteamId_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_SharedFile_IsEqualSteamId_Statics::SIK_SharedFile_eventIsEqualSteamId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_SharedFile_IsEqualSteamId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_SharedFile_IsEqualSteamId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_SharedFile::execIsEqualSteamId)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_SteamId1);
	P_GET_STRUCT(FSIK_SteamId,Z_Param_SteamId2);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_SharedFile::IsEqualSteamId(Z_Param_SteamId1,Z_Param_SteamId2);
	P_NATIVE_END;
}
// ********** End Class USIK_SharedFile Function IsEqualSteamId ************************************

// ********** Begin Class USIK_SharedFile Function IsValidGameId ***********************************
struct Z_Construct_UFunction_USIK_SharedFile_IsValidGameId_Statics
{
	struct SIK_SharedFile_eventIsValidGameId_Parms
	{
		FSIK_GameID GameId;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || Helper Functions" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsValidGameId constinit property declarations *************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameId;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsValidGameId constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsValidGameId Property Definitions ************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_SharedFile_IsValidGameId_Statics::NewProp_GameId = { "GameId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_SharedFile_eventIsValidGameId_Parms, GameId), Z_Construct_UScriptStruct_FSIK_GameID, METADATA_PARAMS(0, nullptr) }; // 119361006
void Z_Construct_UFunction_USIK_SharedFile_IsValidGameId_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_SharedFile_eventIsValidGameId_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_SharedFile_IsValidGameId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_SharedFile_eventIsValidGameId_Parms), &Z_Construct_UFunction_USIK_SharedFile_IsValidGameId_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_SharedFile_IsValidGameId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SharedFile_IsValidGameId_Statics::NewProp_GameId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SharedFile_IsValidGameId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SharedFile_IsValidGameId_Statics::PropPointers) < 2048);
// ********** End Function IsValidGameId Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_SharedFile_IsValidGameId_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_SharedFile, nullptr, "IsValidGameId", 	Z_Construct_UFunction_USIK_SharedFile_IsValidGameId_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SharedFile_IsValidGameId_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_SharedFile_IsValidGameId_Statics::SIK_SharedFile_eventIsValidGameId_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SharedFile_IsValidGameId_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_SharedFile_IsValidGameId_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_SharedFile_IsValidGameId_Statics::SIK_SharedFile_eventIsValidGameId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_SharedFile_IsValidGameId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_SharedFile_IsValidGameId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_SharedFile::execIsValidGameId)
{
	P_GET_STRUCT(FSIK_GameID,Z_Param_GameId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_SharedFile::IsValidGameId(Z_Param_GameId);
	P_NATIVE_END;
}
// ********** End Class USIK_SharedFile Function IsValidGameId *************************************

// ********** Begin Class USIK_SharedFile Function IsValidSteamId **********************************
struct Z_Construct_UFunction_USIK_SharedFile_IsValidSteamId_Statics
{
	struct SIK_SharedFile_eventIsValidSteamId_Parms
	{
		FSIK_SteamId SteamId;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || Helper Functions" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsValidSteamId constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamId;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsValidSteamId constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsValidSteamId Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_SharedFile_IsValidSteamId_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_SharedFile_eventIsValidSteamId_Parms, SteamId), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
void Z_Construct_UFunction_USIK_SharedFile_IsValidSteamId_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_SharedFile_eventIsValidSteamId_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_SharedFile_IsValidSteamId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_SharedFile_eventIsValidSteamId_Parms), &Z_Construct_UFunction_USIK_SharedFile_IsValidSteamId_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_SharedFile_IsValidSteamId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SharedFile_IsValidSteamId_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SharedFile_IsValidSteamId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SharedFile_IsValidSteamId_Statics::PropPointers) < 2048);
// ********** End Function IsValidSteamId Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_SharedFile_IsValidSteamId_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_SharedFile, nullptr, "IsValidSteamId", 	Z_Construct_UFunction_USIK_SharedFile_IsValidSteamId_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SharedFile_IsValidSteamId_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_SharedFile_IsValidSteamId_Statics::SIK_SharedFile_eventIsValidSteamId_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SharedFile_IsValidSteamId_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_SharedFile_IsValidSteamId_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_SharedFile_IsValidSteamId_Statics::SIK_SharedFile_eventIsValidSteamId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_SharedFile_IsValidSteamId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_SharedFile_IsValidSteamId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_SharedFile::execIsValidSteamId)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_SteamId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_SharedFile::IsValidSteamId(Z_Param_SteamId);
	P_NATIVE_END;
}
// ********** End Class USIK_SharedFile Function IsValidSteamId ************************************

// ********** Begin Class USIK_SharedFile **********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_SharedFile;
UClass* USIK_SharedFile::GetPrivateStaticClass()
{
	using TClass = USIK_SharedFile;
	if (!Z_Registration_Info_UClass_USIK_SharedFile.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_SharedFile"),
			Z_Registration_Info_UClass_USIK_SharedFile.InnerSingleton,
			StaticRegisterNativesUSIK_SharedFile,
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
	return Z_Registration_Info_UClass_USIK_SharedFile.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_SharedFile_NoRegister()
{
	return USIK_SharedFile::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_SharedFile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SIK_SharedFile.h" },
		{ "ModuleRelativePath", "Public/SIK_SharedFile.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_SharedFile constinit property declarations **************************
// ********** End Class USIK_SharedFile constinit property declarations ****************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ConvertFileToUint8Array"), .Pointer = &USIK_SharedFile::execConvertFileToUint8Array },
		{ .NameUTF8 = UTF8TEXT("ConvertHexUint8ArrayToString"), .Pointer = &USIK_SharedFile::execConvertHexUint8ArrayToString },
		{ .NameUTF8 = UTF8TEXT("ConvertInt64ToSteamId"), .Pointer = &USIK_SharedFile::execConvertInt64ToSteamId },
		{ .NameUTF8 = UTF8TEXT("ConvertSteamIdToInt64"), .Pointer = &USIK_SharedFile::execConvertSteamIdToInt64 },
		{ .NameUTF8 = UTF8TEXT("ConvertStringToUint8Array"), .Pointer = &USIK_SharedFile::execConvertStringToUint8Array },
		{ .NameUTF8 = UTF8TEXT("ConvertUint8ArrayToString"), .Pointer = &USIK_SharedFile::execConvertUint8ArrayToString },
		{ .NameUTF8 = UTF8TEXT("GetAccountID"), .Pointer = &USIK_SharedFile::execGetAccountID },
		{ .NameUTF8 = UTF8TEXT("GetSteamIdFromUniqueNetId"), .Pointer = &USIK_SharedFile::execGetSteamIdFromUniqueNetId },
		{ .NameUTF8 = UTF8TEXT("GetUniverse"), .Pointer = &USIK_SharedFile::execGetUniverse },
		{ .NameUTF8 = UTF8TEXT("IsEqualGameId"), .Pointer = &USIK_SharedFile::execIsEqualGameId },
		{ .NameUTF8 = UTF8TEXT("IsEqualSteamId"), .Pointer = &USIK_SharedFile::execIsEqualSteamId },
		{ .NameUTF8 = UTF8TEXT("IsValidGameId"), .Pointer = &USIK_SharedFile::execIsValidGameId },
		{ .NameUTF8 = UTF8TEXT("IsValidSteamId"), .Pointer = &USIK_SharedFile::execIsValidSteamId },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_SharedFile_ConvertFileToUint8Array, "ConvertFileToUint8Array" }, // 1536888542
		{ &Z_Construct_UFunction_USIK_SharedFile_ConvertHexUint8ArrayToString, "ConvertHexUint8ArrayToString" }, // 3173534139
		{ &Z_Construct_UFunction_USIK_SharedFile_ConvertInt64ToSteamId, "ConvertInt64ToSteamId" }, // 3743451308
		{ &Z_Construct_UFunction_USIK_SharedFile_ConvertSteamIdToInt64, "ConvertSteamIdToInt64" }, // 293610663
		{ &Z_Construct_UFunction_USIK_SharedFile_ConvertStringToUint8Array, "ConvertStringToUint8Array" }, // 2856667476
		{ &Z_Construct_UFunction_USIK_SharedFile_ConvertUint8ArrayToString, "ConvertUint8ArrayToString" }, // 136563926
		{ &Z_Construct_UFunction_USIK_SharedFile_GetAccountID, "GetAccountID" }, // 567409640
		{ &Z_Construct_UFunction_USIK_SharedFile_GetSteamIdFromUniqueNetId, "GetSteamIdFromUniqueNetId" }, // 3742788828
		{ &Z_Construct_UFunction_USIK_SharedFile_GetUniverse, "GetUniverse" }, // 1372335787
		{ &Z_Construct_UFunction_USIK_SharedFile_IsEqualGameId, "IsEqualGameId" }, // 1084616334
		{ &Z_Construct_UFunction_USIK_SharedFile_IsEqualSteamId, "IsEqualSteamId" }, // 154661033
		{ &Z_Construct_UFunction_USIK_SharedFile_IsValidGameId, "IsValidGameId" }, // 776929163
		{ &Z_Construct_UFunction_USIK_SharedFile_IsValidSteamId, "IsValidSteamId" }, // 3574134149
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_SharedFile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_SharedFile_Statics
UObject* (*const Z_Construct_UClass_USIK_SharedFile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_SharedFile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_SharedFile_Statics::ClassParams = {
	&USIK_SharedFile::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_SharedFile_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_SharedFile_Statics::Class_MetaDataParams)
};
void USIK_SharedFile::StaticRegisterNativesUSIK_SharedFile()
{
	UClass* Class = USIK_SharedFile::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_SharedFile_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_SharedFile()
{
	if (!Z_Registration_Info_UClass_USIK_SharedFile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_SharedFile.OuterSingleton, Z_Construct_UClass_USIK_SharedFile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_SharedFile.OuterSingleton;
}
USIK_SharedFile::USIK_SharedFile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_SharedFile);
USIK_SharedFile::~USIK_SharedFile() {}
// ********** End Class USIK_SharedFile ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Public_SIK_SharedFile_h__Script_SteamIntegrationKit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESIK_BeginAuthSessionResult_StaticEnum, TEXT("ESIK_BeginAuthSessionResult"), &Z_Registration_Info_UEnum_ESIK_BeginAuthSessionResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2172916366U) },
		{ ESIK_VoiceResult_StaticEnum, TEXT("ESIK_VoiceResult"), &Z_Registration_Info_UEnum_ESIK_VoiceResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 461688545U) },
		{ ESIK_Result_StaticEnum, TEXT("ESIK_Result"), &Z_Registration_Info_UEnum_ESIK_Result, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 655382749U) },
		{ ESMatchType_StaticEnum, TEXT("ESMatchType"), &Z_Registration_Info_UEnum_ESMatchType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3314708744U) },
		{ ESIKAttributeType_StaticEnum, TEXT("ESIKAttributeType"), &Z_Registration_Info_UEnum_ESIKAttributeType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2222882645U) },
		{ ESIK_SteamIPType_StaticEnum, TEXT("ESIK_SteamIPType"), &Z_Registration_Info_UEnum_ESIK_SteamIPType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3938986146U) },
		{ ESIK_DenyReason_StaticEnum, TEXT("ESIK_DenyReason"), &Z_Registration_Info_UEnum_ESIK_DenyReason, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 987710118U) },
		{ ESIK_SteamPartyBeaconLocationType_StaticEnum, TEXT("ESIK_SteamPartyBeaconLocationType"), &Z_Registration_Info_UEnum_ESIK_SteamPartyBeaconLocationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 389953079U) },
		{ ESIK_LobbyDistanceFilter_StaticEnum, TEXT("ESIK_LobbyDistanceFilter"), &Z_Registration_Info_UEnum_ESIK_LobbyDistanceFilter, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1800932217U) },
		{ ESIK_LobbyComparisonType_StaticEnum, TEXT("ESIK_LobbyComparisonType"), &Z_Registration_Info_UEnum_ESIK_LobbyComparisonType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3429213948U) },
		{ ESIK_LobbyType_StaticEnum, TEXT("ESIK_LobbyType"), &Z_Registration_Info_UEnum_ESIK_LobbyType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3037947807U) },
		{ ESIK_LobbyChatEntryType_StaticEnum, TEXT("ESIK_LobbyChatEntryType"), &Z_Registration_Info_UEnum_ESIK_LobbyChatEntryType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4123875100U) },
		{ ESIK_ChatRoomEnterResponse_StaticEnum, TEXT("ESIK_ChatRoomEnterResponse"), &Z_Registration_Info_UEnum_ESIK_ChatRoomEnterResponse, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 754685013U) },
		{ ESIK_LobbyChatMemberStateChange_StaticEnum, TEXT("ESIK_LobbyChatMemberStateChange"), &Z_Registration_Info_UEnum_ESIK_LobbyChatMemberStateChange, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1885938435U) },
		{ ESIK_MatchMakingServerResponse_StaticEnum, TEXT("ESIK_MatchMakingServerResponse"), &Z_Registration_Info_UEnum_ESIK_MatchMakingServerResponse, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2619640712U) },
		{ ESIK_SteamNetworkingIdentityType_StaticEnum, TEXT("ESIK_SteamNetworkingIdentityType"), &Z_Registration_Info_UEnum_ESIK_SteamNetworkingIdentityType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 204549727U) },
		{ ESIK_NotificationPosition_StaticEnum, TEXT("ESIK_NotificationPosition"), &Z_Registration_Info_UEnum_ESIK_NotificationPosition, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2506201625U) },
		{ ESIK_SteamItemFlags_StaticEnum, TEXT("ESIK_SteamItemFlags"), &Z_Registration_Info_UEnum_ESIK_SteamItemFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1931557512U) },
		{ ESIK_AudioPlayback_Status_StaticEnum, TEXT("ESIK_AudioPlayback_Status"), &Z_Registration_Info_UEnum_ESIK_AudioPlayback_Status, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2908818213U) },
		{ ESIK_SteamNetworkingAvailability_StaticEnum, TEXT("ESIK_SteamNetworkingAvailability"), &Z_Registration_Info_UEnum_ESIK_SteamNetworkingAvailability, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 974954370U) },
		{ ESIK_P2PSessionError_StaticEnum, TEXT("ESIK_P2PSessionError"), &Z_Registration_Info_UEnum_ESIK_P2PSessionError, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3194943706U) },
		{ ESIK_P2PSend_StaticEnum, TEXT("ESIK_P2PSend"), &Z_Registration_Info_UEnum_ESIK_P2PSend, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4239773245U) },
		{ ESIK_RemoteStorageLocalFileChange_StaticEnum, TEXT("ESIK_RemoteStorageLocalFileChange"), &Z_Registration_Info_UEnum_ESIK_RemoteStorageLocalFileChange, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 450793937U) },
		{ ESIK_RemoteStorageFilePathType_StaticEnum, TEXT("ESIK_RemoteStorageFilePathType"), &Z_Registration_Info_UEnum_ESIK_RemoteStorageFilePathType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 630300744U) },
		{ ESIK_RemoteStoragePlatform_StaticEnum, TEXT("ESIK_RemoteStoragePlatform"), &Z_Registration_Info_UEnum_ESIK_RemoteStoragePlatform, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1661510505U) },
		{ ESIK_RemoteStoragePublishedFileVisibility_StaticEnum, TEXT("ESIK_RemoteStoragePublishedFileVisibility"), &Z_Registration_Info_UEnum_ESIK_RemoteStoragePublishedFileVisibility, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 184679934U) },
		{ ESIK_UGCReadAction_StaticEnum, TEXT("ESIK_UGCReadAction"), &Z_Registration_Info_UEnum_ESIK_UGCReadAction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2322620827U) },
		{ ESIK_WorkshopEnumerationType_StaticEnum, TEXT("ESIK_WorkshopEnumerationType"), &Z_Registration_Info_UEnum_ESIK_WorkshopEnumerationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1363961173U) },
		{ ESIK_TextFilteringContext_StaticEnum, TEXT("ESIK_TextFilteringContext"), &Z_Registration_Info_UEnum_ESIK_TextFilteringContext, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1260653726U) },
		{ ESIK_WorkshopFileType_StaticEnum, TEXT("ESIK_WorkshopFileType"), &Z_Registration_Info_UEnum_ESIK_WorkshopFileType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1356562597U) },
		{ ESIK_VRScreenshotType_StaticEnum, TEXT("ESIK_VRScreenshotType"), &Z_Registration_Info_UEnum_ESIK_VRScreenshotType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1524410720U) },
		{ ESIK_ItemPreviewType_StaticEnum, TEXT("ESIK_ItemPreviewType"), &Z_Registration_Info_UEnum_ESIK_ItemPreviewType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3812852700U) },
		{ ESIK_ItemState_StaticEnum, TEXT("ESIK_ItemState"), &Z_Registration_Info_UEnum_ESIK_ItemState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 335593853U) },
		{ ESIK_ItemStatistic_StaticEnum, TEXT("ESIK_ItemStatistic"), &Z_Registration_Info_UEnum_ESIK_ItemStatistic, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3922538977U) },
		{ ESIK_ItemUpdateStatus_StaticEnum, TEXT("ESIK_ItemUpdateStatus"), &Z_Registration_Info_UEnum_ESIK_ItemUpdateStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 859184223U) },
		{ ESIK_UGCMatchingUGCType_StaticEnum, TEXT("ESIK_UGCMatchingUGCType"), &Z_Registration_Info_UEnum_ESIK_UGCMatchingUGCType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3796177134U) },
		{ ESIK_UGCQuery_StaticEnum, TEXT("ESIK_UGCQuery"), &Z_Registration_Info_UEnum_ESIK_UGCQuery, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2877902342U) },
		{ ESIK_UserUGCList_StaticEnum, TEXT("ESIK_UserUGCList"), &Z_Registration_Info_UEnum_ESIK_UserUGCList, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 217198314U) },
		{ ESIK_UserUGCListSortOrder_StaticEnum, TEXT("ESIK_UserUGCListSortOrder"), &Z_Registration_Info_UEnum_ESIK_UserUGCListSortOrder, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 555195952U) },
		{ ESIK_UGCContentDescriptorID_StaticEnum, TEXT("ESIK_UGCContentDescriptorID"), &Z_Registration_Info_UEnum_ESIK_UGCContentDescriptorID, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2226313889U) },
		{ ESIK_Universe_StaticEnum, TEXT("ESIK_Universe"), &Z_Registration_Info_UEnum_ESIK_Universe, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2089807663U) },
		{ ESIK_FriendFlags_StaticEnum, TEXT("ESIK_FriendFlags"), &Z_Registration_Info_UEnum_ESIK_FriendFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1113207765U) },
		{ ESIK_EGamepadTextInputLineMode_StaticEnum, TEXT("ESIK_EGamepadTextInputLineMode"), &Z_Registration_Info_UEnum_ESIK_EGamepadTextInputLineMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1422390230U) },
		{ ESIK_EGamepadTextInputMode_StaticEnum, TEXT("ESIK_EGamepadTextInputMode"), &Z_Registration_Info_UEnum_ESIK_EGamepadTextInputMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1413543027U) },
		{ ESIK_EFloatingGamepadTextInputMode_StaticEnum, TEXT("ESIK_EFloatingGamepadTextInputMode"), &Z_Registration_Info_UEnum_ESIK_EFloatingGamepadTextInputMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 272099106U) },
		{ ESIK_ECommunityProfileItemType_StaticEnum, TEXT("ESIK_ECommunityProfileItemType"), &Z_Registration_Info_UEnum_ESIK_ECommunityProfileItemType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2137244242U) },
		{ ESIK_ECommunityProfileItemProperty_StaticEnum, TEXT("ESIK_ECommunityProfileItemProperty"), &Z_Registration_Info_UEnum_ESIK_ECommunityProfileItemProperty, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2037082194U) },
		{ ESIK_InputSourceMode_StaticEnum, TEXT("ESIK_InputSourceMode"), &Z_Registration_Info_UEnum_ESIK_InputSourceMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1299451004U) },
		{ ESIK_SteamInputType_StaticEnum, TEXT("ESIK_SteamInputType"), &Z_Registration_Info_UEnum_ESIK_SteamInputType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1879879911U) },
		{ ESIK_InputActionOrigin_StaticEnum, TEXT("ESIK_InputActionOrigin"), &Z_Registration_Info_UEnum_ESIK_InputActionOrigin, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3775312551U) },
		{ ESIK_ScePadTriggerEffectMode_StaticEnum, TEXT("ESIK_ScePadTriggerEffectMode"), &Z_Registration_Info_UEnum_ESIK_ScePadTriggerEffectMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 565869737U) },
		{ ESIK_SteamControllerLEDFlag_StaticEnum, TEXT("ESIK_SteamControllerLEDFlag"), &Z_Registration_Info_UEnum_ESIK_SteamControllerLEDFlag, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3377094020U) },
		{ ESIK_SteamControllerPad_StaticEnum, TEXT("ESIK_SteamControllerPad"), &Z_Registration_Info_UEnum_ESIK_SteamControllerPad, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1389777735U) },
		{ ESIK_XboxOrigin_StaticEnum, TEXT("ESIK_XboxOrigin"), &Z_Registration_Info_UEnum_ESIK_XboxOrigin, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3970175776U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSIK_AppId::StaticStruct, Z_Construct_UScriptStruct_FSIK_AppId_Statics::NewStructOps, TEXT("SIK_AppId"),&Z_Registration_Info_UScriptStruct_FSIK_AppId, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSIK_AppId), 3325316996U) },
		{ FSIK_DepotId::StaticStruct, Z_Construct_UScriptStruct_FSIK_DepotId_Statics::NewStructOps, TEXT("SIK_DepotId"),&Z_Registration_Info_UScriptStruct_FSIK_DepotId, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSIK_DepotId), 3840829197U) },
		{ FSIK_AccountID::StaticStruct, Z_Construct_UScriptStruct_FSIK_AccountID_Statics::NewStructOps, TEXT("SIK_AccountID"),&Z_Registration_Info_UScriptStruct_FSIK_AccountID, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSIK_AccountID), 3792032314U) },
		{ FSIKAttribute::StaticStruct, Z_Construct_UScriptStruct_FSIKAttribute_Statics::NewStructOps, TEXT("SIKAttribute"),&Z_Registration_Info_UScriptStruct_FSIKAttribute, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSIKAttribute), 1564803091U) },
		{ FSIK_SteamId::StaticStruct, Z_Construct_UScriptStruct_FSIK_SteamId_Statics::NewStructOps, TEXT("SIK_SteamId"),&Z_Registration_Info_UScriptStruct_FSIK_SteamId, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSIK_SteamId), 3413883574U) },
		{ FSSessionFindStruct::StaticStruct, Z_Construct_UScriptStruct_FSSessionFindStruct_Statics::NewStructOps, TEXT("SSessionFindStruct"),&Z_Registration_Info_UScriptStruct_FSSessionFindStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSSessionFindStruct), 3135024091U) },
		{ FSIK_AuthTicket::StaticStruct, Z_Construct_UScriptStruct_FSIK_AuthTicket_Statics::NewStructOps, TEXT("SIK_AuthTicket"),&Z_Registration_Info_UScriptStruct_FSIK_AuthTicket, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSIK_AuthTicket), 642335022U) },
		{ FSIK_FriendsGroupID::StaticStruct, Z_Construct_UScriptStruct_FSIK_FriendsGroupID_Statics::NewStructOps, TEXT("SIK_FriendsGroupID"),&Z_Registration_Info_UScriptStruct_FSIK_FriendsGroupID, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSIK_FriendsGroupID), 2027989783U) },
		{ FSIK_SteamIPAddress::StaticStruct, Z_Construct_UScriptStruct_FSIK_SteamIPAddress_Statics::NewStructOps, TEXT("SIK_SteamIPAddress"),&Z_Registration_Info_UScriptStruct_FSIK_SteamIPAddress, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSIK_SteamIPAddress), 791396157U) },
		{ FSIK_SteamPartyBeaconLocation::StaticStruct, Z_Construct_UScriptStruct_FSIK_SteamPartyBeaconLocation_Statics::NewStructOps, TEXT("SIK_SteamPartyBeaconLocation"),&Z_Registration_Info_UScriptStruct_FSIK_SteamPartyBeaconLocation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSIK_SteamPartyBeaconLocation), 959866417U) },
		{ FSIK_SessionFindSettings::StaticStruct, Z_Construct_UScriptStruct_FSIK_SessionFindSettings_Statics::NewStructOps, TEXT("SIK_SessionFindSettings"),&Z_Registration_Info_UScriptStruct_FSIK_SessionFindSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSIK_SessionFindSettings), 1233935823U) },
		{ FSIK_ServerNetAddress::StaticStruct, Z_Construct_UScriptStruct_FSIK_ServerNetAddress_Statics::NewStructOps, TEXT("SIK_ServerNetAddress"),&Z_Registration_Info_UScriptStruct_FSIK_ServerNetAddress, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSIK_ServerNetAddress), 997588644U) },
		{ FSIK_FoundServers::StaticStruct, Z_Construct_UScriptStruct_FSIK_FoundServers_Statics::NewStructOps, TEXT("SIK_FoundServers"),&Z_Registration_Info_UScriptStruct_FSIK_FoundServers, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSIK_FoundServers), 3175229584U) },
		{ FSIK_SteamNetworkingIPAddr::StaticStruct, Z_Construct_UScriptStruct_FSIK_SteamNetworkingIPAddr_Statics::NewStructOps, TEXT("SIK_SteamNetworkingIPAddr"),&Z_Registration_Info_UScriptStruct_FSIK_SteamNetworkingIPAddr, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSIK_SteamNetworkingIPAddr), 4010561450U) },
		{ FSIK_SteamNetworkingIdentity::StaticStruct, Z_Construct_UScriptStruct_FSIK_SteamNetworkingIdentity_Statics::NewStructOps, TEXT("SIK_SteamNetworkingIdentity"),&Z_Registration_Info_UScriptStruct_FSIK_SteamNetworkingIdentity, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSIK_SteamNetworkingIdentity), 1561841804U) },
		{ FSIK_SteamInventoryResult::StaticStruct, Z_Construct_UScriptStruct_FSIK_SteamInventoryResult_Statics::NewStructOps, TEXT("SIK_SteamInventoryResult"),&Z_Registration_Info_UScriptStruct_FSIK_SteamInventoryResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSIK_SteamInventoryResult), 959336186U) },
		{ FSIK_SteamItemDef::StaticStruct, Z_Construct_UScriptStruct_FSIK_SteamItemDef_Statics::NewStructOps, TEXT("SIK_SteamItemDef"),&Z_Registration_Info_UScriptStruct_FSIK_SteamItemDef, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSIK_SteamItemDef), 2053655220U) },
		{ FSIK_SteamItemInstanceID::StaticStruct, Z_Construct_UScriptStruct_FSIK_SteamItemInstanceID_Statics::NewStructOps, TEXT("SIK_SteamItemInstanceID"),&Z_Registration_Info_UScriptStruct_FSIK_SteamItemInstanceID, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSIK_SteamItemInstanceID), 2091965911U) },
		{ FSIK_SteamInventoryUpdateHandle::StaticStruct, Z_Construct_UScriptStruct_FSIK_SteamInventoryUpdateHandle_Statics::NewStructOps, TEXT("SIK_SteamInventoryUpdateHandle"),&Z_Registration_Info_UScriptStruct_FSIK_SteamInventoryUpdateHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSIK_SteamInventoryUpdateHandle), 4268775131U) },
		{ FSIK_SteamItemDetails::StaticStruct, Z_Construct_UScriptStruct_FSIK_SteamItemDetails_Statics::NewStructOps, TEXT("SIK_SteamItemDetails"),&Z_Registration_Info_UScriptStruct_FSIK_SteamItemDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSIK_SteamItemDetails), 2724905339U) },
		{ FSIK_SteamNetworkPingLocation::StaticStruct, Z_Construct_UScriptStruct_FSIK_SteamNetworkPingLocation_Statics::NewStructOps, TEXT("SIK_SteamNetworkPingLocation"),&Z_Registration_Info_UScriptStruct_FSIK_SteamNetworkPingLocation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSIK_SteamNetworkPingLocation), 1668578450U) },
		{ FSIK_SteamNetworkingPOPID::StaticStruct, Z_Construct_UScriptStruct_FSIK_SteamNetworkingPOPID_Statics::NewStructOps, TEXT("SIK_SteamNetworkingPOPID"),&Z_Registration_Info_UScriptStruct_FSIK_SteamNetworkingPOPID, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSIK_SteamNetworkingPOPID), 1859381612U) },
		{ FSIK_P2PSessionState::StaticStruct, Z_Construct_UScriptStruct_FSIK_P2PSessionState_Statics::NewStructOps, TEXT("SIK_P2PSessionState"),&Z_Registration_Info_UScriptStruct_FSIK_P2PSessionState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSIK_P2PSessionState), 1839678299U) },
		{ FSIK_PublishedFileId::StaticStruct, Z_Construct_UScriptStruct_FSIK_PublishedFileId_Statics::NewStructOps, TEXT("SIK_PublishedFileId"),&Z_Registration_Info_UScriptStruct_FSIK_PublishedFileId, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSIK_PublishedFileId), 3479136102U) },
		{ FSIK_PublishedFileUpdateHandle::StaticStruct, Z_Construct_UScriptStruct_FSIK_PublishedFileUpdateHandle_Statics::NewStructOps, TEXT("SIK_PublishedFileUpdateHandle"),&Z_Registration_Info_UScriptStruct_FSIK_PublishedFileUpdateHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSIK_PublishedFileUpdateHandle), 3449236957U) },
		{ FSIK_UGCFileWriteStreamHandle::StaticStruct, Z_Construct_UScriptStruct_FSIK_UGCFileWriteStreamHandle_Statics::NewStructOps, TEXT("SIK_UGCFileWriteStreamHandle"),&Z_Registration_Info_UScriptStruct_FSIK_UGCFileWriteStreamHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSIK_UGCFileWriteStreamHandle), 633603663U) },
		{ FSIK_UGCHandle::StaticStruct, Z_Construct_UScriptStruct_FSIK_UGCHandle_Statics::NewStructOps, TEXT("SIK_UGCHandle"),&Z_Registration_Info_UScriptStruct_FSIK_UGCHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSIK_UGCHandle), 3467694534U) },
		{ FSIK_ScreenshotHandle::StaticStruct, Z_Construct_UScriptStruct_FSIK_ScreenshotHandle_Statics::NewStructOps, TEXT("SIK_ScreenshotHandle"),&Z_Registration_Info_UScriptStruct_FSIK_ScreenshotHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSIK_ScreenshotHandle), 1227750953U) },
		{ FSIK_UGCQueryHandle::StaticStruct, Z_Construct_UScriptStruct_FSIK_UGCQueryHandle_Statics::NewStructOps, TEXT("SIK_UGCQueryHandle"),&Z_Registration_Info_UScriptStruct_FSIK_UGCQueryHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSIK_UGCQueryHandle), 480072375U) },
		{ FSIK_UGCUpdateHandle::StaticStruct, Z_Construct_UScriptStruct_FSIK_UGCUpdateHandle_Statics::NewStructOps, TEXT("SIK_UGCUpdateHandle"),&Z_Registration_Info_UScriptStruct_FSIK_UGCUpdateHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSIK_UGCUpdateHandle), 1297056980U) },
		{ FSIK_SteamUGCDetails::StaticStruct, Z_Construct_UScriptStruct_FSIK_SteamUGCDetails_Statics::NewStructOps, TEXT("SIK_SteamUGCDetails"),&Z_Registration_Info_UScriptStruct_FSIK_SteamUGCDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSIK_SteamUGCDetails), 1912160423U) },
		{ FSIK_SteamLeaderboardEntries::StaticStruct, Z_Construct_UScriptStruct_FSIK_SteamLeaderboardEntries_Statics::NewStructOps, TEXT("SIK_SteamLeaderboardEntries"),&Z_Registration_Info_UScriptStruct_FSIK_SteamLeaderboardEntries, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSIK_SteamLeaderboardEntries), 664868781U) },
		{ FSIK_SteamLeaderboard::StaticStruct, Z_Construct_UScriptStruct_FSIK_SteamLeaderboard_Statics::NewStructOps, TEXT("SIK_SteamLeaderboard"),&Z_Registration_Info_UScriptStruct_FSIK_SteamLeaderboard, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSIK_SteamLeaderboard), 705236842U) },
		{ FSIK_PartyBeaconID::StaticStruct, Z_Construct_UScriptStruct_FSIK_PartyBeaconID_Statics::NewStructOps, TEXT("SIK_PartyBeaconID"),&Z_Registration_Info_UScriptStruct_FSIK_PartyBeaconID, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSIK_PartyBeaconID), 93468669U) },
		{ FSIK_GameID::StaticStruct, Z_Construct_UScriptStruct_FSIK_GameID_Statics::NewStructOps, TEXT("SIK_GameID"),&Z_Registration_Info_UScriptStruct_FSIK_GameID, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSIK_GameID), 119361006U) },
		{ FSIK_InputActionSetHandle::StaticStruct, Z_Construct_UScriptStruct_FSIK_InputActionSetHandle_Statics::NewStructOps, TEXT("SIK_InputActionSetHandle"),&Z_Registration_Info_UScriptStruct_FSIK_InputActionSetHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSIK_InputActionSetHandle), 3571203032U) },
		{ FSIK_InputDigitalActionHandle::StaticStruct, Z_Construct_UScriptStruct_FSIK_InputDigitalActionHandle_Statics::NewStructOps, TEXT("SIK_InputDigitalActionHandle"),&Z_Registration_Info_UScriptStruct_FSIK_InputDigitalActionHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSIK_InputDigitalActionHandle), 1907072118U) },
		{ FSIK_InputAnalogActionHandle::StaticStruct, Z_Construct_UScriptStruct_FSIK_InputAnalogActionHandle_Statics::NewStructOps, TEXT("SIK_InputAnalogActionHandle"),&Z_Registration_Info_UScriptStruct_FSIK_InputAnalogActionHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSIK_InputAnalogActionHandle), 3343414957U) },
		{ FSIK_InputHandle::StaticStruct, Z_Construct_UScriptStruct_FSIK_InputHandle_Statics::NewStructOps, TEXT("SIK_InputHandle"),&Z_Registration_Info_UScriptStruct_FSIK_InputHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSIK_InputHandle), 2589624516U) },
		{ FSIK_InputAnalogActionData::StaticStruct, Z_Construct_UScriptStruct_FSIK_InputAnalogActionData_Statics::NewStructOps, TEXT("SIK_InputAnalogActionData"),&Z_Registration_Info_UScriptStruct_FSIK_InputAnalogActionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSIK_InputAnalogActionData), 180652413U) },
		{ FSIK_InputDigitalActionData::StaticStruct, Z_Construct_UScriptStruct_FSIK_InputDigitalActionData_Statics::NewStructOps, TEXT("SIK_InputDigitalActionData"),&Z_Registration_Info_UScriptStruct_FSIK_InputDigitalActionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSIK_InputDigitalActionData), 2488192451U) },
		{ FSIK_InputMotionData::StaticStruct, Z_Construct_UScriptStruct_FSIK_InputMotionData_Statics::NewStructOps, TEXT("SIK_InputMotionData"),&Z_Registration_Info_UScriptStruct_FSIK_InputMotionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSIK_InputMotionData), 3477168184U) },
		{ FSIK_ScePadTriggerEffectWeaponParam::StaticStruct, Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectWeaponParam_Statics::NewStructOps, TEXT("SIK_ScePadTriggerEffectWeaponParam"),&Z_Registration_Info_UScriptStruct_FSIK_ScePadTriggerEffectWeaponParam, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSIK_ScePadTriggerEffectWeaponParam), 480340156U) },
		{ FSIK_ScePadTriggerEffectVibrationParam::StaticStruct, Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectVibrationParam_Statics::NewStructOps, TEXT("SIK_ScePadTriggerEffectVibrationParam"),&Z_Registration_Info_UScriptStruct_FSIK_ScePadTriggerEffectVibrationParam, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSIK_ScePadTriggerEffectVibrationParam), 375865682U) },
		{ FSIK_ScePadTriggerEffectFeedbackParam::StaticStruct, Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectFeedbackParam_Statics::NewStructOps, TEXT("SIK_ScePadTriggerEffectFeedbackParam"),&Z_Registration_Info_UScriptStruct_FSIK_ScePadTriggerEffectFeedbackParam, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSIK_ScePadTriggerEffectFeedbackParam), 4207684927U) },
		{ FSIK_ScePadTriggerEffectMultiplePositionFeedbackParam::StaticStruct, Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectMultiplePositionFeedbackParam_Statics::NewStructOps, TEXT("SIK_ScePadTriggerEffectMultiplePositionFeedbackParam"),&Z_Registration_Info_UScriptStruct_FSIK_ScePadTriggerEffectMultiplePositionFeedbackParam, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSIK_ScePadTriggerEffectMultiplePositionFeedbackParam), 2354893207U) },
		{ FSIK_ScePadTriggerEffectOffParam::StaticStruct, Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectOffParam_Statics::NewStructOps, TEXT("SIK_ScePadTriggerEffectOffParam"),&Z_Registration_Info_UScriptStruct_FSIK_ScePadTriggerEffectOffParam, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSIK_ScePadTriggerEffectOffParam), 828829423U) },
		{ FSIK_ScePadTriggerEffectSlopeFeedbackParam::StaticStruct, Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectSlopeFeedbackParam_Statics::NewStructOps, TEXT("SIK_ScePadTriggerEffectSlopeFeedbackParam"),&Z_Registration_Info_UScriptStruct_FSIK_ScePadTriggerEffectSlopeFeedbackParam, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSIK_ScePadTriggerEffectSlopeFeedbackParam), 1289465786U) },
		{ FSIK_ScePadTriggerEffectMultiplePositionVibrationParam::StaticStruct, Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectMultiplePositionVibrationParam_Statics::NewStructOps, TEXT("SIK_ScePadTriggerEffectMultiplePositionVibrationParam"),&Z_Registration_Info_UScriptStruct_FSIK_ScePadTriggerEffectMultiplePositionVibrationParam, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSIK_ScePadTriggerEffectMultiplePositionVibrationParam), 3451430916U) },
		{ FSIK_ScePadTriggerEffectCommandData::StaticStruct, Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectCommandData_Statics::NewStructOps, TEXT("SIK_ScePadTriggerEffectCommandData"),&Z_Registration_Info_UScriptStruct_FSIK_ScePadTriggerEffectCommandData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSIK_ScePadTriggerEffectCommandData), 3501910065U) },
		{ FSIK_ScePadTriggerEffectCommand::StaticStruct, Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectCommand_Statics::NewStructOps, TEXT("SIK_ScePadTriggerEffectCommand"),&Z_Registration_Info_UScriptStruct_FSIK_ScePadTriggerEffectCommand, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSIK_ScePadTriggerEffectCommand), 1616566197U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_SharedFile, USIK_SharedFile::StaticClass, TEXT("USIK_SharedFile"), &Z_Registration_Info_UClass_USIK_SharedFile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_SharedFile), 2364304U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Public_SIK_SharedFile_h__Script_SteamIntegrationKit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Public_SIK_SharedFile_h__Script_SteamIntegrationKit_689491958{
	TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Public_SIK_SharedFile_h__Script_SteamIntegrationKit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Public_SIK_SharedFile_h__Script_SteamIntegrationKit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Public_SIK_SharedFile_h__Script_SteamIntegrationKit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Public_SIK_SharedFile_h__Script_SteamIntegrationKit_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Public_SIK_SharedFile_h__Script_SteamIntegrationKit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Public_SIK_SharedFile_h__Script_SteamIntegrationKit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
