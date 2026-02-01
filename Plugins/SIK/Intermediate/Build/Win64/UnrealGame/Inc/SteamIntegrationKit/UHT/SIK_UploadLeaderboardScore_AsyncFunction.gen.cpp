// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/UserStats/SIK_UploadLeaderboardScore_AsyncFunction.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_UploadLeaderboardScore_AsyncFunction() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_UploadLeaderboardScore_AsyncFunction();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_UploadLeaderboardScore_AsyncFunction_NoRegister();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_LeaderboardUploadScoreMethod();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_LeaderboardScoreUploaded_Delegate__DelegateSignature();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_LeaderboardScoreUploaded();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ESIK_LeaderboardUploadScoreMethod *****************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESIK_LeaderboardUploadScoreMethod;
static UEnum* ESIK_LeaderboardUploadScoreMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESIK_LeaderboardUploadScoreMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESIK_LeaderboardUploadScoreMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamIntegrationKit_ESIK_LeaderboardUploadScoreMethod, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("ESIK_LeaderboardUploadScoreMethod"));
	}
	return Z_Registration_Info_UEnum_ESIK_LeaderboardUploadScoreMethod.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<ESIK_LeaderboardUploadScoreMethod>()
{
	return ESIK_LeaderboardUploadScoreMethod_StaticEnum();
}
struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_LeaderboardUploadScoreMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "LeaderboardUploadScoreMethodForceUpdate.Comment", "// Leaderboard will keep user's best score\n" },
		{ "LeaderboardUploadScoreMethodForceUpdate.DisplayName", "Force Update" },
		{ "LeaderboardUploadScoreMethodForceUpdate.Name", "LeaderboardUploadScoreMethodForceUpdate" },
		{ "LeaderboardUploadScoreMethodForceUpdate.ToolTip", "Leaderboard will keep user's best score" },
		{ "LeaderboardUploadScoreMethodKeepBest.DisplayName", "Keep Best" },
		{ "LeaderboardUploadScoreMethodKeepBest.Name", "LeaderboardUploadScoreMethodKeepBest" },
		{ "LeaderboardUploadScoreMethodNone.DisplayName", "None" },
		{ "LeaderboardUploadScoreMethodNone.Name", "LeaderboardUploadScoreMethodNone" },
		{ "ModuleRelativePath", "Functions/UserStats/SIK_UploadLeaderboardScore_AsyncFunction.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "LeaderboardUploadScoreMethodNone", (int64)LeaderboardUploadScoreMethodNone },
		{ "LeaderboardUploadScoreMethodKeepBest", (int64)LeaderboardUploadScoreMethodKeepBest },
		{ "LeaderboardUploadScoreMethodForceUpdate", (int64)LeaderboardUploadScoreMethodForceUpdate },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_LeaderboardUploadScoreMethod_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamIntegrationKit_ESIK_LeaderboardUploadScoreMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	"ESIK_LeaderboardUploadScoreMethod",
	"ESIK_LeaderboardUploadScoreMethod",
	Z_Construct_UEnum_SteamIntegrationKit_ESIK_LeaderboardUploadScoreMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_LeaderboardUploadScoreMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_LeaderboardUploadScoreMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamIntegrationKit_ESIK_LeaderboardUploadScoreMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_LeaderboardUploadScoreMethod()
{
	if (!Z_Registration_Info_UEnum_ESIK_LeaderboardUploadScoreMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESIK_LeaderboardUploadScoreMethod.InnerSingleton, Z_Construct_UEnum_SteamIntegrationKit_ESIK_LeaderboardUploadScoreMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESIK_LeaderboardUploadScoreMethod.InnerSingleton;
}
// ********** End Enum ESIK_LeaderboardUploadScoreMethod *******************************************

// ********** Begin ScriptStruct FSIK_LeaderboardScoreUploaded *************************************
struct Z_Construct_UScriptStruct_FSIK_LeaderboardScoreUploaded_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSIK_LeaderboardScoreUploaded); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSIK_LeaderboardScoreUploaded); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Functions/UserStats/SIK_UploadLeaderboardScore_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeaderboardId_MetaData[] = {
		{ "Category", "Steam Integration Kit || User Stats" },
		{ "ModuleRelativePath", "Functions/UserStats/SIK_UploadLeaderboardScore_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Score_MetaData[] = {
		{ "Category", "Steam Integration Kit || User Stats" },
		{ "ModuleRelativePath", "Functions/UserStats/SIK_UploadLeaderboardScore_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bScoreChanged_MetaData[] = {
		{ "Category", "Steam Integration Kit || User Stats" },
		{ "ModuleRelativePath", "Functions/UserStats/SIK_UploadLeaderboardScore_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalRankNew_MetaData[] = {
		{ "Category", "Steam Integration Kit || User Stats" },
		{ "ModuleRelativePath", "Functions/UserStats/SIK_UploadLeaderboardScore_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalRankPrevious_MetaData[] = {
		{ "Category", "Steam Integration Kit || User Stats" },
		{ "ModuleRelativePath", "Functions/UserStats/SIK_UploadLeaderboardScore_AsyncFunction.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSIK_LeaderboardScoreUploaded constinit property declarations *****
	static const UECodeGen_Private::FIntPropertyParams NewProp_LeaderboardId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Score;
	static void NewProp_bScoreChanged_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bScoreChanged;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GlobalRankNew;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GlobalRankPrevious;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSIK_LeaderboardScoreUploaded constinit property declarations *******
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSIK_LeaderboardScoreUploaded>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSIK_LeaderboardScoreUploaded_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSIK_LeaderboardScoreUploaded;
class UScriptStruct* FSIK_LeaderboardScoreUploaded::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_LeaderboardScoreUploaded.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSIK_LeaderboardScoreUploaded.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSIK_LeaderboardScoreUploaded, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("SIK_LeaderboardScoreUploaded"));
	}
	return Z_Registration_Info_UScriptStruct_FSIK_LeaderboardScoreUploaded.OuterSingleton;
	}

// ********** Begin ScriptStruct FSIK_LeaderboardScoreUploaded Property Definitions ****************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSIK_LeaderboardScoreUploaded_Statics::NewProp_LeaderboardId = { "LeaderboardId", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_LeaderboardScoreUploaded, LeaderboardId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeaderboardId_MetaData), NewProp_LeaderboardId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSIK_LeaderboardScoreUploaded_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_LeaderboardScoreUploaded, Score), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Score_MetaData), NewProp_Score_MetaData) };
void Z_Construct_UScriptStruct_FSIK_LeaderboardScoreUploaded_Statics::NewProp_bScoreChanged_SetBit(void* Obj)
{
	((FSIK_LeaderboardScoreUploaded*)Obj)->bScoreChanged = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSIK_LeaderboardScoreUploaded_Statics::NewProp_bScoreChanged = { "bScoreChanged", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSIK_LeaderboardScoreUploaded), &Z_Construct_UScriptStruct_FSIK_LeaderboardScoreUploaded_Statics::NewProp_bScoreChanged_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bScoreChanged_MetaData), NewProp_bScoreChanged_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSIK_LeaderboardScoreUploaded_Statics::NewProp_GlobalRankNew = { "GlobalRankNew", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_LeaderboardScoreUploaded, GlobalRankNew), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalRankNew_MetaData), NewProp_GlobalRankNew_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSIK_LeaderboardScoreUploaded_Statics::NewProp_GlobalRankPrevious = { "GlobalRankPrevious", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_LeaderboardScoreUploaded, GlobalRankPrevious), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalRankPrevious_MetaData), NewProp_GlobalRankPrevious_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSIK_LeaderboardScoreUploaded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_LeaderboardScoreUploaded_Statics::NewProp_LeaderboardId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_LeaderboardScoreUploaded_Statics::NewProp_Score,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_LeaderboardScoreUploaded_Statics::NewProp_bScoreChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_LeaderboardScoreUploaded_Statics::NewProp_GlobalRankNew,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_LeaderboardScoreUploaded_Statics::NewProp_GlobalRankPrevious,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_LeaderboardScoreUploaded_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSIK_LeaderboardScoreUploaded Property Definitions ******************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSIK_LeaderboardScoreUploaded_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	&NewStructOps,
	"SIK_LeaderboardScoreUploaded",
	Z_Construct_UScriptStruct_FSIK_LeaderboardScoreUploaded_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_LeaderboardScoreUploaded_Statics::PropPointers),
	sizeof(FSIK_LeaderboardScoreUploaded),
	alignof(FSIK_LeaderboardScoreUploaded),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_LeaderboardScoreUploaded_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSIK_LeaderboardScoreUploaded_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSIK_LeaderboardScoreUploaded()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_LeaderboardScoreUploaded.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSIK_LeaderboardScoreUploaded.InnerSingleton, Z_Construct_UScriptStruct_FSIK_LeaderboardScoreUploaded_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSIK_LeaderboardScoreUploaded.InnerSingleton);
}
// ********** End ScriptStruct FSIK_LeaderboardScoreUploaded ***************************************

