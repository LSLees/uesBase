// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/UGC/SIK_RemoveAppDependency_AsyncFunction.h"
#include "SIK_SharedFile.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_RemoveAppDependency_AsyncFunction() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_RemoveAppDependency_AsyncFunction();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_RemoveAppDependency_AsyncFunction_NoRegister();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveAppDependencyComplete__DelegateSignature();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_AppId();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_PublishedFileId();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnRemoveAppDependencyComplete ****************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveAppDependencyComplete__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnRemoveAppDependencyComplete_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
		FSIK_PublishedFileId PublishedFileID;
		FSIK_AppId AppID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/UGC/SIK_RemoveAppDependency_AsyncFunction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnRemoveAppDependencyComplete constinit property declarations ********
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnRemoveAppDependencyComplete constinit property declarations **********
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnRemoveAppDependencyComplete Property Definitions *******************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveAppDependencyComplete__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnRemoveAppDependencyComplete_Parms, Result), Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result, METADATA_PARAMS(0, nullptr) }; // 655382749
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveAppDependencyComplete__DelegateSignature_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnRemoveAppDependencyComplete_Parms, PublishedFileID), Z_Construct_UScriptStruct_FSIK_PublishedFileId, METADATA_PARAMS(0, nullptr) }; // 3479136102
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveAppDependencyComplete__DelegateSignature_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnRemoveAppDependencyComplete_Parms, AppID), Z_Construct_UScriptStruct_FSIK_AppId, METADATA_PARAMS(0, nullptr) }; // 3325316996
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveAppDependencyComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveAppDependencyComplete__DelegateSignature_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveAppDependencyComplete__DelegateSignature_Statics::NewProp_PublishedFileID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveAppDependencyComplete__DelegateSignature_Statics::NewProp_AppID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveAppDependencyComplete__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnRemoveAppDependencyComplete Property Definitions *********************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveAppDependencyComplete__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnRemoveAppDependencyComplete__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveAppDependencyComplete__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveAppDependencyComplete__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveAppDependencyComplete__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnRemoveAppDependencyComplete_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveAppDependencyComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveAppDependencyComplete__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveAppDependencyComplete__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnRemoveAppDependencyComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveAppDependencyComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveAppDependencyComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRemoveAppDependencyComplete_DelegateWrapper(const FMulticastScriptDelegate& OnRemoveAppDependencyComplete, ESIK_Result Result, FSIK_PublishedFileId PublishedFileID, FSIK_AppId AppID)
{
	struct _Script_SteamIntegrationKit_eventOnRemoveAppDependencyComplete_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
		FSIK_PublishedFileId PublishedFileID;
		FSIK_AppId AppID;
	};
	_Script_SteamIntegrationKit_eventOnRemoveAppDependencyComplete_Parms Parms;
	Parms.Result=Result;
	Parms.PublishedFileID=PublishedFileID;
	Parms.AppID=AppID;
	OnRemoveAppDependencyComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnRemoveAppDependencyComplete ******************************************

// ********** Begin Class USIK_RemoveAppDependency_AsyncFunction Function RemoveAppDependency ******
struct Z_Construct_UFunction_USIK_RemoveAppDependency_AsyncFunction_RemoveAppDependency_Statics
{
	struct SIK_RemoveAppDependency_AsyncFunction_eventRemoveAppDependency_Parms
	{
		FSIK_PublishedFileId PublishedFileID;
		FSIK_AppId AppID;
		USIK_RemoveAppDependency_AsyncFunction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_RemoveAppDependency_AsyncFunction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveAppDependency constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RemoveAppDependency constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RemoveAppDependency Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_RemoveAppDependency_AsyncFunction_RemoveAppDependency_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoveAppDependency_AsyncFunction_eventRemoveAppDependency_Parms, PublishedFileID), Z_Construct_UScriptStruct_FSIK_PublishedFileId, METADATA_PARAMS(0, nullptr) }; // 3479136102
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_RemoveAppDependency_AsyncFunction_RemoveAppDependency_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoveAppDependency_AsyncFunction_eventRemoveAppDependency_Parms, AppID), Z_Construct_UScriptStruct_FSIK_AppId, METADATA_PARAMS(0, nullptr) }; // 3325316996
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_RemoveAppDependency_AsyncFunction_RemoveAppDependency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoveAppDependency_AsyncFunction_eventRemoveAppDependency_Parms, ReturnValue), Z_Construct_UClass_USIK_RemoveAppDependency_AsyncFunction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_RemoveAppDependency_AsyncFunction_RemoveAppDependency_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoveAppDependency_AsyncFunction_RemoveAppDependency_Statics::NewProp_PublishedFileID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoveAppDependency_AsyncFunction_RemoveAppDependency_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoveAppDependency_AsyncFunction_RemoveAppDependency_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoveAppDependency_AsyncFunction_RemoveAppDependency_Statics::PropPointers) < 2048);
// ********** End Function RemoveAppDependency Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_RemoveAppDependency_AsyncFunction_RemoveAppDependency_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_RemoveAppDependency_AsyncFunction, nullptr, "RemoveAppDependency", 	Z_Construct_UFunction_USIK_RemoveAppDependency_AsyncFunction_RemoveAppDependency_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoveAppDependency_AsyncFunction_RemoveAppDependency_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_RemoveAppDependency_AsyncFunction_RemoveAppDependency_Statics::SIK_RemoveAppDependency_AsyncFunction_eventRemoveAppDependency_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoveAppDependency_AsyncFunction_RemoveAppDependency_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_RemoveAppDependency_AsyncFunction_RemoveAppDependency_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_RemoveAppDependency_AsyncFunction_RemoveAppDependency_Statics::SIK_RemoveAppDependency_AsyncFunction_eventRemoveAppDependency_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_RemoveAppDependency_AsyncFunction_RemoveAppDependency()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_RemoveAppDependency_AsyncFunction_RemoveAppDependency_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_RemoveAppDependency_AsyncFunction::execRemoveAppDependency)
{
	P_GET_STRUCT(FSIK_PublishedFileId,Z_Param_PublishedFileID);
	P_GET_STRUCT(FSIK_AppId,Z_Param_AppID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_RemoveAppDependency_AsyncFunction**)Z_Param__Result=USIK_RemoveAppDependency_AsyncFunction::RemoveAppDependency(Z_Param_PublishedFileID,Z_Param_AppID);
	P_NATIVE_END;
}
// ********** End Class USIK_RemoveAppDependency_AsyncFunction Function RemoveAppDependency ********

