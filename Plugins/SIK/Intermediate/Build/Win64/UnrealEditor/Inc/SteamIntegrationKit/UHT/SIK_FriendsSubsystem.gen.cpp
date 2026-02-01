// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/Friends/SIK_FriendsSubsystem.h"
#include "Engine/GameInstance.h"
#include "SIK_SharedFile.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_FriendsSubsystem() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_FriendsSubsystem();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_FriendsSubsystem_NoRegister();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_ChatRoomEnterResponse();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAvatarImageLoaded__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnClanOfficerList__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnDownloadClanActivityCountsResult__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFriendEnumerateFollowingList__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFriendRichPresenceUpdate__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFriendsGetFollowerCount__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFriendsIsFollowing__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameConnectedChatJoin__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameConnectedChatLeave__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameConnectedClanChatMsg__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameConnectedFriendChatMsg__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameLobbyJoinRequested__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameOverlayActivated__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameRichPresenceJoinRequested__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameServerChangeRequested__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnJoinClanChatRoomCompletionResult__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnPersonaStateChange__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSetPersonaNameResponse__DelegateSignature();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_AppId();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_SteamId();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnAvatarImageLoaded **************************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAvatarImageLoaded__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnAvatarImageLoaded_Parms
	{
		FSIK_SteamId SteamId;
		int32 Image;
		int32 Wide;
		int32 Tall;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnAvatarImageLoaded constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Image;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Wide;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Tall;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnAvatarImageLoaded constinit property declarations ********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnAvatarImageLoaded Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAvatarImageLoaded__DelegateSignature_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnAvatarImageLoaded_Parms, SteamId), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAvatarImageLoaded__DelegateSignature_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnAvatarImageLoaded_Parms, Image), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAvatarImageLoaded__DelegateSignature_Statics::NewProp_Wide = { "Wide", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnAvatarImageLoaded_Parms, Wide), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAvatarImageLoaded__DelegateSignature_Statics::NewProp_Tall = { "Tall", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnAvatarImageLoaded_Parms, Tall), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAvatarImageLoaded__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAvatarImageLoaded__DelegateSignature_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAvatarImageLoaded__DelegateSignature_Statics::NewProp_Image,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAvatarImageLoaded__DelegateSignature_Statics::NewProp_Wide,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAvatarImageLoaded__DelegateSignature_Statics::NewProp_Tall,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAvatarImageLoaded__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnAvatarImageLoaded Property Definitions *******************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAvatarImageLoaded__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnAvatarImageLoaded__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAvatarImageLoaded__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAvatarImageLoaded__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAvatarImageLoaded__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnAvatarImageLoaded_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAvatarImageLoaded__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAvatarImageLoaded__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAvatarImageLoaded__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnAvatarImageLoaded_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAvatarImageLoaded__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAvatarImageLoaded__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAvatarImageLoaded_DelegateWrapper(const FMulticastScriptDelegate& OnAvatarImageLoaded, FSIK_SteamId SteamId, int32 Image, int32 Wide, int32 Tall)
{
	struct _Script_SteamIntegrationKit_eventOnAvatarImageLoaded_Parms
	{
		FSIK_SteamId SteamId;
		int32 Image;
		int32 Wide;
		int32 Tall;
	};
	_Script_SteamIntegrationKit_eventOnAvatarImageLoaded_Parms Parms;
	Parms.SteamId=SteamId;
	Parms.Image=Image;
	Parms.Wide=Wide;
	Parms.Tall=Tall;
	OnAvatarImageLoaded.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnAvatarImageLoaded ****************************************************

// ********** Begin Delegate FOnClanOfficerList ****************************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnClanOfficerList__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnClanOfficerList_Parms
	{
		FSIK_SteamId SteamId;
		int32 OfficerCount;
		bool bSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnClanOfficerList constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OfficerCount;
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnClanOfficerList constinit property declarations **********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnClanOfficerList Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnClanOfficerList__DelegateSignature_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnClanOfficerList_Parms, SteamId), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnClanOfficerList__DelegateSignature_Statics::NewProp_OfficerCount = { "OfficerCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnClanOfficerList_Parms, OfficerCount), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UDelegateFunction_SteamIntegrationKit_OnClanOfficerList__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((_Script_SteamIntegrationKit_eventOnClanOfficerList_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnClanOfficerList__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamIntegrationKit_eventOnClanOfficerList_Parms), &Z_Construct_UDelegateFunction_SteamIntegrationKit_OnClanOfficerList__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnClanOfficerList__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnClanOfficerList__DelegateSignature_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnClanOfficerList__DelegateSignature_Statics::NewProp_OfficerCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnClanOfficerList__DelegateSignature_Statics::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnClanOfficerList__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnClanOfficerList Property Definitions *********************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnClanOfficerList__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnClanOfficerList__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_OnClanOfficerList__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnClanOfficerList__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnClanOfficerList__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnClanOfficerList_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnClanOfficerList__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnClanOfficerList__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnClanOfficerList__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnClanOfficerList_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnClanOfficerList__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnClanOfficerList__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnClanOfficerList_DelegateWrapper(const FMulticastScriptDelegate& OnClanOfficerList, FSIK_SteamId SteamId, int32 OfficerCount, bool bSuccess)
{
	struct _Script_SteamIntegrationKit_eventOnClanOfficerList_Parms
	{
		FSIK_SteamId SteamId;
		int32 OfficerCount;
		bool bSuccess;
	};
	_Script_SteamIntegrationKit_eventOnClanOfficerList_Parms Parms;
	Parms.SteamId=SteamId;
	Parms.OfficerCount=OfficerCount;
	Parms.bSuccess=bSuccess ? true : false;
	OnClanOfficerList.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnClanOfficerList ******************************************************

// ********** Begin Delegate FOnFriendRichPresenceUpdate *******************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFriendRichPresenceUpdate__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnFriendRichPresenceUpdate_Parms
	{
		FSIK_SteamId SteamId;
		FSIK_AppId AppId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnFriendRichPresenceUpdate constinit property declarations ***********
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnFriendRichPresenceUpdate constinit property declarations *************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnFriendRichPresenceUpdate Property Definitions **********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFriendRichPresenceUpdate__DelegateSignature_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnFriendRichPresenceUpdate_Parms, SteamId), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFriendRichPresenceUpdate__DelegateSignature_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnFriendRichPresenceUpdate_Parms, AppId), Z_Construct_UScriptStruct_FSIK_AppId, METADATA_PARAMS(0, nullptr) }; // 3325316996
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFriendRichPresenceUpdate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFriendRichPresenceUpdate__DelegateSignature_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFriendRichPresenceUpdate__DelegateSignature_Statics::NewProp_AppId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFriendRichPresenceUpdate__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnFriendRichPresenceUpdate Property Definitions ************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFriendRichPresenceUpdate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnFriendRichPresenceUpdate__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFriendRichPresenceUpdate__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFriendRichPresenceUpdate__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFriendRichPresenceUpdate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnFriendRichPresenceUpdate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFriendRichPresenceUpdate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFriendRichPresenceUpdate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFriendRichPresenceUpdate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnFriendRichPresenceUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFriendRichPresenceUpdate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFriendRichPresenceUpdate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnFriendRichPresenceUpdate_DelegateWrapper(const FMulticastScriptDelegate& OnFriendRichPresenceUpdate, FSIK_SteamId SteamId, FSIK_AppId AppId)
{
	struct _Script_SteamIntegrationKit_eventOnFriendRichPresenceUpdate_Parms
	{
		FSIK_SteamId SteamId;
		FSIK_AppId AppId;
	};
	_Script_SteamIntegrationKit_eventOnFriendRichPresenceUpdate_Parms Parms;
	Parms.SteamId=SteamId;
	Parms.AppId=AppId;
	OnFriendRichPresenceUpdate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnFriendRichPresenceUpdate *********************************************

// ********** Begin Delegate FOnDownloadClanActivityCountsResult ***********************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnDownloadClanActivityCountsResult__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnDownloadClanActivityCountsResult_Parms
	{
		bool bSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnDownloadClanActivityCountsResult constinit property declarations ***
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnDownloadClanActivityCountsResult constinit property declarations *****
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnDownloadClanActivityCountsResult Property Definitions **************
void Z_Construct_UDelegateFunction_SteamIntegrationKit_OnDownloadClanActivityCountsResult__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((_Script_SteamIntegrationKit_eventOnDownloadClanActivityCountsResult_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnDownloadClanActivityCountsResult__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamIntegrationKit_eventOnDownloadClanActivityCountsResult_Parms), &Z_Construct_UDelegateFunction_SteamIntegrationKit_OnDownloadClanActivityCountsResult__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnDownloadClanActivityCountsResult__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnDownloadClanActivityCountsResult__DelegateSignature_Statics::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnDownloadClanActivityCountsResult__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnDownloadClanActivityCountsResult Property Definitions ****************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnDownloadClanActivityCountsResult__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnDownloadClanActivityCountsResult__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_OnDownloadClanActivityCountsResult__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnDownloadClanActivityCountsResult__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnDownloadClanActivityCountsResult__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnDownloadClanActivityCountsResult_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnDownloadClanActivityCountsResult__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnDownloadClanActivityCountsResult__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnDownloadClanActivityCountsResult__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnDownloadClanActivityCountsResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnDownloadClanActivityCountsResult__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnDownloadClanActivityCountsResult__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnDownloadClanActivityCountsResult_DelegateWrapper(const FMulticastScriptDelegate& OnDownloadClanActivityCountsResult, bool bSuccess)
{
	struct _Script_SteamIntegrationKit_eventOnDownloadClanActivityCountsResult_Parms
	{
		bool bSuccess;
	};
	_Script_SteamIntegrationKit_eventOnDownloadClanActivityCountsResult_Parms Parms;
	Parms.bSuccess=bSuccess ? true : false;
	OnDownloadClanActivityCountsResult.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnDownloadClanActivityCountsResult *************************************

// ********** Begin Delegate FOnFriendEnumerateFollowingList ***************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFriendEnumerateFollowingList__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnFriendEnumerateFollowingList_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
		TArray<FSIK_SteamId> SteamId;
		int32 ResultsReturned;
		int32 TotalResults;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnFriendEnumerateFollowingList constinit property declarations *******
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamId_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ResultsReturned;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TotalResults;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnFriendEnumerateFollowingList constinit property declarations *********
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnFriendEnumerateFollowingList Property Definitions ******************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFriendEnumerateFollowingList__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnFriendEnumerateFollowingList_Parms, Result), Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result, METADATA_PARAMS(0, nullptr) }; // 655382749
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFriendEnumerateFollowingList__DelegateSignature_Statics::NewProp_SteamId_Inner = { "SteamId", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFriendEnumerateFollowingList__DelegateSignature_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnFriendEnumerateFollowingList_Parms, SteamId), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFriendEnumerateFollowingList__DelegateSignature_Statics::NewProp_ResultsReturned = { "ResultsReturned", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnFriendEnumerateFollowingList_Parms, ResultsReturned), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFriendEnumerateFollowingList__DelegateSignature_Statics::NewProp_TotalResults = { "TotalResults", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnFriendEnumerateFollowingList_Parms, TotalResults), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFriendEnumerateFollowingList__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFriendEnumerateFollowingList__DelegateSignature_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFriendEnumerateFollowingList__DelegateSignature_Statics::NewProp_SteamId_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFriendEnumerateFollowingList__DelegateSignature_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFriendEnumerateFollowingList__DelegateSignature_Statics::NewProp_ResultsReturned,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFriendEnumerateFollowingList__DelegateSignature_Statics::NewProp_TotalResults,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFriendEnumerateFollowingList__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnFriendEnumerateFollowingList Property Definitions ********************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFriendEnumerateFollowingList__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnFriendEnumerateFollowingList__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFriendEnumerateFollowingList__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFriendEnumerateFollowingList__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFriendEnumerateFollowingList__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnFriendEnumerateFollowingList_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFriendEnumerateFollowingList__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFriendEnumerateFollowingList__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFriendEnumerateFollowingList__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnFriendEnumerateFollowingList_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFriendEnumerateFollowingList__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFriendEnumerateFollowingList__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnFriendEnumerateFollowingList_DelegateWrapper(const FMulticastScriptDelegate& OnFriendEnumerateFollowingList, ESIK_Result Result, const TArray<FSIK_SteamId>& SteamId, int32 ResultsReturned, int32 TotalResults)
{
	struct _Script_SteamIntegrationKit_eventOnFriendEnumerateFollowingList_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
		TArray<FSIK_SteamId> SteamId;
		int32 ResultsReturned;
		int32 TotalResults;
	};
	_Script_SteamIntegrationKit_eventOnFriendEnumerateFollowingList_Parms Parms;
	Parms.Result=Result;
	Parms.SteamId=SteamId;
	Parms.ResultsReturned=ResultsReturned;
	Parms.TotalResults=TotalResults;
	OnFriendEnumerateFollowingList.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnFriendEnumerateFollowingList *****************************************

// ********** Begin Delegate FOnFriendsGetFollowerCount ********************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFriendsGetFollowerCount__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnFriendsGetFollowerCount_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
		FSIK_SteamId SteamId;
		int32 Count;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnFriendsGetFollowerCount constinit property declarations ************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnFriendsGetFollowerCount constinit property declarations **************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnFriendsGetFollowerCount Property Definitions ***********************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFriendsGetFollowerCount__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnFriendsGetFollowerCount_Parms, Result), Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result, METADATA_PARAMS(0, nullptr) }; // 655382749
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFriendsGetFollowerCount__DelegateSignature_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnFriendsGetFollowerCount_Parms, SteamId), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFriendsGetFollowerCount__DelegateSignature_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnFriendsGetFollowerCount_Parms, Count), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFriendsGetFollowerCount__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFriendsGetFollowerCount__DelegateSignature_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFriendsGetFollowerCount__DelegateSignature_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFriendsGetFollowerCount__DelegateSignature_Statics::NewProp_Count,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFriendsGetFollowerCount__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnFriendsGetFollowerCount Property Definitions *************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFriendsGetFollowerCount__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnFriendsGetFollowerCount__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFriendsGetFollowerCount__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFriendsGetFollowerCount__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFriendsGetFollowerCount__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnFriendsGetFollowerCount_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFriendsGetFollowerCount__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFriendsGetFollowerCount__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFriendsGetFollowerCount__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnFriendsGetFollowerCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFriendsGetFollowerCount__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFriendsGetFollowerCount__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnFriendsGetFollowerCount_DelegateWrapper(const FMulticastScriptDelegate& OnFriendsGetFollowerCount, ESIK_Result Result, FSIK_SteamId SteamId, int32 Count)
{
	struct _Script_SteamIntegrationKit_eventOnFriendsGetFollowerCount_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
		FSIK_SteamId SteamId;
		int32 Count;
	};
	_Script_SteamIntegrationKit_eventOnFriendsGetFollowerCount_Parms Parms;
	Parms.Result=Result;
	Parms.SteamId=SteamId;
	Parms.Count=Count;
	OnFriendsGetFollowerCount.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnFriendsGetFollowerCount **********************************************

