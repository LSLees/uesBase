// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/Inventory/SIK_InventoryLibrary.h"
#include "SIK_SharedFile.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_InventoryLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_InventoryLibrary();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_InventoryLibrary_NoRegister();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_SteamId();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_SteamInventoryResult();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_SteamInventoryUpdateHandle();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_SteamItemDef();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_SteamItemDetails();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_SteamItemInstanceID();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USIK_InventoryLibrary Function AddPromoItem ******************************
struct Z_Construct_UFunction_USIK_InventoryLibrary_AddPromoItem_Statics
{
	struct SIK_InventoryLibrary_eventAddPromoItem_Parms
	{
		FSIK_SteamInventoryResult InventoryResult;
		FSIK_SteamItemDef ItemDef;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Inventory" },
		{ "Comment", "/*\n\x09""Adds a single promotional item to the inventory.\n\x09@param InventoryResult - The result handle.\n\x09@param ItemDef - The definition of the item to add.\n\x09@return - true if successful, false otherwise.\n\x09*/" },
		{ "ModuleRelativePath", "Functions/Inventory/SIK_InventoryLibrary.h" },
		{ "ToolTip", "Adds a single promotional item to the inventory.\n@param InventoryResult - The result handle.\n@param ItemDef - The definition of the item to add.\n@return - true if successful, false otherwise." },
	};
#endif // WITH_METADATA

// ********** Begin Function AddPromoItem constinit property declarations **************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_InventoryResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemDef;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddPromoItem constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddPromoItem Property Definitions *************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_AddPromoItem_Statics::NewProp_InventoryResult = { "InventoryResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InventoryLibrary_eventAddPromoItem_Parms, InventoryResult), Z_Construct_UScriptStruct_FSIK_SteamInventoryResult, METADATA_PARAMS(0, nullptr) }; // 959336186
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_AddPromoItem_Statics::NewProp_ItemDef = { "ItemDef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InventoryLibrary_eventAddPromoItem_Parms, ItemDef), Z_Construct_UScriptStruct_FSIK_SteamItemDef, METADATA_PARAMS(0, nullptr) }; // 2053655220
void Z_Construct_UFunction_USIK_InventoryLibrary_AddPromoItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_InventoryLibrary_eventAddPromoItem_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_AddPromoItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_InventoryLibrary_eventAddPromoItem_Parms), &Z_Construct_UFunction_USIK_InventoryLibrary_AddPromoItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_InventoryLibrary_AddPromoItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_AddPromoItem_Statics::NewProp_InventoryResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_AddPromoItem_Statics::NewProp_ItemDef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_AddPromoItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InventoryLibrary_AddPromoItem_Statics::PropPointers) < 2048);
// ********** End Function AddPromoItem Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_InventoryLibrary_AddPromoItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_InventoryLibrary, nullptr, "AddPromoItem", 	Z_Construct_UFunction_USIK_InventoryLibrary_AddPromoItem_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InventoryLibrary_AddPromoItem_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_InventoryLibrary_AddPromoItem_Statics::SIK_InventoryLibrary_eventAddPromoItem_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InventoryLibrary_AddPromoItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_InventoryLibrary_AddPromoItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_InventoryLibrary_AddPromoItem_Statics::SIK_InventoryLibrary_eventAddPromoItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_InventoryLibrary_AddPromoItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_InventoryLibrary_AddPromoItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_InventoryLibrary::execAddPromoItem)
{
	P_GET_STRUCT_REF(FSIK_SteamInventoryResult,Z_Param_Out_InventoryResult);
	P_GET_STRUCT(FSIK_SteamItemDef,Z_Param_ItemDef);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_InventoryLibrary::AddPromoItem(Z_Param_Out_InventoryResult,Z_Param_ItemDef);
	P_NATIVE_END;
}
// ********** End Class USIK_InventoryLibrary Function AddPromoItem ********************************

// ********** Begin Class USIK_InventoryLibrary Function AddPromoItems *****************************
struct Z_Construct_UFunction_USIK_InventoryLibrary_AddPromoItems_Statics
{
	struct SIK_InventoryLibrary_eventAddPromoItems_Parms
	{
		FSIK_SteamInventoryResult InventoryResult;
		TArray<FSIK_SteamItemDef> ItemDefs;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Inventory" },
		{ "Comment", "/*\n\x09""Adds multiple promotional items to the inventory.\n\x09@param InventoryResult - The result handle.\n\x09@param ItemDefs - The definitions of the items to add.\n\x09@return - true if successful, false otherwise.\n\x09*/" },
		{ "ModuleRelativePath", "Functions/Inventory/SIK_InventoryLibrary.h" },
		{ "ToolTip", "Adds multiple promotional items to the inventory.\n@param InventoryResult - The result handle.\n@param ItemDefs - The definitions of the items to add.\n@return - true if successful, false otherwise." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemDefs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddPromoItems constinit property declarations *************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_InventoryResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemDefs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemDefs;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddPromoItems constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddPromoItems Property Definitions ************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_AddPromoItems_Statics::NewProp_InventoryResult = { "InventoryResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InventoryLibrary_eventAddPromoItems_Parms, InventoryResult), Z_Construct_UScriptStruct_FSIK_SteamInventoryResult, METADATA_PARAMS(0, nullptr) }; // 959336186
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_AddPromoItems_Statics::NewProp_ItemDefs_Inner = { "ItemDefs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSIK_SteamItemDef, METADATA_PARAMS(0, nullptr) }; // 2053655220
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_AddPromoItems_Statics::NewProp_ItemDefs = { "ItemDefs", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InventoryLibrary_eventAddPromoItems_Parms, ItemDefs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemDefs_MetaData), NewProp_ItemDefs_MetaData) }; // 2053655220
void Z_Construct_UFunction_USIK_InventoryLibrary_AddPromoItems_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_InventoryLibrary_eventAddPromoItems_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_AddPromoItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_InventoryLibrary_eventAddPromoItems_Parms), &Z_Construct_UFunction_USIK_InventoryLibrary_AddPromoItems_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_InventoryLibrary_AddPromoItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_AddPromoItems_Statics::NewProp_InventoryResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_AddPromoItems_Statics::NewProp_ItemDefs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_AddPromoItems_Statics::NewProp_ItemDefs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_AddPromoItems_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InventoryLibrary_AddPromoItems_Statics::PropPointers) < 2048);
// ********** End Function AddPromoItems Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_InventoryLibrary_AddPromoItems_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_InventoryLibrary, nullptr, "AddPromoItems", 	Z_Construct_UFunction_USIK_InventoryLibrary_AddPromoItems_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InventoryLibrary_AddPromoItems_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_InventoryLibrary_AddPromoItems_Statics::SIK_InventoryLibrary_eventAddPromoItems_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InventoryLibrary_AddPromoItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_InventoryLibrary_AddPromoItems_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_InventoryLibrary_AddPromoItems_Statics::SIK_InventoryLibrary_eventAddPromoItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_InventoryLibrary_AddPromoItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_InventoryLibrary_AddPromoItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_InventoryLibrary::execAddPromoItems)
{
	P_GET_STRUCT_REF(FSIK_SteamInventoryResult,Z_Param_Out_InventoryResult);
	P_GET_TARRAY_REF(FSIK_SteamItemDef,Z_Param_Out_ItemDefs);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_InventoryLibrary::AddPromoItems(Z_Param_Out_InventoryResult,Z_Param_Out_ItemDefs);
	P_NATIVE_END;
}
// ********** End Class USIK_InventoryLibrary Function AddPromoItems *******************************

// ********** Begin Class USIK_InventoryLibrary Function CheckResultSteamID ************************
struct Z_Construct_UFunction_USIK_InventoryLibrary_CheckResultSteamID_Statics
{
	struct SIK_InventoryLibrary_eventCheckResultSteamID_Parms
	{
		FSIK_SteamInventoryResult InventoryResult;
		FSIK_SteamId SteamID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Inventory" },
		{ "Comment", "/*\n\x09""Checks if the result is associated with the specified Steam ID.\n\x09@param InventoryResult - The result handle.\n\x09@param SteamID - The Steam ID to check against.\n\x09@return - true if the result is associated with the Steam ID, false otherwise.\n\x09*/" },
		{ "ModuleRelativePath", "Functions/Inventory/SIK_InventoryLibrary.h" },
		{ "ToolTip", "Checks if the result is associated with the specified Steam ID.\n@param InventoryResult - The result handle.\n@param SteamID - The Steam ID to check against.\n@return - true if the result is associated with the Steam ID, false otherwise." },
	};
#endif // WITH_METADATA

// ********** Begin Function CheckResultSteamID constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_InventoryResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CheckResultSteamID constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CheckResultSteamID Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_CheckResultSteamID_Statics::NewProp_InventoryResult = { "InventoryResult", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InventoryLibrary_eventCheckResultSteamID_Parms, InventoryResult), Z_Construct_UScriptStruct_FSIK_SteamInventoryResult, METADATA_PARAMS(0, nullptr) }; // 959336186
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_CheckResultSteamID_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InventoryLibrary_eventCheckResultSteamID_Parms, SteamID), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
void Z_Construct_UFunction_USIK_InventoryLibrary_CheckResultSteamID_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_InventoryLibrary_eventCheckResultSteamID_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_CheckResultSteamID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_InventoryLibrary_eventCheckResultSteamID_Parms), &Z_Construct_UFunction_USIK_InventoryLibrary_CheckResultSteamID_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_InventoryLibrary_CheckResultSteamID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_CheckResultSteamID_Statics::NewProp_InventoryResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_CheckResultSteamID_Statics::NewProp_SteamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_CheckResultSteamID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InventoryLibrary_CheckResultSteamID_Statics::PropPointers) < 2048);
// ********** End Function CheckResultSteamID Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_InventoryLibrary_CheckResultSteamID_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_InventoryLibrary, nullptr, "CheckResultSteamID", 	Z_Construct_UFunction_USIK_InventoryLibrary_CheckResultSteamID_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InventoryLibrary_CheckResultSteamID_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_InventoryLibrary_CheckResultSteamID_Statics::SIK_InventoryLibrary_eventCheckResultSteamID_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InventoryLibrary_CheckResultSteamID_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_InventoryLibrary_CheckResultSteamID_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_InventoryLibrary_CheckResultSteamID_Statics::SIK_InventoryLibrary_eventCheckResultSteamID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_InventoryLibrary_CheckResultSteamID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_InventoryLibrary_CheckResultSteamID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_InventoryLibrary::execCheckResultSteamID)
{
	P_GET_STRUCT(FSIK_SteamInventoryResult,Z_Param_InventoryResult);
	P_GET_STRUCT(FSIK_SteamId,Z_Param_SteamID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_InventoryLibrary::CheckResultSteamID(Z_Param_InventoryResult,Z_Param_SteamID);
	P_NATIVE_END;
}
// ********** End Class USIK_InventoryLibrary Function CheckResultSteamID **************************

// ********** Begin Class USIK_InventoryLibrary Function ConsumeItem *******************************
struct Z_Construct_UFunction_USIK_InventoryLibrary_ConsumeItem_Statics
{
	struct SIK_InventoryLibrary_eventConsumeItem_Parms
	{
		FSIK_SteamInventoryResult InventoryResult;
		FSIK_SteamItemInstanceID ItemInstance;
		int32 Quantity;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Inventory" },
		{ "Comment", "/*\n\x09""Consumes items from the inventory.\n\x09@param InventoryResult - The result handle.\n\x09@param ItemInstance - The instance ID of the item to consume.\n\x09@param Quantity - The quantity to consume.\n\x09@return - true if successful, false otherwise.\n\x09*/" },
		{ "ModuleRelativePath", "Functions/Inventory/SIK_InventoryLibrary.h" },
		{ "ToolTip", "Consumes items from the inventory.\n@param InventoryResult - The result handle.\n@param ItemInstance - The instance ID of the item to consume.\n@param Quantity - The quantity to consume.\n@return - true if successful, false otherwise." },
	};
#endif // WITH_METADATA

// ********** Begin Function ConsumeItem constinit property declarations ***************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_InventoryResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemInstance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ConsumeItem constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ConsumeItem Property Definitions **************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_ConsumeItem_Statics::NewProp_InventoryResult = { "InventoryResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InventoryLibrary_eventConsumeItem_Parms, InventoryResult), Z_Construct_UScriptStruct_FSIK_SteamInventoryResult, METADATA_PARAMS(0, nullptr) }; // 959336186
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_ConsumeItem_Statics::NewProp_ItemInstance = { "ItemInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InventoryLibrary_eventConsumeItem_Parms, ItemInstance), Z_Construct_UScriptStruct_FSIK_SteamItemInstanceID, METADATA_PARAMS(0, nullptr) }; // 2091965911
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_ConsumeItem_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InventoryLibrary_eventConsumeItem_Parms, Quantity), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_InventoryLibrary_ConsumeItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_InventoryLibrary_eventConsumeItem_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_ConsumeItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_InventoryLibrary_eventConsumeItem_Parms), &Z_Construct_UFunction_USIK_InventoryLibrary_ConsumeItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_InventoryLibrary_ConsumeItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_ConsumeItem_Statics::NewProp_InventoryResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_ConsumeItem_Statics::NewProp_ItemInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_ConsumeItem_Statics::NewProp_Quantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_ConsumeItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InventoryLibrary_ConsumeItem_Statics::PropPointers) < 2048);
// ********** End Function ConsumeItem Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_InventoryLibrary_ConsumeItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_InventoryLibrary, nullptr, "ConsumeItem", 	Z_Construct_UFunction_USIK_InventoryLibrary_ConsumeItem_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InventoryLibrary_ConsumeItem_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_InventoryLibrary_ConsumeItem_Statics::SIK_InventoryLibrary_eventConsumeItem_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InventoryLibrary_ConsumeItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_InventoryLibrary_ConsumeItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_InventoryLibrary_ConsumeItem_Statics::SIK_InventoryLibrary_eventConsumeItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_InventoryLibrary_ConsumeItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_InventoryLibrary_ConsumeItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_InventoryLibrary::execConsumeItem)
{
	P_GET_STRUCT_REF(FSIK_SteamInventoryResult,Z_Param_Out_InventoryResult);
	P_GET_STRUCT(FSIK_SteamItemInstanceID,Z_Param_ItemInstance);
	P_GET_PROPERTY(FIntProperty,Z_Param_Quantity);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_InventoryLibrary::ConsumeItem(Z_Param_Out_InventoryResult,Z_Param_ItemInstance,Z_Param_Quantity);
	P_NATIVE_END;
}
// ********** End Class USIK_InventoryLibrary Function ConsumeItem *********************************

