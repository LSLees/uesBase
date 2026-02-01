// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/UserStats/SIK_RequestUserStats_AsyncFunction.h"
#include "SIK_SharedFile.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_RequestUserStats_AsyncFunction() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_RequestUserStats_AsyncFunction();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_RequestUserStats_AsyncFunction_NoRegister();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_RequestUserStats_Delegate__DelegateSignature();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_SteamId();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FRequestUserStats_Delegate ********************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_RequestUserStats_Delegate__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventRequestUserStats_Delegate_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/UserStats/SIK_RequestUserStats_AsyncFunction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FRequestUserStats_Delegate constinit property declarations ************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FRequestUserStats_Delegate constinit property declarations **************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FRequestUserStats_Delegate Property Definitions ***********************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_RequestUserStats_Delegate__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventRequestUserStats_Delegate_Parms, Result), Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result, METADATA_PARAMS(0, nullptr) }; // 655382749
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_RequestUserStats_Delegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_RequestUserStats_Delegate__DelegateSignature_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_RequestUserStats_Delegate__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FRequestUserStats_Delegate Property Definitions *************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_RequestUserStats_Delegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "RequestUserStats_Delegate__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_RequestUserStats_Delegate__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_RequestUserStats_Delegate__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_RequestUserStats_Delegate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventRequestUserStats_Delegate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_RequestUserStats_Delegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_RequestUserStats_Delegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_RequestUserStats_Delegate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventRequestUserStats_Delegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_RequestUserStats_Delegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_RequestUserStats_Delegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FRequestUserStats_Delegate_DelegateWrapper(const FMulticastScriptDelegate& RequestUserStats_Delegate, ESIK_Result Result)
{
	struct _Script_SteamIntegrationKit_eventRequestUserStats_Delegate_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
	};
	_Script_SteamIntegrationKit_eventRequestUserStats_Delegate_Parms Parms;
	Parms.Result=Result;
	RequestUserStats_Delegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FRequestUserStats_Delegate **********************************************

