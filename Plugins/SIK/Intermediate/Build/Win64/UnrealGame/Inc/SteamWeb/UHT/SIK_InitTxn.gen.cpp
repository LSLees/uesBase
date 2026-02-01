// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/MicroTxn/SIK_InitTxn.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_InitTxn() {}

// ********** Begin Cross Module References ********************************************************
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_InitTxn();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_InitTxn_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USIK_InitTxn Function InitTxn ********************************************
struct Z_Construct_UFunction_USIK_InitTxn_InitTxn_Statics
{
	struct SIK_InitTxn_eventInitTxn_Parms
	{
		FString Key;
		int64 OrderId;
		int64 SteamId;
		int32 AppId;
		int32 ItemCount;
		FString Language;
		FString Currency;
		FString UserSession;
		FString IpAddress;
		int32 ItemId;
		int32 Qty;
		int64 Amount;
		FString Description;
		FString Category;
		int32 AssociatedBundle;
		FString BillingType;
		FString Period;
		int32 Frequency;
		int64 RecurringAmt;
		int32 BundleCount;
		int32 BundleId;
		int32 BundleQty;
		FString BundleDesc;
		FString BundleCategory;
		bool bUseSandBox;
		USIK_InitTxn* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|MicroTxn" },
		{ "Comment", "//Creates a new purchase. Send the order information along with the Steam ID to seed the transaction on Steam.\n" },
		{ "CPP_Default_AssociatedBundle", "-1" },
		{ "CPP_Default_BillingType", "" },
		{ "CPP_Default_BundleCategory", "" },
		{ "CPP_Default_BundleCount", "-1" },
		{ "CPP_Default_BundleDesc", "" },
		{ "CPP_Default_BundleId", "-1" },
		{ "CPP_Default_BundleQty", "-1" },
		{ "CPP_Default_bUseSandBox", "false" },
		{ "CPP_Default_Frequency", "-1" },
		{ "CPP_Default_Period", "" },
		{ "CPP_Default_RecurringAmt", "-1" },
		{ "ModuleRelativePath", "Functions/MicroTxn/SIK_InitTxn.h" },
		{ "ToolTip", "Creates a new purchase. Send the order information along with the Steam ID to seed the transaction on Steam." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrderId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemCount_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Language_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Currency_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserSession_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IpAddress_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Qty_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Amount_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssociatedBundle_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BillingType_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Period_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Frequency_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecurringAmt_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BundleCount_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BundleId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BundleQty_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BundleDesc_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BundleCategory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function InitTxn constinit property declarations *******************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_OrderId;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemCount;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Language;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Currency;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserSession;
	static const UECodeGen_Private::FStrPropertyParams NewProp_IpAddress;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Qty;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_Amount;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Category;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AssociatedBundle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BillingType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Period;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Frequency;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_RecurringAmt;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BundleCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BundleId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BundleQty;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BundleDesc;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BundleCategory;
	static void NewProp_bUseSandBox_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSandBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function InitTxn constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function InitTxn Property Definitions ******************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_InitTxn_InitTxn_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InitTxn_eventInitTxn_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_InitTxn_InitTxn_Statics::NewProp_OrderId = { "OrderId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InitTxn_eventInitTxn_Parms, OrderId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrderId_MetaData), NewProp_OrderId_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_InitTxn_InitTxn_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InitTxn_eventInitTxn_Parms, SteamId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamId_MetaData), NewProp_SteamId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_InitTxn_InitTxn_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InitTxn_eventInitTxn_Parms, AppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppId_MetaData), NewProp_AppId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_InitTxn_InitTxn_Statics::NewProp_ItemCount = { "ItemCount", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InitTxn_eventInitTxn_Parms, ItemCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemCount_MetaData), NewProp_ItemCount_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_InitTxn_InitTxn_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InitTxn_eventInitTxn_Parms, Language), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Language_MetaData), NewProp_Language_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_InitTxn_InitTxn_Statics::NewProp_Currency = { "Currency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InitTxn_eventInitTxn_Parms, Currency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Currency_MetaData), NewProp_Currency_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_InitTxn_InitTxn_Statics::NewProp_UserSession = { "UserSession", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InitTxn_eventInitTxn_Parms, UserSession), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserSession_MetaData), NewProp_UserSession_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_InitTxn_InitTxn_Statics::NewProp_IpAddress = { "IpAddress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InitTxn_eventInitTxn_Parms, IpAddress), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IpAddress_MetaData), NewProp_IpAddress_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_InitTxn_InitTxn_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InitTxn_eventInitTxn_Parms, ItemId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemId_MetaData), NewProp_ItemId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_InitTxn_InitTxn_Statics::NewProp_Qty = { "Qty", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InitTxn_eventInitTxn_Parms, Qty), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Qty_MetaData), NewProp_Qty_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_InitTxn_InitTxn_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InitTxn_eventInitTxn_Parms, Amount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Amount_MetaData), NewProp_Amount_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_InitTxn_InitTxn_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InitTxn_eventInitTxn_Parms, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_InitTxn_InitTxn_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InitTxn_eventInitTxn_Parms, Category), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Category_MetaData), NewProp_Category_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_InitTxn_InitTxn_Statics::NewProp_AssociatedBundle = { "AssociatedBundle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InitTxn_eventInitTxn_Parms, AssociatedBundle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssociatedBundle_MetaData), NewProp_AssociatedBundle_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_InitTxn_InitTxn_Statics::NewProp_BillingType = { "BillingType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InitTxn_eventInitTxn_Parms, BillingType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BillingType_MetaData), NewProp_BillingType_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_InitTxn_InitTxn_Statics::NewProp_Period = { "Period", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InitTxn_eventInitTxn_Parms, Period), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Period_MetaData), NewProp_Period_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_InitTxn_InitTxn_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InitTxn_eventInitTxn_Parms, Frequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Frequency_MetaData), NewProp_Frequency_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_InitTxn_InitTxn_Statics::NewProp_RecurringAmt = { "RecurringAmt", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InitTxn_eventInitTxn_Parms, RecurringAmt), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecurringAmt_MetaData), NewProp_RecurringAmt_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_InitTxn_InitTxn_Statics::NewProp_BundleCount = { "BundleCount", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InitTxn_eventInitTxn_Parms, BundleCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BundleCount_MetaData), NewProp_BundleCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_InitTxn_InitTxn_Statics::NewProp_BundleId = { "BundleId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InitTxn_eventInitTxn_Parms, BundleId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BundleId_MetaData), NewProp_BundleId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_InitTxn_InitTxn_Statics::NewProp_BundleQty = { "BundleQty", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InitTxn_eventInitTxn_Parms, BundleQty), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BundleQty_MetaData), NewProp_BundleQty_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_InitTxn_InitTxn_Statics::NewProp_BundleDesc = { "BundleDesc", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InitTxn_eventInitTxn_Parms, BundleDesc), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BundleDesc_MetaData), NewProp_BundleDesc_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_InitTxn_InitTxn_Statics::NewProp_BundleCategory = { "BundleCategory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InitTxn_eventInitTxn_Parms, BundleCategory), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BundleCategory_MetaData), NewProp_BundleCategory_MetaData) };
void Z_Construct_UFunction_USIK_InitTxn_InitTxn_Statics::NewProp_bUseSandBox_SetBit(void* Obj)
{
	((SIK_InitTxn_eventInitTxn_Parms*)Obj)->bUseSandBox = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_InitTxn_InitTxn_Statics::NewProp_bUseSandBox = { "bUseSandBox", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_InitTxn_eventInitTxn_Parms), &Z_Construct_UFunction_USIK_InitTxn_InitTxn_Statics::NewProp_bUseSandBox_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_InitTxn_InitTxn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InitTxn_eventInitTxn_Parms, ReturnValue), Z_Construct_UClass_USIK_InitTxn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_InitTxn_InitTxn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InitTxn_InitTxn_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InitTxn_InitTxn_Statics::NewProp_OrderId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InitTxn_InitTxn_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InitTxn_InitTxn_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InitTxn_InitTxn_Statics::NewProp_ItemCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InitTxn_InitTxn_Statics::NewProp_Language,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InitTxn_InitTxn_Statics::NewProp_Currency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InitTxn_InitTxn_Statics::NewProp_UserSession,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InitTxn_InitTxn_Statics::NewProp_IpAddress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InitTxn_InitTxn_Statics::NewProp_ItemId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InitTxn_InitTxn_Statics::NewProp_Qty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InitTxn_InitTxn_Statics::NewProp_Amount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InitTxn_InitTxn_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InitTxn_InitTxn_Statics::NewProp_Category,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InitTxn_InitTxn_Statics::NewProp_AssociatedBundle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InitTxn_InitTxn_Statics::NewProp_BillingType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InitTxn_InitTxn_Statics::NewProp_Period,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InitTxn_InitTxn_Statics::NewProp_Frequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InitTxn_InitTxn_Statics::NewProp_RecurringAmt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InitTxn_InitTxn_Statics::NewProp_BundleCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InitTxn_InitTxn_Statics::NewProp_BundleId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InitTxn_InitTxn_Statics::NewProp_BundleQty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InitTxn_InitTxn_Statics::NewProp_BundleDesc,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InitTxn_InitTxn_Statics::NewProp_BundleCategory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InitTxn_InitTxn_Statics::NewProp_bUseSandBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InitTxn_InitTxn_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InitTxn_InitTxn_Statics::PropPointers) < 2048);
