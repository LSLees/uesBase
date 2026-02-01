// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/UGC/SIK_RemoveDependency_AsyncFunction.h"
#include "SIK_SharedFile.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_RemoveDependency_AsyncFunction() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_RemoveDependency_AsyncFunction();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_RemoveDependency_AsyncFunction_NoRegister();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveDependencyComplete__DelegateSignature();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_PublishedFileId();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnRemoveDependencyComplete *******************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveDependencyComplete__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnRemoveDependencyComplete_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
		FSIK_PublishedFileId ParentPublishedFileID;
		FSIK_PublishedFileId ChildPublishedFileID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/UGC/SIK_RemoveDependency_AsyncFunction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnRemoveDependencyComplete constinit property declarations ***********
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParentPublishedFileID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChildPublishedFileID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnRemoveDependencyComplete constinit property declarations *************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnRemoveDependencyComplete Property Definitions **********************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveDependencyComplete__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnRemoveDependencyComplete_Parms, Result), Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result, METADATA_PARAMS(0, nullptr) }; // 655382749
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveDependencyComplete__DelegateSignature_Statics::NewProp_ParentPublishedFileID = { "ParentPublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnRemoveDependencyComplete_Parms, ParentPublishedFileID), Z_Construct_UScriptStruct_FSIK_PublishedFileId, METADATA_PARAMS(0, nullptr) }; // 3479136102
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveDependencyComplete__DelegateSignature_Statics::NewProp_ChildPublishedFileID = { "ChildPublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnRemoveDependencyComplete_Parms, ChildPublishedFileID), Z_Construct_UScriptStruct_FSIK_PublishedFileId, METADATA_PARAMS(0, nullptr) }; // 3479136102
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveDependencyComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveDependencyComplete__DelegateSignature_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveDependencyComplete__DelegateSignature_Statics::NewProp_ParentPublishedFileID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveDependencyComplete__DelegateSignature_Statics::NewProp_ChildPublishedFileID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveDependencyComplete__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnRemoveDependencyComplete Property Definitions ************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveDependencyComplete__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnRemoveDependencyComplete__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveDependencyComplete__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveDependencyComplete__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveDependencyComplete__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnRemoveDependencyComplete_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveDependencyComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveDependencyComplete__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveDependencyComplete__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnRemoveDependencyComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveDependencyComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveDependencyComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRemoveDependencyComplete_DelegateWrapper(const FMulticastScriptDelegate& OnRemoveDependencyComplete, ESIK_Result Result, FSIK_PublishedFileId ParentPublishedFileID, FSIK_PublishedFileId ChildPublishedFileID)
{
	struct _Script_SteamIntegrationKit_eventOnRemoveDependencyComplete_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
		FSIK_PublishedFileId ParentPublishedFileID;
		FSIK_PublishedFileId ChildPublishedFileID;
	};
	_Script_SteamIntegrationKit_eventOnRemoveDependencyComplete_Parms Parms;
	Parms.Result=Result;
	Parms.ParentPublishedFileID=ParentPublishedFileID;
	Parms.ChildPublishedFileID=ChildPublishedFileID;
	OnRemoveDependencyComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnRemoveDependencyComplete *********************************************

// ********** Begin Class USIK_RemoveDependency_AsyncFunction Function RemoveDependency ************
struct Z_Construct_UFunction_USIK_RemoveDependency_AsyncFunction_RemoveDependency_Statics
{
	struct SIK_RemoveDependency_AsyncFunction_eventRemoveDependency_Parms
	{
		FSIK_PublishedFileId ParentPublishedFileID;
		FSIK_PublishedFileId ChildPublishedFileID;
		USIK_RemoveDependency_AsyncFunction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_RemoveDependency_AsyncFunction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveDependency constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParentPublishedFileID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChildPublishedFileID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RemoveDependency constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RemoveDependency Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_RemoveDependency_AsyncFunction_RemoveDependency_Statics::NewProp_ParentPublishedFileID = { "ParentPublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoveDependency_AsyncFunction_eventRemoveDependency_Parms, ParentPublishedFileID), Z_Construct_UScriptStruct_FSIK_PublishedFileId, METADATA_PARAMS(0, nullptr) }; // 3479136102
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_RemoveDependency_AsyncFunction_RemoveDependency_Statics::NewProp_ChildPublishedFileID = { "ChildPublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoveDependency_AsyncFunction_eventRemoveDependency_Parms, ChildPublishedFileID), Z_Construct_UScriptStruct_FSIK_PublishedFileId, METADATA_PARAMS(0, nullptr) }; // 3479136102
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_RemoveDependency_AsyncFunction_RemoveDependency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoveDependency_AsyncFunction_eventRemoveDependency_Parms, ReturnValue), Z_Construct_UClass_USIK_RemoveDependency_AsyncFunction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_RemoveDependency_AsyncFunction_RemoveDependency_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoveDependency_AsyncFunction_RemoveDependency_Statics::NewProp_ParentPublishedFileID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoveDependency_AsyncFunction_RemoveDependency_Statics::NewProp_ChildPublishedFileID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoveDependency_AsyncFunction_RemoveDependency_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoveDependency_AsyncFunction_RemoveDependency_Statics::PropPointers) < 2048);
// ********** End Function RemoveDependency Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_RemoveDependency_AsyncFunction_RemoveDependency_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_RemoveDependency_AsyncFunction, nullptr, "RemoveDependency", 	Z_Construct_UFunction_USIK_RemoveDependency_AsyncFunction_RemoveDependency_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoveDependency_AsyncFunction_RemoveDependency_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_RemoveDependency_AsyncFunction_RemoveDependency_Statics::SIK_RemoveDependency_AsyncFunction_eventRemoveDependency_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoveDependency_AsyncFunction_RemoveDependency_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_RemoveDependency_AsyncFunction_RemoveDependency_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_RemoveDependency_AsyncFunction_RemoveDependency_Statics::SIK_RemoveDependency_AsyncFunction_eventRemoveDependency_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_RemoveDependency_AsyncFunction_RemoveDependency()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_RemoveDependency_AsyncFunction_RemoveDependency_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_RemoveDependency_AsyncFunction::execRemoveDependency)
{
	P_GET_STRUCT(FSIK_PublishedFileId,Z_Param_ParentPublishedFileID);
	P_GET_STRUCT(FSIK_PublishedFileId,Z_Param_ChildPublishedFileID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_RemoveDependency_AsyncFunction**)Z_Param__Result=USIK_RemoveDependency_AsyncFunction::RemoveDependency(Z_Param_ParentPublishedFileID,Z_Param_ChildPublishedFileID);
	P_NATIVE_END;
}
// ********** End Class USIK_RemoveDependency_AsyncFunction Function RemoveDependency **************

// ********** Begin Class USIK_RemoveDependency_AsyncFunction **************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_RemoveDependency_AsyncFunction;
UClass* USIK_RemoveDependency_AsyncFunction::GetPrivateStaticClass()
{
	using TClass = USIK_RemoveDependency_AsyncFunction;
	if (!Z_Registration_Info_UClass_USIK_RemoveDependency_AsyncFunction.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_RemoveDependency_AsyncFunction"),
			Z_Registration_Info_UClass_USIK_RemoveDependency_AsyncFunction.InnerSingleton,
			StaticRegisterNativesUSIK_RemoveDependency_AsyncFunction,
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
	return Z_Registration_Info_UClass_USIK_RemoveDependency_AsyncFunction.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_RemoveDependency_AsyncFunction_NoRegister()
{
	return USIK_RemoveDependency_AsyncFunction::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_RemoveDependency_AsyncFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Functions/UGC/SIK_RemoveDependency_AsyncFunction.h" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_RemoveDependency_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Functions/UGC/SIK_RemoveDependency_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Functions/UGC/SIK_RemoveDependency_AsyncFunction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_RemoveDependency_AsyncFunction constinit property declarations ******
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USIK_RemoveDependency_AsyncFunction constinit property declarations ********
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("RemoveDependency"), .Pointer = &USIK_RemoveDependency_AsyncFunction::execRemoveDependency },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_RemoveDependency_AsyncFunction_RemoveDependency, "RemoveDependency" }, // 255398654
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_RemoveDependency_AsyncFunction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_RemoveDependency_AsyncFunction_Statics

// ********** Begin Class USIK_RemoveDependency_AsyncFunction Property Definitions *****************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_RemoveDependency_AsyncFunction_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_RemoveDependency_AsyncFunction, OnSuccess), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveDependencyComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 2008353802
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_RemoveDependency_AsyncFunction_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_RemoveDependency_AsyncFunction, OnFailure), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveDependencyComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 2008353802
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USIK_RemoveDependency_AsyncFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_RemoveDependency_AsyncFunction_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_RemoveDependency_AsyncFunction_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_RemoveDependency_AsyncFunction_Statics::PropPointers) < 2048);
// ********** End Class USIK_RemoveDependency_AsyncFunction Property Definitions *******************
UObject* (*const Z_Construct_UClass_USIK_RemoveDependency_AsyncFunction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_RemoveDependency_AsyncFunction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_RemoveDependency_AsyncFunction_Statics::ClassParams = {
	&USIK_RemoveDependency_AsyncFunction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USIK_RemoveDependency_AsyncFunction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USIK_RemoveDependency_AsyncFunction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_RemoveDependency_AsyncFunction_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_RemoveDependency_AsyncFunction_Statics::Class_MetaDataParams)
};
void USIK_RemoveDependency_AsyncFunction::StaticRegisterNativesUSIK_RemoveDependency_AsyncFunction()
{
	UClass* Class = USIK_RemoveDependency_AsyncFunction::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_RemoveDependency_AsyncFunction_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_RemoveDependency_AsyncFunction()
{
	if (!Z_Registration_Info_UClass_USIK_RemoveDependency_AsyncFunction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_RemoveDependency_AsyncFunction.OuterSingleton, Z_Construct_UClass_USIK_RemoveDependency_AsyncFunction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_RemoveDependency_AsyncFunction.OuterSingleton;
}
USIK_RemoveDependency_AsyncFunction::USIK_RemoveDependency_AsyncFunction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_RemoveDependency_AsyncFunction);
USIK_RemoveDependency_AsyncFunction::~USIK_RemoveDependency_AsyncFunction() {}
// ********** End Class USIK_RemoveDependency_AsyncFunction ****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_RemoveDependency_AsyncFunction_h__Script_SteamIntegrationKit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_RemoveDependency_AsyncFunction, USIK_RemoveDependency_AsyncFunction::StaticClass, TEXT("USIK_RemoveDependency_AsyncFunction"), &Z_Registration_Info_UClass_USIK_RemoveDependency_AsyncFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_RemoveDependency_AsyncFunction), 2321080811U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_RemoveDependency_AsyncFunction_h__Script_SteamIntegrationKit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_RemoveDependency_AsyncFunction_h__Script_SteamIntegrationKit_2290750443{
	TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_RemoveDependency_AsyncFunction_h__Script_SteamIntegrationKit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_RemoveDependency_AsyncFunction_h__Script_SteamIntegrationKit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