// ********** Begin Class USIK_InventoryLibrary Function DeserializeResult *************************
struct Z_Construct_UFunction_USIK_InventoryLibrary_DeserializeResult_Statics
{
	struct SIK_InventoryLibrary_eventDeserializeResult_Parms
	{
		FSIK_SteamInventoryResult InventoryResult;
		TArray<uint8> Buffer;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Inventory" },
		{ "Comment", "/*\n\x09""Deserializes an inventory result from a buffer.\n\x09@param InventoryResult - The result handle.\n\x09@param Buffer - The buffer containing the serialized data.\n\x09@return - true if successful, false otherwise.\n\x09*/" },
		{ "ModuleRelativePath", "Functions/Inventory/SIK_InventoryLibrary.h" },
		{ "ToolTip", "Deserializes an inventory result from a buffer.\n@param InventoryResult - The result handle.\n@param Buffer - The buffer containing the serialized data.\n@return - true if successful, false otherwise." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Buffer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function DeserializeResult constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_InventoryResult;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Buffer_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Buffer;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DeserializeResult constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DeserializeResult Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_DeserializeResult_Statics::NewProp_InventoryResult = { "InventoryResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InventoryLibrary_eventDeserializeResult_Parms, InventoryResult), Z_Construct_UScriptStruct_FSIK_SteamInventoryResult, METADATA_PARAMS(0, nullptr) }; // 959336186
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_DeserializeResult_Statics::NewProp_Buffer_Inner = { "Buffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_DeserializeResult_Statics::NewProp_Buffer = { "Buffer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InventoryLibrary_eventDeserializeResult_Parms, Buffer), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Buffer_MetaData), NewProp_Buffer_MetaData) };
void Z_Construct_UFunction_USIK_InventoryLibrary_DeserializeResult_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_InventoryLibrary_eventDeserializeResult_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_DeserializeResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_InventoryLibrary_eventDeserializeResult_Parms), &Z_Construct_UFunction_USIK_InventoryLibrary_DeserializeResult_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_InventoryLibrary_DeserializeResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_DeserializeResult_Statics::NewProp_InventoryResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_DeserializeResult_Statics::NewProp_Buffer_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_DeserializeResult_Statics::NewProp_Buffer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_DeserializeResult_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InventoryLibrary_DeserializeResult_Statics::PropPointers) < 2048);
// ********** End Function DeserializeResult Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_InventoryLibrary_DeserializeResult_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_InventoryLibrary, nullptr, "DeserializeResult", 	Z_Construct_UFunction_USIK_InventoryLibrary_DeserializeResult_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InventoryLibrary_DeserializeResult_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_InventoryLibrary_DeserializeResult_Statics::SIK_InventoryLibrary_eventDeserializeResult_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InventoryLibrary_DeserializeResult_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_InventoryLibrary_DeserializeResult_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_InventoryLibrary_DeserializeResult_Statics::SIK_InventoryLibrary_eventDeserializeResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_InventoryLibrary_DeserializeResult()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_InventoryLibrary_DeserializeResult_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_InventoryLibrary::execDeserializeResult)
{
	P_GET_STRUCT_REF(FSIK_SteamInventoryResult,Z_Param_Out_InventoryResult);
	P_GET_TARRAY_REF(uint8,Z_Param_Out_Buffer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_InventoryLibrary::DeserializeResult(Z_Param_Out_InventoryResult,Z_Param_Out_Buffer);
	P_NATIVE_END;
}
// ********** End Class USIK_InventoryLibrary Function DeserializeResult ***************************

// ********** Begin Class USIK_InventoryLibrary Function DestroyResult *****************************
struct Z_Construct_UFunction_USIK_InventoryLibrary_DestroyResult_Statics
{
	struct SIK_InventoryLibrary_eventDestroyResult_Parms
	{
		FSIK_SteamInventoryResult InventoryResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Inventory" },
		{ "Comment", "/*\n\x09""Destroys an inventory result handle.\n\x09@param InventoryResult - The result handle to destroy.\n\x09*/" },
		{ "ModuleRelativePath", "Functions/Inventory/SIK_InventoryLibrary.h" },
		{ "ToolTip", "Destroys an inventory result handle.\n@param InventoryResult - The result handle to destroy." },
	};
#endif // WITH_METADATA

// ********** Begin Function DestroyResult constinit property declarations *************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_InventoryResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DestroyResult constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DestroyResult Property Definitions ************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_DestroyResult_Statics::NewProp_InventoryResult = { "InventoryResult", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InventoryLibrary_eventDestroyResult_Parms, InventoryResult), Z_Construct_UScriptStruct_FSIK_SteamInventoryResult, METADATA_PARAMS(0, nullptr) }; // 959336186
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_InventoryLibrary_DestroyResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_DestroyResult_Statics::NewProp_InventoryResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InventoryLibrary_DestroyResult_Statics::PropPointers) < 2048);
// ********** End Function DestroyResult Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_InventoryLibrary_DestroyResult_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_InventoryLibrary, nullptr, "DestroyResult", 	Z_Construct_UFunction_USIK_InventoryLibrary_DestroyResult_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InventoryLibrary_DestroyResult_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_InventoryLibrary_DestroyResult_Statics::SIK_InventoryLibrary_eventDestroyResult_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InventoryLibrary_DestroyResult_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_InventoryLibrary_DestroyResult_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_InventoryLibrary_DestroyResult_Statics::SIK_InventoryLibrary_eventDestroyResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_InventoryLibrary_DestroyResult()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_InventoryLibrary_DestroyResult_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_InventoryLibrary::execDestroyResult)
{
	P_GET_STRUCT(FSIK_SteamInventoryResult,Z_Param_InventoryResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_InventoryLibrary::DestroyResult(Z_Param_InventoryResult);
	P_NATIVE_END;
}
// ********** End Class USIK_InventoryLibrary Function DestroyResult *******************************

// ********** Begin Class USIK_InventoryLibrary Function ExchangeItems *****************************
struct Z_Construct_UFunction_USIK_InventoryLibrary_ExchangeItems_Statics
{
	struct SIK_InventoryLibrary_eventExchangeItems_Parms
	{
		FSIK_SteamInventoryResult InventoryResult;
		TArray<FSIK_SteamItemDef> ItemDefsToCreate;
		TArray<int32> ArrayGenerateQuantity;
		TArray<FSIK_SteamItemInstanceID> ItemDefsToDestroy;
		TArray<int32> DestroyQuantity;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Inventory" },
		{ "Comment", "/*\n\x09""Exchanges items in the inventory.\n\x09@param InventoryResult - The result handle.\n\x09@param ItemDefsToCreate - The definitions of items to create.\n\x09@param ArrayGenerateQuantity - The quantities of items to create.\n\x09@param ItemDefsToDestroy - The instance IDs of items to destroy.\n\x09@param DestroyQuantity - The quantities of items to destroy.\n\x09@return - true if successful, false otherwise.\n\x09*/" },
		{ "ModuleRelativePath", "Functions/Inventory/SIK_InventoryLibrary.h" },
		{ "ToolTip", "Exchanges items in the inventory.\n@param InventoryResult - The result handle.\n@param ItemDefsToCreate - The definitions of items to create.\n@param ArrayGenerateQuantity - The quantities of items to create.\n@param ItemDefsToDestroy - The instance IDs of items to destroy.\n@param DestroyQuantity - The quantities of items to destroy.\n@return - true if successful, false otherwise." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemDefsToCreate_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArrayGenerateQuantity_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemDefsToDestroy_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestroyQuantity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ExchangeItems constinit property declarations *************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_InventoryResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemDefsToCreate_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemDefsToCreate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ArrayGenerateQuantity_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ArrayGenerateQuantity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemDefsToDestroy_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemDefsToDestroy;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DestroyQuantity_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DestroyQuantity;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ExchangeItems constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ExchangeItems Property Definitions ************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_ExchangeItems_Statics::NewProp_InventoryResult = { "InventoryResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InventoryLibrary_eventExchangeItems_Parms, InventoryResult), Z_Construct_UScriptStruct_FSIK_SteamInventoryResult, METADATA_PARAMS(0, nullptr) }; // 959336186
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_ExchangeItems_Statics::NewProp_ItemDefsToCreate_Inner = { "ItemDefsToCreate", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSIK_SteamItemDef, METADATA_PARAMS(0, nullptr) }; // 2053655220
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_ExchangeItems_Statics::NewProp_ItemDefsToCreate = { "ItemDefsToCreate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InventoryLibrary_eventExchangeItems_Parms, ItemDefsToCreate), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemDefsToCreate_MetaData), NewProp_ItemDefsToCreate_MetaData) }; // 2053655220
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_ExchangeItems_Statics::NewProp_ArrayGenerateQuantity_Inner = { "ArrayGenerateQuantity", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_ExchangeItems_Statics::NewProp_ArrayGenerateQuantity = { "ArrayGenerateQuantity", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InventoryLibrary_eventExchangeItems_Parms, ArrayGenerateQuantity), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArrayGenerateQuantity_MetaData), NewProp_ArrayGenerateQuantity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_ExchangeItems_Statics::NewProp_ItemDefsToDestroy_Inner = { "ItemDefsToDestroy", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSIK_SteamItemInstanceID, METADATA_PARAMS(0, nullptr) }; // 2091965911
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_ExchangeItems_Statics::NewProp_ItemDefsToDestroy = { "ItemDefsToDestroy", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InventoryLibrary_eventExchangeItems_Parms, ItemDefsToDestroy), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemDefsToDestroy_MetaData), NewProp_ItemDefsToDestroy_MetaData) }; // 2091965911
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_ExchangeItems_Statics::NewProp_DestroyQuantity_Inner = { "DestroyQuantity", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_ExchangeItems_Statics::NewProp_DestroyQuantity = { "DestroyQuantity", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InventoryLibrary_eventExchangeItems_Parms, DestroyQuantity), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestroyQuantity_MetaData), NewProp_DestroyQuantity_MetaData) };
void Z_Construct_UFunction_USIK_InventoryLibrary_ExchangeItems_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_InventoryLibrary_eventExchangeItems_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_ExchangeItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_InventoryLibrary_eventExchangeItems_Parms), &Z_Construct_UFunction_USIK_InventoryLibrary_ExchangeItems_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_InventoryLibrary_ExchangeItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_ExchangeItems_Statics::NewProp_InventoryResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_ExchangeItems_Statics::NewProp_ItemDefsToCreate_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_ExchangeItems_Statics::NewProp_ItemDefsToCreate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_ExchangeItems_Statics::NewProp_ArrayGenerateQuantity_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_ExchangeItems_Statics::NewProp_ArrayGenerateQuantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_ExchangeItems_Statics::NewProp_ItemDefsToDestroy_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_ExchangeItems_Statics::NewProp_ItemDefsToDestroy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_ExchangeItems_Statics::NewProp_DestroyQuantity_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_ExchangeItems_Statics::NewProp_DestroyQuantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_ExchangeItems_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InventoryLibrary_ExchangeItems_Statics::PropPointers) < 2048);
// ********** End Function ExchangeItems Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_InventoryLibrary_ExchangeItems_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_InventoryLibrary, nullptr, "ExchangeItems", 	Z_Construct_UFunction_USIK_InventoryLibrary_ExchangeItems_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InventoryLibrary_ExchangeItems_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_InventoryLibrary_ExchangeItems_Statics::SIK_InventoryLibrary_eventExchangeItems_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InventoryLibrary_ExchangeItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_InventoryLibrary_ExchangeItems_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_InventoryLibrary_ExchangeItems_Statics::SIK_InventoryLibrary_eventExchangeItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_InventoryLibrary_ExchangeItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_InventoryLibrary_ExchangeItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_InventoryLibrary::execExchangeItems)
{
	P_GET_STRUCT_REF(FSIK_SteamInventoryResult,Z_Param_Out_InventoryResult);
	P_GET_TARRAY_REF(FSIK_SteamItemDef,Z_Param_Out_ItemDefsToCreate);
	P_GET_TARRAY_REF(int32,Z_Param_Out_ArrayGenerateQuantity);
	P_GET_TARRAY_REF(FSIK_SteamItemInstanceID,Z_Param_Out_ItemDefsToDestroy);
	P_GET_TARRAY_REF(int32,Z_Param_Out_DestroyQuantity);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_InventoryLibrary::ExchangeItems(Z_Param_Out_InventoryResult,Z_Param_Out_ItemDefsToCreate,Z_Param_Out_ArrayGenerateQuantity,Z_Param_Out_ItemDefsToDestroy,Z_Param_Out_DestroyQuantity);
	P_NATIVE_END;
}
// ********** End Class USIK_InventoryLibrary Function ExchangeItems *******************************

