// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/Inventory/SIK_ModifyItems.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_ModifyItems() {}

// ********** Begin Cross Module References ********************************************************
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_ModifyItems();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_ModifyItems_NoRegister();
STEAMWEB_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_ModifyItemUpdate();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FSIK_ModifyItemUpdate *********************************************
struct Z_Construct_UScriptStruct_FSIK_ModifyItemUpdate_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSIK_ModifyItemUpdate); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSIK_ModifyItemUpdate); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Functions/Inventory/SIK_ModifyItems.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_itemid_MetaData[] = {
		{ "Category", "Steam Integration Kit|Web|Inventory" },
		{ "ModuleRelativePath", "Functions/Inventory/SIK_ModifyItems.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_property_name_MetaData[] = {
		{ "Category", "Steam Integration Kit|Web|Inventory" },
		{ "ModuleRelativePath", "Functions/Inventory/SIK_ModifyItems.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_property_value_string_MetaData[] = {
		{ "Category", "Steam Integration Kit|Web|Inventory" },
		{ "ModuleRelativePath", "Functions/Inventory/SIK_ModifyItems.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_property_value_bool_MetaData[] = {
		{ "Category", "Steam Integration Kit|Web|Inventory" },
		{ "ModuleRelativePath", "Functions/Inventory/SIK_ModifyItems.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_property_value_int_MetaData[] = {
		{ "Category", "Steam Integration Kit|Web|Inventory" },
		{ "ModuleRelativePath", "Functions/Inventory/SIK_ModifyItems.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_property_value_float_MetaData[] = {
		{ "Category", "Steam Integration Kit|Web|Inventory" },
		{ "ModuleRelativePath", "Functions/Inventory/SIK_ModifyItems.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_remove_property_MetaData[] = {
		{ "Category", "Steam Integration Kit|Web|Inventory" },
		{ "ModuleRelativePath", "Functions/Inventory/SIK_ModifyItems.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSIK_ModifyItemUpdate constinit property declarations *************
	static const UECodeGen_Private::FInt64PropertyParams NewProp_itemid;
	static const UECodeGen_Private::FStrPropertyParams NewProp_property_name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_property_value_string;
	static void NewProp_property_value_bool_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_property_value_bool;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_property_value_int;
	static const UECodeGen_Private::FStrPropertyParams NewProp_property_value_float;
	static void NewProp_remove_property_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_remove_property;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSIK_ModifyItemUpdate constinit property declarations ***************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSIK_ModifyItemUpdate>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSIK_ModifyItemUpdate_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSIK_ModifyItemUpdate;
class UScriptStruct* FSIK_ModifyItemUpdate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_ModifyItemUpdate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSIK_ModifyItemUpdate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSIK_ModifyItemUpdate, (UObject*)Z_Construct_UPackage__Script_SteamWeb(), TEXT("SIK_ModifyItemUpdate"));
	}
	return Z_Registration_Info_UScriptStruct_FSIK_ModifyItemUpdate.OuterSingleton;
	}

// ********** Begin ScriptStruct FSIK_ModifyItemUpdate Property Definitions ************************
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FSIK_ModifyItemUpdate_Statics::NewProp_itemid = { "itemid", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_ModifyItemUpdate, itemid), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_itemid_MetaData), NewProp_itemid_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSIK_ModifyItemUpdate_Statics::NewProp_property_name = { "property_name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_ModifyItemUpdate, property_name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_property_name_MetaData), NewProp_property_name_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSIK_ModifyItemUpdate_Statics::NewProp_property_value_string = { "property_value_string", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_ModifyItemUpdate, property_value_string), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_property_value_string_MetaData), NewProp_property_value_string_MetaData) };
void Z_Construct_UScriptStruct_FSIK_ModifyItemUpdate_Statics::NewProp_property_value_bool_SetBit(void* Obj)
{
	((FSIK_ModifyItemUpdate*)Obj)->property_value_bool = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSIK_ModifyItemUpdate_Statics::NewProp_property_value_bool = { "property_value_bool", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSIK_ModifyItemUpdate), &Z_Construct_UScriptStruct_FSIK_ModifyItemUpdate_Statics::NewProp_property_value_bool_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_property_value_bool_MetaData), NewProp_property_value_bool_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FSIK_ModifyItemUpdate_Statics::NewProp_property_value_int = { "property_value_int", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_ModifyItemUpdate, property_value_int), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_property_value_int_MetaData), NewProp_property_value_int_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSIK_ModifyItemUpdate_Statics::NewProp_property_value_float = { "property_value_float", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_ModifyItemUpdate, property_value_float), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_property_value_float_MetaData), NewProp_property_value_float_MetaData) };
void Z_Construct_UScriptStruct_FSIK_ModifyItemUpdate_Statics::NewProp_remove_property_SetBit(void* Obj)
{
	((FSIK_ModifyItemUpdate*)Obj)->remove_property = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSIK_ModifyItemUpdate_Statics::NewProp_remove_property = { "remove_property", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSIK_ModifyItemUpdate), &Z_Construct_UScriptStruct_FSIK_ModifyItemUpdate_Statics::NewProp_remove_property_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_remove_property_MetaData), NewProp_remove_property_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSIK_ModifyItemUpdate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_ModifyItemUpdate_Statics::NewProp_itemid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_ModifyItemUpdate_Statics::NewProp_property_name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_ModifyItemUpdate_Statics::NewProp_property_value_string,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_ModifyItemUpdate_Statics::NewProp_property_value_bool,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_ModifyItemUpdate_Statics::NewProp_property_value_int,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_ModifyItemUpdate_Statics::NewProp_property_value_float,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_ModifyItemUpdate_Statics::NewProp_remove_property,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_ModifyItemUpdate_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSIK_ModifyItemUpdate Property Definitions **************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSIK_ModifyItemUpdate_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
	nullptr,
	&NewStructOps,
	"SIK_ModifyItemUpdate",
	Z_Construct_UScriptStruct_FSIK_ModifyItemUpdate_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_ModifyItemUpdate_Statics::PropPointers),
	sizeof(FSIK_ModifyItemUpdate),
	alignof(FSIK_ModifyItemUpdate),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_ModifyItemUpdate_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSIK_ModifyItemUpdate_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSIK_ModifyItemUpdate()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_ModifyItemUpdate.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSIK_ModifyItemUpdate.InnerSingleton, Z_Construct_UScriptStruct_FSIK_ModifyItemUpdate_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSIK_ModifyItemUpdate.InnerSingleton);
}
// ********** End ScriptStruct FSIK_ModifyItemUpdate ***********************************************

