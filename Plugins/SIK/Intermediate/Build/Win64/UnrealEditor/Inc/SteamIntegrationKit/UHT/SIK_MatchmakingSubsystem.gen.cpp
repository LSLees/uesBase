// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/Matchmaking/SIK_MatchmakingSubsystem.h"
#include "Engine/GameInstance.h"
#include "SIK_SharedFile.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_MatchmakingSubsystem() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_MatchmakingSubsystem();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_MatchmakingSubsystem_NoRegister();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_ChatRoomEnterResponse();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_LobbyChatEntryType();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_LobbyChatMemberStateChange();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFavoritesListAccountsUpdated__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFavoritesListChanged__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyChatUpdateDel__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyCreatedDel__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyDataUpdateDel__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyEnterDel__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyGameCreatedDel__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyInviteDel__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyKickedDel__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyMatchListDel__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyMessageDel__DelegateSignature();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_AppId();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_SteamId();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnFavoritesListAccountsUpdated ***************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFavoritesListAccountsUpdated__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnFavoritesListAccountsUpdated_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/Matchmaking/SIK_MatchmakingSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnFavoritesListAccountsUpdated constinit property declarations *******
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnFavoritesListAccountsUpdated constinit property declarations *********
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnFavoritesListAccountsUpdated Property Definitions ******************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFavoritesListAccountsUpdated__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnFavoritesListAccountsUpdated_Parms, Result), Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result, METADATA_PARAMS(0, nullptr) }; // 655382749
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFavoritesListAccountsUpdated__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFavoritesListAccountsUpdated__DelegateSignature_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFavoritesListAccountsUpdated__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnFavoritesListAccountsUpdated Property Definitions ********************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFavoritesListAccountsUpdated__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnFavoritesListAccountsUpdated__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFavoritesListAccountsUpdated__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFavoritesListAccountsUpdated__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFavoritesListAccountsUpdated__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnFavoritesListAccountsUpdated_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFavoritesListAccountsUpdated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFavoritesListAccountsUpdated__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFavoritesListAccountsUpdated__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnFavoritesListAccountsUpdated_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFavoritesListAccountsUpdated__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFavoritesListAccountsUpdated__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnFavoritesListAccountsUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnFavoritesListAccountsUpdated, ESIK_Result Result)
{
	struct _Script_SteamIntegrationKit_eventOnFavoritesListAccountsUpdated_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
	};
	_Script_SteamIntegrationKit_eventOnFavoritesListAccountsUpdated_Parms Parms;
	Parms.Result=Result;
	OnFavoritesListAccountsUpdated.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnFavoritesListAccountsUpdated *****************************************

// ********** Begin Delegate FOnFavoritesListChanged ***********************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFavoritesListChanged__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnFavoritesListChanged_Parms
	{
		FString IP;
		int32 QueryPort;
		int32 ConnPort;
		FSIK_AppId AppID;
		int32 Flags;
		bool Add;
		int32 AccountId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/Matchmaking/SIK_MatchmakingSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnFavoritesListChanged constinit property declarations ***************
	static const UECodeGen_Private::FStrPropertyParams NewProp_IP;
	static const UECodeGen_Private::FIntPropertyParams NewProp_QueryPort;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ConnPort;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Flags;
	static void NewProp_Add_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Add;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AccountId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnFavoritesListChanged constinit property declarations *****************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnFavoritesListChanged Property Definitions **************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFavoritesListChanged__DelegateSignature_Statics::NewProp_IP = { "IP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnFavoritesListChanged_Parms, IP), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFavoritesListChanged__DelegateSignature_Statics::NewProp_QueryPort = { "QueryPort", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnFavoritesListChanged_Parms, QueryPort), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFavoritesListChanged__DelegateSignature_Statics::NewProp_ConnPort = { "ConnPort", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnFavoritesListChanged_Parms, ConnPort), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFavoritesListChanged__DelegateSignature_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnFavoritesListChanged_Parms, AppID), Z_Construct_UScriptStruct_FSIK_AppId, METADATA_PARAMS(0, nullptr) }; // 3325316996
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFavoritesListChanged__DelegateSignature_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnFavoritesListChanged_Parms, Flags), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFavoritesListChanged__DelegateSignature_Statics::NewProp_Add_SetBit(void* Obj)
{
	((_Script_SteamIntegrationKit_eventOnFavoritesListChanged_Parms*)Obj)->Add = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFavoritesListChanged__DelegateSignature_Statics::NewProp_Add = { "Add", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamIntegrationKit_eventOnFavoritesListChanged_Parms), &Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFavoritesListChanged__DelegateSignature_Statics::NewProp_Add_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFavoritesListChanged__DelegateSignature_Statics::NewProp_AccountId = { "AccountId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnFavoritesListChanged_Parms, AccountId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFavoritesListChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFavoritesListChanged__DelegateSignature_Statics::NewProp_IP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFavoritesListChanged__DelegateSignature_Statics::NewProp_QueryPort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFavoritesListChanged__DelegateSignature_Statics::NewProp_ConnPort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFavoritesListChanged__DelegateSignature_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFavoritesListChanged__DelegateSignature_Statics::NewProp_Flags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFavoritesListChanged__DelegateSignature_Statics::NewProp_Add,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFavoritesListChanged__DelegateSignature_Statics::NewProp_AccountId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFavoritesListChanged__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnFavoritesListChanged Property Definitions ****************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFavoritesListChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnFavoritesListChanged__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFavoritesListChanged__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFavoritesListChanged__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFavoritesListChanged__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnFavoritesListChanged_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFavoritesListChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFavoritesListChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFavoritesListChanged__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnFavoritesListChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFavoritesListChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFavoritesListChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnFavoritesListChanged_DelegateWrapper(const FMulticastScriptDelegate& OnFavoritesListChanged, const FString& IP, int32 QueryPort, int32 ConnPort, FSIK_AppId AppID, int32 Flags, bool Add, int32 AccountId)
{
	struct _Script_SteamIntegrationKit_eventOnFavoritesListChanged_Parms
	{
		FString IP;
		int32 QueryPort;
		int32 ConnPort;
		FSIK_AppId AppID;
		int32 Flags;
		bool Add;
		int32 AccountId;
	};
	_Script_SteamIntegrationKit_eventOnFavoritesListChanged_Parms Parms;
	Parms.IP=IP;
	Parms.QueryPort=QueryPort;
	Parms.ConnPort=ConnPort;
	Parms.AppID=AppID;
	Parms.Flags=Flags;
	Parms.Add=Add ? true : false;
	Parms.AccountId=AccountId;
	OnFavoritesListChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnFavoritesListChanged *************************************************

// ********** Begin Delegate FOnLobbyMessageDel ****************************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyMessageDel__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnLobbyMessageDel_Parms
	{
		FSIK_SteamId LobbyId;
		FSIK_SteamId UserId;
		TEnumAsByte<ESIK_LobbyChatEntryType> ChatEntryType;
		int32 ChatID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/Matchmaking/SIK_MatchmakingSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnLobbyMessageDel constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ChatEntryType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ChatID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnLobbyMessageDel constinit property declarations **********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnLobbyMessageDel Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyMessageDel__DelegateSignature_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnLobbyMessageDel_Parms, LobbyId), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyMessageDel__DelegateSignature_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnLobbyMessageDel_Parms, UserId), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyMessageDel__DelegateSignature_Statics::NewProp_ChatEntryType = { "ChatEntryType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnLobbyMessageDel_Parms, ChatEntryType), Z_Construct_UEnum_SteamIntegrationKit_ESIK_LobbyChatEntryType, METADATA_PARAMS(0, nullptr) }; // 4123875100
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyMessageDel__DelegateSignature_Statics::NewProp_ChatID = { "ChatID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnLobbyMessageDel_Parms, ChatID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyMessageDel__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyMessageDel__DelegateSignature_Statics::NewProp_LobbyId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyMessageDel__DelegateSignature_Statics::NewProp_UserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyMessageDel__DelegateSignature_Statics::NewProp_ChatEntryType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyMessageDel__DelegateSignature_Statics::NewProp_ChatID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyMessageDel__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnLobbyMessageDel Property Definitions *********************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyMessageDel__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnLobbyMessageDel__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyMessageDel__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyMessageDel__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyMessageDel__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnLobbyMessageDel_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyMessageDel__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyMessageDel__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyMessageDel__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnLobbyMessageDel_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyMessageDel__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyMessageDel__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnLobbyMessageDel_DelegateWrapper(const FMulticastScriptDelegate& OnLobbyMessageDel, FSIK_SteamId LobbyId, FSIK_SteamId UserId, ESIK_LobbyChatEntryType ChatEntryType, int32 ChatID)
{
	struct _Script_SteamIntegrationKit_eventOnLobbyMessageDel_Parms
	{
		FSIK_SteamId LobbyId;
		FSIK_SteamId UserId;
		TEnumAsByte<ESIK_LobbyChatEntryType> ChatEntryType;
		int32 ChatID;
	};
	_Script_SteamIntegrationKit_eventOnLobbyMessageDel_Parms Parms;
	Parms.LobbyId=LobbyId;
	Parms.UserId=UserId;
	Parms.ChatEntryType=ChatEntryType;
	Parms.ChatID=ChatID;
	OnLobbyMessageDel.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnLobbyMessageDel ******************************************************

// ********** Begin Delegate FOnLobbyChatUpdateDel *************************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyChatUpdateDel__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnLobbyChatUpdateDel_Parms
	{
		FSIK_SteamId LobbyId;
		FSIK_SteamId UserId;
		FSIK_SteamId MemberIDMakingChange;
		TEnumAsByte<ESIK_LobbyChatMemberStateChange> ChatMemberStateChange;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/Matchmaking/SIK_MatchmakingSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnLobbyChatUpdateDel constinit property declarations *****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MemberIDMakingChange;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ChatMemberStateChange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnLobbyChatUpdateDel constinit property declarations *******************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnLobbyChatUpdateDel Property Definitions ****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyChatUpdateDel__DelegateSignature_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnLobbyChatUpdateDel_Parms, LobbyId), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyChatUpdateDel__DelegateSignature_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnLobbyChatUpdateDel_Parms, UserId), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyChatUpdateDel__DelegateSignature_Statics::NewProp_MemberIDMakingChange = { "MemberIDMakingChange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnLobbyChatUpdateDel_Parms, MemberIDMakingChange), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyChatUpdateDel__DelegateSignature_Statics::NewProp_ChatMemberStateChange = { "ChatMemberStateChange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnLobbyChatUpdateDel_Parms, ChatMemberStateChange), Z_Construct_UEnum_SteamIntegrationKit_ESIK_LobbyChatMemberStateChange, METADATA_PARAMS(0, nullptr) }; // 1885938435
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyChatUpdateDel__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyChatUpdateDel__DelegateSignature_Statics::NewProp_LobbyId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyChatUpdateDel__DelegateSignature_Statics::NewProp_UserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyChatUpdateDel__DelegateSignature_Statics::NewProp_MemberIDMakingChange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyChatUpdateDel__DelegateSignature_Statics::NewProp_ChatMemberStateChange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyChatUpdateDel__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnLobbyChatUpdateDel Property Definitions ******************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyChatUpdateDel__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnLobbyChatUpdateDel__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyChatUpdateDel__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyChatUpdateDel__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyChatUpdateDel__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnLobbyChatUpdateDel_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyChatUpdateDel__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyChatUpdateDel__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyChatUpdateDel__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnLobbyChatUpdateDel_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyChatUpdateDel__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyChatUpdateDel__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnLobbyChatUpdateDel_DelegateWrapper(const FMulticastScriptDelegate& OnLobbyChatUpdateDel, FSIK_SteamId LobbyId, FSIK_SteamId UserId, FSIK_SteamId MemberIDMakingChange, ESIK_LobbyChatMemberStateChange ChatMemberStateChange)
{
	struct _Script_SteamIntegrationKit_eventOnLobbyChatUpdateDel_Parms
	{
		FSIK_SteamId LobbyId;
		FSIK_SteamId UserId;
		FSIK_SteamId MemberIDMakingChange;
		TEnumAsByte<ESIK_LobbyChatMemberStateChange> ChatMemberStateChange;
	};
	_Script_SteamIntegrationKit_eventOnLobbyChatUpdateDel_Parms Parms;
	Parms.LobbyId=LobbyId;
	Parms.UserId=UserId;
	Parms.MemberIDMakingChange=MemberIDMakingChange;
	Parms.ChatMemberStateChange=ChatMemberStateChange;
	OnLobbyChatUpdateDel.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnLobbyChatUpdateDel ***************************************************

// ********** Begin Delegate FOnLobbyCreatedDel ****************************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyCreatedDel__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnLobbyCreatedDel_Parms
	{
		FSIK_SteamId LobbyId;
		TEnumAsByte<ESIK_Result> Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/Matchmaking/SIK_MatchmakingSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnLobbyCreatedDel constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnLobbyCreatedDel constinit property declarations **********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnLobbyCreatedDel Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyCreatedDel__DelegateSignature_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnLobbyCreatedDel_Parms, LobbyId), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyCreatedDel__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnLobbyCreatedDel_Parms, Result), Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result, METADATA_PARAMS(0, nullptr) }; // 655382749
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyCreatedDel__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyCreatedDel__DelegateSignature_Statics::NewProp_LobbyId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyCreatedDel__DelegateSignature_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyCreatedDel__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnLobbyCreatedDel Property Definitions *********************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyCreatedDel__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnLobbyCreatedDel__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyCreatedDel__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyCreatedDel__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyCreatedDel__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnLobbyCreatedDel_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyCreatedDel__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyCreatedDel__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyCreatedDel__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnLobbyCreatedDel_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyCreatedDel__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyCreatedDel__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnLobbyCreatedDel_DelegateWrapper(const FMulticastScriptDelegate& OnLobbyCreatedDel, FSIK_SteamId LobbyId, ESIK_Result Result)
{
	struct _Script_SteamIntegrationKit_eventOnLobbyCreatedDel_Parms
	{
		FSIK_SteamId LobbyId;
		TEnumAsByte<ESIK_Result> Result;
	};
	_Script_SteamIntegrationKit_eventOnLobbyCreatedDel_Parms Parms;
	Parms.LobbyId=LobbyId;
	Parms.Result=Result;
	OnLobbyCreatedDel.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnLobbyCreatedDel ******************************************************

// ********** Begin Delegate FOnLobbyDataUpdateDel *************************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyDataUpdateDel__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnLobbyDataUpdateDel_Parms
	{
		FSIK_SteamId LobbyId;
		FSIK_SteamId UserId;
		bool Success;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/Matchmaking/SIK_MatchmakingSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnLobbyDataUpdateDel constinit property declarations *****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
	static void NewProp_Success_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnLobbyDataUpdateDel constinit property declarations *******************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnLobbyDataUpdateDel Property Definitions ****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyDataUpdateDel__DelegateSignature_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnLobbyDataUpdateDel_Parms, LobbyId), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyDataUpdateDel__DelegateSignature_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnLobbyDataUpdateDel_Parms, UserId), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
void Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyDataUpdateDel__DelegateSignature_Statics::NewProp_Success_SetBit(void* Obj)
{
	((_Script_SteamIntegrationKit_eventOnLobbyDataUpdateDel_Parms*)Obj)->Success = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyDataUpdateDel__DelegateSignature_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamIntegrationKit_eventOnLobbyDataUpdateDel_Parms), &Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyDataUpdateDel__DelegateSignature_Statics::NewProp_Success_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyDataUpdateDel__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyDataUpdateDel__DelegateSignature_Statics::NewProp_LobbyId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyDataUpdateDel__DelegateSignature_Statics::NewProp_UserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyDataUpdateDel__DelegateSignature_Statics::NewProp_Success,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyDataUpdateDel__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnLobbyDataUpdateDel Property Definitions ******************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyDataUpdateDel__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnLobbyDataUpdateDel__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyDataUpdateDel__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyDataUpdateDel__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyDataUpdateDel__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnLobbyDataUpdateDel_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyDataUpdateDel__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyDataUpdateDel__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyDataUpdateDel__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnLobbyDataUpdateDel_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyDataUpdateDel__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyDataUpdateDel__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnLobbyDataUpdateDel_DelegateWrapper(const FMulticastScriptDelegate& OnLobbyDataUpdateDel, FSIK_SteamId LobbyId, FSIK_SteamId UserId, bool Success)
{
	struct _Script_SteamIntegrationKit_eventOnLobbyDataUpdateDel_Parms
	{
		FSIK_SteamId LobbyId;
		FSIK_SteamId UserId;
		bool Success;
	};
	_Script_SteamIntegrationKit_eventOnLobbyDataUpdateDel_Parms Parms;
	Parms.LobbyId=LobbyId;
	Parms.UserId=UserId;
	Parms.Success=Success ? true : false;
	OnLobbyDataUpdateDel.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnLobbyDataUpdateDel ***************************************************

// ********** Begin Delegate FOnLobbyEnterDel ******************************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyEnterDel__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnLobbyEnterDel_Parms
	{
		FSIK_SteamId LobbyId;
		bool bLocked;
		TEnumAsByte<ESIK_ChatRoomEnterResponse> Response;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/Matchmaking/SIK_MatchmakingSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnLobbyEnterDel constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyId;
	static void NewProp_bLocked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLocked;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Response;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnLobbyEnterDel constinit property declarations ************************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnLobbyEnterDel Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyEnterDel__DelegateSignature_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnLobbyEnterDel_Parms, LobbyId), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
void Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyEnterDel__DelegateSignature_Statics::NewProp_bLocked_SetBit(void* Obj)
{
	((_Script_SteamIntegrationKit_eventOnLobbyEnterDel_Parms*)Obj)->bLocked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyEnterDel__DelegateSignature_Statics::NewProp_bLocked = { "bLocked", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamIntegrationKit_eventOnLobbyEnterDel_Parms), &Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyEnterDel__DelegateSignature_Statics::NewProp_bLocked_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyEnterDel__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnLobbyEnterDel_Parms, Response), Z_Construct_UEnum_SteamIntegrationKit_ESIK_ChatRoomEnterResponse, METADATA_PARAMS(0, nullptr) }; // 754685013
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyEnterDel__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyEnterDel__DelegateSignature_Statics::NewProp_LobbyId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyEnterDel__DelegateSignature_Statics::NewProp_bLocked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyEnterDel__DelegateSignature_Statics::NewProp_Response,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyEnterDel__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnLobbyEnterDel Property Definitions ***********************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyEnterDel__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnLobbyEnterDel__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyEnterDel__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyEnterDel__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyEnterDel__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnLobbyEnterDel_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyEnterDel__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyEnterDel__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyEnterDel__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnLobbyEnterDel_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyEnterDel__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyEnterDel__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnLobbyEnterDel_DelegateWrapper(const FMulticastScriptDelegate& OnLobbyEnterDel, FSIK_SteamId LobbyId, bool bLocked, ESIK_ChatRoomEnterResponse Response)
{
	struct _Script_SteamIntegrationKit_eventOnLobbyEnterDel_Parms
	{
		FSIK_SteamId LobbyId;
		bool bLocked;
		TEnumAsByte<ESIK_ChatRoomEnterResponse> Response;
	};
	_Script_SteamIntegrationKit_eventOnLobbyEnterDel_Parms Parms;
	Parms.LobbyId=LobbyId;
	Parms.bLocked=bLocked ? true : false;
	Parms.Response=Response;
	OnLobbyEnterDel.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnLobbyEnterDel ********************************************************

// ********** Begin Delegate FOnLobbyGameCreatedDel ************************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyGameCreatedDel__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnLobbyGameCreatedDel_Parms
	{
		FSIK_SteamId LobbyId;
		FSIK_SteamId GameServerId;
		FString GameServerIP;
		int32 GameServerPort;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/Matchmaking/SIK_MatchmakingSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnLobbyGameCreatedDel constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameServerId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GameServerIP;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GameServerPort;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnLobbyGameCreatedDel constinit property declarations ******************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnLobbyGameCreatedDel Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyGameCreatedDel__DelegateSignature_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnLobbyGameCreatedDel_Parms, LobbyId), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyGameCreatedDel__DelegateSignature_Statics::NewProp_GameServerId = { "GameServerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnLobbyGameCreatedDel_Parms, GameServerId), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyGameCreatedDel__DelegateSignature_Statics::NewProp_GameServerIP = { "GameServerIP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnLobbyGameCreatedDel_Parms, GameServerIP), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyGameCreatedDel__DelegateSignature_Statics::NewProp_GameServerPort = { "GameServerPort", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnLobbyGameCreatedDel_Parms, GameServerPort), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyGameCreatedDel__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyGameCreatedDel__DelegateSignature_Statics::NewProp_LobbyId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyGameCreatedDel__DelegateSignature_Statics::NewProp_GameServerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyGameCreatedDel__DelegateSignature_Statics::NewProp_GameServerIP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyGameCreatedDel__DelegateSignature_Statics::NewProp_GameServerPort,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyGameCreatedDel__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnLobbyGameCreatedDel Property Definitions *****************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyGameCreatedDel__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnLobbyGameCreatedDel__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyGameCreatedDel__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyGameCreatedDel__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyGameCreatedDel__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnLobbyGameCreatedDel_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyGameCreatedDel__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyGameCreatedDel__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyGameCreatedDel__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnLobbyGameCreatedDel_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyGameCreatedDel__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyGameCreatedDel__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnLobbyGameCreatedDel_DelegateWrapper(const FMulticastScriptDelegate& OnLobbyGameCreatedDel, FSIK_SteamId LobbyId, FSIK_SteamId GameServerId, const FString& GameServerIP, int32 GameServerPort)
{
	struct _Script_SteamIntegrationKit_eventOnLobbyGameCreatedDel_Parms
	{
		FSIK_SteamId LobbyId;
		FSIK_SteamId GameServerId;
		FString GameServerIP;
		int32 GameServerPort;
	};
	_Script_SteamIntegrationKit_eventOnLobbyGameCreatedDel_Parms Parms;
	Parms.LobbyId=LobbyId;
	Parms.GameServerId=GameServerId;
	Parms.GameServerIP=GameServerIP;
	Parms.GameServerPort=GameServerPort;
	OnLobbyGameCreatedDel.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnLobbyGameCreatedDel **************************************************

// ********** Begin Delegate FOnLobbyInviteDel *****************************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyInviteDel__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnLobbyInviteDel_Parms
	{
		FSIK_SteamId LobbyId;
		FSIK_SteamId SenderUserId;
		FSIK_AppId AppId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/Matchmaking/SIK_MatchmakingSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnLobbyInviteDel constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SenderUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnLobbyInviteDel constinit property declarations ***********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnLobbyInviteDel Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyInviteDel__DelegateSignature_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnLobbyInviteDel_Parms, LobbyId), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyInviteDel__DelegateSignature_Statics::NewProp_SenderUserId = { "SenderUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnLobbyInviteDel_Parms, SenderUserId), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyInviteDel__DelegateSignature_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnLobbyInviteDel_Parms, AppId), Z_Construct_UScriptStruct_FSIK_AppId, METADATA_PARAMS(0, nullptr) }; // 3325316996
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyInviteDel__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyInviteDel__DelegateSignature_Statics::NewProp_LobbyId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyInviteDel__DelegateSignature_Statics::NewProp_SenderUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyInviteDel__DelegateSignature_Statics::NewProp_AppId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyInviteDel__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnLobbyInviteDel Property Definitions **********************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyInviteDel__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnLobbyInviteDel__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyInviteDel__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyInviteDel__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyInviteDel__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnLobbyInviteDel_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyInviteDel__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyInviteDel__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyInviteDel__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnLobbyInviteDel_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyInviteDel__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyInviteDel__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnLobbyInviteDel_DelegateWrapper(const FMulticastScriptDelegate& OnLobbyInviteDel, FSIK_SteamId LobbyId, FSIK_SteamId SenderUserId, FSIK_AppId AppId)
{
	struct _Script_SteamIntegrationKit_eventOnLobbyInviteDel_Parms
	{
		FSIK_SteamId LobbyId;
		FSIK_SteamId SenderUserId;
		FSIK_AppId AppId;
	};
	_Script_SteamIntegrationKit_eventOnLobbyInviteDel_Parms Parms;
	Parms.LobbyId=LobbyId;
	Parms.SenderUserId=SenderUserId;
	Parms.AppId=AppId;
	OnLobbyInviteDel.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnLobbyInviteDel *******************************************************

// ********** Begin Delegate FOnLobbyKickedDel *****************************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyKickedDel__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnLobbyKickedDel_Parms
	{
		FSIK_SteamId LobbyId;
		FSIK_SteamId AdminId;
		bool bKickedDueToDisconnect;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/Matchmaking/SIK_MatchmakingSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnLobbyKickedDel constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AdminId;
	static void NewProp_bKickedDueToDisconnect_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bKickedDueToDisconnect;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnLobbyKickedDel constinit property declarations ***********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnLobbyKickedDel Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyKickedDel__DelegateSignature_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnLobbyKickedDel_Parms, LobbyId), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyKickedDel__DelegateSignature_Statics::NewProp_AdminId = { "AdminId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnLobbyKickedDel_Parms, AdminId), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
void Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyKickedDel__DelegateSignature_Statics::NewProp_bKickedDueToDisconnect_SetBit(void* Obj)
{
	((_Script_SteamIntegrationKit_eventOnLobbyKickedDel_Parms*)Obj)->bKickedDueToDisconnect = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyKickedDel__DelegateSignature_Statics::NewProp_bKickedDueToDisconnect = { "bKickedDueToDisconnect", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamIntegrationKit_eventOnLobbyKickedDel_Parms), &Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyKickedDel__DelegateSignature_Statics::NewProp_bKickedDueToDisconnect_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyKickedDel__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyKickedDel__DelegateSignature_Statics::NewProp_LobbyId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyKickedDel__DelegateSignature_Statics::NewProp_AdminId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyKickedDel__DelegateSignature_Statics::NewProp_bKickedDueToDisconnect,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyKickedDel__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnLobbyKickedDel Property Definitions **********************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyKickedDel__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnLobbyKickedDel__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyKickedDel__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyKickedDel__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyKickedDel__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnLobbyKickedDel_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyKickedDel__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyKickedDel__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyKickedDel__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnLobbyKickedDel_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyKickedDel__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyKickedDel__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnLobbyKickedDel_DelegateWrapper(const FMulticastScriptDelegate& OnLobbyKickedDel, FSIK_SteamId LobbyId, FSIK_SteamId AdminId, bool bKickedDueToDisconnect)
{
	struct _Script_SteamIntegrationKit_eventOnLobbyKickedDel_Parms
	{
		FSIK_SteamId LobbyId;
		FSIK_SteamId AdminId;
		bool bKickedDueToDisconnect;
	};
	_Script_SteamIntegrationKit_eventOnLobbyKickedDel_Parms Parms;
	Parms.LobbyId=LobbyId;
	Parms.AdminId=AdminId;
	Parms.bKickedDueToDisconnect=bKickedDueToDisconnect ? true : false;
	OnLobbyKickedDel.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnLobbyKickedDel *******************************************************

// ********** Begin Delegate FOnLobbyMatchListDel **************************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyMatchListDel__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnLobbyMatchListDel_Parms
	{
		int32 LobbyCount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/Matchmaking/SIK_MatchmakingSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnLobbyMatchListDel constinit property declarations ******************
	static const UECodeGen_Private::FIntPropertyParams NewProp_LobbyCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnLobbyMatchListDel constinit property declarations ********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnLobbyMatchListDel Property Definitions *****************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyMatchListDel__DelegateSignature_Statics::NewProp_LobbyCount = { "LobbyCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnLobbyMatchListDel_Parms, LobbyCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyMatchListDel__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyMatchListDel__DelegateSignature_Statics::NewProp_LobbyCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyMatchListDel__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnLobbyMatchListDel Property Definitions *******************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyMatchListDel__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnLobbyMatchListDel__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyMatchListDel__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyMatchListDel__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyMatchListDel__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnLobbyMatchListDel_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyMatchListDel__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyMatchListDel__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyMatchListDel__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnLobbyMatchListDel_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyMatchListDel__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyMatchListDel__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnLobbyMatchListDel_DelegateWrapper(const FMulticastScriptDelegate& OnLobbyMatchListDel, int32 LobbyCount)
{
	struct _Script_SteamIntegrationKit_eventOnLobbyMatchListDel_Parms
	{
		int32 LobbyCount;
	};
	_Script_SteamIntegrationKit_eventOnLobbyMatchListDel_Parms Parms;
	Parms.LobbyCount=LobbyCount;
	OnLobbyMatchListDel.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnLobbyMatchListDel ****************************************************

// ********** Begin Class USIK_MatchmakingSubsystem ************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_MatchmakingSubsystem;
UClass* USIK_MatchmakingSubsystem::GetPrivateStaticClass()
{
	using TClass = USIK_MatchmakingSubsystem;
	if (!Z_Registration_Info_UClass_USIK_MatchmakingSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_MatchmakingSubsystem"),
			Z_Registration_Info_UClass_USIK_MatchmakingSubsystem.InnerSingleton,
			StaticRegisterNativesUSIK_MatchmakingSubsystem,
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
	return Z_Registration_Info_UClass_USIK_MatchmakingSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_MatchmakingSubsystem_NoRegister()
{
	return USIK_MatchmakingSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_MatchmakingSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit | Matchmaking" },
		{ "IncludePath", "Functions/Matchmaking/SIK_MatchmakingSubsystem.h" },
		{ "ModuleRelativePath", "Functions/Matchmaking/SIK_MatchmakingSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFavoritesListAccountsUpdated_MetaData[] = {
		{ "Category", "Steam Integration Kit | Matchmaking | Callbacks" },
		{ "ModuleRelativePath", "Functions/Matchmaking/SIK_MatchmakingSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFavoritesListChanged_MetaData[] = {
		{ "Category", "Steam Integration Kit | Matchmaking | Callbacks" },
		{ "Comment", "//A server was added/removed from the favorites list, you should refresh now.\n" },
		{ "ModuleRelativePath", "Functions/Matchmaking/SIK_MatchmakingSubsystem.h" },
		{ "ToolTip", "A server was added/removed from the favorites list, you should refresh now." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLobbyChatMsg_MetaData[] = {
		{ "Category", "Steam Integration Kit | Matchmaking | Callbacks" },
		{ "Comment", "//A chat (text or binary) message for this lobby has been received. After getting this you must use GetLobbyChatEntry to retrieve the contents of this message.\n" },
		{ "ModuleRelativePath", "Functions/Matchmaking/SIK_MatchmakingSubsystem.h" },
		{ "ToolTip", "A chat (text or binary) message for this lobby has been received. After getting this you must use GetLobbyChatEntry to retrieve the contents of this message." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLobbyChatUpdate_MetaData[] = {
		{ "Category", "Steam Integration Kit | Matchmaking | Callbacks" },
		{ "Comment", "//A lobby chat room state has changed, this is usually sent when a user has joined or left the lobby.\n" },
		{ "ModuleRelativePath", "Functions/Matchmaking/SIK_MatchmakingSubsystem.h" },
		{ "ToolTip", "A lobby chat room state has changed, this is usually sent when a user has joined or left the lobby." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLobbyCreated_MetaData[] = {
		{ "Category", "Steam Integration Kit | Matchmaking | Callbacks" },
		{ "Comment", "//Result of our request to create a Lobby. At this point, the lobby has been joined and is ready for use, a LobbyEnter_t callback will also be received (since the local user is joining their own lobby).\n" },
		{ "ModuleRelativePath", "Functions/Matchmaking/SIK_MatchmakingSubsystem.h" },
		{ "ToolTip", "Result of our request to create a Lobby. At this point, the lobby has been joined and is ready for use, a LobbyEnter_t callback will also be received (since the local user is joining their own lobby)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLobbyDataUpdate_MetaData[] = {
		{ "Category", "Steam Integration Kit | Matchmaking | Callbacks" },
		{ "Comment", "/*\n\x09The lobby metadata has changed.\n\n\x09If m_ulSteamIDMember is a user in the lobby, then use GetLobbyMemberData to access per-user details; otherwise, if m_ulSteamIDMember == m_ulSteamIDLobby, use GetLobbyData to access the lobby metadata.\n\x09*/" },
		{ "ModuleRelativePath", "Functions/Matchmaking/SIK_MatchmakingSubsystem.h" },
		{ "ToolTip", "The lobby metadata has changed.\n\nIf m_ulSteamIDMember is a user in the lobby, then use GetLobbyMemberData to access per-user details; otherwise, if m_ulSteamIDMember == m_ulSteamIDLobby, use GetLobbyData to access the lobby metadata." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLobbyEnter_MetaData[] = {
		{ "Category", "Steam Integration Kit | Matchmaking | Callbacks" },
		{ "Comment", "//Recieved upon attempting to enter a lobby. Lobby metadata is available to use immediately after receiving this.\n" },
		{ "ModuleRelativePath", "Functions/Matchmaking/SIK_MatchmakingSubsystem.h" },
		{ "ToolTip", "Recieved upon attempting to enter a lobby. Lobby metadata is available to use immediately after receiving this." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLobbyGameCreated_MetaData[] = {
		{ "Category", "Steam Integration Kit | Matchmaking | Callbacks" },
		{ "Comment", "//A game server has been set via SetLobbyGameServer for all of the members of the lobby to join. It's up to the individual clients to take action on this; the typical game behavior is to leave the lobby and connect to the specified game server; but the lobby may stay open throughout the session if desired.\n" },
		{ "ModuleRelativePath", "Functions/Matchmaking/SIK_MatchmakingSubsystem.h" },
		{ "ToolTip", "A game server has been set via SetLobbyGameServer for all of the members of the lobby to join. It's up to the individual clients to take action on this; the typical game behavior is to leave the lobby and connect to the specified game server; but the lobby may stay open throughout the session if desired." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLobbyInvite_MetaData[] = {
		{ "Category", "Steam Integration Kit | Matchmaking | Callbacks" },
		{ "Comment", "/*\n\x09Someone has invited you to join a Lobby. Normally you don't need to do anything with this, as the Steam UI will also display a '<user> has invited you to the lobby, join?' notification and message.\n\n\x09If the user outside a game chooses to join, your game will be launched with the parameter +connect_lobby <64-bit lobby id>, or with the callback GameLobbyJoinRequested_t if they're already in-game.\n\x09*/" },
		{ "ModuleRelativePath", "Functions/Matchmaking/SIK_MatchmakingSubsystem.h" },
		{ "ToolTip", "Someone has invited you to join a Lobby. Normally you don't need to do anything with this, as the Steam UI will also display a '<user> has invited you to the lobby, join?' notification and message.\n\nIf the user outside a game chooses to join, your game will be launched with the parameter +connect_lobby <64-bit lobby id>, or with the callback GameLobbyJoinRequested_t if they're already in-game." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLobbyKicked_MetaData[] = {
		{ "Category", "Steam Integration Kit | Matchmaking | Callbacks" },
		{ "Comment", "//Currently unused! If you want to implement kicking at this time then do it with a special packet sent with SendLobbyChatMsg, when the user gets the packet they should call LeaveLobby.\n" },
		{ "ModuleRelativePath", "Functions/Matchmaking/SIK_MatchmakingSubsystem.h" },
		{ "ToolTip", "Currently unused! If you want to implement kicking at this time then do it with a special packet sent with SendLobbyChatMsg, when the user gets the packet they should call LeaveLobby." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLobbyMatchList_MetaData[] = {
		{ "Category", "Steam Integration Kit | Matchmaking | Callbacks" },
		{ "Comment", "//Result when requesting the lobby list. You should iterate over the returned lobbies with GetLobbyByIndex, from 0 to m_nLobbiesMatching-1.\n" },
		{ "ModuleRelativePath", "Functions/Matchmaking/SIK_MatchmakingSubsystem.h" },
		{ "ToolTip", "Result when requesting the lobby list. You should iterate over the returned lobbies with GetLobbyByIndex, from 0 to m_nLobbiesMatching-1." },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_MatchmakingSubsystem constinit property declarations ****************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFavoritesListAccountsUpdated;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFavoritesListChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLobbyChatMsg;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLobbyChatUpdate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLobbyCreated;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLobbyDataUpdate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLobbyEnter;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLobbyGameCreated;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLobbyInvite;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLobbyKicked;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLobbyMatchList;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USIK_MatchmakingSubsystem constinit property declarations ******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_MatchmakingSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_MatchmakingSubsystem_Statics

// ********** Begin Class USIK_MatchmakingSubsystem Property Definitions ***************************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_MatchmakingSubsystem_Statics::NewProp_OnFavoritesListAccountsUpdated = { "OnFavoritesListAccountsUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_MatchmakingSubsystem, OnFavoritesListAccountsUpdated), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFavoritesListAccountsUpdated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFavoritesListAccountsUpdated_MetaData), NewProp_OnFavoritesListAccountsUpdated_MetaData) }; // 648038626
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_MatchmakingSubsystem_Statics::NewProp_OnFavoritesListChanged = { "OnFavoritesListChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_MatchmakingSubsystem, OnFavoritesListChanged), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnFavoritesListChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFavoritesListChanged_MetaData), NewProp_OnFavoritesListChanged_MetaData) }; // 1126253656
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_MatchmakingSubsystem_Statics::NewProp_OnLobbyChatMsg = { "OnLobbyChatMsg", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_MatchmakingSubsystem, OnLobbyChatMsg), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyMessageDel__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLobbyChatMsg_MetaData), NewProp_OnLobbyChatMsg_MetaData) }; // 3294010631
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_MatchmakingSubsystem_Statics::NewProp_OnLobbyChatUpdate = { "OnLobbyChatUpdate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_MatchmakingSubsystem, OnLobbyChatUpdate), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyChatUpdateDel__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLobbyChatUpdate_MetaData), NewProp_OnLobbyChatUpdate_MetaData) }; // 815948395
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_MatchmakingSubsystem_Statics::NewProp_OnLobbyCreated = { "OnLobbyCreated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_MatchmakingSubsystem, OnLobbyCreated), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyCreatedDel__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLobbyCreated_MetaData), NewProp_OnLobbyCreated_MetaData) }; // 638119706
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_MatchmakingSubsystem_Statics::NewProp_OnLobbyDataUpdate = { "OnLobbyDataUpdate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_MatchmakingSubsystem, OnLobbyDataUpdate), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyDataUpdateDel__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLobbyDataUpdate_MetaData), NewProp_OnLobbyDataUpdate_MetaData) }; // 180941980
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_MatchmakingSubsystem_Statics::NewProp_OnLobbyEnter = { "OnLobbyEnter", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_MatchmakingSubsystem, OnLobbyEnter), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyEnterDel__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLobbyEnter_MetaData), NewProp_OnLobbyEnter_MetaData) }; // 2810575344
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_MatchmakingSubsystem_Statics::NewProp_OnLobbyGameCreated = { "OnLobbyGameCreated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_MatchmakingSubsystem, OnLobbyGameCreated), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyGameCreatedDel__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLobbyGameCreated_MetaData), NewProp_OnLobbyGameCreated_MetaData) }; // 2594905403
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_MatchmakingSubsystem_Statics::NewProp_OnLobbyInvite = { "OnLobbyInvite", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_MatchmakingSubsystem, OnLobbyInvite), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyInviteDel__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLobbyInvite_MetaData), NewProp_OnLobbyInvite_MetaData) }; // 2798110986
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_MatchmakingSubsystem_Statics::NewProp_OnLobbyKicked = { "OnLobbyKicked", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_MatchmakingSubsystem, OnLobbyKicked), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyKickedDel__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLobbyKicked_MetaData), NewProp_OnLobbyKicked_MetaData) }; // 3382411880
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_MatchmakingSubsystem_Statics::NewProp_OnLobbyMatchList = { "OnLobbyMatchList", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_MatchmakingSubsystem, OnLobbyMatchList), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLobbyMatchListDel__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLobbyMatchList_MetaData), NewProp_OnLobbyMatchList_MetaData) }; // 487862895
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USIK_MatchmakingSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_MatchmakingSubsystem_Statics::NewProp_OnFavoritesListAccountsUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_MatchmakingSubsystem_Statics::NewProp_OnFavoritesListChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_MatchmakingSubsystem_Statics::NewProp_OnLobbyChatMsg,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_MatchmakingSubsystem_Statics::NewProp_OnLobbyChatUpdate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_MatchmakingSubsystem_Statics::NewProp_OnLobbyCreated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_MatchmakingSubsystem_Statics::NewProp_OnLobbyDataUpdate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_MatchmakingSubsystem_Statics::NewProp_OnLobbyEnter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_MatchmakingSubsystem_Statics::NewProp_OnLobbyGameCreated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_MatchmakingSubsystem_Statics::NewProp_OnLobbyInvite,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_MatchmakingSubsystem_Statics::NewProp_OnLobbyKicked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_MatchmakingSubsystem_Statics::NewProp_OnLobbyMatchList,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_MatchmakingSubsystem_Statics::PropPointers) < 2048);
// ********** End Class USIK_MatchmakingSubsystem Property Definitions *****************************
UObject* (*const Z_Construct_UClass_USIK_MatchmakingSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_MatchmakingSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_MatchmakingSubsystem_Statics::ClassParams = {
	&USIK_MatchmakingSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USIK_MatchmakingSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USIK_MatchmakingSubsystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_MatchmakingSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_MatchmakingSubsystem_Statics::Class_MetaDataParams)
};
void USIK_MatchmakingSubsystem::StaticRegisterNativesUSIK_MatchmakingSubsystem()
{
}
UClass* Z_Construct_UClass_USIK_MatchmakingSubsystem()
{
	if (!Z_Registration_Info_UClass_USIK_MatchmakingSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_MatchmakingSubsystem.OuterSingleton, Z_Construct_UClass_USIK_MatchmakingSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_MatchmakingSubsystem.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_MatchmakingSubsystem);
// ********** End Class USIK_MatchmakingSubsystem **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Matchmaking_SIK_MatchmakingSubsystem_h__Script_SteamIntegrationKit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_MatchmakingSubsystem, USIK_MatchmakingSubsystem::StaticClass, TEXT("USIK_MatchmakingSubsystem"), &Z_Registration_Info_UClass_USIK_MatchmakingSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_MatchmakingSubsystem), 1754109971U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Matchmaking_SIK_MatchmakingSubsystem_h__Script_SteamIntegrationKit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Matchmaking_SIK_MatchmakingSubsystem_h__Script_SteamIntegrationKit_2208360561{
	TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Matchmaking_SIK_MatchmakingSubsystem_h__Script_SteamIntegrationKit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Matchmaking_SIK_MatchmakingSubsystem_h__Script_SteamIntegrationKit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