// ********** Begin Class USIK_InventoryLibrary Function GenerateItems *****************************
struct Z_Construct_UFunction_USIK_InventoryLibrary_GenerateItems_Statics
{
	struct SIK_InventoryLibrary_eventGenerateItems_Parms
	{
		FSIK_SteamInventoryResult InventoryResult;
		TArray<FSIK_SteamItemDef> ItemDefs;
		TArray<int32> Quantity;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Inventory" },
		{ "Comment", "/*\n\x09Generates items in the inventory.\n\x09@param InventoryResult - The result handle.\n\x09@param ItemDefs - The definitions of items to generate.\n\x09@param Quantity - The quantities of items to generate.\n\x09@return - true if successful, false otherwise.\n\x09*/" },
		{ "ModuleRelativePath", "Functions/Inventory/SIK_InventoryLibrary.h" },
		{ "ToolTip", "Generates items in the inventory.\n@param InventoryResult - The result handle.\n@param ItemDefs - The definitions of items to generate.\n@param Quantity - The quantities of items to generate.\n@return - true if successful, false otherwise." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemDefs_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GenerateItems constinit property declarations *************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_InventoryResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemDefs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemDefs;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Quantity;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GenerateItems constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GenerateItems Property Definitions ************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_GenerateItems_Statics::NewProp_InventoryResult = { "InventoryResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InventoryLibrary_eventGenerateItems_Parms, InventoryResult), Z_Construct_UScriptStruct_FSIK_SteamInventoryResult, METADATA_PARAMS(0, nullptr) }; // 959336186
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_GenerateItems_Statics::NewProp_ItemDefs_Inner = { "ItemDefs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSIK_SteamItemDef, METADATA_PARAMS(0, nullptr) }; // 2053655220
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_GenerateItems_Statics::NewProp_ItemDefs = { "ItemDefs", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InventoryLibrary_eventGenerateItems_Parms, ItemDefs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemDefs_MetaData), NewProp_ItemDefs_MetaData) }; // 2053655220
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_GenerateItems_Statics::NewProp_Quantity_Inner = { "Quantity", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_GenerateItems_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InventoryLibrary_eventGenerateItems_Parms, Quantity), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quantity_MetaData), NewProp_Quantity_MetaData) };
void Z_Construct_UFunction_USIK_InventoryLibrary_GenerateItems_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_InventoryLibrary_eventGenerateItems_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_GenerateItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_InventoryLibrary_eventGenerateItems_Parms), &Z_Construct_UFunction_USIK_InventoryLibrary_GenerateItems_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_InventoryLibrary_GenerateItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_GenerateItems_Statics::NewProp_InventoryResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_GenerateItems_Statics::NewProp_ItemDefs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_GenerateItems_Statics::NewProp_ItemDefs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_GenerateItems_Statics::NewProp_Quantity_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_GenerateItems_Statics::NewProp_Quantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_GenerateItems_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InventoryLibrary_GenerateItems_Statics::PropPointers) < 2048);
// ********** End Function GenerateItems Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_InventoryLibrary_GenerateItems_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_InventoryLibrary, nullptr, "GenerateItems", 	Z_Construct_UFunction_USIK_InventoryLibrary_GenerateItems_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InventoryLibrary_GenerateItems_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_InventoryLibrary_GenerateItems_Statics::SIK_InventoryLibrary_eventGenerateItems_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InventoryLibrary_GenerateItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_InventoryLibrary_GenerateItems_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_InventoryLibrary_GenerateItems_Statics::SIK_InventoryLibrary_eventGenerateItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_InventoryLibrary_GenerateItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_InventoryLibrary_GenerateItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_InventoryLibrary::execGenerateItems)
{
	P_GET_STRUCT_REF(FSIK_SteamInventoryResult,Z_Param_Out_InventoryResult);
	P_GET_TARRAY_REF(FSIK_SteamItemDef,Z_Param_Out_ItemDefs);
	P_GET_TARRAY_REF(int32,Z_Param_Out_Quantity);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_InventoryLibrary::GenerateItems(Z_Param_Out_InventoryResult,Z_Param_Out_ItemDefs,Z_Param_Out_Quantity);
	P_NATIVE_END;
}
// ********** End Class USIK_InventoryLibrary Function GenerateItems *******************************

// ********** Begin Class USIK_InventoryLibrary Function GetAllItems *******************************
struct Z_Construct_UFunction_USIK_InventoryLibrary_GetAllItems_Statics
{
	struct SIK_InventoryLibrary_eventGetAllItems_Parms
	{
		FSIK_SteamInventoryResult InventoryResult;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Inventory" },
		{ "Comment", "/*\n\x09Gets all items in the inventory.\n\x09@param InventoryResult - The result handle.\n\x09@return - true if successful, false otherwise.\n\x09*/" },
		{ "ModuleRelativePath", "Functions/Inventory/SIK_InventoryLibrary.h" },
		{ "ToolTip", "Gets all items in the inventory.\n@param InventoryResult - The result handle.\n@return - true if successful, false otherwise." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAllItems constinit property declarations ***************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_InventoryResult;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAllItems constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAllItems Property Definitions **************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_GetAllItems_Statics::NewProp_InventoryResult = { "InventoryResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InventoryLibrary_eventGetAllItems_Parms, InventoryResult), Z_Construct_UScriptStruct_FSIK_SteamInventoryResult, METADATA_PARAMS(0, nullptr) }; // 959336186
void Z_Construct_UFunction_USIK_InventoryLibrary_GetAllItems_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_InventoryLibrary_eventGetAllItems_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_GetAllItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_InventoryLibrary_eventGetAllItems_Parms), &Z_Construct_UFunction_USIK_InventoryLibrary_GetAllItems_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_InventoryLibrary_GetAllItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_GetAllItems_Statics::NewProp_InventoryResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_GetAllItems_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InventoryLibrary_GetAllItems_Statics::PropPointers) < 2048);
// ********** End Function GetAllItems Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_InventoryLibrary_GetAllItems_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_InventoryLibrary, nullptr, "GetAllItems", 	Z_Construct_UFunction_USIK_InventoryLibrary_GetAllItems_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InventoryLibrary_GetAllItems_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_InventoryLibrary_GetAllItems_Statics::SIK_InventoryLibrary_eventGetAllItems_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InventoryLibrary_GetAllItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_InventoryLibrary_GetAllItems_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_InventoryLibrary_GetAllItems_Statics::SIK_InventoryLibrary_eventGetAllItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_InventoryLibrary_GetAllItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_InventoryLibrary_GetAllItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_InventoryLibrary::execGetAllItems)
{
	P_GET_STRUCT_REF(FSIK_SteamInventoryResult,Z_Param_Out_InventoryResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_InventoryLibrary::GetAllItems(Z_Param_Out_InventoryResult);
	P_NATIVE_END;
}
// ********** End Class USIK_InventoryLibrary Function GetAllItems *********************************

// ********** Begin Class USIK_InventoryLibrary Function GetEligiblePromoItemDefinitionIDs *********
struct Z_Construct_UFunction_USIK_InventoryLibrary_GetEligiblePromoItemDefinitionIDs_Statics
{
	struct SIK_InventoryLibrary_eventGetEligiblePromoItemDefinitionIDs_Parms
	{
		FSIK_SteamId SteamID;
		TArray<FSIK_SteamItemDef> ItemDefs;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Inventory" },
		{ "Comment", "/*\n\x09Gets the eligible promotional item definitions IDs for a user.\n\x09@param SteamID - The Steam ID of the user.\n\x09@param ItemDefs - The array to store the item definitions.\n\x09@return - true if successful, false otherwise.\n\x09*/" },
		{ "ModuleRelativePath", "Functions/Inventory/SIK_InventoryLibrary.h" },
		{ "ToolTip", "Gets the eligible promotional item definitions IDs for a user.\n@param SteamID - The Steam ID of the user.\n@param ItemDefs - The array to store the item definitions.\n@return - true if successful, false otherwise." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetEligiblePromoItemDefinitionIDs constinit property declarations *****
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemDefs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemDefs;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetEligiblePromoItemDefinitionIDs constinit property declarations *******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetEligiblePromoItemDefinitionIDs Property Definitions ****************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_GetEligiblePromoItemDefinitionIDs_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InventoryLibrary_eventGetEligiblePromoItemDefinitionIDs_Parms, SteamID), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_GetEligiblePromoItemDefinitionIDs_Statics::NewProp_ItemDefs_Inner = { "ItemDefs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSIK_SteamItemDef, METADATA_PARAMS(0, nullptr) }; // 2053655220
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_GetEligiblePromoItemDefinitionIDs_Statics::NewProp_ItemDefs = { "ItemDefs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InventoryLibrary_eventGetEligiblePromoItemDefinitionIDs_Parms, ItemDefs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2053655220
void Z_Construct_UFunction_USIK_InventoryLibrary_GetEligiblePromoItemDefinitionIDs_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_InventoryLibrary_eventGetEligiblePromoItemDefinitionIDs_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_GetEligiblePromoItemDefinitionIDs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_InventoryLibrary_eventGetEligiblePromoItemDefinitionIDs_Parms), &Z_Construct_UFunction_USIK_InventoryLibrary_GetEligiblePromoItemDefinitionIDs_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_InventoryLibrary_GetEligiblePromoItemDefinitionIDs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_GetEligiblePromoItemDefinitionIDs_Statics::NewProp_SteamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_GetEligiblePromoItemDefinitionIDs_Statics::NewProp_ItemDefs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_GetEligiblePromoItemDefinitionIDs_Statics::NewProp_ItemDefs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_GetEligiblePromoItemDefinitionIDs_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InventoryLibrary_GetEligiblePromoItemDefinitionIDs_Statics::PropPointers) < 2048);
// ********** End Function GetEligiblePromoItemDefinitionIDs Property Definitions ******************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_InventoryLibrary_GetEligiblePromoItemDefinitionIDs_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_InventoryLibrary, nullptr, "GetEligiblePromoItemDefinitionIDs", 	Z_Construct_UFunction_USIK_InventoryLibrary_GetEligiblePromoItemDefinitionIDs_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InventoryLibrary_GetEligiblePromoItemDefinitionIDs_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_InventoryLibrary_GetEligiblePromoItemDefinitionIDs_Statics::SIK_InventoryLibrary_eventGetEligiblePromoItemDefinitionIDs_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InventoryLibrary_GetEligiblePromoItemDefinitionIDs_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_InventoryLibrary_GetEligiblePromoItemDefinitionIDs_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_InventoryLibrary_GetEligiblePromoItemDefinitionIDs_Statics::SIK_InventoryLibrary_eventGetEligiblePromoItemDefinitionIDs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_InventoryLibrary_GetEligiblePromoItemDefinitionIDs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_InventoryLibrary_GetEligiblePromoItemDefinitionIDs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_InventoryLibrary::execGetEligiblePromoItemDefinitionIDs)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_SteamID);
	P_GET_TARRAY_REF(FSIK_SteamItemDef,Z_Param_Out_ItemDefs);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_InventoryLibrary::GetEligiblePromoItemDefinitionIDs(Z_Param_SteamID,Z_Param_Out_ItemDefs);
	P_NATIVE_END;
}
// ********** End Class USIK_InventoryLibrary Function GetEligiblePromoItemDefinitionIDs ***********

// ********** Begin Class USIK_InventoryLibrary Function GetItemDefinitionIDs **********************
struct Z_Construct_UFunction_USIK_InventoryLibrary_GetItemDefinitionIDs_Statics
{
	struct SIK_InventoryLibrary_eventGetItemDefinitionIDs_Parms
	{
		TArray<FSIK_SteamItemDef> ItemDefs;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Inventory" },
		{ "Comment", "/*\n\x09Gets the item definition IDs.\n\x09@param ItemDefs - The array to store the item definitions.\n\x09@return - true if successful, false otherwise.\n\x09*/" },
		{ "ModuleRelativePath", "Functions/Inventory/SIK_InventoryLibrary.h" },
		{ "ToolTip", "Gets the item definition IDs.\n@param ItemDefs - The array to store the item definitions.\n@return - true if successful, false otherwise." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetItemDefinitionIDs constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemDefs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemDefs;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetItemDefinitionIDs constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetItemDefinitionIDs Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_GetItemDefinitionIDs_Statics::NewProp_ItemDefs_Inner = { "ItemDefs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSIK_SteamItemDef, METADATA_PARAMS(0, nullptr) }; // 2053655220
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_GetItemDefinitionIDs_Statics::NewProp_ItemDefs = { "ItemDefs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InventoryLibrary_eventGetItemDefinitionIDs_Parms, ItemDefs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2053655220
void Z_Construct_UFunction_USIK_InventoryLibrary_GetItemDefinitionIDs_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_InventoryLibrary_eventGetItemDefinitionIDs_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_GetItemDefinitionIDs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_InventoryLibrary_eventGetItemDefinitionIDs_Parms), &Z_Construct_UFunction_USIK_InventoryLibrary_GetItemDefinitionIDs_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_InventoryLibrary_GetItemDefinitionIDs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_GetItemDefinitionIDs_Statics::NewProp_ItemDefs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_GetItemDefinitionIDs_Statics::NewProp_ItemDefs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_GetItemDefinitionIDs_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InventoryLibrary_GetItemDefinitionIDs_Statics::PropPointers) < 2048);
// ********** End Function GetItemDefinitionIDs Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_InventoryLibrary_GetItemDefinitionIDs_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_InventoryLibrary, nullptr, "GetItemDefinitionIDs", 	Z_Construct_UFunction_USIK_InventoryLibrary_GetItemDefinitionIDs_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InventoryLibrary_GetItemDefinitionIDs_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_InventoryLibrary_GetItemDefinitionIDs_Statics::SIK_InventoryLibrary_eventGetItemDefinitionIDs_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InventoryLibrary_GetItemDefinitionIDs_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_InventoryLibrary_GetItemDefinitionIDs_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_InventoryLibrary_GetItemDefinitionIDs_Statics::SIK_InventoryLibrary_eventGetItemDefinitionIDs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_InventoryLibrary_GetItemDefinitionIDs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_InventoryLibrary_GetItemDefinitionIDs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_InventoryLibrary::execGetItemDefinitionIDs)
{
	P_GET_TARRAY_REF(FSIK_SteamItemDef,Z_Param_Out_ItemDefs);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_InventoryLibrary::GetItemDefinitionIDs(Z_Param_Out_ItemDefs);
	P_NATIVE_END;
}
// ********** End Class USIK_InventoryLibrary Function GetItemDefinitionIDs ************************

// ********** Begin Class USIK_InventoryLibrary Function GetItemDefinitionProperty *****************
struct Z_Construct_UFunction_USIK_InventoryLibrary_GetItemDefinitionProperty_Statics
{
	struct SIK_InventoryLibrary_eventGetItemDefinitionProperty_Parms
	{
		FSIK_SteamItemDef ItemDef;
		FString PropertyName;
		FString Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Inventory" },
		{ "Comment", "/*\n\x09Gets the property of an item definition.\n\x09@param ItemDef - The definition of the item.\n\x09@param PropertyName - The name of the property.\n\x09@param Value - The value of the property.\n\x09@return - true if successful, false otherwise.\n\x09*/" },
		{ "ModuleRelativePath", "Functions/Inventory/SIK_InventoryLibrary.h" },
		{ "ToolTip", "Gets the property of an item definition.\n@param ItemDef - The definition of the item.\n@param PropertyName - The name of the property.\n@param Value - The value of the property.\n@return - true if successful, false otherwise." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetItemDefinitionProperty constinit property declarations *************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemDef;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetItemDefinitionProperty constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetItemDefinitionProperty Property Definitions ************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_GetItemDefinitionProperty_Statics::NewProp_ItemDef = { "ItemDef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InventoryLibrary_eventGetItemDefinitionProperty_Parms, ItemDef), Z_Construct_UScriptStruct_FSIK_SteamItemDef, METADATA_PARAMS(0, nullptr) }; // 2053655220
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_GetItemDefinitionProperty_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InventoryLibrary_eventGetItemDefinitionProperty_Parms, PropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyName_MetaData), NewProp_PropertyName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_GetItemDefinitionProperty_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InventoryLibrary_eventGetItemDefinitionProperty_Parms, Value), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_InventoryLibrary_GetItemDefinitionProperty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_InventoryLibrary_eventGetItemDefinitionProperty_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_GetItemDefinitionProperty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_InventoryLibrary_eventGetItemDefinitionProperty_Parms), &Z_Construct_UFunction_USIK_InventoryLibrary_GetItemDefinitionProperty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_InventoryLibrary_GetItemDefinitionProperty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_GetItemDefinitionProperty_Statics::NewProp_ItemDef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_GetItemDefinitionProperty_Statics::NewProp_PropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_GetItemDefinitionProperty_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_GetItemDefinitionProperty_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InventoryLibrary_GetItemDefinitionProperty_Statics::PropPointers) < 2048);
// ********** End Function GetItemDefinitionProperty Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_InventoryLibrary_GetItemDefinitionProperty_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_InventoryLibrary, nullptr, "GetItemDefinitionProperty", 	Z_Construct_UFunction_USIK_InventoryLibrary_GetItemDefinitionProperty_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InventoryLibrary_GetItemDefinitionProperty_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_InventoryLibrary_GetItemDefinitionProperty_Statics::SIK_InventoryLibrary_eventGetItemDefinitionProperty_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InventoryLibrary_GetItemDefinitionProperty_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_InventoryLibrary_GetItemDefinitionProperty_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_InventoryLibrary_GetItemDefinitionProperty_Statics::SIK_InventoryLibrary_eventGetItemDefinitionProperty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_InventoryLibrary_GetItemDefinitionProperty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_InventoryLibrary_GetItemDefinitionProperty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_InventoryLibrary::execGetItemDefinitionProperty)
{
	P_GET_STRUCT(FSIK_SteamItemDef,Z_Param_ItemDef);
	P_GET_PROPERTY(FStrProperty,Z_Param_PropertyName);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_InventoryLibrary::GetItemDefinitionProperty(Z_Param_ItemDef,Z_Param_PropertyName,Z_Param_Out_Value);
	P_NATIVE_END;
}
// ********** End Class USIK_InventoryLibrary Function GetItemDefinitionProperty *******************

// ********** Begin Class USIK_InventoryLibrary Function GetItemPrice ******************************
struct Z_Construct_UFunction_USIK_InventoryLibrary_GetItemPrice_Statics
{
	struct SIK_InventoryLibrary_eventGetItemPrice_Parms
	{
		FSIK_SteamItemDef ItemDef;
		int64 CurrentPrice;
		int64 BasePrice;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Inventory" },
		{ "Comment", "/*\n\x09Gets the price of an item.\n\x09@param ItemDef - The definition of the item.\n\x09@param CurrentPrice - The current price of the item.\n\x09@param BasePrice - The base price of the item.\n\x09@return - true if successful, false otherwise.\n\x09*/" },
		{ "ModuleRelativePath", "Functions/Inventory/SIK_InventoryLibrary.h" },
		{ "ToolTip", "Gets the price of an item.\n@param ItemDef - The definition of the item.\n@param CurrentPrice - The current price of the item.\n@param BasePrice - The base price of the item.\n@return - true if successful, false otherwise." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetItemPrice constinit property declarations **************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemDef;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_CurrentPrice;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_BasePrice;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetItemPrice constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetItemPrice Property Definitions *************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_GetItemPrice_Statics::NewProp_ItemDef = { "ItemDef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InventoryLibrary_eventGetItemPrice_Parms, ItemDef), Z_Construct_UScriptStruct_FSIK_SteamItemDef, METADATA_PARAMS(0, nullptr) }; // 2053655220
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_GetItemPrice_Statics::NewProp_CurrentPrice = { "CurrentPrice", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InventoryLibrary_eventGetItemPrice_Parms, CurrentPrice), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_GetItemPrice_Statics::NewProp_BasePrice = { "BasePrice", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InventoryLibrary_eventGetItemPrice_Parms, BasePrice), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_InventoryLibrary_GetItemPrice_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_InventoryLibrary_eventGetItemPrice_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_GetItemPrice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_InventoryLibrary_eventGetItemPrice_Parms), &Z_Construct_UFunction_USIK_InventoryLibrary_GetItemPrice_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_InventoryLibrary_GetItemPrice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_GetItemPrice_Statics::NewProp_ItemDef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_GetItemPrice_Statics::NewProp_CurrentPrice,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_GetItemPrice_Statics::NewProp_BasePrice,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_GetItemPrice_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InventoryLibrary_GetItemPrice_Statics::PropPointers) < 2048);
// ********** End Function GetItemPrice Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_InventoryLibrary_GetItemPrice_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_InventoryLibrary, nullptr, "GetItemPrice", 	Z_Construct_UFunction_USIK_InventoryLibrary_GetItemPrice_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InventoryLibrary_GetItemPrice_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_InventoryLibrary_GetItemPrice_Statics::SIK_InventoryLibrary_eventGetItemPrice_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InventoryLibrary_GetItemPrice_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_InventoryLibrary_GetItemPrice_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_InventoryLibrary_GetItemPrice_Statics::SIK_InventoryLibrary_eventGetItemPrice_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_InventoryLibrary_GetItemPrice()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_InventoryLibrary_GetItemPrice_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_InventoryLibrary::execGetItemPrice)
{
	P_GET_STRUCT(FSIK_SteamItemDef,Z_Param_ItemDef);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_CurrentPrice);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_BasePrice);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_InventoryLibrary::GetItemPrice(Z_Param_ItemDef,Z_Param_Out_CurrentPrice,Z_Param_Out_BasePrice);
	P_NATIVE_END;
}
// ********** End Class USIK_InventoryLibrary Function GetItemPrice ********************************

// ********** Begin Class USIK_InventoryLibrary Function GetItemsByID ******************************
struct Z_Construct_UFunction_USIK_InventoryLibrary_GetItemsByID_Statics
{
	struct SIK_InventoryLibrary_eventGetItemsByID_Parms
	{
		FSIK_SteamInventoryResult InventoryResult;
		TArray<FSIK_SteamItemInstanceID> ItemInstances;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Inventory" },
		{ "Comment", "/*\n\x09Gets items by their instance IDs.\n\x09@param InventoryResult - The result handle.\n\x09@param ItemInstances - The array of instance IDs.\n\x09@return - true if successful, false otherwise.\n\x09*/" },
		{ "ModuleRelativePath", "Functions/Inventory/SIK_InventoryLibrary.h" },
		{ "ToolTip", "Gets items by their instance IDs.\n@param InventoryResult - The result handle.\n@param ItemInstances - The array of instance IDs.\n@return - true if successful, false otherwise." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemInstances_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetItemsByID constinit property declarations **************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_InventoryResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemInstances_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemInstances;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetItemsByID constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetItemsByID Property Definitions *************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_GetItemsByID_Statics::NewProp_InventoryResult = { "InventoryResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InventoryLibrary_eventGetItemsByID_Parms, InventoryResult), Z_Construct_UScriptStruct_FSIK_SteamInventoryResult, METADATA_PARAMS(0, nullptr) }; // 959336186
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_GetItemsByID_Statics::NewProp_ItemInstances_Inner = { "ItemInstances", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSIK_SteamItemInstanceID, METADATA_PARAMS(0, nullptr) }; // 2091965911
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_GetItemsByID_Statics::NewProp_ItemInstances = { "ItemInstances", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InventoryLibrary_eventGetItemsByID_Parms, ItemInstances), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemInstances_MetaData), NewProp_ItemInstances_MetaData) }; // 2091965911
void Z_Construct_UFunction_USIK_InventoryLibrary_GetItemsByID_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_InventoryLibrary_eventGetItemsByID_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_GetItemsByID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_InventoryLibrary_eventGetItemsByID_Parms), &Z_Construct_UFunction_USIK_InventoryLibrary_GetItemsByID_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_InventoryLibrary_GetItemsByID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_GetItemsByID_Statics::NewProp_InventoryResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_GetItemsByID_Statics::NewProp_ItemInstances_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_GetItemsByID_Statics::NewProp_ItemInstances,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_GetItemsByID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InventoryLibrary_GetItemsByID_Statics::PropPointers) < 2048);
// ********** End Function GetItemsByID Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_InventoryLibrary_GetItemsByID_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_InventoryLibrary, nullptr, "GetItemsByID", 	Z_Construct_UFunction_USIK_InventoryLibrary_GetItemsByID_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InventoryLibrary_GetItemsByID_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_InventoryLibrary_GetItemsByID_Statics::SIK_InventoryLibrary_eventGetItemsByID_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InventoryLibrary_GetItemsByID_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_InventoryLibrary_GetItemsByID_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_InventoryLibrary_GetItemsByID_Statics::SIK_InventoryLibrary_eventGetItemsByID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_InventoryLibrary_GetItemsByID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_InventoryLibrary_GetItemsByID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_InventoryLibrary::execGetItemsByID)
{
	P_GET_STRUCT_REF(FSIK_SteamInventoryResult,Z_Param_Out_InventoryResult);
	P_GET_TARRAY_REF(FSIK_SteamItemInstanceID,Z_Param_Out_ItemInstances);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_InventoryLibrary::GetItemsByID(Z_Param_Out_InventoryResult,Z_Param_Out_ItemInstances);
	P_NATIVE_END;
}
// ********** End Class USIK_InventoryLibrary Function GetItemsByID ********************************

