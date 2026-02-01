// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/Econ/SIK_FlushInventoryCache.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_FlushInventoryCache() {}

// ********** Begin Cross Module References ********************************************************
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_FlushInventoryCache();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_FlushInventoryCache_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USIK_FlushInventoryCache Function FlushInventoryCache ********************
struct Z_Construct_UFunction_USIK_FlushInventoryCache_FlushInventoryCache_Statics
{
	struct SIK_FlushInventoryCache_eventFlushInventoryCache_Parms
	{
		FString Key;
		int64 SteamId;
		int32 AppId;
		int64 ContextId;
		USIK_FlushInventoryCache* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|Econ" },
		{ "Comment", "//Flushes the cache for a user's inventory in a specific app context\n" },
		{ "ModuleRelativePath", "Functions/Econ/SIK_FlushInventoryCache.h" },
		{ "ToolTip", "Flushes the cache for a user's inventory in a specific app context" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContextId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function FlushInventoryCache constinit property declarations *******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_ContextId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FlushInventoryCache constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FlushInventoryCache Property Definitions ******************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_FlushInventoryCache_FlushInventoryCache_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FlushInventoryCache_eventFlushInventoryCache_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_FlushInventoryCache_FlushInventoryCache_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FlushInventoryCache_eventFlushInventoryCache_Parms, SteamId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamId_MetaData), NewProp_SteamId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_FlushInventoryCache_FlushInventoryCache_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FlushInventoryCache_eventFlushInventoryCache_Parms, AppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppId_MetaData), NewProp_AppId_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_FlushInventoryCache_FlushInventoryCache_Statics::NewProp_ContextId = { "ContextId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FlushInventoryCache_eventFlushInventoryCache_Parms, ContextId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContextId_MetaData), NewProp_ContextId_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_FlushInventoryCache_FlushInventoryCache_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FlushInventoryCache_eventFlushInventoryCache_Parms, ReturnValue), Z_Construct_UClass_USIK_FlushInventoryCache_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_FlushInventoryCache_FlushInventoryCache_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FlushInventoryCache_FlushInventoryCache_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FlushInventoryCache_FlushInventoryCache_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FlushInventoryCache_FlushInventoryCache_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FlushInventoryCache_FlushInventoryCache_Statics::NewProp_ContextId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FlushInventoryCache_FlushInventoryCache_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FlushInventoryCache_FlushInventoryCache_Statics::PropPointers) < 2048);
// ********** End Function FlushInventoryCache Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_FlushInventoryCache_FlushInventoryCache_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_FlushInventoryCache, nullptr, "FlushInventoryCache", 	Z_Construct_UFunction_USIK_FlushInventoryCache_FlushInventoryCache_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FlushInventoryCache_FlushInventoryCache_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_FlushInventoryCache_FlushInventoryCache_Statics::SIK_FlushInventoryCache_eventFlushInventoryCache_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FlushInventoryCache_FlushInventoryCache_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_FlushInventoryCache_FlushInventoryCache_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_FlushInventoryCache_FlushInventoryCache_Statics::SIK_FlushInventoryCache_eventFlushInventoryCache_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_FlushInventoryCache_FlushInventoryCache()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_FlushInventoryCache_FlushInventoryCache_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_FlushInventoryCache::execFlushInventoryCache)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_SteamId);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppId);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_ContextId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_FlushInventoryCache**)Z_Param__Result=USIK_FlushInventoryCache::FlushInventoryCache(Z_Param_Key,Z_Param_Out_SteamId,Z_Param_Out_AppId,Z_Param_Out_ContextId);
	P_NATIVE_END;
}
// ********** End Class USIK_FlushInventoryCache Function FlushInventoryCache **********************

// ********** Begin Class USIK_FlushInventoryCache *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_FlushInventoryCache;
UClass* USIK_FlushInventoryCache::GetPrivateStaticClass()
{
	using TClass = USIK_FlushInventoryCache;
	if (!Z_Registration_Info_UClass_USIK_FlushInventoryCache.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_FlushInventoryCache"),
			Z_Registration_Info_UClass_USIK_FlushInventoryCache.InnerSingleton,
			StaticRegisterNativesUSIK_FlushInventoryCache,
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
	return Z_Registration_Info_UClass_USIK_FlushInventoryCache.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_FlushInventoryCache_NoRegister()
{
	return USIK_FlushInventoryCache::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_FlushInventoryCache_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/Econ/SIK_FlushInventoryCache.h" },
		{ "ModuleRelativePath", "Functions/Econ/SIK_FlushInventoryCache.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_FlushInventoryCache constinit property declarations *****************
// ********** End Class USIK_FlushInventoryCache constinit property declarations *******************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("FlushInventoryCache"), .Pointer = &USIK_FlushInventoryCache::execFlushInventoryCache },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_FlushInventoryCache_FlushInventoryCache, "FlushInventoryCache" }, // 2689373405
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_FlushInventoryCache>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_FlushInventoryCache_Statics
UObject* (*const Z_Construct_UClass_USIK_FlushInventoryCache_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_FlushInventoryCache_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_FlushInventoryCache_Statics::ClassParams = {
	&USIK_FlushInventoryCache::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_FlushInventoryCache_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_FlushInventoryCache_Statics::Class_MetaDataParams)
};
void USIK_FlushInventoryCache::StaticRegisterNativesUSIK_FlushInventoryCache()
{
	UClass* Class = USIK_FlushInventoryCache::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_FlushInventoryCache_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_FlushInventoryCache()
{
	if (!Z_Registration_Info_UClass_USIK_FlushInventoryCache.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_FlushInventoryCache.OuterSingleton, Z_Construct_UClass_USIK_FlushInventoryCache_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_FlushInventoryCache.OuterSingleton;
}
USIK_FlushInventoryCache::USIK_FlushInventoryCache(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_FlushInventoryCache);
USIK_FlushInventoryCache::~USIK_FlushInventoryCache() {}
// ********** End Class USIK_FlushInventoryCache ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Econ_SIK_FlushInventoryCache_h__Script_SteamWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_FlushInventoryCache, USIK_FlushInventoryCache::StaticClass, TEXT("USIK_FlushInventoryCache"), &Z_Registration_Info_UClass_USIK_FlushInventoryCache, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_FlushInventoryCache), 758436674U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Econ_SIK_FlushInventoryCache_h__Script_SteamWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Econ_SIK_FlushInventoryCache_h__Script_SteamWeb_3679927530{
	TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Econ_SIK_FlushInventoryCache_h__Script_SteamWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Econ_SIK_FlushInventoryCache_h__Script_SteamWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