// ********** Begin Class USIK_ModifyItems Function ModifyItems ************************************
struct Z_Construct_UFunction_USIK_ModifyItems_ModifyItems_Statics
{
	struct SIK_ModifyItems_eventModifyItems_Parms
	{
		FString Key;
		int32 AppId;
		FString InputJson;
		int64 SteamId;
		int32 Timestamp;
		TArray<FSIK_ModifyItemUpdate> Updates;
		USIK_ModifyItems* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|Inventory" },
		{ "Comment", "/*\n\x09*ModifyItems\n\x09POST https://partner.steam-api.com/IInventoryService/ModifyItems/v1/\n\x09Name\x09Type\x09Required\x09""Description\n\x09key\x09string\x09\xe2\x9c\x94\x09Steamworks Web API publisher authentication key.\n\x09""appid\x09uint32\x09\xe2\x9c\x94\x09\n\x09input_json\x09string\x09\xe2\x9c\x94\x09\n\x09steamid\x09uint64\x09\xe2\x9c\x94\x09The steamid of the user who owns the items. Must be specified in the input_json parameter.\n\x09timestamp\x09uint32\x09\xe2\x9c\x94\x09Unix timestamp of the request. An error will be returned if the items have been modified since this request time. Must be specified in the input_json parameter.\n\x09updates\x09message\x09\xe2\x9c\x94\x09The list of items and properties being modified. Must be specified in the input_json parameter.\n\n\x09Structure of the updates property:\n\x09Name\x09Type\x09Required\x09""Description\n\x09itemid\x09uint64\x09\xe2\x9c\x94\x09The id of the item being modified.\n\x09property_name\x09string\x09\xe2\x9c\x94\x09The name of the dynamic property being added/updated/removed.\n\x09property_value_string\x09string\x09\x09The string value of the property to set.\n\x09property_value_bool\x09""bool\x09\x09The boolean value of the property to set.\n\x09property_value_int\x09int64\x09\x09The 64 bit integer value of the property to set.\n\x09property_value_float\x09string\x09\x09The 32 bit float value of the property to set.\n\x09remove_property\x09""bool\x09\x09Set to true if the property should be removed.\n\n\x09Modify the dynamic properties on items for the given user. This call is rate-limited per user and currently only 100 items can be modified in one call.\n\x09*/" },
		{ "ModuleRelativePath", "Functions/Inventory/SIK_ModifyItems.h" },
		{ "ToolTip", "*ModifyItems\nPOST https://partner.steam-api.com/IInventoryService/ModifyItems/v1/\nName    Type    Required        Description\nkey     string  \xe2\x9c\x94       Steamworks Web API publisher authentication key.\nappid   uint32  \xe2\x9c\x94\ninput_json      string  \xe2\x9c\x94\nsteamid uint64  \xe2\x9c\x94       The steamid of the user who owns the items. Must be specified in the input_json parameter.\ntimestamp       uint32  \xe2\x9c\x94       Unix timestamp of the request. An error will be returned if the items have been modified since this request time. Must be specified in the input_json parameter.\nupdates message \xe2\x9c\x94       The list of items and properties being modified. Must be specified in the input_json parameter.\n\nStructure of the updates property:\nName    Type    Required        Description\nitemid  uint64  \xe2\x9c\x94       The id of the item being modified.\nproperty_name   string  \xe2\x9c\x94       The name of the dynamic property being added/updated/removed.\nproperty_value_string   string          The string value of the property to set.\nproperty_value_bool     bool            The boolean value of the property to set.\nproperty_value_int      int64           The 64 bit integer value of the property to set.\nproperty_value_float    string          The 32 bit float value of the property to set.\nremove_property bool            Set to true if the property should be removed.\n\nModify the dynamic properties on items for the given user. This call is rate-limited per user and currently only 100 items can be modified in one call." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputJson_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Timestamp_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Updates_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ModifyItems constinit property declarations ***************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InputJson;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Timestamp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Updates_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Updates;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ModifyItems constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ModifyItems Property Definitions **************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_ModifyItems_ModifyItems_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ModifyItems_eventModifyItems_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_ModifyItems_ModifyItems_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ModifyItems_eventModifyItems_Parms, AppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppId_MetaData), NewProp_AppId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_ModifyItems_ModifyItems_Statics::NewProp_InputJson = { "InputJson", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ModifyItems_eventModifyItems_Parms, InputJson), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputJson_MetaData), NewProp_InputJson_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_ModifyItems_ModifyItems_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ModifyItems_eventModifyItems_Parms, SteamId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamId_MetaData), NewProp_SteamId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_ModifyItems_ModifyItems_Statics::NewProp_Timestamp = { "Timestamp", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ModifyItems_eventModifyItems_Parms, Timestamp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Timestamp_MetaData), NewProp_Timestamp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_ModifyItems_ModifyItems_Statics::NewProp_Updates_Inner = { "Updates", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSIK_ModifyItemUpdate, METADATA_PARAMS(0, nullptr) }; // 1176613210
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_ModifyItems_ModifyItems_Statics::NewProp_Updates = { "Updates", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ModifyItems_eventModifyItems_Parms, Updates), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Updates_MetaData), NewProp_Updates_MetaData) }; // 1176613210
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_ModifyItems_ModifyItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ModifyItems_eventModifyItems_Parms, ReturnValue), Z_Construct_UClass_USIK_ModifyItems_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_ModifyItems_ModifyItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ModifyItems_ModifyItems_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ModifyItems_ModifyItems_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ModifyItems_ModifyItems_Statics::NewProp_InputJson,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ModifyItems_ModifyItems_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ModifyItems_ModifyItems_Statics::NewProp_Timestamp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ModifyItems_ModifyItems_Statics::NewProp_Updates_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ModifyItems_ModifyItems_Statics::NewProp_Updates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ModifyItems_ModifyItems_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_ModifyItems_ModifyItems_Statics::PropPointers) < 2048);
// ********** End Function ModifyItems Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_ModifyItems_ModifyItems_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_ModifyItems, nullptr, "ModifyItems", 	Z_Construct_UFunction_USIK_ModifyItems_ModifyItems_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_ModifyItems_ModifyItems_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_ModifyItems_ModifyItems_Statics::SIK_ModifyItems_eventModifyItems_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_ModifyItems_ModifyItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_ModifyItems_ModifyItems_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_ModifyItems_ModifyItems_Statics::SIK_ModifyItems_eventModifyItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_ModifyItems_ModifyItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_ModifyItems_ModifyItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_ModifyItems::execModifyItems)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_InputJson);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_SteamId);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Timestamp);
	P_GET_TARRAY_REF(FSIK_ModifyItemUpdate,Z_Param_Out_Updates);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_ModifyItems**)Z_Param__Result=USIK_ModifyItems::ModifyItems(Z_Param_Key,Z_Param_Out_AppId,Z_Param_InputJson,Z_Param_Out_SteamId,Z_Param_Out_Timestamp,Z_Param_Out_Updates);
	P_NATIVE_END;
}
// ********** End Class USIK_ModifyItems Function ModifyItems **************************************

