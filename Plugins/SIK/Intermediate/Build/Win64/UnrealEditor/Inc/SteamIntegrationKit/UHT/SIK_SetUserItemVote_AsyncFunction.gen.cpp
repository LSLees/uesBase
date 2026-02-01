// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/UGC/SIK_SetUserItemVote_AsyncFunction.h"
#include "SIK_SharedFile.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_SetUserItemVote_AsyncFunction() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_SetUserItemVote_AsyncFunction();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_SetUserItemVote_AsyncFunction_NoRegister();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSetUserItemVoteComplete__DelegateSignature();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_PublishedFileId();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnSetUserItemVoteComplete ********************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSetUserItemVoteComplete__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnSetUserItemVoteComplete_Parms
	{
		FSIK_PublishedFileId PublishedFileID;
		bool bVoteUp;
		TEnumAsByte<ESIK_Result> Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/UGC/SIK_SetUserItemVote_AsyncFunction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnSetUserItemVoteComplete constinit property declarations ************
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
	static void NewProp_bVoteUp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVoteUp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnSetUserItemVoteComplete constinit property declarations **************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnSetUserItemVoteComplete Property Definitions ***********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSetUserItemVoteComplete__DelegateSignature_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnSetUserItemVoteComplete_Parms, PublishedFileID), Z_Construct_UScriptStruct_FSIK_PublishedFileId, METADATA_PARAMS(0, nullptr) }; // 3479136102
void Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSetUserItemVoteComplete__DelegateSignature_Statics::NewProp_bVoteUp_SetBit(void* Obj)
{
	((_Script_SteamIntegrationKit_eventOnSetUserItemVoteComplete_Parms*)Obj)->bVoteUp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSetUserItemVoteComplete__DelegateSignature_Statics::NewProp_bVoteUp = { "bVoteUp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamIntegrationKit_eventOnSetUserItemVoteComplete_Parms), &Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSetUserItemVoteComplete__DelegateSignature_Statics::NewProp_bVoteUp_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSetUserItemVoteComplete__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnSetUserItemVoteComplete_Parms, Result), Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result, METADATA_PARAMS(0, nullptr) }; // 655382749
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSetUserItemVoteComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSetUserItemVoteComplete__DelegateSignature_Statics::NewProp_PublishedFileID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSetUserItemVoteComplete__DelegateSignature_Statics::NewProp_bVoteUp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSetUserItemVoteComplete__DelegateSignature_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSetUserItemVoteComplete__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnSetUserItemVoteComplete Property Definitions *************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSetUserItemVoteComplete__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnSetUserItemVoteComplete__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSetUserItemVoteComplete__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSetUserItemVoteComplete__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSetUserItemVoteComplete__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnSetUserItemVoteComplete_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSetUserItemVoteComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSetUserItemVoteComplete__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSetUserItemVoteComplete__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnSetUserItemVoteComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSetUserItemVoteComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSetUserItemVoteComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSetUserItemVoteComplete_DelegateWrapper(const FMulticastScriptDelegate& OnSetUserItemVoteComplete, FSIK_PublishedFileId PublishedFileID, bool bVoteUp, ESIK_Result Result)
{
	struct _Script_SteamIntegrationKit_eventOnSetUserItemVoteComplete_Parms
	{
		FSIK_PublishedFileId PublishedFileID;
		bool bVoteUp;
		TEnumAsByte<ESIK_Result> Result;
	};
	_Script_SteamIntegrationKit_eventOnSetUserItemVoteComplete_Parms Parms;
	Parms.PublishedFileID=PublishedFileID;
	Parms.bVoteUp=bVoteUp ? true : false;
	Parms.Result=Result;
	OnSetUserItemVoteComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnSetUserItemVoteComplete **********************************************

// ********** Begin Class USIK_SetUserItemVote_AsyncFunction Function SetUserItemVote **************
struct Z_Construct_UFunction_USIK_SetUserItemVote_AsyncFunction_SetUserItemVote_Statics
{
	struct SIK_SetUserItemVote_AsyncFunction_eventSetUserItemVote_Parms
	{
		FSIK_PublishedFileId PublishedFileID;
		bool bVoteUp;
		USIK_SetUserItemVote_AsyncFunction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_SetUserItemVote_AsyncFunction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetUserItemVote constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
	static void NewProp_bVoteUp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVoteUp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetUserItemVote constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetUserItemVote Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_SetUserItemVote_AsyncFunction_SetUserItemVote_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_SetUserItemVote_AsyncFunction_eventSetUserItemVote_Parms, PublishedFileID), Z_Construct_UScriptStruct_FSIK_PublishedFileId, METADATA_PARAMS(0, nullptr) }; // 3479136102
void Z_Construct_UFunction_USIK_SetUserItemVote_AsyncFunction_SetUserItemVote_Statics::NewProp_bVoteUp_SetBit(void* Obj)
{
	((SIK_SetUserItemVote_AsyncFunction_eventSetUserItemVote_Parms*)Obj)->bVoteUp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_SetUserItemVote_AsyncFunction_SetUserItemVote_Statics::NewProp_bVoteUp = { "bVoteUp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_SetUserItemVote_AsyncFunction_eventSetUserItemVote_Parms), &Z_Construct_UFunction_USIK_SetUserItemVote_AsyncFunction_SetUserItemVote_Statics::NewProp_bVoteUp_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_SetUserItemVote_AsyncFunction_SetUserItemVote_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_SetUserItemVote_AsyncFunction_eventSetUserItemVote_Parms, ReturnValue), Z_Construct_UClass_USIK_SetUserItemVote_AsyncFunction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_SetUserItemVote_AsyncFunction_SetUserItemVote_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SetUserItemVote_AsyncFunction_SetUserItemVote_Statics::NewProp_PublishedFileID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SetUserItemVote_AsyncFunction_SetUserItemVote_Statics::NewProp_bVoteUp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SetUserItemVote_AsyncFunction_SetUserItemVote_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SetUserItemVote_AsyncFunction_SetUserItemVote_Statics::PropPointers) < 2048);
// ********** End Function SetUserItemVote Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_SetUserItemVote_AsyncFunction_SetUserItemVote_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_SetUserItemVote_AsyncFunction, nullptr, "SetUserItemVote", 	Z_Construct_UFunction_USIK_SetUserItemVote_AsyncFunction_SetUserItemVote_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SetUserItemVote_AsyncFunction_SetUserItemVote_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_SetUserItemVote_AsyncFunction_SetUserItemVote_Statics::SIK_SetUserItemVote_AsyncFunction_eventSetUserItemVote_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SetUserItemVote_AsyncFunction_SetUserItemVote_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_SetUserItemVote_AsyncFunction_SetUserItemVote_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_SetUserItemVote_AsyncFunction_SetUserItemVote_Statics::SIK_SetUserItemVote_AsyncFunction_eventSetUserItemVote_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_SetUserItemVote_AsyncFunction_SetUserItemVote()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_SetUserItemVote_AsyncFunction_SetUserItemVote_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_SetUserItemVote_AsyncFunction::execSetUserItemVote)
{
	P_GET_STRUCT(FSIK_PublishedFileId,Z_Param_PublishedFileID);
	P_GET_UBOOL(Z_Param_bVoteUp);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_SetUserItemVote_AsyncFunction**)Z_Param__Result=USIK_SetUserItemVote_AsyncFunction::SetUserItemVote(Z_Param_PublishedFileID,Z_Param_bVoteUp);
	P_NATIVE_END;
}
// ********** End Class USIK_SetUserItemVote_AsyncFunction Function SetUserItemVote ****************

// ********** Begin Class USIK_SetUserItemVote_AsyncFunction ***************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_SetUserItemVote_AsyncFunction;
UClass* USIK_SetUserItemVote_AsyncFunction::GetPrivateStaticClass()
{
	using TClass = USIK_SetUserItemVote_AsyncFunction;
	if (!Z_Registration_Info_UClass_USIK_SetUserItemVote_AsyncFunction.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_SetUserItemVote_AsyncFunction"),
			Z_Registration_Info_UClass_USIK_SetUserItemVote_AsyncFunction.InnerSingleton,
			StaticRegisterNativesUSIK_SetUserItemVote_AsyncFunction,
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
	return Z_Registration_Info_UClass_USIK_SetUserItemVote_AsyncFunction.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_SetUserItemVote_AsyncFunction_NoRegister()
{
	return USIK_SetUserItemVote_AsyncFunction::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_SetUserItemVote_AsyncFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Functions/UGC/SIK_SetUserItemVote_AsyncFunction.h" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_SetUserItemVote_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Functions/UGC/SIK_SetUserItemVote_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Functions/UGC/SIK_SetUserItemVote_AsyncFunction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_SetUserItemVote_AsyncFunction constinit property declarations *******
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USIK_SetUserItemVote_AsyncFunction constinit property declarations *********
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("SetUserItemVote"), .Pointer = &USIK_SetUserItemVote_AsyncFunction::execSetUserItemVote },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_SetUserItemVote_AsyncFunction_SetUserItemVote, "SetUserItemVote" }, // 1423268658
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_SetUserItemVote_AsyncFunction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_SetUserItemVote_AsyncFunction_Statics

// ********** Begin Class USIK_SetUserItemVote_AsyncFunction Property Definitions ******************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_SetUserItemVote_AsyncFunction_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_SetUserItemVote_AsyncFunction, OnSuccess), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSetUserItemVoteComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 1545229646
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_SetUserItemVote_AsyncFunction_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_SetUserItemVote_AsyncFunction, OnFailure), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnSetUserItemVoteComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 1545229646
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USIK_SetUserItemVote_AsyncFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_SetUserItemVote_AsyncFunction_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_SetUserItemVote_AsyncFunction_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_SetUserItemVote_AsyncFunction_Statics::PropPointers) < 2048);
// ********** End Class USIK_SetUserItemVote_AsyncFunction Property Definitions ********************
UObject* (*const Z_Construct_UClass_USIK_SetUserItemVote_AsyncFunction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_SetUserItemVote_AsyncFunction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_SetUserItemVote_AsyncFunction_Statics::ClassParams = {
	&USIK_SetUserItemVote_AsyncFunction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USIK_SetUserItemVote_AsyncFunction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USIK_SetUserItemVote_AsyncFunction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_SetUserItemVote_AsyncFunction_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_SetUserItemVote_AsyncFunction_Statics::Class_MetaDataParams)
};
void USIK_SetUserItemVote_AsyncFunction::StaticRegisterNativesUSIK_SetUserItemVote_AsyncFunction()
{
	UClass* Class = USIK_SetUserItemVote_AsyncFunction::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_SetUserItemVote_AsyncFunction_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_SetUserItemVote_AsyncFunction()
{
	if (!Z_Registration_Info_UClass_USIK_SetUserItemVote_AsyncFunction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_SetUserItemVote_AsyncFunction.OuterSingleton, Z_Construct_UClass_USIK_SetUserItemVote_AsyncFunction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_SetUserItemVote_AsyncFunction.OuterSingleton;
}
USIK_SetUserItemVote_AsyncFunction::USIK_SetUserItemVote_AsyncFunction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_SetUserItemVote_AsyncFunction);
USIK_SetUserItemVote_AsyncFunction::~USIK_SetUserItemVote_AsyncFunction() {}
// ********** End Class USIK_SetUserItemVote_AsyncFunction *****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_SetUserItemVote_AsyncFunction_h__Script_SteamIntegrationKit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_SetUserItemVote_AsyncFunction, USIK_SetUserItemVote_AsyncFunction::StaticClass, TEXT("USIK_SetUserItemVote_AsyncFunction"), &Z_Registration_Info_UClass_USIK_SetUserItemVote_AsyncFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_SetUserItemVote_AsyncFunction), 2853759360U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_SetUserItemVote_AsyncFunction_h__Script_SteamIntegrationKit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_SetUserItemVote_AsyncFunction_h__Script_SteamIntegrationKit_244653767{
	TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_SetUserItemVote_AsyncFunction_h__Script_SteamIntegrationKit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_SetUserItemVote_AsyncFunction_h__Script_SteamIntegrationKit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