// ********** Begin Class USIK_RequestUserStats_AsyncFunction Function RequestUserStats ************
struct Z_Construct_UFunction_USIK_RequestUserStats_AsyncFunction_RequestUserStats_Statics
{
	struct SIK_RequestUserStats_AsyncFunction_eventRequestUserStats_Parms
	{
		FSIK_SteamId SteamID;
		USIK_RequestUserStats_AsyncFunction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit || SDK Functions || User Stats" },
		{ "DisplayName", "Request Steam User Stats" },
		{ "ModuleRelativePath", "Functions/UserStats/SIK_RequestUserStats_AsyncFunction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function RequestUserStats constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RequestUserStats constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RequestUserStats Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_RequestUserStats_AsyncFunction_RequestUserStats_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RequestUserStats_AsyncFunction_eventRequestUserStats_Parms, SteamID), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_RequestUserStats_AsyncFunction_RequestUserStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RequestUserStats_AsyncFunction_eventRequestUserStats_Parms, ReturnValue), Z_Construct_UClass_USIK_RequestUserStats_AsyncFunction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_RequestUserStats_AsyncFunction_RequestUserStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RequestUserStats_AsyncFunction_RequestUserStats_Statics::NewProp_SteamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RequestUserStats_AsyncFunction_RequestUserStats_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RequestUserStats_AsyncFunction_RequestUserStats_Statics::PropPointers) < 2048);
// ********** End Function RequestUserStats Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_RequestUserStats_AsyncFunction_RequestUserStats_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_RequestUserStats_AsyncFunction, nullptr, "RequestUserStats", 	Z_Construct_UFunction_USIK_RequestUserStats_AsyncFunction_RequestUserStats_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RequestUserStats_AsyncFunction_RequestUserStats_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_RequestUserStats_AsyncFunction_RequestUserStats_Statics::SIK_RequestUserStats_AsyncFunction_eventRequestUserStats_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RequestUserStats_AsyncFunction_RequestUserStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_RequestUserStats_AsyncFunction_RequestUserStats_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_RequestUserStats_AsyncFunction_RequestUserStats_Statics::SIK_RequestUserStats_AsyncFunction_eventRequestUserStats_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_RequestUserStats_AsyncFunction_RequestUserStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_RequestUserStats_AsyncFunction_RequestUserStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_RequestUserStats_AsyncFunction::execRequestUserStats)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_SteamID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_RequestUserStats_AsyncFunction**)Z_Param__Result=USIK_RequestUserStats_AsyncFunction::RequestUserStats(Z_Param_SteamID);
	P_NATIVE_END;
}
// ********** End Class USIK_RequestUserStats_AsyncFunction Function RequestUserStats **************

// ********** Begin Class USIK_RequestUserStats_AsyncFunction **************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_RequestUserStats_AsyncFunction;
UClass* USIK_RequestUserStats_AsyncFunction::GetPrivateStaticClass()
{
	using TClass = USIK_RequestUserStats_AsyncFunction;
	if (!Z_Registration_Info_UClass_USIK_RequestUserStats_AsyncFunction.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_RequestUserStats_AsyncFunction"),
			Z_Registration_Info_UClass_USIK_RequestUserStats_AsyncFunction.InnerSingleton,
			StaticRegisterNativesUSIK_RequestUserStats_AsyncFunction,
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
	return Z_Registration_Info_UClass_USIK_RequestUserStats_AsyncFunction.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_RequestUserStats_AsyncFunction_NoRegister()
{
	return USIK_RequestUserStats_AsyncFunction::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_RequestUserStats_AsyncFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Functions/UserStats/SIK_RequestUserStats_AsyncFunction.h" },
		{ "ModuleRelativePath", "Functions/UserStats/SIK_RequestUserStats_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Functions/UserStats/SIK_RequestUserStats_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Functions/UserStats/SIK_RequestUserStats_AsyncFunction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_RequestUserStats_AsyncFunction constinit property declarations ******
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USIK_RequestUserStats_AsyncFunction constinit property declarations ********
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("RequestUserStats"), .Pointer = &USIK_RequestUserStats_AsyncFunction::execRequestUserStats },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_RequestUserStats_AsyncFunction_RequestUserStats, "RequestUserStats" }, // 4262018337
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_RequestUserStats_AsyncFunction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_RequestUserStats_AsyncFunction_Statics

// ********** Begin Class USIK_RequestUserStats_AsyncFunction Property Definitions *****************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_RequestUserStats_AsyncFunction_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_RequestUserStats_AsyncFunction, OnSuccess), Z_Construct_UDelegateFunction_SteamIntegrationKit_RequestUserStats_Delegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 130214618
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_RequestUserStats_AsyncFunction_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_RequestUserStats_AsyncFunction, OnFailure), Z_Construct_UDelegateFunction_SteamIntegrationKit_RequestUserStats_Delegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 130214618
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USIK_RequestUserStats_AsyncFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_RequestUserStats_AsyncFunction_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_RequestUserStats_AsyncFunction_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_RequestUserStats_AsyncFunction_Statics::PropPointers) < 2048);
// ********** End Class USIK_RequestUserStats_AsyncFunction Property Definitions *******************
UObject* (*const Z_Construct_UClass_USIK_RequestUserStats_AsyncFunction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_RequestUserStats_AsyncFunction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_RequestUserStats_AsyncFunction_Statics::ClassParams = {
	&USIK_RequestUserStats_AsyncFunction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USIK_RequestUserStats_AsyncFunction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USIK_RequestUserStats_AsyncFunction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_RequestUserStats_AsyncFunction_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_RequestUserStats_AsyncFunction_Statics::Class_MetaDataParams)
};
void USIK_RequestUserStats_AsyncFunction::StaticRegisterNativesUSIK_RequestUserStats_AsyncFunction()
{
	UClass* Class = USIK_RequestUserStats_AsyncFunction::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_RequestUserStats_AsyncFunction_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_RequestUserStats_AsyncFunction()
{
	if (!Z_Registration_Info_UClass_USIK_RequestUserStats_AsyncFunction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_RequestUserStats_AsyncFunction.OuterSingleton, Z_Construct_UClass_USIK_RequestUserStats_AsyncFunction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_RequestUserStats_AsyncFunction.OuterSingleton;
}
USIK_RequestUserStats_AsyncFunction::USIK_RequestUserStats_AsyncFunction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_RequestUserStats_AsyncFunction);
USIK_RequestUserStats_AsyncFunction::~USIK_RequestUserStats_AsyncFunction() {}
// ********** End Class USIK_RequestUserStats_AsyncFunction ****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_RequestUserStats_AsyncFunction_h__Script_SteamIntegrationKit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_RequestUserStats_AsyncFunction, USIK_RequestUserStats_AsyncFunction::StaticClass, TEXT("USIK_RequestUserStats_AsyncFunction"), &Z_Registration_Info_UClass_USIK_RequestUserStats_AsyncFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_RequestUserStats_AsyncFunction), 1413940489U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_RequestUserStats_AsyncFunction_h__Script_SteamIntegrationKit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_RequestUserStats_AsyncFunction_h__Script_SteamIntegrationKit_2891348521{
	TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_RequestUserStats_AsyncFunction_h__Script_SteamIntegrationKit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_RequestUserStats_AsyncFunction_h__Script_SteamIntegrationKit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
