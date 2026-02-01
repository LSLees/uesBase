// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/Player/SIK_GetBadges.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_GetBadges() {}

// ********** Begin Cross Module References ********************************************************
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetBadges();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetBadges_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USIK_GetBadges Function GetBadges ****************************************
struct Z_Construct_UFunction_USIK_GetBadges_GetBadges_Statics
{
	struct SIK_GetBadges_eventGetBadges_Parms
	{
		FString Key;
		int64 SteamId;
		USIK_GetBadges* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|Player" },
		{ "Comment", "//Gets badges that are owned by a specific user.\n" },
		{ "ModuleRelativePath", "Functions/Player/SIK_GetBadges.h" },
		{ "ToolTip", "Gets badges that are owned by a specific user." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetBadges constinit property declarations *****************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetBadges constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetBadges Property Definitions ****************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_GetBadges_GetBadges_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetBadges_eventGetBadges_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_GetBadges_GetBadges_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetBadges_eventGetBadges_Parms, SteamId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamId_MetaData), NewProp_SteamId_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_GetBadges_GetBadges_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetBadges_eventGetBadges_Parms, ReturnValue), Z_Construct_UClass_USIK_GetBadges_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GetBadges_GetBadges_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetBadges_GetBadges_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetBadges_GetBadges_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetBadges_GetBadges_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetBadges_GetBadges_Statics::PropPointers) < 2048);
// ********** End Function GetBadges Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GetBadges_GetBadges_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_GetBadges, nullptr, "GetBadges", 	Z_Construct_UFunction_USIK_GetBadges_GetBadges_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetBadges_GetBadges_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_GetBadges_GetBadges_Statics::SIK_GetBadges_eventGetBadges_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetBadges_GetBadges_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GetBadges_GetBadges_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_GetBadges_GetBadges_Statics::SIK_GetBadges_eventGetBadges_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GetBadges_GetBadges()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GetBadges_GetBadges_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GetBadges::execGetBadges)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_SteamId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_GetBadges**)Z_Param__Result=USIK_GetBadges::GetBadges(Z_Param_Key,Z_Param_Out_SteamId);
	P_NATIVE_END;
}
// ********** End Class USIK_GetBadges Function GetBadges ******************************************

// ********** Begin Class USIK_GetBadges ***********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_GetBadges;
UClass* USIK_GetBadges::GetPrivateStaticClass()
{
	using TClass = USIK_GetBadges;
	if (!Z_Registration_Info_UClass_USIK_GetBadges.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_GetBadges"),
			Z_Registration_Info_UClass_USIK_GetBadges.InnerSingleton,
			StaticRegisterNativesUSIK_GetBadges,
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
	return Z_Registration_Info_UClass_USIK_GetBadges.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_GetBadges_NoRegister()
{
	return USIK_GetBadges::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_GetBadges_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/Player/SIK_GetBadges.h" },
		{ "ModuleRelativePath", "Functions/Player/SIK_GetBadges.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_GetBadges constinit property declarations ***************************
// ********** End Class USIK_GetBadges constinit property declarations *****************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetBadges"), .Pointer = &USIK_GetBadges::execGetBadges },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_GetBadges_GetBadges, "GetBadges" }, // 4979305
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_GetBadges>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_GetBadges_Statics
UObject* (*const Z_Construct_UClass_USIK_GetBadges_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetBadges_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_GetBadges_Statics::ClassParams = {
	&USIK_GetBadges::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetBadges_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_GetBadges_Statics::Class_MetaDataParams)
};
void USIK_GetBadges::StaticRegisterNativesUSIK_GetBadges()
{
	UClass* Class = USIK_GetBadges::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_GetBadges_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_GetBadges()
{
	if (!Z_Registration_Info_UClass_USIK_GetBadges.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_GetBadges.OuterSingleton, Z_Construct_UClass_USIK_GetBadges_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_GetBadges.OuterSingleton;
}
USIK_GetBadges::USIK_GetBadges(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_GetBadges);
USIK_GetBadges::~USIK_GetBadges() {}
// ********** End Class USIK_GetBadges *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Player_SIK_GetBadges_h__Script_SteamWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_GetBadges, USIK_GetBadges::StaticClass, TEXT("USIK_GetBadges"), &Z_Registration_Info_UClass_USIK_GetBadges, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_GetBadges), 1911452225U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Player_SIK_GetBadges_h__Script_SteamWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Player_SIK_GetBadges_h__Script_SteamWeb_1761607237{
	TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Player_SIK_GetBadges_h__Script_SteamWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Player_SIK_GetBadges_h__Script_SteamWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
