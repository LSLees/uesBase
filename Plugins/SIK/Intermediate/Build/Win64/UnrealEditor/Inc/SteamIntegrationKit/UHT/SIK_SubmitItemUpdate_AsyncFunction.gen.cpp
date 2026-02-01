// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/UGC/SIK_SubmitItemUpdate_AsyncFunction.h"
#include "SIK_SharedFile.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_SubmitItemUpdate_AsyncFunction() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_SubmitItemUpdate_AsyncFunction();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_SubmitItemUpdate_AsyncFunction_NoRegister();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSubmitItemUpdateComplete__DelegateSignature();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_UGCUpdateHandle();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnSubmitItemUpdateComplete *******************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSubmitItemUpdateComplete__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnSubmitItemUpdateComplete_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
		bool bUserNeedsToAcceptWorkshopLegalAgreement;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/UGC/SIK_SubmitItemUpdate_AsyncFunction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnSubmitItemUpdateComplete constinit property declarations ***********
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static void NewProp_bUserNeedsToAcceptWorkshopLegalAgreement_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUserNeedsToAcceptWorkshopLegalAgreement;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnSubmitItemUpdateComplete constinit property declarations *************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnSubmitItemUpdateComplete Property Definitions **********************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSubmitItemUpdateComplete__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnSubmitItemUpdateComplete_Parms, Result), Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result, METADATA_PARAMS(0, nullptr) }; // 655382749
void Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSubmitItemUpdateComplete__DelegateSignature_Statics::NewProp_bUserNeedsToAcceptWorkshopLegalAgreement_SetBit(void* Obj)
{
	((_Script_SteamIntegrationKit_eventOnSubmitItemUpdateComplete_Parms*)Obj)->bUserNeedsToAcceptWorkshopLegalAgreement = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSubmitItemUpdateComplete__DelegateSignature_Statics::NewProp_bUserNeedsToAcceptWorkshopLegalAgreement = { "bUserNeedsToAcceptWorkshopLegalAgreement", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamIntegrationKit_eventOnSubmitItemUpdateComplete_Parms), &Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSubmitItemUpdateComplete__DelegateSignature_Statics::NewProp_bUserNeedsToAcceptWorkshopLegalAgreement_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSubmitItemUpdateComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSubmitItemUpdateComplete__DelegateSignature_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSubmitItemUpdateComplete__DelegateSignature_Statics::NewProp_bUserNeedsToAcceptWorkshopLegalAgreement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSubmitItemUpdateComplete__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnSubmitItemUpdateComplete Property Definitions ************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSubmitItemUpdateComplete__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnSubmitItemUpdateComplete__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSubmitItemUpdateComplete__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSubmitItemUpdateComplete__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSubmitItemUpdateComplete__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnSubmitItemUpdateComplete_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSubmitItemUpdateComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSubmitItemUpdateComplete__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSubmitItemUpdateComplete__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnSubmitItemUpdateComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSubmitItemUpdateComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSubmitItemUpdateComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSubmitItemUpdateComplete_DelegateWrapper(const FMulticastScriptDelegate& OnSubmitItemUpdateComplete, ESIK_Result Result, bool bUserNeedsToAcceptWorkshopLegalAgreement)
{
	struct _Script_SteamIntegrationKit_eventOnSubmitItemUpdateComplete_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
		bool bUserNeedsToAcceptWorkshopLegalAgreement;
	};
	_Script_SteamIntegrationKit_eventOnSubmitItemUpdateComplete_Parms Parms;
	Parms.Result=Result;
	Parms.bUserNeedsToAcceptWorkshopLegalAgreement=bUserNeedsToAcceptWorkshopLegalAgreement ? true : false;
	OnSubmitItemUpdateComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnSubmitItemUpdateComplete *********************************************

// ********** Begin Class USIK_SubmitItemUpdate_AsyncFunction Function SubmitItemUpdate ************
struct Z_Construct_UFunction_USIK_SubmitItemUpdate_AsyncFunction_SubmitItemUpdate_Statics
{
	struct SIK_SubmitItemUpdate_AsyncFunction_eventSubmitItemUpdate_Parms
	{
		FSIK_UGCUpdateHandle UgcUpdateHandle;
		FString ChangeNote;
		USIK_SubmitItemUpdate_AsyncFunction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_SubmitItemUpdate_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChangeNote_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SubmitItemUpdate constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_UgcUpdateHandle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ChangeNote;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SubmitItemUpdate constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SubmitItemUpdate Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_SubmitItemUpdate_AsyncFunction_SubmitItemUpdate_Statics::NewProp_UgcUpdateHandle = { "UgcUpdateHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_SubmitItemUpdate_AsyncFunction_eventSubmitItemUpdate_Parms, UgcUpdateHandle), Z_Construct_UScriptStruct_FSIK_UGCUpdateHandle, METADATA_PARAMS(0, nullptr) }; // 1297056980
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_SubmitItemUpdate_AsyncFunction_SubmitItemUpdate_Statics::NewProp_ChangeNote = { "ChangeNote", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_SubmitItemUpdate_AsyncFunction_eventSubmitItemUpdate_Parms, ChangeNote), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChangeNote_MetaData), NewProp_ChangeNote_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_SubmitItemUpdate_AsyncFunction_SubmitItemUpdate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_SubmitItemUpdate_AsyncFunction_eventSubmitItemUpdate_Parms, ReturnValue), Z_Construct_UClass_USIK_SubmitItemUpdate_AsyncFunction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_SubmitItemUpdate_AsyncFunction_SubmitItemUpdate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SubmitItemUpdate_AsyncFunction_SubmitItemUpdate_Statics::NewProp_UgcUpdateHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SubmitItemUpdate_AsyncFunction_SubmitItemUpdate_Statics::NewProp_ChangeNote,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SubmitItemUpdate_AsyncFunction_SubmitItemUpdate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SubmitItemUpdate_AsyncFunction_SubmitItemUpdate_Statics::PropPointers) < 2048);
// ********** End Function SubmitItemUpdate Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_SubmitItemUpdate_AsyncFunction_SubmitItemUpdate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_SubmitItemUpdate_AsyncFunction, nullptr, "SubmitItemUpdate", 	Z_Construct_UFunction_USIK_SubmitItemUpdate_AsyncFunction_SubmitItemUpdate_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SubmitItemUpdate_AsyncFunction_SubmitItemUpdate_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_SubmitItemUpdate_AsyncFunction_SubmitItemUpdate_Statics::SIK_SubmitItemUpdate_AsyncFunction_eventSubmitItemUpdate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SubmitItemUpdate_AsyncFunction_SubmitItemUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_SubmitItemUpdate_AsyncFunction_SubmitItemUpdate_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_SubmitItemUpdate_AsyncFunction_SubmitItemUpdate_Statics::SIK_SubmitItemUpdate_AsyncFunction_eventSubmitItemUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_SubmitItemUpdate_AsyncFunction_SubmitItemUpdate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_SubmitItemUpdate_AsyncFunction_SubmitItemUpdate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_SubmitItemUpdate_AsyncFunction::execSubmitItemUpdate)
{
	P_GET_STRUCT(FSIK_UGCUpdateHandle,Z_Param_UgcUpdateHandle);
	P_GET_PROPERTY(FStrProperty,Z_Param_ChangeNote);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_SubmitItemUpdate_AsyncFunction**)Z_Param__Result=USIK_SubmitItemUpdate_AsyncFunction::SubmitItemUpdate(Z_Param_UgcUpdateHandle,Z_Param_ChangeNote);
	P_NATIVE_END;
}
// ********** End Class USIK_SubmitItemUpdate_AsyncFunction Function SubmitItemUpdate **************

