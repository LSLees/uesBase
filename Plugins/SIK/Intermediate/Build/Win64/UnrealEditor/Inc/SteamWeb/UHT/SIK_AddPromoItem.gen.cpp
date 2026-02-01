// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/Inventory/SIK_AddPromoItem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_AddPromoItem() {}

// ********** Begin Cross Module References ********************************************************
STEAMWEB_API UClass* Z_Construct_UClass_USIK_AddPromoItem();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_AddPromoItem_NoRegister();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_AddPromoItemOptional();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FSIK_AddPromoItemOptional *****************************************
struct Z_Construct_UScriptStruct_FSIK_AddPromoItemOptional_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSIK_AddPromoItemOptional); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSIK_AddPromoItemOptional); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Functions/Inventory/SIK_AddPromoItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNotify_MetaData[] = {
		{ "Category", "Steam Integration Kit|Web|Inventory" },
		{ "Comment", "//Should notify the user that the item was added to their Steam Inventory.\n" },
		{ "ModuleRelativePath", "Functions/Inventory/SIK_AddPromoItem.h" },
		{ "ToolTip", "Should notify the user that the item was added to their Steam Inventory." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestId_MetaData[] = {
		{ "Category", "Steam Integration Kit|Web|Inventory" },
		{ "Comment", "//Clients may provide a unique identifier for a request to perform at most once execution. When a requestid is resubmitted, it will not cause the work to be performed again; the response message will be the current state of items affected by the original successful execution.\n" },
		{ "ModuleRelativePath", "Functions/Inventory/SIK_AddPromoItem.h" },
		{ "ToolTip", "Clients may provide a unique identifier for a request to perform at most once execution. When a requestid is resubmitted, it will not cause the work to be performed again; the response message will be the current state of items affected by the original successful execution." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSIK_AddPromoItemOptional constinit property declarations *********
	static void NewProp_bNotify_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNotify;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_RequestId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSIK_AddPromoItemOptional constinit property declarations ***********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSIK_AddPromoItemOptional>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSIK_AddPromoItemOptional_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSIK_AddPromoItemOptional;
class UScriptStruct* FSIK_AddPromoItemOptional::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_AddPromoItemOptional.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSIK_AddPromoItemOptional.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSIK_AddPromoItemOptional, (UObject*)Z_Construct_UPackage__Script_SteamWeb(), TEXT("SIK_AddPromoItemOptional"));
	}
	return Z_Registration_Info_UScriptStruct_FSIK_AddPromoItemOptional.OuterSingleton;
	}

// ********** Begin ScriptStruct FSIK_AddPromoItemOptional Property Definitions ********************
void Z_Construct_UScriptStruct_FSIK_AddPromoItemOptional_Statics::NewProp_bNotify_SetBit(void* Obj)
{
	((FSIK_AddPromoItemOptional*)Obj)->bNotify = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSIK_AddPromoItemOptional_Statics::NewProp_bNotify = { "bNotify", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSIK_AddPromoItemOptional), &Z_Construct_UScriptStruct_FSIK_AddPromoItemOptional_Statics::NewProp_bNotify_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNotify_MetaData), NewProp_bNotify_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FSIK_AddPromoItemOptional_Statics::NewProp_RequestId = { "RequestId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_AddPromoItemOptional, RequestId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestId_MetaData), NewProp_RequestId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSIK_AddPromoItemOptional_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_AddPromoItemOptional_Statics::NewProp_bNotify,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_AddPromoItemOptional_Statics::NewProp_RequestId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_AddPromoItemOptional_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSIK_AddPromoItemOptional Property Definitions **********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSIK_AddPromoItemOptional_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
	nullptr,
	&NewStructOps,
	"SIK_AddPromoItemOptional",
	Z_Construct_UScriptStruct_FSIK_AddPromoItemOptional_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_AddPromoItemOptional_Statics::PropPointers),
	sizeof(FSIK_AddPromoItemOptional),
	alignof(FSIK_AddPromoItemOptional),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_AddPromoItemOptional_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSIK_AddPromoItemOptional_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSIK_AddPromoItemOptional()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_AddPromoItemOptional.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSIK_AddPromoItemOptional.InnerSingleton, Z_Construct_UScriptStruct_FSIK_AddPromoItemOptional_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSIK_AddPromoItemOptional.InnerSingleton);
}
// ********** End ScriptStruct FSIK_AddPromoItemOptional *******************************************

