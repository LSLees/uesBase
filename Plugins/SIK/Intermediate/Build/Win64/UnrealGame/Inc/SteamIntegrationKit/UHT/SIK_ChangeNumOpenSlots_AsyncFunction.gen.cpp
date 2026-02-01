// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/Parties/SIK_ChangeNumOpenSlots_AsyncFunction.h"
#include "SIK_SharedFile.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_ChangeNumOpenSlots_AsyncFunction() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_ChangeNumOpenSlots_AsyncFunction();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_ChangeNumOpenSlots_AsyncFunction_NoRegister();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_ChangeNumOpenSlotsDelegate__DelegateSignature();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_PartyBeaconID();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FChangeNumOpenSlotsDelegate *******************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_ChangeNumOpenSlotsDelegate__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventChangeNumOpenSlotsDelegate_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/Parties/SIK_ChangeNumOpenSlots_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FChangeNumOpenSlotsDelegate constinit property declarations ***********
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FChangeNumOpenSlotsDelegate constinit property declarations *************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FChangeNumOpenSlotsDelegate Property Definitions **********************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_ChangeNumOpenSlotsDelegate__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventChangeNumOpenSlotsDelegate_Parms, Result), Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 655382749
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_ChangeNumOpenSlotsDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_ChangeNumOpenSlotsDelegate__DelegateSignature_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_ChangeNumOpenSlotsDelegate__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FChangeNumOpenSlotsDelegate Property Definitions ************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_ChangeNumOpenSlotsDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "ChangeNumOpenSlotsDelegate__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_ChangeNumOpenSlotsDelegate__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_ChangeNumOpenSlotsDelegate__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_ChangeNumOpenSlotsDelegate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventChangeNumOpenSlotsDelegate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_ChangeNumOpenSlotsDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_ChangeNumOpenSlotsDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_ChangeNumOpenSlotsDelegate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventChangeNumOpenSlotsDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_ChangeNumOpenSlotsDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_ChangeNumOpenSlotsDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FChangeNumOpenSlotsDelegate_DelegateWrapper(const FMulticastScriptDelegate& ChangeNumOpenSlotsDelegate, const ESIK_Result Result)
{
	struct _Script_SteamIntegrationKit_eventChangeNumOpenSlotsDelegate_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
	};
	_Script_SteamIntegrationKit_eventChangeNumOpenSlotsDelegate_Parms Parms;
	Parms.Result=Result;
	ChangeNumOpenSlotsDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FChangeNumOpenSlotsDelegate *********************************************

