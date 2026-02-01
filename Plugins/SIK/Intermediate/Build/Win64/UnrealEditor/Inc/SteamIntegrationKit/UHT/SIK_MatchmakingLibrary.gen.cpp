// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/Matchmaking/SIK_MatchmakingLibrary.h"
#include "SIK_SharedFile.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_MatchmakingLibrary() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_MatchmakingLibrary();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_MatchmakingLibrary_NoRegister();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_LobbyChatEntryType();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_LobbyComparisonType();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_LobbyDistanceFilter();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_LobbyType();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_AppId();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_SteamId();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USIK_MatchmakingLibrary Function AddFavoriteGame *************************
struct Z_Construct_UFunction_USIK_MatchmakingLibrary_AddFavoriteGame_Statics
{
	struct SIK_MatchmakingLibrary_eventAddFavoriteGame_Parms
	{
		FSIK_AppId AppID;
		FString IP;
		int32 ConnPort;
		int32 QueryPort;
		TArray<int32> Flags;
		int32 Time32LastPlayedOnServer;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Matchmaking" },
		{ "Comment", "/*\n\x09\x09""Adds a favorite game to the user's favorites list.\n\x09\x09@param AppID - The AppID of the game.\n\x09\x09@param IP - The IP address of the server.\n\x09\x09@param ConnPort - The connection port of the server.\n\x09\x09@param QueryPort - The query port of the server.\n\x09\x09@param Flags - The flags associated with the favorite.\n\x09\x09@param Time32LastPlayedOnServer - The last time the server was played on.\n\x09\x09@return - The index of the new favorite game.\n\x09\x09*/" },
		{ "DisplayName", "Add Favorite Game" },
		{ "Keywords", "AddFavoriteGame" },
		{ "ModuleRelativePath", "Functions/Matchmaking/SIK_MatchmakingLibrary.h" },
		{ "ToolTip", "Adds a favorite game to the user's favorites list.\n@param AppID - The AppID of the game.\n@param IP - The IP address of the server.\n@param ConnPort - The connection port of the server.\n@param QueryPort - The query port of the server.\n@param Flags - The flags associated with the favorite.\n@param Time32LastPlayedOnServer - The last time the server was played on.\n@return - The index of the new favorite game." },
	};
#endif // WITH_METADATA

// ********** Begin Function AddFavoriteGame constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_IP;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ConnPort;
	static const UECodeGen_Private::FIntPropertyParams NewProp_QueryPort;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Flags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Flags;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Time32LastPlayedOnServer;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddFavoriteGame constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddFavoriteGame Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_AddFavoriteGame_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MatchmakingLibrary_eventAddFavoriteGame_Parms, AppID), Z_Construct_UScriptStruct_FSIK_AppId, METADATA_PARAMS(0, nullptr) }; // 3325316996
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_AddFavoriteGame_Statics::NewProp_IP = { "IP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MatchmakingLibrary_eventAddFavoriteGame_Parms, IP), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_AddFavoriteGame_Statics::NewProp_ConnPort = { "ConnPort", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MatchmakingLibrary_eventAddFavoriteGame_Parms, ConnPort), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_AddFavoriteGame_Statics::NewProp_QueryPort = { "QueryPort", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MatchmakingLibrary_eventAddFavoriteGame_Parms, QueryPort), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_AddFavoriteGame_Statics::NewProp_Flags_Inner = { "Flags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_AddFavoriteGame_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MatchmakingLibrary_eventAddFavoriteGame_Parms, Flags), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_AddFavoriteGame_Statics::NewProp_Time32LastPlayedOnServer = { "Time32LastPlayedOnServer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MatchmakingLibrary_eventAddFavoriteGame_Parms, Time32LastPlayedOnServer), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_AddFavoriteGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MatchmakingLibrary_eventAddFavoriteGame_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_MatchmakingLibrary_AddFavoriteGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_AddFavoriteGame_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_AddFavoriteGame_Statics::NewProp_IP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_AddFavoriteGame_Statics::NewProp_ConnPort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_AddFavoriteGame_Statics::NewProp_QueryPort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_AddFavoriteGame_Statics::NewProp_Flags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_AddFavoriteGame_Statics::NewProp_Flags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_AddFavoriteGame_Statics::NewProp_Time32LastPlayedOnServer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_AddFavoriteGame_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_AddFavoriteGame_Statics::PropPointers) < 2048);
// ********** End Function AddFavoriteGame Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_MatchmakingLibrary_AddFavoriteGame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_MatchmakingLibrary, nullptr, "AddFavoriteGame", 	Z_Construct_UFunction_USIK_MatchmakingLibrary_AddFavoriteGame_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_AddFavoriteGame_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_MatchmakingLibrary_AddFavoriteGame_Statics::SIK_MatchmakingLibrary_eventAddFavoriteGame_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_AddFavoriteGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_MatchmakingLibrary_AddFavoriteGame_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_MatchmakingLibrary_AddFavoriteGame_Statics::SIK_MatchmakingLibrary_eventAddFavoriteGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_MatchmakingLibrary_AddFavoriteGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_MatchmakingLibrary_AddFavoriteGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_MatchmakingLibrary::execAddFavoriteGame)
{
	P_GET_STRUCT(FSIK_AppId,Z_Param_AppID);
	P_GET_PROPERTY(FStrProperty,Z_Param_IP);
	P_GET_PROPERTY(FIntProperty,Z_Param_ConnPort);
	P_GET_PROPERTY(FIntProperty,Z_Param_QueryPort);
	P_GET_TARRAY(int32,Z_Param_Flags);
	P_GET_PROPERTY(FIntProperty,Z_Param_Time32LastPlayedOnServer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USIK_MatchmakingLibrary::AddFavoriteGame(Z_Param_AppID,Z_Param_IP,Z_Param_ConnPort,Z_Param_QueryPort,Z_Param_Flags,Z_Param_Time32LastPlayedOnServer);
	P_NATIVE_END;
}
// ********** End Class USIK_MatchmakingLibrary Function AddFavoriteGame ***************************

// ********** Begin Class USIK_MatchmakingLibrary Function AddRequestLobbyListCompatibleMembersFilter 
struct Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListCompatibleMembersFilter_Statics
{
	struct SIK_MatchmakingLibrary_eventAddRequestLobbyListCompatibleMembersFilter_Parms
	{
		FSIK_SteamId SteamID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Matchmaking" },
		{ "Comment", "/*\n\x09""Adds a compatible members filter to the lobby list request.\n\x09@param SteamID - The Steam ID of the user to check compatibility.\n\x09*/" },
		{ "DisplayName", "Add Request Lobby List Compatible Members Filter" },
		{ "Keywords", "AddRequestLobbyListCompatibleMembersFilter" },
		{ "ModuleRelativePath", "Functions/Matchmaking/SIK_MatchmakingLibrary.h" },
		{ "ToolTip", "Adds a compatible members filter to the lobby list request.\n@param SteamID - The Steam ID of the user to check compatibility." },
	};
#endif // WITH_METADATA

// ********** Begin Function AddRequestLobbyListCompatibleMembersFilter constinit property declarations 
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddRequestLobbyListCompatibleMembersFilter constinit property declarations 
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddRequestLobbyListCompatibleMembersFilter Property Definitions *******
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListCompatibleMembersFilter_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MatchmakingLibrary_eventAddRequestLobbyListCompatibleMembersFilter_Parms, SteamID), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListCompatibleMembersFilter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListCompatibleMembersFilter_Statics::NewProp_SteamID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListCompatibleMembersFilter_Statics::PropPointers) < 2048);
// ********** End Function AddRequestLobbyListCompatibleMembersFilter Property Definitions *********
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListCompatibleMembersFilter_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_MatchmakingLibrary, nullptr, "AddRequestLobbyListCompatibleMembersFilter", 	Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListCompatibleMembersFilter_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListCompatibleMembersFilter_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListCompatibleMembersFilter_Statics::SIK_MatchmakingLibrary_eventAddRequestLobbyListCompatibleMembersFilter_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListCompatibleMembersFilter_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListCompatibleMembersFilter_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListCompatibleMembersFilter_Statics::SIK_MatchmakingLibrary_eventAddRequestLobbyListCompatibleMembersFilter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListCompatibleMembersFilter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListCompatibleMembersFilter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_MatchmakingLibrary::execAddRequestLobbyListCompatibleMembersFilter)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_SteamID);
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_MatchmakingLibrary::AddRequestLobbyListCompatibleMembersFilter(Z_Param_SteamID);
	P_NATIVE_END;
}
// ********** End Class USIK_MatchmakingLibrary Function AddRequestLobbyListCompatibleMembersFilter 

// ********** Begin Class USIK_MatchmakingLibrary Function AddRequestLobbyListDistanceFilter *******
struct Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListDistanceFilter_Statics
{
	struct SIK_MatchmakingLibrary_eventAddRequestLobbyListDistanceFilter_Parms
	{
		TEnumAsByte<ESIK_LobbyDistanceFilter> LobbyDistanceFilter;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Matchmaking" },
		{ "Comment", "/*\n\x09""Adds a distance filter to the lobby list request.\n\x09@param LobbyDistanceFilter - The distance filter to use.\n\x09*/" },
		{ "DisplayName", "Add Request Lobby List Distance Filter" },
		{ "Keywords", "AddRequestLobbyListDistanceFilter" },
		{ "ModuleRelativePath", "Functions/Matchmaking/SIK_MatchmakingLibrary.h" },
		{ "ToolTip", "Adds a distance filter to the lobby list request.\n@param LobbyDistanceFilter - The distance filter to use." },
	};
#endif // WITH_METADATA

// ********** Begin Function AddRequestLobbyListDistanceFilter constinit property declarations *****
	static const UECodeGen_Private::FBytePropertyParams NewProp_LobbyDistanceFilter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddRequestLobbyListDistanceFilter constinit property declarations *******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddRequestLobbyListDistanceFilter Property Definitions ****************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListDistanceFilter_Statics::NewProp_LobbyDistanceFilter = { "LobbyDistanceFilter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MatchmakingLibrary_eventAddRequestLobbyListDistanceFilter_Parms, LobbyDistanceFilter), Z_Construct_UEnum_SteamIntegrationKit_ESIK_LobbyDistanceFilter, METADATA_PARAMS(0, nullptr) }; // 1800932217
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListDistanceFilter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListDistanceFilter_Statics::NewProp_LobbyDistanceFilter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListDistanceFilter_Statics::PropPointers) < 2048);
// ********** End Function AddRequestLobbyListDistanceFilter Property Definitions ******************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListDistanceFilter_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_MatchmakingLibrary, nullptr, "AddRequestLobbyListDistanceFilter", 	Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListDistanceFilter_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListDistanceFilter_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListDistanceFilter_Statics::SIK_MatchmakingLibrary_eventAddRequestLobbyListDistanceFilter_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListDistanceFilter_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListDistanceFilter_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListDistanceFilter_Statics::SIK_MatchmakingLibrary_eventAddRequestLobbyListDistanceFilter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListDistanceFilter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListDistanceFilter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_MatchmakingLibrary::execAddRequestLobbyListDistanceFilter)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_LobbyDistanceFilter);
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_MatchmakingLibrary::AddRequestLobbyListDistanceFilter(ESIK_LobbyDistanceFilter(Z_Param_LobbyDistanceFilter));
	P_NATIVE_END;
}
// ********** End Class USIK_MatchmakingLibrary Function AddRequestLobbyListDistanceFilter *********

// ********** Begin Class USIK_MatchmakingLibrary Function AddRequestLobbyListFilterSlotsAvailable *
struct Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListFilterSlotsAvailable_Statics
{
	struct SIK_MatchmakingLibrary_eventAddRequestLobbyListFilterSlotsAvailable_Parms
	{
		int32 SlotsAvailable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Matchmaking" },
		{ "Comment", "/*\n\x09""Adds a slots available filter to the lobby list request.\n\x09@param SlotsAvailable - The minimum number of slots available.\n\x09*/" },
		{ "DisplayName", "Add Request Lobby List Filter Slots Available" },
		{ "Keywords", "AddRequestLobbyListFilterSlotsAvailable" },
		{ "ModuleRelativePath", "Functions/Matchmaking/SIK_MatchmakingLibrary.h" },
		{ "ToolTip", "Adds a slots available filter to the lobby list request.\n@param SlotsAvailable - The minimum number of slots available." },
	};
#endif // WITH_METADATA

// ********** Begin Function AddRequestLobbyListFilterSlotsAvailable constinit property declarations 
	static const UECodeGen_Private::FIntPropertyParams NewProp_SlotsAvailable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddRequestLobbyListFilterSlotsAvailable constinit property declarations *
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddRequestLobbyListFilterSlotsAvailable Property Definitions **********
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListFilterSlotsAvailable_Statics::NewProp_SlotsAvailable = { "SlotsAvailable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MatchmakingLibrary_eventAddRequestLobbyListFilterSlotsAvailable_Parms, SlotsAvailable), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListFilterSlotsAvailable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListFilterSlotsAvailable_Statics::NewProp_SlotsAvailable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListFilterSlotsAvailable_Statics::PropPointers) < 2048);
// ********** End Function AddRequestLobbyListFilterSlotsAvailable Property Definitions ************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListFilterSlotsAvailable_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_MatchmakingLibrary, nullptr, "AddRequestLobbyListFilterSlotsAvailable", 	Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListFilterSlotsAvailable_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListFilterSlotsAvailable_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListFilterSlotsAvailable_Statics::SIK_MatchmakingLibrary_eventAddRequestLobbyListFilterSlotsAvailable_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListFilterSlotsAvailable_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListFilterSlotsAvailable_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListFilterSlotsAvailable_Statics::SIK_MatchmakingLibrary_eventAddRequestLobbyListFilterSlotsAvailable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListFilterSlotsAvailable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListFilterSlotsAvailable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_MatchmakingLibrary::execAddRequestLobbyListFilterSlotsAvailable)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_SlotsAvailable);
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_MatchmakingLibrary::AddRequestLobbyListFilterSlotsAvailable(Z_Param_SlotsAvailable);
	P_NATIVE_END;
}
// ********** End Class USIK_MatchmakingLibrary Function AddRequestLobbyListFilterSlotsAvailable ***

// ********** Begin Class USIK_MatchmakingLibrary Function AddRequestLobbyListNearValueFilter ******
struct Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListNearValueFilter_Statics
{
	struct SIK_MatchmakingLibrary_eventAddRequestLobbyListNearValueFilter_Parms
	{
		FString KeyToMatch;
		int32 ValueToBeCloseTo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Matchmaking" },
		{ "Comment", "/*\n\x09""Adds a near value filter to the lobby list request.\n\x09@param KeyToMatch - The key to match.\n\x09@param ValueToBeCloseTo - The value to be close to.\n\x09*/" },
		{ "DisplayName", "Add Request Lobby List Near Value Filter" },
		{ "Keywords", "AddRequestLobbyListNearValueFilter" },
		{ "ModuleRelativePath", "Functions/Matchmaking/SIK_MatchmakingLibrary.h" },
		{ "ToolTip", "Adds a near value filter to the lobby list request.\n@param KeyToMatch - The key to match.\n@param ValueToBeCloseTo - The value to be close to." },
	};
#endif // WITH_METADATA

// ********** Begin Function AddRequestLobbyListNearValueFilter constinit property declarations ****
	static const UECodeGen_Private::FStrPropertyParams NewProp_KeyToMatch;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ValueToBeCloseTo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddRequestLobbyListNearValueFilter constinit property declarations ******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddRequestLobbyListNearValueFilter Property Definitions ***************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListNearValueFilter_Statics::NewProp_KeyToMatch = { "KeyToMatch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MatchmakingLibrary_eventAddRequestLobbyListNearValueFilter_Parms, KeyToMatch), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListNearValueFilter_Statics::NewProp_ValueToBeCloseTo = { "ValueToBeCloseTo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MatchmakingLibrary_eventAddRequestLobbyListNearValueFilter_Parms, ValueToBeCloseTo), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListNearValueFilter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListNearValueFilter_Statics::NewProp_KeyToMatch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListNearValueFilter_Statics::NewProp_ValueToBeCloseTo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListNearValueFilter_Statics::PropPointers) < 2048);
