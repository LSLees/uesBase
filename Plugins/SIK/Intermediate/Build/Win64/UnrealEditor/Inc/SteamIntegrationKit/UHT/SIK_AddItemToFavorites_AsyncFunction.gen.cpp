// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/UGC/SIK_AddItemToFavorites_AsyncFunction.h"
#include "SIK_SharedFile.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_AddItemToFavorites_AsyncFunction() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_AddItemToFavorites_AsyncFunction();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_AddItemToFavorites_AsyncFunction_NoRegister();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddItemToFavoritesComplete__DelegateSignature();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_AppId();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_PublishedFileId();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnAddItemToFavoritesComplete *****************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddItemToFavoritesComplete__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnAddItemToFavoritesComplete_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
		FSIK_PublishedFileId PublishedFileId;
		bool bWasAddRequest;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/UGC/SIK_AddItemToFavorites_AsyncFunction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnAddItemToFavoritesComplete constinit property declarations *********
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileId;
	static void NewProp_bWasAddRequest_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasAddRequest;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnAddItemToFavoritesComplete constinit property declarations ***********
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnAddItemToFavoritesComplete Property Definitions ********************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddItemToFavoritesComplete__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnAddItemToFavoritesComplete_Parms, Result), Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result, METADATA_PARAMS(0, nullptr) }; // 655382749
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddItemToFavoritesComplete__DelegateSignature_Statics::NewProp_PublishedFileId = { "PublishedFileId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnAddItemToFavoritesComplete_Parms, PublishedFileId), Z_Construct_UScriptStruct_FSIK_PublishedFileId, METADATA_PARAMS(0, nullptr) }; // 3479136102
void Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddItemToFavoritesComplete__DelegateSignature_Statics::NewProp_bWasAddRequest_SetBit(void* Obj)
{
	((_Script_SteamIntegrationKit_eventOnAddItemToFavoritesComplete_Parms*)Obj)->bWasAddRequest = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddItemToFavoritesComplete__DelegateSignature_Statics::NewProp_bWasAddRequest = { "bWasAddRequest", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamIntegrationKit_eventOnAddItemToFavoritesComplete_Parms), &Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddItemToFavoritesComplete__DelegateSignature_Statics::NewProp_bWasAddRequest_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddItemToFavoritesComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddItemToFavoritesComplete__DelegateSignature_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddItemToFavoritesComplete__DelegateSignature_Statics::NewProp_PublishedFileId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddItemToFavoritesComplete__DelegateSignature_Statics::NewProp_bWasAddRequest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddItemToFavoritesComplete__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnAddItemToFavoritesComplete Property Definitions **********************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddItemToFavoritesComplete__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnAddItemToFavoritesComplete__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddItemToFavoritesComplete__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddItemToFavoritesComplete__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddItemToFavoritesComplete__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnAddItemToFavoritesComplete_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddItemToFavoritesComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddItemToFavoritesComplete__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddItemToFavoritesComplete__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnAddItemToFavoritesComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddItemToFavoritesComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddItemToFavoritesComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAddItemToFavoritesComplete_DelegateWrapper(const FMulticastScriptDelegate& OnAddItemToFavoritesComplete, ESIK_Result Result, FSIK_PublishedFileId PublishedFileId, bool bWasAddRequest)
{
	struct _Script_SteamIntegrationKit_eventOnAddItemToFavoritesComplete_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
		FSIK_PublishedFileId PublishedFileId;
		bool bWasAddRequest;
	};
	_Script_SteamIntegrationKit_eventOnAddItemToFavoritesComplete_Parms Parms;
	Parms.Result=Result;
	Parms.PublishedFileId=PublishedFileId;
	Parms.bWasAddRequest=bWasAddRequest ? true : false;
	OnAddItemToFavoritesComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnAddItemToFavoritesComplete *******************************************

// ********** Begin Class USIK_AddItemToFavorites_AsyncFunction Function AddItemToFavorites ********
struct Z_Construct_UFunction_USIK_AddItemToFavorites_AsyncFunction_AddItemToFavorites_Statics
{
	struct SIK_AddItemToFavorites_AsyncFunction_eventAddItemToFavorites_Parms
	{
		FSIK_AppId AppId;
		FSIK_PublishedFileId PublishedFileId;
		USIK_AddItemToFavorites_AsyncFunction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_AddItemToFavorites_AsyncFunction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddItemToFavorites constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddItemToFavorites constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddItemToFavorites Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_AddItemToFavorites_AsyncFunction_AddItemToFavorites_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_AddItemToFavorites_AsyncFunction_eventAddItemToFavorites_Parms, AppId), Z_Construct_UScriptStruct_FSIK_AppId, METADATA_PARAMS(0, nullptr) }; // 3325316996
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_AddItemToFavorites_AsyncFunction_AddItemToFavorites_Statics::NewProp_PublishedFileId = { "PublishedFileId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_AddItemToFavorites_AsyncFunction_eventAddItemToFavorites_Parms, PublishedFileId), Z_Construct_UScriptStruct_FSIK_PublishedFileId, METADATA_PARAMS(0, nullptr) }; // 3479136102
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_AddItemToFavorites_AsyncFunction_AddItemToFavorites_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_AddItemToFavorites_AsyncFunction_eventAddItemToFavorites_Parms, ReturnValue), Z_Construct_UClass_USIK_AddItemToFavorites_AsyncFunction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_AddItemToFavorites_AsyncFunction_AddItemToFavorites_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_AddItemToFavorites_AsyncFunction_AddItemToFavorites_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_AddItemToFavorites_AsyncFunction_AddItemToFavorites_Statics::NewProp_PublishedFileId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_AddItemToFavorites_AsyncFunction_AddItemToFavorites_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AddItemToFavorites_AsyncFunction_AddItemToFavorites_Statics::PropPointers) < 2048);
// ********** End Function AddItemToFavorites Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_AddItemToFavorites_AsyncFunction_AddItemToFavorites_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_AddItemToFavorites_AsyncFunction, nullptr, "AddItemToFavorites", 	Z_Construct_UFunction_USIK_AddItemToFavorites_AsyncFunction_AddItemToFavorites_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AddItemToFavorites_AsyncFunction_AddItemToFavorites_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_AddItemToFavorites_AsyncFunction_AddItemToFavorites_Statics::SIK_AddItemToFavorites_AsyncFunction_eventAddItemToFavorites_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AddItemToFavorites_AsyncFunction_AddItemToFavorites_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_AddItemToFavorites_AsyncFunction_AddItemToFavorites_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_AddItemToFavorites_AsyncFunction_AddItemToFavorites_Statics::SIK_AddItemToFavorites_AsyncFunction_eventAddItemToFavorites_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_AddItemToFavorites_AsyncFunction_AddItemToFavorites()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_AddItemToFavorites_AsyncFunction_AddItemToFavorites_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_AddItemToFavorites_AsyncFunction::execAddItemToFavorites)
{
	P_GET_STRUCT(FSIK_AppId,Z_Param_AppId);
	P_GET_STRUCT(FSIK_PublishedFileId,Z_Param_PublishedFileId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_AddItemToFavorites_AsyncFunction**)Z_Param__Result=USIK_AddItemToFavorites_AsyncFunction::AddItemToFavorites(Z_Param_AppId,Z_Param_PublishedFileId);
	P_NATIVE_END;
}
// ********** End Class USIK_AddItemToFavorites_AsyncFunction Function AddItemToFavorites **********

