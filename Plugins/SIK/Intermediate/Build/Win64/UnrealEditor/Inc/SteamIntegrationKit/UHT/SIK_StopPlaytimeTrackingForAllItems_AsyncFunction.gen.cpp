// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/UGC/SIK_StopPlaytimeTrackingForAllItems_AsyncFunction.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_StopPlaytimeTrackingForAllItems_AsyncFunction() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_StopPlaytimeTrackingForAllItems_AsyncFunction();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_StopPlaytimeTrackingForAllItems_AsyncFunction_NoRegister();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnStopPlaytimeTrackingForAllItemsComplete__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnStopPlaytimeTrackingForAllItemsComplete ****************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnStopPlaytimeTrackingForAllItemsComplete__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnStopPlaytimeTrackingForAllItemsComplete_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/UGC/SIK_StopPlaytimeTrackingForAllItems_AsyncFunction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnStopPlaytimeTrackingForAllItemsComplete constinit property declarations 
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnStopPlaytimeTrackingForAllItemsComplete constinit property declarations 
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnStopPlaytimeTrackingForAllItemsComplete Property Definitions *******
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnStopPlaytimeTrackingForAllItemsComplete__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnStopPlaytimeTrackingForAllItemsComplete_Parms, Result), Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result, METADATA_PARAMS(0, nullptr) }; // 655382749
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnStopPlaytimeTrackingForAllItemsComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnStopPlaytimeTrackingForAllItemsComplete__DelegateSignature_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnStopPlaytimeTrackingForAllItemsComplete__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnStopPlaytimeTrackingForAllItemsComplete Property Definitions *********
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnStopPlaytimeTrackingForAllItemsComplete__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnStopPlaytimeTrackingForAllItemsComplete__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_OnStopPlaytimeTrackingForAllItemsComplete__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnStopPlaytimeTrackingForAllItemsComplete__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnStopPlaytimeTrackingForAllItemsComplete__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnStopPlaytimeTrackingForAllItemsComplete_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnStopPlaytimeTrackingForAllItemsComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnStopPlaytimeTrackingForAllItemsComplete__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnStopPlaytimeTrackingForAllItemsComplete__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnStopPlaytimeTrackingForAllItemsComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnStopPlaytimeTrackingForAllItemsComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnStopPlaytimeTrackingForAllItemsComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnStopPlaytimeTrackingForAllItemsComplete_DelegateWrapper(const FMulticastScriptDelegate& OnStopPlaytimeTrackingForAllItemsComplete, ESIK_Result Result)
{
	struct _Script_SteamIntegrationKit_eventOnStopPlaytimeTrackingForAllItemsComplete_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
	};
	_Script_SteamIntegrationKit_eventOnStopPlaytimeTrackingForAllItemsComplete_Parms Parms;
	Parms.Result=Result;
	OnStopPlaytimeTrackingForAllItemsComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnStopPlaytimeTrackingForAllItemsComplete ******************************

