// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/UGC/SIK_StopPlaytimeTracking_AsyncFunction.h"
#include "SIK_SharedFile.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_StopPlaytimeTracking_AsyncFunction() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_StopPlaytimeTracking_AsyncFunction();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_StopPlaytimeTracking_AsyncFunction_NoRegister();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnStopPlaytimeTrackingComplete__DelegateSignature();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_PublishedFileId();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnStopPlaytimeTrackingComplete ***************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnStopPlaytimeTrackingComplete__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnStopPlaytimeTrackingComplete_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/UGC/SIK_StopPlaytimeTracking_AsyncFunction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnStopPlaytimeTrackingComplete constinit property declarations *******
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnStopPlaytimeTrackingComplete constinit property declarations *********
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnStopPlaytimeTrackingComplete Property Definitions ******************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnStopPlaytimeTrackingComplete__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnStopPlaytimeTrackingComplete_Parms, Result), Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result, METADATA_PARAMS(0, nullptr) }; // 655382749
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnStopPlaytimeTrackingComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnStopPlaytimeTrackingComplete__DelegateSignature_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnStopPlaytimeTrackingComplete__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnStopPlaytimeTrackingComplete Property Definitions ********************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnStopPlaytimeTrackingComplete__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnStopPlaytimeTrackingComplete__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_OnStopPlaytimeTrackingComplete__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnStopPlaytimeTrackingComplete__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnStopPlaytimeTrackingComplete__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnStopPlaytimeTrackingComplete_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnStopPlaytimeTrackingComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnStopPlaytimeTrackingComplete__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnStopPlaytimeTrackingComplete__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnStopPlaytimeTrackingComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnStopPlaytimeTrackingComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnStopPlaytimeTrackingComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnStopPlaytimeTrackingComplete_DelegateWrapper(const FMulticastScriptDelegate& OnStopPlaytimeTrackingComplete, ESIK_Result Result)
{
	struct _Script_SteamIntegrationKit_eventOnStopPlaytimeTrackingComplete_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
	};
	_Script_SteamIntegrationKit_eventOnStopPlaytimeTrackingComplete_Parms Parms;
	Parms.Result=Result;
	OnStopPlaytimeTrackingComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnStopPlaytimeTrackingComplete *****************************************

