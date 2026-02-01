// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/CheatReporting/SIK_ReportPlayerCheating.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_ReportPlayerCheating() {}

// ********** Begin Cross Module References ********************************************************
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_ReportPlayerCheating();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_ReportPlayerCheating_NoRegister();
STEAMWEB_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_PlayerCheatingOptional();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FSIK_PlayerCheatingOptional ***************************************
struct Z_Construct_UScriptStruct_FSIK_PlayerCheatingOptional_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSIK_PlayerCheatingOptional); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSIK_PlayerCheatingOptional); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Functions/CheatReporting/SIK_ReportPlayerCheating.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamIdReporter_MetaData[] = {
		{ "Category", "Steam Integration Kit|Web|Cheat Reporting" },
		{ "Comment", "//The Steam ID of the user or game server who is reporting the cheating.\n" },
		{ "ModuleRelativePath", "Functions/CheatReporting/SIK_ReportPlayerCheating.h" },
		{ "ToolTip", "The Steam ID of the user or game server who is reporting the cheating." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppData_MetaData[] = {
		{ "Category", "Steam Integration Kit|Web|Cheat Reporting" },
		{ "Comment", "//App specific data about the type of cheating set by developer. (ex 1 = Aimbot, 2 = Wallhack, 3 = Griefing)\n" },
		{ "ModuleRelativePath", "Functions/CheatReporting/SIK_ReportPlayerCheating.h" },
		{ "ToolTip", "App specific data about the type of cheating set by developer. (ex 1 = Aimbot, 2 = Wallhack, 3 = Griefing)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHeuristic_MetaData[] = {
		{ "Category", "Steam Integration Kit|Web|Cheat Reporting" },
		{ "Comment", "//Extra information about the source of the cheating - was it a heuristic.\n" },
		{ "ModuleRelativePath", "Functions/CheatReporting/SIK_ReportPlayerCheating.h" },
		{ "ToolTip", "Extra information about the source of the cheating - was it a heuristic." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDetection_MetaData[] = {
		{ "Category", "Steam Integration Kit|Web|Cheat Reporting" },
		{ "Comment", "//Extra information about the source of the cheating - was it a detection.\n" },
		{ "ModuleRelativePath", "Functions/CheatReporting/SIK_ReportPlayerCheating.h" },
		{ "ToolTip", "Extra information about the source of the cheating - was it a detection." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPlayerReport_MetaData[] = {
		{ "Category", "Steam Integration Kit|Web|Cheat Reporting" },
		{ "Comment", "//Extra information about the source of the cheating - was it a player report.\n" },
		{ "ModuleRelativePath", "Functions/CheatReporting/SIK_ReportPlayerCheating.h" },
		{ "ToolTip", "Extra information about the source of the cheating - was it a player report." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNoReportId_MetaData[] = {
		{ "Category", "Steam Integration Kit|Web|Cheat Reporting" },
		{ "Comment", "//Don't return reportid. This should only be passed if you don't intend to issue a ban based on this report.\n" },
		{ "ModuleRelativePath", "Functions/CheatReporting/SIK_ReportPlayerCheating.h" },
		{ "ToolTip", "Don't return reportid. This should only be passed if you don't intend to issue a ban based on this report." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameMode_MetaData[] = {
		{ "Category", "Steam Integration Kit|Web|Cheat Reporting" },
		{ "Comment", "//Extra information about state of game - was it a specific type of game play or game mode. (0 = generic)\n" },
		{ "ModuleRelativePath", "Functions/CheatReporting/SIK_ReportPlayerCheating.h" },
		{ "ToolTip", "Extra information about state of game - was it a specific type of game play or game mode. (0 = generic)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SuspicionStartTime_MetaData[] = {
		{ "Category", "Steam Integration Kit|Web|Cheat Reporting" },
		{ "Comment", "//Extra information indicating how far back the game thinks is interesting for this user. Unix epoch time (time since Jan 1st, 1970).\n" },
		{ "ModuleRelativePath", "Functions/CheatReporting/SIK_ReportPlayerCheating.h" },
		{ "ToolTip", "Extra information indicating how far back the game thinks is interesting for this user. Unix epoch time (time since Jan 1st, 1970)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Severity_MetaData[] = {
		{ "Category", "Steam Integration Kit|Web|Cheat Reporting" },
		{ "Comment", "//Level of severity of bad action being reported. Scale set by developer.\n" },
		{ "ModuleRelativePath", "Functions/CheatReporting/SIK_ReportPlayerCheating.h" },
		{ "ToolTip", "Level of severity of bad action being reported. Scale set by developer." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSIK_PlayerCheatingOptional constinit property declarations *******
	static const UECodeGen_Private::FInt64PropertyParams NewProp_SteamIdReporter;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_AppData;
	static void NewProp_bHeuristic_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHeuristic;
	static void NewProp_bDetection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDetection;
	static void NewProp_bPlayerReport_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlayerReport;
	static void NewProp_bNoReportId_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNoReportId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GameMode;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SuspicionStartTime;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Severity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSIK_PlayerCheatingOptional constinit property declarations *********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSIK_PlayerCheatingOptional>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSIK_PlayerCheatingOptional_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSIK_PlayerCheatingOptional;
class UScriptStruct* FSIK_PlayerCheatingOptional::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_PlayerCheatingOptional.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSIK_PlayerCheatingOptional.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSIK_PlayerCheatingOptional, (UObject*)Z_Construct_UPackage__Script_SteamWeb(), TEXT("SIK_PlayerCheatingOptional"));
	}
	return Z_Registration_Info_UScriptStruct_FSIK_PlayerCheatingOptional.OuterSingleton;
	}

// ********** Begin ScriptStruct FSIK_PlayerCheatingOptional Property Definitions ******************
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FSIK_PlayerCheatingOptional_Statics::NewProp_SteamIdReporter = { "SteamIdReporter", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_PlayerCheatingOptional, SteamIdReporter), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamIdReporter_MetaData), NewProp_SteamIdReporter_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FSIK_PlayerCheatingOptional_Statics::NewProp_AppData = { "AppData", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_PlayerCheatingOptional, AppData), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppData_MetaData), NewProp_AppData_MetaData) };
void Z_Construct_UScriptStruct_FSIK_PlayerCheatingOptional_Statics::NewProp_bHeuristic_SetBit(void* Obj)
{
	((FSIK_PlayerCheatingOptional*)Obj)->bHeuristic = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSIK_PlayerCheatingOptional_Statics::NewProp_bHeuristic = { "bHeuristic", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSIK_PlayerCheatingOptional), &Z_Construct_UScriptStruct_FSIK_PlayerCheatingOptional_Statics::NewProp_bHeuristic_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHeuristic_MetaData), NewProp_bHeuristic_MetaData) };
void Z_Construct_UScriptStruct_FSIK_PlayerCheatingOptional_Statics::NewProp_bDetection_SetBit(void* Obj)
{
	((FSIK_PlayerCheatingOptional*)Obj)->bDetection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSIK_PlayerCheatingOptional_Statics::NewProp_bDetection = { "bDetection", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSIK_PlayerCheatingOptional), &Z_Construct_UScriptStruct_FSIK_PlayerCheatingOptional_Statics::NewProp_bDetection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDetection_MetaData), NewProp_bDetection_MetaData) };
void Z_Construct_UScriptStruct_FSIK_PlayerCheatingOptional_Statics::NewProp_bPlayerReport_SetBit(void* Obj)
{
	((FSIK_PlayerCheatingOptional*)Obj)->bPlayerReport = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSIK_PlayerCheatingOptional_Statics::NewProp_bPlayerReport = { "bPlayerReport", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSIK_PlayerCheatingOptional), &Z_Construct_UScriptStruct_FSIK_PlayerCheatingOptional_Statics::NewProp_bPlayerReport_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPlayerReport_MetaData), NewProp_bPlayerReport_MetaData) };
void Z_Construct_UScriptStruct_FSIK_PlayerCheatingOptional_Statics::NewProp_bNoReportId_SetBit(void* Obj)
{
	((FSIK_PlayerCheatingOptional*)Obj)->bNoReportId = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSIK_PlayerCheatingOptional_Statics::NewProp_bNoReportId = { "bNoReportId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSIK_PlayerCheatingOptional), &Z_Construct_UScriptStruct_FSIK_PlayerCheatingOptional_Statics::NewProp_bNoReportId_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNoReportId_MetaData), NewProp_bNoReportId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSIK_PlayerCheatingOptional_Statics::NewProp_GameMode = { "GameMode", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_PlayerCheatingOptional, GameMode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameMode_MetaData), NewProp_GameMode_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSIK_PlayerCheatingOptional_Statics::NewProp_SuspicionStartTime = { "SuspicionStartTime", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_PlayerCheatingOptional, SuspicionStartTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SuspicionStartTime_MetaData), NewProp_SuspicionStartTime_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSIK_PlayerCheatingOptional_Statics::NewProp_Severity = { "Severity", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_PlayerCheatingOptional, Severity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Severity_MetaData), NewProp_Severity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSIK_PlayerCheatingOptional_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_PlayerCheatingOptional_Statics::NewProp_SteamIdReporter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_PlayerCheatingOptional_Statics::NewProp_AppData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_PlayerCheatingOptional_Statics::NewProp_bHeuristic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_PlayerCheatingOptional_Statics::NewProp_bDetection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_PlayerCheatingOptional_Statics::NewProp_bPlayerReport,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_PlayerCheatingOptional_Statics::NewProp_bNoReportId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_PlayerCheatingOptional_Statics::NewProp_GameMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_PlayerCheatingOptional_Statics::NewProp_SuspicionStartTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_PlayerCheatingOptional_Statics::NewProp_Severity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_PlayerCheatingOptional_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSIK_PlayerCheatingOptional Property Definitions ********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSIK_PlayerCheatingOptional_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
	nullptr,
	&NewStructOps,
	"SIK_PlayerCheatingOptional",
	Z_Construct_UScriptStruct_FSIK_PlayerCheatingOptional_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_PlayerCheatingOptional_Statics::PropPointers),
	sizeof(FSIK_PlayerCheatingOptional),
	alignof(FSIK_PlayerCheatingOptional),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_PlayerCheatingOptional_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSIK_PlayerCheatingOptional_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSIK_PlayerCheatingOptional()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_PlayerCheatingOptional.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSIK_PlayerCheatingOptional.InnerSingleton, Z_Construct_UScriptStruct_FSIK_PlayerCheatingOptional_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSIK_PlayerCheatingOptional.InnerSingleton);
}
// ********** End ScriptStruct FSIK_PlayerCheatingOptional *****************************************

// ********** Begin Class USIK_ReportPlayerCheating Function ReportPlayerCheating ******************
struct Z_Construct_UFunction_USIK_ReportPlayerCheating_ReportPlayerCheating_Statics
{
	struct SIK_ReportPlayerCheating_eventReportPlayerCheating_Parms
	{
		FString Key;
		int64 SteamId;
		int32 AppId;
		FSIK_PlayerCheatingOptional Optional;
		USIK_ReportPlayerCheating* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|Cheat Reporting" },
		{ "Comment", "//ReportPlayerCheating is designed to gather community reports of cheating, where one player reports another player within the game.\n" },
		{ "ModuleRelativePath", "Functions/CheatReporting/SIK_ReportPlayerCheating.h" },
		{ "ToolTip", "ReportPlayerCheating is designed to gather community reports of cheating, where one player reports another player within the game." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ReportPlayerCheating constinit property declarations ******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Optional;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ReportPlayerCheating constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ReportPlayerCheating Property Definitions *****************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_ReportPlayerCheating_ReportPlayerCheating_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ReportPlayerCheating_eventReportPlayerCheating_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_ReportPlayerCheating_ReportPlayerCheating_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ReportPlayerCheating_eventReportPlayerCheating_Parms, SteamId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamId_MetaData), NewProp_SteamId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_ReportPlayerCheating_ReportPlayerCheating_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ReportPlayerCheating_eventReportPlayerCheating_Parms, AppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppId_MetaData), NewProp_AppId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_ReportPlayerCheating_ReportPlayerCheating_Statics::NewProp_Optional = { "Optional", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ReportPlayerCheating_eventReportPlayerCheating_Parms, Optional), Z_Construct_UScriptStruct_FSIK_PlayerCheatingOptional, METADATA_PARAMS(0, nullptr) }; // 1608286123
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_ReportPlayerCheating_ReportPlayerCheating_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ReportPlayerCheating_eventReportPlayerCheating_Parms, ReturnValue), Z_Construct_UClass_USIK_ReportPlayerCheating_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_ReportPlayerCheating_ReportPlayerCheating_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ReportPlayerCheating_ReportPlayerCheating_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ReportPlayerCheating_ReportPlayerCheating_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ReportPlayerCheating_ReportPlayerCheating_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ReportPlayerCheating_ReportPlayerCheating_Statics::NewProp_Optional,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ReportPlayerCheating_ReportPlayerCheating_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_ReportPlayerCheating_ReportPlayerCheating_Statics::PropPointers) < 2048);
// ********** End Function ReportPlayerCheating Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_ReportPlayerCheating_ReportPlayerCheating_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_ReportPlayerCheating, nullptr, "ReportPlayerCheating", 	Z_Construct_UFunction_USIK_ReportPlayerCheating_ReportPlayerCheating_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_ReportPlayerCheating_ReportPlayerCheating_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_ReportPlayerCheating_ReportPlayerCheating_Statics::SIK_ReportPlayerCheating_eventReportPlayerCheating_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_ReportPlayerCheating_ReportPlayerCheating_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_ReportPlayerCheating_ReportPlayerCheating_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_ReportPlayerCheating_ReportPlayerCheating_Statics::SIK_ReportPlayerCheating_eventReportPlayerCheating_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_ReportPlayerCheating_ReportPlayerCheating()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_ReportPlayerCheating_ReportPlayerCheating_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_ReportPlayerCheating::execReportPlayerCheating)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_SteamId);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppId);
	P_GET_STRUCT(FSIK_PlayerCheatingOptional,Z_Param_Optional);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_ReportPlayerCheating**)Z_Param__Result=USIK_ReportPlayerCheating::ReportPlayerCheating(Z_Param_Key,Z_Param_Out_SteamId,Z_Param_Out_AppId,Z_Param_Optional);
	P_NATIVE_END;
}
// ********** End Class USIK_ReportPlayerCheating Function ReportPlayerCheating ********************

