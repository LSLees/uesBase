// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/User/SIK_GetPublisherAppOwnership.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_GetPublisherAppOwnership() {}

// ********** Begin Cross Module References ********************************************************
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetPublisherAppOwnership();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetPublisherAppOwnership_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USIK_GetPublisherAppOwnership Function GetPublisherAppOwnership **********
struct Z_Construct_UFunction_USIK_GetPublisherAppOwnership_GetPublisherAppOwnership_Statics
{
	struct SIK_GetPublisherAppOwnership_eventGetPublisherAppOwnership_Parms
	{
		FString Key;
		int64 SteamId;
		USIK_GetPublisherAppOwnership* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|User" },
		{ "ModuleRelativePath", "Functions/User/SIK_GetPublisherAppOwnership.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetPublisherAppOwnership constinit property declarations **************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPublisherAppOwnership constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPublisherAppOwnership Property Definitions *************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_GetPublisherAppOwnership_GetPublisherAppOwnership_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetPublisherAppOwnership_eventGetPublisherAppOwnership_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_GetPublisherAppOwnership_GetPublisherAppOwnership_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetPublisherAppOwnership_eventGetPublisherAppOwnership_Parms, SteamId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamId_MetaData), NewProp_SteamId_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_GetPublisherAppOwnership_GetPublisherAppOwnership_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetPublisherAppOwnership_eventGetPublisherAppOwnership_Parms, ReturnValue), Z_Construct_UClass_USIK_GetPublisherAppOwnership_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GetPublisherAppOwnership_GetPublisherAppOwnership_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetPublisherAppOwnership_GetPublisherAppOwnership_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetPublisherAppOwnership_GetPublisherAppOwnership_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetPublisherAppOwnership_GetPublisherAppOwnership_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetPublisherAppOwnership_GetPublisherAppOwnership_Statics::PropPointers) < 2048);
// ********** End Function GetPublisherAppOwnership Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GetPublisherAppOwnership_GetPublisherAppOwnership_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_GetPublisherAppOwnership, nullptr, "GetPublisherAppOwnership", 	Z_Construct_UFunction_USIK_GetPublisherAppOwnership_GetPublisherAppOwnership_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetPublisherAppOwnership_GetPublisherAppOwnership_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_GetPublisherAppOwnership_GetPublisherAppOwnership_Statics::SIK_GetPublisherAppOwnership_eventGetPublisherAppOwnership_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetPublisherAppOwnership_GetPublisherAppOwnership_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GetPublisherAppOwnership_GetPublisherAppOwnership_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_GetPublisherAppOwnership_GetPublisherAppOwnership_Statics::SIK_GetPublisherAppOwnership_eventGetPublisherAppOwnership_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GetPublisherAppOwnership_GetPublisherAppOwnership()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GetPublisherAppOwnership_GetPublisherAppOwnership_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GetPublisherAppOwnership::execGetPublisherAppOwnership)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_SteamId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_GetPublisherAppOwnership**)Z_Param__Result=USIK_GetPublisherAppOwnership::GetPublisherAppOwnership(Z_Param_Key,Z_Param_Out_SteamId);
	P_NATIVE_END;
}
// ********** End Class USIK_GetPublisherAppOwnership Function GetPublisherAppOwnership ************

// ********** Begin Class USIK_GetPublisherAppOwnership ********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_GetPublisherAppOwnership;
UClass* USIK_GetPublisherAppOwnership::GetPrivateStaticClass()
{
	using TClass = USIK_GetPublisherAppOwnership;
	if (!Z_Registration_Info_UClass_USIK_GetPublisherAppOwnership.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_GetPublisherAppOwnership"),
			Z_Registration_Info_UClass_USIK_GetPublisherAppOwnership.InnerSingleton,
			StaticRegisterNativesUSIK_GetPublisherAppOwnership,
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
	return Z_Registration_Info_UClass_USIK_GetPublisherAppOwnership.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_GetPublisherAppOwnership_NoRegister()
{
	return USIK_GetPublisherAppOwnership::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_GetPublisherAppOwnership_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/User/SIK_GetPublisherAppOwnership.h" },
		{ "ModuleRelativePath", "Functions/User/SIK_GetPublisherAppOwnership.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_GetPublisherAppOwnership constinit property declarations ************
// ********** End Class USIK_GetPublisherAppOwnership constinit property declarations **************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetPublisherAppOwnership"), .Pointer = &USIK_GetPublisherAppOwnership::execGetPublisherAppOwnership },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_GetPublisherAppOwnership_GetPublisherAppOwnership, "GetPublisherAppOwnership" }, // 340349688
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_GetPublisherAppOwnership>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_GetPublisherAppOwnership_Statics
UObject* (*const Z_Construct_UClass_USIK_GetPublisherAppOwnership_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetPublisherAppOwnership_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_GetPublisherAppOwnership_Statics::ClassParams = {
	&USIK_GetPublisherAppOwnership::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetPublisherAppOwnership_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_GetPublisherAppOwnership_Statics::Class_MetaDataParams)
};
void USIK_GetPublisherAppOwnership::StaticRegisterNativesUSIK_GetPublisherAppOwnership()
{
	UClass* Class = USIK_GetPublisherAppOwnership::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_GetPublisherAppOwnership_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_GetPublisherAppOwnership()
{
	if (!Z_Registration_Info_UClass_USIK_GetPublisherAppOwnership.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_GetPublisherAppOwnership.OuterSingleton, Z_Construct_UClass_USIK_GetPublisherAppOwnership_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_GetPublisherAppOwnership.OuterSingleton;
}
USIK_GetPublisherAppOwnership::USIK_GetPublisherAppOwnership(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_GetPublisherAppOwnership);
USIK_GetPublisherAppOwnership::~USIK_GetPublisherAppOwnership() {}
// ********** End Class USIK_GetPublisherAppOwnership **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_User_SIK_GetPublisherAppOwnership_h__Script_SteamWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_GetPublisherAppOwnership, USIK_GetPublisherAppOwnership::StaticClass, TEXT("USIK_GetPublisherAppOwnership"), &Z_Registration_Info_UClass_USIK_GetPublisherAppOwnership, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_GetPublisherAppOwnership), 4274364606U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_User_SIK_GetPublisherAppOwnership_h__Script_SteamWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_User_SIK_GetPublisherAppOwnership_h__Script_SteamWeb_3381112538{
	TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_User_SIK_GetPublisherAppOwnership_h__Script_SteamWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_User_SIK_GetPublisherAppOwnership_h__Script_SteamWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