// ********** Begin Class USIK_StopPlaytimeTrackingForAllItems_AsyncFunction Function StopPlaytimeTrackingForAllItems 
struct Z_Construct_UFunction_USIK_StopPlaytimeTrackingForAllItems_AsyncFunction_StopPlaytimeTrackingForAllItems_Statics
{
	struct SIK_StopPlaytimeTrackingForAllItems_AsyncFunction_eventStopPlaytimeTrackingForAllItems_Parms
	{
		USIK_StopPlaytimeTrackingForAllItems_AsyncFunction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_StopPlaytimeTrackingForAllItems_AsyncFunction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function StopPlaytimeTrackingForAllItems constinit property declarations *******
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function StopPlaytimeTrackingForAllItems constinit property declarations *********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function StopPlaytimeTrackingForAllItems Property Definitions ******************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_StopPlaytimeTrackingForAllItems_AsyncFunction_StopPlaytimeTrackingForAllItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_StopPlaytimeTrackingForAllItems_AsyncFunction_eventStopPlaytimeTrackingForAllItems_Parms, ReturnValue), Z_Construct_UClass_USIK_StopPlaytimeTrackingForAllItems_AsyncFunction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_StopPlaytimeTrackingForAllItems_AsyncFunction_StopPlaytimeTrackingForAllItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_StopPlaytimeTrackingForAllItems_AsyncFunction_StopPlaytimeTrackingForAllItems_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_StopPlaytimeTrackingForAllItems_AsyncFunction_StopPlaytimeTrackingForAllItems_Statics::PropPointers) < 2048);
// ********** End Function StopPlaytimeTrackingForAllItems Property Definitions ********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_StopPlaytimeTrackingForAllItems_AsyncFunction_StopPlaytimeTrackingForAllItems_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_StopPlaytimeTrackingForAllItems_AsyncFunction, nullptr, "StopPlaytimeTrackingForAllItems", 	Z_Construct_UFunction_USIK_StopPlaytimeTrackingForAllItems_AsyncFunction_StopPlaytimeTrackingForAllItems_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_StopPlaytimeTrackingForAllItems_AsyncFunction_StopPlaytimeTrackingForAllItems_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_StopPlaytimeTrackingForAllItems_AsyncFunction_StopPlaytimeTrackingForAllItems_Statics::SIK_StopPlaytimeTrackingForAllItems_AsyncFunction_eventStopPlaytimeTrackingForAllItems_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_StopPlaytimeTrackingForAllItems_AsyncFunction_StopPlaytimeTrackingForAllItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_StopPlaytimeTrackingForAllItems_AsyncFunction_StopPlaytimeTrackingForAllItems_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_StopPlaytimeTrackingForAllItems_AsyncFunction_StopPlaytimeTrackingForAllItems_Statics::SIK_StopPlaytimeTrackingForAllItems_AsyncFunction_eventStopPlaytimeTrackingForAllItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_StopPlaytimeTrackingForAllItems_AsyncFunction_StopPlaytimeTrackingForAllItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_StopPlaytimeTrackingForAllItems_AsyncFunction_StopPlaytimeTrackingForAllItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_StopPlaytimeTrackingForAllItems_AsyncFunction::execStopPlaytimeTrackingForAllItems)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_StopPlaytimeTrackingForAllItems_AsyncFunction**)Z_Param__Result=USIK_StopPlaytimeTrackingForAllItems_AsyncFunction::StopPlaytimeTrackingForAllItems();
	P_NATIVE_END;
}
// ********** End Class USIK_StopPlaytimeTrackingForAllItems_AsyncFunction Function StopPlaytimeTrackingForAllItems 

