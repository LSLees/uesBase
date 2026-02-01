// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/UserStats/SIK_CreateLeaderboard_AsyncFunction.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_CreateLeaderboard_AsyncFunction() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_CreateLeaderboard_AsyncFunction();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_CreateLeaderboard_AsyncFunction_NoRegister();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_LeaderboardDisplayType();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_LeaderboardSortMethod();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_CreateorFindLeaderboard_Delegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ESIK_LeaderboardSortMethod ************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESIK_LeaderboardSortMethod;
static UEnum* ESIK_LeaderboardSortMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESIK_LeaderboardSortMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESIK_LeaderboardSortMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamIntegrationKit_ESIK_LeaderboardSortMethod, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("ESIK_LeaderboardSortMethod"));
	}
	return Z_Registration_Info_UEnum_ESIK_LeaderboardSortMethod.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<ESIK_LeaderboardSortMethod>()
{
	return ESIK_LeaderboardSortMethod_StaticEnum();
}
struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_LeaderboardSortMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "LeaderboardSortMethodAscending.Comment", "// no special display rules\n" },
		{ "LeaderboardSortMethodAscending.DisplayName", "Ascending" },
		{ "LeaderboardSortMethodAscending.Name", "LeaderboardSortMethodAscending" },
		{ "LeaderboardSortMethodAscending.ToolTip", "no special display rules" },
		{ "LeaderboardSortMethodDescending.Comment", "// top-score is lowest number\n" },
		{ "LeaderboardSortMethodDescending.DisplayName", "Descending" },
		{ "LeaderboardSortMethodDescending.Name", "LeaderboardSortMethodDescending" },
		{ "LeaderboardSortMethodDescending.ToolTip", "top-score is lowest number" },
		{ "LeaderboardSortMethodNone.DisplayName", "None" },
		{ "LeaderboardSortMethodNone.Name", "LeaderboardSortMethodNone" },
		{ "ModuleRelativePath", "Functions/UserStats/SIK_CreateLeaderboard_AsyncFunction.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "LeaderboardSortMethodNone", (int64)LeaderboardSortMethodNone },
		{ "LeaderboardSortMethodAscending", (int64)LeaderboardSortMethodAscending },
		{ "LeaderboardSortMethodDescending", (int64)LeaderboardSortMethodDescending },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_LeaderboardSortMethod_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamIntegrationKit_ESIK_LeaderboardSortMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	"ESIK_LeaderboardSortMethod",
	"ESIK_LeaderboardSortMethod",
	Z_Construct_UEnum_SteamIntegrationKit_ESIK_LeaderboardSortMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_LeaderboardSortMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_LeaderboardSortMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamIntegrationKit_ESIK_LeaderboardSortMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_LeaderboardSortMethod()
{
	if (!Z_Registration_Info_UEnum_ESIK_LeaderboardSortMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESIK_LeaderboardSortMethod.InnerSingleton, Z_Construct_UEnum_SteamIntegrationKit_ESIK_LeaderboardSortMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESIK_LeaderboardSortMethod.InnerSingleton;
}
// ********** End Enum ESIK_LeaderboardSortMethod **************************************************

// ********** Begin Enum ESIK_LeaderboardDisplayType ***********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESIK_LeaderboardDisplayType;
static UEnum* ESIK_LeaderboardDisplayType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESIK_LeaderboardDisplayType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESIK_LeaderboardDisplayType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamIntegrationKit_ESIK_LeaderboardDisplayType, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("ESIK_LeaderboardDisplayType"));
	}
	return Z_Registration_Info_UEnum_ESIK_LeaderboardDisplayType.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<ESIK_LeaderboardDisplayType>()
{
	return ESIK_LeaderboardDisplayType_StaticEnum();
}
struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_LeaderboardDisplayType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "LeaderboardDisplayTypeNone.DisplayName", "None" },
		{ "LeaderboardDisplayTypeNone.Name", "LeaderboardDisplayTypeNone" },
		{ "LeaderboardDisplayTypeNumeric.Comment", "// no special display rules\n" },
		{ "LeaderboardDisplayTypeNumeric.DisplayName", "Numeric" },
		{ "LeaderboardDisplayTypeNumeric.Name", "LeaderboardDisplayTypeNumeric" },
		{ "LeaderboardDisplayTypeNumeric.ToolTip", "no special display rules" },
		{ "LeaderboardDisplayTypeTimeMilliSeconds.Comment", "// the duration is in seconds, the lower the value the better\n" },
		{ "LeaderboardDisplayTypeTimeMilliSeconds.DisplayName", "TimeMilliSeconds" },
		{ "LeaderboardDisplayTypeTimeMilliSeconds.Name", "LeaderboardDisplayTypeTimeMilliSeconds" },
		{ "LeaderboardDisplayTypeTimeMilliSeconds.ToolTip", "the duration is in seconds, the lower the value the better" },
		{ "LeaderboardDisplayTypeTimeSeconds.Comment", "// lower score is better\n" },
		{ "LeaderboardDisplayTypeTimeSeconds.DisplayName", "TimeSeconds" },
		{ "LeaderboardDisplayTypeTimeSeconds.Name", "LeaderboardDisplayTypeTimeSeconds" },
		{ "LeaderboardDisplayTypeTimeSeconds.ToolTip", "lower score is better" },
		{ "ModuleRelativePath", "Functions/UserStats/SIK_CreateLeaderboard_AsyncFunction.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "LeaderboardDisplayTypeNone", (int64)LeaderboardDisplayTypeNone },
		{ "LeaderboardDisplayTypeNumeric", (int64)LeaderboardDisplayTypeNumeric },
		{ "LeaderboardDisplayTypeTimeSeconds", (int64)LeaderboardDisplayTypeTimeSeconds },
		{ "LeaderboardDisplayTypeTimeMilliSeconds", (int64)LeaderboardDisplayTypeTimeMilliSeconds },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_LeaderboardDisplayType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamIntegrationKit_ESIK_LeaderboardDisplayType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	"ESIK_LeaderboardDisplayType",
	"ESIK_LeaderboardDisplayType",
	Z_Construct_UEnum_SteamIntegrationKit_ESIK_LeaderboardDisplayType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_LeaderboardDisplayType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_LeaderboardDisplayType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamIntegrationKit_ESIK_LeaderboardDisplayType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_LeaderboardDisplayType()
{
	if (!Z_Registration_Info_UEnum_ESIK_LeaderboardDisplayType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESIK_LeaderboardDisplayType.InnerSingleton, Z_Construct_UEnum_SteamIntegrationKit_ESIK_LeaderboardDisplayType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESIK_LeaderboardDisplayType.InnerSingleton;
}
// ********** End Enum ESIK_LeaderboardDisplayType *************************************************

// ********** Begin Delegate FCreateorFindLeaderboard_Delegate *************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_CreateorFindLeaderboard_Delegate__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventCreateorFindLeaderboard_Delegate_Parms
	{
		int32 LeaderboardID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/UserStats/SIK_CreateLeaderboard_AsyncFunction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FCreateorFindLeaderboard_Delegate constinit property declarations *****
	static const UECodeGen_Private::FIntPropertyParams NewProp_LeaderboardID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FCreateorFindLeaderboard_Delegate constinit property declarations *******
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FCreateorFindLeaderboard_Delegate Property Definitions ****************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_CreateorFindLeaderboard_Delegate__DelegateSignature_Statics::NewProp_LeaderboardID = { "LeaderboardID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventCreateorFindLeaderboard_Delegate_Parms, LeaderboardID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_CreateorFindLeaderboard_Delegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_CreateorFindLeaderboard_Delegate__DelegateSignature_Statics::NewProp_LeaderboardID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_CreateorFindLeaderboard_Delegate__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FCreateorFindLeaderboard_Delegate Property Definitions ******************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_CreateorFindLeaderboard_Delegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "CreateorFindLeaderboard_Delegate__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_CreateorFindLeaderboard_Delegate__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_CreateorFindLeaderboard_Delegate__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_CreateorFindLeaderboard_Delegate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventCreateorFindLeaderboard_Delegate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_CreateorFindLeaderboard_Delegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_CreateorFindLeaderboard_Delegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_CreateorFindLeaderboard_Delegate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventCreateorFindLeaderboard_Delegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_CreateorFindLeaderboard_Delegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_CreateorFindLeaderboard_Delegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FCreateorFindLeaderboard_Delegate_DelegateWrapper(const FMulticastScriptDelegate& CreateorFindLeaderboard_Delegate, int32 LeaderboardID)
{
	struct _Script_SteamIntegrationKit_eventCreateorFindLeaderboard_Delegate_Parms
	{
		int32 LeaderboardID;
	};
	_Script_SteamIntegrationKit_eventCreateorFindLeaderboard_Delegate_Parms Parms;
	Parms.LeaderboardID=LeaderboardID;
	CreateorFindLeaderboard_Delegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FCreateorFindLeaderboard_Delegate ***************************************

// ********** Begin Class USIK_CreateLeaderboard_AsyncFunction Function CreateLeaderboard **********
struct Z_Construct_UFunction_USIK_CreateLeaderboard_AsyncFunction_CreateLeaderboard_Statics
{
	struct SIK_CreateLeaderboard_AsyncFunction_eventCreateLeaderboard_Parms
	{
		FString LeaderboardName;
		TEnumAsByte<ESIK_LeaderboardSortMethod> SortMethod;
		TEnumAsByte<ESIK_LeaderboardDisplayType> DisplayType;
		USIK_CreateLeaderboard_AsyncFunction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit || SDK Functions || User Stats" },
		{ "DisplayName", "Create or Find Steam Leaderboard" },
		{ "ModuleRelativePath", "Functions/UserStats/SIK_CreateLeaderboard_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeaderboardName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function CreateLeaderboard constinit property declarations *********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_LeaderboardName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SortMethod;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DisplayType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CreateLeaderboard constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CreateLeaderboard Property Definitions ********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_CreateLeaderboard_AsyncFunction_CreateLeaderboard_Statics::NewProp_LeaderboardName = { "LeaderboardName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_CreateLeaderboard_AsyncFunction_eventCreateLeaderboard_Parms, LeaderboardName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeaderboardName_MetaData), NewProp_LeaderboardName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_CreateLeaderboard_AsyncFunction_CreateLeaderboard_Statics::NewProp_SortMethod = { "SortMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_CreateLeaderboard_AsyncFunction_eventCreateLeaderboard_Parms, SortMethod), Z_Construct_UEnum_SteamIntegrationKit_ESIK_LeaderboardSortMethod, METADATA_PARAMS(0, nullptr) }; // 2289639269
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_CreateLeaderboard_AsyncFunction_CreateLeaderboard_Statics::NewProp_DisplayType = { "DisplayType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_CreateLeaderboard_AsyncFunction_eventCreateLeaderboard_Parms, DisplayType), Z_Construct_UEnum_SteamIntegrationKit_ESIK_LeaderboardDisplayType, METADATA_PARAMS(0, nullptr) }; // 1450992959
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_CreateLeaderboard_AsyncFunction_CreateLeaderboard_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_CreateLeaderboard_AsyncFunction_eventCreateLeaderboard_Parms, ReturnValue), Z_Construct_UClass_USIK_CreateLeaderboard_AsyncFunction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_CreateLeaderboard_AsyncFunction_CreateLeaderboard_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_CreateLeaderboard_AsyncFunction_CreateLeaderboard_Statics::NewProp_LeaderboardName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_CreateLeaderboard_AsyncFunction_CreateLeaderboard_Statics::NewProp_SortMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_CreateLeaderboard_AsyncFunction_CreateLeaderboard_Statics::NewProp_DisplayType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_CreateLeaderboard_AsyncFunction_CreateLeaderboard_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_CreateLeaderboard_AsyncFunction_CreateLeaderboard_Statics::PropPointers) < 2048);
// ********** End Function CreateLeaderboard Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_CreateLeaderboard_AsyncFunction_CreateLeaderboard_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_CreateLeaderboard_AsyncFunction, nullptr, "CreateLeaderboard", 	Z_Construct_UFunction_USIK_CreateLeaderboard_AsyncFunction_CreateLeaderboard_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_CreateLeaderboard_AsyncFunction_CreateLeaderboard_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_CreateLeaderboard_AsyncFunction_CreateLeaderboard_Statics::SIK_CreateLeaderboard_AsyncFunction_eventCreateLeaderboard_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_CreateLeaderboard_AsyncFunction_CreateLeaderboard_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_CreateLeaderboard_AsyncFunction_CreateLeaderboard_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_CreateLeaderboard_AsyncFunction_CreateLeaderboard_Statics::SIK_CreateLeaderboard_AsyncFunction_eventCreateLeaderboard_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_CreateLeaderboard_AsyncFunction_CreateLeaderboard()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_CreateLeaderboard_AsyncFunction_CreateLeaderboard_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_CreateLeaderboard_AsyncFunction::execCreateLeaderboard)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_LeaderboardName);
	P_GET_PROPERTY(FByteProperty,Z_Param_SortMethod);
	P_GET_PROPERTY(FByteProperty,Z_Param_DisplayType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_CreateLeaderboard_AsyncFunction**)Z_Param__Result=USIK_CreateLeaderboard_AsyncFunction::CreateLeaderboard(Z_Param_LeaderboardName,ESIK_LeaderboardSortMethod(Z_Param_SortMethod),ESIK_LeaderboardDisplayType(Z_Param_DisplayType));
	P_NATIVE_END;
}
// ********** End Class USIK_CreateLeaderboard_AsyncFunction Function CreateLeaderboard ************

// ********** Begin Class USIK_CreateLeaderboard_AsyncFunction *************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_CreateLeaderboard_AsyncFunction;
UClass* USIK_CreateLeaderboard_AsyncFunction::GetPrivateStaticClass()
{
	using TClass = USIK_CreateLeaderboard_AsyncFunction;
	if (!Z_Registration_Info_UClass_USIK_CreateLeaderboard_AsyncFunction.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_CreateLeaderboard_AsyncFunction"),
			Z_Registration_Info_UClass_USIK_CreateLeaderboard_AsyncFunction.InnerSingleton,
			StaticRegisterNativesUSIK_CreateLeaderboard_AsyncFunction,
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
	return Z_Registration_Info_UClass_USIK_CreateLeaderboard_AsyncFunction.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_CreateLeaderboard_AsyncFunction_NoRegister()
{
	return USIK_CreateLeaderboard_AsyncFunction::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_CreateLeaderboard_AsyncFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Functions/UserStats/SIK_CreateLeaderboard_AsyncFunction.h" },
		{ "ModuleRelativePath", "Functions/UserStats/SIK_CreateLeaderboard_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Functions/UserStats/SIK_CreateLeaderboard_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Functions/UserStats/SIK_CreateLeaderboard_AsyncFunction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_CreateLeaderboard_AsyncFunction constinit property declarations *****
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USIK_CreateLeaderboard_AsyncFunction constinit property declarations *******
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CreateLeaderboard"), .Pointer = &USIK_CreateLeaderboard_AsyncFunction::execCreateLeaderboard },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_CreateLeaderboard_AsyncFunction_CreateLeaderboard, "CreateLeaderboard" }, // 378485098
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_CreateLeaderboard_AsyncFunction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_CreateLeaderboard_AsyncFunction_Statics

// ********** Begin Class USIK_CreateLeaderboard_AsyncFunction Property Definitions ****************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_CreateLeaderboard_AsyncFunction_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_CreateLeaderboard_AsyncFunction, OnSuccess), Z_Construct_UDelegateFunction_SteamIntegrationKit_CreateorFindLeaderboard_Delegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 2532764266
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_CreateLeaderboard_AsyncFunction_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_CreateLeaderboard_AsyncFunction, OnFailure), Z_Construct_UDelegateFunction_SteamIntegrationKit_CreateorFindLeaderboard_Delegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 2532764266
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USIK_CreateLeaderboard_AsyncFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_CreateLeaderboard_AsyncFunction_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_CreateLeaderboard_AsyncFunction_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_CreateLeaderboard_AsyncFunction_Statics::PropPointers) < 2048);
// ********** End Class USIK_CreateLeaderboard_AsyncFunction Property Definitions ******************
UObject* (*const Z_Construct_UClass_USIK_CreateLeaderboard_AsyncFunction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_CreateLeaderboard_AsyncFunction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_CreateLeaderboard_AsyncFunction_Statics::ClassParams = {
	&USIK_CreateLeaderboard_AsyncFunction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USIK_CreateLeaderboard_AsyncFunction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USIK_CreateLeaderboard_AsyncFunction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_CreateLeaderboard_AsyncFunction_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_CreateLeaderboard_AsyncFunction_Statics::Class_MetaDataParams)
};
void USIK_CreateLeaderboard_AsyncFunction::StaticRegisterNativesUSIK_CreateLeaderboard_AsyncFunction()
{
	UClass* Class = USIK_CreateLeaderboard_AsyncFunction::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_CreateLeaderboard_AsyncFunction_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_CreateLeaderboard_AsyncFunction()
{
	if (!Z_Registration_Info_UClass_USIK_CreateLeaderboard_AsyncFunction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_CreateLeaderboard_AsyncFunction.OuterSingleton, Z_Construct_UClass_USIK_CreateLeaderboard_AsyncFunction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_CreateLeaderboard_AsyncFunction.OuterSingleton;
}
USIK_CreateLeaderboard_AsyncFunction::USIK_CreateLeaderboard_AsyncFunction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_CreateLeaderboard_AsyncFunction);
USIK_CreateLeaderboard_AsyncFunction::~USIK_CreateLeaderboard_AsyncFunction() {}
// ********** End Class USIK_CreateLeaderboard_AsyncFunction ***************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_CreateLeaderboard_AsyncFunction_h__Script_SteamIntegrationKit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESIK_LeaderboardSortMethod_StaticEnum, TEXT("ESIK_LeaderboardSortMethod"), &Z_Registration_Info_UEnum_ESIK_LeaderboardSortMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2289639269U) },
		{ ESIK_LeaderboardDisplayType_StaticEnum, TEXT("ESIK_LeaderboardDisplayType"), &Z_Registration_Info_UEnum_ESIK_LeaderboardDisplayType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1450992959U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_CreateLeaderboard_AsyncFunction, USIK_CreateLeaderboard_AsyncFunction::StaticClass, TEXT("USIK_CreateLeaderboard_AsyncFunction"), &Z_Registration_Info_UClass_USIK_CreateLeaderboard_AsyncFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_CreateLeaderboard_AsyncFunction), 65980183U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_CreateLeaderboard_AsyncFunction_h__Script_SteamIntegrationKit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_CreateLeaderboard_AsyncFunction_h__Script_SteamIntegrationKit_2740052547{
	TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_CreateLeaderboard_AsyncFunction_h__Script_SteamIntegrationKit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_CreateLeaderboard_AsyncFunction_h__Script_SteamIntegrationKit_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_CreateLeaderboard_AsyncFunction_h__Script_SteamIntegrationKit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_CreateLeaderboard_AsyncFunction_h__Script_SteamIntegrationKit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
