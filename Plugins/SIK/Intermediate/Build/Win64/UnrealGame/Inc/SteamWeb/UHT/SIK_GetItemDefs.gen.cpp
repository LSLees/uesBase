// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/Inventory/SIK_GetItemDefs.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_GetItemDefs() {}

// ********** Begin Cross Module References ********************************************************
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetItemDefs();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetItemDefs_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USIK_GetItemDefs Function GetItemDefs ************************************
struct Z_Construct_UFunction_USIK_GetItemDefs_GetItemDefs_Statics
{
	struct SIK_GetItemDefs_eventGetItemDefs_Parms
	{
		FString Key;
		int32 AppId;
		FString ModifiedSince;
		TArray<int64> ItemDefIds;
		TArray<int64> WorkshopIds;
		int32 CacheMaxAgeSeconds;
		USIK_GetItemDefs* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|Inventory" },
		{ "Comment", "//GetItemDefs is used to retrieve the itemdefs for a given application.\n" },
		{ "CPP_Default_CacheMaxAgeSeconds", "-1" },
		{ "ModuleRelativePath", "Functions/Inventory/SIK_GetItemDefs.h" },
		{ "ToolTip", "GetItemDefs is used to retrieve the itemdefs for a given application." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModifiedSince_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemDefIds_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorkshopIds_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CacheMaxAgeSeconds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetItemDefs constinit property declarations ***************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ModifiedSince;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_ItemDefIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemDefIds;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_WorkshopIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WorkshopIds;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CacheMaxAgeSeconds;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetItemDefs constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetItemDefs Property Definitions **************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_GetItemDefs_GetItemDefs_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetItemDefs_eventGetItemDefs_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_GetItemDefs_GetItemDefs_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetItemDefs_eventGetItemDefs_Parms, AppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppId_MetaData), NewProp_AppId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_GetItemDefs_GetItemDefs_Statics::NewProp_ModifiedSince = { "ModifiedSince", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetItemDefs_eventGetItemDefs_Parms, ModifiedSince), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModifiedSince_MetaData), NewProp_ModifiedSince_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_GetItemDefs_GetItemDefs_Statics::NewProp_ItemDefIds_Inner = { "ItemDefIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_GetItemDefs_GetItemDefs_Statics::NewProp_ItemDefIds = { "ItemDefIds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetItemDefs_eventGetItemDefs_Parms, ItemDefIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemDefIds_MetaData), NewProp_ItemDefIds_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_GetItemDefs_GetItemDefs_Statics::NewProp_WorkshopIds_Inner = { "WorkshopIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_GetItemDefs_GetItemDefs_Statics::NewProp_WorkshopIds = { "WorkshopIds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetItemDefs_eventGetItemDefs_Parms, WorkshopIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorkshopIds_MetaData), NewProp_WorkshopIds_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_GetItemDefs_GetItemDefs_Statics::NewProp_CacheMaxAgeSeconds = { "CacheMaxAgeSeconds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetItemDefs_eventGetItemDefs_Parms, CacheMaxAgeSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CacheMaxAgeSeconds_MetaData), NewProp_CacheMaxAgeSeconds_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_GetItemDefs_GetItemDefs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetItemDefs_eventGetItemDefs_Parms, ReturnValue), Z_Construct_UClass_USIK_GetItemDefs_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GetItemDefs_GetItemDefs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetItemDefs_GetItemDefs_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetItemDefs_GetItemDefs_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetItemDefs_GetItemDefs_Statics::NewProp_ModifiedSince,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetItemDefs_GetItemDefs_Statics::NewProp_ItemDefIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetItemDefs_GetItemDefs_Statics::NewProp_ItemDefIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetItemDefs_GetItemDefs_Statics::NewProp_WorkshopIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetItemDefs_GetItemDefs_Statics::NewProp_WorkshopIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetItemDefs_GetItemDefs_Statics::NewProp_CacheMaxAgeSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetItemDefs_GetItemDefs_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetItemDefs_GetItemDefs_Statics::PropPointers) < 2048);
// ********** End Function GetItemDefs Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GetItemDefs_GetItemDefs_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_GetItemDefs, nullptr, "GetItemDefs", 	Z_Construct_UFunction_USIK_GetItemDefs_GetItemDefs_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetItemDefs_GetItemDefs_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_GetItemDefs_GetItemDefs_Statics::SIK_GetItemDefs_eventGetItemDefs_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetItemDefs_GetItemDefs_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GetItemDefs_GetItemDefs_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_GetItemDefs_GetItemDefs_Statics::SIK_GetItemDefs_eventGetItemDefs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GetItemDefs_GetItemDefs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GetItemDefs_GetItemDefs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GetItemDefs::execGetItemDefs)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_ModifiedSince);
	P_GET_TARRAY_REF(int64,Z_Param_Out_ItemDefIds);
	P_GET_TARRAY_REF(int64,Z_Param_Out_WorkshopIds);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_CacheMaxAgeSeconds);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_GetItemDefs**)Z_Param__Result=USIK_GetItemDefs::GetItemDefs(Z_Param_Key,Z_Param_Out_AppId,Z_Param_ModifiedSince,Z_Param_Out_ItemDefIds,Z_Param_Out_WorkshopIds,Z_Param_Out_CacheMaxAgeSeconds);
	P_NATIVE_END;
}
// ********** End Class USIK_GetItemDefs Function GetItemDefs **************************************