// ********** Begin Class USIK_SubmitItemUpdate_AsyncFunction **************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_SubmitItemUpdate_AsyncFunction;
UClass* USIK_SubmitItemUpdate_AsyncFunction::GetPrivateStaticClass()
{
	using TClass = USIK_SubmitItemUpdate_AsyncFunction;
	if (!Z_Registration_Info_UClass_USIK_SubmitItemUpdate_AsyncFunction.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_SubmitItemUpdate_AsyncFunction"),
			Z_Registration_Info_UClass_USIK_SubmitItemUpdate_AsyncFunction.InnerSingleton,
			StaticRegisterNativesUSIK_SubmitItemUpdate_AsyncFunction,
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
	return Z_Registration_Info_UClass_USIK_SubmitItemUpdate_AsyncFunction.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_SubmitItemUpdate_AsyncFunction_NoRegister()
{
	return USIK_SubmitItemUpdate_AsyncFunction::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_SubmitItemUpdate_AsyncFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Functions/UGC/SIK_SubmitItemUpdate_AsyncFunction.h" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_SubmitItemUpdate_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Functions/UGC/SIK_SubmitItemUpdate_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Functions/UGC/SIK_SubmitItemUpdate_AsyncFunction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_SubmitItemUpdate_AsyncFunction constinit property declarations ******
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USIK_SubmitItemUpdate_AsyncFunction constinit property declarations ********
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("SubmitItemUpdate"), .Pointer = &USIK_SubmitItemUpdate_AsyncFunction::execSubmitItemUpdate },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_SubmitItemUpdate_AsyncFunction_SubmitItemUpdate, "SubmitItemUpdate" }, // 641389966
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_SubmitItemUpdate_AsyncFunction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_SubmitItemUpdate_AsyncFunction_Statics

// ********** Begin Class USIK_SubmitItemUpdate_AsyncFunction Property Definitions *****************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_SubmitItemUpdate_AsyncFunction_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_SubmitItemUpdate_AsyncFunction, OnSuccess), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSubmitItemUpdateComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 1020432426
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_SubmitItemUpdate_AsyncFunction_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_SubmitItemUpdate_AsyncFunction, OnFailure), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSubmitItemUpdateComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 1020432426
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USIK_SubmitItemUpdate_AsyncFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_SubmitItemUpdate_AsyncFunction_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_SubmitItemUpdate_AsyncFunction_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_SubmitItemUpdate_AsyncFunction_Statics::PropPointers) < 2048);
// ********** End Class USIK_SubmitItemUpdate_AsyncFunction Property Definitions *******************
UObject* (*const Z_Construct_UClass_USIK_SubmitItemUpdate_AsyncFunction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_SubmitItemUpdate_AsyncFunction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_SubmitItemUpdate_AsyncFunction_Statics::ClassParams = {
	&USIK_SubmitItemUpdate_AsyncFunction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USIK_SubmitItemUpdate_AsyncFunction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USIK_SubmitItemUpdate_AsyncFunction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_SubmitItemUpdate_AsyncFunction_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_SubmitItemUpdate_AsyncFunction_Statics::Class_MetaDataParams)
};
void USIK_SubmitItemUpdate_AsyncFunction::StaticRegisterNativesUSIK_SubmitItemUpdate_AsyncFunction()
{
	UClass* Class = USIK_SubmitItemUpdate_AsyncFunction::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_SubmitItemUpdate_AsyncFunction_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_SubmitItemUpdate_AsyncFunction()
{
	if (!Z_Registration_Info_UClass_USIK_SubmitItemUpdate_AsyncFunction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_SubmitItemUpdate_AsyncFunction.OuterSingleton, Z_Construct_UClass_USIK_SubmitItemUpdate_AsyncFunction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_SubmitItemUpdate_AsyncFunction.OuterSingleton;
}
USIK_SubmitItemUpdate_AsyncFunction::USIK_SubmitItemUpdate_AsyncFunction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_SubmitItemUpdate_AsyncFunction);
USIK_SubmitItemUpdate_AsyncFunction::~USIK_SubmitItemUpdate_AsyncFunction() {}
// ********** End Class USIK_SubmitItemUpdate_AsyncFunction ****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_SubmitItemUpdate_AsyncFunction_h__Script_SteamIntegrationKit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_SubmitItemUpdate_AsyncFunction, USIK_SubmitItemUpdate_AsyncFunction::StaticClass, TEXT("USIK_SubmitItemUpdate_AsyncFunction"), &Z_Registration_Info_UClass_USIK_SubmitItemUpdate_AsyncFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_SubmitItemUpdate_AsyncFunction), 248915927U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_SubmitItemUpdate_AsyncFunction_h__Script_SteamIntegrationKit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_SubmitItemUpdate_AsyncFunction_h__Script_SteamIntegrationKit_1827601927{
	TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_SubmitItemUpdate_AsyncFunction_h__Script_SteamIntegrationKit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_SubmitItemUpdate_AsyncFunction_h__Script_SteamIntegrationKit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
