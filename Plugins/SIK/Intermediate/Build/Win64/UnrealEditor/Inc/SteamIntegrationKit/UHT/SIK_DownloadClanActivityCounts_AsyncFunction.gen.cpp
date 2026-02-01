// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/Friends/SIK_DownloadClanActivityCounts_AsyncFunction.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_DownloadClanActivityCounts_AsyncFunction() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_DownloadClanActivityCounts_AsyncFunction();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_DownloadClanActivityCounts_AsyncFunction_NoRegister();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnDownloadClanActivityCountsComplete__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnDownloadClanActivityCountsComplete *********************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnDownloadClanActivityCountsComplete__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/Friends/SIK_DownloadClanActivityCounts_AsyncFunction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnDownloadClanActivityCountsComplete constinit property declarations *
// ********** End Delegate FOnDownloadClanActivityCountsComplete constinit property declarations ***
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnDownloadClanActivityCountsComplete__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnDownloadClanActivityCountsComplete__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnDownloadClanActivityCountsComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnDownloadClanActivityCountsComplete__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnDownloadClanActivityCountsComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnDownloadClanActivityCountsComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnDownloadClanActivityCountsComplete_DelegateWrapper(const FMulticastScriptDelegate& OnDownloadClanActivityCountsComplete)
{
	OnDownloadClanActivityCountsComplete.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnDownloadClanActivityCountsComplete ***********************************

// ********** Begin Class USIK_DownloadClanActivityCounts_AsyncFunction Function DownloadClanActivityCounts 
struct Z_Construct_UFunction_USIK_DownloadClanActivityCounts_AsyncFunction_DownloadClanActivityCounts_Statics
{
	struct SIK_DownloadClanActivityCounts_AsyncFunction_eventDownloadClanActivityCounts_Parms
	{
		TArray<int64> ClanIds;
		USIK_DownloadClanActivityCounts_AsyncFunction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit || SDK Functions || Friends" },
		{ "DisplayName", "Download Steam Clan Activity Counts" },
		{ "Keywords", "DownloadClanActivityCounts" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_DownloadClanActivityCounts_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClanIds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function DownloadClanActivityCounts constinit property declarations ************
	static const UECodeGen_Private::FInt64PropertyParams NewProp_ClanIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ClanIds;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DownloadClanActivityCounts constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DownloadClanActivityCounts Property Definitions ***********************
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_DownloadClanActivityCounts_AsyncFunction_DownloadClanActivityCounts_Statics::NewProp_ClanIds_Inner = { "ClanIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_DownloadClanActivityCounts_AsyncFunction_DownloadClanActivityCounts_Statics::NewProp_ClanIds = { "ClanIds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_DownloadClanActivityCounts_AsyncFunction_eventDownloadClanActivityCounts_Parms, ClanIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClanIds_MetaData), NewProp_ClanIds_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_DownloadClanActivityCounts_AsyncFunction_DownloadClanActivityCounts_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_DownloadClanActivityCounts_AsyncFunction_eventDownloadClanActivityCounts_Parms, ReturnValue), Z_Construct_UClass_USIK_DownloadClanActivityCounts_AsyncFunction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_DownloadClanActivityCounts_AsyncFunction_DownloadClanActivityCounts_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_DownloadClanActivityCounts_AsyncFunction_DownloadClanActivityCounts_Statics::NewProp_ClanIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_DownloadClanActivityCounts_AsyncFunction_DownloadClanActivityCounts_Statics::NewProp_ClanIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_DownloadClanActivityCounts_AsyncFunction_DownloadClanActivityCounts_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_DownloadClanActivityCounts_AsyncFunction_DownloadClanActivityCounts_Statics::PropPointers) < 2048);
// ********** End Function DownloadClanActivityCounts Property Definitions *************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_DownloadClanActivityCounts_AsyncFunction_DownloadClanActivityCounts_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_DownloadClanActivityCounts_AsyncFunction, nullptr, "DownloadClanActivityCounts", 	Z_Construct_UFunction_USIK_DownloadClanActivityCounts_AsyncFunction_DownloadClanActivityCounts_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_DownloadClanActivityCounts_AsyncFunction_DownloadClanActivityCounts_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_DownloadClanActivityCounts_AsyncFunction_DownloadClanActivityCounts_Statics::SIK_DownloadClanActivityCounts_AsyncFunction_eventDownloadClanActivityCounts_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_DownloadClanActivityCounts_AsyncFunction_DownloadClanActivityCounts_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_DownloadClanActivityCounts_AsyncFunction_DownloadClanActivityCounts_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_DownloadClanActivityCounts_AsyncFunction_DownloadClanActivityCounts_Statics::SIK_DownloadClanActivityCounts_AsyncFunction_eventDownloadClanActivityCounts_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_DownloadClanActivityCounts_AsyncFunction_DownloadClanActivityCounts()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_DownloadClanActivityCounts_AsyncFunction_DownloadClanActivityCounts_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_DownloadClanActivityCounts_AsyncFunction::execDownloadClanActivityCounts)
{
	P_GET_TARRAY_REF(int64,Z_Param_Out_ClanIds);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_DownloadClanActivityCounts_AsyncFunction**)Z_Param__Result=USIK_DownloadClanActivityCounts_AsyncFunction::DownloadClanActivityCounts(Z_Param_Out_ClanIds);
	P_NATIVE_END;
}
// ********** End Class USIK_DownloadClanActivityCounts_AsyncFunction Function DownloadClanActivityCounts 