// ********** End Function InitTxn Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_InitTxn_InitTxn_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_InitTxn, nullptr, "InitTxn", 	Z_Construct_UFunction_USIK_InitTxn_InitTxn_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InitTxn_InitTxn_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_InitTxn_InitTxn_Statics::SIK_InitTxn_eventInitTxn_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InitTxn_InitTxn_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_InitTxn_InitTxn_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_InitTxn_InitTxn_Statics::SIK_InitTxn_eventInitTxn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_InitTxn_InitTxn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_InitTxn_InitTxn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_InitTxn::execInitTxn)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_OrderId);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_SteamId);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppId);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_ItemCount);
	P_GET_PROPERTY(FStrProperty,Z_Param_Language);
	P_GET_PROPERTY(FStrProperty,Z_Param_Currency);
	P_GET_PROPERTY(FStrProperty,Z_Param_UserSession);
	P_GET_PROPERTY(FStrProperty,Z_Param_IpAddress);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_ItemId);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Qty);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_Amount);
	P_GET_PROPERTY(FStrProperty,Z_Param_Description);
	P_GET_PROPERTY(FStrProperty,Z_Param_Category);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AssociatedBundle);
	P_GET_PROPERTY(FStrProperty,Z_Param_BillingType);
	P_GET_PROPERTY(FStrProperty,Z_Param_Period);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Frequency);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_RecurringAmt);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_BundleCount);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_BundleId);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_BundleQty);
	P_GET_PROPERTY(FStrProperty,Z_Param_BundleDesc);
	P_GET_PROPERTY(FStrProperty,Z_Param_BundleCategory);
	P_GET_UBOOL(Z_Param_bUseSandBox);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_InitTxn**)Z_Param__Result=USIK_InitTxn::InitTxn(Z_Param_Key,Z_Param_Out_OrderId,Z_Param_Out_SteamId,Z_Param_Out_AppId,Z_Param_Out_ItemCount,Z_Param_Language,Z_Param_Currency,Z_Param_UserSession,Z_Param_IpAddress,Z_Param_Out_ItemId,Z_Param_Out_Qty,Z_Param_Out_Amount,Z_Param_Description,Z_Param_Category,Z_Param_Out_AssociatedBundle,Z_Param_BillingType,Z_Param_Period,Z_Param_Out_Frequency,Z_Param_Out_RecurringAmt,Z_Param_Out_BundleCount,Z_Param_Out_BundleId,Z_Param_Out_BundleQty,Z_Param_BundleDesc,Z_Param_BundleCategory,Z_Param_bUseSandBox);
	P_NATIVE_END;
}
// ********** End Class USIK_InitTxn Function InitTxn **********************************************