// ********** Begin Class USIK_ChangeNumOpenSlots_AsyncFunction Function ChangeNumOpenSlots ********
struct Z_Construct_UFunction_USIK_ChangeNumOpenSlots_AsyncFunction_ChangeNumOpenSlots_Statics
{
	struct SIK_ChangeNumOpenSlots_AsyncFunction_eventChangeNumOpenSlots_Parms
	{
		FSIK_PartyBeaconID PartyBeaconID;
		int32 OpenSlots;
		USIK_ChangeNumOpenSlots_AsyncFunction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit || SDK Functions || Parties" },
		{ "DisplayName", "Change Num Open Slots" },
		{ "ModuleRelativePath", "Functions/Parties/SIK_ChangeNumOpenSlots_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartyBeaconID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ChangeNumOpenSlots constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_PartyBeaconID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OpenSlots;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ChangeNumOpenSlots constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ChangeNumOpenSlots Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_ChangeNumOpenSlots_AsyncFunction_ChangeNumOpenSlots_Statics::NewProp_PartyBeaconID = { "PartyBeaconID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ChangeNumOpenSlots_AsyncFunction_eventChangeNumOpenSlots_Parms, PartyBeaconID), Z_Construct_UScriptStruct_FSIK_PartyBeaconID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartyBeaconID_MetaData), NewProp_PartyBeaconID_MetaData) }; // 93468669
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_ChangeNumOpenSlots_AsyncFunction_ChangeNumOpenSlots_Statics::NewProp_OpenSlots = { "OpenSlots", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ChangeNumOpenSlots_AsyncFunction_eventChangeNumOpenSlots_Parms, OpenSlots), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_ChangeNumOpenSlots_AsyncFunction_ChangeNumOpenSlots_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ChangeNumOpenSlots_AsyncFunction_eventChangeNumOpenSlots_Parms, ReturnValue), Z_Construct_UClass_USIK_ChangeNumOpenSlots_AsyncFunction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_ChangeNumOpenSlots_AsyncFunction_ChangeNumOpenSlots_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ChangeNumOpenSlots_AsyncFunction_ChangeNumOpenSlots_Statics::NewProp_PartyBeaconID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ChangeNumOpenSlots_AsyncFunction_ChangeNumOpenSlots_Statics::NewProp_OpenSlots,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ChangeNumOpenSlots_AsyncFunction_ChangeNumOpenSlots_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_ChangeNumOpenSlots_AsyncFunction_ChangeNumOpenSlots_Statics::PropPointers) < 2048);
// ********** End Function ChangeNumOpenSlots Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_ChangeNumOpenSlots_AsyncFunction_ChangeNumOpenSlots_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_ChangeNumOpenSlots_AsyncFunction, nullptr, "ChangeNumOpenSlots", 	Z_Construct_UFunction_USIK_ChangeNumOpenSlots_AsyncFunction_ChangeNumOpenSlots_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_ChangeNumOpenSlots_AsyncFunction_ChangeNumOpenSlots_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_ChangeNumOpenSlots_AsyncFunction_ChangeNumOpenSlots_Statics::SIK_ChangeNumOpenSlots_AsyncFunction_eventChangeNumOpenSlots_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_ChangeNumOpenSlots_AsyncFunction_ChangeNumOpenSlots_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_ChangeNumOpenSlots_AsyncFunction_ChangeNumOpenSlots_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_ChangeNumOpenSlots_AsyncFunction_ChangeNumOpenSlots_Statics::SIK_ChangeNumOpenSlots_AsyncFunction_eventChangeNumOpenSlots_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_ChangeNumOpenSlots_AsyncFunction_ChangeNumOpenSlots()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_ChangeNumOpenSlots_AsyncFunction_ChangeNumOpenSlots_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_ChangeNumOpenSlots_AsyncFunction::execChangeNumOpenSlots)
{
	P_GET_STRUCT_REF(FSIK_PartyBeaconID,Z_Param_Out_PartyBeaconID);
	P_GET_PROPERTY(FIntProperty,Z_Param_OpenSlots);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_ChangeNumOpenSlots_AsyncFunction**)Z_Param__Result=USIK_ChangeNumOpenSlots_AsyncFunction::ChangeNumOpenSlots(Z_Param_Out_PartyBeaconID,Z_Param_OpenSlots);
	P_NATIVE_END;
}
// ********** End Class USIK_ChangeNumOpenSlots_AsyncFunction Function ChangeNumOpenSlots **********