// ********** Begin Delegate FLeaderboardScoreUploaded_Delegate ************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_LeaderboardScoreUploaded_Delegate__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventLeaderboardScoreUploaded_Delegate_Parms
	{
		FSIK_LeaderboardScoreUploaded LeaderboardScoreUploaded;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/UserStats/SIK_UploadLeaderboardScore_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeaderboardScoreUploaded_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FLeaderboardScoreUploaded_Delegate constinit property declarations ****
	static const UECodeGen_Private::FStructPropertyParams NewProp_LeaderboardScoreUploaded;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FLeaderboardScoreUploaded_Delegate constinit property declarations ******
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FLeaderboardScoreUploaded_Delegate Property Definitions ***************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_LeaderboardScoreUploaded_Delegate__DelegateSignature_Statics::NewProp_LeaderboardScoreUploaded = { "LeaderboardScoreUploaded", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventLeaderboardScoreUploaded_Delegate_Parms, LeaderboardScoreUploaded), Z_Construct_UScriptStruct_FSIK_LeaderboardScoreUploaded, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeaderboardScoreUploaded_MetaData), NewProp_LeaderboardScoreUploaded_MetaData) }; // 3859887261
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_LeaderboardScoreUploaded_Delegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_LeaderboardScoreUploaded_Delegate__DelegateSignature_Statics::NewProp_LeaderboardScoreUploaded,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_LeaderboardScoreUploaded_Delegate__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FLeaderboardScoreUploaded_Delegate Property Definitions *****************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_LeaderboardScoreUploaded_Delegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "LeaderboardScoreUploaded_Delegate__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_LeaderboardScoreUploaded_Delegate__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_LeaderboardScoreUploaded_Delegate__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_LeaderboardScoreUploaded_Delegate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventLeaderboardScoreUploaded_Delegate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_LeaderboardScoreUploaded_Delegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_LeaderboardScoreUploaded_Delegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_LeaderboardScoreUploaded_Delegate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventLeaderboardScoreUploaded_Delegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_LeaderboardScoreUploaded_Delegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_LeaderboardScoreUploaded_Delegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FLeaderboardScoreUploaded_Delegate_DelegateWrapper(const FMulticastScriptDelegate& LeaderboardScoreUploaded_Delegate, FSIK_LeaderboardScoreUploaded const& LeaderboardScoreUploaded)
{
	struct _Script_SteamIntegrationKit_eventLeaderboardScoreUploaded_Delegate_Parms
	{
		FSIK_LeaderboardScoreUploaded LeaderboardScoreUploaded;
	};
	_Script_SteamIntegrationKit_eventLeaderboardScoreUploaded_Delegate_Parms Parms;
	Parms.LeaderboardScoreUploaded=LeaderboardScoreUploaded;
	LeaderboardScoreUploaded_Delegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FLeaderboardScoreUploaded_Delegate **************************************

// ********** Begin Class USIK_UploadLeaderboardScore_AsyncFunction Function UploadLeaderboardScore 
struct Z_Construct_UFunction_USIK_UploadLeaderboardScore_AsyncFunction_UploadLeaderboardScore_Statics
{
	struct SIK_UploadLeaderboardScore_AsyncFunction_eventUploadLeaderboardScore_Parms
	{
		int32 LeaderboardId;
		TEnumAsByte<ESIK_LeaderboardUploadScoreMethod> UploadScoreMethod;
		int32 Score;
		TArray<int32> ScoreDetails;
		USIK_UploadLeaderboardScore_AsyncFunction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit || SDK Functions || User Stats" },
		{ "DisplayName", "Upload Steam Leaderboard Score" },
		{ "Keywords", "UploadLeaderboardScore" },
		{ "ModuleRelativePath", "Functions/UserStats/SIK_UploadLeaderboardScore_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScoreDetails_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function UploadLeaderboardScore constinit property declarations ****************
	static const UECodeGen_Private::FIntPropertyParams NewProp_LeaderboardId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_UploadScoreMethod;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Score;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ScoreDetails_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ScoreDetails;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function UploadLeaderboardScore constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function UploadLeaderboardScore Property Definitions ***************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UploadLeaderboardScore_AsyncFunction_UploadLeaderboardScore_Statics::NewProp_LeaderboardId = { "LeaderboardId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UploadLeaderboardScore_AsyncFunction_eventUploadLeaderboardScore_Parms, LeaderboardId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_UploadLeaderboardScore_AsyncFunction_UploadLeaderboardScore_Statics::NewProp_UploadScoreMethod = { "UploadScoreMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UploadLeaderboardScore_AsyncFunction_eventUploadLeaderboardScore_Parms, UploadScoreMethod), Z_Construct_UEnum_SteamIntegrationKit_ESIK_LeaderboardUploadScoreMethod, METADATA_PARAMS(0, nullptr) }; // 1232709308
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UploadLeaderboardScore_AsyncFunction_UploadLeaderboardScore_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UploadLeaderboardScore_AsyncFunction_eventUploadLeaderboardScore_Parms, Score), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UploadLeaderboardScore_AsyncFunction_UploadLeaderboardScore_Statics::NewProp_ScoreDetails_Inner = { "ScoreDetails", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_UploadLeaderboardScore_AsyncFunction_UploadLeaderboardScore_Statics::NewProp_ScoreDetails = { "ScoreDetails", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UploadLeaderboardScore_AsyncFunction_eventUploadLeaderboardScore_Parms, ScoreDetails), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScoreDetails_MetaData), NewProp_ScoreDetails_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_UploadLeaderboardScore_AsyncFunction_UploadLeaderboardScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UploadLeaderboardScore_AsyncFunction_eventUploadLeaderboardScore_Parms, ReturnValue), Z_Construct_UClass_USIK_UploadLeaderboardScore_AsyncFunction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UploadLeaderboardScore_AsyncFunction_UploadLeaderboardScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UploadLeaderboardScore_AsyncFunction_UploadLeaderboardScore_Statics::NewProp_LeaderboardId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UploadLeaderboardScore_AsyncFunction_UploadLeaderboardScore_Statics::NewProp_UploadScoreMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UploadLeaderboardScore_AsyncFunction_UploadLeaderboardScore_Statics::NewProp_Score,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UploadLeaderboardScore_AsyncFunction_UploadLeaderboardScore_Statics::NewProp_ScoreDetails_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UploadLeaderboardScore_AsyncFunction_UploadLeaderboardScore_Statics::NewProp_ScoreDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UploadLeaderboardScore_AsyncFunction_UploadLeaderboardScore_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UploadLeaderboardScore_AsyncFunction_UploadLeaderboardScore_Statics::PropPointers) < 2048);
// ********** End Function UploadLeaderboardScore Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UploadLeaderboardScore_AsyncFunction_UploadLeaderboardScore_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_UploadLeaderboardScore_AsyncFunction, nullptr, "UploadLeaderboardScore", 	Z_Construct_UFunction_USIK_UploadLeaderboardScore_AsyncFunction_UploadLeaderboardScore_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UploadLeaderboardScore_AsyncFunction_UploadLeaderboardScore_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_UploadLeaderboardScore_AsyncFunction_UploadLeaderboardScore_Statics::SIK_UploadLeaderboardScore_AsyncFunction_eventUploadLeaderboardScore_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UploadLeaderboardScore_AsyncFunction_UploadLeaderboardScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UploadLeaderboardScore_AsyncFunction_UploadLeaderboardScore_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_UploadLeaderboardScore_AsyncFunction_UploadLeaderboardScore_Statics::SIK_UploadLeaderboardScore_AsyncFunction_eventUploadLeaderboardScore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UploadLeaderboardScore_AsyncFunction_UploadLeaderboardScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UploadLeaderboardScore_AsyncFunction_UploadLeaderboardScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UploadLeaderboardScore_AsyncFunction::execUploadLeaderboardScore)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_LeaderboardId);
	P_GET_PROPERTY(FByteProperty,Z_Param_UploadScoreMethod);
	P_GET_PROPERTY(FIntProperty,Z_Param_Score);
	P_GET_TARRAY_REF(int32,Z_Param_Out_ScoreDetails);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_UploadLeaderboardScore_AsyncFunction**)Z_Param__Result=USIK_UploadLeaderboardScore_AsyncFunction::UploadLeaderboardScore(Z_Param_LeaderboardId,ESIK_LeaderboardUploadScoreMethod(Z_Param_UploadScoreMethod),Z_Param_Score,Z_Param_Out_ScoreDetails);
	P_NATIVE_END;
}
// ********** End Class USIK_UploadLeaderboardScore_AsyncFunction Function UploadLeaderboardScore **

