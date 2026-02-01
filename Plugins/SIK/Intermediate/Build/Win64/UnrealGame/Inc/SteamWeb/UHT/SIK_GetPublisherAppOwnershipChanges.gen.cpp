// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/User/SIK_GetPublisherAppOwnershipChanges.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_GetPublisherAppOwnershipChanges() {}

// ********** Begin Cross Module References ********************************************************
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetPublisherAppOwnershipChanges();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetPublisherAppOwnershipChanges_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USIK_GetPublisherAppOwnershipChanges Function GetPublisherAppOwnershipChanges 
struct Z_Construct_UFunction_USIK_GetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChanges_Statics
{
	struct SIK_GetPublisherAppOwnershipChanges_eventGetPublisherAppOwnershipChanges_Parms
	{
		FString Key;
		FString PackageRowVersion;
		FString CDKeyRowVersion;
		USIK_GetPublisherAppOwnershipChanges* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|User" },
		{ "ModuleRelativePath", "Functions/User/SIK_GetPublisherAppOwnershipChanges.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PackageRowVersion_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CDKeyRowVersion_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetPublisherAppOwnershipChanges constinit property declarations *******
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PackageRowVersion;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CDKeyRowVersion;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPublisherAppOwnershipChanges constinit property declarations *********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPublisherAppOwnershipChanges Property Definitions ******************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_GetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChanges_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetPublisherAppOwnershipChanges_eventGetPublisherAppOwnershipChanges_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_GetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChanges_Statics::NewProp_PackageRowVersion = { "PackageRowVersion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetPublisherAppOwnershipChanges_eventGetPublisherAppOwnershipChanges_Parms, PackageRowVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PackageRowVersion_MetaData), NewProp_PackageRowVersion_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_GetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChanges_Statics::NewProp_CDKeyRowVersion = { "CDKeyRowVersion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetPublisherAppOwnershipChanges_eventGetPublisherAppOwnershipChanges_Parms, CDKeyRowVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CDKeyRowVersion_MetaData), NewProp_CDKeyRowVersion_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_GetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChanges_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetPublisherAppOwnershipChanges_eventGetPublisherAppOwnershipChanges_Parms, ReturnValue), Z_Construct_UClass_USIK_GetPublisherAppOwnershipChanges_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChanges_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChanges_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChanges_Statics::NewProp_PackageRowVersion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChanges_Statics::NewProp_CDKeyRowVersion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChanges_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChanges_Statics::PropPointers) < 2048);
// ********** End Function GetPublisherAppOwnershipChanges Property Definitions ********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChanges_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_GetPublisherAppOwnershipChanges, nullptr, "GetPublisherAppOwnershipChanges", 	Z_Construct_UFunction_USIK_GetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChanges_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChanges_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_GetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChanges_Statics::SIK_GetPublisherAppOwnershipChanges_eventGetPublisherAppOwnershipChanges_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChanges_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChanges_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_GetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChanges_Statics::SIK_GetPublisherAppOwnershipChanges_eventGetPublisherAppOwnershipChanges_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChanges()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChanges_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GetPublisherAppOwnershipChanges::execGetPublisherAppOwnershipChanges)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_PackageRowVersion);
	P_GET_PROPERTY(FStrProperty,Z_Param_CDKeyRowVersion);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_GetPublisherAppOwnershipChanges**)Z_Param__Result=USIK_GetPublisherAppOwnershipChanges::GetPublisherAppOwnershipChanges(Z_Param_Key,Z_Param_PackageRowVersion,Z_Param_CDKeyRowVersion);
	P_NATIVE_END;
}
// ********** End Class USIK_GetPublisherAppOwnershipChanges Function GetPublisherAppOwnershipChanges 

// ********** Begin Class USIK_GetPublisherAppOwnershipChanges *************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_GetPublisherAppOwnershipChanges;
UClass* USIK_GetPublisherAppOwnershipChanges::GetPrivateStaticClass()
{
	using TClass = USIK_GetPublisherAppOwnershipChanges;
	if (!Z_Registration_Info_UClass_USIK_GetPublisherAppOwnershipChanges.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_GetPublisherAppOwnershipChanges"),
			Z_Registration_Info_UClass_USIK_GetPublisherAppOwnershipChanges.InnerSingleton,
			StaticRegisterNativesUSIK_GetPublisherAppOwnershipChanges,
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
	return Z_Registration_Info_UClass_USIK_GetPublisherAppOwnershipChanges.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_GetPublisherAppOwnershipChanges_NoRegister()
{
	return USIK_GetPublisherAppOwnershipChanges::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_GetPublisherAppOwnershipChanges_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/User/SIK_GetPublisherAppOwnershipChanges.h" },
		{ "ModuleRelativePath", "Functions/User/SIK_GetPublisherAppOwnershipChanges.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_GetPublisherAppOwnershipChanges constinit property declarations *****
// ********** End Class USIK_GetPublisherAppOwnershipChanges constinit property declarations *******
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetPublisherAppOwnershipChanges"), .Pointer = &USIK_GetPublisherAppOwnershipChanges::execGetPublisherAppOwnershipChanges },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_GetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChanges, "GetPublisherAppOwnershipChanges" }, // 2124161334
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_GetPublisherAppOwnershipChanges>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_GetPublisherAppOwnershipChanges_Statics
UObject* (*const Z_Construct_UClass_USIK_GetPublisherAppOwnershipChanges_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetPublisherAppOwnershipChanges_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_GetPublisherAppOwnershipChanges_Statics::ClassParams = {
	&USIK_GetPublisherAppOwnershipChanges::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetPublisherAppOwnershipChanges_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_GetPublisherAppOwnershipChanges_Statics::Class_MetaDataParams)
};
void USIK_GetPublisherAppOwnershipChanges::StaticRegisterNativesUSIK_GetPublisherAppOwnershipChanges()
{
	UClass* Class = USIK_GetPublisherAppOwnershipChanges::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_GetPublisherAppOwnershipChanges_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_GetPublisherAppOwnershipChanges()
{
	if (!Z_Registration_Info_UClass_USIK_GetPublisherAppOwnershipChanges.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_GetPublisherAppOwnershipChanges.OuterSingleton, Z_Construct_UClass_USIK_GetPublisherAppOwnershipChanges_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_GetPublisherAppOwnershipChanges.OuterSingleton;
}
USIK_GetPublisherAppOwnershipChanges::USIK_GetPublisherAppOwnershipChanges(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_GetPublisherAppOwnershipChanges);
USIK_GetPublisherAppOwnershipChanges::~USIK_GetPublisherAppOwnershipChanges() {}
// ********** End Class USIK_GetPublisherAppOwnershipChanges ***************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_User_SIK_GetPublisherAppOwnershipChanges_h__Script_SteamWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_GetPublisherAppOwnershipChanges, USIK_GetPublisherAppOwnershipChanges::StaticClass, TEXT("USIK_GetPublisherAppOwnershipChanges"), &Z_Registration_Info_UClass_USIK_GetPublisherAppOwnershipChanges, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_GetPublisherAppOwnershipChanges), 2851654913U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_User_SIK_GetPublisherAppOwnershipChanges_h__Script_SteamWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_User_SIK_GetPublisherAppOwnershipChanges_h__Script_SteamWeb_939247177{
	TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_User_SIK_GetPublisherAppOwnershipChanges_h__Script_SteamWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_User_SIK_GetPublisherAppOwnershipChanges_h__Script_SteamWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
