// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/UGC/SIK_CreateItem_AsyncFunction.h"
#include "SIK_SharedFile.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_CreateItem_AsyncFunction() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_CreateItem_AsyncFunction();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_CreateItem_AsyncFunction_NoRegister();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_WorkshopFileType();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnCreateItemComplete__DelegateSignature();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_AppId();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_PublishedFileId();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnCreateItemComplete *************************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnCreateItemComplete__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnCreateItemComplete_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
		FSIK_PublishedFileId PublishedFileId;
		bool bUserNeedsToAcceptWorkshopLegalAgreement;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/UGC/SIK_CreateItem_AsyncFunction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnCreateItemComplete constinit property declarations *****************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileId;
	static void NewProp_bUserNeedsToAcceptWorkshopLegalAgreement_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUserNeedsToAcceptWorkshopLegalAgreement;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnCreateItemComplete constinit property declarations *******************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnCreateItemComplete Property Definitions ****************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnCreateItemComplete__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnCreateItemComplete_Parms, Result), Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result, METADATA_PARAMS(0, nullptr) }; // 655382749
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnCreateItemComplete__DelegateSignature_Statics::NewProp_PublishedFileId = { "PublishedFileId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnCreateItemComplete_Parms, PublishedFileId), Z_Construct_UScriptStruct_FSIK_PublishedFileId, METADATA_PARAMS(0, nullptr) }; // 3479136102
void Z_Construct_UDelegateFunction_SteamIntegrationKit_OnCreateItemComplete__DelegateSignature_Statics::NewProp_bUserNeedsToAcceptWorkshopLegalAgreement_SetBit(void* Obj)
{
	((_Script_SteamIntegrationKit_eventOnCreateItemComplete_Parms*)Obj)->bUserNeedsToAcceptWorkshopLegalAgreement = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnCreateItemComplete__DelegateSignature_Statics::NewProp_bUserNeedsToAcceptWorkshopLegalAgreement = { "bUserNeedsToAcceptWorkshopLegalAgreement", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamIntegrationKit_eventOnCreateItemComplete_Parms), &Z_Construct_UDelegateFunction_SteamIntegrationKit_OnCreateItemComplete__DelegateSignature_Statics::NewProp_bUserNeedsToAcceptWorkshopLegalAgreement_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnCreateItemComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnCreateItemComplete__DelegateSignature_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnCreateItemComplete__DelegateSignature_Statics::NewProp_PublishedFileId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnCreateItemComplete__DelegateSignature_Statics::NewProp_bUserNeedsToAcceptWorkshopLegalAgreement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnCreateItemComplete__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnCreateItemComplete Property Definitions ******************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnCreateItemComplete__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnCreateItemComplete__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_OnCreateItemComplete__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnCreateItemComplete__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnCreateItemComplete__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnCreateItemComplete_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnCreateItemComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnCreateItemComplete__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnCreateItemComplete__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnCreateItemComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnCreateItemComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnCreateItemComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnCreateItemComplete_DelegateWrapper(const FMulticastScriptDelegate& OnCreateItemComplete, ESIK_Result Result, FSIK_PublishedFileId PublishedFileId, bool bUserNeedsToAcceptWorkshopLegalAgreement)
{
	struct _Script_SteamIntegrationKit_eventOnCreateItemComplete_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
		FSIK_PublishedFileId PublishedFileId;
		bool bUserNeedsToAcceptWorkshopLegalAgreement;
	};
	_Script_SteamIntegrationKit_eventOnCreateItemComplete_Parms Parms;
	Parms.Result=Result;
	Parms.PublishedFileId=PublishedFileId;
	Parms.bUserNeedsToAcceptWorkshopLegalAgreement=bUserNeedsToAcceptWorkshopLegalAgreement ? true : false;
	OnCreateItemComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnCreateItemComplete ***************************************************

// ********** Begin Class USIK_CreateItem_AsyncFunction Function CreateItem ************************
struct Z_Construct_UFunction_USIK_CreateItem_AsyncFunction_CreateItem_Statics
{
	struct SIK_CreateItem_AsyncFunction_eventCreateItem_Parms
	{
		FSIK_AppId ConsumerAppId;
		TEnumAsByte<ESIK_WorkshopFileType> FileType;
		USIK_CreateItem_AsyncFunction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_CreateItem_AsyncFunction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function CreateItem constinit property declarations ****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConsumerAppId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FileType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CreateItem constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CreateItem Property Definitions ***************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_CreateItem_AsyncFunction_CreateItem_Statics::NewProp_ConsumerAppId = { "ConsumerAppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_CreateItem_AsyncFunction_eventCreateItem_Parms, ConsumerAppId), Z_Construct_UScriptStruct_FSIK_AppId, METADATA_PARAMS(0, nullptr) }; // 3325316996
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_CreateItem_AsyncFunction_CreateItem_Statics::NewProp_FileType = { "FileType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_CreateItem_AsyncFunction_eventCreateItem_Parms, FileType), Z_Construct_UEnum_SteamIntegrationKit_ESIK_WorkshopFileType, METADATA_PARAMS(0, nullptr) }; // 1356562597
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_CreateItem_AsyncFunction_CreateItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_CreateItem_AsyncFunction_eventCreateItem_Parms, ReturnValue), Z_Construct_UClass_USIK_CreateItem_AsyncFunction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_CreateItem_AsyncFunction_CreateItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_CreateItem_AsyncFunction_CreateItem_Statics::NewProp_ConsumerAppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_CreateItem_AsyncFunction_CreateItem_Statics::NewProp_FileType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_CreateItem_AsyncFunction_CreateItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_CreateItem_AsyncFunction_CreateItem_Statics::PropPointers) < 2048);
// ********** End Function CreateItem Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_CreateItem_AsyncFunction_CreateItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_CreateItem_AsyncFunction, nullptr, "CreateItem", 	Z_Construct_UFunction_USIK_CreateItem_AsyncFunction_CreateItem_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_CreateItem_AsyncFunction_CreateItem_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_CreateItem_AsyncFunction_CreateItem_Statics::SIK_CreateItem_AsyncFunction_eventCreateItem_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_CreateItem_AsyncFunction_CreateItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_CreateItem_AsyncFunction_CreateItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_CreateItem_AsyncFunction_CreateItem_Statics::SIK_CreateItem_AsyncFunction_eventCreateItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_CreateItem_AsyncFunction_CreateItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_CreateItem_AsyncFunction_CreateItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_CreateItem_AsyncFunction::execCreateItem)
{
	P_GET_STRUCT(FSIK_AppId,Z_Param_ConsumerAppId);
	P_GET_PROPERTY(FByteProperty,Z_Param_FileType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_CreateItem_AsyncFunction**)Z_Param__Result=USIK_CreateItem_AsyncFunction::CreateItem(Z_Param_ConsumerAppId,ESIK_WorkshopFileType(Z_Param_FileType));
	P_NATIVE_END;
}
// ********** End Class USIK_CreateItem_AsyncFunction Function CreateItem **************************

// ********** Begin Class USIK_CreateItem_AsyncFunction ********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_CreateItem_AsyncFunction;
UClass* USIK_CreateItem_AsyncFunction::GetPrivateStaticClass()
{
	using TClass = USIK_CreateItem_AsyncFunction;
	if (!Z_Registration_Info_UClass_USIK_CreateItem_AsyncFunction.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_CreateItem_AsyncFunction"),
			Z_Registration_Info_UClass_USIK_CreateItem_AsyncFunction.InnerSingleton,
			StaticRegisterNativesUSIK_CreateItem_AsyncFunction,
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
	return Z_Registration_Info_UClass_USIK_CreateItem_AsyncFunction.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_CreateItem_AsyncFunction_NoRegister()
{
	return USIK_CreateItem_AsyncFunction::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_CreateItem_AsyncFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Functions/UGC/SIK_CreateItem_AsyncFunction.h" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_CreateItem_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Functions/UGC/SIK_CreateItem_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Functions/UGC/SIK_CreateItem_AsyncFunction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_CreateItem_AsyncFunction constinit property declarations ************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USIK_CreateItem_AsyncFunction constinit property declarations **************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CreateItem"), .Pointer = &USIK_CreateItem_AsyncFunction::execCreateItem },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_CreateItem_AsyncFunction_CreateItem, "CreateItem" }, // 1628397001
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_CreateItem_AsyncFunction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_CreateItem_AsyncFunction_Statics

// ********** Begin Class USIK_CreateItem_AsyncFunction Property Definitions ***********************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_CreateItem_AsyncFunction_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_CreateItem_AsyncFunction, OnSuccess), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnCreateItemComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 420561383
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_CreateItem_AsyncFunction_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_CreateItem_AsyncFunction, OnFailure), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnCreateItemComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 420561383
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USIK_CreateItem_AsyncFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_CreateItem_AsyncFunction_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_CreateItem_AsyncFunction_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_CreateItem_AsyncFunction_Statics::PropPointers) < 2048);
// ********** End Class USIK_CreateItem_AsyncFunction Property Definitions *************************
UObject* (*const Z_Construct_UClass_USIK_CreateItem_AsyncFunction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_CreateItem_AsyncFunction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_CreateItem_AsyncFunction_Statics::ClassParams = {
	&USIK_CreateItem_AsyncFunction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USIK_CreateItem_AsyncFunction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USIK_CreateItem_AsyncFunction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_CreateItem_AsyncFunction_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_CreateItem_AsyncFunction_Statics::Class_MetaDataParams)
};
void USIK_CreateItem_AsyncFunction::StaticRegisterNativesUSIK_CreateItem_AsyncFunction()
{
	UClass* Class = USIK_CreateItem_AsyncFunction::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_CreateItem_AsyncFunction_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_CreateItem_AsyncFunction()
{
	if (!Z_Registration_Info_UClass_USIK_CreateItem_AsyncFunction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_CreateItem_AsyncFunction.OuterSingleton, Z_Construct_UClass_USIK_CreateItem_AsyncFunction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_CreateItem_AsyncFunction.OuterSingleton;
}
USIK_CreateItem_AsyncFunction::USIK_CreateItem_AsyncFunction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_CreateItem_AsyncFunction);
USIK_CreateItem_AsyncFunction::~USIK_CreateItem_AsyncFunction() {}
// ********** End Class USIK_CreateItem_AsyncFunction **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_CreateItem_AsyncFunction_h__Script_SteamIntegrationKit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_CreateItem_AsyncFunction, USIK_CreateItem_AsyncFunction::StaticClass, TEXT("USIK_CreateItem_AsyncFunction"), &Z_Registration_Info_UClass_USIK_CreateItem_AsyncFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_CreateItem_AsyncFunction), 3333751050U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_CreateItem_AsyncFunction_h__Script_SteamIntegrationKit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_CreateItem_AsyncFunction_h__Script_SteamIntegrationKit_3130196562{
	TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_CreateItem_AsyncFunction_h__Script_SteamIntegrationKit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_CreateItem_AsyncFunction_h__Script_SteamIntegrationKit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
