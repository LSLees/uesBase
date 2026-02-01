// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/UGC/SIK_GetUserItemVote_AsyncFunction.h"
#include "SIK_SharedFile.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_GetUserItemVote_AsyncFunction() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_GetUserItemVote_AsyncFunction();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_GetUserItemVote_AsyncFunction_NoRegister();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetUserItemVoteComplete__DelegateSignature();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_PublishedFileId();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnGetUserItemVoteComplete ********************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetUserItemVoteComplete__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnGetUserItemVoteComplete_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
		FSIK_PublishedFileId PublishedFileId;
		bool bVotedUp;
		bool bVotedDown;
		bool bVoteSkipped;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/UGC/SIK_GetUserItemVote_AsyncFunction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnGetUserItemVoteComplete constinit property declarations ************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileId;
	static void NewProp_bVotedUp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVotedUp;
	static void NewProp_bVotedDown_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVotedDown;
	static void NewProp_bVoteSkipped_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVoteSkipped;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnGetUserItemVoteComplete constinit property declarations **************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnGetUserItemVoteComplete Property Definitions ***********************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetUserItemVoteComplete__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnGetUserItemVoteComplete_Parms, Result), Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result, METADATA_PARAMS(0, nullptr) }; // 655382749
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetUserItemVoteComplete__DelegateSignature_Statics::NewProp_PublishedFileId = { "PublishedFileId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnGetUserItemVoteComplete_Parms, PublishedFileId), Z_Construct_UScriptStruct_FSIK_PublishedFileId, METADATA_PARAMS(0, nullptr) }; // 3479136102
void Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetUserItemVoteComplete__DelegateSignature_Statics::NewProp_bVotedUp_SetBit(void* Obj)
{
	((_Script_SteamIntegrationKit_eventOnGetUserItemVoteComplete_Parms*)Obj)->bVotedUp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetUserItemVoteComplete__DelegateSignature_Statics::NewProp_bVotedUp = { "bVotedUp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamIntegrationKit_eventOnGetUserItemVoteComplete_Parms), &Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetUserItemVoteComplete__DelegateSignature_Statics::NewProp_bVotedUp_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetUserItemVoteComplete__DelegateSignature_Statics::NewProp_bVotedDown_SetBit(void* Obj)
{
	((_Script_SteamIntegrationKit_eventOnGetUserItemVoteComplete_Parms*)Obj)->bVotedDown = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetUserItemVoteComplete__DelegateSignature_Statics::NewProp_bVotedDown = { "bVotedDown", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamIntegrationKit_eventOnGetUserItemVoteComplete_Parms), &Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetUserItemVoteComplete__DelegateSignature_Statics::NewProp_bVotedDown_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetUserItemVoteComplete__DelegateSignature_Statics::NewProp_bVoteSkipped_SetBit(void* Obj)
{
	((_Script_SteamIntegrationKit_eventOnGetUserItemVoteComplete_Parms*)Obj)->bVoteSkipped = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetUserItemVoteComplete__DelegateSignature_Statics::NewProp_bVoteSkipped = { "bVoteSkipped", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamIntegrationKit_eventOnGetUserItemVoteComplete_Parms), &Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetUserItemVoteComplete__DelegateSignature_Statics::NewProp_bVoteSkipped_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetUserItemVoteComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetUserItemVoteComplete__DelegateSignature_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetUserItemVoteComplete__DelegateSignature_Statics::NewProp_PublishedFileId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetUserItemVoteComplete__DelegateSignature_Statics::NewProp_bVotedUp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetUserItemVoteComplete__DelegateSignature_Statics::NewProp_bVotedDown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetUserItemVoteComplete__DelegateSignature_Statics::NewProp_bVoteSkipped,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetUserItemVoteComplete__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnGetUserItemVoteComplete Property Definitions *************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetUserItemVoteComplete__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnGetUserItemVoteComplete__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetUserItemVoteComplete__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetUserItemVoteComplete__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetUserItemVoteComplete__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnGetUserItemVoteComplete_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetUserItemVoteComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetUserItemVoteComplete__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetUserItemVoteComplete__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnGetUserItemVoteComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetUserItemVoteComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetUserItemVoteComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGetUserItemVoteComplete_DelegateWrapper(const FMulticastScriptDelegate& OnGetUserItemVoteComplete, ESIK_Result Result, FSIK_PublishedFileId PublishedFileId, bool bVotedUp, bool bVotedDown, bool bVoteSkipped)
{
	struct _Script_SteamIntegrationKit_eventOnGetUserItemVoteComplete_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
		FSIK_PublishedFileId PublishedFileId;
		bool bVotedUp;
		bool bVotedDown;
		bool bVoteSkipped;
	};
	_Script_SteamIntegrationKit_eventOnGetUserItemVoteComplete_Parms Parms;
	Parms.Result=Result;
	Parms.PublishedFileId=PublishedFileId;
	Parms.bVotedUp=bVotedUp ? true : false;
	Parms.bVotedDown=bVotedDown ? true : false;
	Parms.bVoteSkipped=bVoteSkipped ? true : false;
	OnGetUserItemVoteComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnGetUserItemVoteComplete **********************************************

// ********** Begin Class USIK_GetUserItemVote_AsyncFunction Function GetUserItemVote **************
struct Z_Construct_UFunction_USIK_GetUserItemVote_AsyncFunction_GetUserItemVote_Statics
{
	struct SIK_GetUserItemVote_AsyncFunction_eventGetUserItemVote_Parms
	{
		FSIK_PublishedFileId PublishedFileID;
		USIK_GetUserItemVote_AsyncFunction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_GetUserItemVote_AsyncFunction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetUserItemVote constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetUserItemVote constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetUserItemVote Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_GetUserItemVote_AsyncFunction_GetUserItemVote_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetUserItemVote_AsyncFunction_eventGetUserItemVote_Parms, PublishedFileID), Z_Construct_UScriptStruct_FSIK_PublishedFileId, METADATA_PARAMS(0, nullptr) }; // 3479136102
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_GetUserItemVote_AsyncFunction_GetUserItemVote_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetUserItemVote_AsyncFunction_eventGetUserItemVote_Parms, ReturnValue), Z_Construct_UClass_USIK_GetUserItemVote_AsyncFunction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GetUserItemVote_AsyncFunction_GetUserItemVote_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetUserItemVote_AsyncFunction_GetUserItemVote_Statics::NewProp_PublishedFileID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetUserItemVote_AsyncFunction_GetUserItemVote_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetUserItemVote_AsyncFunction_GetUserItemVote_Statics::PropPointers) < 2048);
// ********** End Function GetUserItemVote Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GetUserItemVote_AsyncFunction_GetUserItemVote_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_GetUserItemVote_AsyncFunction, nullptr, "GetUserItemVote", 	Z_Construct_UFunction_USIK_GetUserItemVote_AsyncFunction_GetUserItemVote_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetUserItemVote_AsyncFunction_GetUserItemVote_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_GetUserItemVote_AsyncFunction_GetUserItemVote_Statics::SIK_GetUserItemVote_AsyncFunction_eventGetUserItemVote_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetUserItemVote_AsyncFunction_GetUserItemVote_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GetUserItemVote_AsyncFunction_GetUserItemVote_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_GetUserItemVote_AsyncFunction_GetUserItemVote_Statics::SIK_GetUserItemVote_AsyncFunction_eventGetUserItemVote_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GetUserItemVote_AsyncFunction_GetUserItemVote()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GetUserItemVote_AsyncFunction_GetUserItemVote_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GetUserItemVote_AsyncFunction::execGetUserItemVote)
{
	P_GET_STRUCT(FSIK_PublishedFileId,Z_Param_PublishedFileID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_GetUserItemVote_AsyncFunction**)Z_Param__Result=USIK_GetUserItemVote_AsyncFunction::GetUserItemVote(Z_Param_PublishedFileID);
	P_NATIVE_END;
}
// ********** End Class USIK_GetUserItemVote_AsyncFunction Function GetUserItemVote ****************

// ********** Begin Class USIK_GetUserItemVote_AsyncFunction ***************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_GetUserItemVote_AsyncFunction;
UClass* USIK_GetUserItemVote_AsyncFunction::GetPrivateStaticClass()
{
	using TClass = USIK_GetUserItemVote_AsyncFunction;
	if (!Z_Registration_Info_UClass_USIK_GetUserItemVote_AsyncFunction.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_GetUserItemVote_AsyncFunction"),
			Z_Registration_Info_UClass_USIK_GetUserItemVote_AsyncFunction.InnerSingleton,
			StaticRegisterNativesUSIK_GetUserItemVote_AsyncFunction,
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
	return Z_Registration_Info_UClass_USIK_GetUserItemVote_AsyncFunction.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_GetUserItemVote_AsyncFunction_NoRegister()
{
	return USIK_GetUserItemVote_AsyncFunction::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_GetUserItemVote_AsyncFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Functions/UGC/SIK_GetUserItemVote_AsyncFunction.h" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_GetUserItemVote_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Functions/UGC/SIK_GetUserItemVote_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Functions/UGC/SIK_GetUserItemVote_AsyncFunction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_GetUserItemVote_AsyncFunction constinit property declarations *******
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USIK_GetUserItemVote_AsyncFunction constinit property declarations *********
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetUserItemVote"), .Pointer = &USIK_GetUserItemVote_AsyncFunction::execGetUserItemVote },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_GetUserItemVote_AsyncFunction_GetUserItemVote, "GetUserItemVote" }, // 2839333125
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_GetUserItemVote_AsyncFunction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_GetUserItemVote_AsyncFunction_Statics

// ********** Begin Class USIK_GetUserItemVote_AsyncFunction Property Definitions ******************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_GetUserItemVote_AsyncFunction_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_GetUserItemVote_AsyncFunction, OnSuccess), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetUserItemVoteComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 2537124477
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_GetUserItemVote_AsyncFunction_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_GetUserItemVote_AsyncFunction, OnFailure), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetUserItemVoteComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 2537124477
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USIK_GetUserItemVote_AsyncFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_GetUserItemVote_AsyncFunction_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_GetUserItemVote_AsyncFunction_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetUserItemVote_AsyncFunction_Statics::PropPointers) < 2048);
// ********** End Class USIK_GetUserItemVote_AsyncFunction Property Definitions ********************
UObject* (*const Z_Construct_UClass_USIK_GetUserItemVote_AsyncFunction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetUserItemVote_AsyncFunction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_GetUserItemVote_AsyncFunction_Statics::ClassParams = {
	&USIK_GetUserItemVote_AsyncFunction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USIK_GetUserItemVote_AsyncFunction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetUserItemVote_AsyncFunction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetUserItemVote_AsyncFunction_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_GetUserItemVote_AsyncFunction_Statics::Class_MetaDataParams)
};
void USIK_GetUserItemVote_AsyncFunction::StaticRegisterNativesUSIK_GetUserItemVote_AsyncFunction()
{
	UClass* Class = USIK_GetUserItemVote_AsyncFunction::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_GetUserItemVote_AsyncFunction_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_GetUserItemVote_AsyncFunction()
{
	if (!Z_Registration_Info_UClass_USIK_GetUserItemVote_AsyncFunction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_GetUserItemVote_AsyncFunction.OuterSingleton, Z_Construct_UClass_USIK_GetUserItemVote_AsyncFunction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_GetUserItemVote_AsyncFunction.OuterSingleton;
}
USIK_GetUserItemVote_AsyncFunction::USIK_GetUserItemVote_AsyncFunction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_GetUserItemVote_AsyncFunction);
USIK_GetUserItemVote_AsyncFunction::~USIK_GetUserItemVote_AsyncFunction() {}
// ********** End Class USIK_GetUserItemVote_AsyncFunction *****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_GetUserItemVote_AsyncFunction_h__Script_SteamIntegrationKit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_GetUserItemVote_AsyncFunction, USIK_GetUserItemVote_AsyncFunction::StaticClass, TEXT("USIK_GetUserItemVote_AsyncFunction"), &Z_Registration_Info_UClass_USIK_GetUserItemVote_AsyncFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_GetUserItemVote_AsyncFunction), 867816248U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_GetUserItemVote_AsyncFunction_h__Script_SteamIntegrationKit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_GetUserItemVote_AsyncFunction_h__Script_SteamIntegrationKit_2528700654{
	TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_GetUserItemVote_AsyncFunction_h__Script_SteamIntegrationKit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_GetUserItemVote_AsyncFunction_h__Script_SteamIntegrationKit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
