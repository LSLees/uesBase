// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/Inventory/SIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction.h"
#include "SIK_SharedFile.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction_NoRegister();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRequestEligiblePromoItemDefinitionsIDs__DelegateSignature();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_SteamId();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnRequestEligiblePromoItemDefinitionsIDs *****************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRequestEligiblePromoItemDefinitionsIDs__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnRequestEligiblePromoItemDefinitionsIDs_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
		FSIK_SteamId SteamID;
		int32 numEligiblePromoItemDefs;
		bool bCachedData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/Inventory/SIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnRequestEligiblePromoItemDefinitionsIDs constinit property declarations 
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_numEligiblePromoItemDefs;
	static void NewProp_bCachedData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCachedData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnRequestEligiblePromoItemDefinitionsIDs constinit property declarations 
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnRequestEligiblePromoItemDefinitionsIDs Property Definitions ********
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRequestEligiblePromoItemDefinitionsIDs__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnRequestEligiblePromoItemDefinitionsIDs_Parms, Result), Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result, METADATA_PARAMS(0, nullptr) }; // 655382749
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRequestEligiblePromoItemDefinitionsIDs__DelegateSignature_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnRequestEligiblePromoItemDefinitionsIDs_Parms, SteamID), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRequestEligiblePromoItemDefinitionsIDs__DelegateSignature_Statics::NewProp_numEligiblePromoItemDefs = { "numEligiblePromoItemDefs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnRequestEligiblePromoItemDefinitionsIDs_Parms, numEligiblePromoItemDefs), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRequestEligiblePromoItemDefinitionsIDs__DelegateSignature_Statics::NewProp_bCachedData_SetBit(void* Obj)
{
	((_Script_SteamIntegrationKit_eventOnRequestEligiblePromoItemDefinitionsIDs_Parms*)Obj)->bCachedData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRequestEligiblePromoItemDefinitionsIDs__DelegateSignature_Statics::NewProp_bCachedData = { "bCachedData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamIntegrationKit_eventOnRequestEligiblePromoItemDefinitionsIDs_Parms), &Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRequestEligiblePromoItemDefinitionsIDs__DelegateSignature_Statics::NewProp_bCachedData_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRequestEligiblePromoItemDefinitionsIDs__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRequestEligiblePromoItemDefinitionsIDs__DelegateSignature_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRequestEligiblePromoItemDefinitionsIDs__DelegateSignature_Statics::NewProp_SteamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRequestEligiblePromoItemDefinitionsIDs__DelegateSignature_Statics::NewProp_numEligiblePromoItemDefs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRequestEligiblePromoItemDefinitionsIDs__DelegateSignature_Statics::NewProp_bCachedData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRequestEligiblePromoItemDefinitionsIDs__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnRequestEligiblePromoItemDefinitionsIDs Property Definitions **********
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRequestEligiblePromoItemDefinitionsIDs__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnRequestEligiblePromoItemDefinitionsIDs__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRequestEligiblePromoItemDefinitionsIDs__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRequestEligiblePromoItemDefinitionsIDs__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRequestEligiblePromoItemDefinitionsIDs__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnRequestEligiblePromoItemDefinitionsIDs_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRequestEligiblePromoItemDefinitionsIDs__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRequestEligiblePromoItemDefinitionsIDs__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRequestEligiblePromoItemDefinitionsIDs__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnRequestEligiblePromoItemDefinitionsIDs_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRequestEligiblePromoItemDefinitionsIDs__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRequestEligiblePromoItemDefinitionsIDs__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRequestEligiblePromoItemDefinitionsIDs_DelegateWrapper(const FMulticastScriptDelegate& OnRequestEligiblePromoItemDefinitionsIDs, ESIK_Result Result, FSIK_SteamId SteamID, int32 numEligiblePromoItemDefs, bool bCachedData)
{
	struct _Script_SteamIntegrationKit_eventOnRequestEligiblePromoItemDefinitionsIDs_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
		FSIK_SteamId SteamID;
		int32 numEligiblePromoItemDefs;
		bool bCachedData;
	};
	_Script_SteamIntegrationKit_eventOnRequestEligiblePromoItemDefinitionsIDs_Parms Parms;
	Parms.Result=Result;
	Parms.SteamID=SteamID;
	Parms.numEligiblePromoItemDefs=numEligiblePromoItemDefs;
	Parms.bCachedData=bCachedData ? true : false;
	OnRequestEligiblePromoItemDefinitionsIDs.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnRequestEligiblePromoItemDefinitionsIDs *******************************

// ********** Begin Class USIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction Function RequestEligiblePromoItemDefinitionsIDs 
struct Z_Construct_UFunction_USIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction_RequestEligiblePromoItemDefinitionsIDs_Statics
{
	struct SIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction_eventRequestEligiblePromoItemDefinitionsIDs_Parms
	{
		FSIK_SteamId SteamID;
		USIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit || SDK Functions || Inventory" },
		{ "DisplayName", "Request Eligible Promo Item Definitions IDs" },
		{ "ModuleRelativePath", "Functions/Inventory/SIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function RequestEligiblePromoItemDefinitionsIDs constinit property declarations 
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RequestEligiblePromoItemDefinitionsIDs constinit property declarations **
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RequestEligiblePromoItemDefinitionsIDs Property Definitions ***********
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction_RequestEligiblePromoItemDefinitionsIDs_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction_eventRequestEligiblePromoItemDefinitionsIDs_Parms, SteamID), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction_RequestEligiblePromoItemDefinitionsIDs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction_eventRequestEligiblePromoItemDefinitionsIDs_Parms, ReturnValue), Z_Construct_UClass_USIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction_RequestEligiblePromoItemDefinitionsIDs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction_RequestEligiblePromoItemDefinitionsIDs_Statics::NewProp_SteamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction_RequestEligiblePromoItemDefinitionsIDs_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction_RequestEligiblePromoItemDefinitionsIDs_Statics::PropPointers) < 2048);
// ********** End Function RequestEligiblePromoItemDefinitionsIDs Property Definitions *************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction_RequestEligiblePromoItemDefinitionsIDs_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction, nullptr, "RequestEligiblePromoItemDefinitionsIDs", 	Z_Construct_UFunction_USIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction_RequestEligiblePromoItemDefinitionsIDs_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction_RequestEligiblePromoItemDefinitionsIDs_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction_RequestEligiblePromoItemDefinitionsIDs_Statics::SIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction_eventRequestEligiblePromoItemDefinitionsIDs_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction_RequestEligiblePromoItemDefinitionsIDs_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction_RequestEligiblePromoItemDefinitionsIDs_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction_RequestEligiblePromoItemDefinitionsIDs_Statics::SIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction_eventRequestEligiblePromoItemDefinitionsIDs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction_RequestEligiblePromoItemDefinitionsIDs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction_RequestEligiblePromoItemDefinitionsIDs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction::execRequestEligiblePromoItemDefinitionsIDs)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_SteamID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction**)Z_Param__Result=USIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction::RequestEligiblePromoItemDefinitionsIDs(Z_Param_SteamID);
	P_NATIVE_END;
}
// ********** End Class USIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction Function RequestEligiblePromoItemDefinitionsIDs 

// ********** Begin Class USIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction ****************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction;
UClass* USIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction::GetPrivateStaticClass()
{
	using TClass = USIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction;
	if (!Z_Registration_Info_UClass_USIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction"),
			Z_Registration_Info_UClass_USIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction.InnerSingleton,
			StaticRegisterNativesUSIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction,
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
	return Z_Registration_Info_UClass_USIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction_NoRegister()
{
	return USIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Functions/Inventory/SIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction.h" },
		{ "ModuleRelativePath", "Functions/Inventory/SIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Functions/Inventory/SIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Functions/Inventory/SIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction constinit property declarations 
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction constinit property declarations 
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("RequestEligiblePromoItemDefinitionsIDs"), .Pointer = &USIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction::execRequestEligiblePromoItemDefinitionsIDs },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction_RequestEligiblePromoItemDefinitionsIDs, "RequestEligiblePromoItemDefinitionsIDs" }, // 4082357501
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction_Statics

// ********** Begin Class USIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction Property Definitions 
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction, OnSuccess), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRequestEligiblePromoItemDefinitionsIDs__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 2078136352
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction, OnFailure), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRequestEligiblePromoItemDefinitionsIDs__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 2078136352
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction_Statics::PropPointers) < 2048);
// ********** End Class USIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction Property Definitions 
UObject* (*const Z_Construct_UClass_USIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction_Statics::ClassParams = {
	&USIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction_Statics::Class_MetaDataParams)
};
void USIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction::StaticRegisterNativesUSIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction()
{
	UClass* Class = USIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction()
{
	if (!Z_Registration_Info_UClass_USIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction.OuterSingleton, Z_Construct_UClass_USIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction.OuterSingleton;
}
USIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction::USIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction);
USIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction::~USIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction() {}
// ********** End Class USIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction ******************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Inventory_SIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction_h__Script_SteamIntegrationKit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction, USIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction::StaticClass, TEXT("USIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction"), &Z_Registration_Info_UClass_USIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction), 3153177165U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Inventory_SIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction_h__Script_SteamIntegrationKit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Inventory_SIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction_h__Script_SteamIntegrationKit_3105182829{
	TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Inventory_SIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction_h__Script_SteamIntegrationKit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Inventory_SIK_RequestEligiblePromoItemDefinitionsIDs_AsyncFunction_h__Script_SteamIntegrationKit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
