// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/Inventory/SIK_ExchangeItem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_ExchangeItem() {}

// ********** Begin Cross Module References ********************************************************
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_ExchangeItem();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_ExchangeItem_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USIK_ExchangeItem Function ExchangeItem **********************************
struct Z_Construct_UFunction_USIK_ExchangeItem_ExchangeItem_Statics
{
	struct SIK_ExchangeItem_eventExchangeItem_Parms
	{
		FString Key;
		int32 AppId;
		int64 SteamId;
		TArray<int64> MaterialsItemId;
		TArray<int32> MaterialsQuantity;
		int64 OutputItemDefId;
		USIK_ExchangeItem* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|Inventory" },
		{ "Comment", "/*\n\x09*ExchangeItem\n\x09POST https://partner.steam-api.com/IInventoryService/ExchangeItem/v1/\n\x09Name\x09Type\x09Required\x09""Description\n\x09key\x09string\x09\xe2\x9c\x94\x09Steamworks Web API publisher authentication key.\n\x09""appid\x09uint32\x09\xe2\x9c\x94\x09The ID of the application associated with the item.\n\x09steamid\x09uint64\x09\xe2\x9c\x94\x09SteamID of the player that owns the items.\n\x09materialsitemid\x09uint64\x09\xe2\x9c\x94\x09The unique ID an item in the player's inventory to be converted to the target item type. This should be provided as materialsitemid[0], materialsitemid[1], etc.\n\x09materialsquantity\x09uint32\x09\xe2\x9c\x94\x09The quantity of the matching item that should be used in this recipe. This array must be the same length as materialsitemid.\n\x09outputitemdefid\x09uint64\x09\xe2\x9c\x94\x09The ItemDef of the item to be created.\n\n\x09""ExchangeItem is used for crafting - converting items using a predefined recipe. A successful exchange destroys the set of items required by the crafting recipe, and adds a new instance of the target itemdef to the player's inventory.\n\n\x09The target item definition must have one or more crafting recipes declared in the exchange attribute. Recipes declare the number and type of items required to create the target item. If the set of items provided in the ExchangeItems call does not satisfy any recipe, the call fails and no changes are made to the inventory.\n\n\x09See the Inventory Service Schema documentation for more detail on crafting recipes.\n\n\x09The crafting operation will take trade and market restrictions into account; the created item will have the latest trade restriction of any item used to create it.\n\n\x09If successful, this call returns an encoded JSON blob that lists the items that were changed by this call - the consumed items and the newly created one.\n\x09NOTE: Never distribute your Steam API key with your game. This API must be called from a secure server, and cannot be used directly by clients.\n\n\x09""A client SDK version of this call is also available: ISteamInventory::ExchangeItems\n\x09*/" },
		{ "ModuleRelativePath", "Functions/Inventory/SIK_ExchangeItem.h" },
		{ "ToolTip", "*ExchangeItem\nPOST https://partner.steam-api.com/IInventoryService/ExchangeItem/v1/\nName    Type    Required        Description\nkey     string  \xe2\x9c\x94       Steamworks Web API publisher authentication key.\nappid   uint32  \xe2\x9c\x94       The ID of the application associated with the item.\nsteamid uint64  \xe2\x9c\x94       SteamID of the player that owns the items.\nmaterialsitemid uint64  \xe2\x9c\x94       The unique ID an item in the player's inventory to be converted to the target item type. This should be provided as materialsitemid[0], materialsitemid[1], etc.\nmaterialsquantity       uint32  \xe2\x9c\x94       The quantity of the matching item that should be used in this recipe. This array must be the same length as materialsitemid.\noutputitemdefid uint64  \xe2\x9c\x94       The ItemDef of the item to be created.\n\nExchangeItem is used for crafting - converting items using a predefined recipe. A successful exchange destroys the set of items required by the crafting recipe, and adds a new instance of the target itemdef to the player's inventory.\n\nThe target item definition must have one or more crafting recipes declared in the exchange attribute. Recipes declare the number and type of items required to create the target item. If the set of items provided in the ExchangeItems call does not satisfy any recipe, the call fails and no changes are made to the inventory.\n\nSee the Inventory Service Schema documentation for more detail on crafting recipes.\n\nThe crafting operation will take trade and market restrictions into account; the created item will have the latest trade restriction of any item used to create it.\n\nIf successful, this call returns an encoded JSON blob that lists the items that were changed by this call - the consumed items and the newly created one.\nNOTE: Never distribute your Steam API key with your game. This API must be called from a secure server, and cannot be used directly by clients.\n\nA client SDK version of this call is also available: ISteamInventory::ExchangeItems" },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialsItemId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialsQuantity_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputItemDefId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ExchangeItem constinit property declarations **************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_MaterialsItemId_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialsItemId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaterialsQuantity_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialsQuantity;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_OutputItemDefId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ExchangeItem constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ExchangeItem Property Definitions *************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_ExchangeItem_ExchangeItem_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ExchangeItem_eventExchangeItem_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_ExchangeItem_ExchangeItem_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ExchangeItem_eventExchangeItem_Parms, AppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppId_MetaData), NewProp_AppId_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_ExchangeItem_ExchangeItem_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ExchangeItem_eventExchangeItem_Parms, SteamId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamId_MetaData), NewProp_SteamId_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_ExchangeItem_ExchangeItem_Statics::NewProp_MaterialsItemId_Inner = { "MaterialsItemId", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_ExchangeItem_ExchangeItem_Statics::NewProp_MaterialsItemId = { "MaterialsItemId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ExchangeItem_eventExchangeItem_Parms, MaterialsItemId), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialsItemId_MetaData), NewProp_MaterialsItemId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_ExchangeItem_ExchangeItem_Statics::NewProp_MaterialsQuantity_Inner = { "MaterialsQuantity", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_ExchangeItem_ExchangeItem_Statics::NewProp_MaterialsQuantity = { "MaterialsQuantity", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ExchangeItem_eventExchangeItem_Parms, MaterialsQuantity), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialsQuantity_MetaData), NewProp_MaterialsQuantity_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_ExchangeItem_ExchangeItem_Statics::NewProp_OutputItemDefId = { "OutputItemDefId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ExchangeItem_eventExchangeItem_Parms, OutputItemDefId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputItemDefId_MetaData), NewProp_OutputItemDefId_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_ExchangeItem_ExchangeItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ExchangeItem_eventExchangeItem_Parms, ReturnValue), Z_Construct_UClass_USIK_ExchangeItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_ExchangeItem_ExchangeItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ExchangeItem_ExchangeItem_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ExchangeItem_ExchangeItem_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ExchangeItem_ExchangeItem_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ExchangeItem_ExchangeItem_Statics::NewProp_MaterialsItemId_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ExchangeItem_ExchangeItem_Statics::NewProp_MaterialsItemId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ExchangeItem_ExchangeItem_Statics::NewProp_MaterialsQuantity_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ExchangeItem_ExchangeItem_Statics::NewProp_MaterialsQuantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ExchangeItem_ExchangeItem_Statics::NewProp_OutputItemDefId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ExchangeItem_ExchangeItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_ExchangeItem_ExchangeItem_Statics::PropPointers) < 2048);