// ********** Begin Class USIK_DownloadClanActivityCounts_AsyncFunction ****************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_DownloadClanActivityCounts_AsyncFunction;
UClass* USIK_DownloadClanActivityCounts_AsyncFunction::GetPrivateStaticClass()
{
	using TClass = USIK_DownloadClanActivityCounts_AsyncFunction;
	if (!Z_Registration_Info_UClass_USIK_DownloadClanActivityCounts_AsyncFunction.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_DownloadClanActivityCounts_AsyncFunction"),
			Z_Registration_Info_UClass_USIK_DownloadClanActivityCounts_AsyncFunction.InnerSingleton,
			StaticRegisterNativesUSIK_DownloadClanActivityCounts_AsyncFunction,
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
	return Z_Registration_Info_UClass_USIK_DownloadClanActivityCounts_AsyncFunction.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_DownloadClanActivityCounts_AsyncFunction_NoRegister()
{
	return USIK_DownloadClanActivityCounts_AsyncFunction::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_DownloadClanActivityCounts_AsyncFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Functions/Friends/SIK_DownloadClanActivityCounts_AsyncFunction.h" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_DownloadClanActivityCounts_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Functions/Friends/SIK_DownloadClanActivityCounts_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Functions/Friends/SIK_DownloadClanActivityCounts_AsyncFunction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_DownloadClanActivityCounts_AsyncFunction constinit property declarations 
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USIK_DownloadClanActivityCounts_AsyncFunction constinit property declarations 
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("DownloadClanActivityCounts"), .Pointer = &USIK_DownloadClanActivityCounts_AsyncFunction::execDownloadClanActivityCounts },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_DownloadClanActivityCounts_AsyncFunction_DownloadClanActivityCounts, "DownloadClanActivityCounts" }, // 3127976038
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_DownloadClanActivityCounts_AsyncFunction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_DownloadClanActivityCounts_AsyncFunction_Statics

// ********** Begin Class USIK_DownloadClanActivityCounts_AsyncFunction Property Definitions *******
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_DownloadClanActivityCounts_AsyncFunction_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_DownloadClanActivityCounts_AsyncFunction, OnSuccess), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnDownloadClanActivityCountsComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 1814120025
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_DownloadClanActivityCounts_AsyncFunction_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_DownloadClanActivityCounts_AsyncFunction, OnFailure), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnDownloadClanActivityCountsComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 1814120025
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USIK_DownloadClanActivityCounts_AsyncFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_DownloadClanActivityCounts_AsyncFunction_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_DownloadClanActivityCounts_AsyncFunction_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_DownloadClanActivityCounts_AsyncFunction_Statics::PropPointers) < 2048);
// ********** End Class USIK_DownloadClanActivityCounts_AsyncFunction Property Definitions *********
UObject* (*const Z_Construct_UClass_USIK_DownloadClanActivityCounts_AsyncFunction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_DownloadClanActivityCounts_AsyncFunction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_DownloadClanActivityCounts_AsyncFunction_Statics::ClassParams = {
	&USIK_DownloadClanActivityCounts_AsyncFunction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USIK_DownloadClanActivityCounts_AsyncFunction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USIK_DownloadClanActivityCounts_AsyncFunction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_DownloadClanActivityCounts_AsyncFunction_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_DownloadClanActivityCounts_AsyncFunction_Statics::Class_MetaDataParams)
};
void USIK_DownloadClanActivityCounts_AsyncFunction::StaticRegisterNativesUSIK_DownloadClanActivityCounts_AsyncFunction()
{
	UClass* Class = USIK_DownloadClanActivityCounts_AsyncFunction::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_DownloadClanActivityCounts_AsyncFunction_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_DownloadClanActivityCounts_AsyncFunction()
{
	if (!Z_Registration_Info_UClass_USIK_DownloadClanActivityCounts_AsyncFunction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_DownloadClanActivityCounts_AsyncFunction.OuterSingleton, Z_Construct_UClass_USIK_DownloadClanActivityCounts_AsyncFunction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_DownloadClanActivityCounts_AsyncFunction.OuterSingleton;
}
USIK_DownloadClanActivityCounts_AsyncFunction::USIK_DownloadClanActivityCounts_AsyncFunction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_DownloadClanActivityCounts_AsyncFunction);
USIK_DownloadClanActivityCounts_AsyncFunction::~USIK_DownloadClanActivityCounts_AsyncFunction() {}
// ********** End Class USIK_DownloadClanActivityCounts_AsyncFunction ******************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_DownloadClanActivityCounts_AsyncFunction_h__Script_SteamIntegrationKit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_DownloadClanActivityCounts_AsyncFunction, USIK_DownloadClanActivityCounts_AsyncFunction::StaticClass, TEXT("USIK_DownloadClanActivityCounts_AsyncFunction"), &Z_Registration_Info_UClass_USIK_DownloadClanActivityCounts_AsyncFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_DownloadClanActivityCounts_AsyncFunction), 814519848U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_DownloadClanActivityCounts_AsyncFunction_h__Script_SteamIntegrationKit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_DownloadClanActivityCounts_AsyncFunction_h__Script_SteamIntegrationKit_1413160011{
	TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_DownloadClanActivityCounts_AsyncFunction_h__Script_SteamIntegrationKit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_DownloadClanActivityCounts_AsyncFunction_h__Script_SteamIntegrationKit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