// ********** End Function AddRequestLobbyListNearValueFilter Property Definitions *****************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListNearValueFilter_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_MatchmakingLibrary, nullptr, "AddRequestLobbyListNearValueFilter", 	Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListNearValueFilter_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListNearValueFilter_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListNearValueFilter_Statics::SIK_MatchmakingLibrary_eventAddRequestLobbyListNearValueFilter_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListNearValueFilter_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListNearValueFilter_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListNearValueFilter_Statics::SIK_MatchmakingLibrary_eventAddRequestLobbyListNearValueFilter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListNearValueFilter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListNearValueFilter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_MatchmakingLibrary::execAddRequestLobbyListNearValueFilter)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_KeyToMatch);
	P_GET_PROPERTY(FIntProperty,Z_Param_ValueToBeCloseTo);
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_MatchmakingLibrary::AddRequestLobbyListNearValueFilter(Z_Param_KeyToMatch,Z_Param_ValueToBeCloseTo);
	P_NATIVE_END;
}
// ********** End Class USIK_MatchmakingLibrary Function AddRequestLobbyListNearValueFilter ********

// ********** Begin Class USIK_MatchmakingLibrary Function AddRequestLobbyListNumericalFilter ******
struct Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListNumericalFilter_Statics
{
	struct SIK_MatchmakingLibrary_eventAddRequestLobbyListNumericalFilter_Parms
	{
		FString KeyToMatch;
		int32 ValueToMatch;
		TEnumAsByte<ESIK_LobbyComparisonType> ComparisonType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Matchmaking" },
		{ "Comment", "/*\n\x09""Adds a numerical filter to the lobby list request.\n\x09@param KeyToMatch - The key to match.\n\x09@param ValueToMatch - The value to match.\n\x09@param ComparisonType - The comparison type to use.\n\x09*/" },
		{ "DisplayName", "Add Request Lobby List Numerical Filter" },
		{ "Keywords", "AddRequestLobbyListNumericalFilter" },
		{ "ModuleRelativePath", "Functions/Matchmaking/SIK_MatchmakingLibrary.h" },
		{ "ToolTip", "Adds a numerical filter to the lobby list request.\n@param KeyToMatch - The key to match.\n@param ValueToMatch - The value to match.\n@param ComparisonType - The comparison type to use." },
	};
#endif // WITH_METADATA

// ********** Begin Function AddRequestLobbyListNumericalFilter constinit property declarations ****
	static const UECodeGen_Private::FStrPropertyParams NewProp_KeyToMatch;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ValueToMatch;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ComparisonType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddRequestLobbyListNumericalFilter constinit property declarations ******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddRequestLobbyListNumericalFilter Property Definitions ***************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListNumericalFilter_Statics::NewProp_KeyToMatch = { "KeyToMatch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MatchmakingLibrary_eventAddRequestLobbyListNumericalFilter_Parms, KeyToMatch), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListNumericalFilter_Statics::NewProp_ValueToMatch = { "ValueToMatch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MatchmakingLibrary_eventAddRequestLobbyListNumericalFilter_Parms, ValueToMatch), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListNumericalFilter_Statics::NewProp_ComparisonType = { "ComparisonType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MatchmakingLibrary_eventAddRequestLobbyListNumericalFilter_Parms, ComparisonType), Z_Construct_UEnum_SteamIntegrationKit_ESIK_LobbyComparisonType, METADATA_PARAMS(0, nullptr) }; // 3429213948
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListNumericalFilter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListNumericalFilter_Statics::NewProp_KeyToMatch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListNumericalFilter_Statics::NewProp_ValueToMatch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListNumericalFilter_Statics::NewProp_ComparisonType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListNumericalFilter_Statics::PropPointers) < 2048);
// ********** End Function AddRequestLobbyListNumericalFilter Property Definitions *****************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListNumericalFilter_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_MatchmakingLibrary, nullptr, "AddRequestLobbyListNumericalFilter", 	Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListNumericalFilter_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListNumericalFilter_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListNumericalFilter_Statics::SIK_MatchmakingLibrary_eventAddRequestLobbyListNumericalFilter_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListNumericalFilter_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListNumericalFilter_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListNumericalFilter_Statics::SIK_MatchmakingLibrary_eventAddRequestLobbyListNumericalFilter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListNumericalFilter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListNumericalFilter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_MatchmakingLibrary::execAddRequestLobbyListNumericalFilter)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_KeyToMatch);
	P_GET_PROPERTY(FIntProperty,Z_Param_ValueToMatch);
	P_GET_PROPERTY(FByteProperty,Z_Param_ComparisonType);
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_MatchmakingLibrary::AddRequestLobbyListNumericalFilter(Z_Param_KeyToMatch,Z_Param_ValueToMatch,ESIK_LobbyComparisonType(Z_Param_ComparisonType));
	P_NATIVE_END;
}
// ********** End Class USIK_MatchmakingLibrary Function AddRequestLobbyListNumericalFilter ********

// ********** Begin Class USIK_MatchmakingLibrary Function AddRequestLobbyListResultCountFilter ****
struct Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListResultCountFilter_Statics
{
	struct SIK_MatchmakingLibrary_eventAddRequestLobbyListResultCountFilter_Parms
	{
		int32 MaxResults;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Matchmaking" },
		{ "Comment", "/*\n\x09""Adds a result count filter to the lobby list request.\n\x09@param MaxResults - The maximum number of results to return.\n\x09*/" },
		{ "DisplayName", "Add Request Lobby List Result Count Filter" },
		{ "Keywords", "AddRequestLobbyListResultCountFilter" },
		{ "ModuleRelativePath", "Functions/Matchmaking/SIK_MatchmakingLibrary.h" },
		{ "ToolTip", "Adds a result count filter to the lobby list request.\n@param MaxResults - The maximum number of results to return." },
	};
#endif // WITH_METADATA

// ********** Begin Function AddRequestLobbyListResultCountFilter constinit property declarations **
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxResults;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddRequestLobbyListResultCountFilter constinit property declarations ****
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddRequestLobbyListResultCountFilter Property Definitions *************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListResultCountFilter_Statics::NewProp_MaxResults = { "MaxResults", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MatchmakingLibrary_eventAddRequestLobbyListResultCountFilter_Parms, MaxResults), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListResultCountFilter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListResultCountFilter_Statics::NewProp_MaxResults,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListResultCountFilter_Statics::PropPointers) < 2048);
// ********** End Function AddRequestLobbyListResultCountFilter Property Definitions ***************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListResultCountFilter_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_MatchmakingLibrary, nullptr, "AddRequestLobbyListResultCountFilter", 	Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListResultCountFilter_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListResultCountFilter_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListResultCountFilter_Statics::SIK_MatchmakingLibrary_eventAddRequestLobbyListResultCountFilter_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListResultCountFilter_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListResultCountFilter_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListResultCountFilter_Statics::SIK_MatchmakingLibrary_eventAddRequestLobbyListResultCountFilter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListResultCountFilter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListResultCountFilter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_MatchmakingLibrary::execAddRequestLobbyListResultCountFilter)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxResults);
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_MatchmakingLibrary::AddRequestLobbyListResultCountFilter(Z_Param_MaxResults);
	P_NATIVE_END;
}
// ********** End Class USIK_MatchmakingLibrary Function AddRequestLobbyListResultCountFilter ******

// ********** Begin Class USIK_MatchmakingLibrary Function AddRequestLobbyListStringFilter *********
struct Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListStringFilter_Statics
{
	struct SIK_MatchmakingLibrary_eventAddRequestLobbyListStringFilter_Parms
	{
		FString KeyToMatch;
		FString ValueToMatch;
		TEnumAsByte<ESIK_LobbyComparisonType> ComparisonType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Matchmaking" },
		{ "Comment", "/*\n\x09""Adds a string filter to the lobby list request.\n\x09@param KeyToMatch - The key to match.\n\x09@param ValueToMatch - The value to match.\n\x09@param ComparisonType - The comparison type to use.\n\x09*/" },
		{ "DisplayName", "Add Request Lobby List String Filter" },
		{ "Keywords", "AddRequestLobbyListStringFilter" },
		{ "ModuleRelativePath", "Functions/Matchmaking/SIK_MatchmakingLibrary.h" },
		{ "ToolTip", "Adds a string filter to the lobby list request.\n@param KeyToMatch - The key to match.\n@param ValueToMatch - The value to match.\n@param ComparisonType - The comparison type to use." },
	};
#endif // WITH_METADATA

// ********** Begin Function AddRequestLobbyListStringFilter constinit property declarations *******
	static const UECodeGen_Private::FStrPropertyParams NewProp_KeyToMatch;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ValueToMatch;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ComparisonType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddRequestLobbyListStringFilter constinit property declarations *********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddRequestLobbyListStringFilter Property Definitions ******************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListStringFilter_Statics::NewProp_KeyToMatch = { "KeyToMatch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MatchmakingLibrary_eventAddRequestLobbyListStringFilter_Parms, KeyToMatch), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListStringFilter_Statics::NewProp_ValueToMatch = { "ValueToMatch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MatchmakingLibrary_eventAddRequestLobbyListStringFilter_Parms, ValueToMatch), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListStringFilter_Statics::NewProp_ComparisonType = { "ComparisonType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MatchmakingLibrary_eventAddRequestLobbyListStringFilter_Parms, ComparisonType), Z_Construct_UEnum_SteamIntegrationKit_ESIK_LobbyComparisonType, METADATA_PARAMS(0, nullptr) }; // 3429213948
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListStringFilter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListStringFilter_Statics::NewProp_KeyToMatch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListStringFilter_Statics::NewProp_ValueToMatch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListStringFilter_Statics::NewProp_ComparisonType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListStringFilter_Statics::PropPointers) < 2048);
// ********** End Function AddRequestLobbyListStringFilter Property Definitions ********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListStringFilter_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_MatchmakingLibrary, nullptr, "AddRequestLobbyListStringFilter", 	Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListStringFilter_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListStringFilter_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListStringFilter_Statics::SIK_MatchmakingLibrary_eventAddRequestLobbyListStringFilter_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListStringFilter_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListStringFilter_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListStringFilter_Statics::SIK_MatchmakingLibrary_eventAddRequestLobbyListStringFilter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListStringFilter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListStringFilter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_MatchmakingLibrary::execAddRequestLobbyListStringFilter)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_KeyToMatch);
	P_GET_PROPERTY(FStrProperty,Z_Param_ValueToMatch);
	P_GET_PROPERTY(FByteProperty,Z_Param_ComparisonType);
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_MatchmakingLibrary::AddRequestLobbyListStringFilter(Z_Param_KeyToMatch,Z_Param_ValueToMatch,ESIK_LobbyComparisonType(Z_Param_ComparisonType));
	P_NATIVE_END;
}
// ********** End Class USIK_MatchmakingLibrary Function AddRequestLobbyListStringFilter ***********

// ********** Begin Class USIK_MatchmakingLibrary Function DeleteLobbyData *************************
struct Z_Construct_UFunction_USIK_MatchmakingLibrary_DeleteLobbyData_Statics
{
	struct SIK_MatchmakingLibrary_eventDeleteLobbyData_Parms
	{
		FSIK_SteamId SteamID;
		FString Key;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Matchmaking" },
		{ "Comment", "/*\n\x09""Deletes a lobby data key.\n\x09@param SteamID - The Steam ID of the lobby.\n\x09@param Key - The key to delete.\n\x09@return - true if successful, false otherwise.\n\x09*/" },
		{ "DisplayName", "Delete Lobby Data" },
		{ "Keywords", "DeleteLobbyData" },
		{ "ModuleRelativePath", "Functions/Matchmaking/SIK_MatchmakingLibrary.h" },
		{ "ToolTip", "Deletes a lobby data key.\n@param SteamID - The Steam ID of the lobby.\n@param Key - The key to delete.\n@return - true if successful, false otherwise." },
	};
#endif // WITH_METADATA

// ********** Begin Function DeleteLobbyData constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DeleteLobbyData constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DeleteLobbyData Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_DeleteLobbyData_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MatchmakingLibrary_eventDeleteLobbyData_Parms, SteamID), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_DeleteLobbyData_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MatchmakingLibrary_eventDeleteLobbyData_Parms, Key), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_MatchmakingLibrary_DeleteLobbyData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_MatchmakingLibrary_eventDeleteLobbyData_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_DeleteLobbyData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_MatchmakingLibrary_eventDeleteLobbyData_Parms), &Z_Construct_UFunction_USIK_MatchmakingLibrary_DeleteLobbyData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_MatchmakingLibrary_DeleteLobbyData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_DeleteLobbyData_Statics::NewProp_SteamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_DeleteLobbyData_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_DeleteLobbyData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_DeleteLobbyData_Statics::PropPointers) < 2048);
// ********** End Function DeleteLobbyData Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_MatchmakingLibrary_DeleteLobbyData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_MatchmakingLibrary, nullptr, "DeleteLobbyData", 	Z_Construct_UFunction_USIK_MatchmakingLibrary_DeleteLobbyData_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_DeleteLobbyData_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_MatchmakingLibrary_DeleteLobbyData_Statics::SIK_MatchmakingLibrary_eventDeleteLobbyData_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_DeleteLobbyData_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_MatchmakingLibrary_DeleteLobbyData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_MatchmakingLibrary_DeleteLobbyData_Statics::SIK_MatchmakingLibrary_eventDeleteLobbyData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_MatchmakingLibrary_DeleteLobbyData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_MatchmakingLibrary_DeleteLobbyData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_MatchmakingLibrary::execDeleteLobbyData)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_SteamID);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_MatchmakingLibrary::DeleteLobbyData(Z_Param_SteamID,Z_Param_Key);
	P_NATIVE_END;
}
// ********** End Class USIK_MatchmakingLibrary Function DeleteLobbyData ***************************