// ********** End Function ExchangeItem Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_ExchangeItem_ExchangeItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_ExchangeItem, nullptr, "ExchangeItem", 	Z_Construct_UFunction_USIK_ExchangeItem_ExchangeItem_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_ExchangeItem_ExchangeItem_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_ExchangeItem_ExchangeItem_Statics::SIK_ExchangeItem_eventExchangeItem_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_ExchangeItem_ExchangeItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_ExchangeItem_ExchangeItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_ExchangeItem_ExchangeItem_Statics::SIK_ExchangeItem_eventExchangeItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_ExchangeItem_ExchangeItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_ExchangeItem_ExchangeItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_ExchangeItem::execExchangeItem)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppId);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_SteamId);
	P_GET_TARRAY_REF(int64,Z_Param_Out_MaterialsItemId);
	P_GET_TARRAY_REF(int32,Z_Param_Out_MaterialsQuantity);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_OutputItemDefId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_ExchangeItem**)Z_Param__Result=USIK_ExchangeItem::ExchangeItem(Z_Param_Key,Z_Param_Out_AppId,Z_Param_Out_SteamId,Z_Param_Out_MaterialsItemId,Z_Param_Out_MaterialsQuantity,Z_Param_Out_OutputItemDefId);
	P_NATIVE_END;
}
// ********** End Class USIK_ExchangeItem Function ExchangeItem ************************************

// ********** Begin Class USIK_ExchangeItem ********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_ExchangeItem;
UClass* USIK_ExchangeItem::GetPrivateStaticClass()
{
	using TClass = USIK_ExchangeItem;
	if (!Z_Registration_Info_UClass_USIK_ExchangeItem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_ExchangeItem"),
			Z_Registration_Info_UClass_USIK_ExchangeItem.InnerSingleton,
			StaticRegisterNativesUSIK_ExchangeItem,
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
	return Z_Registration_Info_UClass_USIK_ExchangeItem.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_ExchangeItem_NoRegister()
{
	return USIK_ExchangeItem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_ExchangeItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/Inventory/SIK_ExchangeItem.h" },
		{ "ModuleRelativePath", "Functions/Inventory/SIK_ExchangeItem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_ExchangeItem constinit property declarations ************************
// ********** End Class USIK_ExchangeItem constinit property declarations **************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ExchangeItem"), .Pointer = &USIK_ExchangeItem::execExchangeItem },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_ExchangeItem_ExchangeItem, "ExchangeItem" }, // 1457454524
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_ExchangeItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_ExchangeItem_Statics
UObject* (*const Z_Construct_UClass_USIK_ExchangeItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_ExchangeItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_ExchangeItem_Statics::ClassParams = {
	&USIK_ExchangeItem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_ExchangeItem_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_ExchangeItem_Statics::Class_MetaDataParams)
};
void USIK_ExchangeItem::StaticRegisterNativesUSIK_ExchangeItem()
{
	UClass* Class = USIK_ExchangeItem::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_ExchangeItem_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_ExchangeItem()
{
	if (!Z_Registration_Info_UClass_USIK_ExchangeItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_ExchangeItem.OuterSingleton, Z_Construct_UClass_USIK_ExchangeItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_ExchangeItem.OuterSingleton;
}
USIK_ExchangeItem::USIK_ExchangeItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_ExchangeItem);
USIK_ExchangeItem::~USIK_ExchangeItem() {}
// ********** End Class USIK_ExchangeItem **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Inventory_SIK_ExchangeItem_h__Script_SteamWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_ExchangeItem, USIK_ExchangeItem::StaticClass, TEXT("USIK_ExchangeItem"), &Z_Registration_Info_UClass_USIK_ExchangeItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_ExchangeItem), 1665257588U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Inventory_SIK_ExchangeItem_h__Script_SteamWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Inventory_SIK_ExchangeItem_h__Script_SteamWeb_2576594989{
	TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Inventory_SIK_ExchangeItem_h__Script_SteamWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Inventory_SIK_ExchangeItem_h__Script_SteamWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
