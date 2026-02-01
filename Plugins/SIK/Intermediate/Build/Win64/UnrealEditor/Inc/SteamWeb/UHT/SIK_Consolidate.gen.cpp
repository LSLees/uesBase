// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/Inventory/SIK_Consolidate.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_Consolidate() {}

// ********** Begin Cross Module References ********************************************************
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_Consolidate();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_Consolidate_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USIK_Consolidate Function Consolidate ************************************
struct Z_Construct_UFunction_USIK_Consolidate_Consolidate_Statics
{
	struct SIK_Consolidate_eventConsolidate_Parms
	{
		FString Key;
		int32 AppId;
		int64 SteamId;
		TArray<int64> ItemDefIds;
		bool Force;
		USIK_Consolidate* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|Inventory" },
		{ "Comment", "/*Consolidate\n\x09POST https://partner.steam-api.com/IInventoryService/Consolidate/v1/\n\x09Name\x09Type\x09Required\x09""Description\n\x09key\x09string\x09\xe2\x9c\x94\x09Steamworks Web API publisher authentication key.\n\x09""appid\x09uint32\x09\xe2\x9c\x94\x09\n\x09steamid\x09uint64\x09\xe2\x9c\x94\x09\n\x09itemdefid\x09uint64 array\x09\xe2\x9c\x94\x09\n\x09""force\x09""bool\x09\x09\n\n\x09""Consolidate items of the given type within an user's inventory.\n\n\x09Whenever items are combined into a stack, the resulting stack takes the market and trade restriction values of the most-restricted item. The Consolidate action ignores any item with an active market or trade restriction, unless 'force' is set to true.\n\n\x09NOTE: This call requires a publisher API key to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!*/" },
		{ "ModuleRelativePath", "Functions/Inventory/SIK_Consolidate.h" },
		{ "ToolTip", "Consolidate\n       POST https://partner.steam-api.com/IInventoryService/Consolidate/v1/\n       Name    Type    Required        Description\n       key     string  \xe2\x9c\x94       Steamworks Web API publisher authentication key.\n       appid   uint32  \xe2\x9c\x94\n       steamid uint64  \xe2\x9c\x94\n       itemdefid       uint64 array    \xe2\x9c\x94\n       force   bool\n\n       Consolidate items of the given type within an user's inventory.\n\n       Whenever items are combined into a stack, the resulting stack takes the market and trade restriction values of the most-restricted item. The Consolidate action ignores any item with an active market or trade restriction, unless 'force' is set to true.\n\n       NOTE: This call requires a publisher API key to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!" },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemDefIds_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Force_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function Consolidate constinit property declarations ***************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_ItemDefIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemDefIds;
	static void NewProp_Force_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Force;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Consolidate constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Consolidate Property Definitions **************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_Consolidate_Consolidate_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_Consolidate_eventConsolidate_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_Consolidate_Consolidate_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_Consolidate_eventConsolidate_Parms, AppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppId_MetaData), NewProp_AppId_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_Consolidate_Consolidate_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_Consolidate_eventConsolidate_Parms, SteamId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamId_MetaData), NewProp_SteamId_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_Consolidate_Consolidate_Statics::NewProp_ItemDefIds_Inner = { "ItemDefIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_Consolidate_Consolidate_Statics::NewProp_ItemDefIds = { "ItemDefIds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_Consolidate_eventConsolidate_Parms, ItemDefIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemDefIds_MetaData), NewProp_ItemDefIds_MetaData) };
void Z_Construct_UFunction_USIK_Consolidate_Consolidate_Statics::NewProp_Force_SetBit(void* Obj)
{
	((SIK_Consolidate_eventConsolidate_Parms*)Obj)->Force = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_Consolidate_Consolidate_Statics::NewProp_Force = { "Force", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_Consolidate_eventConsolidate_Parms), &Z_Construct_UFunction_USIK_Consolidate_Consolidate_Statics::NewProp_Force_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Force_MetaData), NewProp_Force_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_Consolidate_Consolidate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_Consolidate_eventConsolidate_Parms, ReturnValue), Z_Construct_UClass_USIK_Consolidate_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_Consolidate_Consolidate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_Consolidate_Consolidate_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_Consolidate_Consolidate_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_Consolidate_Consolidate_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_Consolidate_Consolidate_Statics::NewProp_ItemDefIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_Consolidate_Consolidate_Statics::NewProp_ItemDefIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_Consolidate_Consolidate_Statics::NewProp_Force,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_Consolidate_Consolidate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_Consolidate_Consolidate_Statics::PropPointers) < 2048);
