// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/Apps/SIK_GetPartnerAppListForWebAPIKey.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_GetPartnerAppListForWebAPIKey() {}

// ********** Begin Cross Module References ********************************************************
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetPartnerAppListForWebAPIKey();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetPartnerAppListForWebAPIKey_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USIK_GetPartnerAppListForWebAPIKey Function GetPartnerAppListForWebAPIKey 
struct Z_Construct_UFunction_USIK_GetPartnerAppListForWebAPIKey_GetPartnerAppListForWebAPIKey_Statics
{
	struct SIK_GetPartnerAppListForWebAPIKey_eventGetPartnerAppListForWebAPIKey_Parms
	{
		FString Key;
		FString TypeFilter;
		USIK_GetPartnerAppListForWebAPIKey* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|Apps" },
		{ "Comment", "/*\n\x09*GetPartnerAppListForWebAPIKey\n\x09GET https://partner.steam-api.com/ISteamApps/GetPartnerAppListForWebAPIKey/v2/\n\x09Name\x09Type\x09Required\x09""Description\n\x09key\x09string\x09\xe2\x9c\x94\x09Steamworks Web API publisher authentication key.\n\x09type_filter\x09string\x09\x09Optional comma separated list of types to filter on\n\n\x09Get a list of appIDs associated with a WebAPI key. Type_filter can used to specify certain app types to be returned. Possible values are \"game,application,tool,demo,dlc,music\". When type_filter is blank or not used, all apps are returned.\n\n\x09Version 2 will output the app name.\n\n\x09NOTE: This call requires a publisher API key to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!\n\x09*/" },
		{ "ModuleRelativePath", "Functions/Apps/SIK_GetPartnerAppListForWebAPIKey.h" },
		{ "ToolTip", "*GetPartnerAppListForWebAPIKey\nGET https://partner.steam-api.com/ISteamApps/GetPartnerAppListForWebAPIKey/v2/\nName    Type    Required        Description\nkey     string  \xe2\x9c\x94       Steamworks Web API publisher authentication key.\ntype_filter     string          Optional comma separated list of types to filter on\n\nGet a list of appIDs associated with a WebAPI key. Type_filter can used to specify certain app types to be returned. Possible values are \"game,application,tool,demo,dlc,music\". When type_filter is blank or not used, all apps are returned.\n\nVersion 2 will output the app name.\n\nNOTE: This call requires a publisher API key to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TypeFilter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetPartnerAppListForWebAPIKey constinit property declarations *********
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TypeFilter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPartnerAppListForWebAPIKey constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPartnerAppListForWebAPIKey Property Definitions ********************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_GetPartnerAppListForWebAPIKey_GetPartnerAppListForWebAPIKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetPartnerAppListForWebAPIKey_eventGetPartnerAppListForWebAPIKey_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_GetPartnerAppListForWebAPIKey_GetPartnerAppListForWebAPIKey_Statics::NewProp_TypeFilter = { "TypeFilter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetPartnerAppListForWebAPIKey_eventGetPartnerAppListForWebAPIKey_Parms, TypeFilter), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TypeFilter_MetaData), NewProp_TypeFilter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_GetPartnerAppListForWebAPIKey_GetPartnerAppListForWebAPIKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetPartnerAppListForWebAPIKey_eventGetPartnerAppListForWebAPIKey_Parms, ReturnValue), Z_Construct_UClass_USIK_GetPartnerAppListForWebAPIKey_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GetPartnerAppListForWebAPIKey_GetPartnerAppListForWebAPIKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetPartnerAppListForWebAPIKey_GetPartnerAppListForWebAPIKey_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetPartnerAppListForWebAPIKey_GetPartnerAppListForWebAPIKey_Statics::NewProp_TypeFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetPartnerAppListForWebAPIKey_GetPartnerAppListForWebAPIKey_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetPartnerAppListForWebAPIKey_GetPartnerAppListForWebAPIKey_Statics::PropPointers) < 2048);
// ********** End Function GetPartnerAppListForWebAPIKey Property Definitions **********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GetPartnerAppListForWebAPIKey_GetPartnerAppListForWebAPIKey_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_GetPartnerAppListForWebAPIKey, nullptr, "GetPartnerAppListForWebAPIKey", 	Z_Construct_UFunction_USIK_GetPartnerAppListForWebAPIKey_GetPartnerAppListForWebAPIKey_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetPartnerAppListForWebAPIKey_GetPartnerAppListForWebAPIKey_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_GetPartnerAppListForWebAPIKey_GetPartnerAppListForWebAPIKey_Statics::SIK_GetPartnerAppListForWebAPIKey_eventGetPartnerAppListForWebAPIKey_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetPartnerAppListForWebAPIKey_GetPartnerAppListForWebAPIKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GetPartnerAppListForWebAPIKey_GetPartnerAppListForWebAPIKey_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_GetPartnerAppListForWebAPIKey_GetPartnerAppListForWebAPIKey_Statics::SIK_GetPartnerAppListForWebAPIKey_eventGetPartnerAppListForWebAPIKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GetPartnerAppListForWebAPIKey_GetPartnerAppListForWebAPIKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GetPartnerAppListForWebAPIKey_GetPartnerAppListForWebAPIKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GetPartnerAppListForWebAPIKey::execGetPartnerAppListForWebAPIKey)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_TypeFilter);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_GetPartnerAppListForWebAPIKey**)Z_Param__Result=USIK_GetPartnerAppListForWebAPIKey::GetPartnerAppListForWebAPIKey(Z_Param_Key,Z_Param_TypeFilter);
	P_NATIVE_END;
}
// ********** End Class USIK_GetPartnerAppListForWebAPIKey Function GetPartnerAppListForWebAPIKey **

// ********** Begin Class USIK_GetPartnerAppListForWebAPIKey ***************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_GetPartnerAppListForWebAPIKey;
UClass* USIK_GetPartnerAppListForWebAPIKey::GetPrivateStaticClass()
{
	using TClass = USIK_GetPartnerAppListForWebAPIKey;
	if (!Z_Registration_Info_UClass_USIK_GetPartnerAppListForWebAPIKey.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_GetPartnerAppListForWebAPIKey"),
			Z_Registration_Info_UClass_USIK_GetPartnerAppListForWebAPIKey.InnerSingleton,
			StaticRegisterNativesUSIK_GetPartnerAppListForWebAPIKey,
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
	return Z_Registration_Info_UClass_USIK_GetPartnerAppListForWebAPIKey.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_GetPartnerAppListForWebAPIKey_NoRegister()
{
	return USIK_GetPartnerAppListForWebAPIKey::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_GetPartnerAppListForWebAPIKey_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/Apps/SIK_GetPartnerAppListForWebAPIKey.h" },
		{ "ModuleRelativePath", "Functions/Apps/SIK_GetPartnerAppListForWebAPIKey.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_GetPartnerAppListForWebAPIKey constinit property declarations *******
// ********** End Class USIK_GetPartnerAppListForWebAPIKey constinit property declarations *********
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetPartnerAppListForWebAPIKey"), .Pointer = &USIK_GetPartnerAppListForWebAPIKey::execGetPartnerAppListForWebAPIKey },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_GetPartnerAppListForWebAPIKey_GetPartnerAppListForWebAPIKey, "GetPartnerAppListForWebAPIKey" }, // 2849451068
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_GetPartnerAppListForWebAPIKey>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_GetPartnerAppListForWebAPIKey_Statics
UObject* (*const Z_Construct_UClass_USIK_GetPartnerAppListForWebAPIKey_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetPartnerAppListForWebAPIKey_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_GetPartnerAppListForWebAPIKey_Statics::ClassParams = {
	&USIK_GetPartnerAppListForWebAPIKey::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetPartnerAppListForWebAPIKey_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_GetPartnerAppListForWebAPIKey_Statics::Class_MetaDataParams)
};
void USIK_GetPartnerAppListForWebAPIKey::StaticRegisterNativesUSIK_GetPartnerAppListForWebAPIKey()
{
	UClass* Class = USIK_GetPartnerAppListForWebAPIKey::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_GetPartnerAppListForWebAPIKey_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_GetPartnerAppListForWebAPIKey()
{
	if (!Z_Registration_Info_UClass_USIK_GetPartnerAppListForWebAPIKey.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_GetPartnerAppListForWebAPIKey.OuterSingleton, Z_Construct_UClass_USIK_GetPartnerAppListForWebAPIKey_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_GetPartnerAppListForWebAPIKey.OuterSingleton;
}
USIK_GetPartnerAppListForWebAPIKey::USIK_GetPartnerAppListForWebAPIKey(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_GetPartnerAppListForWebAPIKey);
USIK_GetPartnerAppListForWebAPIKey::~USIK_GetPartnerAppListForWebAPIKey() {}
// ********** End Class USIK_GetPartnerAppListForWebAPIKey *****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Apps_SIK_GetPartnerAppListForWebAPIKey_h__Script_SteamWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_GetPartnerAppListForWebAPIKey, USIK_GetPartnerAppListForWebAPIKey::StaticClass, TEXT("USIK_GetPartnerAppListForWebAPIKey"), &Z_Registration_Info_UClass_USIK_GetPartnerAppListForWebAPIKey, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_GetPartnerAppListForWebAPIKey), 4062759793U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Apps_SIK_GetPartnerAppListForWebAPIKey_h__Script_SteamWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Apps_SIK_GetPartnerAppListForWebAPIKey_h__Script_SteamWeb_1673256111{
	TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Apps_SIK_GetPartnerAppListForWebAPIKey_h__Script_SteamWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Apps_SIK_GetPartnerAppListForWebAPIKey_h__Script_SteamWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
