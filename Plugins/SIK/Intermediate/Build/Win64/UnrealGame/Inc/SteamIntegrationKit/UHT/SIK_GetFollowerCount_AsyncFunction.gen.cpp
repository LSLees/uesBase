// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/Friends/SIK_GetFollowerCount_AsyncFunction.h"
#include "SIK_SharedFile.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_GetFollowerCount_AsyncFunction() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_GetFollowerCount_AsyncFunction();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_GetFollowerCount_AsyncFunction_NoRegister();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetFollowerCount__DelegateSignature();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_SteamId();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnGetFollowerCount ***************************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetFollowerCount__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnGetFollowerCount_Parms
	{
		int32 FollowerCount;
		FSIK_SteamId UserSteamId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/Friends/SIK_GetFollowerCount_AsyncFunction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnGetFollowerCount constinit property declarations *******************
	static const UECodeGen_Private::FIntPropertyParams NewProp_FollowerCount;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UserSteamId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnGetFollowerCount constinit property declarations *********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnGetFollowerCount Property Definitions ******************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetFollowerCount__DelegateSignature_Statics::NewProp_FollowerCount = { "FollowerCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnGetFollowerCount_Parms, FollowerCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetFollowerCount__DelegateSignature_Statics::NewProp_UserSteamId = { "UserSteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnGetFollowerCount_Parms, UserSteamId), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetFollowerCount__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetFollowerCount__DelegateSignature_Statics::NewProp_FollowerCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetFollowerCount__DelegateSignature_Statics::NewProp_UserSteamId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetFollowerCount__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnGetFollowerCount Property Definitions ********************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetFollowerCount__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnGetFollowerCount__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetFollowerCount__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetFollowerCount__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetFollowerCount__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnGetFollowerCount_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetFollowerCount__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetFollowerCount__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetFollowerCount__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnGetFollowerCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetFollowerCount__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetFollowerCount__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGetFollowerCount_DelegateWrapper(const FMulticastScriptDelegate& OnGetFollowerCount, int32 FollowerCount, FSIK_SteamId UserSteamId)
{
	struct _Script_SteamIntegrationKit_eventOnGetFollowerCount_Parms
	{
		int32 FollowerCount;
		FSIK_SteamId UserSteamId;
	};
	_Script_SteamIntegrationKit_eventOnGetFollowerCount_Parms Parms;
	Parms.FollowerCount=FollowerCount;
	Parms.UserSteamId=UserSteamId;
	OnGetFollowerCount.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnGetFollowerCount *****************************************************

// ********** Begin Class USIK_GetFollowerCount_AsyncFunction Function GetFollowerCount ************
struct Z_Construct_UFunction_USIK_GetFollowerCount_AsyncFunction_GetFollowerCount_Statics
{
	struct SIK_GetFollowerCount_AsyncFunction_eventGetFollowerCount_Parms
	{
		FSIK_SteamId SteamId;
		USIK_GetFollowerCount_AsyncFunction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit || SDK Functions || Friends" },
		{ "DisplayName", "Get Steam Follower Count" },
		{ "Keywords", "GetFollowerCount" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_GetFollowerCount_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetFollowerCount constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetFollowerCount constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetFollowerCount Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_GetFollowerCount_AsyncFunction_GetFollowerCount_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetFollowerCount_AsyncFunction_eventGetFollowerCount_Parms, SteamId), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamId_MetaData), NewProp_SteamId_MetaData) }; // 3413883574
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_GetFollowerCount_AsyncFunction_GetFollowerCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetFollowerCount_AsyncFunction_eventGetFollowerCount_Parms, ReturnValue), Z_Construct_UClass_USIK_GetFollowerCount_AsyncFunction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GetFollowerCount_AsyncFunction_GetFollowerCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetFollowerCount_AsyncFunction_GetFollowerCount_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetFollowerCount_AsyncFunction_GetFollowerCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetFollowerCount_AsyncFunction_GetFollowerCount_Statics::PropPointers) < 2048);
// ********** End Function GetFollowerCount Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GetFollowerCount_AsyncFunction_GetFollowerCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_GetFollowerCount_AsyncFunction, nullptr, "GetFollowerCount", 	Z_Construct_UFunction_USIK_GetFollowerCount_AsyncFunction_GetFollowerCount_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetFollowerCount_AsyncFunction_GetFollowerCount_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_GetFollowerCount_AsyncFunction_GetFollowerCount_Statics::SIK_GetFollowerCount_AsyncFunction_eventGetFollowerCount_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetFollowerCount_AsyncFunction_GetFollowerCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GetFollowerCount_AsyncFunction_GetFollowerCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_GetFollowerCount_AsyncFunction_GetFollowerCount_Statics::SIK_GetFollowerCount_AsyncFunction_eventGetFollowerCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GetFollowerCount_AsyncFunction_GetFollowerCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GetFollowerCount_AsyncFunction_GetFollowerCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GetFollowerCount_AsyncFunction::execGetFollowerCount)
{
	P_GET_STRUCT_REF(FSIK_SteamId,Z_Param_Out_SteamId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_GetFollowerCount_AsyncFunction**)Z_Param__Result=USIK_GetFollowerCount_AsyncFunction::GetFollowerCount(Z_Param_Out_SteamId);
	P_NATIVE_END;
}
// ********** End Class USIK_GetFollowerCount_AsyncFunction Function GetFollowerCount **************

