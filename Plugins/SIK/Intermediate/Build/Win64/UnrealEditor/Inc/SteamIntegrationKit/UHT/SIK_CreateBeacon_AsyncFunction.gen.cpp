// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/Parties/SIK_CreateBeacon_AsyncFunction.h"
#include "SIK_SharedFile.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_CreateBeacon_AsyncFunction() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_CreateBeacon_AsyncFunction();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_CreateBeacon_AsyncFunction_NoRegister();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_CreateBeaconDelegate__DelegateSignature();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_PartyBeaconID();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_SteamPartyBeaconLocation();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FCreateBeaconDelegate *************************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_CreateBeaconDelegate__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventCreateBeaconDelegate_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
		FSIK_PartyBeaconID BeaconID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/Parties/SIK_CreateBeacon_AsyncFunction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FCreateBeaconDelegate constinit property declarations *****************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BeaconID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FCreateBeaconDelegate constinit property declarations *******************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FCreateBeaconDelegate Property Definitions ****************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_CreateBeaconDelegate__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventCreateBeaconDelegate_Parms, Result), Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result, METADATA_PARAMS(0, nullptr) }; // 655382749
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_CreateBeaconDelegate__DelegateSignature_Statics::NewProp_BeaconID = { "BeaconID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventCreateBeaconDelegate_Parms, BeaconID), Z_Construct_UScriptStruct_FSIK_PartyBeaconID, METADATA_PARAMS(0, nullptr) }; // 93468669
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_CreateBeaconDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_CreateBeaconDelegate__DelegateSignature_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_CreateBeaconDelegate__DelegateSignature_Statics::NewProp_BeaconID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_CreateBeaconDelegate__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FCreateBeaconDelegate Property Definitions ******************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_CreateBeaconDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "CreateBeaconDelegate__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_CreateBeaconDelegate__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_CreateBeaconDelegate__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_CreateBeaconDelegate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventCreateBeaconDelegate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_CreateBeaconDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_CreateBeaconDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_CreateBeaconDelegate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventCreateBeaconDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_CreateBeaconDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_CreateBeaconDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FCreateBeaconDelegate_DelegateWrapper(const FMulticastScriptDelegate& CreateBeaconDelegate, ESIK_Result Result, FSIK_PartyBeaconID BeaconID)
{
	struct _Script_SteamIntegrationKit_eventCreateBeaconDelegate_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
		FSIK_PartyBeaconID BeaconID;
	};
	_Script_SteamIntegrationKit_eventCreateBeaconDelegate_Parms Parms;
	Parms.Result=Result;
	Parms.BeaconID=BeaconID;
	CreateBeaconDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FCreateBeaconDelegate ***************************************************

// ********** Begin Class USIK_CreateBeacon_AsyncFunction Function CreateBeacon ********************
struct Z_Construct_UFunction_USIK_CreateBeacon_AsyncFunction_CreateBeacon_Statics
{
	struct SIK_CreateBeacon_AsyncFunction_eventCreateBeacon_Parms
	{
		int32 OpenSlots;
		FSIK_SteamPartyBeaconLocation Location;
		FString ConnectString;
		FString Metadata;
		USIK_CreateBeacon_AsyncFunction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit || SDK Functions || Parties" },
		{ "DisplayName", "Create Beacon" },
		{ "ModuleRelativePath", "Functions/Parties/SIK_CreateBeacon_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConnectString_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Metadata_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function CreateBeacon constinit property declarations **************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_OpenSlots;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ConnectString;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Metadata;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CreateBeacon constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CreateBeacon Property Definitions *************************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_CreateBeacon_AsyncFunction_CreateBeacon_Statics::NewProp_OpenSlots = { "OpenSlots", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_CreateBeacon_AsyncFunction_eventCreateBeacon_Parms, OpenSlots), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_CreateBeacon_AsyncFunction_CreateBeacon_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_CreateBeacon_AsyncFunction_eventCreateBeacon_Parms, Location), Z_Construct_UScriptStruct_FSIK_SteamPartyBeaconLocation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) }; // 959866417
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_CreateBeacon_AsyncFunction_CreateBeacon_Statics::NewProp_ConnectString = { "ConnectString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_CreateBeacon_AsyncFunction_eventCreateBeacon_Parms, ConnectString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConnectString_MetaData), NewProp_ConnectString_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_CreateBeacon_AsyncFunction_CreateBeacon_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_CreateBeacon_AsyncFunction_eventCreateBeacon_Parms, Metadata), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Metadata_MetaData), NewProp_Metadata_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_CreateBeacon_AsyncFunction_CreateBeacon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_CreateBeacon_AsyncFunction_eventCreateBeacon_Parms, ReturnValue), Z_Construct_UClass_USIK_CreateBeacon_AsyncFunction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_CreateBeacon_AsyncFunction_CreateBeacon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_CreateBeacon_AsyncFunction_CreateBeacon_Statics::NewProp_OpenSlots,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_CreateBeacon_AsyncFunction_CreateBeacon_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_CreateBeacon_AsyncFunction_CreateBeacon_Statics::NewProp_ConnectString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_CreateBeacon_AsyncFunction_CreateBeacon_Statics::NewProp_Metadata,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_CreateBeacon_AsyncFunction_CreateBeacon_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_CreateBeacon_AsyncFunction_CreateBeacon_Statics::PropPointers) < 2048);
// ********** End Function CreateBeacon Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_CreateBeacon_AsyncFunction_CreateBeacon_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_CreateBeacon_AsyncFunction, nullptr, "CreateBeacon", 	Z_Construct_UFunction_USIK_CreateBeacon_AsyncFunction_CreateBeacon_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_CreateBeacon_AsyncFunction_CreateBeacon_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_CreateBeacon_AsyncFunction_CreateBeacon_Statics::SIK_CreateBeacon_AsyncFunction_eventCreateBeacon_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_CreateBeacon_AsyncFunction_CreateBeacon_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_CreateBeacon_AsyncFunction_CreateBeacon_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_CreateBeacon_AsyncFunction_CreateBeacon_Statics::SIK_CreateBeacon_AsyncFunction_eventCreateBeacon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_CreateBeacon_AsyncFunction_CreateBeacon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_CreateBeacon_AsyncFunction_CreateBeacon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_CreateBeacon_AsyncFunction::execCreateBeacon)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_OpenSlots);
	P_GET_STRUCT_REF(FSIK_SteamPartyBeaconLocation,Z_Param_Out_Location);
	P_GET_PROPERTY(FStrProperty,Z_Param_ConnectString);
	P_GET_PROPERTY(FStrProperty,Z_Param_Metadata);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_CreateBeacon_AsyncFunction**)Z_Param__Result=USIK_CreateBeacon_AsyncFunction::CreateBeacon(Z_Param_OpenSlots,Z_Param_Out_Location,Z_Param_ConnectString,Z_Param_Metadata);
	P_NATIVE_END;
}
// ********** End Class USIK_CreateBeacon_AsyncFunction Function CreateBeacon **********************

// ********** Begin Class USIK_CreateBeacon_AsyncFunction ******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_CreateBeacon_AsyncFunction;
UClass* USIK_CreateBeacon_AsyncFunction::GetPrivateStaticClass()
{
	using TClass = USIK_CreateBeacon_AsyncFunction;
	if (!Z_Registration_Info_UClass_USIK_CreateBeacon_AsyncFunction.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_CreateBeacon_AsyncFunction"),
			Z_Registration_Info_UClass_USIK_CreateBeacon_AsyncFunction.InnerSingleton,
			StaticRegisterNativesUSIK_CreateBeacon_AsyncFunction,
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
	return Z_Registration_Info_UClass_USIK_CreateBeacon_AsyncFunction.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_CreateBeacon_AsyncFunction_NoRegister()
{
	return USIK_CreateBeacon_AsyncFunction::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_CreateBeacon_AsyncFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Functions/Parties/SIK_CreateBeacon_AsyncFunction.h" },
		{ "ModuleRelativePath", "Functions/Parties/SIK_CreateBeacon_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Functions/Parties/SIK_CreateBeacon_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Functions/Parties/SIK_CreateBeacon_AsyncFunction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_CreateBeacon_AsyncFunction constinit property declarations **********
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USIK_CreateBeacon_AsyncFunction constinit property declarations ************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CreateBeacon"), .Pointer = &USIK_CreateBeacon_AsyncFunction::execCreateBeacon },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_CreateBeacon_AsyncFunction_CreateBeacon, "CreateBeacon" }, // 1265538673
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_CreateBeacon_AsyncFunction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_CreateBeacon_AsyncFunction_Statics

// ********** Begin Class USIK_CreateBeacon_AsyncFunction Property Definitions *********************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_CreateBeacon_AsyncFunction_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_CreateBeacon_AsyncFunction, OnSuccess), Z_Construct_UDelegateFunction_SteamIntegrationKit_CreateBeaconDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 3808851613
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_CreateBeacon_AsyncFunction_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_CreateBeacon_AsyncFunction, OnFailure), Z_Construct_UDelegateFunction_SteamIntegrationKit_CreateBeaconDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 3808851613
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USIK_CreateBeacon_AsyncFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_CreateBeacon_AsyncFunction_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_CreateBeacon_AsyncFunction_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_CreateBeacon_AsyncFunction_Statics::PropPointers) < 2048);
// ********** End Class USIK_CreateBeacon_AsyncFunction Property Definitions ***********************
UObject* (*const Z_Construct_UClass_USIK_CreateBeacon_AsyncFunction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_CreateBeacon_AsyncFunction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_CreateBeacon_AsyncFunction_Statics::ClassParams = {
	&USIK_CreateBeacon_AsyncFunction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USIK_CreateBeacon_AsyncFunction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USIK_CreateBeacon_AsyncFunction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_CreateBeacon_AsyncFunction_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_CreateBeacon_AsyncFunction_Statics::Class_MetaDataParams)
};
void USIK_CreateBeacon_AsyncFunction::StaticRegisterNativesUSIK_CreateBeacon_AsyncFunction()
{
	UClass* Class = USIK_CreateBeacon_AsyncFunction::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_CreateBeacon_AsyncFunction_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_CreateBeacon_AsyncFunction()
{
	if (!Z_Registration_Info_UClass_USIK_CreateBeacon_AsyncFunction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_CreateBeacon_AsyncFunction.OuterSingleton, Z_Construct_UClass_USIK_CreateBeacon_AsyncFunction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_CreateBeacon_AsyncFunction.OuterSingleton;
}
USIK_CreateBeacon_AsyncFunction::USIK_CreateBeacon_AsyncFunction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_CreateBeacon_AsyncFunction);
USIK_CreateBeacon_AsyncFunction::~USIK_CreateBeacon_AsyncFunction() {}
// ********** End Class USIK_CreateBeacon_AsyncFunction ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Parties_SIK_CreateBeacon_AsyncFunction_h__Script_SteamIntegrationKit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_CreateBeacon_AsyncFunction, USIK_CreateBeacon_AsyncFunction::StaticClass, TEXT("USIK_CreateBeacon_AsyncFunction"), &Z_Registration_Info_UClass_USIK_CreateBeacon_AsyncFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_CreateBeacon_AsyncFunction), 3052243429U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Parties_SIK_CreateBeacon_AsyncFunction_h__Script_SteamIntegrationKit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Parties_SIK_CreateBeacon_AsyncFunction_h__Script_SteamIntegrationKit_860212175{
	TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Parties_SIK_CreateBeacon_AsyncFunction_h__Script_SteamIntegrationKit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Parties_SIK_CreateBeacon_AsyncFunction_h__Script_SteamIntegrationKit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