// ********** Begin Class USIK_GetItemDefs *********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_GetItemDefs;
UClass* USIK_GetItemDefs::GetPrivateStaticClass()
{
	using TClass = USIK_GetItemDefs;
	if (!Z_Registration_Info_UClass_USIK_GetItemDefs.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_GetItemDefs"),
			Z_Registration_Info_UClass_USIK_GetItemDefs.InnerSingleton,
			StaticRegisterNativesUSIK_GetItemDefs,
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
	return Z_Registration_Info_UClass_USIK_GetItemDefs.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_GetItemDefs_NoRegister()
{
	return USIK_GetItemDefs::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_GetItemDefs_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/Inventory/SIK_GetItemDefs.h" },
		{ "ModuleRelativePath", "Functions/Inventory/SIK_GetItemDefs.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_GetItemDefs constinit property declarations *************************
// ********** End Class USIK_GetItemDefs constinit property declarations ***************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetItemDefs"), .Pointer = &USIK_GetItemDefs::execGetItemDefs },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_GetItemDefs_GetItemDefs, "GetItemDefs" }, // 3504391258
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_GetItemDefs>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_GetItemDefs_Statics
UObject* (*const Z_Construct_UClass_USIK_GetItemDefs_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetItemDefs_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_GetItemDefs_Statics::ClassParams = {
	&USIK_GetItemDefs::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetItemDefs_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_GetItemDefs_Statics::Class_MetaDataParams)
};
void USIK_GetItemDefs::StaticRegisterNativesUSIK_GetItemDefs()
{
	UClass* Class = USIK_GetItemDefs::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_GetItemDefs_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_GetItemDefs()
{
	if (!Z_Registration_Info_UClass_USIK_GetItemDefs.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_GetItemDefs.OuterSingleton, Z_Construct_UClass_USIK_GetItemDefs_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_GetItemDefs.OuterSingleton;
}
USIK_GetItemDefs::USIK_GetItemDefs(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_GetItemDefs);
USIK_GetItemDefs::~USIK_GetItemDefs() {}
// ********** End Class USIK_GetItemDefs ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Inventory_SIK_GetItemDefs_h__Script_SteamWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_GetItemDefs, USIK_GetItemDefs::StaticClass, TEXT("USIK_GetItemDefs"), &Z_Registration_Info_UClass_USIK_GetItemDefs, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_GetItemDefs), 2992419370U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Inventory_SIK_GetItemDefs_h__Script_SteamWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Inventory_SIK_GetItemDefs_h__Script_SteamWeb_2213784046{
	TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Inventory_SIK_GetItemDefs_h__Script_SteamWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Inventory_SIK_GetItemDefs_h__Script_SteamWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