// ********** Begin Class USIK_ModifyItems *********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_ModifyItems;
UClass* USIK_ModifyItems::GetPrivateStaticClass()
{
	using TClass = USIK_ModifyItems;
	if (!Z_Registration_Info_UClass_USIK_ModifyItems.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_ModifyItems"),
			Z_Registration_Info_UClass_USIK_ModifyItems.InnerSingleton,
			StaticRegisterNativesUSIK_ModifyItems,
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
	return Z_Registration_Info_UClass_USIK_ModifyItems.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_ModifyItems_NoRegister()
{
	return USIK_ModifyItems::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_ModifyItems_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Functions/Inventory/SIK_ModifyItems.h" },
		{ "ModuleRelativePath", "Functions/Inventory/SIK_ModifyItems.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_ModifyItems constinit property declarations *************************
// ********** End Class USIK_ModifyItems constinit property declarations ***************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ModifyItems"), .Pointer = &USIK_ModifyItems::execModifyItems },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_ModifyItems_ModifyItems, "ModifyItems" }, // 1101347682
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_ModifyItems>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_ModifyItems_Statics
UObject* (*const Z_Construct_UClass_USIK_ModifyItems_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_ModifyItems_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_ModifyItems_Statics::ClassParams = {
	&USIK_ModifyItems::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_ModifyItems_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_ModifyItems_Statics::Class_MetaDataParams)
};
void USIK_ModifyItems::StaticRegisterNativesUSIK_ModifyItems()
{
	UClass* Class = USIK_ModifyItems::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_ModifyItems_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_ModifyItems()
{
	if (!Z_Registration_Info_UClass_USIK_ModifyItems.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_ModifyItems.OuterSingleton, Z_Construct_UClass_USIK_ModifyItems_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_ModifyItems.OuterSingleton;
}
USIK_ModifyItems::USIK_ModifyItems(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_ModifyItems);
USIK_ModifyItems::~USIK_ModifyItems() {}
// ********** End Class USIK_ModifyItems ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Inventory_SIK_ModifyItems_h__Script_SteamWeb_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSIK_ModifyItemUpdate::StaticStruct, Z_Construct_UScriptStruct_FSIK_ModifyItemUpdate_Statics::NewStructOps, TEXT("SIK_ModifyItemUpdate"),&Z_Registration_Info_UScriptStruct_FSIK_ModifyItemUpdate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSIK_ModifyItemUpdate), 1176613210U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_ModifyItems, USIK_ModifyItems::StaticClass, TEXT("USIK_ModifyItems"), &Z_Registration_Info_UClass_USIK_ModifyItems, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_ModifyItems), 3682997971U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Inventory_SIK_ModifyItems_h__Script_SteamWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Inventory_SIK_ModifyItems_h__Script_SteamWeb_2390105229{
	TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Inventory_SIK_ModifyItems_h__Script_SteamWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Inventory_SIK_ModifyItems_h__Script_SteamWeb_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Inventory_SIK_ModifyItems_h__Script_SteamWeb_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Inventory_SIK_ModifyItems_h__Script_SteamWeb_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