// ********** Begin Class USIK_GetFollowerCount_AsyncFunction **************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_GetFollowerCount_AsyncFunction;
UClass* USIK_GetFollowerCount_AsyncFunction::GetPrivateStaticClass()
{
	using TClass = USIK_GetFollowerCount_AsyncFunction;
	if (!Z_Registration_Info_UClass_USIK_GetFollowerCount_AsyncFunction.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_GetFollowerCount_AsyncFunction"),
			Z_Registration_Info_UClass_USIK_GetFollowerCount_AsyncFunction.InnerSingleton,
			StaticRegisterNativesUSIK_GetFollowerCount_AsyncFunction,
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
	return Z_Registration_Info_UClass_USIK_GetFollowerCount_AsyncFunction.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_GetFollowerCount_AsyncFunction_NoRegister()
{
	return USIK_GetFollowerCount_AsyncFunction::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_GetFollowerCount_AsyncFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Functions/Friends/SIK_GetFollowerCount_AsyncFunction.h" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_GetFollowerCount_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Functions/Friends/SIK_GetFollowerCount_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Functions/Friends/SIK_GetFollowerCount_AsyncFunction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_GetFollowerCount_AsyncFunction constinit property declarations ******
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USIK_GetFollowerCount_AsyncFunction constinit property declarations ********
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetFollowerCount"), .Pointer = &USIK_GetFollowerCount_AsyncFunction::execGetFollowerCount },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_GetFollowerCount_AsyncFunction_GetFollowerCount, "GetFollowerCount" }, // 1625868207
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_GetFollowerCount_AsyncFunction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_GetFollowerCount_AsyncFunction_Statics

// ********** Begin Class USIK_GetFollowerCount_AsyncFunction Property Definitions *****************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_GetFollowerCount_AsyncFunction_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_GetFollowerCount_AsyncFunction, OnSuccess), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetFollowerCount__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 2119217202
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_GetFollowerCount_AsyncFunction_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_GetFollowerCount_AsyncFunction, OnFailure), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetFollowerCount__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 2119217202
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USIK_GetFollowerCount_AsyncFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_GetFollowerCount_AsyncFunction_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_GetFollowerCount_AsyncFunction_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetFollowerCount_AsyncFunction_Statics::PropPointers) < 2048);
// ********** End Class USIK_GetFollowerCount_AsyncFunction Property Definitions *******************
UObject* (*const Z_Construct_UClass_USIK_GetFollowerCount_AsyncFunction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetFollowerCount_AsyncFunction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_GetFollowerCount_AsyncFunction_Statics::ClassParams = {
	&USIK_GetFollowerCount_AsyncFunction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USIK_GetFollowerCount_AsyncFunction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetFollowerCount_AsyncFunction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetFollowerCount_AsyncFunction_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_GetFollowerCount_AsyncFunction_Statics::Class_MetaDataParams)
};
void USIK_GetFollowerCount_AsyncFunction::StaticRegisterNativesUSIK_GetFollowerCount_AsyncFunction()
{
	UClass* Class = USIK_GetFollowerCount_AsyncFunction::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_GetFollowerCount_AsyncFunction_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_GetFollowerCount_AsyncFunction()
{
	if (!Z_Registration_Info_UClass_USIK_GetFollowerCount_AsyncFunction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_GetFollowerCount_AsyncFunction.OuterSingleton, Z_Construct_UClass_USIK_GetFollowerCount_AsyncFunction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_GetFollowerCount_AsyncFunction.OuterSingleton;
}
USIK_GetFollowerCount_AsyncFunction::USIK_GetFollowerCount_AsyncFunction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_GetFollowerCount_AsyncFunction);
USIK_GetFollowerCount_AsyncFunction::~USIK_GetFollowerCount_AsyncFunction() {}
// ********** End Class USIK_GetFollowerCount_AsyncFunction ****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_GetFollowerCount_AsyncFunction_h__Script_SteamIntegrationKit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_GetFollowerCount_AsyncFunction, USIK_GetFollowerCount_AsyncFunction::StaticClass, TEXT("USIK_GetFollowerCount_AsyncFunction"), &Z_Registration_Info_UClass_USIK_GetFollowerCount_AsyncFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_GetFollowerCount_AsyncFunction), 3281010650U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_GetFollowerCount_AsyncFunction_h__Script_SteamIntegrationKit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_GetFollowerCount_AsyncFunction_h__Script_SteamIntegrationKit_3063590546{
	TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_GetFollowerCount_AsyncFunction_h__Script_SteamIntegrationKit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_GetFollowerCount_AsyncFunction_h__Script_SteamIntegrationKit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