// ********** Begin Class USIK_AddItemToFavorites_AsyncFunction ************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_AddItemToFavorites_AsyncFunction;
UClass* USIK_AddItemToFavorites_AsyncFunction::GetPrivateStaticClass()
{
	using TClass = USIK_AddItemToFavorites_AsyncFunction;
	if (!Z_Registration_Info_UClass_USIK_AddItemToFavorites_AsyncFunction.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_AddItemToFavorites_AsyncFunction"),
			Z_Registration_Info_UClass_USIK_AddItemToFavorites_AsyncFunction.InnerSingleton,
			StaticRegisterNativesUSIK_AddItemToFavorites_AsyncFunction,
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
	return Z_Registration_Info_UClass_USIK_AddItemToFavorites_AsyncFunction.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_AddItemToFavorites_AsyncFunction_NoRegister()
{
	return USIK_AddItemToFavorites_AsyncFunction::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_AddItemToFavorites_AsyncFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Functions/UGC/SIK_AddItemToFavorites_AsyncFunction.h" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_AddItemToFavorites_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Functions/UGC/SIK_AddItemToFavorites_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Functions/UGC/SIK_AddItemToFavorites_AsyncFunction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_AddItemToFavorites_AsyncFunction constinit property declarations ****
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USIK_AddItemToFavorites_AsyncFunction constinit property declarations ******
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AddItemToFavorites"), .Pointer = &USIK_AddItemToFavorites_AsyncFunction::execAddItemToFavorites },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_AddItemToFavorites_AsyncFunction_AddItemToFavorites, "AddItemToFavorites" }, // 4121507918
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_AddItemToFavorites_AsyncFunction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_AddItemToFavorites_AsyncFunction_Statics

// ********** Begin Class USIK_AddItemToFavorites_AsyncFunction Property Definitions ***************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_AddItemToFavorites_AsyncFunction_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_AddItemToFavorites_AsyncFunction, OnSuccess), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddItemToFavoritesComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 2157078020
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_AddItemToFavorites_AsyncFunction_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_AddItemToFavorites_AsyncFunction, OnFailure), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddItemToFavoritesComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 2157078020
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USIK_AddItemToFavorites_AsyncFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_AddItemToFavorites_AsyncFunction_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_AddItemToFavorites_AsyncFunction_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_AddItemToFavorites_AsyncFunction_Statics::PropPointers) < 2048);
// ********** End Class USIK_AddItemToFavorites_AsyncFunction Property Definitions *****************
UObject* (*const Z_Construct_UClass_USIK_AddItemToFavorites_AsyncFunction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_AddItemToFavorites_AsyncFunction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_AddItemToFavorites_AsyncFunction_Statics::ClassParams = {
	&USIK_AddItemToFavorites_AsyncFunction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USIK_AddItemToFavorites_AsyncFunction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USIK_AddItemToFavorites_AsyncFunction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_AddItemToFavorites_AsyncFunction_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_AddItemToFavorites_AsyncFunction_Statics::Class_MetaDataParams)
};
void USIK_AddItemToFavorites_AsyncFunction::StaticRegisterNativesUSIK_AddItemToFavorites_AsyncFunction()
{
	UClass* Class = USIK_AddItemToFavorites_AsyncFunction::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_AddItemToFavorites_AsyncFunction_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_AddItemToFavorites_AsyncFunction()
{
	if (!Z_Registration_Info_UClass_USIK_AddItemToFavorites_AsyncFunction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_AddItemToFavorites_AsyncFunction.OuterSingleton, Z_Construct_UClass_USIK_AddItemToFavorites_AsyncFunction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_AddItemToFavorites_AsyncFunction.OuterSingleton;
}
USIK_AddItemToFavorites_AsyncFunction::USIK_AddItemToFavorites_AsyncFunction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_AddItemToFavorites_AsyncFunction);
USIK_AddItemToFavorites_AsyncFunction::~USIK_AddItemToFavorites_AsyncFunction() {}
// ********** End Class USIK_AddItemToFavorites_AsyncFunction **************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_AddItemToFavorites_AsyncFunction_h__Script_SteamIntegrationKit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_AddItemToFavorites_AsyncFunction, USIK_AddItemToFavorites_AsyncFunction::StaticClass, TEXT("USIK_AddItemToFavorites_AsyncFunction"), &Z_Registration_Info_UClass_USIK_AddItemToFavorites_AsyncFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_AddItemToFavorites_AsyncFunction), 4066156490U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_AddItemToFavorites_AsyncFunction_h__Script_SteamIntegrationKit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_AddItemToFavorites_AsyncFunction_h__Script_SteamIntegrationKit_10895535{
	TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_AddItemToFavorites_AsyncFunction_h__Script_SteamIntegrationKit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_AddItemToFavorites_AsyncFunction_h__Script_SteamIntegrationKit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