// ********** Begin Class USIK_UploadLeaderboardScore_AsyncFunction ********************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_UploadLeaderboardScore_AsyncFunction;
UClass* USIK_UploadLeaderboardScore_AsyncFunction::GetPrivateStaticClass()
{
	using TClass = USIK_UploadLeaderboardScore_AsyncFunction;
	if (!Z_Registration_Info_UClass_USIK_UploadLeaderboardScore_AsyncFunction.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_UploadLeaderboardScore_AsyncFunction"),
			Z_Registration_Info_UClass_USIK_UploadLeaderboardScore_AsyncFunction.InnerSingleton,
			StaticRegisterNativesUSIK_UploadLeaderboardScore_AsyncFunction,
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
	return Z_Registration_Info_UClass_USIK_UploadLeaderboardScore_AsyncFunction.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_UploadLeaderboardScore_AsyncFunction_NoRegister()
{
	return USIK_UploadLeaderboardScore_AsyncFunction::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_UploadLeaderboardScore_AsyncFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Functions/UserStats/SIK_UploadLeaderboardScore_AsyncFunction.h" },
		{ "ModuleRelativePath", "Functions/UserStats/SIK_UploadLeaderboardScore_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Functions/UserStats/SIK_UploadLeaderboardScore_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Functions/UserStats/SIK_UploadLeaderboardScore_AsyncFunction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_UploadLeaderboardScore_AsyncFunction constinit property declarations 
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USIK_UploadLeaderboardScore_AsyncFunction constinit property declarations **
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("UploadLeaderboardScore"), .Pointer = &USIK_UploadLeaderboardScore_AsyncFunction::execUploadLeaderboardScore },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_UploadLeaderboardScore_AsyncFunction_UploadLeaderboardScore, "UploadLeaderboardScore" }, // 116756783
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_UploadLeaderboardScore_AsyncFunction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_UploadLeaderboardScore_AsyncFunction_Statics

// ********** Begin Class USIK_UploadLeaderboardScore_AsyncFunction Property Definitions ***********
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_UploadLeaderboardScore_AsyncFunction_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_UploadLeaderboardScore_AsyncFunction, OnSuccess), Z_Construct_UDelegateFunction_SteamIntegrationKit_LeaderboardScoreUploaded_Delegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 2163973772
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_UploadLeaderboardScore_AsyncFunction_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_UploadLeaderboardScore_AsyncFunction, OnFailure), Z_Construct_UDelegateFunction_SteamIntegrationKit_LeaderboardScoreUploaded_Delegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 2163973772
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USIK_UploadLeaderboardScore_AsyncFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_UploadLeaderboardScore_AsyncFunction_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_UploadLeaderboardScore_AsyncFunction_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_UploadLeaderboardScore_AsyncFunction_Statics::PropPointers) < 2048);
// ********** End Class USIK_UploadLeaderboardScore_AsyncFunction Property Definitions *************
UObject* (*const Z_Construct_UClass_USIK_UploadLeaderboardScore_AsyncFunction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_UploadLeaderboardScore_AsyncFunction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_UploadLeaderboardScore_AsyncFunction_Statics::ClassParams = {
	&USIK_UploadLeaderboardScore_AsyncFunction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USIK_UploadLeaderboardScore_AsyncFunction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USIK_UploadLeaderboardScore_AsyncFunction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_UploadLeaderboardScore_AsyncFunction_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_UploadLeaderboardScore_AsyncFunction_Statics::Class_MetaDataParams)
};
void USIK_UploadLeaderboardScore_AsyncFunction::StaticRegisterNativesUSIK_UploadLeaderboardScore_AsyncFunction()
{
	UClass* Class = USIK_UploadLeaderboardScore_AsyncFunction::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_UploadLeaderboardScore_AsyncFunction_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_UploadLeaderboardScore_AsyncFunction()
{
	if (!Z_Registration_Info_UClass_USIK_UploadLeaderboardScore_AsyncFunction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_UploadLeaderboardScore_AsyncFunction.OuterSingleton, Z_Construct_UClass_USIK_UploadLeaderboardScore_AsyncFunction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_UploadLeaderboardScore_AsyncFunction.OuterSingleton;
}
USIK_UploadLeaderboardScore_AsyncFunction::USIK_UploadLeaderboardScore_AsyncFunction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_UploadLeaderboardScore_AsyncFunction);
USIK_UploadLeaderboardScore_AsyncFunction::~USIK_UploadLeaderboardScore_AsyncFunction() {}
// ********** End Class USIK_UploadLeaderboardScore_AsyncFunction **********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_UploadLeaderboardScore_AsyncFunction_h__Script_SteamIntegrationKit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESIK_LeaderboardUploadScoreMethod_StaticEnum, TEXT("ESIK_LeaderboardUploadScoreMethod"), &Z_Registration_Info_UEnum_ESIK_LeaderboardUploadScoreMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1232709308U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSIK_LeaderboardScoreUploaded::StaticStruct, Z_Construct_UScriptStruct_FSIK_LeaderboardScoreUploaded_Statics::NewStructOps, TEXT("SIK_LeaderboardScoreUploaded"),&Z_Registration_Info_UScriptStruct_FSIK_LeaderboardScoreUploaded, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSIK_LeaderboardScoreUploaded), 3859887261U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_UploadLeaderboardScore_AsyncFunction, USIK_UploadLeaderboardScore_AsyncFunction::StaticClass, TEXT("USIK_UploadLeaderboardScore_AsyncFunction"), &Z_Registration_Info_UClass_USIK_UploadLeaderboardScore_AsyncFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_UploadLeaderboardScore_AsyncFunction), 4258381198U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_UploadLeaderboardScore_AsyncFunction_h__Script_SteamIntegrationKit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_UploadLeaderboardScore_AsyncFunction_h__Script_SteamIntegrationKit_2315422539{
	TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_UploadLeaderboardScore_AsyncFunction_h__Script_SteamIntegrationKit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_UploadLeaderboardScore_AsyncFunction_h__Script_SteamIntegrationKit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_UploadLeaderboardScore_AsyncFunction_h__Script_SteamIntegrationKit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_UploadLeaderboardScore_AsyncFunction_h__Script_SteamIntegrationKit_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_UploadLeaderboardScore_AsyncFunction_h__Script_SteamIntegrationKit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_UploadLeaderboardScore_AsyncFunction_h__Script_SteamIntegrationKit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
