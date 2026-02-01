// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/Inventory/SIK_GetQuantity.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_GetQuantity() {}

// ********** Begin Cross Module References ********************************************************
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetQuantity();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetQuantity_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USIK_GetQuantity Function GetQuantity ************************************
struct Z_Construct_UFunction_USIK_GetQuantity_GetQuantity_Statics
{
	struct SIK_GetQuantity_eventGetQuantity_Parms
	{
		FString Key;
		int32 AppId;
		int64 SteamId;
		TArray<int64> ItemDefId;
		bool Force;
		USIK_GetQuantity* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|Inventory" },
		{ "Comment", "//Get the total number of available items of the given type\n" },
		{ "CPP_Default_Force", "false" },
		{ "ModuleRelativePath", "Functions/Inventory/SIK_GetQuantity.h" },
		{ "ToolTip", "Get the total number of available items of the given type" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemDefId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Force_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetQuantity constinit property declarations ***************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_ItemDefId_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemDefId;
	static void NewProp_Force_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Force;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetQuantity constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetQuantity Property Definitions **************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_GetQuantity_GetQuantity_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetQuantity_eventGetQuantity_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_GetQuantity_GetQuantity_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetQuantity_eventGetQuantity_Parms, AppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppId_MetaData), NewProp_AppId_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_GetQuantity_GetQuantity_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetQuantity_eventGetQuantity_Parms, SteamId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamId_MetaData), NewProp_SteamId_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_GetQuantity_GetQuantity_Statics::NewProp_ItemDefId_Inner = { "ItemDefId", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_GetQuantity_GetQuantity_Statics::NewProp_ItemDefId = { "ItemDefId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetQuantity_eventGetQuantity_Parms, ItemDefId), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemDefId_MetaData), NewProp_ItemDefId_MetaData) };
void Z_Construct_UFunction_USIK_GetQuantity_GetQuantity_Statics::NewProp_Force_SetBit(void* Obj)
{
	((SIK_GetQuantity_eventGetQuantity_Parms*)Obj)->Force = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_GetQuantity_GetQuantity_Statics::NewProp_Force = { "Force", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_GetQuantity_eventGetQuantity_Parms), &Z_Construct_UFunction_USIK_GetQuantity_GetQuantity_Statics::NewProp_Force_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Force_MetaData), NewProp_Force_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_GetQuantity_GetQuantity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetQuantity_eventGetQuantity_Parms, ReturnValue), Z_Construct_UClass_USIK_GetQuantity_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GetQuantity_GetQuantity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetQuantity_GetQuantity_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetQuantity_GetQuantity_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetQuantity_GetQuantity_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetQuantity_GetQuantity_Statics::NewProp_ItemDefId_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetQuantity_GetQuantity_Statics::NewProp_ItemDefId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetQuantity_GetQuantity_Statics::NewProp_Force,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetQuantity_GetQuantity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetQuantity_GetQuantity_Statics::PropPointers) < 2048);
// ********** End Function GetQuantity Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GetQuantity_GetQuantity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_GetQuantity, nullptr, "GetQuantity", 	Z_Construct_UFunction_USIK_GetQuantity_GetQuantity_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetQuantity_GetQuantity_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_GetQuantity_GetQuantity_Statics::SIK_GetQuantity_eventGetQuantity_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetQuantity_GetQuantity_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GetQuantity_GetQuantity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_GetQuantity_GetQuantity_Statics::SIK_GetQuantity_eventGetQuantity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GetQuantity_GetQuantity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GetQuantity_GetQuantity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GetQuantity::execGetQuantity)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppId);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_SteamId);
	P_GET_TARRAY_REF(int64,Z_Param_Out_ItemDefId);
	P_GET_UBOOL_REF(Z_Param_Out_Force);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_GetQuantity**)Z_Param__Result=USIK_GetQuantity::GetQuantity(Z_Param_Key,Z_Param_Out_AppId,Z_Param_Out_SteamId,Z_Param_Out_ItemDefId,Z_Param_Out_Force);
	P_NATIVE_END;
}
// ********** End Class USIK_GetQuantity Function GetQuantity **************************************

// ********** Begin Class USIK_GetQuantity *********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_GetQuantity;
UClass* USIK_GetQuantity::GetPrivateStaticClass()
{
	using TClass = USIK_GetQuantity;
	if (!Z_Registration_Info_UClass_USIK_GetQuantity.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_GetQuantity"),
			Z_Registration_Info_UClass_USIK_GetQuantity.InnerSingleton,
			StaticRegisterNativesUSIK_GetQuantity,
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
	return Z_Registration_Info_UClass_USIK_GetQuantity.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_GetQuantity_NoRegister()
{
	return USIK_GetQuantity::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_GetQuantity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/Inventory/SIK_GetQuantity.h" },
		{ "ModuleRelativePath", "Functions/Inventory/SIK_GetQuantity.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_GetQuantity constinit property declarations *************************
// ********** End Class USIK_GetQuantity constinit property declarations ***************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetQuantity"), .Pointer = &USIK_GetQuantity::execGetQuantity },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_GetQuantity_GetQuantity, "GetQuantity" }, // 3835284198
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_GetQuantity>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_GetQuantity_Statics
UObject* (*const Z_Construct_UClass_USIK_GetQuantity_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetQuantity_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_GetQuantity_Statics::ClassParams = {
	&USIK_GetQuantity::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetQuantity_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_GetQuantity_Statics::Class_MetaDataParams)
};
void USIK_GetQuantity::StaticRegisterNativesUSIK_GetQuantity()
{
	UClass* Class = USIK_GetQuantity::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_GetQuantity_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_GetQuantity()
{
	if (!Z_Registration_Info_UClass_USIK_GetQuantity.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_GetQuantity.OuterSingleton, Z_Construct_UClass_USIK_GetQuantity_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_GetQuantity.OuterSingleton;
}
USIK_GetQuantity::USIK_GetQuantity(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_GetQuantity);
USIK_GetQuantity::~USIK_GetQuantity() {}
// ********** End Class USIK_GetQuantity ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Inventory_SIK_GetQuantity_h__Script_SteamWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_GetQuantity, USIK_GetQuantity::StaticClass, TEXT("USIK_GetQuantity"), &Z_Registration_Info_UClass_USIK_GetQuantity, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_GetQuantity), 4216976715U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Inventory_SIK_GetQuantity_h__Script_SteamWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Inventory_SIK_GetQuantity_h__Script_SteamWeb_1607848091{
	TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Inventory_SIK_GetQuantity_h__Script_SteamWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Inventory_SIK_GetQuantity_h__Script_SteamWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
