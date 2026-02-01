// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/UGC/SIK_AddDependency_AsyncFunction.h"
#include "SIK_SharedFile.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_AddDependency_AsyncFunction() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_AddDependency_AsyncFunction();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_AddDependency_AsyncFunction_NoRegister();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddDependencyComplete__DelegateSignature();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_PublishedFileId();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnAddDependencyComplete **********************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddDependencyComplete__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnAddDependencyComplete_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
		FSIK_PublishedFileId ParentPublishedFileID;
		FSIK_PublishedFileId ChildPublishedFileID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/UGC/SIK_AddDependency_AsyncFunction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnAddDependencyComplete constinit property declarations **************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParentPublishedFileID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChildPublishedFileID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnAddDependencyComplete constinit property declarations ****************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnAddDependencyComplete Property Definitions *************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddDependencyComplete__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnAddDependencyComplete_Parms, Result), Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result, METADATA_PARAMS(0, nullptr) }; // 655382749
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddDependencyComplete__DelegateSignature_Statics::NewProp_ParentPublishedFileID = { "ParentPublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnAddDependencyComplete_Parms, ParentPublishedFileID), Z_Construct_UScriptStruct_FSIK_PublishedFileId, METADATA_PARAMS(0, nullptr) }; // 3479136102
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddDependencyComplete__DelegateSignature_Statics::NewProp_ChildPublishedFileID = { "ChildPublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnAddDependencyComplete_Parms, ChildPublishedFileID), Z_Construct_UScriptStruct_FSIK_PublishedFileId, METADATA_PARAMS(0, nullptr) }; // 3479136102
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddDependencyComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddDependencyComplete__DelegateSignature_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddDependencyComplete__DelegateSignature_Statics::NewProp_ParentPublishedFileID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddDependencyComplete__DelegateSignature_Statics::NewProp_ChildPublishedFileID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddDependencyComplete__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnAddDependencyComplete Property Definitions ***************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddDependencyComplete__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnAddDependencyComplete__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddDependencyComplete__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddDependencyComplete__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddDependencyComplete__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnAddDependencyComplete_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddDependencyComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddDependencyComplete__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddDependencyComplete__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnAddDependencyComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddDependencyComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddDependencyComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAddDependencyComplete_DelegateWrapper(const FMulticastScriptDelegate& OnAddDependencyComplete, ESIK_Result Result, FSIK_PublishedFileId ParentPublishedFileID, FSIK_PublishedFileId ChildPublishedFileID)
{
	struct _Script_SteamIntegrationKit_eventOnAddDependencyComplete_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
		FSIK_PublishedFileId ParentPublishedFileID;
		FSIK_PublishedFileId ChildPublishedFileID;
	};
	_Script_SteamIntegrationKit_eventOnAddDependencyComplete_Parms Parms;
	Parms.Result=Result;
	Parms.ParentPublishedFileID=ParentPublishedFileID;
	Parms.ChildPublishedFileID=ChildPublishedFileID;
	OnAddDependencyComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnAddDependencyComplete ************************************************

// ********** Begin Class USIK_AddDependency_AsyncFunction Function AddDependency ******************
struct Z_Construct_UFunction_USIK_AddDependency_AsyncFunction_AddDependency_Statics
{
	struct SIK_AddDependency_AsyncFunction_eventAddDependency_Parms
	{
		FSIK_PublishedFileId ParentPublishedFileID;
		FSIK_PublishedFileId ChildPublishedFileID;
		USIK_AddDependency_AsyncFunction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_AddDependency_AsyncFunction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddDependency constinit property declarations *************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParentPublishedFileID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChildPublishedFileID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddDependency constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddDependency Property Definitions ************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_AddDependency_AsyncFunction_AddDependency_Statics::NewProp_ParentPublishedFileID = { "ParentPublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_AddDependency_AsyncFunction_eventAddDependency_Parms, ParentPublishedFileID), Z_Construct_UScriptStruct_FSIK_PublishedFileId, METADATA_PARAMS(0, nullptr) }; // 3479136102
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_AddDependency_AsyncFunction_AddDependency_Statics::NewProp_ChildPublishedFileID = { "ChildPublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_AddDependency_AsyncFunction_eventAddDependency_Parms, ChildPublishedFileID), Z_Construct_UScriptStruct_FSIK_PublishedFileId, METADATA_PARAMS(0, nullptr) }; // 3479136102
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_AddDependency_AsyncFunction_AddDependency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_AddDependency_AsyncFunction_eventAddDependency_Parms, ReturnValue), Z_Construct_UClass_USIK_AddDependency_AsyncFunction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_AddDependency_AsyncFunction_AddDependency_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_AddDependency_AsyncFunction_AddDependency_Statics::NewProp_ParentPublishedFileID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_AddDependency_AsyncFunction_AddDependency_Statics::NewProp_ChildPublishedFileID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_AddDependency_AsyncFunction_AddDependency_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AddDependency_AsyncFunction_AddDependency_Statics::PropPointers) < 2048);
// ********** End Function AddDependency Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_AddDependency_AsyncFunction_AddDependency_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_AddDependency_AsyncFunction, nullptr, "AddDependency", 	Z_Construct_UFunction_USIK_AddDependency_AsyncFunction_AddDependency_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AddDependency_AsyncFunction_AddDependency_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_AddDependency_AsyncFunction_AddDependency_Statics::SIK_AddDependency_AsyncFunction_eventAddDependency_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AddDependency_AsyncFunction_AddDependency_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_AddDependency_AsyncFunction_AddDependency_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_AddDependency_AsyncFunction_AddDependency_Statics::SIK_AddDependency_AsyncFunction_eventAddDependency_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_AddDependency_AsyncFunction_AddDependency()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_AddDependency_AsyncFunction_AddDependency_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_AddDependency_AsyncFunction::execAddDependency)
{
	P_GET_STRUCT(FSIK_PublishedFileId,Z_Param_ParentPublishedFileID);
	P_GET_STRUCT(FSIK_PublishedFileId,Z_Param_ChildPublishedFileID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_AddDependency_AsyncFunction**)Z_Param__Result=USIK_AddDependency_AsyncFunction::AddDependency(Z_Param_ParentPublishedFileID,Z_Param_ChildPublishedFileID);
	P_NATIVE_END;
}
// ********** End Class USIK_AddDependency_AsyncFunction Function AddDependency ********************

// ********** Begin Class USIK_AddDependency_AsyncFunction *****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_AddDependency_AsyncFunction;
UClass* USIK_AddDependency_AsyncFunction::GetPrivateStaticClass()
{
	using TClass = USIK_AddDependency_AsyncFunction;
	if (!Z_Registration_Info_UClass_USIK_AddDependency_AsyncFunction.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_AddDependency_AsyncFunction"),
			Z_Registration_Info_UClass_USIK_AddDependency_AsyncFunction.InnerSingleton,
			StaticRegisterNativesUSIK_AddDependency_AsyncFunction,
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
	return Z_Registration_Info_UClass_USIK_AddDependency_AsyncFunction.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_AddDependency_AsyncFunction_NoRegister()
{
	return USIK_AddDependency_AsyncFunction::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_AddDependency_AsyncFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Functions/UGC/SIK_AddDependency_AsyncFunction.h" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_AddDependency_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Functions/UGC/SIK_AddDependency_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Functions/UGC/SIK_AddDependency_AsyncFunction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_AddDependency_AsyncFunction constinit property declarations *********
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USIK_AddDependency_AsyncFunction constinit property declarations ***********
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AddDependency"), .Pointer = &USIK_AddDependency_AsyncFunction::execAddDependency },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_AddDependency_AsyncFunction_AddDependency, "AddDependency" }, // 2028477403
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_AddDependency_AsyncFunction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_AddDependency_AsyncFunction_Statics

// ********** Begin Class USIK_AddDependency_AsyncFunction Property Definitions ********************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_AddDependency_AsyncFunction_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_AddDependency_AsyncFunction, OnSuccess), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddDependencyComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 2608220458
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_AddDependency_AsyncFunction_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_AddDependency_AsyncFunction, OnFailure), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddDependencyComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 2608220458
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USIK_AddDependency_AsyncFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_AddDependency_AsyncFunction_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_AddDependency_AsyncFunction_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_AddDependency_AsyncFunction_Statics::PropPointers) < 2048);
// ********** End Class USIK_AddDependency_AsyncFunction Property Definitions **********************
UObject* (*const Z_Construct_UClass_USIK_AddDependency_AsyncFunction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_AddDependency_AsyncFunction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_AddDependency_AsyncFunction_Statics::ClassParams = {
	&USIK_AddDependency_AsyncFunction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USIK_AddDependency_AsyncFunction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USIK_AddDependency_AsyncFunction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_AddDependency_AsyncFunction_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_AddDependency_AsyncFunction_Statics::Class_MetaDataParams)
};
void USIK_AddDependency_AsyncFunction::StaticRegisterNativesUSIK_AddDependency_AsyncFunction()
{
	UClass* Class = USIK_AddDependency_AsyncFunction::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_AddDependency_AsyncFunction_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_AddDependency_AsyncFunction()
{
	if (!Z_Registration_Info_UClass_USIK_AddDependency_AsyncFunction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_AddDependency_AsyncFunction.OuterSingleton, Z_Construct_UClass_USIK_AddDependency_AsyncFunction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_AddDependency_AsyncFunction.OuterSingleton;
}
USIK_AddDependency_AsyncFunction::USIK_AddDependency_AsyncFunction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_AddDependency_AsyncFunction);
USIK_AddDependency_AsyncFunction::~USIK_AddDependency_AsyncFunction() {}
// ********** End Class USIK_AddDependency_AsyncFunction *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_AddDependency_AsyncFunction_h__Script_SteamIntegrationKit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_AddDependency_AsyncFunction, USIK_AddDependency_AsyncFunction::StaticClass, TEXT("USIK_AddDependency_AsyncFunction"), &Z_Registration_Info_UClass_USIK_AddDependency_AsyncFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_AddDependency_AsyncFunction), 714130485U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_AddDependency_AsyncFunction_h__Script_SteamIntegrationKit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_AddDependency_AsyncFunction_h__Script_SteamIntegrationKit_3702267199{
	TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_AddDependency_AsyncFunction_h__Script_SteamIntegrationKit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_AddDependency_AsyncFunction_h__Script_SteamIntegrationKit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
