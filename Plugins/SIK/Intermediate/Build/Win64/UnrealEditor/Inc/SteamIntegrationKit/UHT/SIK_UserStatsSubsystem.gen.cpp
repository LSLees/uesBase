// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/UserStats/SIK_UserStatsSubsystem.h"
#include "Engine/GameInstance.h"
#include "SIK_SharedFile.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_UserStatsSubsystem() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_UserStatsSubsystem();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_UserStatsSubsystem_NoRegister();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGlobalAchievementPercentagesReady__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGlobalStatsReceived__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLeaderboardFindResult__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLeaderboardScoresDownloaded__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLeaderboardScoreUploaded__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnNumberOfCurrentPlayers__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserAchievementIconFetched__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserAchievementStored__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserStatsReceived__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserStatsStored__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserStatsUnloaded__DelegateSignature();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_SteamId();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_SteamLeaderboard();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_SteamLeaderboardEntries();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnGlobalAchievementPercentagesReady **********************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGlobalAchievementPercentagesReady__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnGlobalAchievementPercentagesReady_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
		int64 GameID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/UserStats/SIK_UserStatsSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnGlobalAchievementPercentagesReady constinit property declarations **
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_GameID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnGlobalAchievementPercentagesReady constinit property declarations ****
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnGlobalAchievementPercentagesReady Property Definitions *************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGlobalAchievementPercentagesReady__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnGlobalAchievementPercentagesReady_Parms, Result), Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result, METADATA_PARAMS(0, nullptr) }; // 655382749
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGlobalAchievementPercentagesReady__DelegateSignature_Statics::NewProp_GameID = { "GameID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnGlobalAchievementPercentagesReady_Parms, GameID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGlobalAchievementPercentagesReady__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGlobalAchievementPercentagesReady__DelegateSignature_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGlobalAchievementPercentagesReady__DelegateSignature_Statics::NewProp_GameID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGlobalAchievementPercentagesReady__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnGlobalAchievementPercentagesReady Property Definitions ***************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGlobalAchievementPercentagesReady__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnGlobalAchievementPercentagesReady__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGlobalAchievementPercentagesReady__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGlobalAchievementPercentagesReady__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGlobalAchievementPercentagesReady__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnGlobalAchievementPercentagesReady_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGlobalAchievementPercentagesReady__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGlobalAchievementPercentagesReady__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGlobalAchievementPercentagesReady__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnGlobalAchievementPercentagesReady_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGlobalAchievementPercentagesReady__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGlobalAchievementPercentagesReady__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGlobalAchievementPercentagesReady_DelegateWrapper(const FMulticastScriptDelegate& OnGlobalAchievementPercentagesReady, ESIK_Result Result, int64 GameID)
{
	struct _Script_SteamIntegrationKit_eventOnGlobalAchievementPercentagesReady_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
		int64 GameID;
	};
	_Script_SteamIntegrationKit_eventOnGlobalAchievementPercentagesReady_Parms Parms;
	Parms.Result=Result;
	Parms.GameID=GameID;
	OnGlobalAchievementPercentagesReady.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnGlobalAchievementPercentagesReady ************************************

// ********** Begin Delegate FOnGlobalStatsReceived ************************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGlobalStatsReceived__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnGlobalStatsReceived_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
		int64 GameID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/UserStats/SIK_UserStatsSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnGlobalStatsReceived constinit property declarations ****************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_GameID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnGlobalStatsReceived constinit property declarations ******************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnGlobalStatsReceived Property Definitions ***************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGlobalStatsReceived__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnGlobalStatsReceived_Parms, Result), Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result, METADATA_PARAMS(0, nullptr) }; // 655382749
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGlobalStatsReceived__DelegateSignature_Statics::NewProp_GameID = { "GameID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnGlobalStatsReceived_Parms, GameID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGlobalStatsReceived__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGlobalStatsReceived__DelegateSignature_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGlobalStatsReceived__DelegateSignature_Statics::NewProp_GameID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGlobalStatsReceived__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnGlobalStatsReceived Property Definitions *****************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGlobalStatsReceived__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnGlobalStatsReceived__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGlobalStatsReceived__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGlobalStatsReceived__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGlobalStatsReceived__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnGlobalStatsReceived_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGlobalStatsReceived__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGlobalStatsReceived__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGlobalStatsReceived__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnGlobalStatsReceived_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGlobalStatsReceived__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGlobalStatsReceived__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGlobalStatsReceived_DelegateWrapper(const FMulticastScriptDelegate& OnGlobalStatsReceived, ESIK_Result Result, int64 GameID)
{
	struct _Script_SteamIntegrationKit_eventOnGlobalStatsReceived_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
		int64 GameID;
	};
	_Script_SteamIntegrationKit_eventOnGlobalStatsReceived_Parms Parms;
	Parms.Result=Result;
	Parms.GameID=GameID;
	OnGlobalStatsReceived.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnGlobalStatsReceived **************************************************

// ********** Begin Delegate FOnLeaderboardFindResult **********************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLeaderboardFindResult__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnLeaderboardFindResult_Parms
	{
		FSIK_SteamLeaderboard Leaderboard;
		bool bLeaderboardFound;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/UserStats/SIK_UserStatsSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnLeaderboardFindResult constinit property declarations **************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Leaderboard;
	static void NewProp_bLeaderboardFound_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLeaderboardFound;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnLeaderboardFindResult constinit property declarations ****************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnLeaderboardFindResult Property Definitions *************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLeaderboardFindResult__DelegateSignature_Statics::NewProp_Leaderboard = { "Leaderboard", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnLeaderboardFindResult_Parms, Leaderboard), Z_Construct_UScriptStruct_FSIK_SteamLeaderboard, METADATA_PARAMS(0, nullptr) }; // 705236842
void Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLeaderboardFindResult__DelegateSignature_Statics::NewProp_bLeaderboardFound_SetBit(void* Obj)
{
	((_Script_SteamIntegrationKit_eventOnLeaderboardFindResult_Parms*)Obj)->bLeaderboardFound = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLeaderboardFindResult__DelegateSignature_Statics::NewProp_bLeaderboardFound = { "bLeaderboardFound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamIntegrationKit_eventOnLeaderboardFindResult_Parms), &Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLeaderboardFindResult__DelegateSignature_Statics::NewProp_bLeaderboardFound_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLeaderboardFindResult__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLeaderboardFindResult__DelegateSignature_Statics::NewProp_Leaderboard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLeaderboardFindResult__DelegateSignature_Statics::NewProp_bLeaderboardFound,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLeaderboardFindResult__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnLeaderboardFindResult Property Definitions ***************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLeaderboardFindResult__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnLeaderboardFindResult__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLeaderboardFindResult__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLeaderboardFindResult__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLeaderboardFindResult__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnLeaderboardFindResult_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLeaderboardFindResult__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLeaderboardFindResult__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLeaderboardFindResult__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnLeaderboardFindResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLeaderboardFindResult__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLeaderboardFindResult__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnLeaderboardFindResult_DelegateWrapper(const FMulticastScriptDelegate& OnLeaderboardFindResult, FSIK_SteamLeaderboard Leaderboard, bool bLeaderboardFound)
{
	struct _Script_SteamIntegrationKit_eventOnLeaderboardFindResult_Parms
	{
		FSIK_SteamLeaderboard Leaderboard;
		bool bLeaderboardFound;
	};
	_Script_SteamIntegrationKit_eventOnLeaderboardFindResult_Parms Parms;
	Parms.Leaderboard=Leaderboard;
	Parms.bLeaderboardFound=bLeaderboardFound ? true : false;
	OnLeaderboardFindResult.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnLeaderboardFindResult ************************************************

// ********** Begin Delegate FOnLeaderboardScoresDownloaded ****************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLeaderboardScoresDownloaded__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnLeaderboardScoresDownloaded_Parms
	{
		FSIK_SteamLeaderboard Leaderboard;
		FSIK_SteamLeaderboardEntries Entries;
		int32 EntryCount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/UserStats/SIK_UserStatsSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnLeaderboardScoresDownloaded constinit property declarations ********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Leaderboard;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Entries;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EntryCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnLeaderboardScoresDownloaded constinit property declarations **********
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnLeaderboardScoresDownloaded Property Definitions *******************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLeaderboardScoresDownloaded__DelegateSignature_Statics::NewProp_Leaderboard = { "Leaderboard", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnLeaderboardScoresDownloaded_Parms, Leaderboard), Z_Construct_UScriptStruct_FSIK_SteamLeaderboard, METADATA_PARAMS(0, nullptr) }; // 705236842
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLeaderboardScoresDownloaded__DelegateSignature_Statics::NewProp_Entries = { "Entries", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnLeaderboardScoresDownloaded_Parms, Entries), Z_Construct_UScriptStruct_FSIK_SteamLeaderboardEntries, METADATA_PARAMS(0, nullptr) }; // 664868781
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLeaderboardScoresDownloaded__DelegateSignature_Statics::NewProp_EntryCount = { "EntryCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnLeaderboardScoresDownloaded_Parms, EntryCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLeaderboardScoresDownloaded__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLeaderboardScoresDownloaded__DelegateSignature_Statics::NewProp_Leaderboard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLeaderboardScoresDownloaded__DelegateSignature_Statics::NewProp_Entries,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLeaderboardScoresDownloaded__DelegateSignature_Statics::NewProp_EntryCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLeaderboardScoresDownloaded__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnLeaderboardScoresDownloaded Property Definitions *********************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLeaderboardScoresDownloaded__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnLeaderboardScoresDownloaded__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLeaderboardScoresDownloaded__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLeaderboardScoresDownloaded__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLeaderboardScoresDownloaded__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnLeaderboardScoresDownloaded_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLeaderboardScoresDownloaded__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLeaderboardScoresDownloaded__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLeaderboardScoresDownloaded__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnLeaderboardScoresDownloaded_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLeaderboardScoresDownloaded__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLeaderboardScoresDownloaded__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnLeaderboardScoresDownloaded_DelegateWrapper(const FMulticastScriptDelegate& OnLeaderboardScoresDownloaded, FSIK_SteamLeaderboard Leaderboard, FSIK_SteamLeaderboardEntries Entries, int32 EntryCount)
{
	struct _Script_SteamIntegrationKit_eventOnLeaderboardScoresDownloaded_Parms
	{
		FSIK_SteamLeaderboard Leaderboard;
		FSIK_SteamLeaderboardEntries Entries;
		int32 EntryCount;
	};
	_Script_SteamIntegrationKit_eventOnLeaderboardScoresDownloaded_Parms Parms;
	Parms.Leaderboard=Leaderboard;
	Parms.Entries=Entries;
	Parms.EntryCount=EntryCount;
	OnLeaderboardScoresDownloaded.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnLeaderboardScoresDownloaded ******************************************

// ********** Begin Delegate FOnLeaderboardScoreUploaded *******************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLeaderboardScoreUploaded__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnLeaderboardScoreUploaded_Parms
	{
		bool bSuccess;
		FSIK_SteamLeaderboard Leaderboard;
		int32 Score;
		bool bScoreChanged;
		int32 GlobalRank;
		int32 PreviousGlobalRank;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/UserStats/SIK_UserStatsSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnLeaderboardScoreUploaded constinit property declarations ***********
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Leaderboard;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Score;
	static void NewProp_bScoreChanged_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bScoreChanged;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GlobalRank;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PreviousGlobalRank;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnLeaderboardScoreUploaded constinit property declarations *************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnLeaderboardScoreUploaded Property Definitions **********************
void Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLeaderboardScoreUploaded__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((_Script_SteamIntegrationKit_eventOnLeaderboardScoreUploaded_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLeaderboardScoreUploaded__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamIntegrationKit_eventOnLeaderboardScoreUploaded_Parms), &Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLeaderboardScoreUploaded__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLeaderboardScoreUploaded__DelegateSignature_Statics::NewProp_Leaderboard = { "Leaderboard", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnLeaderboardScoreUploaded_Parms, Leaderboard), Z_Construct_UScriptStruct_FSIK_SteamLeaderboard, METADATA_PARAMS(0, nullptr) }; // 705236842
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLeaderboardScoreUploaded__DelegateSignature_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnLeaderboardScoreUploaded_Parms, Score), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLeaderboardScoreUploaded__DelegateSignature_Statics::NewProp_bScoreChanged_SetBit(void* Obj)
{
	((_Script_SteamIntegrationKit_eventOnLeaderboardScoreUploaded_Parms*)Obj)->bScoreChanged = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLeaderboardScoreUploaded__DelegateSignature_Statics::NewProp_bScoreChanged = { "bScoreChanged", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamIntegrationKit_eventOnLeaderboardScoreUploaded_Parms), &Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLeaderboardScoreUploaded__DelegateSignature_Statics::NewProp_bScoreChanged_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLeaderboardScoreUploaded__DelegateSignature_Statics::NewProp_GlobalRank = { "GlobalRank", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnLeaderboardScoreUploaded_Parms, GlobalRank), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLeaderboardScoreUploaded__DelegateSignature_Statics::NewProp_PreviousGlobalRank = { "PreviousGlobalRank", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnLeaderboardScoreUploaded_Parms, PreviousGlobalRank), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLeaderboardScoreUploaded__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLeaderboardScoreUploaded__DelegateSignature_Statics::NewProp_bSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLeaderboardScoreUploaded__DelegateSignature_Statics::NewProp_Leaderboard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLeaderboardScoreUploaded__DelegateSignature_Statics::NewProp_Score,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLeaderboardScoreUploaded__DelegateSignature_Statics::NewProp_bScoreChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLeaderboardScoreUploaded__DelegateSignature_Statics::NewProp_GlobalRank,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLeaderboardScoreUploaded__DelegateSignature_Statics::NewProp_PreviousGlobalRank,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLeaderboardScoreUploaded__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnLeaderboardScoreUploaded Property Definitions ************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLeaderboardScoreUploaded__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnLeaderboardScoreUploaded__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLeaderboardScoreUploaded__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLeaderboardScoreUploaded__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLeaderboardScoreUploaded__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnLeaderboardScoreUploaded_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLeaderboardScoreUploaded__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLeaderboardScoreUploaded__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLeaderboardScoreUploaded__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnLeaderboardScoreUploaded_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLeaderboardScoreUploaded__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLeaderboardScoreUploaded__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnLeaderboardScoreUploaded_DelegateWrapper(const FMulticastScriptDelegate& OnLeaderboardScoreUploaded, bool bSuccess, FSIK_SteamLeaderboard Leaderboard, int32 Score, bool bScoreChanged, int32 GlobalRank, int32 PreviousGlobalRank)
{
	struct _Script_SteamIntegrationKit_eventOnLeaderboardScoreUploaded_Parms
	{
		bool bSuccess;
		FSIK_SteamLeaderboard Leaderboard;
		int32 Score;
		bool bScoreChanged;
		int32 GlobalRank;
		int32 PreviousGlobalRank;
	};
	_Script_SteamIntegrationKit_eventOnLeaderboardScoreUploaded_Parms Parms;
	Parms.bSuccess=bSuccess ? true : false;
	Parms.Leaderboard=Leaderboard;
	Parms.Score=Score;
	Parms.bScoreChanged=bScoreChanged ? true : false;
	Parms.GlobalRank=GlobalRank;
	Parms.PreviousGlobalRank=PreviousGlobalRank;
	OnLeaderboardScoreUploaded.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnLeaderboardScoreUploaded *********************************************

// ********** Begin Delegate FOnNumberOfCurrentPlayers *********************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnNumberOfCurrentPlayers__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnNumberOfCurrentPlayers_Parms
	{
		int32 NumberOfPlayers;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/UserStats/SIK_UserStatsSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnNumberOfCurrentPlayers constinit property declarations *************
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfPlayers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnNumberOfCurrentPlayers constinit property declarations ***************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnNumberOfCurrentPlayers Property Definitions ************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnNumberOfCurrentPlayers__DelegateSignature_Statics::NewProp_NumberOfPlayers = { "NumberOfPlayers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnNumberOfCurrentPlayers_Parms, NumberOfPlayers), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnNumberOfCurrentPlayers__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnNumberOfCurrentPlayers__DelegateSignature_Statics::NewProp_NumberOfPlayers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnNumberOfCurrentPlayers__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnNumberOfCurrentPlayers Property Definitions **************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnNumberOfCurrentPlayers__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnNumberOfCurrentPlayers__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_OnNumberOfCurrentPlayers__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnNumberOfCurrentPlayers__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnNumberOfCurrentPlayers__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnNumberOfCurrentPlayers_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnNumberOfCurrentPlayers__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnNumberOfCurrentPlayers__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnNumberOfCurrentPlayers__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnNumberOfCurrentPlayers_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnNumberOfCurrentPlayers__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnNumberOfCurrentPlayers__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnNumberOfCurrentPlayers_DelegateWrapper(const FMulticastScriptDelegate& OnNumberOfCurrentPlayers, int32 NumberOfPlayers)
{
	struct _Script_SteamIntegrationKit_eventOnNumberOfCurrentPlayers_Parms
	{
		int32 NumberOfPlayers;
	};
	_Script_SteamIntegrationKit_eventOnNumberOfCurrentPlayers_Parms Parms;
	Parms.NumberOfPlayers=NumberOfPlayers;
	OnNumberOfCurrentPlayers.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnNumberOfCurrentPlayers ***********************************************

// ********** Begin Delegate FOnUserAchievementIconFetched *****************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserAchievementIconFetched__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnUserAchievementIconFetched_Parms
	{
		int32 Gameid;
		FString AchievementName;
		bool bIconFound;
		int32 IconHandle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/UserStats/SIK_UserStatsSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnUserAchievementIconFetched constinit property declarations *********
	static const UECodeGen_Private::FIntPropertyParams NewProp_Gameid;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AchievementName;
	static void NewProp_bIconFound_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIconFound;
	static const UECodeGen_Private::FIntPropertyParams NewProp_IconHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnUserAchievementIconFetched constinit property declarations ***********
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnUserAchievementIconFetched Property Definitions ********************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserAchievementIconFetched__DelegateSignature_Statics::NewProp_Gameid = { "Gameid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnUserAchievementIconFetched_Parms, Gameid), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserAchievementIconFetched__DelegateSignature_Statics::NewProp_AchievementName = { "AchievementName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnUserAchievementIconFetched_Parms, AchievementName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserAchievementIconFetched__DelegateSignature_Statics::NewProp_bIconFound_SetBit(void* Obj)
{
	((_Script_SteamIntegrationKit_eventOnUserAchievementIconFetched_Parms*)Obj)->bIconFound = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserAchievementIconFetched__DelegateSignature_Statics::NewProp_bIconFound = { "bIconFound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamIntegrationKit_eventOnUserAchievementIconFetched_Parms), &Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserAchievementIconFetched__DelegateSignature_Statics::NewProp_bIconFound_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserAchievementIconFetched__DelegateSignature_Statics::NewProp_IconHandle = { "IconHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnUserAchievementIconFetched_Parms, IconHandle), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserAchievementIconFetched__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserAchievementIconFetched__DelegateSignature_Statics::NewProp_Gameid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserAchievementIconFetched__DelegateSignature_Statics::NewProp_AchievementName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserAchievementIconFetched__DelegateSignature_Statics::NewProp_bIconFound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserAchievementIconFetched__DelegateSignature_Statics::NewProp_IconHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserAchievementIconFetched__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnUserAchievementIconFetched Property Definitions **********************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserAchievementIconFetched__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnUserAchievementIconFetched__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserAchievementIconFetched__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserAchievementIconFetched__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserAchievementIconFetched__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnUserAchievementIconFetched_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserAchievementIconFetched__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserAchievementIconFetched__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserAchievementIconFetched__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnUserAchievementIconFetched_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserAchievementIconFetched__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserAchievementIconFetched__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnUserAchievementIconFetched_DelegateWrapper(const FMulticastScriptDelegate& OnUserAchievementIconFetched, int32 Gameid, const FString& AchievementName, bool bIconFound, int32 IconHandle)
{
	struct _Script_SteamIntegrationKit_eventOnUserAchievementIconFetched_Parms
	{
		int32 Gameid;
		FString AchievementName;
		bool bIconFound;
		int32 IconHandle;
	};
	_Script_SteamIntegrationKit_eventOnUserAchievementIconFetched_Parms Parms;
	Parms.Gameid=Gameid;
	Parms.AchievementName=AchievementName;
	Parms.bIconFound=bIconFound ? true : false;
	Parms.IconHandle=IconHandle;
	OnUserAchievementIconFetched.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnUserAchievementIconFetched *******************************************

// ********** Begin Delegate FOnUserAchievementStored **********************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserAchievementStored__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnUserAchievementStored_Parms
	{
		int64 GameID;
		bool bGroupAchievement;
		FString AchievementName;
		int32 CurProgress;
		int32 MaxProgress;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/UserStats/SIK_UserStatsSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnUserAchievementStored constinit property declarations **************
	static const UECodeGen_Private::FInt64PropertyParams NewProp_GameID;
	static void NewProp_bGroupAchievement_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGroupAchievement;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AchievementName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurProgress;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxProgress;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnUserAchievementStored constinit property declarations ****************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnUserAchievementStored Property Definitions *************************
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserAchievementStored__DelegateSignature_Statics::NewProp_GameID = { "GameID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnUserAchievementStored_Parms, GameID), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserAchievementStored__DelegateSignature_Statics::NewProp_bGroupAchievement_SetBit(void* Obj)
{
	((_Script_SteamIntegrationKit_eventOnUserAchievementStored_Parms*)Obj)->bGroupAchievement = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserAchievementStored__DelegateSignature_Statics::NewProp_bGroupAchievement = { "bGroupAchievement", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamIntegrationKit_eventOnUserAchievementStored_Parms), &Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserAchievementStored__DelegateSignature_Statics::NewProp_bGroupAchievement_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserAchievementStored__DelegateSignature_Statics::NewProp_AchievementName = { "AchievementName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnUserAchievementStored_Parms, AchievementName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserAchievementStored__DelegateSignature_Statics::NewProp_CurProgress = { "CurProgress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnUserAchievementStored_Parms, CurProgress), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserAchievementStored__DelegateSignature_Statics::NewProp_MaxProgress = { "MaxProgress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnUserAchievementStored_Parms, MaxProgress), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserAchievementStored__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserAchievementStored__DelegateSignature_Statics::NewProp_GameID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserAchievementStored__DelegateSignature_Statics::NewProp_bGroupAchievement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserAchievementStored__DelegateSignature_Statics::NewProp_AchievementName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserAchievementStored__DelegateSignature_Statics::NewProp_CurProgress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserAchievementStored__DelegateSignature_Statics::NewProp_MaxProgress,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserAchievementStored__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnUserAchievementStored Property Definitions ***************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserAchievementStored__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnUserAchievementStored__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserAchievementStored__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserAchievementStored__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserAchievementStored__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnUserAchievementStored_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserAchievementStored__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserAchievementStored__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserAchievementStored__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnUserAchievementStored_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserAchievementStored__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserAchievementStored__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnUserAchievementStored_DelegateWrapper(const FMulticastScriptDelegate& OnUserAchievementStored, int64 GameID, bool bGroupAchievement, const FString& AchievementName, int32 CurProgress, int32 MaxProgress)
{
	struct _Script_SteamIntegrationKit_eventOnUserAchievementStored_Parms
	{
		int64 GameID;
		bool bGroupAchievement;
		FString AchievementName;
		int32 CurProgress;
		int32 MaxProgress;
	};
	_Script_SteamIntegrationKit_eventOnUserAchievementStored_Parms Parms;
	Parms.GameID=GameID;
	Parms.bGroupAchievement=bGroupAchievement ? true : false;
	Parms.AchievementName=AchievementName;
	Parms.CurProgress=CurProgress;
	Parms.MaxProgress=MaxProgress;
	OnUserAchievementStored.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnUserAchievementStored ************************************************

// ********** Begin Delegate FOnUserStatsReceived **************************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserStatsReceived__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnUserStatsReceived_Parms
	{
		int64 GameID;
		TEnumAsByte<ESIK_Result> Result;
		FSIK_SteamId steamIDUser;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/UserStats/SIK_UserStatsSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnUserStatsReceived constinit property declarations ******************
	static const UECodeGen_Private::FInt64PropertyParams NewProp_GameID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_steamIDUser;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnUserStatsReceived constinit property declarations ********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnUserStatsReceived Property Definitions *****************************
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserStatsReceived__DelegateSignature_Statics::NewProp_GameID = { "GameID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnUserStatsReceived_Parms, GameID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserStatsReceived__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnUserStatsReceived_Parms, Result), Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result, METADATA_PARAMS(0, nullptr) }; // 655382749
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserStatsReceived__DelegateSignature_Statics::NewProp_steamIDUser = { "steamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnUserStatsReceived_Parms, steamIDUser), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserStatsReceived__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserStatsReceived__DelegateSignature_Statics::NewProp_GameID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserStatsReceived__DelegateSignature_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserStatsReceived__DelegateSignature_Statics::NewProp_steamIDUser,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserStatsReceived__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnUserStatsReceived Property Definitions *******************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserStatsReceived__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnUserStatsReceived__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserStatsReceived__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserStatsReceived__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserStatsReceived__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnUserStatsReceived_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserStatsReceived__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserStatsReceived__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserStatsReceived__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnUserStatsReceived_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserStatsReceived__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserStatsReceived__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnUserStatsReceived_DelegateWrapper(const FMulticastScriptDelegate& OnUserStatsReceived, int64 GameID, ESIK_Result Result, FSIK_SteamId steamIDUser)
{
	struct _Script_SteamIntegrationKit_eventOnUserStatsReceived_Parms
	{
		int64 GameID;
		TEnumAsByte<ESIK_Result> Result;
		FSIK_SteamId steamIDUser;
	};
	_Script_SteamIntegrationKit_eventOnUserStatsReceived_Parms Parms;
	Parms.GameID=GameID;
	Parms.Result=Result;
	Parms.steamIDUser=steamIDUser;
	OnUserStatsReceived.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnUserStatsReceived ****************************************************

// ********** Begin Delegate FOnUserStatsStored ****************************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserStatsStored__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnUserStatsStored_Parms
	{
		int64 GameID;
		TEnumAsByte<ESIK_Result> Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/UserStats/SIK_UserStatsSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnUserStatsStored constinit property declarations ********************
	static const UECodeGen_Private::FInt64PropertyParams NewProp_GameID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnUserStatsStored constinit property declarations **********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnUserStatsStored Property Definitions *******************************
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserStatsStored__DelegateSignature_Statics::NewProp_GameID = { "GameID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnUserStatsStored_Parms, GameID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserStatsStored__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnUserStatsStored_Parms, Result), Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result, METADATA_PARAMS(0, nullptr) }; // 655382749
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserStatsStored__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserStatsStored__DelegateSignature_Statics::NewProp_GameID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserStatsStored__DelegateSignature_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserStatsStored__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnUserStatsStored Property Definitions *********************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserStatsStored__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnUserStatsStored__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserStatsStored__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserStatsStored__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserStatsStored__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnUserStatsStored_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserStatsStored__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserStatsStored__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserStatsStored__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnUserStatsStored_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserStatsStored__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserStatsStored__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnUserStatsStored_DelegateWrapper(const FMulticastScriptDelegate& OnUserStatsStored, int64 GameID, ESIK_Result Result)
{
	struct _Script_SteamIntegrationKit_eventOnUserStatsStored_Parms
	{
		int64 GameID;
		TEnumAsByte<ESIK_Result> Result;
	};
	_Script_SteamIntegrationKit_eventOnUserStatsStored_Parms Parms;
	Parms.GameID=GameID;
	Parms.Result=Result;
	OnUserStatsStored.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnUserStatsStored ******************************************************

// ********** Begin Delegate FOnUserStatsUnloaded **************************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserStatsUnloaded__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnUserStatsUnloaded_Parms
	{
		FSIK_SteamId steamIDUser;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/UserStats/SIK_UserStatsSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnUserStatsUnloaded constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_steamIDUser;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnUserStatsUnloaded constinit property declarations ********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnUserStatsUnloaded Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserStatsUnloaded__DelegateSignature_Statics::NewProp_steamIDUser = { "steamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnUserStatsUnloaded_Parms, steamIDUser), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserStatsUnloaded__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserStatsUnloaded__DelegateSignature_Statics::NewProp_steamIDUser,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserStatsUnloaded__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnUserStatsUnloaded Property Definitions *******************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserStatsUnloaded__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnUserStatsUnloaded__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserStatsUnloaded__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserStatsUnloaded__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserStatsUnloaded__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnUserStatsUnloaded_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserStatsUnloaded__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserStatsUnloaded__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserStatsUnloaded__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnUserStatsUnloaded_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserStatsUnloaded__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserStatsUnloaded__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnUserStatsUnloaded_DelegateWrapper(const FMulticastScriptDelegate& OnUserStatsUnloaded, FSIK_SteamId steamIDUser)
{
	struct _Script_SteamIntegrationKit_eventOnUserStatsUnloaded_Parms
	{
		FSIK_SteamId steamIDUser;
	};
	_Script_SteamIntegrationKit_eventOnUserStatsUnloaded_Parms Parms;
	Parms.steamIDUser=steamIDUser;
	OnUserStatsUnloaded.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnUserStatsUnloaded ****************************************************

// ********** Begin Class USIK_UserStatsSubsystem **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_UserStatsSubsystem;
UClass* USIK_UserStatsSubsystem::GetPrivateStaticClass()
{
	using TClass = USIK_UserStatsSubsystem;
	if (!Z_Registration_Info_UClass_USIK_UserStatsSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_UserStatsSubsystem"),
			Z_Registration_Info_UClass_USIK_UserStatsSubsystem.InnerSingleton,
			StaticRegisterNativesUSIK_UserStatsSubsystem,
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
	return Z_Registration_Info_UClass_USIK_UserStatsSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_UserStatsSubsystem_NoRegister()
{
	return USIK_UserStatsSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_UserStatsSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Functions/UserStats/SIK_UserStatsSubsystem.h" },
		{ "ModuleRelativePath", "Functions/UserStats/SIK_UserStatsSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGlobalAchievementPercentagesReady_MetaData[] = {
		{ "Category", "Steam Integration Kit | User Stats" },
		{ "ModuleRelativePath", "Functions/UserStats/SIK_UserStatsSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGlobalStatsReceived_MetaData[] = {
		{ "Category", "Steam Integration Kit | User Stats" },
		{ "ModuleRelativePath", "Functions/UserStats/SIK_UserStatsSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLeaderboardFindResult_MetaData[] = {
		{ "Category", "Steam Integration Kit | User Stats" },
		{ "ModuleRelativePath", "Functions/UserStats/SIK_UserStatsSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLeaderboardScoresDownloaded_MetaData[] = {
		{ "Category", "Steam Integration Kit | User Stats" },
		{ "ModuleRelativePath", "Functions/UserStats/SIK_UserStatsSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLeaderboardScoreUploaded_MetaData[] = {
		{ "Category", "Steam Integration Kit | User Stats" },
		{ "ModuleRelativePath", "Functions/UserStats/SIK_UserStatsSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnNumberOfCurrentPlayers_MetaData[] = {
		{ "Category", "Steam Integration Kit | User Stats" },
		{ "ModuleRelativePath", "Functions/UserStats/SIK_UserStatsSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnUserAchievementIconFetched_MetaData[] = {
		{ "Category", "Steam Integration Kit | User Stats" },
		{ "ModuleRelativePath", "Functions/UserStats/SIK_UserStatsSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnUserAchievementStored_MetaData[] = {
		{ "Category", "Steam Integration Kit | User Stats" },
		{ "ModuleRelativePath", "Functions/UserStats/SIK_UserStatsSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnUserStatsReceived_MetaData[] = {
		{ "Category", "Steam Integration Kit | User Stats" },
		{ "ModuleRelativePath", "Functions/UserStats/SIK_UserStatsSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnUserStatsStored_MetaData[] = {
		{ "Category", "Steam Integration Kit | User Stats" },
		{ "ModuleRelativePath", "Functions/UserStats/SIK_UserStatsSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnUserStatsUnloaded_MetaData[] = {
		{ "Category", "Steam Integration Kit | User Stats" },
		{ "ModuleRelativePath", "Functions/UserStats/SIK_UserStatsSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_UserStatsSubsystem constinit property declarations ******************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGlobalAchievementPercentagesReady;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGlobalStatsReceived;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLeaderboardFindResult;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLeaderboardScoresDownloaded;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLeaderboardScoreUploaded;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnNumberOfCurrentPlayers;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUserAchievementIconFetched;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUserAchievementStored;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUserStatsReceived;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUserStatsStored;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUserStatsUnloaded;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USIK_UserStatsSubsystem constinit property declarations ********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_UserStatsSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_UserStatsSubsystem_Statics

// ********** Begin Class USIK_UserStatsSubsystem Property Definitions *****************************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_UserStatsSubsystem_Statics::NewProp_OnGlobalAchievementPercentagesReady = { "OnGlobalAchievementPercentagesReady", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_UserStatsSubsystem, OnGlobalAchievementPercentagesReady), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGlobalAchievementPercentagesReady__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGlobalAchievementPercentagesReady_MetaData), NewProp_OnGlobalAchievementPercentagesReady_MetaData) }; // 884063787
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_UserStatsSubsystem_Statics::NewProp_OnGlobalStatsReceived = { "OnGlobalStatsReceived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_UserStatsSubsystem, OnGlobalStatsReceived), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGlobalStatsReceived__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGlobalStatsReceived_MetaData), NewProp_OnGlobalStatsReceived_MetaData) }; // 1685686832
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_UserStatsSubsystem_Statics::NewProp_OnLeaderboardFindResult = { "OnLeaderboardFindResult", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_UserStatsSubsystem, OnLeaderboardFindResult), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLeaderboardFindResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLeaderboardFindResult_MetaData), NewProp_OnLeaderboardFindResult_MetaData) }; // 939820098
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_UserStatsSubsystem_Statics::NewProp_OnLeaderboardScoresDownloaded = { "OnLeaderboardScoresDownloaded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_UserStatsSubsystem, OnLeaderboardScoresDownloaded), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLeaderboardScoresDownloaded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLeaderboardScoresDownloaded_MetaData), NewProp_OnLeaderboardScoresDownloaded_MetaData) }; // 3076112665
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_UserStatsSubsystem_Statics::NewProp_OnLeaderboardScoreUploaded = { "OnLeaderboardScoreUploaded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_UserStatsSubsystem, OnLeaderboardScoreUploaded), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnLeaderboardScoreUploaded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLeaderboardScoreUploaded_MetaData), NewProp_OnLeaderboardScoreUploaded_MetaData) }; // 3636947940
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_UserStatsSubsystem_Statics::NewProp_OnNumberOfCurrentPlayers = { "OnNumberOfCurrentPlayers", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_UserStatsSubsystem, OnNumberOfCurrentPlayers), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnNumberOfCurrentPlayers__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnNumberOfCurrentPlayers_MetaData), NewProp_OnNumberOfCurrentPlayers_MetaData) }; // 4290820919
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_UserStatsSubsystem_Statics::NewProp_OnUserAchievementIconFetched = { "OnUserAchievementIconFetched", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_UserStatsSubsystem, OnUserAchievementIconFetched), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserAchievementIconFetched__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnUserAchievementIconFetched_MetaData), NewProp_OnUserAchievementIconFetched_MetaData) }; // 2973016701
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_UserStatsSubsystem_Statics::NewProp_OnUserAchievementStored = { "OnUserAchievementStored", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_UserStatsSubsystem, OnUserAchievementStored), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserAchievementStored__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnUserAchievementStored_MetaData), NewProp_OnUserAchievementStored_MetaData) }; // 3023492658
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_UserStatsSubsystem_Statics::NewProp_OnUserStatsReceived = { "OnUserStatsReceived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_UserStatsSubsystem, OnUserStatsReceived), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserStatsReceived__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnUserStatsReceived_MetaData), NewProp_OnUserStatsReceived_MetaData) }; // 2439644408
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_UserStatsSubsystem_Statics::NewProp_OnUserStatsStored = { "OnUserStatsStored", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_UserStatsSubsystem, OnUserStatsStored), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserStatsStored__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnUserStatsStored_MetaData), NewProp_OnUserStatsStored_MetaData) }; // 2100980225
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_UserStatsSubsystem_Statics::NewProp_OnUserStatsUnloaded = { "OnUserStatsUnloaded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_UserStatsSubsystem, OnUserStatsUnloaded), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUserStatsUnloaded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnUserStatsUnloaded_MetaData), NewProp_OnUserStatsUnloaded_MetaData) }; // 2356765331
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USIK_UserStatsSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_UserStatsSubsystem_Statics::NewProp_OnGlobalAchievementPercentagesReady,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_UserStatsSubsystem_Statics::NewProp_OnGlobalStatsReceived,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_UserStatsSubsystem_Statics::NewProp_OnLeaderboardFindResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_UserStatsSubsystem_Statics::NewProp_OnLeaderboardScoresDownloaded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_UserStatsSubsystem_Statics::NewProp_OnLeaderboardScoreUploaded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_UserStatsSubsystem_Statics::NewProp_OnNumberOfCurrentPlayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_UserStatsSubsystem_Statics::NewProp_OnUserAchievementIconFetched,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_UserStatsSubsystem_Statics::NewProp_OnUserAchievementStored,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_UserStatsSubsystem_Statics::NewProp_OnUserStatsReceived,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_UserStatsSubsystem_Statics::NewProp_OnUserStatsStored,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_UserStatsSubsystem_Statics::NewProp_OnUserStatsUnloaded,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_UserStatsSubsystem_Statics::PropPointers) < 2048);
// ********** End Class USIK_UserStatsSubsystem Property Definitions *******************************
UObject* (*const Z_Construct_UClass_USIK_UserStatsSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_UserStatsSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_UserStatsSubsystem_Statics::ClassParams = {
	&USIK_UserStatsSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USIK_UserStatsSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USIK_UserStatsSubsystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_UserStatsSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_UserStatsSubsystem_Statics::Class_MetaDataParams)
};
void USIK_UserStatsSubsystem::StaticRegisterNativesUSIK_UserStatsSubsystem()
{
}
UClass* Z_Construct_UClass_USIK_UserStatsSubsystem()
{
	if (!Z_Registration_Info_UClass_USIK_UserStatsSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_UserStatsSubsystem.OuterSingleton, Z_Construct_UClass_USIK_UserStatsSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_UserStatsSubsystem.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_UserStatsSubsystem);
// ********** End Class USIK_UserStatsSubsystem ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_UserStatsSubsystem_h__Script_SteamIntegrationKit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_UserStatsSubsystem, USIK_UserStatsSubsystem::StaticClass, TEXT("USIK_UserStatsSubsystem"), &Z_Registration_Info_UClass_USIK_UserStatsSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_UserStatsSubsystem), 1080629813U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_UserStatsSubsystem_h__Script_SteamIntegrationKit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_UserStatsSubsystem_h__Script_SteamIntegrationKit_2970218605{
	TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_UserStatsSubsystem_h__Script_SteamIntegrationKit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_UserStatsSubsystem_h__Script_SteamIntegrationKit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
