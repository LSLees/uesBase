// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/Video/SIK_VideoSubsystem.h"
#include "Engine/GameInstance.h"
#include "SIK_SharedFile.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_VideoSubsystem() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_VideoSubsystem();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_VideoSubsystem_NoRegister();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetOPFSettingsResult__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetVideoURLResult__DelegateSignature();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_AppId();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnGetOPFSettingsResult ***********************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetOPFSettingsResult__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnGetOPFSettingsResult_Parms
	{
		FSIK_AppId AppID;
		TEnumAsByte<ESIK_Result> Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/Video/SIK_VideoSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnGetOPFSettingsResult constinit property declarations ***************
	static const UECodeGen_Private::FStructPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnGetOPFSettingsResult constinit property declarations *****************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnGetOPFSettingsResult Property Definitions **************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetOPFSettingsResult__DelegateSignature_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnGetOPFSettingsResult_Parms, AppID), Z_Construct_UScriptStruct_FSIK_AppId, METADATA_PARAMS(0, nullptr) }; // 3325316996
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetOPFSettingsResult__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnGetOPFSettingsResult_Parms, Result), Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result, METADATA_PARAMS(0, nullptr) }; // 655382749
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetOPFSettingsResult__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetOPFSettingsResult__DelegateSignature_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetOPFSettingsResult__DelegateSignature_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetOPFSettingsResult__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnGetOPFSettingsResult Property Definitions ****************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetOPFSettingsResult__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnGetOPFSettingsResult__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetOPFSettingsResult__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetOPFSettingsResult__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetOPFSettingsResult__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnGetOPFSettingsResult_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetOPFSettingsResult__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetOPFSettingsResult__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetOPFSettingsResult__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnGetOPFSettingsResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetOPFSettingsResult__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetOPFSettingsResult__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGetOPFSettingsResult_DelegateWrapper(const FMulticastScriptDelegate& OnGetOPFSettingsResult, FSIK_AppId AppID, ESIK_Result Result)
{
	struct _Script_SteamIntegrationKit_eventOnGetOPFSettingsResult_Parms
	{
		FSIK_AppId AppID;
		TEnumAsByte<ESIK_Result> Result;
	};
	_Script_SteamIntegrationKit_eventOnGetOPFSettingsResult_Parms Parms;
	Parms.AppID=AppID;
	Parms.Result=Result;
	OnGetOPFSettingsResult.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnGetOPFSettingsResult *************************************************

// ********** Begin Delegate FOnGetVideoURLResult **************************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetVideoURLResult__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnGetVideoURLResult_Parms
	{
		FSIK_AppId AppID;
		TEnumAsByte<ESIK_Result> Result;
		FString URL;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/Video/SIK_VideoSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnGetVideoURLResult constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnGetVideoURLResult constinit property declarations ********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnGetVideoURLResult Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetVideoURLResult__DelegateSignature_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnGetVideoURLResult_Parms, AppID), Z_Construct_UScriptStruct_FSIK_AppId, METADATA_PARAMS(0, nullptr) }; // 3325316996
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetVideoURLResult__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnGetVideoURLResult_Parms, Result), Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result, METADATA_PARAMS(0, nullptr) }; // 655382749
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetVideoURLResult__DelegateSignature_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnGetVideoURLResult_Parms, URL), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetVideoURLResult__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetVideoURLResult__DelegateSignature_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetVideoURLResult__DelegateSignature_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetVideoURLResult__DelegateSignature_Statics::NewProp_URL,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetVideoURLResult__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnGetVideoURLResult Property Definitions *******************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetVideoURLResult__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnGetVideoURLResult__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetVideoURLResult__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetVideoURLResult__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetVideoURLResult__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnGetVideoURLResult_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetVideoURLResult__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetVideoURLResult__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetVideoURLResult__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnGetVideoURLResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetVideoURLResult__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetVideoURLResult__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGetVideoURLResult_DelegateWrapper(const FMulticastScriptDelegate& OnGetVideoURLResult, FSIK_AppId AppID, ESIK_Result Result, const FString& URL)
{
	struct _Script_SteamIntegrationKit_eventOnGetVideoURLResult_Parms
	{
		FSIK_AppId AppID;
		TEnumAsByte<ESIK_Result> Result;
		FString URL;
	};
	_Script_SteamIntegrationKit_eventOnGetVideoURLResult_Parms Parms;
	Parms.AppID=AppID;
	Parms.Result=Result;
	Parms.URL=URL;
	OnGetVideoURLResult.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnGetVideoURLResult ****************************************************

// ********** Begin Class USIK_VideoSubsystem ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_VideoSubsystem;
UClass* USIK_VideoSubsystem::GetPrivateStaticClass()
{
	using TClass = USIK_VideoSubsystem;
	if (!Z_Registration_Info_UClass_USIK_VideoSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_VideoSubsystem"),
			Z_Registration_Info_UClass_USIK_VideoSubsystem.InnerSingleton,
			StaticRegisterNativesUSIK_VideoSubsystem,
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
	return Z_Registration_Info_UClass_USIK_VideoSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_VideoSubsystem_NoRegister()
{
	return USIK_VideoSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_VideoSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Functions/Video/SIK_VideoSubsystem.h" },
		{ "ModuleRelativePath", "Functions/Video/SIK_VideoSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGetOPFSettingsResult_MetaData[] = {
		{ "Category", "Steam Integration Kit | SDK Functions | Video" },
		{ "ModuleRelativePath", "Functions/Video/SIK_VideoSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGetVideoURLResult_MetaData[] = {
		{ "Category", "Steam Integration Kit | SDK Functions | Video" },
		{ "ModuleRelativePath", "Functions/Video/SIK_VideoSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_VideoSubsystem constinit property declarations **********************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGetOPFSettingsResult;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGetVideoURLResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USIK_VideoSubsystem constinit property declarations ************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_VideoSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_VideoSubsystem_Statics

// ********** Begin Class USIK_VideoSubsystem Property Definitions *********************************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_VideoSubsystem_Statics::NewProp_OnGetOPFSettingsResult = { "OnGetOPFSettingsResult", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_VideoSubsystem, OnGetOPFSettingsResult), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetOPFSettingsResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGetOPFSettingsResult_MetaData), NewProp_OnGetOPFSettingsResult_MetaData) }; // 3360407380
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_VideoSubsystem_Statics::NewProp_OnGetVideoURLResult = { "OnGetVideoURLResult", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_VideoSubsystem, OnGetVideoURLResult), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetVideoURLResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGetVideoURLResult_MetaData), NewProp_OnGetVideoURLResult_MetaData) }; // 4049839228
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USIK_VideoSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_VideoSubsystem_Statics::NewProp_OnGetOPFSettingsResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_VideoSubsystem_Statics::NewProp_OnGetVideoURLResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_VideoSubsystem_Statics::PropPointers) < 2048);
// ********** End Class USIK_VideoSubsystem Property Definitions ***********************************
UObject* (*const Z_Construct_UClass_USIK_VideoSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_VideoSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_VideoSubsystem_Statics::ClassParams = {
	&USIK_VideoSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USIK_VideoSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USIK_VideoSubsystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_VideoSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_VideoSubsystem_Statics::Class_MetaDataParams)
};
void USIK_VideoSubsystem::StaticRegisterNativesUSIK_VideoSubsystem()
{
}
UClass* Z_Construct_UClass_USIK_VideoSubsystem()
{
	if (!Z_Registration_Info_UClass_USIK_VideoSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_VideoSubsystem.OuterSingleton, Z_Construct_UClass_USIK_VideoSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_VideoSubsystem.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_VideoSubsystem);
// ********** End Class USIK_VideoSubsystem ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Video_SIK_VideoSubsystem_h__Script_SteamIntegrationKit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_VideoSubsystem, USIK_VideoSubsystem::StaticClass, TEXT("USIK_VideoSubsystem"), &Z_Registration_Info_UClass_USIK_VideoSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_VideoSubsystem), 1723461457U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Video_SIK_VideoSubsystem_h__Script_SteamIntegrationKit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Video_SIK_VideoSubsystem_h__Script_SteamIntegrationKit_271394666{
	TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Video_SIK_VideoSubsystem_h__Script_SteamIntegrationKit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Video_SIK_VideoSubsystem_h__Script_SteamIntegrationKit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