// ********** Begin Class USIK_ReportPlayerCheating ************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_ReportPlayerCheating;
UClass* USIK_ReportPlayerCheating::GetPrivateStaticClass()
{
	using TClass = USIK_ReportPlayerCheating;
	if (!Z_Registration_Info_UClass_USIK_ReportPlayerCheating.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_ReportPlayerCheating"),
			Z_Registration_Info_UClass_USIK_ReportPlayerCheating.InnerSingleton,
			StaticRegisterNativesUSIK_ReportPlayerCheating,
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
	return Z_Registration_Info_UClass_USIK_ReportPlayerCheating.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_ReportPlayerCheating_NoRegister()
{
	return USIK_ReportPlayerCheating::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_ReportPlayerCheating_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Functions/CheatReporting/SIK_ReportPlayerCheating.h" },
		{ "ModuleRelativePath", "Functions/CheatReporting/SIK_ReportPlayerCheating.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_ReportPlayerCheating constinit property declarations ****************
// ********** End Class USIK_ReportPlayerCheating constinit property declarations ******************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ReportPlayerCheating"), .Pointer = &USIK_ReportPlayerCheating::execReportPlayerCheating },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_ReportPlayerCheating_ReportPlayerCheating, "ReportPlayerCheating" }, // 2867673468
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_ReportPlayerCheating>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_ReportPlayerCheating_Statics
UObject* (*const Z_Construct_UClass_USIK_ReportPlayerCheating_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_ReportPlayerCheating_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_ReportPlayerCheating_Statics::ClassParams = {
	&USIK_ReportPlayerCheating::StaticClass,
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
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_ReportPlayerCheating_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_ReportPlayerCheating_Statics::Class_MetaDataParams)
};
void USIK_ReportPlayerCheating::StaticRegisterNativesUSIK_ReportPlayerCheating()
{
	UClass* Class = USIK_ReportPlayerCheating::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_ReportPlayerCheating_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_ReportPlayerCheating()
{
	if (!Z_Registration_Info_UClass_USIK_ReportPlayerCheating.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_ReportPlayerCheating.OuterSingleton, Z_Construct_UClass_USIK_ReportPlayerCheating_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_ReportPlayerCheating.OuterSingleton;
}
USIK_ReportPlayerCheating::USIK_ReportPlayerCheating(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_ReportPlayerCheating);
USIK_ReportPlayerCheating::~USIK_ReportPlayerCheating() {}
// ********** End Class USIK_ReportPlayerCheating **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_CheatReporting_SIK_ReportPlayerCheating_h__Script_SteamWeb_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSIK_PlayerCheatingOptional::StaticStruct, Z_Construct_UScriptStruct_FSIK_PlayerCheatingOptional_Statics::NewStructOps, TEXT("SIK_PlayerCheatingOptional"),&Z_Registration_Info_UScriptStruct_FSIK_PlayerCheatingOptional, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSIK_PlayerCheatingOptional), 1608286123U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_ReportPlayerCheating, USIK_ReportPlayerCheating::StaticClass, TEXT("USIK_ReportPlayerCheating"), &Z_Registration_Info_UClass_USIK_ReportPlayerCheating, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_ReportPlayerCheating), 1792216330U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_CheatReporting_SIK_ReportPlayerCheating_h__Script_SteamWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_CheatReporting_SIK_ReportPlayerCheating_h__Script_SteamWeb_2097692015{
	TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_CheatReporting_SIK_ReportPlayerCheating_h__Script_SteamWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_CheatReporting_SIK_ReportPlayerCheating_h__Script_SteamWeb_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_CheatReporting_SIK_ReportPlayerCheating_h__Script_SteamWeb_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_CheatReporting_SIK_ReportPlayerCheating_h__Script_SteamWeb_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