// ********** Begin Class USIK_StopPlaytimeTrackingForAllItems_AsyncFunction ***********************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_StopPlaytimeTrackingForAllItems_AsyncFunction;
UClass* USIK_StopPlaytimeTrackingForAllItems_AsyncFunction::GetPrivateStaticClass()
{
	using TClass = USIK_StopPlaytimeTrackingForAllItems_AsyncFunction;
	if (!Z_Registration_Info_UClass_USIK_StopPlaytimeTrackingForAllItems_AsyncFunction.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_StopPlaytimeTrackingForAllItems_AsyncFunction"),
			Z_Registration_Info_UClass_USIK_StopPlaytimeTrackingForAllItems_AsyncFunction.InnerSingleton,
			StaticRegisterNativesUSIK_StopPlaytimeTrackingForAllItems_AsyncFunction,
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
	return Z_Registration_Info_UClass_USIK_StopPlaytimeTrackingForAllItems_AsyncFunction.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_StopPlaytimeTrackingForAllItems_AsyncFunction_NoRegister()
{
	return USIK_StopPlaytimeTrackingForAllItems_AsyncFunction::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_StopPlaytimeTrackingForAllItems_AsyncFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Functions/UGC/SIK_StopPlaytimeTrackingForAllItems_AsyncFunction.h" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_StopPlaytimeTrackingForAllItems_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Functions/UGC/SIK_StopPlaytimeTrackingForAllItems_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Functions/UGC/SIK_StopPlaytimeTrackingForAllItems_AsyncFunction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_StopPlaytimeTrackingForAllItems_AsyncFunction constinit property declarations 
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USIK_StopPlaytimeTrackingForAllItems_AsyncFunction constinit property declarations 
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("StopPlaytimeTrackingForAllItems"), .Pointer = &USIK_StopPlaytimeTrackingForAllItems_AsyncFunction::execStopPlaytimeTrackingForAllItems },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_StopPlaytimeTrackingForAllItems_AsyncFunction_StopPlaytimeTrackingForAllItems, "StopPlaytimeTrackingForAllItems" }, // 273867355
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_StopPlaytimeTrackingForAllItems_AsyncFunction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_StopPlaytimeTrackingForAllItems_AsyncFunction_Statics

// ********** Begin Class USIK_StopPlaytimeTrackingForAllItems_AsyncFunction Property Definitions **
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_StopPlaytimeTrackingForAllItems_AsyncFunction_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_StopPlaytimeTrackingForAllItems_AsyncFunction, OnSuccess), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnStopPlaytimeTrackingForAllItemsComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 1091178827
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_StopPlaytimeTrackingForAllItems_AsyncFunction_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_StopPlaytimeTrackingForAllItems_AsyncFunction, OnFailure), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnStopPlaytimeTrackingForAllItemsComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 1091178827
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USIK_StopPlaytimeTrackingForAllItems_AsyncFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_StopPlaytimeTrackingForAllItems_AsyncFunction_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_StopPlaytimeTrackingForAllItems_AsyncFunction_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_StopPlaytimeTrackingForAllItems_AsyncFunction_Statics::PropPointers) < 2048);
// ********** End Class USIK_StopPlaytimeTrackingForAllItems_AsyncFunction Property Definitions ****
UObject* (*const Z_Construct_UClass_USIK_StopPlaytimeTrackingForAllItems_AsyncFunction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_StopPlaytimeTrackingForAllItems_AsyncFunction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_StopPlaytimeTrackingForAllItems_AsyncFunction_Statics::ClassParams = {
	&USIK_StopPlaytimeTrackingForAllItems_AsyncFunction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USIK_StopPlaytimeTrackingForAllItems_AsyncFunction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USIK_StopPlaytimeTrackingForAllItems_AsyncFunction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_StopPlaytimeTrackingForAllItems_AsyncFunction_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_StopPlaytimeTrackingForAllItems_AsyncFunction_Statics::Class_MetaDataParams)
};
void USIK_StopPlaytimeTrackingForAllItems_AsyncFunction::StaticRegisterNativesUSIK_StopPlaytimeTrackingForAllItems_AsyncFunction()
{
	UClass* Class = USIK_StopPlaytimeTrackingForAllItems_AsyncFunction::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_StopPlaytimeTrackingForAllItems_AsyncFunction_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_StopPlaytimeTrackingForAllItems_AsyncFunction()
{
	if (!Z_Registration_Info_UClass_USIK_StopPlaytimeTrackingForAllItems_AsyncFunction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_StopPlaytimeTrackingForAllItems_AsyncFunction.OuterSingleton, Z_Construct_UClass_USIK_StopPlaytimeTrackingForAllItems_AsyncFunction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_StopPlaytimeTrackingForAllItems_AsyncFunction.OuterSingleton;
}
USIK_StopPlaytimeTrackingForAllItems_AsyncFunction::USIK_StopPlaytimeTrackingForAllItems_AsyncFunction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_StopPlaytimeTrackingForAllItems_AsyncFunction);
USIK_StopPlaytimeTrackingForAllItems_AsyncFunction::~USIK_StopPlaytimeTrackingForAllItems_AsyncFunction() {}
// ********** End Class USIK_StopPlaytimeTrackingForAllItems_AsyncFunction *************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_StopPlaytimeTrackingForAllItems_AsyncFunction_h__Script_SteamIntegrationKit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_StopPlaytimeTrackingForAllItems_AsyncFunction, USIK_StopPlaytimeTrackingForAllItems_AsyncFunction::StaticClass, TEXT("USIK_StopPlaytimeTrackingForAllItems_AsyncFunction"), &Z_Registration_Info_UClass_USIK_StopPlaytimeTrackingForAllItems_AsyncFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_StopPlaytimeTrackingForAllItems_AsyncFunction), 2767558799U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_StopPlaytimeTrackingForAllItems_AsyncFunction_h__Script_SteamIntegrationKit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_StopPlaytimeTrackingForAllItems_AsyncFunction_h__Script_SteamIntegrationKit_1468960644{
	TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_StopPlaytimeTrackingForAllItems_AsyncFunction_h__Script_SteamIntegrationKit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_StopPlaytimeTrackingForAllItems_AsyncFunction_h__Script_SteamIntegrationKit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