// ********** Begin Class USIK_MatchmakingLibrary Function GetFavoriteGame *************************
struct Z_Construct_UFunction_USIK_MatchmakingLibrary_GetFavoriteGame_Statics
{
	struct SIK_MatchmakingLibrary_eventGetFavoriteGame_Parms
	{
		int32 GameIndex;
		FSIK_AppId AppID;
		FString IP;
		int32 ConnPort;
		int32 QueryPort;
		TArray<int32> Flags;
		int32 Time32LastPlayedOnServer;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Matchmaking" },
		{ "Comment", "/*\n\x09Gets a favorite game by index.\n\x09@param GameIndex - The index of the game.\n\x09@param AppID - The AppID of the game.\n\x09@param IP - The IP address of the server.\n\x09@param ConnPort - The connection port of the server.\n\x09@param QueryPort - The query port of the server.\n\x09@param Flags - The flags associated with the favorite.\n\x09@param Time32LastPlayedOnServer - The last time the server was played on.\n\x09@return - true if successful, false otherwise.\n\x09*/" },
		{ "DisplayName", "Get Favorite Game" },
		{ "Keywords", "GetFavoriteGame" },
		{ "ModuleRelativePath", "Functions/Matchmaking/SIK_MatchmakingLibrary.h" },
		{ "ToolTip", "Gets a favorite game by index.\n@param GameIndex - The index of the game.\n@param AppID - The AppID of the game.\n@param IP - The IP address of the server.\n@param ConnPort - The connection port of the server.\n@param QueryPort - The query port of the server.\n@param Flags - The flags associated with the favorite.\n@param Time32LastPlayedOnServer - The last time the server was played on.\n@return - true if successful, false otherwise." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetFavoriteGame constinit property declarations ***********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_GameIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_IP;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ConnPort;
	static const UECodeGen_Private::FIntPropertyParams NewProp_QueryPort;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Flags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Flags;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Time32LastPlayedOnServer;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetFavoriteGame constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetFavoriteGame Property Definitions **********************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_GetFavoriteGame_Statics::NewProp_GameIndex = { "GameIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MatchmakingLibrary_eventGetFavoriteGame_Parms, GameIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_GetFavoriteGame_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MatchmakingLibrary_eventGetFavoriteGame_Parms, AppID), Z_Construct_UScriptStruct_FSIK_AppId, METADATA_PARAMS(0, nullptr) }; // 3325316996
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_GetFavoriteGame_Statics::NewProp_IP = { "IP", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MatchmakingLibrary_eventGetFavoriteGame_Parms, IP), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_GetFavoriteGame_Statics::NewProp_ConnPort = { "ConnPort", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MatchmakingLibrary_eventGetFavoriteGame_Parms, ConnPort), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_GetFavoriteGame_Statics::NewProp_QueryPort = { "QueryPort", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MatchmakingLibrary_eventGetFavoriteGame_Parms, QueryPort), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_GetFavoriteGame_Statics::NewProp_Flags_Inner = { "Flags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_GetFavoriteGame_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MatchmakingLibrary_eventGetFavoriteGame_Parms, Flags), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_GetFavoriteGame_Statics::NewProp_Time32LastPlayedOnServer = { "Time32LastPlayedOnServer", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MatchmakingLibrary_eventGetFavoriteGame_Parms, Time32LastPlayedOnServer), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_MatchmakingLibrary_GetFavoriteGame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_MatchmakingLibrary_eventGetFavoriteGame_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_GetFavoriteGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_MatchmakingLibrary_eventGetFavoriteGame_Parms), &Z_Construct_UFunction_USIK_MatchmakingLibrary_GetFavoriteGame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_MatchmakingLibrary_GetFavoriteGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_GetFavoriteGame_Statics::NewProp_GameIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_GetFavoriteGame_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_GetFavoriteGame_Statics::NewProp_IP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_GetFavoriteGame_Statics::NewProp_ConnPort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_GetFavoriteGame_Statics::NewProp_QueryPort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_GetFavoriteGame_Statics::NewProp_Flags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_GetFavoriteGame_Statics::NewProp_Flags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_GetFavoriteGame_Statics::NewProp_Time32LastPlayedOnServer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_GetFavoriteGame_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_GetFavoriteGame_Statics::PropPointers) < 2048);
// ********** End Function GetFavoriteGame Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_MatchmakingLibrary_GetFavoriteGame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_MatchmakingLibrary, nullptr, "GetFavoriteGame", 	Z_Construct_UFunction_USIK_MatchmakingLibrary_GetFavoriteGame_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_GetFavoriteGame_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_MatchmakingLibrary_GetFavoriteGame_Statics::SIK_MatchmakingLibrary_eventGetFavoriteGame_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_GetFavoriteGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_MatchmakingLibrary_GetFavoriteGame_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_MatchmakingLibrary_GetFavoriteGame_Statics::SIK_MatchmakingLibrary_eventGetFavoriteGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_MatchmakingLibrary_GetFavoriteGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_MatchmakingLibrary_GetFavoriteGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_MatchmakingLibrary::execGetFavoriteGame)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_GameIndex);
	P_GET_STRUCT_REF(FSIK_AppId,Z_Param_Out_AppID);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_IP);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_ConnPort);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_QueryPort);
	P_GET_TARRAY_REF(int32,Z_Param_Out_Flags);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Time32LastPlayedOnServer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_MatchmakingLibrary::GetFavoriteGame(Z_Param_GameIndex,Z_Param_Out_AppID,Z_Param_Out_IP,Z_Param_Out_ConnPort,Z_Param_Out_QueryPort,Z_Param_Out_Flags,Z_Param_Out_Time32LastPlayedOnServer);
	P_NATIVE_END;
}
// ********** End Class USIK_MatchmakingLibrary Function GetFavoriteGame ***************************

// ********** Begin Class USIK_MatchmakingLibrary Function GetFavoriteGameCount ********************
struct Z_Construct_UFunction_USIK_MatchmakingLibrary_GetFavoriteGameCount_Statics
{
	struct SIK_MatchmakingLibrary_eventGetFavoriteGameCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Matchmaking" },
		{ "Comment", "/*\n\x09Gets the number of favorite games.\n\x09@return - The number of favorite games.\n\x09*/" },
		{ "DisplayName", "Get Favorite Game Count" },
		{ "Keywords", "GetFavoriteGameCount" },
		{ "ModuleRelativePath", "Functions/Matchmaking/SIK_MatchmakingLibrary.h" },
		{ "ToolTip", "Gets the number of favorite games.\n@return - The number of favorite games." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetFavoriteGameCount constinit property declarations ******************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetFavoriteGameCount constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetFavoriteGameCount Property Definitions *****************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_GetFavoriteGameCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MatchmakingLibrary_eventGetFavoriteGameCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_MatchmakingLibrary_GetFavoriteGameCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_GetFavoriteGameCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_GetFavoriteGameCount_Statics::PropPointers) < 2048);
// ********** End Function GetFavoriteGameCount Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_MatchmakingLibrary_GetFavoriteGameCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_MatchmakingLibrary, nullptr, "GetFavoriteGameCount", 	Z_Construct_UFunction_USIK_MatchmakingLibrary_GetFavoriteGameCount_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_GetFavoriteGameCount_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_MatchmakingLibrary_GetFavoriteGameCount_Statics::SIK_MatchmakingLibrary_eventGetFavoriteGameCount_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_GetFavoriteGameCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_MatchmakingLibrary_GetFavoriteGameCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_MatchmakingLibrary_GetFavoriteGameCount_Statics::SIK_MatchmakingLibrary_eventGetFavoriteGameCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_MatchmakingLibrary_GetFavoriteGameCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_MatchmakingLibrary_GetFavoriteGameCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_MatchmakingLibrary::execGetFavoriteGameCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USIK_MatchmakingLibrary::GetFavoriteGameCount();
	P_NATIVE_END;
}
// ********** End Class USIK_MatchmakingLibrary Function GetFavoriteGameCount **********************

// ********** Begin Class USIK_MatchmakingLibrary Function GetLobbyByIndex *************************
struct Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyByIndex_Statics
{
	struct SIK_MatchmakingLibrary_eventGetLobbyByIndex_Parms
	{
		int32 LobbyIndex;
		FSIK_SteamId ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Matchmaking" },
		{ "Comment", "/*\n\x09Gets a lobby by index.\n\x09@param LobbyIndex - The index of the lobby.\n\x09@return - The Steam ID of the lobby.\n\x09*/" },
		{ "DisplayName", "Get Lobby By Index" },
		{ "Keywords", "GetLobbyByIndex" },
		{ "ModuleRelativePath", "Functions/Matchmaking/SIK_MatchmakingLibrary.h" },
		{ "ToolTip", "Gets a lobby by index.\n@param LobbyIndex - The index of the lobby.\n@return - The Steam ID of the lobby." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetLobbyByIndex constinit property declarations ***********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_LobbyIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetLobbyByIndex constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetLobbyByIndex Property Definitions **********************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyByIndex_Statics::NewProp_LobbyIndex = { "LobbyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MatchmakingLibrary_eventGetLobbyByIndex_Parms, LobbyIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MatchmakingLibrary_eventGetLobbyByIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyByIndex_Statics::NewProp_LobbyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyByIndex_Statics::PropPointers) < 2048);
// ********** End Function GetLobbyByIndex Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyByIndex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_MatchmakingLibrary, nullptr, "GetLobbyByIndex", 	Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyByIndex_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyByIndex_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyByIndex_Statics::SIK_MatchmakingLibrary_eventGetLobbyByIndex_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyByIndex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyByIndex_Statics::SIK_MatchmakingLibrary_eventGetLobbyByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_MatchmakingLibrary::execGetLobbyByIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_LobbyIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSIK_SteamId*)Z_Param__Result=USIK_MatchmakingLibrary::GetLobbyByIndex(Z_Param_LobbyIndex);
	P_NATIVE_END;
}
// ********** End Class USIK_MatchmakingLibrary Function GetLobbyByIndex ***************************

// ********** Begin Class USIK_MatchmakingLibrary Function GetLobbyChatEntry ***********************
struct Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyChatEntry_Statics
{
	struct SIK_MatchmakingLibrary_eventGetLobbyChatEntry_Parms
	{
		FSIK_SteamId SteamID;
		int32 ChatID;
		FSIK_SteamId SteamIDUser;
		FString ChatEntry;
		TEnumAsByte<ESIK_LobbyChatEntryType> ChatEntryType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Matchmaking" },
		{ "Comment", "/*\n\x09Gets a chat entry from a lobby.\n\x09@param SteamID - The Steam ID of the lobby.\n\x09@param ChatID - The index of the chat entry.\n\x09@param SteamIDUser - The Steam ID of the user who sent the message.\n\x09@param ChatEntry - The chat entry text.\n\x09@param ChatEntryType - The type of the chat entry.\n\x09*/" },
		{ "DisplayName", "Get Lobby Chat Entry" },
		{ "Keywords", "GetLobbyChatEntry" },
		{ "ModuleRelativePath", "Functions/Matchmaking/SIK_MatchmakingLibrary.h" },
		{ "ToolTip", "Gets a chat entry from a lobby.\n@param SteamID - The Steam ID of the lobby.\n@param ChatID - The index of the chat entry.\n@param SteamIDUser - The Steam ID of the user who sent the message.\n@param ChatEntry - The chat entry text.\n@param ChatEntryType - The type of the chat entry." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetLobbyChatEntry constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ChatID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ChatEntry;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ChatEntryType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetLobbyChatEntry constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetLobbyChatEntry Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyChatEntry_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MatchmakingLibrary_eventGetLobbyChatEntry_Parms, SteamID), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyChatEntry_Statics::NewProp_ChatID = { "ChatID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MatchmakingLibrary_eventGetLobbyChatEntry_Parms, ChatID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyChatEntry_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MatchmakingLibrary_eventGetLobbyChatEntry_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyChatEntry_Statics::NewProp_ChatEntry = { "ChatEntry", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MatchmakingLibrary_eventGetLobbyChatEntry_Parms, ChatEntry), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyChatEntry_Statics::NewProp_ChatEntryType = { "ChatEntryType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MatchmakingLibrary_eventGetLobbyChatEntry_Parms, ChatEntryType), Z_Construct_UEnum_SteamIntegrationKit_ESIK_LobbyChatEntryType, METADATA_PARAMS(0, nullptr) }; // 4123875100
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyChatEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyChatEntry_Statics::NewProp_SteamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyChatEntry_Statics::NewProp_ChatID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyChatEntry_Statics::NewProp_SteamIDUser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyChatEntry_Statics::NewProp_ChatEntry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyChatEntry_Statics::NewProp_ChatEntryType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyChatEntry_Statics::PropPointers) < 2048);
// ********** End Function GetLobbyChatEntry Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyChatEntry_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_MatchmakingLibrary, nullptr, "GetLobbyChatEntry", 	Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyChatEntry_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyChatEntry_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyChatEntry_Statics::SIK_MatchmakingLibrary_eventGetLobbyChatEntry_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyChatEntry_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyChatEntry_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyChatEntry_Statics::SIK_MatchmakingLibrary_eventGetLobbyChatEntry_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyChatEntry()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyChatEntry_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_MatchmakingLibrary::execGetLobbyChatEntry)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_SteamID);
	P_GET_PROPERTY(FIntProperty,Z_Param_ChatID);
	P_GET_STRUCT_REF(FSIK_SteamId,Z_Param_Out_SteamIDUser);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_ChatEntry);
	P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_ChatEntryType);
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_MatchmakingLibrary::GetLobbyChatEntry(Z_Param_SteamID,Z_Param_ChatID,Z_Param_Out_SteamIDUser,Z_Param_Out_ChatEntry,(TEnumAsByte<ESIK_LobbyChatEntryType>&)(Z_Param_Out_ChatEntryType));
	P_NATIVE_END;
}
// ********** End Class USIK_MatchmakingLibrary Function GetLobbyChatEntry *************************

