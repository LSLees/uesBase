// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/UGC/SIK_SendQueryUGCRequest_AsyncFunction.h"
#include "SIK_SharedFile.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_SendQueryUGCRequest_AsyncFunction() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_SendQueryUGCRequest_AsyncFunction();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_SendQueryUGCRequest_AsyncFunction_NoRegister();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSendQueryUGCRequestComplete__DelegateSignature();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_UGCQueryHandle();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnSendQueryUGCRequestComplete ****************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSendQueryUGCRequestComplete__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnSendQueryUGCRequestComplete_Parms
	{
		FSIK_UGCQueryHandle QueryHandle;
		TEnumAsByte<ESIK_Result> Result;
		int32 NumResultsReturned;
		int32 TotalMatchingResults;
		bool bCachedData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/UGC/SIK_SendQueryUGCRequest_AsyncFunction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnSendQueryUGCRequestComplete constinit property declarations ********
	static const UECodeGen_Private::FStructPropertyParams NewProp_QueryHandle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumResultsReturned;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TotalMatchingResults;
	static void NewProp_bCachedData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCachedData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnSendQueryUGCRequestComplete constinit property declarations **********
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnSendQueryUGCRequestComplete Property Definitions *******************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSendQueryUGCRequestComplete__DelegateSignature_Statics::NewProp_QueryHandle = { "QueryHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnSendQueryUGCRequestComplete_Parms, QueryHandle), Z_Construct_UScriptStruct_FSIK_UGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 480072375
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSendQueryUGCRequestComplete__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnSendQueryUGCRequestComplete_Parms, Result), Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result, METADATA_PARAMS(0, nullptr) }; // 655382749
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSendQueryUGCRequestComplete__DelegateSignature_Statics::NewProp_NumResultsReturned = { "NumResultsReturned", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnSendQueryUGCRequestComplete_Parms, NumResultsReturned), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSendQueryUGCRequestComplete__DelegateSignature_Statics::NewProp_TotalMatchingResults = { "TotalMatchingResults", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnSendQueryUGCRequestComplete_Parms, TotalMatchingResults), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSendQueryUGCRequestComplete__DelegateSignature_Statics::NewProp_bCachedData_SetBit(void* Obj)
{
	((_Script_SteamIntegrationKit_eventOnSendQueryUGCRequestComplete_Parms*)Obj)->bCachedData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSendQueryUGCRequestComplete__DelegateSignature_Statics::NewProp_bCachedData = { "bCachedData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamIntegrationKit_eventOnSendQueryUGCRequestComplete_Parms), &Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSendQueryUGCRequestComplete__DelegateSignature_Statics::NewProp_bCachedData_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSendQueryUGCRequestComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSendQueryUGCRequestComplete__DelegateSignature_Statics::NewProp_QueryHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSendQueryUGCRequestComplete__DelegateSignature_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSendQueryUGCRequestComplete__DelegateSignature_Statics::NewProp_NumResultsReturned,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSendQueryUGCRequestComplete__DelegateSignature_Statics::NewProp_TotalMatchingResults,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSendQueryUGCRequestComplete__DelegateSignature_Statics::NewProp_bCachedData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSendQueryUGCRequestComplete__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnSendQueryUGCRequestComplete Property Definitions *********************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSendQueryUGCRequestComplete__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnSendQueryUGCRequestComplete__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSendQueryUGCRequestComplete__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSendQueryUGCRequestComplete__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSendQueryUGCRequestComplete__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnSendQueryUGCRequestComplete_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSendQueryUGCRequestComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSendQueryUGCRequestComplete__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSendQueryUGCRequestComplete__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnSendQueryUGCRequestComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSendQueryUGCRequestComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSendQueryUGCRequestComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSendQueryUGCRequestComplete_DelegateWrapper(const FMulticastScriptDelegate& OnSendQueryUGCRequestComplete, FSIK_UGCQueryHandle QueryHandle, ESIK_Result Result, int32 NumResultsReturned, int32 TotalMatchingResults, bool bCachedData)
{
	struct _Script_SteamIntegrationKit_eventOnSendQueryUGCRequestComplete_Parms
	{
		FSIK_UGCQueryHandle QueryHandle;
		TEnumAsByte<ESIK_Result> Result;
		int32 NumResultsReturned;
		int32 TotalMatchingResults;
		bool bCachedData;
	};
	_Script_SteamIntegrationKit_eventOnSendQueryUGCRequestComplete_Parms Parms;
	Parms.QueryHandle=QueryHandle;
	Parms.Result=Result;
	Parms.NumResultsReturned=NumResultsReturned;
	Parms.TotalMatchingResults=TotalMatchingResults;
	Parms.bCachedData=bCachedData ? true : false;
	OnSendQueryUGCRequestComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnSendQueryUGCRequestComplete ******************************************

// ********** Begin Class USIK_SendQueryUGCRequest_AsyncFunction Function SendQueryUGCRequest ******
struct Z_Construct_UFunction_USIK_SendQueryUGCRequest_AsyncFunction_SendQueryUGCRequest_Statics
{
	struct SIK_SendQueryUGCRequest_AsyncFunction_eventSendQueryUGCRequest_Parms
	{
		FSIK_UGCQueryHandle QueryHandle;
		USIK_SendQueryUGCRequest_AsyncFunction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_SendQueryUGCRequest_AsyncFunction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SendQueryUGCRequest constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_QueryHandle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SendQueryUGCRequest constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SendQueryUGCRequest Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_SendQueryUGCRequest_AsyncFunction_SendQueryUGCRequest_Statics::NewProp_QueryHandle = { "QueryHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_SendQueryUGCRequest_AsyncFunction_eventSendQueryUGCRequest_Parms, QueryHandle), Z_Construct_UScriptStruct_FSIK_UGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 480072375
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_SendQueryUGCRequest_AsyncFunction_SendQueryUGCRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_SendQueryUGCRequest_AsyncFunction_eventSendQueryUGCRequest_Parms, ReturnValue), Z_Construct_UClass_USIK_SendQueryUGCRequest_AsyncFunction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_SendQueryUGCRequest_AsyncFunction_SendQueryUGCRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SendQueryUGCRequest_AsyncFunction_SendQueryUGCRequest_Statics::NewProp_QueryHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SendQueryUGCRequest_AsyncFunction_SendQueryUGCRequest_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SendQueryUGCRequest_AsyncFunction_SendQueryUGCRequest_Statics::PropPointers) < 2048);
// ********** End Function SendQueryUGCRequest Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_SendQueryUGCRequest_AsyncFunction_SendQueryUGCRequest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_SendQueryUGCRequest_AsyncFunction, nullptr, "SendQueryUGCRequest", 	Z_Construct_UFunction_USIK_SendQueryUGCRequest_AsyncFunction_SendQueryUGCRequest_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SendQueryUGCRequest_AsyncFunction_SendQueryUGCRequest_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_SendQueryUGCRequest_AsyncFunction_SendQueryUGCRequest_Statics::SIK_SendQueryUGCRequest_AsyncFunction_eventSendQueryUGCRequest_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SendQueryUGCRequest_AsyncFunction_SendQueryUGCRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_SendQueryUGCRequest_AsyncFunction_SendQueryUGCRequest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_SendQueryUGCRequest_AsyncFunction_SendQueryUGCRequest_Statics::SIK_SendQueryUGCRequest_AsyncFunction_eventSendQueryUGCRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_SendQueryUGCRequest_AsyncFunction_SendQueryUGCRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_SendQueryUGCRequest_AsyncFunction_SendQueryUGCRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_SendQueryUGCRequest_AsyncFunction::execSendQueryUGCRequest)
{
	P_GET_STRUCT(FSIK_UGCQueryHandle,Z_Param_QueryHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_SendQueryUGCRequest_AsyncFunction**)Z_Param__Result=USIK_SendQueryUGCRequest_AsyncFunction::SendQueryUGCRequest(Z_Param_QueryHandle);
	P_NATIVE_END;
}
// ********** End Class USIK_SendQueryUGCRequest_AsyncFunction Function SendQueryUGCRequest ********

// ********** Begin Class USIK_SendQueryUGCRequest_AsyncFunction ***********************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_SendQueryUGCRequest_AsyncFunction;
UClass* USIK_SendQueryUGCRequest_AsyncFunction::GetPrivateStaticClass()
{
	using TClass = USIK_SendQueryUGCRequest_AsyncFunction;
	if (!Z_Registration_Info_UClass_USIK_SendQueryUGCRequest_AsyncFunction.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_SendQueryUGCRequest_AsyncFunction"),
			Z_Registration_Info_UClass_USIK_SendQueryUGCRequest_AsyncFunction.InnerSingleton,
			StaticRegisterNativesUSIK_SendQueryUGCRequest_AsyncFunction,
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
	return Z_Registration_Info_UClass_USIK_SendQueryUGCRequest_AsyncFunction.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_SendQueryUGCRequest_AsyncFunction_NoRegister()
{
	return USIK_SendQueryUGCRequest_AsyncFunction::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_SendQueryUGCRequest_AsyncFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Functions/UGC/SIK_SendQueryUGCRequest_AsyncFunction.h" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_SendQueryUGCRequest_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Functions/UGC/SIK_SendQueryUGCRequest_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Functions/UGC/SIK_SendQueryUGCRequest_AsyncFunction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_SendQueryUGCRequest_AsyncFunction constinit property declarations ***
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USIK_SendQueryUGCRequest_AsyncFunction constinit property declarations *****
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("SendQueryUGCRequest"), .Pointer = &USIK_SendQueryUGCRequest_AsyncFunction::execSendQueryUGCRequest },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_SendQueryUGCRequest_AsyncFunction_SendQueryUGCRequest, "SendQueryUGCRequest" }, // 2727799709
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_SendQueryUGCRequest_AsyncFunction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_SendQueryUGCRequest_AsyncFunction_Statics

// ********** Begin Class USIK_SendQueryUGCRequest_AsyncFunction Property Definitions **************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_SendQueryUGCRequest_AsyncFunction_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_SendQueryUGCRequest_AsyncFunction, OnSuccess), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSendQueryUGCRequestComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 2462164628
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_SendQueryUGCRequest_AsyncFunction_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_SendQueryUGCRequest_AsyncFunction, OnFailure), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSendQueryUGCRequestComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 2462164628
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USIK_SendQueryUGCRequest_AsyncFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_SendQueryUGCRequest_AsyncFunction_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_SendQueryUGCRequest_AsyncFunction_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_SendQueryUGCRequest_AsyncFunction_Statics::PropPointers) < 2048);
// ********** End Class USIK_SendQueryUGCRequest_AsyncFunction Property Definitions ****************
UObject* (*const Z_Construct_UClass_USIK_SendQueryUGCRequest_AsyncFunction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_SendQueryUGCRequest_AsyncFunction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_SendQueryUGCRequest_AsyncFunction_Statics::ClassParams = {
	&USIK_SendQueryUGCRequest_AsyncFunction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USIK_SendQueryUGCRequest_AsyncFunction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USIK_SendQueryUGCRequest_AsyncFunction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_SendQueryUGCRequest_AsyncFunction_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_SendQueryUGCRequest_AsyncFunction_Statics::Class_MetaDataParams)
};
void USIK_SendQueryUGCRequest_AsyncFunction::StaticRegisterNativesUSIK_SendQueryUGCRequest_AsyncFunction()
{
	UClass* Class = USIK_SendQueryUGCRequest_AsyncFunction::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_SendQueryUGCRequest_AsyncFunction_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_SendQueryUGCRequest_AsyncFunction()
{
	if (!Z_Registration_Info_UClass_USIK_SendQueryUGCRequest_AsyncFunction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_SendQueryUGCRequest_AsyncFunction.OuterSingleton, Z_Construct_UClass_USIK_SendQueryUGCRequest_AsyncFunction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_SendQueryUGCRequest_AsyncFunction.OuterSingleton;
}
USIK_SendQueryUGCRequest_AsyncFunction::USIK_SendQueryUGCRequest_AsyncFunction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_SendQueryUGCRequest_AsyncFunction);
USIK_SendQueryUGCRequest_AsyncFunction::~USIK_SendQueryUGCRequest_AsyncFunction() {}
// ********** End Class USIK_SendQueryUGCRequest_AsyncFunction *************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_SendQueryUGCRequest_AsyncFunction_h__Script_SteamIntegrationKit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_SendQueryUGCRequest_AsyncFunction, USIK_SendQueryUGCRequest_AsyncFunction::StaticClass, TEXT("USIK_SendQueryUGCRequest_AsyncFunction"), &Z_Registration_Info_UClass_USIK_SendQueryUGCRequest_AsyncFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_SendQueryUGCRequest_AsyncFunction), 2231807582U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_SendQueryUGCRequest_AsyncFunction_h__Script_SteamIntegrationKit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_SendQueryUGCRequest_AsyncFunction_h__Script_SteamIntegrationKit_757976731{
	TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_SendQueryUGCRequest_AsyncFunction_h__Script_SteamIntegrationKit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_SendQueryUGCRequest_AsyncFunction_h__Script_SteamIntegrationKit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