// ********** Begin Class USIK_RemoveAppDependency_AsyncFunction ***********************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_RemoveAppDependency_AsyncFunction;
UClass* USIK_RemoveAppDependency_AsyncFunction::GetPrivateStaticClass()
{
	using TClass = USIK_RemoveAppDependency_AsyncFunction;
	if (!Z_Registration_Info_UClass_USIK_RemoveAppDependency_AsyncFunction.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_RemoveAppDependency_AsyncFunction"),
			Z_Registration_Info_UClass_USIK_RemoveAppDependency_AsyncFunction.InnerSingleton,
			StaticRegisterNativesUSIK_RemoveAppDependency_AsyncFunction,
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
	return Z_Registration_Info_UClass_USIK_RemoveAppDependency_AsyncFunction.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_RemoveAppDependency_AsyncFunction_NoRegister()
{
	return USIK_RemoveAppDependency_AsyncFunction::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_RemoveAppDependency_AsyncFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Functions/UGC/SIK_RemoveAppDependency_AsyncFunction.h" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_RemoveAppDependency_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Functions/UGC/SIK_RemoveAppDependency_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Functions/UGC/SIK_RemoveAppDependency_AsyncFunction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_RemoveAppDependency_AsyncFunction constinit property declarations ***
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USIK_RemoveAppDependency_AsyncFunction constinit property declarations *****
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("RemoveAppDependency"), .Pointer = &USIK_RemoveAppDependency_AsyncFunction::execRemoveAppDependency },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_RemoveAppDependency_AsyncFunction_RemoveAppDependency, "RemoveAppDependency" }, // 2731523417
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_RemoveAppDependency_AsyncFunction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_RemoveAppDependency_AsyncFunction_Statics

// ********** Begin Class USIK_RemoveAppDependency_AsyncFunction Property Definitions **************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_RemoveAppDependency_AsyncFunction_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_RemoveAppDependency_AsyncFunction, OnSuccess), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveAppDependencyComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 3550670176
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_RemoveAppDependency_AsyncFunction_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_RemoveAppDependency_AsyncFunction, OnFailure), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveAppDependencyComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 3550670176
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USIK_RemoveAppDependency_AsyncFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_RemoveAppDependency_AsyncFunction_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_RemoveAppDependency_AsyncFunction_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_RemoveAppDependency_AsyncFunction_Statics::PropPointers) < 2048);
// ********** End Class USIK_RemoveAppDependency_AsyncFunction Property Definitions ****************
UObject* (*const Z_Construct_UClass_USIK_RemoveAppDependency_AsyncFunction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_RemoveAppDependency_AsyncFunction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_RemoveAppDependency_AsyncFunction_Statics::ClassParams = {
	&USIK_RemoveAppDependency_AsyncFunction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USIK_RemoveAppDependency_AsyncFunction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USIK_RemoveAppDependency_AsyncFunction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_RemoveAppDependency_AsyncFunction_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_RemoveAppDependency_AsyncFunction_Statics::Class_MetaDataParams)
};
void USIK_RemoveAppDependency_AsyncFunction::StaticRegisterNativesUSIK_RemoveAppDependency_AsyncFunction()
{
	UClass* Class = USIK_RemoveAppDependency_AsyncFunction::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_RemoveAppDependency_AsyncFunction_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_RemoveAppDependency_AsyncFunction()
{
	if (!Z_Registration_Info_UClass_USIK_RemoveAppDependency_AsyncFunction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_RemoveAppDependency_AsyncFunction.OuterSingleton, Z_Construct_UClass_USIK_RemoveAppDependency_AsyncFunction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_RemoveAppDependency_AsyncFunction.OuterSingleton;
}
USIK_RemoveAppDependency_AsyncFunction::USIK_RemoveAppDependency_AsyncFunction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_RemoveAppDependency_AsyncFunction);
USIK_RemoveAppDependency_AsyncFunction::~USIK_RemoveAppDependency_AsyncFunction() {}
// ********** End Class USIK_RemoveAppDependency_AsyncFunction *************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_RemoveAppDependency_AsyncFunction_h__Script_SteamIntegrationKit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_RemoveAppDependency_AsyncFunction, USIK_RemoveAppDependency_AsyncFunction::StaticClass, TEXT("USIK_RemoveAppDependency_AsyncFunction"), &Z_Registration_Info_UClass_USIK_RemoveAppDependency_AsyncFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_RemoveAppDependency_AsyncFunction), 3034964753U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_RemoveAppDependency_AsyncFunction_h__Script_SteamIntegrationKit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_RemoveAppDependency_AsyncFunction_h__Script_SteamIntegrationKit_3834413743{
	TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_RemoveAppDependency_AsyncFunction_h__Script_SteamIntegrationKit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_RemoveAppDependency_AsyncFunction_h__Script_SteamIntegrationKit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