// ********** Begin Class USIK_ChangeNumOpenSlots_AsyncFunction ************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_ChangeNumOpenSlots_AsyncFunction;
UClass* USIK_ChangeNumOpenSlots_AsyncFunction::GetPrivateStaticClass()
{
	using TClass = USIK_ChangeNumOpenSlots_AsyncFunction;
	if (!Z_Registration_Info_UClass_USIK_ChangeNumOpenSlots_AsyncFunction.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_ChangeNumOpenSlots_AsyncFunction"),
			Z_Registration_Info_UClass_USIK_ChangeNumOpenSlots_AsyncFunction.InnerSingleton,
			StaticRegisterNativesUSIK_ChangeNumOpenSlots_AsyncFunction,
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
	return Z_Registration_Info_UClass_USIK_ChangeNumOpenSlots_AsyncFunction.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_ChangeNumOpenSlots_AsyncFunction_NoRegister()
{
	return USIK_ChangeNumOpenSlots_AsyncFunction::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_ChangeNumOpenSlots_AsyncFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Functions/Parties/SIK_ChangeNumOpenSlots_AsyncFunction.h" },
		{ "ModuleRelativePath", "Functions/Parties/SIK_ChangeNumOpenSlots_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Functions/Parties/SIK_ChangeNumOpenSlots_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Functions/Parties/SIK_ChangeNumOpenSlots_AsyncFunction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_ChangeNumOpenSlots_AsyncFunction constinit property declarations ****
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USIK_ChangeNumOpenSlots_AsyncFunction constinit property declarations ******
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ChangeNumOpenSlots"), .Pointer = &USIK_ChangeNumOpenSlots_AsyncFunction::execChangeNumOpenSlots },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_ChangeNumOpenSlots_AsyncFunction_ChangeNumOpenSlots, "ChangeNumOpenSlots" }, // 2904426473
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_ChangeNumOpenSlots_AsyncFunction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_ChangeNumOpenSlots_AsyncFunction_Statics

// ********** Begin Class USIK_ChangeNumOpenSlots_AsyncFunction Property Definitions ***************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_ChangeNumOpenSlots_AsyncFunction_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_ChangeNumOpenSlots_AsyncFunction, OnSuccess), Z_Construct_UDelegateFunction_SteamIntegrationKit_ChangeNumOpenSlotsDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 595859115
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_ChangeNumOpenSlots_AsyncFunction_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_ChangeNumOpenSlots_AsyncFunction, OnFailure), Z_Construct_UDelegateFunction_SteamIntegrationKit_ChangeNumOpenSlotsDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 595859115
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USIK_ChangeNumOpenSlots_AsyncFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_ChangeNumOpenSlots_AsyncFunction_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_ChangeNumOpenSlots_AsyncFunction_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_ChangeNumOpenSlots_AsyncFunction_Statics::PropPointers) < 2048);
// ********** End Class USIK_ChangeNumOpenSlots_AsyncFunction Property Definitions *****************
UObject* (*const Z_Construct_UClass_USIK_ChangeNumOpenSlots_AsyncFunction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_ChangeNumOpenSlots_AsyncFunction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_ChangeNumOpenSlots_AsyncFunction_Statics::ClassParams = {
	&USIK_ChangeNumOpenSlots_AsyncFunction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USIK_ChangeNumOpenSlots_AsyncFunction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USIK_ChangeNumOpenSlots_AsyncFunction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_ChangeNumOpenSlots_AsyncFunction_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_ChangeNumOpenSlots_AsyncFunction_Statics::Class_MetaDataParams)
};
void USIK_ChangeNumOpenSlots_AsyncFunction::StaticRegisterNativesUSIK_ChangeNumOpenSlots_AsyncFunction()
{
	UClass* Class = USIK_ChangeNumOpenSlots_AsyncFunction::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_ChangeNumOpenSlots_AsyncFunction_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_ChangeNumOpenSlots_AsyncFunction()
{
	if (!Z_Registration_Info_UClass_USIK_ChangeNumOpenSlots_AsyncFunction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_ChangeNumOpenSlots_AsyncFunction.OuterSingleton, Z_Construct_UClass_USIK_ChangeNumOpenSlots_AsyncFunction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_ChangeNumOpenSlots_AsyncFunction.OuterSingleton;
}
USIK_ChangeNumOpenSlots_AsyncFunction::USIK_ChangeNumOpenSlots_AsyncFunction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_ChangeNumOpenSlots_AsyncFunction);
USIK_ChangeNumOpenSlots_AsyncFunction::~USIK_ChangeNumOpenSlots_AsyncFunction() {}
// ********** End Class USIK_ChangeNumOpenSlots_AsyncFunction **************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Parties_SIK_ChangeNumOpenSlots_AsyncFunction_h__Script_SteamIntegrationKit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_ChangeNumOpenSlots_AsyncFunction, USIK_ChangeNumOpenSlots_AsyncFunction::StaticClass, TEXT("USIK_ChangeNumOpenSlots_AsyncFunction"), &Z_Registration_Info_UClass_USIK_ChangeNumOpenSlots_AsyncFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_ChangeNumOpenSlots_AsyncFunction), 3267868911U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Parties_SIK_ChangeNumOpenSlots_AsyncFunction_h__Script_SteamIntegrationKit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Parties_SIK_ChangeNumOpenSlots_AsyncFunction_h__Script_SteamIntegrationKit_46702590{
	TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Parties_SIK_ChangeNumOpenSlots_AsyncFunction_h__Script_SteamIntegrationKit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Parties_SIK_ChangeNumOpenSlots_AsyncFunction_h__Script_SteamIntegrationKit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
