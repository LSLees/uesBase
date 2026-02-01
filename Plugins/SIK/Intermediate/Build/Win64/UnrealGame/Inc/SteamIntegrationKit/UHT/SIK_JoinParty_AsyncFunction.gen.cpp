// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/Parties/SIK_JoinParty_AsyncFunction.h"
#include "SIK_SharedFile.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_JoinParty_AsyncFunction() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_JoinParty_AsyncFunction();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_JoinParty_AsyncFunction_NoRegister();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_JoinPartyResult__DelegateSignature();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_PartyBeaconID();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_SteamId();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FSIK_JoinPartyResult **************************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_JoinPartyResult__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventSIK_JoinPartyResult_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
		FSIK_PartyBeaconID PartyBeaconID;
		FSIK_SteamId BeaconOwner;
		FString ConnectString;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/Parties/SIK_JoinParty_AsyncFunction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FSIK_JoinPartyResult constinit property declarations ******************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PartyBeaconID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BeaconOwner;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ConnectString;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FSIK_JoinPartyResult constinit property declarations ********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FSIK_JoinPartyResult Property Definitions *****************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_JoinPartyResult__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventSIK_JoinPartyResult_Parms, Result), Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result, METADATA_PARAMS(0, nullptr) }; // 655382749
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_JoinPartyResult__DelegateSignature_Statics::NewProp_PartyBeaconID = { "PartyBeaconID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventSIK_JoinPartyResult_Parms, PartyBeaconID), Z_Construct_UScriptStruct_FSIK_PartyBeaconID, METADATA_PARAMS(0, nullptr) }; // 93468669
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_JoinPartyResult__DelegateSignature_Statics::NewProp_BeaconOwner = { "BeaconOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventSIK_JoinPartyResult_Parms, BeaconOwner), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_JoinPartyResult__DelegateSignature_Statics::NewProp_ConnectString = { "ConnectString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventSIK_JoinPartyResult_Parms, ConnectString), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_JoinPartyResult__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_JoinPartyResult__DelegateSignature_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_JoinPartyResult__DelegateSignature_Statics::NewProp_PartyBeaconID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_JoinPartyResult__DelegateSignature_Statics::NewProp_BeaconOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_JoinPartyResult__DelegateSignature_Statics::NewProp_ConnectString,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_JoinPartyResult__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FSIK_JoinPartyResult Property Definitions *******************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_JoinPartyResult__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "SIK_JoinPartyResult__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_JoinPartyResult__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_JoinPartyResult__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_JoinPartyResult__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventSIK_JoinPartyResult_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_JoinPartyResult__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_JoinPartyResult__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_JoinPartyResult__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventSIK_JoinPartyResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_JoinPartyResult__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_JoinPartyResult__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSIK_JoinPartyResult_DelegateWrapper(const FMulticastScriptDelegate& SIK_JoinPartyResult, ESIK_Result Result, FSIK_PartyBeaconID PartyBeaconID, FSIK_SteamId BeaconOwner, const FString& ConnectString)
{
	struct _Script_SteamIntegrationKit_eventSIK_JoinPartyResult_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
		FSIK_PartyBeaconID PartyBeaconID;
		FSIK_SteamId BeaconOwner;
		FString ConnectString;
	};
	_Script_SteamIntegrationKit_eventSIK_JoinPartyResult_Parms Parms;
	Parms.Result=Result;
	Parms.PartyBeaconID=PartyBeaconID;
	Parms.BeaconOwner=BeaconOwner;
	Parms.ConnectString=ConnectString;
	SIK_JoinPartyResult.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FSIK_JoinPartyResult ****************************************************

// ********** Begin Class USIK_JoinParty_AsyncFunction Function JoinParty **************************
struct Z_Construct_UFunction_USIK_JoinParty_AsyncFunction_JoinParty_Statics
{
	struct SIK_JoinParty_AsyncFunction_eventJoinParty_Parms
	{
		FSIK_PartyBeaconID SteamId;
		USIK_JoinParty_AsyncFunction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit || SDK Functions || Parties" },
		{ "DisplayName", "Join Party" },
		{ "ModuleRelativePath", "Functions/Parties/SIK_JoinParty_AsyncFunction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function JoinParty constinit property declarations *****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function JoinParty constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function JoinParty Property Definitions ****************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_JoinParty_AsyncFunction_JoinParty_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_JoinParty_AsyncFunction_eventJoinParty_Parms, SteamId), Z_Construct_UScriptStruct_FSIK_PartyBeaconID, METADATA_PARAMS(0, nullptr) }; // 93468669
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_JoinParty_AsyncFunction_JoinParty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_JoinParty_AsyncFunction_eventJoinParty_Parms, ReturnValue), Z_Construct_UClass_USIK_JoinParty_AsyncFunction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_JoinParty_AsyncFunction_JoinParty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_JoinParty_AsyncFunction_JoinParty_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_JoinParty_AsyncFunction_JoinParty_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_JoinParty_AsyncFunction_JoinParty_Statics::PropPointers) < 2048);
// ********** End Function JoinParty Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_JoinParty_AsyncFunction_JoinParty_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_JoinParty_AsyncFunction, nullptr, "JoinParty", 	Z_Construct_UFunction_USIK_JoinParty_AsyncFunction_JoinParty_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_JoinParty_AsyncFunction_JoinParty_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_JoinParty_AsyncFunction_JoinParty_Statics::SIK_JoinParty_AsyncFunction_eventJoinParty_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_JoinParty_AsyncFunction_JoinParty_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_JoinParty_AsyncFunction_JoinParty_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_JoinParty_AsyncFunction_JoinParty_Statics::SIK_JoinParty_AsyncFunction_eventJoinParty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_JoinParty_AsyncFunction_JoinParty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_JoinParty_AsyncFunction_JoinParty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_JoinParty_AsyncFunction::execJoinParty)
{
	P_GET_STRUCT(FSIK_PartyBeaconID,Z_Param_SteamId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_JoinParty_AsyncFunction**)Z_Param__Result=USIK_JoinParty_AsyncFunction::JoinParty(Z_Param_SteamId);
	P_NATIVE_END;
}
// ********** End Class USIK_JoinParty_AsyncFunction Function JoinParty ****************************

// ********** Begin Class USIK_JoinParty_AsyncFunction *********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_JoinParty_AsyncFunction;
UClass* USIK_JoinParty_AsyncFunction::GetPrivateStaticClass()
{
	using TClass = USIK_JoinParty_AsyncFunction;
	if (!Z_Registration_Info_UClass_USIK_JoinParty_AsyncFunction.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_JoinParty_AsyncFunction"),
			Z_Registration_Info_UClass_USIK_JoinParty_AsyncFunction.InnerSingleton,
			StaticRegisterNativesUSIK_JoinParty_AsyncFunction,
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
	return Z_Registration_Info_UClass_USIK_JoinParty_AsyncFunction.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_JoinParty_AsyncFunction_NoRegister()
{
	return USIK_JoinParty_AsyncFunction::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_JoinParty_AsyncFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Functions/Parties/SIK_JoinParty_AsyncFunction.h" },
		{ "ModuleRelativePath", "Functions/Parties/SIK_JoinParty_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Functions/Parties/SIK_JoinParty_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Functions/Parties/SIK_JoinParty_AsyncFunction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_JoinParty_AsyncFunction constinit property declarations *************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USIK_JoinParty_AsyncFunction constinit property declarations ***************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("JoinParty"), .Pointer = &USIK_JoinParty_AsyncFunction::execJoinParty },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_JoinParty_AsyncFunction_JoinParty, "JoinParty" }, // 301392739
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_JoinParty_AsyncFunction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_JoinParty_AsyncFunction_Statics

// ********** Begin Class USIK_JoinParty_AsyncFunction Property Definitions ************************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_JoinParty_AsyncFunction_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_JoinParty_AsyncFunction, OnSuccess), Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_JoinPartyResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 2252691241
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_JoinParty_AsyncFunction_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_JoinParty_AsyncFunction, OnFailure), Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_JoinPartyResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 2252691241
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USIK_JoinParty_AsyncFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_JoinParty_AsyncFunction_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_JoinParty_AsyncFunction_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_JoinParty_AsyncFunction_Statics::PropPointers) < 2048);
// ********** End Class USIK_JoinParty_AsyncFunction Property Definitions **************************
UObject* (*const Z_Construct_UClass_USIK_JoinParty_AsyncFunction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_JoinParty_AsyncFunction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_JoinParty_AsyncFunction_Statics::ClassParams = {
	&USIK_JoinParty_AsyncFunction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USIK_JoinParty_AsyncFunction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USIK_JoinParty_AsyncFunction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_JoinParty_AsyncFunction_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_JoinParty_AsyncFunction_Statics::Class_MetaDataParams)
};
void USIK_JoinParty_AsyncFunction::StaticRegisterNativesUSIK_JoinParty_AsyncFunction()
{
	UClass* Class = USIK_JoinParty_AsyncFunction::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_JoinParty_AsyncFunction_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_JoinParty_AsyncFunction()
{
	if (!Z_Registration_Info_UClass_USIK_JoinParty_AsyncFunction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_JoinParty_AsyncFunction.OuterSingleton, Z_Construct_UClass_USIK_JoinParty_AsyncFunction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_JoinParty_AsyncFunction.OuterSingleton;
}
USIK_JoinParty_AsyncFunction::USIK_JoinParty_AsyncFunction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_JoinParty_AsyncFunction);
USIK_JoinParty_AsyncFunction::~USIK_JoinParty_AsyncFunction() {}
// ********** End Class USIK_JoinParty_AsyncFunction ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Parties_SIK_JoinParty_AsyncFunction_h__Script_SteamIntegrationKit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_JoinParty_AsyncFunction, USIK_JoinParty_AsyncFunction::StaticClass, TEXT("USIK_JoinParty_AsyncFunction"), &Z_Registration_Info_UClass_USIK_JoinParty_AsyncFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_JoinParty_AsyncFunction), 1038295799U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Parties_SIK_JoinParty_AsyncFunction_h__Script_SteamIntegrationKit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Parties_SIK_JoinParty_AsyncFunction_h__Script_SteamIntegrationKit_156724594{
	TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Parties_SIK_JoinParty_AsyncFunction_h__Script_SteamIntegrationKit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Parties_SIK_JoinParty_AsyncFunction_h__Script_SteamIntegrationKit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
