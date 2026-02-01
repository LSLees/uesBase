// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/Workshop/SIK_GetItemDailyRevenue.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_GetItemDailyRevenue() {}

// ********** Begin Cross Module References ********************************************************
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetItemDailyRevenue();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetItemDailyRevenue_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USIK_GetItemDailyRevenue Function GetItemDailyRevenue ********************
struct Z_Construct_UFunction_USIK_GetItemDailyRevenue_GetItemDailyRevenue_Statics
{
	struct SIK_GetItemDailyRevenue_eventGetItemDailyRevenue_Parms
	{
		FString Key;
		int32 AppId;
		int32 ItemId;
		int32 DateStart;
		int32 DateEnd;
		USIK_GetItemDailyRevenue* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|Workshop" },
		{ "Comment", "//Get item revenue for a specific app/item definition for a date range.\n" },
		{ "ModuleRelativePath", "Functions/Workshop/SIK_GetItemDailyRevenue.h" },
		{ "ToolTip", "Get item revenue for a specific app/item definition for a date range." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DateStart_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DateEnd_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetItemDailyRevenue constinit property declarations *******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DateStart;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DateEnd;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetItemDailyRevenue constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetItemDailyRevenue Property Definitions ******************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_GetItemDailyRevenue_GetItemDailyRevenue_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetItemDailyRevenue_eventGetItemDailyRevenue_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_GetItemDailyRevenue_GetItemDailyRevenue_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetItemDailyRevenue_eventGetItemDailyRevenue_Parms, AppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppId_MetaData), NewProp_AppId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_GetItemDailyRevenue_GetItemDailyRevenue_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetItemDailyRevenue_eventGetItemDailyRevenue_Parms, ItemId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemId_MetaData), NewProp_ItemId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_GetItemDailyRevenue_GetItemDailyRevenue_Statics::NewProp_DateStart = { "DateStart", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetItemDailyRevenue_eventGetItemDailyRevenue_Parms, DateStart), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DateStart_MetaData), NewProp_DateStart_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_GetItemDailyRevenue_GetItemDailyRevenue_Statics::NewProp_DateEnd = { "DateEnd", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetItemDailyRevenue_eventGetItemDailyRevenue_Parms, DateEnd), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DateEnd_MetaData), NewProp_DateEnd_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_GetItemDailyRevenue_GetItemDailyRevenue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetItemDailyRevenue_eventGetItemDailyRevenue_Parms, ReturnValue), Z_Construct_UClass_USIK_GetItemDailyRevenue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GetItemDailyRevenue_GetItemDailyRevenue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetItemDailyRevenue_GetItemDailyRevenue_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetItemDailyRevenue_GetItemDailyRevenue_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetItemDailyRevenue_GetItemDailyRevenue_Statics::NewProp_ItemId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetItemDailyRevenue_GetItemDailyRevenue_Statics::NewProp_DateStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetItemDailyRevenue_GetItemDailyRevenue_Statics::NewProp_DateEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetItemDailyRevenue_GetItemDailyRevenue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetItemDailyRevenue_GetItemDailyRevenue_Statics::PropPointers) < 2048);
// ********** End Function GetItemDailyRevenue Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GetItemDailyRevenue_GetItemDailyRevenue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_GetItemDailyRevenue, nullptr, "GetItemDailyRevenue", 	Z_Construct_UFunction_USIK_GetItemDailyRevenue_GetItemDailyRevenue_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetItemDailyRevenue_GetItemDailyRevenue_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_GetItemDailyRevenue_GetItemDailyRevenue_Statics::SIK_GetItemDailyRevenue_eventGetItemDailyRevenue_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetItemDailyRevenue_GetItemDailyRevenue_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GetItemDailyRevenue_GetItemDailyRevenue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_GetItemDailyRevenue_GetItemDailyRevenue_Statics::SIK_GetItemDailyRevenue_eventGetItemDailyRevenue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GetItemDailyRevenue_GetItemDailyRevenue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GetItemDailyRevenue_GetItemDailyRevenue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GetItemDailyRevenue::execGetItemDailyRevenue)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppId);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_ItemId);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_DateStart);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_DateEnd);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_GetItemDailyRevenue**)Z_Param__Result=USIK_GetItemDailyRevenue::GetItemDailyRevenue(Z_Param_Key,Z_Param_Out_AppId,Z_Param_Out_ItemId,Z_Param_Out_DateStart,Z_Param_Out_DateEnd);
	P_NATIVE_END;
}
// ********** End Class USIK_GetItemDailyRevenue Function GetItemDailyRevenue **********************