// ********** Begin Class USIK_AddPromoItem Function AddPromoItem **********************************
struct Z_Construct_UFunction_USIK_AddPromoItem_AddPromoItem_Statics
{
	struct SIK_AddPromoItem_eventAddPromoItem_Parms
	{
		FString Key;
		int32 AppId;
		int64 ItemDefId;
		int64 SteamId;
		FSIK_AddPromoItemOptional Optional;
		USIK_AddPromoItem* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|Inventory" },
		{ "Comment", "//Adds a promo item to a user's inventory. If called without the itemdefid parameter, checks for and grants available promo items for the given player.\n" },
		{ "ModuleRelativePath", "Functions/Inventory/SIK_AddPromoItem.h" },
		{ "ToolTip", "Adds a promo item to a user's inventory. If called without the itemdefid parameter, checks for and grants available promo items for the given player." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemDefId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddPromoItem constinit property declarations **************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_ItemDefId;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Optional;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddPromoItem constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddPromoItem Property Definitions *************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_AddPromoItem_AddPromoItem_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_AddPromoItem_eventAddPromoItem_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_AddPromoItem_AddPromoItem_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_AddPromoItem_eventAddPromoItem_Parms, AppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppId_MetaData), NewProp_AppId_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_AddPromoItem_AddPromoItem_Statics::NewProp_ItemDefId = { "ItemDefId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_AddPromoItem_eventAddPromoItem_Parms, ItemDefId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemDefId_MetaData), NewProp_ItemDefId_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_AddPromoItem_AddPromoItem_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_AddPromoItem_eventAddPromoItem_Parms, SteamId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamId_MetaData), NewProp_SteamId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_AddPromoItem_AddPromoItem_Statics::NewProp_Optional = { "Optional", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_AddPromoItem_eventAddPromoItem_Parms, Optional), Z_Construct_UScriptStruct_FSIK_AddPromoItemOptional, METADATA_PARAMS(0, nullptr) }; // 4134580251
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_AddPromoItem_AddPromoItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_AddPromoItem_eventAddPromoItem_Parms, ReturnValue), Z_Construct_UClass_USIK_AddPromoItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_AddPromoItem_AddPromoItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_AddPromoItem_AddPromoItem_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_AddPromoItem_AddPromoItem_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_AddPromoItem_AddPromoItem_Statics::NewProp_ItemDefId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_AddPromoItem_AddPromoItem_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_AddPromoItem_AddPromoItem_Statics::NewProp_Optional,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_AddPromoItem_AddPromoItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AddPromoItem_AddPromoItem_Statics::PropPointers) < 2048);
// ********** End Function AddPromoItem Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_AddPromoItem_AddPromoItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_AddPromoItem, nullptr, "AddPromoItem", 	Z_Construct_UFunction_USIK_AddPromoItem_AddPromoItem_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AddPromoItem_AddPromoItem_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_AddPromoItem_AddPromoItem_Statics::SIK_AddPromoItem_eventAddPromoItem_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AddPromoItem_AddPromoItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_AddPromoItem_AddPromoItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_AddPromoItem_AddPromoItem_Statics::SIK_AddPromoItem_eventAddPromoItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_AddPromoItem_AddPromoItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_AddPromoItem_AddPromoItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_AddPromoItem::execAddPromoItem)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppId);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_ItemDefId);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_SteamId);
	P_GET_STRUCT(FSIK_AddPromoItemOptional,Z_Param_Optional);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_AddPromoItem**)Z_Param__Result=USIK_AddPromoItem::AddPromoItem(Z_Param_Key,Z_Param_Out_AppId,Z_Param_Out_ItemDefId,Z_Param_Out_SteamId,Z_Param_Optional);
	P_NATIVE_END;
}
// ********** End Class USIK_AddPromoItem Function AddPromoItem ************************************

// ********** Begin Class USIK_AddPromoItem ********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_AddPromoItem;
UClass* USIK_AddPromoItem::GetPrivateStaticClass()
{
	using TClass = USIK_AddPromoItem;
	if (!Z_Registration_Info_UClass_USIK_AddPromoItem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_AddPromoItem"),
			Z_Registration_Info_UClass_USIK_AddPromoItem.InnerSingleton,
			StaticRegisterNativesUSIK_AddPromoItem,
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
	return Z_Registration_Info_UClass_USIK_AddPromoItem.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_AddPromoItem_NoRegister()
{
	return USIK_AddPromoItem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_AddPromoItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Functions/Inventory/SIK_AddPromoItem.h" },
		{ "ModuleRelativePath", "Functions/Inventory/SIK_AddPromoItem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_AddPromoItem constinit property declarations ************************
// ********** End Class USIK_AddPromoItem constinit property declarations **************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AddPromoItem"), .Pointer = &USIK_AddPromoItem::execAddPromoItem },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_AddPromoItem_AddPromoItem, "AddPromoItem" }, // 3951735685
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_AddPromoItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_AddPromoItem_Statics
UObject* (*const Z_Construct_UClass_USIK_AddPromoItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_AddPromoItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_AddPromoItem_Statics::ClassParams = {
	&USIK_AddPromoItem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_AddPromoItem_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_AddPromoItem_Statics::Class_MetaDataParams)
};
void USIK_AddPromoItem::StaticRegisterNativesUSIK_AddPromoItem()
{
	UClass* Class = USIK_AddPromoItem::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_AddPromoItem_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_AddPromoItem()
{
	if (!Z_Registration_Info_UClass_USIK_AddPromoItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_AddPromoItem.OuterSingleton, Z_Construct_UClass_USIK_AddPromoItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_AddPromoItem.OuterSingleton;
}
USIK_AddPromoItem::USIK_AddPromoItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_AddPromoItem);
USIK_AddPromoItem::~USIK_AddPromoItem() {}
// ********** End Class USIK_AddPromoItem **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Inventory_SIK_AddPromoItem_h__Script_SteamWeb_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSIK_AddPromoItemOptional::StaticStruct, Z_Construct_UScriptStruct_FSIK_AddPromoItemOptional_Statics::NewStructOps, TEXT("SIK_AddPromoItemOptional"),&Z_Registration_Info_UScriptStruct_FSIK_AddPromoItemOptional, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSIK_AddPromoItemOptional), 4134580251U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_AddPromoItem, USIK_AddPromoItem::StaticClass, TEXT("USIK_AddPromoItem"), &Z_Registration_Info_UClass_USIK_AddPromoItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_AddPromoItem), 4092311835U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Inventory_SIK_AddPromoItem_h__Script_SteamWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Inventory_SIK_AddPromoItem_h__Script_SteamWeb_3212738884{
	TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Inventory_SIK_AddPromoItem_h__Script_SteamWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Inventory_SIK_AddPromoItem_h__Script_SteamWeb_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Inventory_SIK_AddPromoItem_h__Script_SteamWeb_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Inventory_SIK_AddPromoItem_h__Script_SteamWeb_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