// ********** Begin Class USIK_InitTxn *************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_InitTxn;
UClass* USIK_InitTxn::GetPrivateStaticClass()
{
	using TClass = USIK_InitTxn;
	if (!Z_Registration_Info_UClass_USIK_InitTxn.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_InitTxn"),
			Z_Registration_Info_UClass_USIK_InitTxn.InnerSingleton,
			StaticRegisterNativesUSIK_InitTxn,
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
	return Z_Registration_Info_UClass_USIK_InitTxn.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_InitTxn_NoRegister()
{
	return USIK_InitTxn::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_InitTxn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/MicroTxn/SIK_InitTxn.h" },
		{ "ModuleRelativePath", "Functions/MicroTxn/SIK_InitTxn.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_InitTxn constinit property declarations *****************************
// ********** End Class USIK_InitTxn constinit property declarations *******************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("InitTxn"), .Pointer = &USIK_InitTxn::execInitTxn },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_InitTxn_InitTxn, "InitTxn" }, // 3321159719
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_InitTxn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_InitTxn_Statics
UObject* (*const Z_Construct_UClass_USIK_InitTxn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_InitTxn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_InitTxn_Statics::ClassParams = {
	&USIK_InitTxn::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_InitTxn_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_InitTxn_Statics::Class_MetaDataParams)
};
void USIK_InitTxn::StaticRegisterNativesUSIK_InitTxn()
{
	UClass* Class = USIK_InitTxn::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_InitTxn_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_InitTxn()
{
	if (!Z_Registration_Info_UClass_USIK_InitTxn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_InitTxn.OuterSingleton, Z_Construct_UClass_USIK_InitTxn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_InitTxn.OuterSingleton;
}
USIK_InitTxn::USIK_InitTxn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_InitTxn);
USIK_InitTxn::~USIK_InitTxn() {}
// ********** End Class USIK_InitTxn ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_MicroTxn_SIK_InitTxn_h__Script_SteamWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_InitTxn, USIK_InitTxn::StaticClass, TEXT("USIK_InitTxn"), &Z_Registration_Info_UClass_USIK_InitTxn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_InitTxn), 907592505U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_MicroTxn_SIK_InitTxn_h__Script_SteamWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_MicroTxn_SIK_InitTxn_h__Script_SteamWeb_62254458{
	TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_MicroTxn_SIK_InitTxn_h__Script_SteamWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_MicroTxn_SIK_InitTxn_h__Script_SteamWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
