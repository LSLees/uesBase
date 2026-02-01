// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/GameServerStats/SIK_GameServerStatsSubsystem.h"
#include "Engine/GameInstance.h"
#include "SIK_SharedFile.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_GameServerStatsSubsystem() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_GameServerStatsSubsystem();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_GameServerStatsSubsystem_NoRegister();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_GSStatsReceivedDelegate__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_GSStatsStoredDelegate__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_GSStatsUnloadedDelegate__DelegateSignature();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_SteamId();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FGSStatsReceivedDelegate **********************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_GSStatsReceivedDelegate__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventGSStatsReceivedDelegate_Parms
	{
		FSIK_SteamId SteamID;
		TEnumAsByte<ESIK_Result> Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/GameServerStats/SIK_GameServerStatsSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FGSStatsReceivedDelegate constinit property declarations **************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FGSStatsReceivedDelegate constinit property declarations ****************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FGSStatsReceivedDelegate Property Definitions *************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_GSStatsReceivedDelegate__DelegateSignature_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventGSStatsReceivedDelegate_Parms, SteamID), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_GSStatsReceivedDelegate__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventGSStatsReceivedDelegate_Parms, Result), Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result, METADATA_PARAMS(0, nullptr) }; // 655382749
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_GSStatsReceivedDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_GSStatsReceivedDelegate__DelegateSignature_Statics::NewProp_SteamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_GSStatsReceivedDelegate__DelegateSignature_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_GSStatsReceivedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FGSStatsReceivedDelegate Property Definitions ***************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_GSStatsReceivedDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "GSStatsReceivedDelegate__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_GSStatsReceivedDelegate__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_GSStatsReceivedDelegate__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_GSStatsReceivedDelegate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventGSStatsReceivedDelegate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_GSStatsReceivedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_GSStatsReceivedDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_GSStatsReceivedDelegate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventGSStatsReceivedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_GSStatsReceivedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_GSStatsReceivedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FGSStatsReceivedDelegate_DelegateWrapper(const FMulticastScriptDelegate& GSStatsReceivedDelegate, FSIK_SteamId SteamID, ESIK_Result Result)
{
	struct _Script_SteamIntegrationKit_eventGSStatsReceivedDelegate_Parms
	{
		FSIK_SteamId SteamID;
		TEnumAsByte<ESIK_Result> Result;
	};
	_Script_SteamIntegrationKit_eventGSStatsReceivedDelegate_Parms Parms;
	Parms.SteamID=SteamID;
	Parms.Result=Result;
	GSStatsReceivedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FGSStatsReceivedDelegate ************************************************

// ********** Begin Delegate FGSStatsStoredDelegate ************************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_GSStatsStoredDelegate__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventGSStatsStoredDelegate_Parms
	{
		FSIK_SteamId SteamID;
		TEnumAsByte<ESIK_Result> Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/GameServerStats/SIK_GameServerStatsSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FGSStatsStoredDelegate constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FGSStatsStoredDelegate constinit property declarations ******************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FGSStatsStoredDelegate Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_GSStatsStoredDelegate__DelegateSignature_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventGSStatsStoredDelegate_Parms, SteamID), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_GSStatsStoredDelegate__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventGSStatsStoredDelegate_Parms, Result), Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result, METADATA_PARAMS(0, nullptr) }; // 655382749
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_GSStatsStoredDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_GSStatsStoredDelegate__DelegateSignature_Statics::NewProp_SteamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_GSStatsStoredDelegate__DelegateSignature_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_GSStatsStoredDelegate__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FGSStatsStoredDelegate Property Definitions *****************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_GSStatsStoredDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "GSStatsStoredDelegate__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_GSStatsStoredDelegate__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_GSStatsStoredDelegate__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_GSStatsStoredDelegate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventGSStatsStoredDelegate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_GSStatsStoredDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_GSStatsStoredDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_GSStatsStoredDelegate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventGSStatsStoredDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_GSStatsStoredDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_GSStatsStoredDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FGSStatsStoredDelegate_DelegateWrapper(const FMulticastScriptDelegate& GSStatsStoredDelegate, FSIK_SteamId SteamID, ESIK_Result Result)
{
	struct _Script_SteamIntegrationKit_eventGSStatsStoredDelegate_Parms
	{
		FSIK_SteamId SteamID;
		TEnumAsByte<ESIK_Result> Result;
	};
	_Script_SteamIntegrationKit_eventGSStatsStoredDelegate_Parms Parms;
	Parms.SteamID=SteamID;
	Parms.Result=Result;
	GSStatsStoredDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FGSStatsStoredDelegate **************************************************

// ********** Begin Delegate FGSStatsUnloadedDelegate **********************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_GSStatsUnloadedDelegate__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventGSStatsUnloadedDelegate_Parms
	{
		FSIK_SteamId SteamID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/GameServerStats/SIK_GameServerStatsSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FGSStatsUnloadedDelegate constinit property declarations **************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FGSStatsUnloadedDelegate constinit property declarations ****************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FGSStatsUnloadedDelegate Property Definitions *************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_GSStatsUnloadedDelegate__DelegateSignature_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventGSStatsUnloadedDelegate_Parms, SteamID), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_GSStatsUnloadedDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_GSStatsUnloadedDelegate__DelegateSignature_Statics::NewProp_SteamID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_GSStatsUnloadedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FGSStatsUnloadedDelegate Property Definitions ***************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_GSStatsUnloadedDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "GSStatsUnloadedDelegate__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_GSStatsUnloadedDelegate__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_GSStatsUnloadedDelegate__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_GSStatsUnloadedDelegate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventGSStatsUnloadedDelegate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_GSStatsUnloadedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_GSStatsUnloadedDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_GSStatsUnloadedDelegate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventGSStatsUnloadedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_GSStatsUnloadedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_GSStatsUnloadedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FGSStatsUnloadedDelegate_DelegateWrapper(const FMulticastScriptDelegate& GSStatsUnloadedDelegate, FSIK_SteamId SteamID)
{
	struct _Script_SteamIntegrationKit_eventGSStatsUnloadedDelegate_Parms
	{
		FSIK_SteamId SteamID;
	};
	_Script_SteamIntegrationKit_eventGSStatsUnloadedDelegate_Parms Parms;
	Parms.SteamID=SteamID;
	GSStatsUnloadedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FGSStatsUnloadedDelegate ************************************************

// ********** Begin Class USIK_GameServerStatsSubsystem ********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_GameServerStatsSubsystem;
UClass* USIK_GameServerStatsSubsystem::GetPrivateStaticClass()
{
	using TClass = USIK_GameServerStatsSubsystem;
	if (!Z_Registration_Info_UClass_USIK_GameServerStatsSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_GameServerStatsSubsystem"),
			Z_Registration_Info_UClass_USIK_GameServerStatsSubsystem.InnerSingleton,
			StaticRegisterNativesUSIK_GameServerStatsSubsystem,
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
	return Z_Registration_Info_UClass_USIK_GameServerStatsSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_GameServerStatsSubsystem_NoRegister()
{
	return USIK_GameServerStatsSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_GameServerStatsSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Functions/GameServerStats/SIK_GameServerStatsSubsystem.h" },
		{ "ModuleRelativePath", "Functions/GameServerStats/SIK_GameServerStatsSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGSStatsReceived_MetaData[] = {
		{ "Category", "Steam Integration Kit || Game Server Stats" },
		{ "ModuleRelativePath", "Functions/GameServerStats/SIK_GameServerStatsSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGSStatsStored_MetaData[] = {
		{ "Category", "Steam Integration Kit || Game Server Stats" },
		{ "ModuleRelativePath", "Functions/GameServerStats/SIK_GameServerStatsSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGSStatsUnloaded_MetaData[] = {
		{ "Category", "Steam Integration Kit || Game Server Stats" },
		{ "ModuleRelativePath", "Functions/GameServerStats/SIK_GameServerStatsSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_GameServerStatsSubsystem constinit property declarations ************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGSStatsReceived;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGSStatsStored;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGSStatsUnloaded;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USIK_GameServerStatsSubsystem constinit property declarations **************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_GameServerStatsSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_GameServerStatsSubsystem_Statics

// ********** Begin Class USIK_GameServerStatsSubsystem Property Definitions ***********************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_GameServerStatsSubsystem_Statics::NewProp_OnGSStatsReceived = { "OnGSStatsReceived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_GameServerStatsSubsystem, OnGSStatsReceived), Z_Construct_UDelegateFunction_SteamIntegrationKit_GSStatsReceivedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGSStatsReceived_MetaData), NewProp_OnGSStatsReceived_MetaData) }; // 3513849022
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_GameServerStatsSubsystem_Statics::NewProp_OnGSStatsStored = { "OnGSStatsStored", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_GameServerStatsSubsystem, OnGSStatsStored), Z_Construct_UDelegateFunction_SteamIntegrationKit_GSStatsStoredDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGSStatsStored_MetaData), NewProp_OnGSStatsStored_MetaData) }; // 161036386
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_GameServerStatsSubsystem_Statics::NewProp_OnGSStatsUnloaded = { "OnGSStatsUnloaded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_GameServerStatsSubsystem, OnGSStatsUnloaded), Z_Construct_UDelegateFunction_SteamIntegrationKit_GSStatsUnloadedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGSStatsUnloaded_MetaData), NewProp_OnGSStatsUnloaded_MetaData) }; // 1728467767
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USIK_GameServerStatsSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_GameServerStatsSubsystem_Statics::NewProp_OnGSStatsReceived,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_GameServerStatsSubsystem_Statics::NewProp_OnGSStatsStored,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_GameServerStatsSubsystem_Statics::NewProp_OnGSStatsUnloaded,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GameServerStatsSubsystem_Statics::PropPointers) < 2048);
// ********** End Class USIK_GameServerStatsSubsystem Property Definitions *************************
UObject* (*const Z_Construct_UClass_USIK_GameServerStatsSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GameServerStatsSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_GameServerStatsSubsystem_Statics::ClassParams = {
	&USIK_GameServerStatsSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USIK_GameServerStatsSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GameServerStatsSubsystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GameServerStatsSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_GameServerStatsSubsystem_Statics::Class_MetaDataParams)
};
void USIK_GameServerStatsSubsystem::StaticRegisterNativesUSIK_GameServerStatsSubsystem()
{
}
UClass* Z_Construct_UClass_USIK_GameServerStatsSubsystem()
{
	if (!Z_Registration_Info_UClass_USIK_GameServerStatsSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_GameServerStatsSubsystem.OuterSingleton, Z_Construct_UClass_USIK_GameServerStatsSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_GameServerStatsSubsystem.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_GameServerStatsSubsystem);
// ********** End Class USIK_GameServerStatsSubsystem **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_GameServerStats_SIK_GameServerStatsSubsystem_h__Script_SteamIntegrationKit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_GameServerStatsSubsystem, USIK_GameServerStatsSubsystem::StaticClass, TEXT("USIK_GameServerStatsSubsystem"), &Z_Registration_Info_UClass_USIK_GameServerStatsSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_GameServerStatsSubsystem), 3396527361U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_GameServerStats_SIK_GameServerStatsSubsystem_h__Script_SteamIntegrationKit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_GameServerStats_SIK_GameServerStatsSubsystem_h__Script_SteamIntegrationKit_2000590079{
	TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_GameServerStats_SIK_GameServerStatsSubsystem_h__Script_SteamIntegrationKit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_GameServerStats_SIK_GameServerStatsSubsystem_h__Script_SteamIntegrationKit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