// ********** End Function Consolidate Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_Consolidate_Consolidate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_Consolidate, nullptr, "Consolidate", 	Z_Construct_UFunction_USIK_Consolidate_Consolidate_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_Consolidate_Consolidate_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_Consolidate_Consolidate_Statics::SIK_Consolidate_eventConsolidate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_Consolidate_Consolidate_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_Consolidate_Consolidate_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_Consolidate_Consolidate_Statics::SIK_Consolidate_eventConsolidate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_Consolidate_Consolidate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_Consolidate_Consolidate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_Consolidate::execConsolidate)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppId);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_SteamId);
	P_GET_TARRAY_REF(int64,Z_Param_Out_ItemDefIds);
	P_GET_UBOOL_REF(Z_Param_Out_Force);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_Consolidate**)Z_Param__Result=USIK_Consolidate::Consolidate(Z_Param_Key,Z_Param_Out_AppId,Z_Param_Out_SteamId,Z_Param_Out_ItemDefIds,Z_Param_Out_Force);
	P_NATIVE_END;
}
// ********** End Class USIK_Consolidate Function Consolidate **************************************

// ********** Begin Class USIK_Consolidate *********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_Consolidate;
UClass* USIK_Consolidate::GetPrivateStaticClass()
{
	using TClass = USIK_Consolidate;
	if (!Z_Registration_Info_UClass_USIK_Consolidate.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_Consolidate"),
			Z_Registration_Info_UClass_USIK_Consolidate.InnerSingleton,
			StaticRegisterNativesUSIK_Consolidate,
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
	return Z_Registration_Info_UClass_USIK_Consolidate.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_Consolidate_NoRegister()
{
	return USIK_Consolidate::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_Consolidate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/Inventory/SIK_Consolidate.h" },
		{ "ModuleRelativePath", "Functions/Inventory/SIK_Consolidate.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_Consolidate constinit property declarations *************************
// ********** End Class USIK_Consolidate constinit property declarations ***************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("Consolidate"), .Pointer = &USIK_Consolidate::execConsolidate },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_Consolidate_Consolidate, "Consolidate" }, // 3702375701
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_Consolidate>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_Consolidate_Statics
UObject* (*const Z_Construct_UClass_USIK_Consolidate_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_Consolidate_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_Consolidate_Statics::ClassParams = {
	&USIK_Consolidate::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_Consolidate_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_Consolidate_Statics::Class_MetaDataParams)
};
void USIK_Consolidate::StaticRegisterNativesUSIK_Consolidate()
{
	UClass* Class = USIK_Consolidate::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_Consolidate_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_Consolidate()
{
	if (!Z_Registration_Info_UClass_USIK_Consolidate.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_Consolidate.OuterSingleton, Z_Construct_UClass_USIK_Consolidate_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_Consolidate.OuterSingleton;
}
USIK_Consolidate::USIK_Consolidate(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_Consolidate);
USIK_Consolidate::~USIK_Consolidate() {}
// ********** End Class USIK_Consolidate ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Inventory_SIK_Consolidate_h__Script_SteamWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_Consolidate, USIK_Consolidate::StaticClass, TEXT("USIK_Consolidate"), &Z_Registration_Info_UClass_USIK_Consolidate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_Consolidate), 3973857823U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Inventory_SIK_Consolidate_h__Script_SteamWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Inventory_SIK_Consolidate_h__Script_SteamWeb_2081605498{
	TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Inventory_SIK_Consolidate_h__Script_SteamWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Inventory_SIK_Consolidate_h__Script_SteamWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
