// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/Inventory/SIK_ConsumeItem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_ConsumeItem() {}

// ********** Begin Cross Module References ********************************************************
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_ConsumeItem();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_ConsumeItem_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USIK_ConsumeItem Function ConsumeItem ************************************
struct Z_Construct_UFunction_USIK_ConsumeItem_ConsumeItem_Statics
{
	struct SIK_ConsumeItem_eventConsumeItem_Parms
	{
		FString Key;
		int32 AppId;
		int64 ItemId;
		FString Quantity;
		int64 SteamId;
		int64 RequestId;
		USIK_ConsumeItem* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|Inventory" },
		{ "Comment", "//Marks an item as wholly or partially consumed. This action cannot be reversed\n" },
		{ "ModuleRelativePath", "Functions/Inventory/SIK_ConsumeItem.h" },
		{ "ToolTip", "Marks an item as wholly or partially consumed. This action cannot be reversed" },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ConsumeItem constinit property declarations ***************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_ItemId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Quantity;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_RequestId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ConsumeItem constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ConsumeItem Property Definitions **************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_ConsumeItem_ConsumeItem_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ConsumeItem_eventConsumeItem_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_ConsumeItem_ConsumeItem_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ConsumeItem_eventConsumeItem_Parms, AppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppId_MetaData), NewProp_AppId_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_ConsumeItem_ConsumeItem_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ConsumeItem_eventConsumeItem_Parms, ItemId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemId_MetaData), NewProp_ItemId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_ConsumeItem_ConsumeItem_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ConsumeItem_eventConsumeItem_Parms, Quantity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quantity_MetaData), NewProp_Quantity_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_ConsumeItem_ConsumeItem_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ConsumeItem_eventConsumeItem_Parms, SteamId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamId_MetaData), NewProp_SteamId_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_ConsumeItem_ConsumeItem_Statics::NewProp_RequestId = { "RequestId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ConsumeItem_eventConsumeItem_Parms, RequestId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestId_MetaData), NewProp_RequestId_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_ConsumeItem_ConsumeItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ConsumeItem_eventConsumeItem_Parms, ReturnValue), Z_Construct_UClass_USIK_ConsumeItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_ConsumeItem_ConsumeItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ConsumeItem_ConsumeItem_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ConsumeItem_ConsumeItem_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ConsumeItem_ConsumeItem_Statics::NewProp_ItemId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ConsumeItem_ConsumeItem_Statics::NewProp_Quantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ConsumeItem_ConsumeItem_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ConsumeItem_ConsumeItem_Statics::NewProp_RequestId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ConsumeItem_ConsumeItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_ConsumeItem_ConsumeItem_Statics::PropPointers) < 2048);
// ********** End Function ConsumeItem Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_ConsumeItem_ConsumeItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_ConsumeItem, nullptr, "ConsumeItem", 	Z_Construct_UFunction_USIK_ConsumeItem_ConsumeItem_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_ConsumeItem_ConsumeItem_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_ConsumeItem_ConsumeItem_Statics::SIK_ConsumeItem_eventConsumeItem_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_ConsumeItem_ConsumeItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_ConsumeItem_ConsumeItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_ConsumeItem_ConsumeItem_Statics::SIK_ConsumeItem_eventConsumeItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_ConsumeItem_ConsumeItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_ConsumeItem_ConsumeItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_ConsumeItem::execConsumeItem)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppId);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_ItemId);
	P_GET_PROPERTY(FStrProperty,Z_Param_Quantity);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_SteamId);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_RequestId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_ConsumeItem**)Z_Param__Result=USIK_ConsumeItem::ConsumeItem(Z_Param_Key,Z_Param_Out_AppId,Z_Param_Out_ItemId,Z_Param_Quantity,Z_Param_Out_SteamId,Z_Param_Out_RequestId);
	P_NATIVE_END;
}
// ********** End Class USIK_ConsumeItem Function ConsumeItem **************************************

// ********** Begin Class USIK_ConsumeItem *********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_ConsumeItem;
UClass* USIK_ConsumeItem::GetPrivateStaticClass()
{
	using TClass = USIK_ConsumeItem;
	if (!Z_Registration_Info_UClass_USIK_ConsumeItem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_ConsumeItem"),
			Z_Registration_Info_UClass_USIK_ConsumeItem.InnerSingleton,
			StaticRegisterNativesUSIK_ConsumeItem,
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
	return Z_Registration_Info_UClass_USIK_ConsumeItem.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_ConsumeItem_NoRegister()
{
	return USIK_ConsumeItem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_ConsumeItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/Inventory/SIK_ConsumeItem.h" },
		{ "ModuleRelativePath", "Functions/Inventory/SIK_ConsumeItem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_ConsumeItem constinit property declarations *************************
// ********** End Class USIK_ConsumeItem constinit property declarations ***************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ConsumeItem"), .Pointer = &USIK_ConsumeItem::execConsumeItem },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_ConsumeItem_ConsumeItem, "ConsumeItem" }, // 3181802562
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_ConsumeItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_ConsumeItem_Statics
UObject* (*const Z_Construct_UClass_USIK_ConsumeItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_ConsumeItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_ConsumeItem_Statics::ClassParams = {
	&USIK_ConsumeItem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_ConsumeItem_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_ConsumeItem_Statics::Class_MetaDataParams)
};
void USIK_ConsumeItem::StaticRegisterNativesUSIK_ConsumeItem()
{
	UClass* Class = USIK_ConsumeItem::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_ConsumeItem_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_ConsumeItem()
{
	if (!Z_Registration_Info_UClass_USIK_ConsumeItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_ConsumeItem.OuterSingleton, Z_Construct_UClass_USIK_ConsumeItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_ConsumeItem.OuterSingleton;
}
USIK_ConsumeItem::USIK_ConsumeItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_ConsumeItem);
USIK_ConsumeItem::~USIK_ConsumeItem() {}
// ********** End Class USIK_ConsumeItem ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Inventory_SIK_ConsumeItem_h__Script_SteamWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_ConsumeItem, USIK_ConsumeItem::StaticClass, TEXT("USIK_ConsumeItem"), &Z_Registration_Info_UClass_USIK_ConsumeItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_ConsumeItem), 859572770U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Inventory_SIK_ConsumeItem_h__Script_SteamWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Inventory_SIK_ConsumeItem_h__Script_SteamWeb_1884632768{
	TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Inventory_SIK_ConsumeItem_h__Script_SteamWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Inventory_SIK_ConsumeItem_h__Script_SteamWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