// ********** Begin Class USIK_InventoryLibrary Function GetItemsWithPrices ************************
struct Z_Construct_UFunction_USIK_InventoryLibrary_GetItemsWithPrices_Statics
{
	struct SIK_InventoryLibrary_eventGetItemsWithPrices_Parms
	{
		TArray<FSIK_SteamItemDef> ItemDefs;
		TArray<int64> CurrentPrices;
		TArray<int64> BasePrices;
		int32 ArraySize;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Inventory" },
		{ "Comment", "/*\n\x09Gets items with their prices.\n\x09@param ItemDefs - The array to store the item definitions.\n\x09@param CurrentPrices - The array to store the current prices.\n\x09@param BasePrices - The array to store the base prices.\n\x09@return - true if successful, false otherwise.\n\x09*/" },
		{ "CPP_Default_ArraySize", "0" },
		{ "ModuleRelativePath", "Functions/Inventory/SIK_InventoryLibrary.h" },
		{ "ToolTip", "Gets items with their prices.\n@param ItemDefs - The array to store the item definitions.\n@param CurrentPrices - The array to store the current prices.\n@param BasePrices - The array to store the base prices.\n@return - true if successful, false otherwise." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetItemsWithPrices constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemDefs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemDefs;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_CurrentPrices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CurrentPrices;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_BasePrices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BasePrices;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ArraySize;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetItemsWithPrices constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetItemsWithPrices Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_GetItemsWithPrices_Statics::NewProp_ItemDefs_Inner = { "ItemDefs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSIK_SteamItemDef, METADATA_PARAMS(0, nullptr) }; // 2053655220
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_GetItemsWithPrices_Statics::NewProp_ItemDefs = { "ItemDefs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InventoryLibrary_eventGetItemsWithPrices_Parms, ItemDefs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2053655220
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_GetItemsWithPrices_Statics::NewProp_CurrentPrices_Inner = { "CurrentPrices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_GetItemsWithPrices_Statics::NewProp_CurrentPrices = { "CurrentPrices", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InventoryLibrary_eventGetItemsWithPrices_Parms, CurrentPrices), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_GetItemsWithPrices_Statics::NewProp_BasePrices_Inner = { "BasePrices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_GetItemsWithPrices_Statics::NewProp_BasePrices = { "BasePrices", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InventoryLibrary_eventGetItemsWithPrices_Parms, BasePrices), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_GetItemsWithPrices_Statics::NewProp_ArraySize = { "ArraySize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InventoryLibrary_eventGetItemsWithPrices_Parms, ArraySize), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_InventoryLibrary_GetItemsWithPrices_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_InventoryLibrary_eventGetItemsWithPrices_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_GetItemsWithPrices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_InventoryLibrary_eventGetItemsWithPrices_Parms), &Z_Construct_UFunction_USIK_InventoryLibrary_GetItemsWithPrices_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_InventoryLibrary_GetItemsWithPrices_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_GetItemsWithPrices_Statics::NewProp_ItemDefs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_GetItemsWithPrices_Statics::NewProp_ItemDefs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_GetItemsWithPrices_Statics::NewProp_CurrentPrices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_GetItemsWithPrices_Statics::NewProp_CurrentPrices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_GetItemsWithPrices_Statics::NewProp_BasePrices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_GetItemsWithPrices_Statics::NewProp_BasePrices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_GetItemsWithPrices_Statics::NewProp_ArraySize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_GetItemsWithPrices_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InventoryLibrary_GetItemsWithPrices_Statics::PropPointers) < 2048);
// ********** End Function GetItemsWithPrices Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_InventoryLibrary_GetItemsWithPrices_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_InventoryLibrary, nullptr, "GetItemsWithPrices", 	Z_Construct_UFunction_USIK_InventoryLibrary_GetItemsWithPrices_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InventoryLibrary_GetItemsWithPrices_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_InventoryLibrary_GetItemsWithPrices_Statics::SIK_InventoryLibrary_eventGetItemsWithPrices_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InventoryLibrary_GetItemsWithPrices_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_InventoryLibrary_GetItemsWithPrices_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_InventoryLibrary_GetItemsWithPrices_Statics::SIK_InventoryLibrary_eventGetItemsWithPrices_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_InventoryLibrary_GetItemsWithPrices()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_InventoryLibrary_GetItemsWithPrices_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_InventoryLibrary::execGetItemsWithPrices)
{
	P_GET_TARRAY_REF(FSIK_SteamItemDef,Z_Param_Out_ItemDefs);
	P_GET_TARRAY_REF(int64,Z_Param_Out_CurrentPrices);
	P_GET_TARRAY_REF(int64,Z_Param_Out_BasePrices);
	P_GET_PROPERTY(FIntProperty,Z_Param_ArraySize);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_InventoryLibrary::GetItemsWithPrices(Z_Param_Out_ItemDefs,Z_Param_Out_CurrentPrices,Z_Param_Out_BasePrices,Z_Param_ArraySize);
	P_NATIVE_END;
}
// ********** End Class USIK_InventoryLibrary Function GetItemsWithPrices **************************

// ********** Begin Class USIK_InventoryLibrary Function GetNumItemsWithPrices *********************
struct Z_Construct_UFunction_USIK_InventoryLibrary_GetNumItemsWithPrices_Statics
{
	struct SIK_InventoryLibrary_eventGetNumItemsWithPrices_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Inventory" },
		{ "Comment", "/*\n\x09Gets the number of items with prices.\n\x09@return - The number of items with prices.\n\x09*/" },
		{ "ModuleRelativePath", "Functions/Inventory/SIK_InventoryLibrary.h" },
		{ "ToolTip", "Gets the number of items with prices.\n@return - The number of items with prices." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetNumItemsWithPrices constinit property declarations *****************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetNumItemsWithPrices constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetNumItemsWithPrices Property Definitions ****************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_GetNumItemsWithPrices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InventoryLibrary_eventGetNumItemsWithPrices_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_InventoryLibrary_GetNumItemsWithPrices_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_GetNumItemsWithPrices_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InventoryLibrary_GetNumItemsWithPrices_Statics::PropPointers) < 2048);
// ********** End Function GetNumItemsWithPrices Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_InventoryLibrary_GetNumItemsWithPrices_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_InventoryLibrary, nullptr, "GetNumItemsWithPrices", 	Z_Construct_UFunction_USIK_InventoryLibrary_GetNumItemsWithPrices_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InventoryLibrary_GetNumItemsWithPrices_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_InventoryLibrary_GetNumItemsWithPrices_Statics::SIK_InventoryLibrary_eventGetNumItemsWithPrices_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InventoryLibrary_GetNumItemsWithPrices_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_InventoryLibrary_GetNumItemsWithPrices_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_InventoryLibrary_GetNumItemsWithPrices_Statics::SIK_InventoryLibrary_eventGetNumItemsWithPrices_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_InventoryLibrary_GetNumItemsWithPrices()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_InventoryLibrary_GetNumItemsWithPrices_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_InventoryLibrary::execGetNumItemsWithPrices)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USIK_InventoryLibrary::GetNumItemsWithPrices();
	P_NATIVE_END;
}
// ********** End Class USIK_InventoryLibrary Function GetNumItemsWithPrices ***********************

// ********** Begin Class USIK_InventoryLibrary Function GetResultItemProperty *********************
struct Z_Construct_UFunction_USIK_InventoryLibrary_GetResultItemProperty_Statics
{
	struct SIK_InventoryLibrary_eventGetResultItemProperty_Parms
	{
		FSIK_SteamInventoryResult InventoryResult;
		int32 ItemIndex;
		FString PropertyName;
		FString Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Inventory" },
		{ "Comment", "/*\n\x09Gets a property of an item in the result.\n\x09@param InventoryResult - The result handle.\n\x09@param ItemIndex - The index of the item.\n\x09@param PropertyName - The name of the property.\n\x09@param Value - The value of the property.\n\x09@return - true if successful, false otherwise.\n\x09*/" },
		{ "ModuleRelativePath", "Functions/Inventory/SIK_InventoryLibrary.h" },
		{ "ToolTip", "Gets a property of an item in the result.\n@param InventoryResult - The result handle.\n@param ItemIndex - The index of the item.\n@param PropertyName - The name of the property.\n@param Value - The value of the property.\n@return - true if successful, false otherwise." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetResultItemProperty constinit property declarations *****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_InventoryResult;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemIndex;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetResultItemProperty constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetResultItemProperty Property Definitions ****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_GetResultItemProperty_Statics::NewProp_InventoryResult = { "InventoryResult", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InventoryLibrary_eventGetResultItemProperty_Parms, InventoryResult), Z_Construct_UScriptStruct_FSIK_SteamInventoryResult, METADATA_PARAMS(0, nullptr) }; // 959336186
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_GetResultItemProperty_Statics::NewProp_ItemIndex = { "ItemIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InventoryLibrary_eventGetResultItemProperty_Parms, ItemIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_GetResultItemProperty_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InventoryLibrary_eventGetResultItemProperty_Parms, PropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyName_MetaData), NewProp_PropertyName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_GetResultItemProperty_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InventoryLibrary_eventGetResultItemProperty_Parms, Value), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_InventoryLibrary_GetResultItemProperty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_InventoryLibrary_eventGetResultItemProperty_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_GetResultItemProperty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_InventoryLibrary_eventGetResultItemProperty_Parms), &Z_Construct_UFunction_USIK_InventoryLibrary_GetResultItemProperty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_InventoryLibrary_GetResultItemProperty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_GetResultItemProperty_Statics::NewProp_InventoryResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_GetResultItemProperty_Statics::NewProp_ItemIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_GetResultItemProperty_Statics::NewProp_PropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_GetResultItemProperty_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_GetResultItemProperty_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InventoryLibrary_GetResultItemProperty_Statics::PropPointers) < 2048);
// ********** End Function GetResultItemProperty Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_InventoryLibrary_GetResultItemProperty_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_InventoryLibrary, nullptr, "GetResultItemProperty", 	Z_Construct_UFunction_USIK_InventoryLibrary_GetResultItemProperty_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InventoryLibrary_GetResultItemProperty_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_InventoryLibrary_GetResultItemProperty_Statics::SIK_InventoryLibrary_eventGetResultItemProperty_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InventoryLibrary_GetResultItemProperty_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_InventoryLibrary_GetResultItemProperty_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_InventoryLibrary_GetResultItemProperty_Statics::SIK_InventoryLibrary_eventGetResultItemProperty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_InventoryLibrary_GetResultItemProperty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_InventoryLibrary_GetResultItemProperty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_InventoryLibrary::execGetResultItemProperty)
{
	P_GET_STRUCT(FSIK_SteamInventoryResult,Z_Param_InventoryResult);
	P_GET_PROPERTY(FIntProperty,Z_Param_ItemIndex);
	P_GET_PROPERTY(FStrProperty,Z_Param_PropertyName);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_InventoryLibrary::GetResultItemProperty(Z_Param_InventoryResult,Z_Param_ItemIndex,Z_Param_PropertyName,Z_Param_Out_Value);
	P_NATIVE_END;
}
// ********** End Class USIK_InventoryLibrary Function GetResultItemProperty ***********************

// ********** Begin Class USIK_InventoryLibrary Function GetResultItems ****************************
struct Z_Construct_UFunction_USIK_InventoryLibrary_GetResultItems_Statics
{
	struct SIK_InventoryLibrary_eventGetResultItems_Parms
	{
		FSIK_SteamInventoryResult InventoryResult;
		TArray<FSIK_SteamItemDetails> ItemInstances;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Inventory" },
		{ "Comment", "/*\n\x09Gets the items in the result.\n\x09@param InventoryResult - The result handle.\n\x09@param ItemInstances - The array to store the item instances.\n\x09@return - true if successful, false otherwise.\n\x09*/" },
		{ "ModuleRelativePath", "Functions/Inventory/SIK_InventoryLibrary.h" },
		{ "ToolTip", "Gets the items in the result.\n@param InventoryResult - The result handle.\n@param ItemInstances - The array to store the item instances.\n@return - true if successful, false otherwise." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetResultItems constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_InventoryResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemInstances_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemInstances;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetResultItems constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetResultItems Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_GetResultItems_Statics::NewProp_InventoryResult = { "InventoryResult", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InventoryLibrary_eventGetResultItems_Parms, InventoryResult), Z_Construct_UScriptStruct_FSIK_SteamInventoryResult, METADATA_PARAMS(0, nullptr) }; // 959336186
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_GetResultItems_Statics::NewProp_ItemInstances_Inner = { "ItemInstances", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSIK_SteamItemDetails, METADATA_PARAMS(0, nullptr) }; // 2724905339
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_GetResultItems_Statics::NewProp_ItemInstances = { "ItemInstances", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InventoryLibrary_eventGetResultItems_Parms, ItemInstances), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2724905339
void Z_Construct_UFunction_USIK_InventoryLibrary_GetResultItems_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_InventoryLibrary_eventGetResultItems_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_GetResultItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_InventoryLibrary_eventGetResultItems_Parms), &Z_Construct_UFunction_USIK_InventoryLibrary_GetResultItems_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_InventoryLibrary_GetResultItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_GetResultItems_Statics::NewProp_InventoryResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_GetResultItems_Statics::NewProp_ItemInstances_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_GetResultItems_Statics::NewProp_ItemInstances,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_GetResultItems_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InventoryLibrary_GetResultItems_Statics::PropPointers) < 2048);
// ********** End Function GetResultItems Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_InventoryLibrary_GetResultItems_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_InventoryLibrary, nullptr, "GetResultItems", 	Z_Construct_UFunction_USIK_InventoryLibrary_GetResultItems_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InventoryLibrary_GetResultItems_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_InventoryLibrary_GetResultItems_Statics::SIK_InventoryLibrary_eventGetResultItems_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InventoryLibrary_GetResultItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_InventoryLibrary_GetResultItems_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_InventoryLibrary_GetResultItems_Statics::SIK_InventoryLibrary_eventGetResultItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_InventoryLibrary_GetResultItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_InventoryLibrary_GetResultItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_InventoryLibrary::execGetResultItems)
{
	P_GET_STRUCT(FSIK_SteamInventoryResult,Z_Param_InventoryResult);
	P_GET_TARRAY_REF(FSIK_SteamItemDetails,Z_Param_Out_ItemInstances);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_InventoryLibrary::GetResultItems(Z_Param_InventoryResult,Z_Param_Out_ItemInstances);
	P_NATIVE_END;
}
// ********** End Class USIK_InventoryLibrary Function GetResultItems ******************************

// ********** Begin Class USIK_InventoryLibrary Function GetResultStatus ***************************
struct Z_Construct_UFunction_USIK_InventoryLibrary_GetResultStatus_Statics
{
	struct SIK_InventoryLibrary_eventGetResultStatus_Parms
	{
		FSIK_SteamInventoryResult InventoryResult;
		TEnumAsByte<ESIK_Result> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Inventory" },
		{ "Comment", "/*\n\x09Gets the status of the result.\n\x09@param InventoryResult - The result handle.\n\x09@return - The result status as an ESIK_Result enum.\n\x09*/" },
		{ "ModuleRelativePath", "Functions/Inventory/SIK_InventoryLibrary.h" },
		{ "ToolTip", "Gets the status of the result.\n@param InventoryResult - The result handle.\n@return - The result status as an ESIK_Result enum." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetResultStatus constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_InventoryResult;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetResultStatus constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetResultStatus Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_GetResultStatus_Statics::NewProp_InventoryResult = { "InventoryResult", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InventoryLibrary_eventGetResultStatus_Parms, InventoryResult), Z_Construct_UScriptStruct_FSIK_SteamInventoryResult, METADATA_PARAMS(0, nullptr) }; // 959336186
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_GetResultStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InventoryLibrary_eventGetResultStatus_Parms, ReturnValue), Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result, METADATA_PARAMS(0, nullptr) }; // 655382749
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_InventoryLibrary_GetResultStatus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_GetResultStatus_Statics::NewProp_InventoryResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_GetResultStatus_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InventoryLibrary_GetResultStatus_Statics::PropPointers) < 2048);
// ********** End Function GetResultStatus Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_InventoryLibrary_GetResultStatus_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_InventoryLibrary, nullptr, "GetResultStatus", 	Z_Construct_UFunction_USIK_InventoryLibrary_GetResultStatus_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InventoryLibrary_GetResultStatus_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_InventoryLibrary_GetResultStatus_Statics::SIK_InventoryLibrary_eventGetResultStatus_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InventoryLibrary_GetResultStatus_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_InventoryLibrary_GetResultStatus_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_InventoryLibrary_GetResultStatus_Statics::SIK_InventoryLibrary_eventGetResultStatus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_InventoryLibrary_GetResultStatus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_InventoryLibrary_GetResultStatus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_InventoryLibrary::execGetResultStatus)
{
	P_GET_STRUCT(FSIK_SteamInventoryResult,Z_Param_InventoryResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<ESIK_Result>*)Z_Param__Result=USIK_InventoryLibrary::GetResultStatus(Z_Param_InventoryResult);
	P_NATIVE_END;
}
// ********** End Class USIK_InventoryLibrary Function GetResultStatus *****************************

// ********** Begin Class USIK_InventoryLibrary Function GetResultTimestamp ************************
struct Z_Construct_UFunction_USIK_InventoryLibrary_GetResultTimestamp_Statics
{
	struct SIK_InventoryLibrary_eventGetResultTimestamp_Parms
	{
		FSIK_SteamInventoryResult InventoryResult;
		int32 Timestamp;
		FDateTime ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Inventory" },
		{ "Comment", "/*\n\x09Gets the timestamp of the result.\n\x09@param InventoryResult - The result handle.\n\x09@param Timestamp - The timestamp to store the result.\n\x09@return - The timestamp as a FDateTime object.\n\x09*/" },
		{ "ModuleRelativePath", "Functions/Inventory/SIK_InventoryLibrary.h" },
		{ "ToolTip", "Gets the timestamp of the result.\n@param InventoryResult - The result handle.\n@param Timestamp - The timestamp to store the result.\n@return - The timestamp as a FDateTime object." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetResultTimestamp constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_InventoryResult;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Timestamp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetResultTimestamp constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetResultTimestamp Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_GetResultTimestamp_Statics::NewProp_InventoryResult = { "InventoryResult", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InventoryLibrary_eventGetResultTimestamp_Parms, InventoryResult), Z_Construct_UScriptStruct_FSIK_SteamInventoryResult, METADATA_PARAMS(0, nullptr) }; // 959336186
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_GetResultTimestamp_Statics::NewProp_Timestamp = { "Timestamp", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InventoryLibrary_eventGetResultTimestamp_Parms, Timestamp), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_GetResultTimestamp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InventoryLibrary_eventGetResultTimestamp_Parms, ReturnValue), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_InventoryLibrary_GetResultTimestamp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_GetResultTimestamp_Statics::NewProp_InventoryResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_GetResultTimestamp_Statics::NewProp_Timestamp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_GetResultTimestamp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InventoryLibrary_GetResultTimestamp_Statics::PropPointers) < 2048);
// ********** End Function GetResultTimestamp Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_InventoryLibrary_GetResultTimestamp_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_InventoryLibrary, nullptr, "GetResultTimestamp", 	Z_Construct_UFunction_USIK_InventoryLibrary_GetResultTimestamp_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InventoryLibrary_GetResultTimestamp_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_InventoryLibrary_GetResultTimestamp_Statics::SIK_InventoryLibrary_eventGetResultTimestamp_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InventoryLibrary_GetResultTimestamp_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_InventoryLibrary_GetResultTimestamp_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_InventoryLibrary_GetResultTimestamp_Statics::SIK_InventoryLibrary_eventGetResultTimestamp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_InventoryLibrary_GetResultTimestamp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_InventoryLibrary_GetResultTimestamp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_InventoryLibrary::execGetResultTimestamp)
{
	P_GET_STRUCT(FSIK_SteamInventoryResult,Z_Param_InventoryResult);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Timestamp);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FDateTime*)Z_Param__Result=USIK_InventoryLibrary::GetResultTimestamp(Z_Param_InventoryResult,Z_Param_Out_Timestamp);
	P_NATIVE_END;
}
// ********** End Class USIK_InventoryLibrary Function GetResultTimestamp **************************

// ********** Begin Class USIK_InventoryLibrary Function GrantPromoItems ***************************
struct Z_Construct_UFunction_USIK_InventoryLibrary_GrantPromoItems_Statics
{
	struct SIK_InventoryLibrary_eventGrantPromoItems_Parms
	{
		FSIK_SteamInventoryResult InventoryResult;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Inventory" },
		{ "Comment", "/*\n\x09Grants promotional items to the user.\n\x09@param InventoryResult - The result handle.\n\x09@return - true if successful, false otherwise.\n\x09*/" },
		{ "ModuleRelativePath", "Functions/Inventory/SIK_InventoryLibrary.h" },
		{ "ToolTip", "Grants promotional items to the user.\n@param InventoryResult - The result handle.\n@return - true if successful, false otherwise." },
	};
#endif // WITH_METADATA

// ********** Begin Function GrantPromoItems constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_InventoryResult;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GrantPromoItems constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GrantPromoItems Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_GrantPromoItems_Statics::NewProp_InventoryResult = { "InventoryResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InventoryLibrary_eventGrantPromoItems_Parms, InventoryResult), Z_Construct_UScriptStruct_FSIK_SteamInventoryResult, METADATA_PARAMS(0, nullptr) }; // 959336186
void Z_Construct_UFunction_USIK_InventoryLibrary_GrantPromoItems_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_InventoryLibrary_eventGrantPromoItems_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_GrantPromoItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_InventoryLibrary_eventGrantPromoItems_Parms), &Z_Construct_UFunction_USIK_InventoryLibrary_GrantPromoItems_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_InventoryLibrary_GrantPromoItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_GrantPromoItems_Statics::NewProp_InventoryResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_GrantPromoItems_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InventoryLibrary_GrantPromoItems_Statics::PropPointers) < 2048);
// ********** End Function GrantPromoItems Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_InventoryLibrary_GrantPromoItems_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_InventoryLibrary, nullptr, "GrantPromoItems", 	Z_Construct_UFunction_USIK_InventoryLibrary_GrantPromoItems_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InventoryLibrary_GrantPromoItems_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_InventoryLibrary_GrantPromoItems_Statics::SIK_InventoryLibrary_eventGrantPromoItems_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InventoryLibrary_GrantPromoItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_InventoryLibrary_GrantPromoItems_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_InventoryLibrary_GrantPromoItems_Statics::SIK_InventoryLibrary_eventGrantPromoItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_InventoryLibrary_GrantPromoItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_InventoryLibrary_GrantPromoItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_InventoryLibrary::execGrantPromoItems)
{
	P_GET_STRUCT_REF(FSIK_SteamInventoryResult,Z_Param_Out_InventoryResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_InventoryLibrary::GrantPromoItems(Z_Param_Out_InventoryResult);
	P_NATIVE_END;
}
// ********** End Class USIK_InventoryLibrary Function GrantPromoItems *****************************

// ********** Begin Class USIK_InventoryLibrary Function LoadItemDefinitions ***********************
struct Z_Construct_UFunction_USIK_InventoryLibrary_LoadItemDefinitions_Statics
{
	struct SIK_InventoryLibrary_eventLoadItemDefinitions_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Inventory" },
		{ "Comment", "/*\n\x09Loads the item definitions from the server.\n\x09@return - true if successful, false otherwise.\n\x09*/" },
		{ "ModuleRelativePath", "Functions/Inventory/SIK_InventoryLibrary.h" },
		{ "ToolTip", "Loads the item definitions from the server.\n@return - true if successful, false otherwise." },
	};
#endif // WITH_METADATA

// ********** Begin Function LoadItemDefinitions constinit property declarations *******************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function LoadItemDefinitions constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function LoadItemDefinitions Property Definitions ******************************
void Z_Construct_UFunction_USIK_InventoryLibrary_LoadItemDefinitions_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_InventoryLibrary_eventLoadItemDefinitions_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_LoadItemDefinitions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_InventoryLibrary_eventLoadItemDefinitions_Parms), &Z_Construct_UFunction_USIK_InventoryLibrary_LoadItemDefinitions_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_InventoryLibrary_LoadItemDefinitions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_LoadItemDefinitions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InventoryLibrary_LoadItemDefinitions_Statics::PropPointers) < 2048);
// ********** End Function LoadItemDefinitions Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_InventoryLibrary_LoadItemDefinitions_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_InventoryLibrary, nullptr, "LoadItemDefinitions", 	Z_Construct_UFunction_USIK_InventoryLibrary_LoadItemDefinitions_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InventoryLibrary_LoadItemDefinitions_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_InventoryLibrary_LoadItemDefinitions_Statics::SIK_InventoryLibrary_eventLoadItemDefinitions_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InventoryLibrary_LoadItemDefinitions_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_InventoryLibrary_LoadItemDefinitions_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_InventoryLibrary_LoadItemDefinitions_Statics::SIK_InventoryLibrary_eventLoadItemDefinitions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_InventoryLibrary_LoadItemDefinitions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_InventoryLibrary_LoadItemDefinitions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_InventoryLibrary::execLoadItemDefinitions)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_InventoryLibrary::LoadItemDefinitions();
	P_NATIVE_END;
}
// ********** End Class USIK_InventoryLibrary Function LoadItemDefinitions *************************