// ********** Begin Class USIK_StopPlaytimeTracking_AsyncFunction Function StopPlaytimeTracking ****
struct Z_Construct_UFunction_USIK_StopPlaytimeTracking_AsyncFunction_StopPlaytimeTracking_Statics
{
	struct SIK_StopPlaytimeTracking_AsyncFunction_eventStopPlaytimeTracking_Parms
	{
		TArray<FSIK_PublishedFileId> PublishedFileID;
		int32 NumPublishedFileIDs;
		USIK_StopPlaytimeTracking_AsyncFunction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_StopPlaytimeTracking_AsyncFunction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function StopPlaytimeTracking constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileID_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PublishedFileID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumPublishedFileIDs;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function StopPlaytimeTracking constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function StopPlaytimeTracking Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_StopPlaytimeTracking_AsyncFunction_StopPlaytimeTracking_Statics::NewProp_PublishedFileID_Inner = { "PublishedFileID", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSIK_PublishedFileId, METADATA_PARAMS(0, nullptr) }; // 3479136102
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_StopPlaytimeTracking_AsyncFunction_StopPlaytimeTracking_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_StopPlaytimeTracking_AsyncFunction_eventStopPlaytimeTracking_Parms, PublishedFileID), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3479136102
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_StopPlaytimeTracking_AsyncFunction_StopPlaytimeTracking_Statics::NewProp_NumPublishedFileIDs = { "NumPublishedFileIDs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_StopPlaytimeTracking_AsyncFunction_eventStopPlaytimeTracking_Parms, NumPublishedFileIDs), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_StopPlaytimeTracking_AsyncFunction_StopPlaytimeTracking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_StopPlaytimeTracking_AsyncFunction_eventStopPlaytimeTracking_Parms, ReturnValue), Z_Construct_UClass_USIK_StopPlaytimeTracking_AsyncFunction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_StopPlaytimeTracking_AsyncFunction_StopPlaytimeTracking_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_StopPlaytimeTracking_AsyncFunction_StopPlaytimeTracking_Statics::NewProp_PublishedFileID_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_StopPlaytimeTracking_AsyncFunction_StopPlaytimeTracking_Statics::NewProp_PublishedFileID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_StopPlaytimeTracking_AsyncFunction_StopPlaytimeTracking_Statics::NewProp_NumPublishedFileIDs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_StopPlaytimeTracking_AsyncFunction_StopPlaytimeTracking_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_StopPlaytimeTracking_AsyncFunction_StopPlaytimeTracking_Statics::PropPointers) < 2048);
// ********** End Function StopPlaytimeTracking Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_StopPlaytimeTracking_AsyncFunction_StopPlaytimeTracking_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_StopPlaytimeTracking_AsyncFunction, nullptr, "StopPlaytimeTracking", 	Z_Construct_UFunction_USIK_StopPlaytimeTracking_AsyncFunction_StopPlaytimeTracking_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_StopPlaytimeTracking_AsyncFunction_StopPlaytimeTracking_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_StopPlaytimeTracking_AsyncFunction_StopPlaytimeTracking_Statics::SIK_StopPlaytimeTracking_AsyncFunction_eventStopPlaytimeTracking_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_StopPlaytimeTracking_AsyncFunction_StopPlaytimeTracking_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_StopPlaytimeTracking_AsyncFunction_StopPlaytimeTracking_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_StopPlaytimeTracking_AsyncFunction_StopPlaytimeTracking_Statics::SIK_StopPlaytimeTracking_AsyncFunction_eventStopPlaytimeTracking_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_StopPlaytimeTracking_AsyncFunction_StopPlaytimeTracking()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_StopPlaytimeTracking_AsyncFunction_StopPlaytimeTracking_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_StopPlaytimeTracking_AsyncFunction::execStopPlaytimeTracking)
{
	P_GET_TARRAY(FSIK_PublishedFileId,Z_Param_PublishedFileID);
	P_GET_PROPERTY(FIntProperty,Z_Param_NumPublishedFileIDs);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_StopPlaytimeTracking_AsyncFunction**)Z_Param__Result=USIK_StopPlaytimeTracking_AsyncFunction::StopPlaytimeTracking(Z_Param_PublishedFileID,Z_Param_NumPublishedFileIDs);
	P_NATIVE_END;
}
// ********** End Class USIK_StopPlaytimeTracking_AsyncFunction Function StopPlaytimeTracking ******

// ********** Begin Class USIK_StopPlaytimeTracking_AsyncFunction **********************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_StopPlaytimeTracking_AsyncFunction;
UClass* USIK_StopPlaytimeTracking_AsyncFunction::GetPrivateStaticClass()
{
	using TClass = USIK_StopPlaytimeTracking_AsyncFunction;
	if (!Z_Registration_Info_UClass_USIK_StopPlaytimeTracking_AsyncFunction.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_StopPlaytimeTracking_AsyncFunction"),
			Z_Registration_Info_UClass_USIK_StopPlaytimeTracking_AsyncFunction.InnerSingleton,
			StaticRegisterNativesUSIK_StopPlaytimeTracking_AsyncFunction,
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
	return Z_Registration_Info_UClass_USIK_StopPlaytimeTracking_AsyncFunction.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_StopPlaytimeTracking_AsyncFunction_NoRegister()
{
	return USIK_StopPlaytimeTracking_AsyncFunction::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_StopPlaytimeTracking_AsyncFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Functions/UGC/SIK_StopPlaytimeTracking_AsyncFunction.h" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_StopPlaytimeTracking_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Functions/UGC/SIK_StopPlaytimeTracking_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Functions/UGC/SIK_StopPlaytimeTracking_AsyncFunction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_StopPlaytimeTracking_AsyncFunction constinit property declarations **
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USIK_StopPlaytimeTracking_AsyncFunction constinit property declarations ****
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("StopPlaytimeTracking"), .Pointer = &USIK_StopPlaytimeTracking_AsyncFunction::execStopPlaytimeTracking },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_StopPlaytimeTracking_AsyncFunction_StopPlaytimeTracking, "StopPlaytimeTracking" }, // 2579866628
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_StopPlaytimeTracking_AsyncFunction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_StopPlaytimeTracking_AsyncFunction_Statics

// ********** Begin Class USIK_StopPlaytimeTracking_AsyncFunction Property Definitions *************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_StopPlaytimeTracking_AsyncFunction_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_StopPlaytimeTracking_AsyncFunction, OnSuccess), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnStopPlaytimeTrackingComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 558101500
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_StopPlaytimeTracking_AsyncFunction_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_StopPlaytimeTracking_AsyncFunction, OnFailure), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnStopPlaytimeTrackingComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 558101500
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USIK_StopPlaytimeTracking_AsyncFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_StopPlaytimeTracking_AsyncFunction_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_StopPlaytimeTracking_AsyncFunction_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_StopPlaytimeTracking_AsyncFunction_Statics::PropPointers) < 2048);
// ********** End Class USIK_StopPlaytimeTracking_AsyncFunction Property Definitions ***************
UObject* (*const Z_Construct_UClass_USIK_StopPlaytimeTracking_AsyncFunction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_StopPlaytimeTracking_AsyncFunction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_StopPlaytimeTracking_AsyncFunction_Statics::ClassParams = {
	&USIK_StopPlaytimeTracking_AsyncFunction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USIK_StopPlaytimeTracking_AsyncFunction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USIK_StopPlaytimeTracking_AsyncFunction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_StopPlaytimeTracking_AsyncFunction_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_StopPlaytimeTracking_AsyncFunction_Statics::Class_MetaDataParams)
};
void USIK_StopPlaytimeTracking_AsyncFunction::StaticRegisterNativesUSIK_StopPlaytimeTracking_AsyncFunction()
{
	UClass* Class = USIK_StopPlaytimeTracking_AsyncFunction::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_StopPlaytimeTracking_AsyncFunction_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_StopPlaytimeTracking_AsyncFunction()
{
	if (!Z_Registration_Info_UClass_USIK_StopPlaytimeTracking_AsyncFunction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_StopPlaytimeTracking_AsyncFunction.OuterSingleton, Z_Construct_UClass_USIK_StopPlaytimeTracking_AsyncFunction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_StopPlaytimeTracking_AsyncFunction.OuterSingleton;
}
USIK_StopPlaytimeTracking_AsyncFunction::USIK_StopPlaytimeTracking_AsyncFunction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_StopPlaytimeTracking_AsyncFunction);
USIK_StopPlaytimeTracking_AsyncFunction::~USIK_StopPlaytimeTracking_AsyncFunction() {}
// ********** End Class USIK_StopPlaytimeTracking_AsyncFunction ************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_StopPlaytimeTracking_AsyncFunction_h__Script_SteamIntegrationKit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_StopPlaytimeTracking_AsyncFunction, USIK_StopPlaytimeTracking_AsyncFunction::StaticClass, TEXT("USIK_StopPlaytimeTracking_AsyncFunction"), &Z_Registration_Info_UClass_USIK_StopPlaytimeTracking_AsyncFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_StopPlaytimeTracking_AsyncFunction), 584104432U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_StopPlaytimeTracking_AsyncFunction_h__Script_SteamIntegrationKit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_StopPlaytimeTracking_AsyncFunction_h__Script_SteamIntegrationKit_1585222440{
	TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_StopPlaytimeTracking_AsyncFunction_h__Script_SteamIntegrationKit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_StopPlaytimeTracking_AsyncFunction_h__Script_SteamIntegrationKit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
