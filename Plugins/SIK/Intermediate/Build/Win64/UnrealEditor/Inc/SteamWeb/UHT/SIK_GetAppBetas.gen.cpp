// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/Apps/SIK_GetAppBetas.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_GetAppBetas() {}

// ********** Begin Cross Module References ********************************************************
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetAppBetas();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetAppBetas_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USIK_GetAppBetas Function GetAppBetas ************************************
struct Z_Construct_UFunction_USIK_GetAppBetas_GetAppBetas_Statics
{
	struct SIK_GetAppBetas_eventGetAppBetas_Parms
	{
		FString Key;
		int32 AppId;
		USIK_GetAppBetas* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|Apps" },
		{ "Comment", "//Gets all of the beta branches for the specified application.\n" },
		{ "ModuleRelativePath", "Functions/Apps/SIK_GetAppBetas.h" },
		{ "ToolTip", "Gets all of the beta branches for the specified application." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAppBetas constinit property declarations ***************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAppBetas constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAppBetas Property Definitions **************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_GetAppBetas_GetAppBetas_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetAppBetas_eventGetAppBetas_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_GetAppBetas_GetAppBetas_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetAppBetas_eventGetAppBetas_Parms, AppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppId_MetaData), NewProp_AppId_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_GetAppBetas_GetAppBetas_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetAppBetas_eventGetAppBetas_Parms, ReturnValue), Z_Construct_UClass_USIK_GetAppBetas_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GetAppBetas_GetAppBetas_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetAppBetas_GetAppBetas_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetAppBetas_GetAppBetas_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetAppBetas_GetAppBetas_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetAppBetas_GetAppBetas_Statics::PropPointers) < 2048);
// ********** End Function GetAppBetas Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GetAppBetas_GetAppBetas_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_GetAppBetas, nullptr, "GetAppBetas", 	Z_Construct_UFunction_USIK_GetAppBetas_GetAppBetas_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetAppBetas_GetAppBetas_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_GetAppBetas_GetAppBetas_Statics::SIK_GetAppBetas_eventGetAppBetas_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetAppBetas_GetAppBetas_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GetAppBetas_GetAppBetas_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_GetAppBetas_GetAppBetas_Statics::SIK_GetAppBetas_eventGetAppBetas_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GetAppBetas_GetAppBetas()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GetAppBetas_GetAppBetas_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GetAppBetas::execGetAppBetas)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_GetAppBetas**)Z_Param__Result=USIK_GetAppBetas::GetAppBetas(Z_Param_Key,Z_Param_Out_AppId);
	P_NATIVE_END;
}
// ********** End Class USIK_GetAppBetas Function GetAppBetas **************************************

// ********** Begin Class USIK_GetAppBetas *********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_GetAppBetas;
UClass* USIK_GetAppBetas::GetPrivateStaticClass()
{
	using TClass = USIK_GetAppBetas;
	if (!Z_Registration_Info_UClass_USIK_GetAppBetas.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_GetAppBetas"),
			Z_Registration_Info_UClass_USIK_GetAppBetas.InnerSingleton,
			StaticRegisterNativesUSIK_GetAppBetas,
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
	return Z_Registration_Info_UClass_USIK_GetAppBetas.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_GetAppBetas_NoRegister()
{
	return USIK_GetAppBetas::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_GetAppBetas_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/Apps/SIK_GetAppBetas.h" },
		{ "ModuleRelativePath", "Functions/Apps/SIK_GetAppBetas.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_GetAppBetas constinit property declarations *************************
// ********** End Class USIK_GetAppBetas constinit property declarations ***************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetAppBetas"), .Pointer = &USIK_GetAppBetas::execGetAppBetas },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_GetAppBetas_GetAppBetas, "GetAppBetas" }, // 52224268
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_GetAppBetas>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_GetAppBetas_Statics
UObject* (*const Z_Construct_UClass_USIK_GetAppBetas_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetAppBetas_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_GetAppBetas_Statics::ClassParams = {
	&USIK_GetAppBetas::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetAppBetas_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_GetAppBetas_Statics::Class_MetaDataParams)
};
void USIK_GetAppBetas::StaticRegisterNativesUSIK_GetAppBetas()
{
	UClass* Class = USIK_GetAppBetas::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_GetAppBetas_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_GetAppBetas()
{
	if (!Z_Registration_Info_UClass_USIK_GetAppBetas.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_GetAppBetas.OuterSingleton, Z_Construct_UClass_USIK_GetAppBetas_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_GetAppBetas.OuterSingleton;
}
USIK_GetAppBetas::USIK_GetAppBetas(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_GetAppBetas);
USIK_GetAppBetas::~USIK_GetAppBetas() {}
// ********** End Class USIK_GetAppBetas ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Apps_SIK_GetAppBetas_h__Script_SteamWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_GetAppBetas, USIK_GetAppBetas::StaticClass, TEXT("USIK_GetAppBetas"), &Z_Registration_Info_UClass_USIK_GetAppBetas, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_GetAppBetas), 4005185538U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Apps_SIK_GetAppBetas_h__Script_SteamWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Apps_SIK_GetAppBetas_h__Script_SteamWeb_4225189990{
	TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Apps_SIK_GetAppBetas_h__Script_SteamWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Apps_SIK_GetAppBetas_h__Script_SteamWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