// ********** Begin Class USIK_InventoryLibrary Function RemoveProperty ****************************
struct Z_Construct_UFunction_USIK_InventoryLibrary_RemoveProperty_Statics
{
	struct SIK_InventoryLibrary_eventRemoveProperty_Parms
	{
		FSIK_SteamInventoryUpdateHandle UpdateHandle;
		FSIK_SteamItemInstanceID ItemInstance;
		FString PropertyName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Inventory" },
		{ "Comment", "/*\n\x09Removes a property from an item.\n\x09@param UpdateHandle - The update handle.\n\x09@param ItemInstance - The instance ID of the item.\n\x09@param PropertyName - The name of the property to remove.\n\x09@return - true if successful, false otherwise.\n\x09*/" },
		{ "ModuleRelativePath", "Functions/Inventory/SIK_InventoryLibrary.h" },
		{ "ToolTip", "Removes a property from an item.\n@param UpdateHandle - The update handle.\n@param ItemInstance - The instance ID of the item.\n@param PropertyName - The name of the property to remove.\n@return - true if successful, false otherwise." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveProperty constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_UpdateHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemInstance;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RemoveProperty constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RemoveProperty Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_RemoveProperty_Statics::NewProp_UpdateHandle = { "UpdateHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InventoryLibrary_eventRemoveProperty_Parms, UpdateHandle), Z_Construct_UScriptStruct_FSIK_SteamInventoryUpdateHandle, METADATA_PARAMS(0, nullptr) }; // 4268775131
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_RemoveProperty_Statics::NewProp_ItemInstance = { "ItemInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InventoryLibrary_eventRemoveProperty_Parms, ItemInstance), Z_Construct_UScriptStruct_FSIK_SteamItemInstanceID, METADATA_PARAMS(0, nullptr) }; // 2091965911
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_RemoveProperty_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InventoryLibrary_eventRemoveProperty_Parms, PropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyName_MetaData), NewProp_PropertyName_MetaData) };
void Z_Construct_UFunction_USIK_InventoryLibrary_RemoveProperty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_InventoryLibrary_eventRemoveProperty_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_RemoveProperty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_InventoryLibrary_eventRemoveProperty_Parms), &Z_Construct_UFunction_USIK_InventoryLibrary_RemoveProperty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_InventoryLibrary_RemoveProperty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_RemoveProperty_Statics::NewProp_UpdateHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_RemoveProperty_Statics::NewProp_ItemInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_RemoveProperty_Statics::NewProp_PropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_RemoveProperty_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InventoryLibrary_RemoveProperty_Statics::PropPointers) < 2048);
// ********** End Function RemoveProperty Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_InventoryLibrary_RemoveProperty_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_InventoryLibrary, nullptr, "RemoveProperty", 	Z_Construct_UFunction_USIK_InventoryLibrary_RemoveProperty_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InventoryLibrary_RemoveProperty_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_InventoryLibrary_RemoveProperty_Statics::SIK_InventoryLibrary_eventRemoveProperty_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InventoryLibrary_RemoveProperty_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_InventoryLibrary_RemoveProperty_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_InventoryLibrary_RemoveProperty_Statics::SIK_InventoryLibrary_eventRemoveProperty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_InventoryLibrary_RemoveProperty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_InventoryLibrary_RemoveProperty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_InventoryLibrary::execRemoveProperty)
{
	P_GET_STRUCT(FSIK_SteamInventoryUpdateHandle,Z_Param_UpdateHandle);
	P_GET_STRUCT(FSIK_SteamItemInstanceID,Z_Param_ItemInstance);
	P_GET_PROPERTY(FStrProperty,Z_Param_PropertyName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_InventoryLibrary::RemoveProperty(Z_Param_UpdateHandle,Z_Param_ItemInstance,Z_Param_PropertyName);
	P_NATIVE_END;
}
// ********** End Class USIK_InventoryLibrary Function RemoveProperty ******************************

// ********** Begin Class USIK_InventoryLibrary Function SerializeResult ***************************
struct Z_Construct_UFunction_USIK_InventoryLibrary_SerializeResult_Statics
{
	struct SIK_InventoryLibrary_eventSerializeResult_Parms
	{
		FSIK_SteamInventoryResult InventoryResult;
		TArray<uint8> Buffer;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Inventory" },
		{ "Comment", "/*\n\x09Serializes the result to a buffer.\n\x09@param InventoryResult - The result handle.\n\x09@param Buffer - The buffer to store the serialized data.\n\x09@return - true if successful, false otherwise.\n\x09*/" },
		{ "ModuleRelativePath", "Functions/Inventory/SIK_InventoryLibrary.h" },
		{ "ToolTip", "Serializes the result to a buffer.\n@param InventoryResult - The result handle.\n@param Buffer - The buffer to store the serialized data.\n@return - true if successful, false otherwise." },
	};
#endif // WITH_METADATA

// ********** Begin Function SerializeResult constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_InventoryResult;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Buffer_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Buffer;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SerializeResult constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SerializeResult Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_SerializeResult_Statics::NewProp_InventoryResult = { "InventoryResult", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InventoryLibrary_eventSerializeResult_Parms, InventoryResult), Z_Construct_UScriptStruct_FSIK_SteamInventoryResult, METADATA_PARAMS(0, nullptr) }; // 959336186
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_SerializeResult_Statics::NewProp_Buffer_Inner = { "Buffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_SerializeResult_Statics::NewProp_Buffer = { "Buffer", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InventoryLibrary_eventSerializeResult_Parms, Buffer), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_InventoryLibrary_SerializeResult_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_InventoryLibrary_eventSerializeResult_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_SerializeResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_InventoryLibrary_eventSerializeResult_Parms), &Z_Construct_UFunction_USIK_InventoryLibrary_SerializeResult_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_InventoryLibrary_SerializeResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_SerializeResult_Statics::NewProp_InventoryResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_SerializeResult_Statics::NewProp_Buffer_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_SerializeResult_Statics::NewProp_Buffer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_SerializeResult_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InventoryLibrary_SerializeResult_Statics::PropPointers) < 2048);
// ********** End Function SerializeResult Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_InventoryLibrary_SerializeResult_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_InventoryLibrary, nullptr, "SerializeResult", 	Z_Construct_UFunction_USIK_InventoryLibrary_SerializeResult_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InventoryLibrary_SerializeResult_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_InventoryLibrary_SerializeResult_Statics::SIK_InventoryLibrary_eventSerializeResult_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InventoryLibrary_SerializeResult_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_InventoryLibrary_SerializeResult_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_InventoryLibrary_SerializeResult_Statics::SIK_InventoryLibrary_eventSerializeResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_InventoryLibrary_SerializeResult()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_InventoryLibrary_SerializeResult_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_InventoryLibrary::execSerializeResult)
{
	P_GET_STRUCT(FSIK_SteamInventoryResult,Z_Param_InventoryResult);
	P_GET_TARRAY_REF(uint8,Z_Param_Out_Buffer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_InventoryLibrary::SerializeResult(Z_Param_InventoryResult,Z_Param_Out_Buffer);
	P_NATIVE_END;
}
// ********** End Class USIK_InventoryLibrary Function SerializeResult *****************************

// ********** Begin Class USIK_InventoryLibrary Function SetProperty *******************************
struct Z_Construct_UFunction_USIK_InventoryLibrary_SetProperty_Statics
{
	struct SIK_InventoryLibrary_eventSetProperty_Parms
	{
		FSIK_SteamInventoryUpdateHandle UpdateHandle;
		FSIK_SteamItemInstanceID ItemInstance;
		FString PropertyName;
		FString Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Inventory" },
		{ "Comment", "/*\n\x09Sets a property for an item.\n\x09@param UpdateHandle - The update handle.\n\x09@param ItemInstance - The instance ID of the item.\n\x09@param PropertyName - The name of the property to set.\n\x09@param Value - The value of the property.\n\x09@return - true if successful, false otherwise.\n\x09*/" },
		{ "ModuleRelativePath", "Functions/Inventory/SIK_InventoryLibrary.h" },
		{ "ToolTip", "Sets a property for an item.\n@param UpdateHandle - The update handle.\n@param ItemInstance - The instance ID of the item.\n@param PropertyName - The name of the property to set.\n@param Value - The value of the property.\n@return - true if successful, false otherwise." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetProperty constinit property declarations ***************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_UpdateHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemInstance;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetProperty constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetProperty Property Definitions **************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_SetProperty_Statics::NewProp_UpdateHandle = { "UpdateHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InventoryLibrary_eventSetProperty_Parms, UpdateHandle), Z_Construct_UScriptStruct_FSIK_SteamInventoryUpdateHandle, METADATA_PARAMS(0, nullptr) }; // 4268775131
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_SetProperty_Statics::NewProp_ItemInstance = { "ItemInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InventoryLibrary_eventSetProperty_Parms, ItemInstance), Z_Construct_UScriptStruct_FSIK_SteamItemInstanceID, METADATA_PARAMS(0, nullptr) }; // 2091965911
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_SetProperty_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InventoryLibrary_eventSetProperty_Parms, PropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyName_MetaData), NewProp_PropertyName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_SetProperty_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InventoryLibrary_eventSetProperty_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
void Z_Construct_UFunction_USIK_InventoryLibrary_SetProperty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_InventoryLibrary_eventSetProperty_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_SetProperty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_InventoryLibrary_eventSetProperty_Parms), &Z_Construct_UFunction_USIK_InventoryLibrary_SetProperty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_InventoryLibrary_SetProperty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_SetProperty_Statics::NewProp_UpdateHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_SetProperty_Statics::NewProp_ItemInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_SetProperty_Statics::NewProp_PropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_SetProperty_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_SetProperty_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InventoryLibrary_SetProperty_Statics::PropPointers) < 2048);
// ********** End Function SetProperty Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_InventoryLibrary_SetProperty_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_InventoryLibrary, nullptr, "SetProperty", 	Z_Construct_UFunction_USIK_InventoryLibrary_SetProperty_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InventoryLibrary_SetProperty_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_InventoryLibrary_SetProperty_Statics::SIK_InventoryLibrary_eventSetProperty_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InventoryLibrary_SetProperty_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_InventoryLibrary_SetProperty_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_InventoryLibrary_SetProperty_Statics::SIK_InventoryLibrary_eventSetProperty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_InventoryLibrary_SetProperty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_InventoryLibrary_SetProperty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_InventoryLibrary::execSetProperty)
{
	P_GET_STRUCT(FSIK_SteamInventoryUpdateHandle,Z_Param_UpdateHandle);
	P_GET_STRUCT(FSIK_SteamItemInstanceID,Z_Param_ItemInstance);
	P_GET_PROPERTY(FStrProperty,Z_Param_PropertyName);
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_InventoryLibrary::SetProperty(Z_Param_UpdateHandle,Z_Param_ItemInstance,Z_Param_PropertyName,Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class USIK_InventoryLibrary Function SetProperty *********************************

// ********** Begin Class USIK_InventoryLibrary Function StartUpdateProperties *********************
struct Z_Construct_UFunction_USIK_InventoryLibrary_StartUpdateProperties_Statics
{
	struct SIK_InventoryLibrary_eventStartUpdateProperties_Parms
	{
		FSIK_SteamInventoryUpdateHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Inventory" },
		{ "Comment", "/*\n\x09""Begins an update to item properties.\n\x09@return - The update handle.\n\x09*/" },
		{ "ModuleRelativePath", "Functions/Inventory/SIK_InventoryLibrary.h" },
		{ "ToolTip", "Begins an update to item properties.\n@return - The update handle." },
	};
#endif // WITH_METADATA

// ********** Begin Function StartUpdateProperties constinit property declarations *****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function StartUpdateProperties constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function StartUpdateProperties Property Definitions ****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_StartUpdateProperties_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InventoryLibrary_eventStartUpdateProperties_Parms, ReturnValue), Z_Construct_UScriptStruct_FSIK_SteamInventoryUpdateHandle, METADATA_PARAMS(0, nullptr) }; // 4268775131
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_InventoryLibrary_StartUpdateProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_StartUpdateProperties_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InventoryLibrary_StartUpdateProperties_Statics::PropPointers) < 2048);
// ********** End Function StartUpdateProperties Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_InventoryLibrary_StartUpdateProperties_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_InventoryLibrary, nullptr, "StartUpdateProperties", 	Z_Construct_UFunction_USIK_InventoryLibrary_StartUpdateProperties_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InventoryLibrary_StartUpdateProperties_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_InventoryLibrary_StartUpdateProperties_Statics::SIK_InventoryLibrary_eventStartUpdateProperties_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InventoryLibrary_StartUpdateProperties_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_InventoryLibrary_StartUpdateProperties_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_InventoryLibrary_StartUpdateProperties_Statics::SIK_InventoryLibrary_eventStartUpdateProperties_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_InventoryLibrary_StartUpdateProperties()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_InventoryLibrary_StartUpdateProperties_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_InventoryLibrary::execStartUpdateProperties)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSIK_SteamInventoryUpdateHandle*)Z_Param__Result=USIK_InventoryLibrary::StartUpdateProperties();
	P_NATIVE_END;
}
// ********** End Class USIK_InventoryLibrary Function StartUpdateProperties ***********************

// ********** Begin Class USIK_InventoryLibrary Function SubmitUpdateProperties ********************
struct Z_Construct_UFunction_USIK_InventoryLibrary_SubmitUpdateProperties_Statics
{
	struct SIK_InventoryLibrary_eventSubmitUpdateProperties_Parms
	{
		FSIK_SteamInventoryUpdateHandle UpdateHandle;
		FSIK_SteamInventoryResult InventoryResult;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Inventory" },
		{ "Comment", "/*\n\x09Submits the update to item properties.\n\x09@param UpdateHandle - The update handle.\n\x09@param InventoryResult - The result handle.\n\x09@return - true if successful, false otherwise.\n\x09*/" },
		{ "ModuleRelativePath", "Functions/Inventory/SIK_InventoryLibrary.h" },
		{ "ToolTip", "Submits the update to item properties.\n@param UpdateHandle - The update handle.\n@param InventoryResult - The result handle.\n@return - true if successful, false otherwise." },
	};
#endif // WITH_METADATA

// ********** Begin Function SubmitUpdateProperties constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_UpdateHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InventoryResult;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SubmitUpdateProperties constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SubmitUpdateProperties Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_SubmitUpdateProperties_Statics::NewProp_UpdateHandle = { "UpdateHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InventoryLibrary_eventSubmitUpdateProperties_Parms, UpdateHandle), Z_Construct_UScriptStruct_FSIK_SteamInventoryUpdateHandle, METADATA_PARAMS(0, nullptr) }; // 4268775131
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_SubmitUpdateProperties_Statics::NewProp_InventoryResult = { "InventoryResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InventoryLibrary_eventSubmitUpdateProperties_Parms, InventoryResult), Z_Construct_UScriptStruct_FSIK_SteamInventoryResult, METADATA_PARAMS(0, nullptr) }; // 959336186
void Z_Construct_UFunction_USIK_InventoryLibrary_SubmitUpdateProperties_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_InventoryLibrary_eventSubmitUpdateProperties_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_SubmitUpdateProperties_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_InventoryLibrary_eventSubmitUpdateProperties_Parms), &Z_Construct_UFunction_USIK_InventoryLibrary_SubmitUpdateProperties_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_InventoryLibrary_SubmitUpdateProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_SubmitUpdateProperties_Statics::NewProp_UpdateHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_SubmitUpdateProperties_Statics::NewProp_InventoryResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_SubmitUpdateProperties_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InventoryLibrary_SubmitUpdateProperties_Statics::PropPointers) < 2048);
// ********** End Function SubmitUpdateProperties Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_InventoryLibrary_SubmitUpdateProperties_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_InventoryLibrary, nullptr, "SubmitUpdateProperties", 	Z_Construct_UFunction_USIK_InventoryLibrary_SubmitUpdateProperties_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InventoryLibrary_SubmitUpdateProperties_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_InventoryLibrary_SubmitUpdateProperties_Statics::SIK_InventoryLibrary_eventSubmitUpdateProperties_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InventoryLibrary_SubmitUpdateProperties_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_InventoryLibrary_SubmitUpdateProperties_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_InventoryLibrary_SubmitUpdateProperties_Statics::SIK_InventoryLibrary_eventSubmitUpdateProperties_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_InventoryLibrary_SubmitUpdateProperties()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_InventoryLibrary_SubmitUpdateProperties_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_InventoryLibrary::execSubmitUpdateProperties)
{
	P_GET_STRUCT(FSIK_SteamInventoryUpdateHandle,Z_Param_UpdateHandle);
	P_GET_STRUCT_REF(FSIK_SteamInventoryResult,Z_Param_Out_InventoryResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_InventoryLibrary::SubmitUpdateProperties(Z_Param_UpdateHandle,Z_Param_Out_InventoryResult);
	P_NATIVE_END;
}
// ********** End Class USIK_InventoryLibrary Function SubmitUpdateProperties **********************

// ********** Begin Class USIK_InventoryLibrary Function TransferItemQuantity **********************
struct Z_Construct_UFunction_USIK_InventoryLibrary_TransferItemQuantity_Statics
{
	struct SIK_InventoryLibrary_eventTransferItemQuantity_Parms
	{
		FSIK_SteamInventoryResult InventoryResult;
		FSIK_SteamItemInstanceID ItemInstance;
		int32 Quantity;
		FSIK_SteamItemInstanceID itemIdDest;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Inventory" },
		{ "Comment", "/*\n\x09Transfers a quantity of an item to another item instance.\n\x09@param InventoryResult - The result handle.\n\x09@param ItemInstance - The instance ID of the item to transfer from.\n\x09@param Quantity - The quantity to transfer.\n\x09@param ItemIdDest - The instance ID of the item to transfer to.\n\x09@return - true if successful, false otherwise.\n\x09*/" },
		{ "ModuleRelativePath", "Functions/Inventory/SIK_InventoryLibrary.h" },
		{ "ToolTip", "Transfers a quantity of an item to another item instance.\n@param InventoryResult - The result handle.\n@param ItemInstance - The instance ID of the item to transfer from.\n@param Quantity - The quantity to transfer.\n@param ItemIdDest - The instance ID of the item to transfer to.\n@return - true if successful, false otherwise." },
	};
#endif // WITH_METADATA

// ********** Begin Function TransferItemQuantity constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_InventoryResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemInstance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_itemIdDest;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function TransferItemQuantity constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function TransferItemQuantity Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_TransferItemQuantity_Statics::NewProp_InventoryResult = { "InventoryResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InventoryLibrary_eventTransferItemQuantity_Parms, InventoryResult), Z_Construct_UScriptStruct_FSIK_SteamInventoryResult, METADATA_PARAMS(0, nullptr) }; // 959336186
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_TransferItemQuantity_Statics::NewProp_ItemInstance = { "ItemInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InventoryLibrary_eventTransferItemQuantity_Parms, ItemInstance), Z_Construct_UScriptStruct_FSIK_SteamItemInstanceID, METADATA_PARAMS(0, nullptr) }; // 2091965911
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_TransferItemQuantity_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InventoryLibrary_eventTransferItemQuantity_Parms, Quantity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_TransferItemQuantity_Statics::NewProp_itemIdDest = { "itemIdDest", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InventoryLibrary_eventTransferItemQuantity_Parms, itemIdDest), Z_Construct_UScriptStruct_FSIK_SteamItemInstanceID, METADATA_PARAMS(0, nullptr) }; // 2091965911
void Z_Construct_UFunction_USIK_InventoryLibrary_TransferItemQuantity_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_InventoryLibrary_eventTransferItemQuantity_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_TransferItemQuantity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_InventoryLibrary_eventTransferItemQuantity_Parms), &Z_Construct_UFunction_USIK_InventoryLibrary_TransferItemQuantity_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_InventoryLibrary_TransferItemQuantity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_TransferItemQuantity_Statics::NewProp_InventoryResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_TransferItemQuantity_Statics::NewProp_ItemInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_TransferItemQuantity_Statics::NewProp_Quantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_TransferItemQuantity_Statics::NewProp_itemIdDest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_TransferItemQuantity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InventoryLibrary_TransferItemQuantity_Statics::PropPointers) < 2048);
// ********** End Function TransferItemQuantity Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_InventoryLibrary_TransferItemQuantity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_InventoryLibrary, nullptr, "TransferItemQuantity", 	Z_Construct_UFunction_USIK_InventoryLibrary_TransferItemQuantity_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InventoryLibrary_TransferItemQuantity_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_InventoryLibrary_TransferItemQuantity_Statics::SIK_InventoryLibrary_eventTransferItemQuantity_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InventoryLibrary_TransferItemQuantity_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_InventoryLibrary_TransferItemQuantity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_InventoryLibrary_TransferItemQuantity_Statics::SIK_InventoryLibrary_eventTransferItemQuantity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_InventoryLibrary_TransferItemQuantity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_InventoryLibrary_TransferItemQuantity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_InventoryLibrary::execTransferItemQuantity)
{
	P_GET_STRUCT_REF(FSIK_SteamInventoryResult,Z_Param_Out_InventoryResult);
	P_GET_STRUCT(FSIK_SteamItemInstanceID,Z_Param_ItemInstance);
	P_GET_PROPERTY(FIntProperty,Z_Param_Quantity);
	P_GET_STRUCT(FSIK_SteamItemInstanceID,Z_Param_itemIdDest);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_InventoryLibrary::TransferItemQuantity(Z_Param_Out_InventoryResult,Z_Param_ItemInstance,Z_Param_Quantity,Z_Param_itemIdDest);
	P_NATIVE_END;
}
// ********** End Class USIK_InventoryLibrary Function TransferItemQuantity ************************

// ********** Begin Class USIK_InventoryLibrary Function TriggerItemDrop ***************************
struct Z_Construct_UFunction_USIK_InventoryLibrary_TriggerItemDrop_Statics
{
	struct SIK_InventoryLibrary_eventTriggerItemDrop_Parms
	{
		FSIK_SteamInventoryResult InventoryResult;
		FSIK_SteamItemDef ItemDef;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Inventory" },
		{ "Comment", "/*\n\x09Triggers an item drop for the user.\n\x09@param InventoryResult - The result handle.\n\x09@param ItemDef - The definition of the item to drop.\n\x09@return - true if successful, false otherwise.\n\x09*/" },
		{ "ModuleRelativePath", "Functions/Inventory/SIK_InventoryLibrary.h" },
		{ "ToolTip", "Triggers an item drop for the user.\n@param InventoryResult - The result handle.\n@param ItemDef - The definition of the item to drop.\n@return - true if successful, false otherwise." },
	};
#endif // WITH_METADATA

// ********** Begin Function TriggerItemDrop constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_InventoryResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemDef;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function TriggerItemDrop constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function TriggerItemDrop Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_TriggerItemDrop_Statics::NewProp_InventoryResult = { "InventoryResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InventoryLibrary_eventTriggerItemDrop_Parms, InventoryResult), Z_Construct_UScriptStruct_FSIK_SteamInventoryResult, METADATA_PARAMS(0, nullptr) }; // 959336186
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_TriggerItemDrop_Statics::NewProp_ItemDef = { "ItemDef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InventoryLibrary_eventTriggerItemDrop_Parms, ItemDef), Z_Construct_UScriptStruct_FSIK_SteamItemDef, METADATA_PARAMS(0, nullptr) }; // 2053655220
void Z_Construct_UFunction_USIK_InventoryLibrary_TriggerItemDrop_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_InventoryLibrary_eventTriggerItemDrop_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_InventoryLibrary_TriggerItemDrop_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_InventoryLibrary_eventTriggerItemDrop_Parms), &Z_Construct_UFunction_USIK_InventoryLibrary_TriggerItemDrop_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_InventoryLibrary_TriggerItemDrop_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_TriggerItemDrop_Statics::NewProp_InventoryResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_TriggerItemDrop_Statics::NewProp_ItemDef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InventoryLibrary_TriggerItemDrop_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InventoryLibrary_TriggerItemDrop_Statics::PropPointers) < 2048);
// ********** End Function TriggerItemDrop Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_InventoryLibrary_TriggerItemDrop_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_InventoryLibrary, nullptr, "TriggerItemDrop", 	Z_Construct_UFunction_USIK_InventoryLibrary_TriggerItemDrop_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InventoryLibrary_TriggerItemDrop_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_InventoryLibrary_TriggerItemDrop_Statics::SIK_InventoryLibrary_eventTriggerItemDrop_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InventoryLibrary_TriggerItemDrop_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_InventoryLibrary_TriggerItemDrop_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_InventoryLibrary_TriggerItemDrop_Statics::SIK_InventoryLibrary_eventTriggerItemDrop_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_InventoryLibrary_TriggerItemDrop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_InventoryLibrary_TriggerItemDrop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_InventoryLibrary::execTriggerItemDrop)
{
	P_GET_STRUCT_REF(FSIK_SteamInventoryResult,Z_Param_Out_InventoryResult);
	P_GET_STRUCT(FSIK_SteamItemDef,Z_Param_ItemDef);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_InventoryLibrary::TriggerItemDrop(Z_Param_Out_InventoryResult,Z_Param_ItemDef);
	P_NATIVE_END;
}
// ********** End Class USIK_InventoryLibrary Function TriggerItemDrop *****************************

// ********** Begin Class USIK_InventoryLibrary ****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_InventoryLibrary;
UClass* USIK_InventoryLibrary::GetPrivateStaticClass()
{
	using TClass = USIK_InventoryLibrary;
	if (!Z_Registration_Info_UClass_USIK_InventoryLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_InventoryLibrary"),
			Z_Registration_Info_UClass_USIK_InventoryLibrary.InnerSingleton,
			StaticRegisterNativesUSIK_InventoryLibrary,
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
	return Z_Registration_Info_UClass_USIK_InventoryLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_InventoryLibrary_NoRegister()
{
	return USIK_InventoryLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_InventoryLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/Inventory/SIK_InventoryLibrary.h" },
		{ "ModuleRelativePath", "Functions/Inventory/SIK_InventoryLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_InventoryLibrary constinit property declarations ********************
// ********** End Class USIK_InventoryLibrary constinit property declarations **********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AddPromoItem"), .Pointer = &USIK_InventoryLibrary::execAddPromoItem },
		{ .NameUTF8 = UTF8TEXT("AddPromoItems"), .Pointer = &USIK_InventoryLibrary::execAddPromoItems },
		{ .NameUTF8 = UTF8TEXT("CheckResultSteamID"), .Pointer = &USIK_InventoryLibrary::execCheckResultSteamID },
		{ .NameUTF8 = UTF8TEXT("ConsumeItem"), .Pointer = &USIK_InventoryLibrary::execConsumeItem },
		{ .NameUTF8 = UTF8TEXT("DeserializeResult"), .Pointer = &USIK_InventoryLibrary::execDeserializeResult },
		{ .NameUTF8 = UTF8TEXT("DestroyResult"), .Pointer = &USIK_InventoryLibrary::execDestroyResult },
		{ .NameUTF8 = UTF8TEXT("ExchangeItems"), .Pointer = &USIK_InventoryLibrary::execExchangeItems },
		{ .NameUTF8 = UTF8TEXT("GenerateItems"), .Pointer = &USIK_InventoryLibrary::execGenerateItems },
		{ .NameUTF8 = UTF8TEXT("GetAllItems"), .Pointer = &USIK_InventoryLibrary::execGetAllItems },
		{ .NameUTF8 = UTF8TEXT("GetEligiblePromoItemDefinitionIDs"), .Pointer = &USIK_InventoryLibrary::execGetEligiblePromoItemDefinitionIDs },
		{ .NameUTF8 = UTF8TEXT("GetItemDefinitionIDs"), .Pointer = &USIK_InventoryLibrary::execGetItemDefinitionIDs },
		{ .NameUTF8 = UTF8TEXT("GetItemDefinitionProperty"), .Pointer = &USIK_InventoryLibrary::execGetItemDefinitionProperty },
		{ .NameUTF8 = UTF8TEXT("GetItemPrice"), .Pointer = &USIK_InventoryLibrary::execGetItemPrice },
		{ .NameUTF8 = UTF8TEXT("GetItemsByID"), .Pointer = &USIK_InventoryLibrary::execGetItemsByID },
		{ .NameUTF8 = UTF8TEXT("GetItemsWithPrices"), .Pointer = &USIK_InventoryLibrary::execGetItemsWithPrices },
		{ .NameUTF8 = UTF8TEXT("GetNumItemsWithPrices"), .Pointer = &USIK_InventoryLibrary::execGetNumItemsWithPrices },
		{ .NameUTF8 = UTF8TEXT("GetResultItemProperty"), .Pointer = &USIK_InventoryLibrary::execGetResultItemProperty },
		{ .NameUTF8 = UTF8TEXT("GetResultItems"), .Pointer = &USIK_InventoryLibrary::execGetResultItems },
		{ .NameUTF8 = UTF8TEXT("GetResultStatus"), .Pointer = &USIK_InventoryLibrary::execGetResultStatus },
		{ .NameUTF8 = UTF8TEXT("GetResultTimestamp"), .Pointer = &USIK_InventoryLibrary::execGetResultTimestamp },
		{ .NameUTF8 = UTF8TEXT("GrantPromoItems"), .Pointer = &USIK_InventoryLibrary::execGrantPromoItems },
		{ .NameUTF8 = UTF8TEXT("LoadItemDefinitions"), .Pointer = &USIK_InventoryLibrary::execLoadItemDefinitions },
		{ .NameUTF8 = UTF8TEXT("RemoveProperty"), .Pointer = &USIK_InventoryLibrary::execRemoveProperty },
		{ .NameUTF8 = UTF8TEXT("SerializeResult"), .Pointer = &USIK_InventoryLibrary::execSerializeResult },
		{ .NameUTF8 = UTF8TEXT("SetProperty"), .Pointer = &USIK_InventoryLibrary::execSetProperty },
		{ .NameUTF8 = UTF8TEXT("StartUpdateProperties"), .Pointer = &USIK_InventoryLibrary::execStartUpdateProperties },
		{ .NameUTF8 = UTF8TEXT("SubmitUpdateProperties"), .Pointer = &USIK_InventoryLibrary::execSubmitUpdateProperties },
		{ .NameUTF8 = UTF8TEXT("TransferItemQuantity"), .Pointer = &USIK_InventoryLibrary::execTransferItemQuantity },
		{ .NameUTF8 = UTF8TEXT("TriggerItemDrop"), .Pointer = &USIK_InventoryLibrary::execTriggerItemDrop },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_InventoryLibrary_AddPromoItem, "AddPromoItem" }, // 1890787149
		{ &Z_Construct_UFunction_USIK_InventoryLibrary_AddPromoItems, "AddPromoItems" }, // 881514531
		{ &Z_Construct_UFunction_USIK_InventoryLibrary_CheckResultSteamID, "CheckResultSteamID" }, // 3192951407
		{ &Z_Construct_UFunction_USIK_InventoryLibrary_ConsumeItem, "ConsumeItem" }, // 3757322302
		{ &Z_Construct_UFunction_USIK_InventoryLibrary_DeserializeResult, "DeserializeResult" }, // 4194087045
		{ &Z_Construct_UFunction_USIK_InventoryLibrary_DestroyResult, "DestroyResult" }, // 1459479975
		{ &Z_Construct_UFunction_USIK_InventoryLibrary_ExchangeItems, "ExchangeItems" }, // 1871227107
		{ &Z_Construct_UFunction_USIK_InventoryLibrary_GenerateItems, "GenerateItems" }, // 584517101
		{ &Z_Construct_UFunction_USIK_InventoryLibrary_GetAllItems, "GetAllItems" }, // 966180232
		{ &Z_Construct_UFunction_USIK_InventoryLibrary_GetEligiblePromoItemDefinitionIDs, "GetEligiblePromoItemDefinitionIDs" }, // 4274080993
		{ &Z_Construct_UFunction_USIK_InventoryLibrary_GetItemDefinitionIDs, "GetItemDefinitionIDs" }, // 2515037637
		{ &Z_Construct_UFunction_USIK_InventoryLibrary_GetItemDefinitionProperty, "GetItemDefinitionProperty" }, // 440974811
		{ &Z_Construct_UFunction_USIK_InventoryLibrary_GetItemPrice, "GetItemPrice" }, // 1619906548
		{ &Z_Construct_UFunction_USIK_InventoryLibrary_GetItemsByID, "GetItemsByID" }, // 60777925
		{ &Z_Construct_UFunction_USIK_InventoryLibrary_GetItemsWithPrices, "GetItemsWithPrices" }, // 1163476149
		{ &Z_Construct_UFunction_USIK_InventoryLibrary_GetNumItemsWithPrices, "GetNumItemsWithPrices" }, // 1324201308
		{ &Z_Construct_UFunction_USIK_InventoryLibrary_GetResultItemProperty, "GetResultItemProperty" }, // 2889830531
		{ &Z_Construct_UFunction_USIK_InventoryLibrary_GetResultItems, "GetResultItems" }, // 3467272413
		{ &Z_Construct_UFunction_USIK_InventoryLibrary_GetResultStatus, "GetResultStatus" }, // 1196786526
		{ &Z_Construct_UFunction_USIK_InventoryLibrary_GetResultTimestamp, "GetResultTimestamp" }, // 3916034264
		{ &Z_Construct_UFunction_USIK_InventoryLibrary_GrantPromoItems, "GrantPromoItems" }, // 4082684715
		{ &Z_Construct_UFunction_USIK_InventoryLibrary_LoadItemDefinitions, "LoadItemDefinitions" }, // 3330338625
		{ &Z_Construct_UFunction_USIK_InventoryLibrary_RemoveProperty, "RemoveProperty" }, // 3594018400
		{ &Z_Construct_UFunction_USIK_InventoryLibrary_SerializeResult, "SerializeResult" }, // 1912255296
		{ &Z_Construct_UFunction_USIK_InventoryLibrary_SetProperty, "SetProperty" }, // 3516605360
		{ &Z_Construct_UFunction_USIK_InventoryLibrary_StartUpdateProperties, "StartUpdateProperties" }, // 2418744588
		{ &Z_Construct_UFunction_USIK_InventoryLibrary_SubmitUpdateProperties, "SubmitUpdateProperties" }, // 2725223780
		{ &Z_Construct_UFunction_USIK_InventoryLibrary_TransferItemQuantity, "TransferItemQuantity" }, // 95020563
		{ &Z_Construct_UFunction_USIK_InventoryLibrary_TriggerItemDrop, "TriggerItemDrop" }, // 327376711
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_InventoryLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_InventoryLibrary_Statics
UObject* (*const Z_Construct_UClass_USIK_InventoryLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_InventoryLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_InventoryLibrary_Statics::ClassParams = {
	&USIK_InventoryLibrary::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_InventoryLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_InventoryLibrary_Statics::Class_MetaDataParams)
};
void USIK_InventoryLibrary::StaticRegisterNativesUSIK_InventoryLibrary()
{
	UClass* Class = USIK_InventoryLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_InventoryLibrary_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_InventoryLibrary()
{
	if (!Z_Registration_Info_UClass_USIK_InventoryLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_InventoryLibrary.OuterSingleton, Z_Construct_UClass_USIK_InventoryLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_InventoryLibrary.OuterSingleton;
}
USIK_InventoryLibrary::USIK_InventoryLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_InventoryLibrary);
USIK_InventoryLibrary::~USIK_InventoryLibrary() {}
// ********** End Class USIK_InventoryLibrary ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Inventory_SIK_InventoryLibrary_h__Script_SteamIntegrationKit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_InventoryLibrary, USIK_InventoryLibrary::StaticClass, TEXT("USIK_InventoryLibrary"), &Z_Registration_Info_UClass_USIK_InventoryLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_InventoryLibrary), 2299604128U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Inventory_SIK_InventoryLibrary_h__Script_SteamIntegrationKit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Inventory_SIK_InventoryLibrary_h__Script_SteamIntegrationKit_2599722893{
	TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Inventory_SIK_InventoryLibrary_h__Script_SteamIntegrationKit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Inventory_SIK_InventoryLibrary_h__Script_SteamIntegrationKit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
