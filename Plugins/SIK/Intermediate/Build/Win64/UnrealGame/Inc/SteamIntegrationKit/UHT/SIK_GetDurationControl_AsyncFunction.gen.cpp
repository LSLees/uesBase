// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/User/SIK_GetDurationControl_AsyncFunction.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_GetDurationControl_AsyncFunction() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_GetDurationControl_AsyncFunction();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_GetDurationControl_AsyncFunction_NoRegister();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_DurationControlNotification();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_DurationControlProgress();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnDurationControl__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ESIK_DurationControlNotification ******************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESIK_DurationControlNotification;
static UEnum* ESIK_DurationControlNotification_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESIK_DurationControlNotification.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESIK_DurationControlNotification.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamIntegrationKit_ESIK_DurationControlNotification, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("ESIK_DurationControlNotification"));
	}
	return Z_Registration_Info_UEnum_ESIK_DurationControlNotification.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<ESIK_DurationControlNotification>()
{
	return ESIK_DurationControlNotification_StaticEnum();
}
struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_DurationControlNotification_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DurationControlNotification_1Hour.DisplayName", "1 Hour" },
		{ "DurationControlNotification_1Hour.Name", "DurationControlNotification_1Hour" },
		{ "DurationControlNotification_3Hours.DisplayName", "3 Hours" },
		{ "DurationControlNotification_3Hours.Name", "DurationControlNotification_3Hours" },
		{ "DurationControlNotification_ExitSoon_3h.DisplayName", "Exit Soon 3h" },
		{ "DurationControlNotification_ExitSoon_3h.Name", "DurationControlNotification_ExitSoon_3h" },
		{ "DurationControlNotification_ExitSoon_5h.DisplayName", "Exit Soon 5h" },
		{ "DurationControlNotification_ExitSoon_5h.Name", "DurationControlNotification_ExitSoon_5h" },
		{ "DurationControlNotification_ExitSoon_Night.DisplayName", "Exit Soon Night" },
		{ "DurationControlNotification_ExitSoon_Night.Name", "DurationControlNotification_ExitSoon_Night" },
		{ "DurationControlNotification_HalfProgress.DisplayName", "Half Progress" },
		{ "DurationControlNotification_HalfProgress.Name", "DurationControlNotification_HalfProgress" },
		{ "DurationControlNotification_None.DisplayName", "None" },
		{ "DurationControlNotification_None.Name", "DurationControlNotification_None" },
		{ "ModuleRelativePath", "Functions/User/SIK_GetDurationControl_AsyncFunction.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "DurationControlNotification_None", (int64)DurationControlNotification_None },
		{ "DurationControlNotification_1Hour", (int64)DurationControlNotification_1Hour },
		{ "DurationControlNotification_3Hours", (int64)DurationControlNotification_3Hours },
		{ "DurationControlNotification_HalfProgress", (int64)DurationControlNotification_HalfProgress },
		{ "DurationControlNotification_ExitSoon_3h", (int64)DurationControlNotification_ExitSoon_3h },
		{ "DurationControlNotification_ExitSoon_5h", (int64)DurationControlNotification_ExitSoon_5h },
		{ "DurationControlNotification_ExitSoon_Night", (int64)DurationControlNotification_ExitSoon_Night },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_DurationControlNotification_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamIntegrationKit_ESIK_DurationControlNotification_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	"ESIK_DurationControlNotification",
	"ESIK_DurationControlNotification",
	Z_Construct_UEnum_SteamIntegrationKit_ESIK_DurationControlNotification_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_DurationControlNotification_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_DurationControlNotification_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamIntegrationKit_ESIK_DurationControlNotification_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_DurationControlNotification()
{
	if (!Z_Registration_Info_UEnum_ESIK_DurationControlNotification.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESIK_DurationControlNotification.InnerSingleton, Z_Construct_UEnum_SteamIntegrationKit_ESIK_DurationControlNotification_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESIK_DurationControlNotification.InnerSingleton;
}
// ********** End Enum ESIK_DurationControlNotification ********************************************

// ********** Begin Enum ESIK_DurationControlProgress **********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESIK_DurationControlProgress;
static UEnum* ESIK_DurationControlProgress_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESIK_DurationControlProgress.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESIK_DurationControlProgress.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamIntegrationKit_ESIK_DurationControlProgress, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("ESIK_DurationControlProgress"));
	}
	return Z_Registration_Info_UEnum_ESIK_DurationControlProgress.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<ESIK_DurationControlProgress>()
{
	return ESIK_DurationControlProgress_StaticEnum();
}
struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_DurationControlProgress_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DurationControlProgress_Full.DisplayName", "Full" },
		{ "DurationControlProgress_Full.Name", "DurationControlProgress_Full" },
		{ "DurationControlProgress_Half.DisplayName", "Half" },
		{ "DurationControlProgress_Half.Name", "DurationControlProgress_Half" },
		{ "DurationControlProgress_None.DisplayName", "None" },
		{ "DurationControlProgress_None.Name", "DurationControlProgress_None" },
		{ "ModuleRelativePath", "Functions/User/SIK_GetDurationControl_AsyncFunction.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "DurationControlProgress_Full", (int64)DurationControlProgress_Full },
		{ "DurationControlProgress_Half", (int64)DurationControlProgress_Half },
		{ "DurationControlProgress_None", (int64)DurationControlProgress_None },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_DurationControlProgress_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamIntegrationKit_ESIK_DurationControlProgress_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	"ESIK_DurationControlProgress",
	"ESIK_DurationControlProgress",
	Z_Construct_UEnum_SteamIntegrationKit_ESIK_DurationControlProgress_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_DurationControlProgress_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_DurationControlProgress_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamIntegrationKit_ESIK_DurationControlProgress_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_DurationControlProgress()
{
	if (!Z_Registration_Info_UEnum_ESIK_DurationControlProgress.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESIK_DurationControlProgress.InnerSingleton, Z_Construct_UEnum_SteamIntegrationKit_ESIK_DurationControlProgress_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESIK_DurationControlProgress.InnerSingleton;
}
// ********** End Enum ESIK_DurationControlProgress ************************************************

// ********** Begin Delegate FOnDurationControl ****************************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnDurationControl__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnDurationControl_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
		TEnumAsByte<ESIK_DurationControlNotification> Notification;
		TEnumAsByte<ESIK_DurationControlProgress> Progress;
		int32 SecsLast5h;
		bool bApplicable;
		int32 AppID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/User/SIK_GetDurationControl_AsyncFunction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnDurationControl constinit property declarations ********************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Notification;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Progress;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SecsLast5h;
	static void NewProp_bApplicable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplicable;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnDurationControl constinit property declarations **********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnDurationControl Property Definitions *******************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnDurationControl__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnDurationControl_Parms, Result), Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result, METADATA_PARAMS(0, nullptr) }; // 655382749
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnDurationControl__DelegateSignature_Statics::NewProp_Notification = { "Notification", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnDurationControl_Parms, Notification), Z_Construct_UEnum_SteamIntegrationKit_ESIK_DurationControlNotification, METADATA_PARAMS(0, nullptr) }; // 3874421430
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnDurationControl__DelegateSignature_Statics::NewProp_Progress = { "Progress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnDurationControl_Parms, Progress), Z_Construct_UEnum_SteamIntegrationKit_ESIK_DurationControlProgress, METADATA_PARAMS(0, nullptr) }; // 1070055317
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnDurationControl__DelegateSignature_Statics::NewProp_SecsLast5h = { "SecsLast5h", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnDurationControl_Parms, SecsLast5h), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UDelegateFunction_SteamIntegrationKit_OnDurationControl__DelegateSignature_Statics::NewProp_bApplicable_SetBit(void* Obj)
{
	((_Script_SteamIntegrationKit_eventOnDurationControl_Parms*)Obj)->bApplicable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnDurationControl__DelegateSignature_Statics::NewProp_bApplicable = { "bApplicable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamIntegrationKit_eventOnDurationControl_Parms), &Z_Construct_UDelegateFunction_SteamIntegrationKit_OnDurationControl__DelegateSignature_Statics::NewProp_bApplicable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnDurationControl__DelegateSignature_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnDurationControl_Parms, AppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnDurationControl__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnDurationControl__DelegateSignature_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnDurationControl__DelegateSignature_Statics::NewProp_Notification,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnDurationControl__DelegateSignature_Statics::NewProp_Progress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnDurationControl__DelegateSignature_Statics::NewProp_SecsLast5h,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnDurationControl__DelegateSignature_Statics::NewProp_bApplicable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnDurationControl__DelegateSignature_Statics::NewProp_AppID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnDurationControl__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnDurationControl Property Definitions *********************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnDurationControl__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnDurationControl__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_OnDurationControl__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnDurationControl__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnDurationControl__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnDurationControl_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnDurationControl__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnDurationControl__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnDurationControl__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnDurationControl_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnDurationControl__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnDurationControl__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnDurationControl_DelegateWrapper(const FMulticastScriptDelegate& OnDurationControl, ESIK_Result Result, ESIK_DurationControlNotification Notification, ESIK_DurationControlProgress Progress, int32 SecsLast5h, bool bApplicable, int32 AppID)
{
	struct _Script_SteamIntegrationKit_eventOnDurationControl_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
		TEnumAsByte<ESIK_DurationControlNotification> Notification;
		TEnumAsByte<ESIK_DurationControlProgress> Progress;
		int32 SecsLast5h;
		bool bApplicable;
		int32 AppID;
	};
	_Script_SteamIntegrationKit_eventOnDurationControl_Parms Parms;
	Parms.Result=Result;
	Parms.Notification=Notification;
	Parms.Progress=Progress;
	Parms.SecsLast5h=SecsLast5h;
	Parms.bApplicable=bApplicable ? true : false;
	Parms.AppID=AppID;
	OnDurationControl.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnDurationControl ******************************************************

// ********** Begin Class USIK_GetDurationControl_AsyncFunction Function GetDurationControl ********
struct Z_Construct_UFunction_USIK_GetDurationControl_AsyncFunction_GetDurationControl_Statics
{
	struct SIK_GetDurationControl_AsyncFunction_eventGetDurationControl_Parms
	{
		USIK_GetDurationControl_AsyncFunction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit || SDK Functions || User" },
		{ "DisplayName", "Get Duration Control" },
		{ "ModuleRelativePath", "Functions/User/SIK_GetDurationControl_AsyncFunction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetDurationControl constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetDurationControl constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetDurationControl Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_GetDurationControl_AsyncFunction_GetDurationControl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetDurationControl_AsyncFunction_eventGetDurationControl_Parms, ReturnValue), Z_Construct_UClass_USIK_GetDurationControl_AsyncFunction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GetDurationControl_AsyncFunction_GetDurationControl_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetDurationControl_AsyncFunction_GetDurationControl_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetDurationControl_AsyncFunction_GetDurationControl_Statics::PropPointers) < 2048);
// ********** End Function GetDurationControl Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GetDurationControl_AsyncFunction_GetDurationControl_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_GetDurationControl_AsyncFunction, nullptr, "GetDurationControl", 	Z_Construct_UFunction_USIK_GetDurationControl_AsyncFunction_GetDurationControl_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetDurationControl_AsyncFunction_GetDurationControl_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_GetDurationControl_AsyncFunction_GetDurationControl_Statics::SIK_GetDurationControl_AsyncFunction_eventGetDurationControl_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetDurationControl_AsyncFunction_GetDurationControl_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GetDurationControl_AsyncFunction_GetDurationControl_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_GetDurationControl_AsyncFunction_GetDurationControl_Statics::SIK_GetDurationControl_AsyncFunction_eventGetDurationControl_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GetDurationControl_AsyncFunction_GetDurationControl()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GetDurationControl_AsyncFunction_GetDurationControl_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GetDurationControl_AsyncFunction::execGetDurationControl)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_GetDurationControl_AsyncFunction**)Z_Param__Result=USIK_GetDurationControl_AsyncFunction::GetDurationControl();
	P_NATIVE_END;
}
// ********** End Class USIK_GetDurationControl_AsyncFunction Function GetDurationControl **********

// ********** Begin Class USIK_GetDurationControl_AsyncFunction ************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_GetDurationControl_AsyncFunction;
UClass* USIK_GetDurationControl_AsyncFunction::GetPrivateStaticClass()
{
	using TClass = USIK_GetDurationControl_AsyncFunction;
	if (!Z_Registration_Info_UClass_USIK_GetDurationControl_AsyncFunction.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_GetDurationControl_AsyncFunction"),
			Z_Registration_Info_UClass_USIK_GetDurationControl_AsyncFunction.InnerSingleton,
			StaticRegisterNativesUSIK_GetDurationControl_AsyncFunction,
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
	return Z_Registration_Info_UClass_USIK_GetDurationControl_AsyncFunction.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_GetDurationControl_AsyncFunction_NoRegister()
{
	return USIK_GetDurationControl_AsyncFunction::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_GetDurationControl_AsyncFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Functions/User/SIK_GetDurationControl_AsyncFunction.h" },
		{ "ModuleRelativePath", "Functions/User/SIK_GetDurationControl_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "Category", "Steam Integration Kit | User" },
		{ "ModuleRelativePath", "Functions/User/SIK_GetDurationControl_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "Category", "Steam Integration Kit | User" },
		{ "ModuleRelativePath", "Functions/User/SIK_GetDurationControl_AsyncFunction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_GetDurationControl_AsyncFunction constinit property declarations ****
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USIK_GetDurationControl_AsyncFunction constinit property declarations ******
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetDurationControl"), .Pointer = &USIK_GetDurationControl_AsyncFunction::execGetDurationControl },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_GetDurationControl_AsyncFunction_GetDurationControl, "GetDurationControl" }, // 4200552828
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_GetDurationControl_AsyncFunction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_GetDurationControl_AsyncFunction_Statics

// ********** Begin Class USIK_GetDurationControl_AsyncFunction Property Definitions ***************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_GetDurationControl_AsyncFunction_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_GetDurationControl_AsyncFunction, OnSuccess), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnDurationControl__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 677483097
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_GetDurationControl_AsyncFunction_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_GetDurationControl_AsyncFunction, OnFailure), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnDurationControl__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 677483097
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USIK_GetDurationControl_AsyncFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_GetDurationControl_AsyncFunction_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_GetDurationControl_AsyncFunction_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetDurationControl_AsyncFunction_Statics::PropPointers) < 2048);
// ********** End Class USIK_GetDurationControl_AsyncFunction Property Definitions *****************
UObject* (*const Z_Construct_UClass_USIK_GetDurationControl_AsyncFunction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetDurationControl_AsyncFunction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_GetDurationControl_AsyncFunction_Statics::ClassParams = {
	&USIK_GetDurationControl_AsyncFunction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USIK_GetDurationControl_AsyncFunction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetDurationControl_AsyncFunction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetDurationControl_AsyncFunction_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_GetDurationControl_AsyncFunction_Statics::Class_MetaDataParams)
};
void USIK_GetDurationControl_AsyncFunction::StaticRegisterNativesUSIK_GetDurationControl_AsyncFunction()
{
	UClass* Class = USIK_GetDurationControl_AsyncFunction::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_GetDurationControl_AsyncFunction_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_GetDurationControl_AsyncFunction()
{
	if (!Z_Registration_Info_UClass_USIK_GetDurationControl_AsyncFunction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_GetDurationControl_AsyncFunction.OuterSingleton, Z_Construct_UClass_USIK_GetDurationControl_AsyncFunction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_GetDurationControl_AsyncFunction.OuterSingleton;
}
USIK_GetDurationControl_AsyncFunction::USIK_GetDurationControl_AsyncFunction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_GetDurationControl_AsyncFunction);
USIK_GetDurationControl_AsyncFunction::~USIK_GetDurationControl_AsyncFunction() {}
// ********** End Class USIK_GetDurationControl_AsyncFunction **************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_User_SIK_GetDurationControl_AsyncFunction_h__Script_SteamIntegrationKit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESIK_DurationControlNotification_StaticEnum, TEXT("ESIK_DurationControlNotification"), &Z_Registration_Info_UEnum_ESIK_DurationControlNotification, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3874421430U) },
		{ ESIK_DurationControlProgress_StaticEnum, TEXT("ESIK_DurationControlProgress"), &Z_Registration_Info_UEnum_ESIK_DurationControlProgress, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1070055317U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_GetDurationControl_AsyncFunction, USIK_GetDurationControl_AsyncFunction::StaticClass, TEXT("USIK_GetDurationControl_AsyncFunction"), &Z_Registration_Info_UClass_USIK_GetDurationControl_AsyncFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_GetDurationControl_AsyncFunction), 306084687U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_User_SIK_GetDurationControl_AsyncFunction_h__Script_SteamIntegrationKit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_User_SIK_GetDurationControl_AsyncFunction_h__Script_SteamIntegrationKit_1472772835{
	TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_User_SIK_GetDurationControl_AsyncFunction_h__Script_SteamIntegrationKit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_User_SIK_GetDurationControl_AsyncFunction_h__Script_SteamIntegrationKit_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_User_SIK_GetDurationControl_AsyncFunction_h__Script_SteamIntegrationKit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_User_SIK_GetDurationControl_AsyncFunction_h__Script_SteamIntegrationKit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
