// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/User/SIK_GetPlayerSummaries.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_GetPlayerSummaries() {}

// ********** Begin Cross Module References ********************************************************
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetPlayerSummaries();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetPlayerSummaries_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USIK_GetPlayerSummaries Function GetPlayerSummaries **********************
struct Z_Construct_UFunction_USIK_GetPlayerSummaries_GetPlayerSummaries_Statics
{
	struct SIK_GetPlayerSummaries_eventGetPlayerSummaries_Parms
	{
		FString Key;
		FString SteamIds;
		USIK_GetPlayerSummaries* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|User" },
		{ "ModuleRelativePath", "Functions/User/SIK_GetPlayerSummaries.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamIds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetPlayerSummaries constinit property declarations ********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamIds;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPlayerSummaries constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPlayerSummaries Property Definitions *******************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_GetPlayerSummaries_GetPlayerSummaries_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetPlayerSummaries_eventGetPlayerSummaries_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_GetPlayerSummaries_GetPlayerSummaries_Statics::NewProp_SteamIds = { "SteamIds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetPlayerSummaries_eventGetPlayerSummaries_Parms, SteamIds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamIds_MetaData), NewProp_SteamIds_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_GetPlayerSummaries_GetPlayerSummaries_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetPlayerSummaries_eventGetPlayerSummaries_Parms, ReturnValue), Z_Construct_UClass_USIK_GetPlayerSummaries_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GetPlayerSummaries_GetPlayerSummaries_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetPlayerSummaries_GetPlayerSummaries_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetPlayerSummaries_GetPlayerSummaries_Statics::NewProp_SteamIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetPlayerSummaries_GetPlayerSummaries_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetPlayerSummaries_GetPlayerSummaries_Statics::PropPointers) < 2048);
// ********** End Function GetPlayerSummaries Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GetPlayerSummaries_GetPlayerSummaries_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_GetPlayerSummaries, nullptr, "GetPlayerSummaries", 	Z_Construct_UFunction_USIK_GetPlayerSummaries_GetPlayerSummaries_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetPlayerSummaries_GetPlayerSummaries_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_GetPlayerSummaries_GetPlayerSummaries_Statics::SIK_GetPlayerSummaries_eventGetPlayerSummaries_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetPlayerSummaries_GetPlayerSummaries_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GetPlayerSummaries_GetPlayerSummaries_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_GetPlayerSummaries_GetPlayerSummaries_Statics::SIK_GetPlayerSummaries_eventGetPlayerSummaries_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GetPlayerSummaries_GetPlayerSummaries()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GetPlayerSummaries_GetPlayerSummaries_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GetPlayerSummaries::execGetPlayerSummaries)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamIds);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_GetPlayerSummaries**)Z_Param__Result=USIK_GetPlayerSummaries::GetPlayerSummaries(Z_Param_Key,Z_Param_SteamIds);
	P_NATIVE_END;
}
// ********** End Class USIK_GetPlayerSummaries Function GetPlayerSummaries ************************

// ********** Begin Class USIK_GetPlayerSummaries **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_GetPlayerSummaries;
UClass* USIK_GetPlayerSummaries::GetPrivateStaticClass()
{
	using TClass = USIK_GetPlayerSummaries;
	if (!Z_Registration_Info_UClass_USIK_GetPlayerSummaries.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_GetPlayerSummaries"),
			Z_Registration_Info_UClass_USIK_GetPlayerSummaries.InnerSingleton,
			StaticRegisterNativesUSIK_GetPlayerSummaries,
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
	return Z_Registration_Info_UClass_USIK_GetPlayerSummaries.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_GetPlayerSummaries_NoRegister()
{
	return USIK_GetPlayerSummaries::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_GetPlayerSummaries_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/User/SIK_GetPlayerSummaries.h" },
		{ "ModuleRelativePath", "Functions/User/SIK_GetPlayerSummaries.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_GetPlayerSummaries constinit property declarations ******************
// ********** End Class USIK_GetPlayerSummaries constinit property declarations ********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetPlayerSummaries"), .Pointer = &USIK_GetPlayerSummaries::execGetPlayerSummaries },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_GetPlayerSummaries_GetPlayerSummaries, "GetPlayerSummaries" }, // 3101207086
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_GetPlayerSummaries>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_GetPlayerSummaries_Statics
UObject* (*const Z_Construct_UClass_USIK_GetPlayerSummaries_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetPlayerSummaries_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_GetPlayerSummaries_Statics::ClassParams = {
	&USIK_GetPlayerSummaries::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetPlayerSummaries_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_GetPlayerSummaries_Statics::Class_MetaDataParams)
};
void USIK_GetPlayerSummaries::StaticRegisterNativesUSIK_GetPlayerSummaries()
{
	UClass* Class = USIK_GetPlayerSummaries::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_GetPlayerSummaries_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_GetPlayerSummaries()
{
	if (!Z_Registration_Info_UClass_USIK_GetPlayerSummaries.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_GetPlayerSummaries.OuterSingleton, Z_Construct_UClass_USIK_GetPlayerSummaries_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_GetPlayerSummaries.OuterSingleton;
}
USIK_GetPlayerSummaries::USIK_GetPlayerSummaries(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_GetPlayerSummaries);
USIK_GetPlayerSummaries::~USIK_GetPlayerSummaries() {}
// ********** End Class USIK_GetPlayerSummaries ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_User_SIK_GetPlayerSummaries_h__Script_SteamWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_GetPlayerSummaries, USIK_GetPlayerSummaries::StaticClass, TEXT("USIK_GetPlayerSummaries"), &Z_Registration_Info_UClass_USIK_GetPlayerSummaries, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_GetPlayerSummaries), 3540434156U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_User_SIK_GetPlayerSummaries_h__Script_SteamWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_User_SIK_GetPlayerSummaries_h__Script_SteamWeb_3010305778{
	TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_User_SIK_GetPlayerSummaries_h__Script_SteamWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_User_SIK_GetPlayerSummaries_h__Script_SteamWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