// ********** Begin Delegate FOnFriendsIsFollowing *************************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFriendsIsFollowing__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnFriendsIsFollowing_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
		FSIK_SteamId SteamId;
		bool bIsFollowing;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnFriendsIsFollowing constinit property declarations *****************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamId;
	static void NewProp_bIsFollowing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFollowing;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnFriendsIsFollowing constinit property declarations *******************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnFriendsIsFollowing Property Definitions ****************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFriendsIsFollowing__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnFriendsIsFollowing_Parms, Result), Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result, METADATA_PARAMS(0, nullptr) }; // 655382749
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFriendsIsFollowing__DelegateSignature_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnFriendsIsFollowing_Parms, SteamId), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
void Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFriendsIsFollowing__DelegateSignature_Statics::NewProp_bIsFollowing_SetBit(void* Obj)
{
	((_Script_SteamIntegrationKit_eventOnFriendsIsFollowing_Parms*)Obj)->bIsFollowing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFriendsIsFollowing__DelegateSignature_Statics::NewProp_bIsFollowing = { "bIsFollowing", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamIntegrationKit_eventOnFriendsIsFollowing_Parms), &Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFriendsIsFollowing__DelegateSignature_Statics::NewProp_bIsFollowing_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFriendsIsFollowing__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFriendsIsFollowing__DelegateSignature_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFriendsIsFollowing__DelegateSignature_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFriendsIsFollowing__DelegateSignature_Statics::NewProp_bIsFollowing,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFriendsIsFollowing__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnFriendsIsFollowing Property Definitions ******************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFriendsIsFollowing__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnFriendsIsFollowing__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFriendsIsFollowing__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFriendsIsFollowing__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFriendsIsFollowing__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnFriendsIsFollowing_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFriendsIsFollowing__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFriendsIsFollowing__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFriendsIsFollowing__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnFriendsIsFollowing_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFriendsIsFollowing__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFriendsIsFollowing__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnFriendsIsFollowing_DelegateWrapper(const FMulticastScriptDelegate& OnFriendsIsFollowing, ESIK_Result Result, FSIK_SteamId SteamId, bool bIsFollowing)
{
	struct _Script_SteamIntegrationKit_eventOnFriendsIsFollowing_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
		FSIK_SteamId SteamId;
		bool bIsFollowing;
	};
	_Script_SteamIntegrationKit_eventOnFriendsIsFollowing_Parms Parms;
	Parms.Result=Result;
	Parms.SteamId=SteamId;
	Parms.bIsFollowing=bIsFollowing ? true : false;
	OnFriendsIsFollowing.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnFriendsIsFollowing ***************************************************

// ********** Begin Delegate FOnGameConnectedChatJoin **********************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameConnectedChatJoin__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnGameConnectedChatJoin_Parms
	{
		FSIK_SteamId ClanChatId;
		FSIK_SteamId User;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnGameConnectedChatJoin constinit property declarations **************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ClanChatId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_User;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnGameConnectedChatJoin constinit property declarations ****************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnGameConnectedChatJoin Property Definitions *************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameConnectedChatJoin__DelegateSignature_Statics::NewProp_ClanChatId = { "ClanChatId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnGameConnectedChatJoin_Parms, ClanChatId), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameConnectedChatJoin__DelegateSignature_Statics::NewProp_User = { "User", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnGameConnectedChatJoin_Parms, User), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameConnectedChatJoin__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameConnectedChatJoin__DelegateSignature_Statics::NewProp_ClanChatId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameConnectedChatJoin__DelegateSignature_Statics::NewProp_User,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameConnectedChatJoin__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnGameConnectedChatJoin Property Definitions ***************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameConnectedChatJoin__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnGameConnectedChatJoin__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameConnectedChatJoin__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameConnectedChatJoin__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameConnectedChatJoin__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnGameConnectedChatJoin_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameConnectedChatJoin__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameConnectedChatJoin__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameConnectedChatJoin__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnGameConnectedChatJoin_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameConnectedChatJoin__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameConnectedChatJoin__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGameConnectedChatJoin_DelegateWrapper(const FMulticastScriptDelegate& OnGameConnectedChatJoin, FSIK_SteamId ClanChatId, FSIK_SteamId User)
{
	struct _Script_SteamIntegrationKit_eventOnGameConnectedChatJoin_Parms
	{
		FSIK_SteamId ClanChatId;
		FSIK_SteamId User;
	};
	_Script_SteamIntegrationKit_eventOnGameConnectedChatJoin_Parms Parms;
	Parms.ClanChatId=ClanChatId;
	Parms.User=User;
	OnGameConnectedChatJoin.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnGameConnectedChatJoin ************************************************

// ********** Begin Delegate FOnGameConnectedChatLeave *********************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameConnectedChatLeave__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnGameConnectedChatLeave_Parms
	{
		FSIK_SteamId ClanChatId;
		FSIK_SteamId User;
		bool Kicked;
		bool Dropped;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnGameConnectedChatLeave constinit property declarations *************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ClanChatId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_User;
	static void NewProp_Kicked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Kicked;
	static void NewProp_Dropped_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Dropped;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnGameConnectedChatLeave constinit property declarations ***************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnGameConnectedChatLeave Property Definitions ************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameConnectedChatLeave__DelegateSignature_Statics::NewProp_ClanChatId = { "ClanChatId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnGameConnectedChatLeave_Parms, ClanChatId), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameConnectedChatLeave__DelegateSignature_Statics::NewProp_User = { "User", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnGameConnectedChatLeave_Parms, User), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
void Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameConnectedChatLeave__DelegateSignature_Statics::NewProp_Kicked_SetBit(void* Obj)
{
	((_Script_SteamIntegrationKit_eventOnGameConnectedChatLeave_Parms*)Obj)->Kicked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameConnectedChatLeave__DelegateSignature_Statics::NewProp_Kicked = { "Kicked", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamIntegrationKit_eventOnGameConnectedChatLeave_Parms), &Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameConnectedChatLeave__DelegateSignature_Statics::NewProp_Kicked_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameConnectedChatLeave__DelegateSignature_Statics::NewProp_Dropped_SetBit(void* Obj)
{
	((_Script_SteamIntegrationKit_eventOnGameConnectedChatLeave_Parms*)Obj)->Dropped = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameConnectedChatLeave__DelegateSignature_Statics::NewProp_Dropped = { "Dropped", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamIntegrationKit_eventOnGameConnectedChatLeave_Parms), &Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameConnectedChatLeave__DelegateSignature_Statics::NewProp_Dropped_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameConnectedChatLeave__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameConnectedChatLeave__DelegateSignature_Statics::NewProp_ClanChatId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameConnectedChatLeave__DelegateSignature_Statics::NewProp_User,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameConnectedChatLeave__DelegateSignature_Statics::NewProp_Kicked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameConnectedChatLeave__DelegateSignature_Statics::NewProp_Dropped,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameConnectedChatLeave__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnGameConnectedChatLeave Property Definitions **************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameConnectedChatLeave__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnGameConnectedChatLeave__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameConnectedChatLeave__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameConnectedChatLeave__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameConnectedChatLeave__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnGameConnectedChatLeave_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameConnectedChatLeave__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameConnectedChatLeave__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameConnectedChatLeave__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnGameConnectedChatLeave_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameConnectedChatLeave__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameConnectedChatLeave__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGameConnectedChatLeave_DelegateWrapper(const FMulticastScriptDelegate& OnGameConnectedChatLeave, FSIK_SteamId ClanChatId, FSIK_SteamId User, bool Kicked, bool Dropped)
{
	struct _Script_SteamIntegrationKit_eventOnGameConnectedChatLeave_Parms
	{
		FSIK_SteamId ClanChatId;
		FSIK_SteamId User;
		bool Kicked;
		bool Dropped;
	};
	_Script_SteamIntegrationKit_eventOnGameConnectedChatLeave_Parms Parms;
	Parms.ClanChatId=ClanChatId;
	Parms.User=User;
	Parms.Kicked=Kicked ? true : false;
	Parms.Dropped=Dropped ? true : false;
	OnGameConnectedChatLeave.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnGameConnectedChatLeave ***********************************************

// ********** Begin Delegate FOnGameConnectedClanChatMsg *******************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameConnectedClanChatMsg__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnGameConnectedClanChatMsg_Parms
	{
		FSIK_SteamId ClanChatId;
		FSIK_SteamId User;
		int32 MessageID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnGameConnectedClanChatMsg constinit property declarations ***********
	static const UECodeGen_Private::FStructPropertyParams NewProp_ClanChatId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_User;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MessageID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnGameConnectedClanChatMsg constinit property declarations *************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnGameConnectedClanChatMsg Property Definitions **********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameConnectedClanChatMsg__DelegateSignature_Statics::NewProp_ClanChatId = { "ClanChatId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnGameConnectedClanChatMsg_Parms, ClanChatId), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameConnectedClanChatMsg__DelegateSignature_Statics::NewProp_User = { "User", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnGameConnectedClanChatMsg_Parms, User), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameConnectedClanChatMsg__DelegateSignature_Statics::NewProp_MessageID = { "MessageID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnGameConnectedClanChatMsg_Parms, MessageID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameConnectedClanChatMsg__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameConnectedClanChatMsg__DelegateSignature_Statics::NewProp_ClanChatId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameConnectedClanChatMsg__DelegateSignature_Statics::NewProp_User,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameConnectedClanChatMsg__DelegateSignature_Statics::NewProp_MessageID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameConnectedClanChatMsg__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnGameConnectedClanChatMsg Property Definitions ************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameConnectedClanChatMsg__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnGameConnectedClanChatMsg__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameConnectedClanChatMsg__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameConnectedClanChatMsg__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameConnectedClanChatMsg__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnGameConnectedClanChatMsg_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameConnectedClanChatMsg__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameConnectedClanChatMsg__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameConnectedClanChatMsg__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnGameConnectedClanChatMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameConnectedClanChatMsg__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameConnectedClanChatMsg__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGameConnectedClanChatMsg_DelegateWrapper(const FMulticastScriptDelegate& OnGameConnectedClanChatMsg, FSIK_SteamId ClanChatId, FSIK_SteamId User, int32 MessageID)
{
	struct _Script_SteamIntegrationKit_eventOnGameConnectedClanChatMsg_Parms
	{
		FSIK_SteamId ClanChatId;
		FSIK_SteamId User;
		int32 MessageID;
	};
	_Script_SteamIntegrationKit_eventOnGameConnectedClanChatMsg_Parms Parms;
	Parms.ClanChatId=ClanChatId;
	Parms.User=User;
	Parms.MessageID=MessageID;
	OnGameConnectedClanChatMsg.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnGameConnectedClanChatMsg *********************************************

// ********** Begin Delegate FOnGameConnectedFriendChatMsg *****************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameConnectedFriendChatMsg__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnGameConnectedFriendChatMsg_Parms
	{
		FSIK_SteamId User;
		int32 MessageID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnGameConnectedFriendChatMsg constinit property declarations *********
	static const UECodeGen_Private::FStructPropertyParams NewProp_User;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MessageID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnGameConnectedFriendChatMsg constinit property declarations ***********
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnGameConnectedFriendChatMsg Property Definitions ********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameConnectedFriendChatMsg__DelegateSignature_Statics::NewProp_User = { "User", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnGameConnectedFriendChatMsg_Parms, User), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameConnectedFriendChatMsg__DelegateSignature_Statics::NewProp_MessageID = { "MessageID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnGameConnectedFriendChatMsg_Parms, MessageID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameConnectedFriendChatMsg__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameConnectedFriendChatMsg__DelegateSignature_Statics::NewProp_User,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameConnectedFriendChatMsg__DelegateSignature_Statics::NewProp_MessageID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameConnectedFriendChatMsg__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnGameConnectedFriendChatMsg Property Definitions **********************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameConnectedFriendChatMsg__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnGameConnectedFriendChatMsg__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameConnectedFriendChatMsg__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameConnectedFriendChatMsg__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameConnectedFriendChatMsg__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnGameConnectedFriendChatMsg_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameConnectedFriendChatMsg__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameConnectedFriendChatMsg__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameConnectedFriendChatMsg__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnGameConnectedFriendChatMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameConnectedFriendChatMsg__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameConnectedFriendChatMsg__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGameConnectedFriendChatMsg_DelegateWrapper(const FMulticastScriptDelegate& OnGameConnectedFriendChatMsg, FSIK_SteamId User, int32 MessageID)
{
	struct _Script_SteamIntegrationKit_eventOnGameConnectedFriendChatMsg_Parms
	{
		FSIK_SteamId User;
		int32 MessageID;
	};
	_Script_SteamIntegrationKit_eventOnGameConnectedFriendChatMsg_Parms Parms;
	Parms.User=User;
	Parms.MessageID=MessageID;
	OnGameConnectedFriendChatMsg.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnGameConnectedFriendChatMsg *******************************************

// ********** Begin Delegate FOnGameLobbyJoinRequested *********************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameLobbyJoinRequested__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnGameLobbyJoinRequested_Parms
	{
		FSIK_SteamId SteamId;
		FSIK_SteamId LobbyId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnGameLobbyJoinRequested constinit property declarations *************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnGameLobbyJoinRequested constinit property declarations ***************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnGameLobbyJoinRequested Property Definitions ************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameLobbyJoinRequested__DelegateSignature_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnGameLobbyJoinRequested_Parms, SteamId), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameLobbyJoinRequested__DelegateSignature_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnGameLobbyJoinRequested_Parms, LobbyId), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameLobbyJoinRequested__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameLobbyJoinRequested__DelegateSignature_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameLobbyJoinRequested__DelegateSignature_Statics::NewProp_LobbyId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameLobbyJoinRequested__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnGameLobbyJoinRequested Property Definitions **************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameLobbyJoinRequested__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnGameLobbyJoinRequested__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameLobbyJoinRequested__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameLobbyJoinRequested__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameLobbyJoinRequested__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnGameLobbyJoinRequested_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameLobbyJoinRequested__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameLobbyJoinRequested__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameLobbyJoinRequested__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnGameLobbyJoinRequested_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameLobbyJoinRequested__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameLobbyJoinRequested__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGameLobbyJoinRequested_DelegateWrapper(const FMulticastScriptDelegate& OnGameLobbyJoinRequested, FSIK_SteamId SteamId, FSIK_SteamId LobbyId)
{
	struct _Script_SteamIntegrationKit_eventOnGameLobbyJoinRequested_Parms
	{
		FSIK_SteamId SteamId;
		FSIK_SteamId LobbyId;
	};
	_Script_SteamIntegrationKit_eventOnGameLobbyJoinRequested_Parms Parms;
	Parms.SteamId=SteamId;
	Parms.LobbyId=LobbyId;
	OnGameLobbyJoinRequested.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnGameLobbyJoinRequested ***********************************************

// ********** Begin Delegate FOnGameOverlayActivated ***********************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameOverlayActivated__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnGameOverlayActivated_Parms
	{
		bool bActive;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnGameOverlayActivated constinit property declarations ***************
	static void NewProp_bActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bActive;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnGameOverlayActivated constinit property declarations *****************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnGameOverlayActivated Property Definitions **************************
void Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameOverlayActivated__DelegateSignature_Statics::NewProp_bActive_SetBit(void* Obj)
{
	((_Script_SteamIntegrationKit_eventOnGameOverlayActivated_Parms*)Obj)->bActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameOverlayActivated__DelegateSignature_Statics::NewProp_bActive = { "bActive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamIntegrationKit_eventOnGameOverlayActivated_Parms), &Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameOverlayActivated__DelegateSignature_Statics::NewProp_bActive_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameOverlayActivated__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameOverlayActivated__DelegateSignature_Statics::NewProp_bActive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameOverlayActivated__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnGameOverlayActivated Property Definitions ****************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameOverlayActivated__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnGameOverlayActivated__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameOverlayActivated__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameOverlayActivated__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameOverlayActivated__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnGameOverlayActivated_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameOverlayActivated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameOverlayActivated__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameOverlayActivated__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnGameOverlayActivated_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameOverlayActivated__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameOverlayActivated__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGameOverlayActivated_DelegateWrapper(const FMulticastScriptDelegate& OnGameOverlayActivated, bool bActive)
{
	struct _Script_SteamIntegrationKit_eventOnGameOverlayActivated_Parms
	{
		bool bActive;
	};
	_Script_SteamIntegrationKit_eventOnGameOverlayActivated_Parms Parms;
	Parms.bActive=bActive ? true : false;
	OnGameOverlayActivated.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnGameOverlayActivated *************************************************

// ********** Begin Delegate FOnGameRichPresenceJoinRequested **************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameRichPresenceJoinRequested__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnGameRichPresenceJoinRequested_Parms
	{
		FSIK_SteamId SteamId;
		FString ConnectString;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnGameRichPresenceJoinRequested constinit property declarations ******
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ConnectString;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnGameRichPresenceJoinRequested constinit property declarations ********
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnGameRichPresenceJoinRequested Property Definitions *****************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameRichPresenceJoinRequested__DelegateSignature_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnGameRichPresenceJoinRequested_Parms, SteamId), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameRichPresenceJoinRequested__DelegateSignature_Statics::NewProp_ConnectString = { "ConnectString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnGameRichPresenceJoinRequested_Parms, ConnectString), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameRichPresenceJoinRequested__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameRichPresenceJoinRequested__DelegateSignature_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameRichPresenceJoinRequested__DelegateSignature_Statics::NewProp_ConnectString,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameRichPresenceJoinRequested__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnGameRichPresenceJoinRequested Property Definitions *******************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameRichPresenceJoinRequested__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnGameRichPresenceJoinRequested__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameRichPresenceJoinRequested__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameRichPresenceJoinRequested__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameRichPresenceJoinRequested__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnGameRichPresenceJoinRequested_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameRichPresenceJoinRequested__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameRichPresenceJoinRequested__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameRichPresenceJoinRequested__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnGameRichPresenceJoinRequested_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameRichPresenceJoinRequested__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameRichPresenceJoinRequested__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGameRichPresenceJoinRequested_DelegateWrapper(const FMulticastScriptDelegate& OnGameRichPresenceJoinRequested, FSIK_SteamId SteamId, const FString& ConnectString)
{
	struct _Script_SteamIntegrationKit_eventOnGameRichPresenceJoinRequested_Parms
	{
		FSIK_SteamId SteamId;
		FString ConnectString;
	};
	_Script_SteamIntegrationKit_eventOnGameRichPresenceJoinRequested_Parms Parms;
	Parms.SteamId=SteamId;
	Parms.ConnectString=ConnectString;
	OnGameRichPresenceJoinRequested.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnGameRichPresenceJoinRequested ****************************************

// ********** Begin Delegate FOnGameServerChangeRequested ******************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameServerChangeRequested__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnGameServerChangeRequested_Parms
	{
		FString Server;
		FString Password;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnGameServerChangeRequested constinit property declarations **********
	static const UECodeGen_Private::FStrPropertyParams NewProp_Server;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Password;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnGameServerChangeRequested constinit property declarations ************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnGameServerChangeRequested Property Definitions *********************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameServerChangeRequested__DelegateSignature_Statics::NewProp_Server = { "Server", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnGameServerChangeRequested_Parms, Server), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameServerChangeRequested__DelegateSignature_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnGameServerChangeRequested_Parms, Password), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameServerChangeRequested__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameServerChangeRequested__DelegateSignature_Statics::NewProp_Server,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameServerChangeRequested__DelegateSignature_Statics::NewProp_Password,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameServerChangeRequested__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnGameServerChangeRequested Property Definitions ***********************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameServerChangeRequested__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnGameServerChangeRequested__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameServerChangeRequested__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameServerChangeRequested__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameServerChangeRequested__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnGameServerChangeRequested_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameServerChangeRequested__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameServerChangeRequested__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameServerChangeRequested__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnGameServerChangeRequested_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameServerChangeRequested__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameServerChangeRequested__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGameServerChangeRequested_DelegateWrapper(const FMulticastScriptDelegate& OnGameServerChangeRequested, const FString& Server, const FString& Password)
{
	struct _Script_SteamIntegrationKit_eventOnGameServerChangeRequested_Parms
	{
		FString Server;
		FString Password;
	};
	_Script_SteamIntegrationKit_eventOnGameServerChangeRequested_Parms Parms;
	Parms.Server=Server;
	Parms.Password=Password;
	OnGameServerChangeRequested.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnGameServerChangeRequested ********************************************

// ********** Begin Delegate FOnJoinClanChatRoomCompletionResult ***********************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnJoinClanChatRoomCompletionResult__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnJoinClanChatRoomCompletionResult_Parms
	{
		FSIK_SteamId ClanChatId;
		TEnumAsByte<ESIK_ChatRoomEnterResponse> ChatRoomEnterResponse;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnJoinClanChatRoomCompletionResult constinit property declarations ***
	static const UECodeGen_Private::FStructPropertyParams NewProp_ClanChatId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ChatRoomEnterResponse;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnJoinClanChatRoomCompletionResult constinit property declarations *****
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnJoinClanChatRoomCompletionResult Property Definitions **************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnJoinClanChatRoomCompletionResult__DelegateSignature_Statics::NewProp_ClanChatId = { "ClanChatId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnJoinClanChatRoomCompletionResult_Parms, ClanChatId), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnJoinClanChatRoomCompletionResult__DelegateSignature_Statics::NewProp_ChatRoomEnterResponse = { "ChatRoomEnterResponse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnJoinClanChatRoomCompletionResult_Parms, ChatRoomEnterResponse), Z_Construct_UEnum_SteamIntegrationKit_ESIK_ChatRoomEnterResponse, METADATA_PARAMS(0, nullptr) }; // 754685013
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnJoinClanChatRoomCompletionResult__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnJoinClanChatRoomCompletionResult__DelegateSignature_Statics::NewProp_ClanChatId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnJoinClanChatRoomCompletionResult__DelegateSignature_Statics::NewProp_ChatRoomEnterResponse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnJoinClanChatRoomCompletionResult__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnJoinClanChatRoomCompletionResult Property Definitions ****************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnJoinClanChatRoomCompletionResult__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnJoinClanChatRoomCompletionResult__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_OnJoinClanChatRoomCompletionResult__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnJoinClanChatRoomCompletionResult__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnJoinClanChatRoomCompletionResult__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnJoinClanChatRoomCompletionResult_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnJoinClanChatRoomCompletionResult__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnJoinClanChatRoomCompletionResult__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnJoinClanChatRoomCompletionResult__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnJoinClanChatRoomCompletionResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnJoinClanChatRoomCompletionResult__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnJoinClanChatRoomCompletionResult__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnJoinClanChatRoomCompletionResult_DelegateWrapper(const FMulticastScriptDelegate& OnJoinClanChatRoomCompletionResult, FSIK_SteamId ClanChatId, ESIK_ChatRoomEnterResponse ChatRoomEnterResponse)
{
	struct _Script_SteamIntegrationKit_eventOnJoinClanChatRoomCompletionResult_Parms
	{
		FSIK_SteamId ClanChatId;
		TEnumAsByte<ESIK_ChatRoomEnterResponse> ChatRoomEnterResponse;
	};
	_Script_SteamIntegrationKit_eventOnJoinClanChatRoomCompletionResult_Parms Parms;
	Parms.ClanChatId=ClanChatId;
	Parms.ChatRoomEnterResponse=ChatRoomEnterResponse;
	OnJoinClanChatRoomCompletionResult.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnJoinClanChatRoomCompletionResult *************************************

// ********** Begin Delegate FOnPersonaStateChange *************************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnPersonaStateChange__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnPersonaStateChange_Parms
	{
		FSIK_SteamId SteamId;
		int32 ChangeFlags;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnPersonaStateChange constinit property declarations *****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ChangeFlags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnPersonaStateChange constinit property declarations *******************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnPersonaStateChange Property Definitions ****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnPersonaStateChange__DelegateSignature_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnPersonaStateChange_Parms, SteamId), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnPersonaStateChange__DelegateSignature_Statics::NewProp_ChangeFlags = { "ChangeFlags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnPersonaStateChange_Parms, ChangeFlags), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnPersonaStateChange__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnPersonaStateChange__DelegateSignature_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnPersonaStateChange__DelegateSignature_Statics::NewProp_ChangeFlags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnPersonaStateChange__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnPersonaStateChange Property Definitions ******************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnPersonaStateChange__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnPersonaStateChange__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_OnPersonaStateChange__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnPersonaStateChange__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnPersonaStateChange__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnPersonaStateChange_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnPersonaStateChange__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnPersonaStateChange__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnPersonaStateChange__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnPersonaStateChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnPersonaStateChange__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnPersonaStateChange__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPersonaStateChange_DelegateWrapper(const FMulticastScriptDelegate& OnPersonaStateChange, FSIK_SteamId SteamId, int32 ChangeFlags)
{
	struct _Script_SteamIntegrationKit_eventOnPersonaStateChange_Parms
	{
		FSIK_SteamId SteamId;
		int32 ChangeFlags;
	};
	_Script_SteamIntegrationKit_eventOnPersonaStateChange_Parms Parms;
	Parms.SteamId=SteamId;
	Parms.ChangeFlags=ChangeFlags;
	OnPersonaStateChange.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnPersonaStateChange ***************************************************

// ********** Begin Delegate FOnSetPersonaNameResponse *********************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSetPersonaNameResponse__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnSetPersonaNameResponse_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
		bool bLocalSuccess;
		bool bRemoteSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnSetPersonaNameResponse constinit property declarations *************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static void NewProp_bLocalSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLocalSuccess;
	static void NewProp_bRemoteSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoteSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnSetPersonaNameResponse constinit property declarations ***************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnSetPersonaNameResponse Property Definitions ************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSetPersonaNameResponse__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnSetPersonaNameResponse_Parms, Result), Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result, METADATA_PARAMS(0, nullptr) }; // 655382749
void Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSetPersonaNameResponse__DelegateSignature_Statics::NewProp_bLocalSuccess_SetBit(void* Obj)
{
	((_Script_SteamIntegrationKit_eventOnSetPersonaNameResponse_Parms*)Obj)->bLocalSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSetPersonaNameResponse__DelegateSignature_Statics::NewProp_bLocalSuccess = { "bLocalSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamIntegrationKit_eventOnSetPersonaNameResponse_Parms), &Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSetPersonaNameResponse__DelegateSignature_Statics::NewProp_bLocalSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSetPersonaNameResponse__DelegateSignature_Statics::NewProp_bRemoteSuccess_SetBit(void* Obj)
{
	((_Script_SteamIntegrationKit_eventOnSetPersonaNameResponse_Parms*)Obj)->bRemoteSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSetPersonaNameResponse__DelegateSignature_Statics::NewProp_bRemoteSuccess = { "bRemoteSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamIntegrationKit_eventOnSetPersonaNameResponse_Parms), &Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSetPersonaNameResponse__DelegateSignature_Statics::NewProp_bRemoteSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSetPersonaNameResponse__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSetPersonaNameResponse__DelegateSignature_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSetPersonaNameResponse__DelegateSignature_Statics::NewProp_bLocalSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSetPersonaNameResponse__DelegateSignature_Statics::NewProp_bRemoteSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSetPersonaNameResponse__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnSetPersonaNameResponse Property Definitions **************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSetPersonaNameResponse__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnSetPersonaNameResponse__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSetPersonaNameResponse__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSetPersonaNameResponse__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSetPersonaNameResponse__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnSetPersonaNameResponse_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSetPersonaNameResponse__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSetPersonaNameResponse__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSetPersonaNameResponse__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnSetPersonaNameResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSetPersonaNameResponse__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSetPersonaNameResponse__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSetPersonaNameResponse_DelegateWrapper(const FMulticastScriptDelegate& OnSetPersonaNameResponse, ESIK_Result Result, bool bLocalSuccess, bool bRemoteSuccess)
{
	struct _Script_SteamIntegrationKit_eventOnSetPersonaNameResponse_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
		bool bLocalSuccess;
		bool bRemoteSuccess;
	};
	_Script_SteamIntegrationKit_eventOnSetPersonaNameResponse_Parms Parms;
	Parms.Result=Result;
	Parms.bLocalSuccess=bLocalSuccess ? true : false;
	Parms.bRemoteSuccess=bRemoteSuccess ? true : false;
	OnSetPersonaNameResponse.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnSetPersonaNameResponse ***********************************************

// ********** Begin Class USIK_FriendsSubsystem ****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_FriendsSubsystem;
UClass* USIK_FriendsSubsystem::GetPrivateStaticClass()
{
	using TClass = USIK_FriendsSubsystem;
	if (!Z_Registration_Info_UClass_USIK_FriendsSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_FriendsSubsystem"),
			Z_Registration_Info_UClass_USIK_FriendsSubsystem.InnerSingleton,
			StaticRegisterNativesUSIK_FriendsSubsystem,
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
	return Z_Registration_Info_UClass_USIK_FriendsSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_FriendsSubsystem_NoRegister()
{
	return USIK_FriendsSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_FriendsSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Functions/Friends/SIK_FriendsSubsystem.h" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnClanOfficerList_MetaData[] = {
		{ "Category", "Steam Integration Kit | Friends | Response" },
		{ "Comment", "//Marks the return of a request officer list call.\n" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsSubsystem.h" },
		{ "ToolTip", "Marks the return of a request officer list call." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFriendRichPresenceUpdate_MetaData[] = {
		{ "Category", "Steam Integration Kit | Friends | Response" },
		{ "Comment", "//Called when Rich Presence data has been updated for a user, this can happen automatically when friends in the same game update their rich presence, or after a call to RequestFriendRichPresence.\n" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsSubsystem.h" },
		{ "ToolTip", "Called when Rich Presence data has been updated for a user, this can happen automatically when friends in the same game update their rich presence, or after a call to RequestFriendRichPresence." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDownloadClanActivityCountsResult_MetaData[] = {
		{ "Category", "Steam Integration Kit | Friends | Response" },
		{ "Comment", "//Called when a Steam group activity has been received.\n" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsSubsystem.h" },
		{ "ToolTip", "Called when a Steam group activity has been received." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFriendEnumerateFollowingList_MetaData[] = {
		{ "Category", "Steam Integration Kit | Friends | Response" },
		{ "Comment", "//Returns the result of EnumerateFollowingList.\n" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsSubsystem.h" },
		{ "ToolTip", "Returns the result of EnumerateFollowingList." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFriendsGetFollowerCount_MetaData[] = {
		{ "Category", "Steam Integration Kit | Friends | Response" },
		{ "Comment", "//Returns the result of GetFollowerCount.\n" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsSubsystem.h" },
		{ "ToolTip", "Returns the result of GetFollowerCount." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFriendsIsFollowing_MetaData[] = {
		{ "Category", "Steam Integration Kit | Friends | Response" },
		{ "Comment", "//Returns the result of IsFollowing.\n" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsSubsystem.h" },
		{ "ToolTip", "Returns the result of IsFollowing." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGameConnectedChatJoin_MetaData[] = {
		{ "Category", "Steam Integration Kit | Friends | Response" },
		{ "Comment", "//Called when a user has joined a Steam group chat that we are in.\n" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsSubsystem.h" },
		{ "ToolTip", "Called when a user has joined a Steam group chat that we are in." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGameConnectedChatLeave_MetaData[] = {
		{ "Category", "Steam Integration Kit | Friends | Response" },
		{ "Comment", "//Called when a user has left a Steam group chat that the we are in.\n" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsSubsystem.h" },
		{ "ToolTip", "Called when a user has left a Steam group chat that the we are in." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGameConnectedClanChatMsg_MetaData[] = {
		{ "Category", "Steam Integration Kit | Friends | Response" },
		{ "Comment", "//Called when a chat message has been received in a Steam group chat that we are in.\n" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsSubsystem.h" },
		{ "ToolTip", "Called when a chat message has been received in a Steam group chat that we are in." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGameConnectedFriendChatMsg_MetaData[] = {
		{ "Category", "Steam Integration Kit | Friends | Response" },
		{ "Comment", "//Called when chat message has been received from a friend.\n" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsSubsystem.h" },
		{ "ToolTip", "Called when chat message has been received from a friend." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGameLobbyJoinRequested_MetaData[] = {
		{ "Category", "Steam Integration Kit | Friends | Response" },
		{ "Comment", "/*\n\x09\n\x09""Called when the user tries to join a lobby from their friends list or from an invite. The game client should attempt to connect to specified lobby when this is received. If the game isn't running yet then the game will be automatically launched with the command line parameter +connect_lobby <64-bit lobby Steam ID> instead.\n\n\x09NOTE: This callback is made when joining a lobby. If the user is attempting to join a game but not a lobby, then the callback GameRichPresenceJoinRequested_t will be made.\n\x09*/" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsSubsystem.h" },
		{ "ToolTip", "Called when the user tries to join a lobby from their friends list or from an invite. The game client should attempt to connect to specified lobby when this is received. If the game isn't running yet then the game will be automatically launched with the command line parameter +connect_lobby <64-bit lobby Steam ID> instead.\n\nNOTE: This callback is made when joining a lobby. If the user is attempting to join a game but not a lobby, then the callback GameRichPresenceJoinRequested_t will be made." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGameOverlayActivated_MetaData[] = {
		{ "Category", "Steam Integration Kit | Friends | Response" },
		{ "Comment", "//Posted when the Steam Overlay activates or deactivates. The game can use this to pause or resume single player games.\n" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsSubsystem.h" },
		{ "ToolTip", "Posted when the Steam Overlay activates or deactivates. The game can use this to pause or resume single player games." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGameRichPresenceJoinRequested_MetaData[] = {
		{ "Category", "Steam Integration Kit | Friends | Response" },
		{ "Comment", "/*\n\x09 Called when the user tries to join a game from their friends list or after a user accepts an invite by a friend with InviteUserToGame.\n\n\x09NOTE: This callback is made when joining a game. If the user is attempting to join a lobby, then the callback GameLobbyJoinRequested_t will be made.\n\x09 */" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsSubsystem.h" },
		{ "ToolTip", "Called when the user tries to join a game from their friends list or after a user accepts an invite by a friend with InviteUserToGame.\n\nNOTE: This callback is made when joining a game. If the user is attempting to join a lobby, then the callback GameLobbyJoinRequested_t will be made." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGameServerChangeRequested_MetaData[] = {
		{ "Category", "Steam Integration Kit | Friends | Response" },
		{ "Comment", "//Called when the user tries to join a different game server from their friends list. The game client should attempt to connect to the specified server when this is received.\n" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsSubsystem.h" },
		{ "ToolTip", "Called when the user tries to join a different game server from their friends list. The game client should attempt to connect to the specified server when this is received." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnJoinClanChatRoomCompletionResult_MetaData[] = {
		{ "Category", "Steam Integration Kit | Friends | Response" },
		{ "Comment", "//Posted when the user has attempted to join a Steam group chat via JoinClanChatRoom\n" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsSubsystem.h" },
		{ "ToolTip", "Posted when the user has attempted to join a Steam group chat via JoinClanChatRoom" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPersonaStateChange_MetaData[] = {
		{ "Category", "Steam Integration Kit | Friends | Response" },
		{ "Comment", "//Called whenever a friends' status changes.\n" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsSubsystem.h" },
		{ "ToolTip", "Called whenever a friends' status changes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSetPersonaNameResponse_MetaData[] = {
		{ "Category", "Steam Integration Kit | Friends | Response" },
		{ "Comment", "//Reports the result of an attempt to change the current user's persona name.\n" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsSubsystem.h" },
		{ "ToolTip", "Reports the result of an attempt to change the current user's persona name." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAvatarImageLoaded_MetaData[] = {
		{ "Category", "Steam Integration Kit | Friends | Response" },
		{ "Comment", "//Called when a large avatar is loaded if you have tried requesting it when it was unavailable.\n" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_FriendsSubsystem.h" },
		{ "ToolTip", "Called when a large avatar is loaded if you have tried requesting it when it was unavailable." },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_FriendsSubsystem constinit property declarations ********************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnClanOfficerList;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFriendRichPresenceUpdate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDownloadClanActivityCountsResult;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFriendEnumerateFollowingList;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFriendsGetFollowerCount;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFriendsIsFollowing;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGameConnectedChatJoin;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGameConnectedChatLeave;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGameConnectedClanChatMsg;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGameConnectedFriendChatMsg;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGameLobbyJoinRequested;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGameOverlayActivated;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGameRichPresenceJoinRequested;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGameServerChangeRequested;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnJoinClanChatRoomCompletionResult;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPersonaStateChange;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSetPersonaNameResponse;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAvatarImageLoaded;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USIK_FriendsSubsystem constinit property declarations **********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_FriendsSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_FriendsSubsystem_Statics

// ********** Begin Class USIK_FriendsSubsystem Property Definitions *******************************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_FriendsSubsystem_Statics::NewProp_OnClanOfficerList = { "OnClanOfficerList", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_FriendsSubsystem, OnClanOfficerList), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnClanOfficerList__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnClanOfficerList_MetaData), NewProp_OnClanOfficerList_MetaData) }; // 492560596
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_FriendsSubsystem_Statics::NewProp_OnFriendRichPresenceUpdate = { "OnFriendRichPresenceUpdate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_FriendsSubsystem, OnFriendRichPresenceUpdate), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFriendRichPresenceUpdate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFriendRichPresenceUpdate_MetaData), NewProp_OnFriendRichPresenceUpdate_MetaData) }; // 2311143085
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_FriendsSubsystem_Statics::NewProp_OnDownloadClanActivityCountsResult = { "OnDownloadClanActivityCountsResult", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_FriendsSubsystem, OnDownloadClanActivityCountsResult), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnDownloadClanActivityCountsResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDownloadClanActivityCountsResult_MetaData), NewProp_OnDownloadClanActivityCountsResult_MetaData) }; // 3921375833
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_FriendsSubsystem_Statics::NewProp_OnFriendEnumerateFollowingList = { "OnFriendEnumerateFollowingList", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_FriendsSubsystem, OnFriendEnumerateFollowingList), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFriendEnumerateFollowingList__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFriendEnumerateFollowingList_MetaData), NewProp_OnFriendEnumerateFollowingList_MetaData) }; // 2181413928
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_FriendsSubsystem_Statics::NewProp_OnFriendsGetFollowerCount = { "OnFriendsGetFollowerCount", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_FriendsSubsystem, OnFriendsGetFollowerCount), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFriendsGetFollowerCount__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFriendsGetFollowerCount_MetaData), NewProp_OnFriendsGetFollowerCount_MetaData) }; // 3697533412
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_FriendsSubsystem_Statics::NewProp_OnFriendsIsFollowing = { "OnFriendsIsFollowing", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_FriendsSubsystem, OnFriendsIsFollowing), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFriendsIsFollowing__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFriendsIsFollowing_MetaData), NewProp_OnFriendsIsFollowing_MetaData) }; // 1433659599
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_FriendsSubsystem_Statics::NewProp_OnGameConnectedChatJoin = { "OnGameConnectedChatJoin", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_FriendsSubsystem, OnGameConnectedChatJoin), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameConnectedChatJoin__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGameConnectedChatJoin_MetaData), NewProp_OnGameConnectedChatJoin_MetaData) }; // 1695680521
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_FriendsSubsystem_Statics::NewProp_OnGameConnectedChatLeave = { "OnGameConnectedChatLeave", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_FriendsSubsystem, OnGameConnectedChatLeave), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameConnectedChatLeave__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGameConnectedChatLeave_MetaData), NewProp_OnGameConnectedChatLeave_MetaData) }; // 420095294
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_FriendsSubsystem_Statics::NewProp_OnGameConnectedClanChatMsg = { "OnGameConnectedClanChatMsg", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_FriendsSubsystem, OnGameConnectedClanChatMsg), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameConnectedClanChatMsg__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGameConnectedClanChatMsg_MetaData), NewProp_OnGameConnectedClanChatMsg_MetaData) }; // 414371518
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_FriendsSubsystem_Statics::NewProp_OnGameConnectedFriendChatMsg = { "OnGameConnectedFriendChatMsg", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_FriendsSubsystem, OnGameConnectedFriendChatMsg), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameConnectedFriendChatMsg__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGameConnectedFriendChatMsg_MetaData), NewProp_OnGameConnectedFriendChatMsg_MetaData) }; // 2079372313
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_FriendsSubsystem_Statics::NewProp_OnGameLobbyJoinRequested = { "OnGameLobbyJoinRequested", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_FriendsSubsystem, OnGameLobbyJoinRequested), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameLobbyJoinRequested__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGameLobbyJoinRequested_MetaData), NewProp_OnGameLobbyJoinRequested_MetaData) }; // 365579036
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_FriendsSubsystem_Statics::NewProp_OnGameOverlayActivated = { "OnGameOverlayActivated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_FriendsSubsystem, OnGameOverlayActivated), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameOverlayActivated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGameOverlayActivated_MetaData), NewProp_OnGameOverlayActivated_MetaData) }; // 10801963
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_FriendsSubsystem_Statics::NewProp_OnGameRichPresenceJoinRequested = { "OnGameRichPresenceJoinRequested", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_FriendsSubsystem, OnGameRichPresenceJoinRequested), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameRichPresenceJoinRequested__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGameRichPresenceJoinRequested_MetaData), NewProp_OnGameRichPresenceJoinRequested_MetaData) }; // 3832173612
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_FriendsSubsystem_Statics::NewProp_OnGameServerChangeRequested = { "OnGameServerChangeRequested", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_FriendsSubsystem, OnGameServerChangeRequested), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGameServerChangeRequested__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGameServerChangeRequested_MetaData), NewProp_OnGameServerChangeRequested_MetaData) }; // 4129967100
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_FriendsSubsystem_Statics::NewProp_OnJoinClanChatRoomCompletionResult = { "OnJoinClanChatRoomCompletionResult", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_FriendsSubsystem, OnJoinClanChatRoomCompletionResult), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnJoinClanChatRoomCompletionResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnJoinClanChatRoomCompletionResult_MetaData), NewProp_OnJoinClanChatRoomCompletionResult_MetaData) }; // 1207414787
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_FriendsSubsystem_Statics::NewProp_OnPersonaStateChange = { "OnPersonaStateChange", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_FriendsSubsystem, OnPersonaStateChange), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnPersonaStateChange__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPersonaStateChange_MetaData), NewProp_OnPersonaStateChange_MetaData) }; // 3048272396
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_FriendsSubsystem_Statics::NewProp_OnSetPersonaNameResponse = { "OnSetPersonaNameResponse", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_FriendsSubsystem, OnSetPersonaNameResponse), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSetPersonaNameResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSetPersonaNameResponse_MetaData), NewProp_OnSetPersonaNameResponse_MetaData) }; // 1096137652
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_FriendsSubsystem_Statics::NewProp_OnAvatarImageLoaded = { "OnAvatarImageLoaded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_FriendsSubsystem, OnAvatarImageLoaded), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAvatarImageLoaded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAvatarImageLoaded_MetaData), NewProp_OnAvatarImageLoaded_MetaData) }; // 3628682322
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USIK_FriendsSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_FriendsSubsystem_Statics::NewProp_OnClanOfficerList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_FriendsSubsystem_Statics::NewProp_OnFriendRichPresenceUpdate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_FriendsSubsystem_Statics::NewProp_OnDownloadClanActivityCountsResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_FriendsSubsystem_Statics::NewProp_OnFriendEnumerateFollowingList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_FriendsSubsystem_Statics::NewProp_OnFriendsGetFollowerCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_FriendsSubsystem_Statics::NewProp_OnFriendsIsFollowing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_FriendsSubsystem_Statics::NewProp_OnGameConnectedChatJoin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_FriendsSubsystem_Statics::NewProp_OnGameConnectedChatLeave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_FriendsSubsystem_Statics::NewProp_OnGameConnectedClanChatMsg,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_FriendsSubsystem_Statics::NewProp_OnGameConnectedFriendChatMsg,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_FriendsSubsystem_Statics::NewProp_OnGameLobbyJoinRequested,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_FriendsSubsystem_Statics::NewProp_OnGameOverlayActivated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_FriendsSubsystem_Statics::NewProp_OnGameRichPresenceJoinRequested,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_FriendsSubsystem_Statics::NewProp_OnGameServerChangeRequested,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_FriendsSubsystem_Statics::NewProp_OnJoinClanChatRoomCompletionResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_FriendsSubsystem_Statics::NewProp_OnPersonaStateChange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_FriendsSubsystem_Statics::NewProp_OnSetPersonaNameResponse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_FriendsSubsystem_Statics::NewProp_OnAvatarImageLoaded,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_FriendsSubsystem_Statics::PropPointers) < 2048);
// ********** End Class USIK_FriendsSubsystem Property Definitions *********************************
UObject* (*const Z_Construct_UClass_USIK_FriendsSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_FriendsSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_FriendsSubsystem_Statics::ClassParams = {
	&USIK_FriendsSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USIK_FriendsSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USIK_FriendsSubsystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_FriendsSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_FriendsSubsystem_Statics::Class_MetaDataParams)
};
void USIK_FriendsSubsystem::StaticRegisterNativesUSIK_FriendsSubsystem()
{
}
UClass* Z_Construct_UClass_USIK_FriendsSubsystem()
{
	if (!Z_Registration_Info_UClass_USIK_FriendsSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_FriendsSubsystem.OuterSingleton, Z_Construct_UClass_USIK_FriendsSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_FriendsSubsystem.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_FriendsSubsystem);
// ********** End Class USIK_FriendsSubsystem ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_FriendsSubsystem_h__Script_SteamIntegrationKit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_FriendsSubsystem, USIK_FriendsSubsystem::StaticClass, TEXT("USIK_FriendsSubsystem"), &Z_Registration_Info_UClass_USIK_FriendsSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_FriendsSubsystem), 309031430U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_FriendsSubsystem_h__Script_SteamIntegrationKit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_FriendsSubsystem_h__Script_SteamIntegrationKit_18241993{
	TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_FriendsSubsystem_h__Script_SteamIntegrationKit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_FriendsSubsystem_h__Script_SteamIntegrationKit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