// ********** Begin Class USIK_GetItemDailyRevenue *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_GetItemDailyRevenue;
UClass* USIK_GetItemDailyRevenue::GetPrivateStaticClass()
{
	using TClass = USIK_GetItemDailyRevenue;
	if (!Z_Registration_Info_UClass_USIK_GetItemDailyRevenue.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_GetItemDailyRevenue"),
			Z_Registration_Info_UClass_USIK_GetItemDailyRevenue.InnerSingleton,
			StaticRegisterNativesUSIK_GetItemDailyRevenue,
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
	return Z_Registration_Info_UClass_USIK_GetItemDailyRevenue.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_GetItemDailyRevenue_NoRegister()
{
	return USIK_GetItemDailyRevenue::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_GetItemDailyRevenue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/Workshop/SIK_GetItemDailyRevenue.h" },
		{ "ModuleRelativePath", "Functions/Workshop/SIK_GetItemDailyRevenue.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_GetItemDailyRevenue constinit property declarations *****************
// ********** End Class USIK_GetItemDailyRevenue constinit property declarations *******************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetItemDailyRevenue"), .Pointer = &USIK_GetItemDailyRevenue::execGetItemDailyRevenue },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_GetItemDailyRevenue_GetItemDailyRevenue, "GetItemDailyRevenue" }, // 3136528458
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_GetItemDailyRevenue>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_GetItemDailyRevenue_Statics
UObject* (*const Z_Construct_UClass_USIK_GetItemDailyRevenue_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetItemDailyRevenue_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_GetItemDailyRevenue_Statics::ClassParams = {
	&USIK_GetItemDailyRevenue::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetItemDailyRevenue_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_GetItemDailyRevenue_Statics::Class_MetaDataParams)
};
void USIK_GetItemDailyRevenue::StaticRegisterNativesUSIK_GetItemDailyRevenue()
{
	UClass* Class = USIK_GetItemDailyRevenue::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_GetItemDailyRevenue_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_GetItemDailyRevenue()
{
	if (!Z_Registration_Info_UClass_USIK_GetItemDailyRevenue.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_GetItemDailyRevenue.OuterSingleton, Z_Construct_UClass_USIK_GetItemDailyRevenue_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_GetItemDailyRevenue.OuterSingleton;
}
USIK_GetItemDailyRevenue::USIK_GetItemDailyRevenue(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_GetItemDailyRevenue);
USIK_GetItemDailyRevenue::~USIK_GetItemDailyRevenue() {}
// ********** End Class USIK_GetItemDailyRevenue ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Workshop_SIK_GetItemDailyRevenue_h__Script_SteamWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_GetItemDailyRevenue, USIK_GetItemDailyRevenue::StaticClass, TEXT("USIK_GetItemDailyRevenue"), &Z_Registration_Info_UClass_USIK_GetItemDailyRevenue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_GetItemDailyRevenue), 2709419081U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Workshop_SIK_GetItemDailyRevenue_h__Script_SteamWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Workshop_SIK_GetItemDailyRevenue_h__Script_SteamWeb_408918094{
	TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Workshop_SIK_GetItemDailyRevenue_h__Script_SteamWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Workshop_SIK_GetItemDailyRevenue_h__Script_SteamWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