// ********** Begin Class USIK_MatchmakingLibrary Function GetLobbyData ****************************
struct Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyData_Statics
{
	struct SIK_MatchmakingLibrary_eventGetLobbyData_Parms
	{
		FSIK_SteamId LobbyID;
		FString Key;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Matchmaking" },
		{ "Comment", "/*\n\x09Gets a lobby data value.\n\x09@param LobbyID - The Steam ID of the lobby.\n\x09@param Key - The key of the data to retrieve.\n\x09@return - The value of the data.\n\x09*/" },
		{ "DisplayName", "Get Lobby Data" },
		{ "Keywords", "GetLobbyData" },
		{ "ModuleRelativePath", "Functions/Matchmaking/SIK_MatchmakingLibrary.h" },
		{ "ToolTip", "Gets a lobby data value.\n@param LobbyID - The Steam ID of the lobby.\n@param Key - The key of the data to retrieve.\n@return - The value of the data." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetLobbyData constinit property declarations **************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetLobbyData constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetLobbyData Property Definitions *************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyData_Statics::NewProp_LobbyID = { "LobbyID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MatchmakingLibrary_eventGetLobbyData_Parms, LobbyID), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyData_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MatchmakingLibrary_eventGetLobbyData_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MatchmakingLibrary_eventGetLobbyData_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyData_Statics::NewProp_LobbyID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyData_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyData_Statics::PropPointers) < 2048);
// ********** End Function GetLobbyData Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_MatchmakingLibrary, nullptr, "GetLobbyData", 	Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyData_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyData_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyData_Statics::SIK_MatchmakingLibrary_eventGetLobbyData_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyData_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyData_Statics::SIK_MatchmakingLibrary_eventGetLobbyData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_MatchmakingLibrary::execGetLobbyData)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_LobbyID);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USIK_MatchmakingLibrary::GetLobbyData(Z_Param_LobbyID,Z_Param_Key);
	P_NATIVE_END;
}
// ********** End Class USIK_MatchmakingLibrary Function GetLobbyData ******************************

// ********** Begin Class USIK_MatchmakingLibrary Function GetLobbyDataByIndex *********************
struct Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyDataByIndex_Statics
{
	struct SIK_MatchmakingLibrary_eventGetLobbyDataByIndex_Parms
	{
		FSIK_SteamId LobbyID;
		int32 DataIndex;
		FString Key;
		FString Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Matchmaking" },
		{ "Comment", "/*\n\x09Gets a lobby data key-value pair by index.\n\x09@param LobbyID - The Steam ID of the lobby.\n\x09@param DataIndex - The index of the data pair.\n\x09@param Key - The key of the data pair.\n\x09@param Value - The value of the data pair.\n\x09@return - true if successful, false otherwise.\n\x09*/" },
		{ "DisplayName", "Get Lobby Data By Index" },
		{ "Keywords", "GetLobbyDataByIndex" },
		{ "ModuleRelativePath", "Functions/Matchmaking/SIK_MatchmakingLibrary.h" },
		{ "ToolTip", "Gets a lobby data key-value pair by index.\n@param LobbyID - The Steam ID of the lobby.\n@param DataIndex - The index of the data pair.\n@param Key - The key of the data pair.\n@param Value - The value of the data pair.\n@return - true if successful, false otherwise." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetLobbyDataByIndex constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DataIndex;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetLobbyDataByIndex constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetLobbyDataByIndex Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyDataByIndex_Statics::NewProp_LobbyID = { "LobbyID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MatchmakingLibrary_eventGetLobbyDataByIndex_Parms, LobbyID), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyDataByIndex_Statics::NewProp_DataIndex = { "DataIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MatchmakingLibrary_eventGetLobbyDataByIndex_Parms, DataIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyDataByIndex_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MatchmakingLibrary_eventGetLobbyDataByIndex_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyDataByIndex_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MatchmakingLibrary_eventGetLobbyDataByIndex_Parms, Value), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyDataByIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_MatchmakingLibrary_eventGetLobbyDataByIndex_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyDataByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_MatchmakingLibrary_eventGetLobbyDataByIndex_Parms), &Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyDataByIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyDataByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyDataByIndex_Statics::NewProp_LobbyID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyDataByIndex_Statics::NewProp_DataIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyDataByIndex_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyDataByIndex_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyDataByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyDataByIndex_Statics::PropPointers) < 2048);
// ********** End Function GetLobbyDataByIndex Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyDataByIndex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_MatchmakingLibrary, nullptr, "GetLobbyDataByIndex", 	Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyDataByIndex_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyDataByIndex_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyDataByIndex_Statics::SIK_MatchmakingLibrary_eventGetLobbyDataByIndex_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyDataByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyDataByIndex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyDataByIndex_Statics::SIK_MatchmakingLibrary_eventGetLobbyDataByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyDataByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyDataByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_MatchmakingLibrary::execGetLobbyDataByIndex)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_LobbyID);
	P_GET_PROPERTY(FIntProperty,Z_Param_DataIndex);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Key);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_MatchmakingLibrary::GetLobbyDataByIndex(Z_Param_LobbyID,Z_Param_DataIndex,Z_Param_Out_Key,Z_Param_Out_Value);
	P_NATIVE_END;
}
// ********** End Class USIK_MatchmakingLibrary Function GetLobbyDataByIndex ***********************

// ********** Begin Class USIK_MatchmakingLibrary Function GetLobbyDataCount ***********************
struct Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyDataCount_Statics
{
	struct SIK_MatchmakingLibrary_eventGetLobbyDataCount_Parms
	{
		FSIK_SteamId LobbyID;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Matchmaking" },
		{ "Comment", "/*\n\x09Gets the number of data pairs in a lobby.\n\x09@param LobbyID - The Steam ID of the lobby.\n\x09@return - The number of data pairs.\n\x09*/" },
		{ "DisplayName", "Get Lobby Data Count" },
		{ "Keywords", "GetLobbyDataCount" },
		{ "ModuleRelativePath", "Functions/Matchmaking/SIK_MatchmakingLibrary.h" },
		{ "ToolTip", "Gets the number of data pairs in a lobby.\n@param LobbyID - The Steam ID of the lobby.\n@return - The number of data pairs." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetLobbyDataCount constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetLobbyDataCount constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetLobbyDataCount Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyDataCount_Statics::NewProp_LobbyID = { "LobbyID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MatchmakingLibrary_eventGetLobbyDataCount_Parms, LobbyID), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyDataCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MatchmakingLibrary_eventGetLobbyDataCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyDataCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyDataCount_Statics::NewProp_LobbyID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyDataCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyDataCount_Statics::PropPointers) < 2048);
// ********** End Function GetLobbyDataCount Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyDataCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_MatchmakingLibrary, nullptr, "GetLobbyDataCount", 	Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyDataCount_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyDataCount_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyDataCount_Statics::SIK_MatchmakingLibrary_eventGetLobbyDataCount_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyDataCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyDataCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyDataCount_Statics::SIK_MatchmakingLibrary_eventGetLobbyDataCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyDataCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyDataCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_MatchmakingLibrary::execGetLobbyDataCount)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_LobbyID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USIK_MatchmakingLibrary::GetLobbyDataCount(Z_Param_LobbyID);
	P_NATIVE_END;
}
// ********** End Class USIK_MatchmakingLibrary Function GetLobbyDataCount *************************

// ********** Begin Class USIK_MatchmakingLibrary Function GetLobbyGameServer **********************
struct Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyGameServer_Statics
{
	struct SIK_MatchmakingLibrary_eventGetLobbyGameServer_Parms
	{
		FSIK_SteamId LobbyID;
		FString ServerIP;
		int32 ServerPort;
		FSIK_SteamId SteamID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Matchmaking" },
		{ "Comment", "/*\n\x09Gets the game server information for a lobby.\n\x09@param LobbyID - The Steam ID of the lobby.\n\x09@param ServerIP - The IP address of the game server.\n\x09@param ServerPort - The port of the game server.\n\x09@param SteamID - The Steam ID of the game server.\n\x09@return - true if successful, false otherwise.\n\x09*/" },
		{ "DisplayName", "Get Lobby Game Server" },
		{ "Keywords", "GetLobbyGameServer" },
		{ "ModuleRelativePath", "Functions/Matchmaking/SIK_MatchmakingLibrary.h" },
		{ "ToolTip", "Gets the game server information for a lobby.\n@param LobbyID - The Steam ID of the lobby.\n@param ServerIP - The IP address of the game server.\n@param ServerPort - The port of the game server.\n@param SteamID - The Steam ID of the game server.\n@return - true if successful, false otherwise." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetLobbyGameServer constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ServerIP;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ServerPort;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetLobbyGameServer constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetLobbyGameServer Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyGameServer_Statics::NewProp_LobbyID = { "LobbyID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MatchmakingLibrary_eventGetLobbyGameServer_Parms, LobbyID), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyGameServer_Statics::NewProp_ServerIP = { "ServerIP", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MatchmakingLibrary_eventGetLobbyGameServer_Parms, ServerIP), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyGameServer_Statics::NewProp_ServerPort = { "ServerPort", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MatchmakingLibrary_eventGetLobbyGameServer_Parms, ServerPort), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyGameServer_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MatchmakingLibrary_eventGetLobbyGameServer_Parms, SteamID), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
void Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyGameServer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_MatchmakingLibrary_eventGetLobbyGameServer_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyGameServer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_MatchmakingLibrary_eventGetLobbyGameServer_Parms), &Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyGameServer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyGameServer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyGameServer_Statics::NewProp_LobbyID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyGameServer_Statics::NewProp_ServerIP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyGameServer_Statics::NewProp_ServerPort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyGameServer_Statics::NewProp_SteamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyGameServer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyGameServer_Statics::PropPointers) < 2048);
// ********** End Function GetLobbyGameServer Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyGameServer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_MatchmakingLibrary, nullptr, "GetLobbyGameServer", 	Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyGameServer_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyGameServer_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyGameServer_Statics::SIK_MatchmakingLibrary_eventGetLobbyGameServer_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyGameServer_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyGameServer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyGameServer_Statics::SIK_MatchmakingLibrary_eventGetLobbyGameServer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyGameServer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyGameServer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_MatchmakingLibrary::execGetLobbyGameServer)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_LobbyID);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_ServerIP);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_ServerPort);
	P_GET_STRUCT_REF(FSIK_SteamId,Z_Param_Out_SteamID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_MatchmakingLibrary::GetLobbyGameServer(Z_Param_LobbyID,Z_Param_Out_ServerIP,Z_Param_Out_ServerPort,Z_Param_Out_SteamID);
	P_NATIVE_END;
}
// ********** End Class USIK_MatchmakingLibrary Function GetLobbyGameServer ************************

// ********** Begin Class USIK_MatchmakingLibrary Function GetLobbyMemberByIndex *******************
struct Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyMemberByIndex_Statics
{
	struct SIK_MatchmakingLibrary_eventGetLobbyMemberByIndex_Parms
	{
		FSIK_SteamId LobbyID;
		int32 MemberIndex;
		FSIK_SteamId ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Matchmaking" },
		{ "Comment", "/*\n\x09Gets a member of a lobby by index.\n\x09@param LobbyID - The Steam ID of the lobby.\n\x09@param MemberIndex - The index of the member.\n\x09@return - The Steam ID of the member.\n\x09*/" },
		{ "DisplayName", "Get Lobby Member By Index" },
		{ "Keywords", "GetLobbyMemberByIndex" },
		{ "ModuleRelativePath", "Functions/Matchmaking/SIK_MatchmakingLibrary.h" },
		{ "ToolTip", "Gets a member of a lobby by index.\n@param LobbyID - The Steam ID of the lobby.\n@param MemberIndex - The index of the member.\n@return - The Steam ID of the member." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetLobbyMemberByIndex constinit property declarations *****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MemberIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetLobbyMemberByIndex constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetLobbyMemberByIndex Property Definitions ****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyMemberByIndex_Statics::NewProp_LobbyID = { "LobbyID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MatchmakingLibrary_eventGetLobbyMemberByIndex_Parms, LobbyID), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyMemberByIndex_Statics::NewProp_MemberIndex = { "MemberIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MatchmakingLibrary_eventGetLobbyMemberByIndex_Parms, MemberIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyMemberByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MatchmakingLibrary_eventGetLobbyMemberByIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyMemberByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyMemberByIndex_Statics::NewProp_LobbyID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyMemberByIndex_Statics::NewProp_MemberIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyMemberByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyMemberByIndex_Statics::PropPointers) < 2048);
// ********** End Function GetLobbyMemberByIndex Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyMemberByIndex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_MatchmakingLibrary, nullptr, "GetLobbyMemberByIndex", 	Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyMemberByIndex_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyMemberByIndex_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyMemberByIndex_Statics::SIK_MatchmakingLibrary_eventGetLobbyMemberByIndex_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyMemberByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyMemberByIndex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyMemberByIndex_Statics::SIK_MatchmakingLibrary_eventGetLobbyMemberByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyMemberByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyMemberByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_MatchmakingLibrary::execGetLobbyMemberByIndex)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_LobbyID);
	P_GET_PROPERTY(FIntProperty,Z_Param_MemberIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSIK_SteamId*)Z_Param__Result=USIK_MatchmakingLibrary::GetLobbyMemberByIndex(Z_Param_LobbyID,Z_Param_MemberIndex);
	P_NATIVE_END;
}
// ********** End Class USIK_MatchmakingLibrary Function GetLobbyMemberByIndex *********************

// ********** Begin Class USIK_MatchmakingLibrary Function GetLobbyMemberData **********************
struct Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyMemberData_Statics
{
	struct SIK_MatchmakingLibrary_eventGetLobbyMemberData_Parms
	{
		FSIK_SteamId LobbyID;
		FSIK_SteamId UserID;
		FString Key;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Matchmaking" },
		{ "Comment", "/*\n\x09Gets a lobby member's data by key.\n\x09@param LobbyID - The Steam ID of the lobby.\n\x09@param UserID - The Steam ID of the user.\n\x09@param Key - The key of the data to retrieve.\n\x09@return - The value of the data.\n\x09*/" },
		{ "DisplayName", "Get Lobby Member Data" },
		{ "Keywords", "GetLobbyMemberData" },
		{ "ModuleRelativePath", "Functions/Matchmaking/SIK_MatchmakingLibrary.h" },
		{ "ToolTip", "Gets a lobby member's data by key.\n@param LobbyID - The Steam ID of the lobby.\n@param UserID - The Steam ID of the user.\n@param Key - The key of the data to retrieve.\n@return - The value of the data." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetLobbyMemberData constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UserID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetLobbyMemberData constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetLobbyMemberData Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyMemberData_Statics::NewProp_LobbyID = { "LobbyID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MatchmakingLibrary_eventGetLobbyMemberData_Parms, LobbyID), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyMemberData_Statics::NewProp_UserID = { "UserID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MatchmakingLibrary_eventGetLobbyMemberData_Parms, UserID), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyMemberData_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MatchmakingLibrary_eventGetLobbyMemberData_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyMemberData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MatchmakingLibrary_eventGetLobbyMemberData_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyMemberData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyMemberData_Statics::NewProp_LobbyID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyMemberData_Statics::NewProp_UserID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyMemberData_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyMemberData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyMemberData_Statics::PropPointers) < 2048);
// ********** End Function GetLobbyMemberData Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyMemberData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_MatchmakingLibrary, nullptr, "GetLobbyMemberData", 	Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyMemberData_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyMemberData_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyMemberData_Statics::SIK_MatchmakingLibrary_eventGetLobbyMemberData_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyMemberData_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyMemberData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyMemberData_Statics::SIK_MatchmakingLibrary_eventGetLobbyMemberData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyMemberData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyMemberData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_MatchmakingLibrary::execGetLobbyMemberData)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_LobbyID);
	P_GET_STRUCT(FSIK_SteamId,Z_Param_UserID);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USIK_MatchmakingLibrary::GetLobbyMemberData(Z_Param_LobbyID,Z_Param_UserID,Z_Param_Key);
	P_NATIVE_END;
}
// ********** End Class USIK_MatchmakingLibrary Function GetLobbyMemberData ************************

// ********** Begin Class USIK_MatchmakingLibrary Function GetLobbyMemberLimit *********************
struct Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyMemberLimit_Statics
{
	struct SIK_MatchmakingLibrary_eventGetLobbyMemberLimit_Parms
	{
		FSIK_SteamId LobbyID;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Matchmaking" },
		{ "Comment", "/*\n\x09Gets the member limit of a lobby.\n\x09@param LobbyID - The Steam ID of the lobby.\n\x09@return - The member limit of the lobby.\n\x09*/" },
		{ "DisplayName", "Get Lobby Member Limit" },
		{ "Keywords", "GetLobbyMemberLimit" },
		{ "ModuleRelativePath", "Functions/Matchmaking/SIK_MatchmakingLibrary.h" },
		{ "ToolTip", "Gets the member limit of a lobby.\n@param LobbyID - The Steam ID of the lobby.\n@return - The member limit of the lobby." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetLobbyMemberLimit constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetLobbyMemberLimit constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetLobbyMemberLimit Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyMemberLimit_Statics::NewProp_LobbyID = { "LobbyID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MatchmakingLibrary_eventGetLobbyMemberLimit_Parms, LobbyID), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyMemberLimit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MatchmakingLibrary_eventGetLobbyMemberLimit_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyMemberLimit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyMemberLimit_Statics::NewProp_LobbyID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyMemberLimit_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyMemberLimit_Statics::PropPointers) < 2048);
// ********** End Function GetLobbyMemberLimit Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyMemberLimit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_MatchmakingLibrary, nullptr, "GetLobbyMemberLimit", 	Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyMemberLimit_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyMemberLimit_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyMemberLimit_Statics::SIK_MatchmakingLibrary_eventGetLobbyMemberLimit_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyMemberLimit_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyMemberLimit_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyMemberLimit_Statics::SIK_MatchmakingLibrary_eventGetLobbyMemberLimit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyMemberLimit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyMemberLimit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_MatchmakingLibrary::execGetLobbyMemberLimit)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_LobbyID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USIK_MatchmakingLibrary::GetLobbyMemberLimit(Z_Param_LobbyID);
	P_NATIVE_END;
}
// ********** End Class USIK_MatchmakingLibrary Function GetLobbyMemberLimit ***********************

// ********** Begin Class USIK_MatchmakingLibrary Function GetLobbyOwner ***************************
struct Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyOwner_Statics
{
	struct SIK_MatchmakingLibrary_eventGetLobbyOwner_Parms
	{
		FSIK_SteamId LobbyID;
		FSIK_SteamId ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Matchmaking" },
		{ "Comment", "/*\n\x09Gets the owner of a lobby.\n\x09@param LobbyID - The Steam ID of the lobby.\n\x09@return - The Steam ID of the lobby owner.\n\x09*/" },
		{ "DisplayName", "Get Lobby Owner" },
		{ "Keywords", "GetLobbyOwner" },
		{ "ModuleRelativePath", "Functions/Matchmaking/SIK_MatchmakingLibrary.h" },
		{ "ToolTip", "Gets the owner of a lobby.\n@param LobbyID - The Steam ID of the lobby.\n@return - The Steam ID of the lobby owner." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetLobbyOwner constinit property declarations *************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetLobbyOwner constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetLobbyOwner Property Definitions ************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyOwner_Statics::NewProp_LobbyID = { "LobbyID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MatchmakingLibrary_eventGetLobbyOwner_Parms, LobbyID), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MatchmakingLibrary_eventGetLobbyOwner_Parms, ReturnValue), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyOwner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyOwner_Statics::NewProp_LobbyID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyOwner_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyOwner_Statics::PropPointers) < 2048);
// ********** End Function GetLobbyOwner Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyOwner_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_MatchmakingLibrary, nullptr, "GetLobbyOwner", 	Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyOwner_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyOwner_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyOwner_Statics::SIK_MatchmakingLibrary_eventGetLobbyOwner_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyOwner_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyOwner_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyOwner_Statics::SIK_MatchmakingLibrary_eventGetLobbyOwner_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyOwner()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyOwner_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_MatchmakingLibrary::execGetLobbyOwner)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_LobbyID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSIK_SteamId*)Z_Param__Result=USIK_MatchmakingLibrary::GetLobbyOwner(Z_Param_LobbyID);
	P_NATIVE_END;
}
// ********** End Class USIK_MatchmakingLibrary Function GetLobbyOwner *****************************

// ********** Begin Class USIK_MatchmakingLibrary Function GetNumLobbyMembers **********************
struct Z_Construct_UFunction_USIK_MatchmakingLibrary_GetNumLobbyMembers_Statics
{
	struct SIK_MatchmakingLibrary_eventGetNumLobbyMembers_Parms
	{
		FSIK_SteamId LobbyID;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Matchmaking" },
		{ "Comment", "/*\n\x09Gets the number of members in a lobby.\n\x09@param LobbyID - The Steam ID of the lobby.\n\x09@return - The number of members in the lobby.\n\x09*/" },
		{ "DisplayName", "Get Num Lobby Members" },
		{ "Keywords", "GetNumLobbyMembers" },
		{ "ModuleRelativePath", "Functions/Matchmaking/SIK_MatchmakingLibrary.h" },
		{ "ToolTip", "Gets the number of members in a lobby.\n@param LobbyID - The Steam ID of the lobby.\n@return - The number of members in the lobby." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetNumLobbyMembers constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetNumLobbyMembers constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetNumLobbyMembers Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_GetNumLobbyMembers_Statics::NewProp_LobbyID = { "LobbyID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MatchmakingLibrary_eventGetNumLobbyMembers_Parms, LobbyID), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_GetNumLobbyMembers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MatchmakingLibrary_eventGetNumLobbyMembers_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_MatchmakingLibrary_GetNumLobbyMembers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_GetNumLobbyMembers_Statics::NewProp_LobbyID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_GetNumLobbyMembers_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_GetNumLobbyMembers_Statics::PropPointers) < 2048);
// ********** End Function GetNumLobbyMembers Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_MatchmakingLibrary_GetNumLobbyMembers_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_MatchmakingLibrary, nullptr, "GetNumLobbyMembers", 	Z_Construct_UFunction_USIK_MatchmakingLibrary_GetNumLobbyMembers_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_GetNumLobbyMembers_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_MatchmakingLibrary_GetNumLobbyMembers_Statics::SIK_MatchmakingLibrary_eventGetNumLobbyMembers_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_GetNumLobbyMembers_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_MatchmakingLibrary_GetNumLobbyMembers_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_MatchmakingLibrary_GetNumLobbyMembers_Statics::SIK_MatchmakingLibrary_eventGetNumLobbyMembers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_MatchmakingLibrary_GetNumLobbyMembers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_MatchmakingLibrary_GetNumLobbyMembers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_MatchmakingLibrary::execGetNumLobbyMembers)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_LobbyID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USIK_MatchmakingLibrary::GetNumLobbyMembers(Z_Param_LobbyID);
	P_NATIVE_END;
}
// ********** End Class USIK_MatchmakingLibrary Function GetNumLobbyMembers ************************

// ********** Begin Class USIK_MatchmakingLibrary Function InviteUserToLobby ***********************
struct Z_Construct_UFunction_USIK_MatchmakingLibrary_InviteUserToLobby_Statics
{
	struct SIK_MatchmakingLibrary_eventInviteUserToLobby_Parms
	{
		FSIK_SteamId LobbyID;
		FSIK_SteamId SteamID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Matchmaking" },
		{ "Comment", "/*\n\x09Invites a user to a lobby.\n\x09@param LobbyID - The Steam ID of the lobby.\n\x09@param SteamID - The Steam ID of the user to invite.\n\x09@return - true if successful, false otherwise.\n\x09*/" },
		{ "DisplayName", "Invite User To Lobby" },
		{ "Keywords", "InviteUserToLobby" },
		{ "ModuleRelativePath", "Functions/Matchmaking/SIK_MatchmakingLibrary.h" },
		{ "ToolTip", "Invites a user to a lobby.\n@param LobbyID - The Steam ID of the lobby.\n@param SteamID - The Steam ID of the user to invite.\n@return - true if successful, false otherwise." },
	};
#endif // WITH_METADATA

// ********** Begin Function InviteUserToLobby constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function InviteUserToLobby constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function InviteUserToLobby Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_InviteUserToLobby_Statics::NewProp_LobbyID = { "LobbyID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MatchmakingLibrary_eventInviteUserToLobby_Parms, LobbyID), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_InviteUserToLobby_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MatchmakingLibrary_eventInviteUserToLobby_Parms, SteamID), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
void Z_Construct_UFunction_USIK_MatchmakingLibrary_InviteUserToLobby_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_MatchmakingLibrary_eventInviteUserToLobby_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_InviteUserToLobby_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_MatchmakingLibrary_eventInviteUserToLobby_Parms), &Z_Construct_UFunction_USIK_MatchmakingLibrary_InviteUserToLobby_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_MatchmakingLibrary_InviteUserToLobby_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_InviteUserToLobby_Statics::NewProp_LobbyID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_InviteUserToLobby_Statics::NewProp_SteamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_InviteUserToLobby_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_InviteUserToLobby_Statics::PropPointers) < 2048);
// ********** End Function InviteUserToLobby Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_MatchmakingLibrary_InviteUserToLobby_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_MatchmakingLibrary, nullptr, "InviteUserToLobby", 	Z_Construct_UFunction_USIK_MatchmakingLibrary_InviteUserToLobby_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_InviteUserToLobby_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_MatchmakingLibrary_InviteUserToLobby_Statics::SIK_MatchmakingLibrary_eventInviteUserToLobby_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_InviteUserToLobby_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_MatchmakingLibrary_InviteUserToLobby_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_MatchmakingLibrary_InviteUserToLobby_Statics::SIK_MatchmakingLibrary_eventInviteUserToLobby_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_MatchmakingLibrary_InviteUserToLobby()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_MatchmakingLibrary_InviteUserToLobby_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_MatchmakingLibrary::execInviteUserToLobby)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_LobbyID);
	P_GET_STRUCT(FSIK_SteamId,Z_Param_SteamID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_MatchmakingLibrary::InviteUserToLobby(Z_Param_LobbyID,Z_Param_SteamID);
	P_NATIVE_END;
}
// ********** End Class USIK_MatchmakingLibrary Function InviteUserToLobby *************************

// ********** Begin Class USIK_MatchmakingLibrary Function LeaveLobby ******************************
struct Z_Construct_UFunction_USIK_MatchmakingLibrary_LeaveLobby_Statics
{
	struct SIK_MatchmakingLibrary_eventLeaveLobby_Parms
	{
		FSIK_SteamId LobbyID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Matchmaking" },
		{ "Comment", "/*\n\x09Leaves a lobby.\n\x09@param LobbyID - The Steam ID of the lobby.\n\x09*/" },
		{ "DisplayName", "Leave Lobby" },
		{ "Keywords", "LeaveLobby" },
		{ "ModuleRelativePath", "Functions/Matchmaking/SIK_MatchmakingLibrary.h" },
		{ "ToolTip", "Leaves a lobby.\n@param LobbyID - The Steam ID of the lobby." },
	};
#endif // WITH_METADATA

// ********** Begin Function LeaveLobby constinit property declarations ****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function LeaveLobby constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function LeaveLobby Property Definitions ***************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_LeaveLobby_Statics::NewProp_LobbyID = { "LobbyID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MatchmakingLibrary_eventLeaveLobby_Parms, LobbyID), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_MatchmakingLibrary_LeaveLobby_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_LeaveLobby_Statics::NewProp_LobbyID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_LeaveLobby_Statics::PropPointers) < 2048);
// ********** End Function LeaveLobby Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_MatchmakingLibrary_LeaveLobby_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_MatchmakingLibrary, nullptr, "LeaveLobby", 	Z_Construct_UFunction_USIK_MatchmakingLibrary_LeaveLobby_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_LeaveLobby_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_MatchmakingLibrary_LeaveLobby_Statics::SIK_MatchmakingLibrary_eventLeaveLobby_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_LeaveLobby_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_MatchmakingLibrary_LeaveLobby_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_MatchmakingLibrary_LeaveLobby_Statics::SIK_MatchmakingLibrary_eventLeaveLobby_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_MatchmakingLibrary_LeaveLobby()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_MatchmakingLibrary_LeaveLobby_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_MatchmakingLibrary::execLeaveLobby)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_LobbyID);
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_MatchmakingLibrary::LeaveLobby(Z_Param_LobbyID);
	P_NATIVE_END;
}
// ********** End Class USIK_MatchmakingLibrary Function LeaveLobby ********************************

// ********** Begin Class USIK_MatchmakingLibrary Function RemoveFavoriteGame **********************
struct Z_Construct_UFunction_USIK_MatchmakingLibrary_RemoveFavoriteGame_Statics
{
	struct SIK_MatchmakingLibrary_eventRemoveFavoriteGame_Parms
	{
		FSIK_AppId AppID;
		FString IP;
		int32 ConnPort;
		int32 QueryPort;
		TArray<int32> Flags;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Matchmaking" },
		{ "Comment", "/*\n\x09Removes a favorite game from the user's favorites list.\n\x09@param AppID - The AppID of the game.\n\x09@param IP - The IP address of the server.\n\x09@param ConnPort - The connection port of the server.\n\x09@param QueryPort - The query port of the server.\n\x09@param Flags - The flags associated with the favorite.\n\x09@return - true if successful, false otherwise.\n\x09*/" },
		{ "DisplayName", "Remove Favorite Game" },
		{ "Keywords", "RemoveFavoriteGame" },
		{ "ModuleRelativePath", "Functions/Matchmaking/SIK_MatchmakingLibrary.h" },
		{ "ToolTip", "Removes a favorite game from the user's favorites list.\n@param AppID - The AppID of the game.\n@param IP - The IP address of the server.\n@param ConnPort - The connection port of the server.\n@param QueryPort - The query port of the server.\n@param Flags - The flags associated with the favorite.\n@return - true if successful, false otherwise." },
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveFavoriteGame constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_IP;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ConnPort;
	static const UECodeGen_Private::FIntPropertyParams NewProp_QueryPort;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Flags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Flags;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RemoveFavoriteGame constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RemoveFavoriteGame Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_RemoveFavoriteGame_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MatchmakingLibrary_eventRemoveFavoriteGame_Parms, AppID), Z_Construct_UScriptStruct_FSIK_AppId, METADATA_PARAMS(0, nullptr) }; // 3325316996
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_RemoveFavoriteGame_Statics::NewProp_IP = { "IP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MatchmakingLibrary_eventRemoveFavoriteGame_Parms, IP), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_RemoveFavoriteGame_Statics::NewProp_ConnPort = { "ConnPort", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MatchmakingLibrary_eventRemoveFavoriteGame_Parms, ConnPort), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_RemoveFavoriteGame_Statics::NewProp_QueryPort = { "QueryPort", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MatchmakingLibrary_eventRemoveFavoriteGame_Parms, QueryPort), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_RemoveFavoriteGame_Statics::NewProp_Flags_Inner = { "Flags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_RemoveFavoriteGame_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MatchmakingLibrary_eventRemoveFavoriteGame_Parms, Flags), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_MatchmakingLibrary_RemoveFavoriteGame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_MatchmakingLibrary_eventRemoveFavoriteGame_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_RemoveFavoriteGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_MatchmakingLibrary_eventRemoveFavoriteGame_Parms), &Z_Construct_UFunction_USIK_MatchmakingLibrary_RemoveFavoriteGame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_MatchmakingLibrary_RemoveFavoriteGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_RemoveFavoriteGame_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_RemoveFavoriteGame_Statics::NewProp_IP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_RemoveFavoriteGame_Statics::NewProp_ConnPort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_RemoveFavoriteGame_Statics::NewProp_QueryPort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_RemoveFavoriteGame_Statics::NewProp_Flags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_RemoveFavoriteGame_Statics::NewProp_Flags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_RemoveFavoriteGame_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_RemoveFavoriteGame_Statics::PropPointers) < 2048);
// ********** End Function RemoveFavoriteGame Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_MatchmakingLibrary_RemoveFavoriteGame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_MatchmakingLibrary, nullptr, "RemoveFavoriteGame", 	Z_Construct_UFunction_USIK_MatchmakingLibrary_RemoveFavoriteGame_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_RemoveFavoriteGame_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_MatchmakingLibrary_RemoveFavoriteGame_Statics::SIK_MatchmakingLibrary_eventRemoveFavoriteGame_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_RemoveFavoriteGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_MatchmakingLibrary_RemoveFavoriteGame_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_MatchmakingLibrary_RemoveFavoriteGame_Statics::SIK_MatchmakingLibrary_eventRemoveFavoriteGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_MatchmakingLibrary_RemoveFavoriteGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_MatchmakingLibrary_RemoveFavoriteGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_MatchmakingLibrary::execRemoveFavoriteGame)
{
	P_GET_STRUCT(FSIK_AppId,Z_Param_AppID);
	P_GET_PROPERTY(FStrProperty,Z_Param_IP);
	P_GET_PROPERTY(FIntProperty,Z_Param_ConnPort);
	P_GET_PROPERTY(FIntProperty,Z_Param_QueryPort);
	P_GET_TARRAY(int32,Z_Param_Flags);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_MatchmakingLibrary::RemoveFavoriteGame(Z_Param_AppID,Z_Param_IP,Z_Param_ConnPort,Z_Param_QueryPort,Z_Param_Flags);
	P_NATIVE_END;
}
// ********** End Class USIK_MatchmakingLibrary Function RemoveFavoriteGame ************************

// ********** Begin Class USIK_MatchmakingLibrary Function RequestLobbyData ************************
struct Z_Construct_UFunction_USIK_MatchmakingLibrary_RequestLobbyData_Statics
{
	struct SIK_MatchmakingLibrary_eventRequestLobbyData_Parms
	{
		FSIK_SteamId LobbyID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Matchmaking" },
		{ "Comment", "/*\n\x09Requests lobby data from the server.\n\x09@param LobbyID - The Steam ID of the lobby.\n\x09@return - true if successful, false otherwise.\n\x09*/" },
		{ "DisplayName", "Request Lobby Data" },
		{ "Keywords", "RequestLobbyData" },
		{ "ModuleRelativePath", "Functions/Matchmaking/SIK_MatchmakingLibrary.h" },
		{ "ToolTip", "Requests lobby data from the server.\n@param LobbyID - The Steam ID of the lobby.\n@return - true if successful, false otherwise." },
	};
#endif // WITH_METADATA

// ********** Begin Function RequestLobbyData constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RequestLobbyData constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RequestLobbyData Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_RequestLobbyData_Statics::NewProp_LobbyID = { "LobbyID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MatchmakingLibrary_eventRequestLobbyData_Parms, LobbyID), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
void Z_Construct_UFunction_USIK_MatchmakingLibrary_RequestLobbyData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_MatchmakingLibrary_eventRequestLobbyData_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_RequestLobbyData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_MatchmakingLibrary_eventRequestLobbyData_Parms), &Z_Construct_UFunction_USIK_MatchmakingLibrary_RequestLobbyData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_MatchmakingLibrary_RequestLobbyData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_RequestLobbyData_Statics::NewProp_LobbyID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_RequestLobbyData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_RequestLobbyData_Statics::PropPointers) < 2048);
// ********** End Function RequestLobbyData Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_MatchmakingLibrary_RequestLobbyData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_MatchmakingLibrary, nullptr, "RequestLobbyData", 	Z_Construct_UFunction_USIK_MatchmakingLibrary_RequestLobbyData_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_RequestLobbyData_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_MatchmakingLibrary_RequestLobbyData_Statics::SIK_MatchmakingLibrary_eventRequestLobbyData_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_RequestLobbyData_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_MatchmakingLibrary_RequestLobbyData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_MatchmakingLibrary_RequestLobbyData_Statics::SIK_MatchmakingLibrary_eventRequestLobbyData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_MatchmakingLibrary_RequestLobbyData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_MatchmakingLibrary_RequestLobbyData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_MatchmakingLibrary::execRequestLobbyData)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_LobbyID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_MatchmakingLibrary::RequestLobbyData(Z_Param_LobbyID);
	P_NATIVE_END;
}
// ********** End Class USIK_MatchmakingLibrary Function RequestLobbyData **************************

// ********** Begin Class USIK_MatchmakingLibrary Function SendLobbyChatMessage ********************
struct Z_Construct_UFunction_USIK_MatchmakingLibrary_SendLobbyChatMessage_Statics
{
	struct SIK_MatchmakingLibrary_eventSendLobbyChatMessage_Parms
	{
		FSIK_SteamId LobbyID;
		FString Message;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Matchmaking" },
		{ "Comment", "/*\n\x09Sends a chat message to a lobby.\n\x09@param LobbyID - The Steam ID of the lobby.\n\x09@param Message - The message to send.\n\x09@return - true if successful, false otherwise.\n\x09*/" },
		{ "DisplayName", "Send Lobby Chat Message" },
		{ "Keywords", "SendLobbyChatMessage" },
		{ "ModuleRelativePath", "Functions/Matchmaking/SIK_MatchmakingLibrary.h" },
		{ "ToolTip", "Sends a chat message to a lobby.\n@param LobbyID - The Steam ID of the lobby.\n@param Message - The message to send.\n@return - true if successful, false otherwise." },
	};
#endif // WITH_METADATA

// ********** Begin Function SendLobbyChatMessage constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SendLobbyChatMessage constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SendLobbyChatMessage Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_SendLobbyChatMessage_Statics::NewProp_LobbyID = { "LobbyID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MatchmakingLibrary_eventSendLobbyChatMessage_Parms, LobbyID), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_SendLobbyChatMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MatchmakingLibrary_eventSendLobbyChatMessage_Parms, Message), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_MatchmakingLibrary_SendLobbyChatMessage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_MatchmakingLibrary_eventSendLobbyChatMessage_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_SendLobbyChatMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_MatchmakingLibrary_eventSendLobbyChatMessage_Parms), &Z_Construct_UFunction_USIK_MatchmakingLibrary_SendLobbyChatMessage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_MatchmakingLibrary_SendLobbyChatMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_SendLobbyChatMessage_Statics::NewProp_LobbyID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_SendLobbyChatMessage_Statics::NewProp_Message,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_SendLobbyChatMessage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_SendLobbyChatMessage_Statics::PropPointers) < 2048);
// ********** End Function SendLobbyChatMessage Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_MatchmakingLibrary_SendLobbyChatMessage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_MatchmakingLibrary, nullptr, "SendLobbyChatMessage", 	Z_Construct_UFunction_USIK_MatchmakingLibrary_SendLobbyChatMessage_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_SendLobbyChatMessage_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_MatchmakingLibrary_SendLobbyChatMessage_Statics::SIK_MatchmakingLibrary_eventSendLobbyChatMessage_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_SendLobbyChatMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_MatchmakingLibrary_SendLobbyChatMessage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_MatchmakingLibrary_SendLobbyChatMessage_Statics::SIK_MatchmakingLibrary_eventSendLobbyChatMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_MatchmakingLibrary_SendLobbyChatMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_MatchmakingLibrary_SendLobbyChatMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_MatchmakingLibrary::execSendLobbyChatMessage)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_LobbyID);
	P_GET_PROPERTY(FStrProperty,Z_Param_Message);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_MatchmakingLibrary::SendLobbyChatMessage(Z_Param_LobbyID,Z_Param_Message);
	P_NATIVE_END;
}
// ********** End Class USIK_MatchmakingLibrary Function SendLobbyChatMessage **********************

// ********** Begin Class USIK_MatchmakingLibrary Function SetLinkedLobby **************************
struct Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLinkedLobby_Statics
{
	struct SIK_MatchmakingLibrary_eventSetLinkedLobby_Parms
	{
		FSIK_SteamId LobbyID;
		FSIK_SteamId DependentLobbyID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Matchmaking" },
		{ "Comment", "/*\n\x09Sets a linked lobby.\n\x09@param LobbyID - The Steam ID of the lobby.\n\x09@param DependentLobbyID - The Steam ID of the dependent lobby.\n\x09*/" },
		{ "DisplayName", "Set Linked Lobby" },
		{ "Keywords", "SetLinkedLobby" },
		{ "ModuleRelativePath", "Functions/Matchmaking/SIK_MatchmakingLibrary.h" },
		{ "ToolTip", "Sets a linked lobby.\n@param LobbyID - The Steam ID of the lobby.\n@param DependentLobbyID - The Steam ID of the dependent lobby." },
	};
#endif // WITH_METADATA

// ********** Begin Function SetLinkedLobby constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DependentLobbyID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetLinkedLobby constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetLinkedLobby Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLinkedLobby_Statics::NewProp_LobbyID = { "LobbyID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MatchmakingLibrary_eventSetLinkedLobby_Parms, LobbyID), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLinkedLobby_Statics::NewProp_DependentLobbyID = { "DependentLobbyID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MatchmakingLibrary_eventSetLinkedLobby_Parms, DependentLobbyID), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLinkedLobby_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLinkedLobby_Statics::NewProp_LobbyID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLinkedLobby_Statics::NewProp_DependentLobbyID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLinkedLobby_Statics::PropPointers) < 2048);
// ********** End Function SetLinkedLobby Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLinkedLobby_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_MatchmakingLibrary, nullptr, "SetLinkedLobby", 	Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLinkedLobby_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLinkedLobby_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLinkedLobby_Statics::SIK_MatchmakingLibrary_eventSetLinkedLobby_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLinkedLobby_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLinkedLobby_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLinkedLobby_Statics::SIK_MatchmakingLibrary_eventSetLinkedLobby_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLinkedLobby()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLinkedLobby_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_MatchmakingLibrary::execSetLinkedLobby)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_LobbyID);
	P_GET_STRUCT(FSIK_SteamId,Z_Param_DependentLobbyID);
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_MatchmakingLibrary::SetLinkedLobby(Z_Param_LobbyID,Z_Param_DependentLobbyID);
	P_NATIVE_END;
}
// ********** End Class USIK_MatchmakingLibrary Function SetLinkedLobby ****************************

// ********** Begin Class USIK_MatchmakingLibrary Function SetLobbyData ****************************
struct Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyData_Statics
{
	struct SIK_MatchmakingLibrary_eventSetLobbyData_Parms
	{
		FSIK_SteamId LobbyID;
		FString Key;
		FString Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Matchmaking" },
		{ "Comment", "/*\n\x09Sets a lobby data key-value pair.\n\x09@param LobbyID - The Steam ID of the lobby.\n\x09@param Key - The key of the data to set.\n\x09@param Value - The value of the data to set.\n\x09@return - true if successful, false otherwise.\n\x09*/" },
		{ "DisplayName", "Set Lobby Data" },
		{ "Keywords", "SetLobbyData" },
		{ "ModuleRelativePath", "Functions/Matchmaking/SIK_MatchmakingLibrary.h" },
		{ "ToolTip", "Sets a lobby data key-value pair.\n@param LobbyID - The Steam ID of the lobby.\n@param Key - The key of the data to set.\n@param Value - The value of the data to set.\n@return - true if successful, false otherwise." },
	};
#endif // WITH_METADATA

// ********** Begin Function SetLobbyData constinit property declarations **************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetLobbyData constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetLobbyData Property Definitions *************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyData_Statics::NewProp_LobbyID = { "LobbyID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MatchmakingLibrary_eventSetLobbyData_Parms, LobbyID), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyData_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MatchmakingLibrary_eventSetLobbyData_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyData_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MatchmakingLibrary_eventSetLobbyData_Parms, Value), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_MatchmakingLibrary_eventSetLobbyData_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_MatchmakingLibrary_eventSetLobbyData_Parms), &Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyData_Statics::NewProp_LobbyID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyData_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyData_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyData_Statics::PropPointers) < 2048);
// ********** End Function SetLobbyData Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_MatchmakingLibrary, nullptr, "SetLobbyData", 	Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyData_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyData_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyData_Statics::SIK_MatchmakingLibrary_eventSetLobbyData_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyData_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyData_Statics::SIK_MatchmakingLibrary_eventSetLobbyData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_MatchmakingLibrary::execSetLobbyData)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_LobbyID);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_MatchmakingLibrary::SetLobbyData(Z_Param_LobbyID,Z_Param_Key,Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class USIK_MatchmakingLibrary Function SetLobbyData ******************************

// ********** Begin Class USIK_MatchmakingLibrary Function SetLobbyGameServer **********************
struct Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyGameServer_Statics
{
	struct SIK_MatchmakingLibrary_eventSetLobbyGameServer_Parms
	{
		FSIK_SteamId LobbyID;
		FString ServerIP;
		int32 ServerPort;
		FSIK_SteamId SteamID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Matchmaking" },
		{ "Comment", "/*\n\x09Sets the game server information for a lobby.\n\x09@param LobbyID - The Steam ID of the lobby.\n\x09@param ServerIP - The IP address of the game server.\n\x09@param ServerPort - The port of the game server.\n\x09@param SteamID - The Steam ID of the game server.\n\x09*/" },
		{ "DisplayName", "Set Lobby Game Server" },
		{ "Keywords", "SetLobbyGameServer" },
		{ "ModuleRelativePath", "Functions/Matchmaking/SIK_MatchmakingLibrary.h" },
		{ "ToolTip", "Sets the game server information for a lobby.\n@param LobbyID - The Steam ID of the lobby.\n@param ServerIP - The IP address of the game server.\n@param ServerPort - The port of the game server.\n@param SteamID - The Steam ID of the game server." },
	};
#endif // WITH_METADATA

// ********** Begin Function SetLobbyGameServer constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ServerIP;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ServerPort;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetLobbyGameServer constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetLobbyGameServer Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyGameServer_Statics::NewProp_LobbyID = { "LobbyID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MatchmakingLibrary_eventSetLobbyGameServer_Parms, LobbyID), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyGameServer_Statics::NewProp_ServerIP = { "ServerIP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MatchmakingLibrary_eventSetLobbyGameServer_Parms, ServerIP), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyGameServer_Statics::NewProp_ServerPort = { "ServerPort", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MatchmakingLibrary_eventSetLobbyGameServer_Parms, ServerPort), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyGameServer_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MatchmakingLibrary_eventSetLobbyGameServer_Parms, SteamID), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyGameServer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyGameServer_Statics::NewProp_LobbyID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyGameServer_Statics::NewProp_ServerIP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyGameServer_Statics::NewProp_ServerPort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyGameServer_Statics::NewProp_SteamID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyGameServer_Statics::PropPointers) < 2048);
// ********** End Function SetLobbyGameServer Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyGameServer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_MatchmakingLibrary, nullptr, "SetLobbyGameServer", 	Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyGameServer_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyGameServer_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyGameServer_Statics::SIK_MatchmakingLibrary_eventSetLobbyGameServer_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyGameServer_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyGameServer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyGameServer_Statics::SIK_MatchmakingLibrary_eventSetLobbyGameServer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyGameServer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyGameServer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_MatchmakingLibrary::execSetLobbyGameServer)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_LobbyID);
	P_GET_PROPERTY(FStrProperty,Z_Param_ServerIP);
	P_GET_PROPERTY(FIntProperty,Z_Param_ServerPort);
	P_GET_STRUCT(FSIK_SteamId,Z_Param_SteamID);
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_MatchmakingLibrary::SetLobbyGameServer(Z_Param_LobbyID,Z_Param_ServerIP,Z_Param_ServerPort,Z_Param_SteamID);
	P_NATIVE_END;
}
// ********** End Class USIK_MatchmakingLibrary Function SetLobbyGameServer ************************

// ********** Begin Class USIK_MatchmakingLibrary Function SetLobbyJoinable ************************
struct Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyJoinable_Statics
{
	struct SIK_MatchmakingLibrary_eventSetLobbyJoinable_Parms
	{
		FSIK_SteamId LobbyID;
		bool bJoinable;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Matchmaking" },
		{ "Comment", "/*\n\x09Sets whether a lobby is joinable.\n\x09@param LobbyID - The Steam ID of the lobby.\n\x09@param bJoinable - true if the lobby is joinable, false otherwise.\n\x09@return - true if successful, false otherwise.\n\x09*/" },
		{ "DisplayName", "Set Lobby Joinable" },
		{ "Keywords", "SetLobbyJoinable" },
		{ "ModuleRelativePath", "Functions/Matchmaking/SIK_MatchmakingLibrary.h" },
		{ "ToolTip", "Sets whether a lobby is joinable.\n@param LobbyID - The Steam ID of the lobby.\n@param bJoinable - true if the lobby is joinable, false otherwise.\n@return - true if successful, false otherwise." },
	};
#endif // WITH_METADATA

// ********** Begin Function SetLobbyJoinable constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyID;
	static void NewProp_bJoinable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bJoinable;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetLobbyJoinable constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetLobbyJoinable Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyJoinable_Statics::NewProp_LobbyID = { "LobbyID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MatchmakingLibrary_eventSetLobbyJoinable_Parms, LobbyID), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
void Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyJoinable_Statics::NewProp_bJoinable_SetBit(void* Obj)
{
	((SIK_MatchmakingLibrary_eventSetLobbyJoinable_Parms*)Obj)->bJoinable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyJoinable_Statics::NewProp_bJoinable = { "bJoinable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_MatchmakingLibrary_eventSetLobbyJoinable_Parms), &Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyJoinable_Statics::NewProp_bJoinable_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyJoinable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_MatchmakingLibrary_eventSetLobbyJoinable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyJoinable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_MatchmakingLibrary_eventSetLobbyJoinable_Parms), &Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyJoinable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyJoinable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyJoinable_Statics::NewProp_LobbyID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyJoinable_Statics::NewProp_bJoinable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyJoinable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyJoinable_Statics::PropPointers) < 2048);
// ********** End Function SetLobbyJoinable Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyJoinable_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_MatchmakingLibrary, nullptr, "SetLobbyJoinable", 	Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyJoinable_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyJoinable_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyJoinable_Statics::SIK_MatchmakingLibrary_eventSetLobbyJoinable_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyJoinable_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyJoinable_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyJoinable_Statics::SIK_MatchmakingLibrary_eventSetLobbyJoinable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyJoinable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyJoinable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_MatchmakingLibrary::execSetLobbyJoinable)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_LobbyID);
	P_GET_UBOOL(Z_Param_bJoinable);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_MatchmakingLibrary::SetLobbyJoinable(Z_Param_LobbyID,Z_Param_bJoinable);
	P_NATIVE_END;
}
// ********** End Class USIK_MatchmakingLibrary Function SetLobbyJoinable **************************

// ********** Begin Class USIK_MatchmakingLibrary Function SetLobbyMemberData **********************
struct Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyMemberData_Statics
{
	struct SIK_MatchmakingLibrary_eventSetLobbyMemberData_Parms
	{
		FSIK_SteamId LobbyID;
		FString Key;
		FString Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Matchmaking" },
		{ "Comment", "/*\n\x09Sets a lobby member's data key-value pair.\n\x09@param LobbyID - The Steam ID of the lobby.\n\x09@param Key - The key of the data to set.\n\x09@param Value - The value of the data to set.\n\x09*/" },
		{ "DisplayName", "Set Lobby Member Data" },
		{ "Keywords", "SetLobbyMemberData" },
		{ "ModuleRelativePath", "Functions/Matchmaking/SIK_MatchmakingLibrary.h" },
		{ "ToolTip", "Sets a lobby member's data key-value pair.\n@param LobbyID - The Steam ID of the lobby.\n@param Key - The key of the data to set.\n@param Value - The value of the data to set." },
	};
#endif // WITH_METADATA

// ********** Begin Function SetLobbyMemberData constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetLobbyMemberData constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetLobbyMemberData Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyMemberData_Statics::NewProp_LobbyID = { "LobbyID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MatchmakingLibrary_eventSetLobbyMemberData_Parms, LobbyID), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyMemberData_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MatchmakingLibrary_eventSetLobbyMemberData_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyMemberData_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MatchmakingLibrary_eventSetLobbyMemberData_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyMemberData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyMemberData_Statics::NewProp_LobbyID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyMemberData_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyMemberData_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyMemberData_Statics::PropPointers) < 2048);
// ********** End Function SetLobbyMemberData Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyMemberData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_MatchmakingLibrary, nullptr, "SetLobbyMemberData", 	Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyMemberData_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyMemberData_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyMemberData_Statics::SIK_MatchmakingLibrary_eventSetLobbyMemberData_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyMemberData_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyMemberData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyMemberData_Statics::SIK_MatchmakingLibrary_eventSetLobbyMemberData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyMemberData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyMemberData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_MatchmakingLibrary::execSetLobbyMemberData)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_LobbyID);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_MatchmakingLibrary::SetLobbyMemberData(Z_Param_LobbyID,Z_Param_Key,Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class USIK_MatchmakingLibrary Function SetLobbyMemberData ************************

// ********** Begin Class USIK_MatchmakingLibrary Function SetLobbyMemberLimit *********************
struct Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyMemberLimit_Statics
{
	struct SIK_MatchmakingLibrary_eventSetLobbyMemberLimit_Parms
	{
		FSIK_SteamId LobbyID;
		int32 MemberLimit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Matchmaking" },
		{ "Comment", "/*\n\x09Sets the member limit of a lobby.\n\x09@param LobbyID - The Steam ID of the lobby.\n\x09@param MemberLimit - The new member limit.\n\x09*/" },
		{ "DisplayName", "Set Lobby Member Limit" },
		{ "Keywords", "SetLobbyMemberLimit" },
		{ "ModuleRelativePath", "Functions/Matchmaking/SIK_MatchmakingLibrary.h" },
		{ "ToolTip", "Sets the member limit of a lobby.\n@param LobbyID - The Steam ID of the lobby.\n@param MemberLimit - The new member limit." },
	};
#endif // WITH_METADATA

// ********** Begin Function SetLobbyMemberLimit constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MemberLimit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetLobbyMemberLimit constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetLobbyMemberLimit Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyMemberLimit_Statics::NewProp_LobbyID = { "LobbyID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MatchmakingLibrary_eventSetLobbyMemberLimit_Parms, LobbyID), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyMemberLimit_Statics::NewProp_MemberLimit = { "MemberLimit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MatchmakingLibrary_eventSetLobbyMemberLimit_Parms, MemberLimit), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyMemberLimit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyMemberLimit_Statics::NewProp_LobbyID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyMemberLimit_Statics::NewProp_MemberLimit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyMemberLimit_Statics::PropPointers) < 2048);
// ********** End Function SetLobbyMemberLimit Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyMemberLimit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_MatchmakingLibrary, nullptr, "SetLobbyMemberLimit", 	Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyMemberLimit_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyMemberLimit_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyMemberLimit_Statics::SIK_MatchmakingLibrary_eventSetLobbyMemberLimit_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyMemberLimit_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyMemberLimit_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyMemberLimit_Statics::SIK_MatchmakingLibrary_eventSetLobbyMemberLimit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyMemberLimit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyMemberLimit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_MatchmakingLibrary::execSetLobbyMemberLimit)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_LobbyID);
	P_GET_PROPERTY(FIntProperty,Z_Param_MemberLimit);
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_MatchmakingLibrary::SetLobbyMemberLimit(Z_Param_LobbyID,Z_Param_MemberLimit);
	P_NATIVE_END;
}
// ********** End Class USIK_MatchmakingLibrary Function SetLobbyMemberLimit ***********************

// ********** Begin Class USIK_MatchmakingLibrary Function SetLobbyOwner ***************************
struct Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyOwner_Statics
{
	struct SIK_MatchmakingLibrary_eventSetLobbyOwner_Parms
	{
		FSIK_SteamId LobbyID;
		FSIK_SteamId SteamID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Matchmaking" },
		{ "Comment", "/*\n\x09Sets the owner of a lobby.\n\x09@param LobbyID - The Steam ID of the lobby.\n\x09@param SteamID - The Steam ID of the new owner.\n\x09*/" },
		{ "DisplayName", "Set Lobby Owner" },
		{ "Keywords", "SetLobbyOwner" },
		{ "ModuleRelativePath", "Functions/Matchmaking/SIK_MatchmakingLibrary.h" },
		{ "ToolTip", "Sets the owner of a lobby.\n@param LobbyID - The Steam ID of the lobby.\n@param SteamID - The Steam ID of the new owner." },
	};
#endif // WITH_METADATA

// ********** Begin Function SetLobbyOwner constinit property declarations *************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetLobbyOwner constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetLobbyOwner Property Definitions ************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyOwner_Statics::NewProp_LobbyID = { "LobbyID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MatchmakingLibrary_eventSetLobbyOwner_Parms, LobbyID), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyOwner_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MatchmakingLibrary_eventSetLobbyOwner_Parms, SteamID), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyOwner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyOwner_Statics::NewProp_LobbyID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyOwner_Statics::NewProp_SteamID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyOwner_Statics::PropPointers) < 2048);
// ********** End Function SetLobbyOwner Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyOwner_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_MatchmakingLibrary, nullptr, "SetLobbyOwner", 	Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyOwner_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyOwner_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyOwner_Statics::SIK_MatchmakingLibrary_eventSetLobbyOwner_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyOwner_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyOwner_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyOwner_Statics::SIK_MatchmakingLibrary_eventSetLobbyOwner_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyOwner()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyOwner_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_MatchmakingLibrary::execSetLobbyOwner)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_LobbyID);
	P_GET_STRUCT(FSIK_SteamId,Z_Param_SteamID);
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_MatchmakingLibrary::SetLobbyOwner(Z_Param_LobbyID,Z_Param_SteamID);
	P_NATIVE_END;
}
// ********** End Class USIK_MatchmakingLibrary Function SetLobbyOwner *****************************

// ********** Begin Class USIK_MatchmakingLibrary Function SetLobbyType ****************************
struct Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyType_Statics
{
	struct SIK_MatchmakingLibrary_eventSetLobbyType_Parms
	{
		FSIK_SteamId LobbyID;
		TEnumAsByte<ESIK_LobbyType> LobbyType;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Matchmaking" },
		{ "Comment", "/*\n\x09Sets the type of a lobby.\n\x09@param LobbyID - The Steam ID of the lobby.\n\x09@param LobbyType - The new lobby type.\n\x09@return - true if successful, false otherwise.\n\x09*/" },
		{ "DisplayName", "Set Lobby Type" },
		{ "Keywords", "SetLobbyType" },
		{ "ModuleRelativePath", "Functions/Matchmaking/SIK_MatchmakingLibrary.h" },
		{ "ToolTip", "Sets the type of a lobby.\n@param LobbyID - The Steam ID of the lobby.\n@param LobbyType - The new lobby type.\n@return - true if successful, false otherwise." },
	};
#endif // WITH_METADATA

// ********** Begin Function SetLobbyType constinit property declarations **************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LobbyType;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetLobbyType constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetLobbyType Property Definitions *************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyType_Statics::NewProp_LobbyID = { "LobbyID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MatchmakingLibrary_eventSetLobbyType_Parms, LobbyID), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyType_Statics::NewProp_LobbyType = { "LobbyType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MatchmakingLibrary_eventSetLobbyType_Parms, LobbyType), Z_Construct_UEnum_SteamIntegrationKit_ESIK_LobbyType, METADATA_PARAMS(0, nullptr) }; // 3037947807
void Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_MatchmakingLibrary_eventSetLobbyType_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_MatchmakingLibrary_eventSetLobbyType_Parms), &Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyType_Statics::NewProp_LobbyID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyType_Statics::NewProp_LobbyType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyType_Statics::PropPointers) < 2048);
// ********** End Function SetLobbyType Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyType_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_MatchmakingLibrary, nullptr, "SetLobbyType", 	Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyType_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyType_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyType_Statics::SIK_MatchmakingLibrary_eventSetLobbyType_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyType_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyType_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyType_Statics::SIK_MatchmakingLibrary_eventSetLobbyType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_MatchmakingLibrary::execSetLobbyType)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_LobbyID);
	P_GET_PROPERTY(FByteProperty,Z_Param_LobbyType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_MatchmakingLibrary::SetLobbyType(Z_Param_LobbyID,ESIK_LobbyType(Z_Param_LobbyType));
	P_NATIVE_END;
}
// ********** End Class USIK_MatchmakingLibrary Function SetLobbyType ******************************

// ********** Begin Class USIK_MatchmakingLibrary **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_MatchmakingLibrary;
UClass* USIK_MatchmakingLibrary::GetPrivateStaticClass()
{
	using TClass = USIK_MatchmakingLibrary;
	if (!Z_Registration_Info_UClass_USIK_MatchmakingLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_MatchmakingLibrary"),
			Z_Registration_Info_UClass_USIK_MatchmakingLibrary.InnerSingleton,
			StaticRegisterNativesUSIK_MatchmakingLibrary,
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
	return Z_Registration_Info_UClass_USIK_MatchmakingLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_MatchmakingLibrary_NoRegister()
{
	return USIK_MatchmakingLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_MatchmakingLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/Matchmaking/SIK_MatchmakingLibrary.h" },
		{ "ModuleRelativePath", "Functions/Matchmaking/SIK_MatchmakingLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_MatchmakingLibrary constinit property declarations ******************
// ********** End Class USIK_MatchmakingLibrary constinit property declarations ********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AddFavoriteGame"), .Pointer = &USIK_MatchmakingLibrary::execAddFavoriteGame },
		{ .NameUTF8 = UTF8TEXT("AddRequestLobbyListCompatibleMembersFilter"), .Pointer = &USIK_MatchmakingLibrary::execAddRequestLobbyListCompatibleMembersFilter },
		{ .NameUTF8 = UTF8TEXT("AddRequestLobbyListDistanceFilter"), .Pointer = &USIK_MatchmakingLibrary::execAddRequestLobbyListDistanceFilter },
		{ .NameUTF8 = UTF8TEXT("AddRequestLobbyListFilterSlotsAvailable"), .Pointer = &USIK_MatchmakingLibrary::execAddRequestLobbyListFilterSlotsAvailable },
		{ .NameUTF8 = UTF8TEXT("AddRequestLobbyListNearValueFilter"), .Pointer = &USIK_MatchmakingLibrary::execAddRequestLobbyListNearValueFilter },
		{ .NameUTF8 = UTF8TEXT("AddRequestLobbyListNumericalFilter"), .Pointer = &USIK_MatchmakingLibrary::execAddRequestLobbyListNumericalFilter },
		{ .NameUTF8 = UTF8TEXT("AddRequestLobbyListResultCountFilter"), .Pointer = &USIK_MatchmakingLibrary::execAddRequestLobbyListResultCountFilter },
		{ .NameUTF8 = UTF8TEXT("AddRequestLobbyListStringFilter"), .Pointer = &USIK_MatchmakingLibrary::execAddRequestLobbyListStringFilter },
		{ .NameUTF8 = UTF8TEXT("DeleteLobbyData"), .Pointer = &USIK_MatchmakingLibrary::execDeleteLobbyData },
		{ .NameUTF8 = UTF8TEXT("GetFavoriteGame"), .Pointer = &USIK_MatchmakingLibrary::execGetFavoriteGame },
		{ .NameUTF8 = UTF8TEXT("GetFavoriteGameCount"), .Pointer = &USIK_MatchmakingLibrary::execGetFavoriteGameCount },
		{ .NameUTF8 = UTF8TEXT("GetLobbyByIndex"), .Pointer = &USIK_MatchmakingLibrary::execGetLobbyByIndex },
		{ .NameUTF8 = UTF8TEXT("GetLobbyChatEntry"), .Pointer = &USIK_MatchmakingLibrary::execGetLobbyChatEntry },
		{ .NameUTF8 = UTF8TEXT("GetLobbyData"), .Pointer = &USIK_MatchmakingLibrary::execGetLobbyData },
		{ .NameUTF8 = UTF8TEXT("GetLobbyDataByIndex"), .Pointer = &USIK_MatchmakingLibrary::execGetLobbyDataByIndex },
		{ .NameUTF8 = UTF8TEXT("GetLobbyDataCount"), .Pointer = &USIK_MatchmakingLibrary::execGetLobbyDataCount },
		{ .NameUTF8 = UTF8TEXT("GetLobbyGameServer"), .Pointer = &USIK_MatchmakingLibrary::execGetLobbyGameServer },
		{ .NameUTF8 = UTF8TEXT("GetLobbyMemberByIndex"), .Pointer = &USIK_MatchmakingLibrary::execGetLobbyMemberByIndex },
		{ .NameUTF8 = UTF8TEXT("GetLobbyMemberData"), .Pointer = &USIK_MatchmakingLibrary::execGetLobbyMemberData },
		{ .NameUTF8 = UTF8TEXT("GetLobbyMemberLimit"), .Pointer = &USIK_MatchmakingLibrary::execGetLobbyMemberLimit },
		{ .NameUTF8 = UTF8TEXT("GetLobbyOwner"), .Pointer = &USIK_MatchmakingLibrary::execGetLobbyOwner },
		{ .NameUTF8 = UTF8TEXT("GetNumLobbyMembers"), .Pointer = &USIK_MatchmakingLibrary::execGetNumLobbyMembers },
		{ .NameUTF8 = UTF8TEXT("InviteUserToLobby"), .Pointer = &USIK_MatchmakingLibrary::execInviteUserToLobby },
		{ .NameUTF8 = UTF8TEXT("LeaveLobby"), .Pointer = &USIK_MatchmakingLibrary::execLeaveLobby },
		{ .NameUTF8 = UTF8TEXT("RemoveFavoriteGame"), .Pointer = &USIK_MatchmakingLibrary::execRemoveFavoriteGame },
		{ .NameUTF8 = UTF8TEXT("RequestLobbyData"), .Pointer = &USIK_MatchmakingLibrary::execRequestLobbyData },
		{ .NameUTF8 = UTF8TEXT("SendLobbyChatMessage"), .Pointer = &USIK_MatchmakingLibrary::execSendLobbyChatMessage },
		{ .NameUTF8 = UTF8TEXT("SetLinkedLobby"), .Pointer = &USIK_MatchmakingLibrary::execSetLinkedLobby },
		{ .NameUTF8 = UTF8TEXT("SetLobbyData"), .Pointer = &USIK_MatchmakingLibrary::execSetLobbyData },
		{ .NameUTF8 = UTF8TEXT("SetLobbyGameServer"), .Pointer = &USIK_MatchmakingLibrary::execSetLobbyGameServer },
		{ .NameUTF8 = UTF8TEXT("SetLobbyJoinable"), .Pointer = &USIK_MatchmakingLibrary::execSetLobbyJoinable },
		{ .NameUTF8 = UTF8TEXT("SetLobbyMemberData"), .Pointer = &USIK_MatchmakingLibrary::execSetLobbyMemberData },
		{ .NameUTF8 = UTF8TEXT("SetLobbyMemberLimit"), .Pointer = &USIK_MatchmakingLibrary::execSetLobbyMemberLimit },
		{ .NameUTF8 = UTF8TEXT("SetLobbyOwner"), .Pointer = &USIK_MatchmakingLibrary::execSetLobbyOwner },
		{ .NameUTF8 = UTF8TEXT("SetLobbyType"), .Pointer = &USIK_MatchmakingLibrary::execSetLobbyType },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_MatchmakingLibrary_AddFavoriteGame, "AddFavoriteGame" }, // 804116665
		{ &Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListCompatibleMembersFilter, "AddRequestLobbyListCompatibleMembersFilter" }, // 1614349775
		{ &Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListDistanceFilter, "AddRequestLobbyListDistanceFilter" }, // 2802037004
		{ &Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListFilterSlotsAvailable, "AddRequestLobbyListFilterSlotsAvailable" }, // 1963034015
		{ &Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListNearValueFilter, "AddRequestLobbyListNearValueFilter" }, // 535767752
		{ &Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListNumericalFilter, "AddRequestLobbyListNumericalFilter" }, // 1063647008
		{ &Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListResultCountFilter, "AddRequestLobbyListResultCountFilter" }, // 865708561
		{ &Z_Construct_UFunction_USIK_MatchmakingLibrary_AddRequestLobbyListStringFilter, "AddRequestLobbyListStringFilter" }, // 1513073978
		{ &Z_Construct_UFunction_USIK_MatchmakingLibrary_DeleteLobbyData, "DeleteLobbyData" }, // 2086359734
		{ &Z_Construct_UFunction_USIK_MatchmakingLibrary_GetFavoriteGame, "GetFavoriteGame" }, // 2198609995
		{ &Z_Construct_UFunction_USIK_MatchmakingLibrary_GetFavoriteGameCount, "GetFavoriteGameCount" }, // 2603078695
		{ &Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyByIndex, "GetLobbyByIndex" }, // 2483936777
		{ &Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyChatEntry, "GetLobbyChatEntry" }, // 1045804777
		{ &Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyData, "GetLobbyData" }, // 2202352131
		{ &Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyDataByIndex, "GetLobbyDataByIndex" }, // 2523806041
		{ &Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyDataCount, "GetLobbyDataCount" }, // 2216528401
		{ &Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyGameServer, "GetLobbyGameServer" }, // 2348584243
		{ &Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyMemberByIndex, "GetLobbyMemberByIndex" }, // 2524643355
		{ &Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyMemberData, "GetLobbyMemberData" }, // 3001936713
		{ &Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyMemberLimit, "GetLobbyMemberLimit" }, // 497671686
		{ &Z_Construct_UFunction_USIK_MatchmakingLibrary_GetLobbyOwner, "GetLobbyOwner" }, // 2844708022
		{ &Z_Construct_UFunction_USIK_MatchmakingLibrary_GetNumLobbyMembers, "GetNumLobbyMembers" }, // 1151003288
		{ &Z_Construct_UFunction_USIK_MatchmakingLibrary_InviteUserToLobby, "InviteUserToLobby" }, // 1674926665
		{ &Z_Construct_UFunction_USIK_MatchmakingLibrary_LeaveLobby, "LeaveLobby" }, // 4097967030
		{ &Z_Construct_UFunction_USIK_MatchmakingLibrary_RemoveFavoriteGame, "RemoveFavoriteGame" }, // 2649844244
		{ &Z_Construct_UFunction_USIK_MatchmakingLibrary_RequestLobbyData, "RequestLobbyData" }, // 4096072575
		{ &Z_Construct_UFunction_USIK_MatchmakingLibrary_SendLobbyChatMessage, "SendLobbyChatMessage" }, // 3801738261
		{ &Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLinkedLobby, "SetLinkedLobby" }, // 2030211733
		{ &Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyData, "SetLobbyData" }, // 1754362951
		{ &Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyGameServer, "SetLobbyGameServer" }, // 175772100
		{ &Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyJoinable, "SetLobbyJoinable" }, // 1887887459
		{ &Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyMemberData, "SetLobbyMemberData" }, // 3535118154
		{ &Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyMemberLimit, "SetLobbyMemberLimit" }, // 4198088394
		{ &Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyOwner, "SetLobbyOwner" }, // 614527265
		{ &Z_Construct_UFunction_USIK_MatchmakingLibrary_SetLobbyType, "SetLobbyType" }, // 285155576
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_MatchmakingLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_MatchmakingLibrary_Statics
UObject* (*const Z_Construct_UClass_USIK_MatchmakingLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_MatchmakingLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_MatchmakingLibrary_Statics::ClassParams = {
	&USIK_MatchmakingLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_MatchmakingLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_MatchmakingLibrary_Statics::Class_MetaDataParams)
};
void USIK_MatchmakingLibrary::StaticRegisterNativesUSIK_MatchmakingLibrary()
{
	UClass* Class = USIK_MatchmakingLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_MatchmakingLibrary_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_MatchmakingLibrary()
{
	if (!Z_Registration_Info_UClass_USIK_MatchmakingLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_MatchmakingLibrary.OuterSingleton, Z_Construct_UClass_USIK_MatchmakingLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_MatchmakingLibrary.OuterSingleton;
}
USIK_MatchmakingLibrary::USIK_MatchmakingLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_MatchmakingLibrary);
USIK_MatchmakingLibrary::~USIK_MatchmakingLibrary() {}
// ********** End Class USIK_MatchmakingLibrary ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Matchmaking_SIK_MatchmakingLibrary_h__Script_SteamIntegrationKit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_MatchmakingLibrary, USIK_MatchmakingLibrary::StaticClass, TEXT("USIK_MatchmakingLibrary"), &Z_Registration_Info_UClass_USIK_MatchmakingLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_MatchmakingLibrary), 1649986738U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Matchmaking_SIK_MatchmakingLibrary_h__Script_SteamIntegrationKit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Matchmaking_SIK_MatchmakingLibrary_h__Script_SteamIntegrationKit_1429825748{
	TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Matchmaking_SIK_MatchmakingLibrary_h__Script_SteamIntegrationKit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Matchmaking_SIK_MatchmakingLibrary_h__Script_SteamIntegrationKit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
