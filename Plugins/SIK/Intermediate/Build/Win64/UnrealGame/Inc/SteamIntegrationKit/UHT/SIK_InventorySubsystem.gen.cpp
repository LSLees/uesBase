// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/Inventory/SIK_InventorySubsystem.h"
#include "Engine/GameInstance.h"
#include "SIK_SharedFile.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_InventorySubsystem() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_InventorySubsystem();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_InventorySubsystem_NoRegister();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryDefinitionUpdateDelegate__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryEligiblePromoItemDefIDsDelegate__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryFullUpdateDelegate__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryRequestPricesResultDelegate__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryResultReadyDelegate__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryStartPurchaseResultDelegate__DelegateSignature();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_SteamId();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_SteamInventoryResult();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FSteamInventoryDefinitionUpdateDelegate *******************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryDefinitionUpdateDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/Inventory/SIK_InventorySubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FSteamInventoryDefinitionUpdateDelegate constinit property declarations 
// ********** End Delegate FSteamInventoryDefinitionUpdateDelegate constinit property declarations *
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryDefinitionUpdateDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "SteamInventoryDefinitionUpdateDelegate__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryDefinitionUpdateDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryDefinitionUpdateDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryDefinitionUpdateDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryDefinitionUpdateDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSteamInventoryDefinitionUpdateDelegate_DelegateWrapper(const FMulticastScriptDelegate& SteamInventoryDefinitionUpdateDelegate)
{
	SteamInventoryDefinitionUpdateDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FSteamInventoryDefinitionUpdateDelegate *********************************

// ********** Begin Delegate FSteamInventoryEligiblePromoItemDefIDsDelegate ************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryEligiblePromoItemDefIDsDelegate__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventSteamInventoryEligiblePromoItemDefIDsDelegate_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
		FSIK_SteamId SteamID;
		int32 ItemDefs;
		bool CachedData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/Inventory/SIK_InventorySubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FSteamInventoryEligiblePromoItemDefIDsDelegate constinit property declarations 
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemDefs;
	static void NewProp_CachedData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CachedData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FSteamInventoryEligiblePromoItemDefIDsDelegate constinit property declarations 
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FSteamInventoryEligiblePromoItemDefIDsDelegate Property Definitions ***
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryEligiblePromoItemDefIDsDelegate__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventSteamInventoryEligiblePromoItemDefIDsDelegate_Parms, Result), Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result, METADATA_PARAMS(0, nullptr) }; // 655382749
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryEligiblePromoItemDefIDsDelegate__DelegateSignature_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventSteamInventoryEligiblePromoItemDefIDsDelegate_Parms, SteamID), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryEligiblePromoItemDefIDsDelegate__DelegateSignature_Statics::NewProp_ItemDefs = { "ItemDefs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventSteamInventoryEligiblePromoItemDefIDsDelegate_Parms, ItemDefs), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryEligiblePromoItemDefIDsDelegate__DelegateSignature_Statics::NewProp_CachedData_SetBit(void* Obj)
{
	((_Script_SteamIntegrationKit_eventSteamInventoryEligiblePromoItemDefIDsDelegate_Parms*)Obj)->CachedData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryEligiblePromoItemDefIDsDelegate__DelegateSignature_Statics::NewProp_CachedData = { "CachedData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamIntegrationKit_eventSteamInventoryEligiblePromoItemDefIDsDelegate_Parms), &Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryEligiblePromoItemDefIDsDelegate__DelegateSignature_Statics::NewProp_CachedData_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryEligiblePromoItemDefIDsDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryEligiblePromoItemDefIDsDelegate__DelegateSignature_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryEligiblePromoItemDefIDsDelegate__DelegateSignature_Statics::NewProp_SteamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryEligiblePromoItemDefIDsDelegate__DelegateSignature_Statics::NewProp_ItemDefs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryEligiblePromoItemDefIDsDelegate__DelegateSignature_Statics::NewProp_CachedData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryEligiblePromoItemDefIDsDelegate__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FSteamInventoryEligiblePromoItemDefIDsDelegate Property Definitions *****
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryEligiblePromoItemDefIDsDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "SteamInventoryEligiblePromoItemDefIDsDelegate__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryEligiblePromoItemDefIDsDelegate__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryEligiblePromoItemDefIDsDelegate__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryEligiblePromoItemDefIDsDelegate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventSteamInventoryEligiblePromoItemDefIDsDelegate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryEligiblePromoItemDefIDsDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryEligiblePromoItemDefIDsDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryEligiblePromoItemDefIDsDelegate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventSteamInventoryEligiblePromoItemDefIDsDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryEligiblePromoItemDefIDsDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryEligiblePromoItemDefIDsDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSteamInventoryEligiblePromoItemDefIDsDelegate_DelegateWrapper(const FMulticastScriptDelegate& SteamInventoryEligiblePromoItemDefIDsDelegate, ESIK_Result Result, FSIK_SteamId SteamID, int32 ItemDefs, bool CachedData)
{
	struct _Script_SteamIntegrationKit_eventSteamInventoryEligiblePromoItemDefIDsDelegate_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
		FSIK_SteamId SteamID;
		int32 ItemDefs;
		bool CachedData;
	};
	_Script_SteamIntegrationKit_eventSteamInventoryEligiblePromoItemDefIDsDelegate_Parms Parms;
	Parms.Result=Result;
	Parms.SteamID=SteamID;
	Parms.ItemDefs=ItemDefs;
	Parms.CachedData=CachedData ? true : false;
	SteamInventoryEligiblePromoItemDefIDsDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FSteamInventoryEligiblePromoItemDefIDsDelegate **************************

// ********** Begin Delegate FSteamInventoryFullUpdateDelegate *************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryFullUpdateDelegate__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventSteamInventoryFullUpdateDelegate_Parms
	{
		FSIK_SteamInventoryResult Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/Inventory/SIK_InventorySubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FSteamInventoryFullUpdateDelegate constinit property declarations *****
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FSteamInventoryFullUpdateDelegate constinit property declarations *******
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FSteamInventoryFullUpdateDelegate Property Definitions ****************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryFullUpdateDelegate__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventSteamInventoryFullUpdateDelegate_Parms, Result), Z_Construct_UScriptStruct_FSIK_SteamInventoryResult, METADATA_PARAMS(0, nullptr) }; // 959336186
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryFullUpdateDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryFullUpdateDelegate__DelegateSignature_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryFullUpdateDelegate__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FSteamInventoryFullUpdateDelegate Property Definitions ******************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryFullUpdateDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "SteamInventoryFullUpdateDelegate__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryFullUpdateDelegate__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryFullUpdateDelegate__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryFullUpdateDelegate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventSteamInventoryFullUpdateDelegate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryFullUpdateDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryFullUpdateDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryFullUpdateDelegate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventSteamInventoryFullUpdateDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryFullUpdateDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryFullUpdateDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSteamInventoryFullUpdateDelegate_DelegateWrapper(const FMulticastScriptDelegate& SteamInventoryFullUpdateDelegate, FSIK_SteamInventoryResult Result)
{
	struct _Script_SteamIntegrationKit_eventSteamInventoryFullUpdateDelegate_Parms
	{
		FSIK_SteamInventoryResult Result;
	};
	_Script_SteamIntegrationKit_eventSteamInventoryFullUpdateDelegate_Parms Parms;
	Parms.Result=Result;
	SteamInventoryFullUpdateDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FSteamInventoryFullUpdateDelegate ***************************************

// ********** Begin Delegate FSteamInventoryResultReadyDelegate ************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryResultReadyDelegate__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventSteamInventoryResultReadyDelegate_Parms
	{
		FSIK_SteamInventoryResult Result;
		TEnumAsByte<ESIK_Result> ResultType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/Inventory/SIK_InventorySubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FSteamInventoryResultReadyDelegate constinit property declarations ****
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ResultType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FSteamInventoryResultReadyDelegate constinit property declarations ******
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FSteamInventoryResultReadyDelegate Property Definitions ***************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryResultReadyDelegate__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventSteamInventoryResultReadyDelegate_Parms, Result), Z_Construct_UScriptStruct_FSIK_SteamInventoryResult, METADATA_PARAMS(0, nullptr) }; // 959336186
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryResultReadyDelegate__DelegateSignature_Statics::NewProp_ResultType = { "ResultType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventSteamInventoryResultReadyDelegate_Parms, ResultType), Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result, METADATA_PARAMS(0, nullptr) }; // 655382749
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryResultReadyDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryResultReadyDelegate__DelegateSignature_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryResultReadyDelegate__DelegateSignature_Statics::NewProp_ResultType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryResultReadyDelegate__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FSteamInventoryResultReadyDelegate Property Definitions *****************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryResultReadyDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "SteamInventoryResultReadyDelegate__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryResultReadyDelegate__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryResultReadyDelegate__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryResultReadyDelegate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventSteamInventoryResultReadyDelegate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryResultReadyDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryResultReadyDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryResultReadyDelegate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventSteamInventoryResultReadyDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryResultReadyDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryResultReadyDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSteamInventoryResultReadyDelegate_DelegateWrapper(const FMulticastScriptDelegate& SteamInventoryResultReadyDelegate, FSIK_SteamInventoryResult Result, ESIK_Result ResultType)
{
	struct _Script_SteamIntegrationKit_eventSteamInventoryResultReadyDelegate_Parms
	{
		FSIK_SteamInventoryResult Result;
		TEnumAsByte<ESIK_Result> ResultType;
	};
	_Script_SteamIntegrationKit_eventSteamInventoryResultReadyDelegate_Parms Parms;
	Parms.Result=Result;
	Parms.ResultType=ResultType;
	SteamInventoryResultReadyDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FSteamInventoryResultReadyDelegate **************************************

// ********** Begin Delegate FSteamInventoryStartPurchaseResultDelegate ****************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryStartPurchaseResultDelegate__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventSteamInventoryStartPurchaseResultDelegate_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
		int64 OrderID;
		int64 TransID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/Inventory/SIK_InventorySubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FSteamInventoryStartPurchaseResultDelegate constinit property declarations 
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_OrderID;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_TransID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FSteamInventoryStartPurchaseResultDelegate constinit property declarations 
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FSteamInventoryStartPurchaseResultDelegate Property Definitions *******
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryStartPurchaseResultDelegate__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventSteamInventoryStartPurchaseResultDelegate_Parms, Result), Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result, METADATA_PARAMS(0, nullptr) }; // 655382749
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryStartPurchaseResultDelegate__DelegateSignature_Statics::NewProp_OrderID = { "OrderID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventSteamInventoryStartPurchaseResultDelegate_Parms, OrderID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryStartPurchaseResultDelegate__DelegateSignature_Statics::NewProp_TransID = { "TransID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventSteamInventoryStartPurchaseResultDelegate_Parms, TransID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryStartPurchaseResultDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryStartPurchaseResultDelegate__DelegateSignature_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryStartPurchaseResultDelegate__DelegateSignature_Statics::NewProp_OrderID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryStartPurchaseResultDelegate__DelegateSignature_Statics::NewProp_TransID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryStartPurchaseResultDelegate__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FSteamInventoryStartPurchaseResultDelegate Property Definitions *********
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryStartPurchaseResultDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "SteamInventoryStartPurchaseResultDelegate__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryStartPurchaseResultDelegate__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryStartPurchaseResultDelegate__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryStartPurchaseResultDelegate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventSteamInventoryStartPurchaseResultDelegate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryStartPurchaseResultDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryStartPurchaseResultDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryStartPurchaseResultDelegate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventSteamInventoryStartPurchaseResultDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryStartPurchaseResultDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryStartPurchaseResultDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSteamInventoryStartPurchaseResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& SteamInventoryStartPurchaseResultDelegate, ESIK_Result Result, int64 OrderID, int64 TransID)
{
	struct _Script_SteamIntegrationKit_eventSteamInventoryStartPurchaseResultDelegate_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
		int64 OrderID;
		int64 TransID;
	};
	_Script_SteamIntegrationKit_eventSteamInventoryStartPurchaseResultDelegate_Parms Parms;
	Parms.Result=Result;
	Parms.OrderID=OrderID;
	Parms.TransID=TransID;
	SteamInventoryStartPurchaseResultDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FSteamInventoryStartPurchaseResultDelegate ******************************

// ********** Begin Delegate FSteamInventoryRequestPricesResultDelegate ****************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryRequestPricesResultDelegate__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventSteamInventoryRequestPricesResultDelegate_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
		FString Currency;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/Inventory/SIK_InventorySubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FSteamInventoryRequestPricesResultDelegate constinit property declarations 
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Currency;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FSteamInventoryRequestPricesResultDelegate constinit property declarations 
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FSteamInventoryRequestPricesResultDelegate Property Definitions *******
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryRequestPricesResultDelegate__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventSteamInventoryRequestPricesResultDelegate_Parms, Result), Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result, METADATA_PARAMS(0, nullptr) }; // 655382749
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryRequestPricesResultDelegate__DelegateSignature_Statics::NewProp_Currency = { "Currency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventSteamInventoryRequestPricesResultDelegate_Parms, Currency), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryRequestPricesResultDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryRequestPricesResultDelegate__DelegateSignature_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryRequestPricesResultDelegate__DelegateSignature_Statics::NewProp_Currency,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryRequestPricesResultDelegate__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FSteamInventoryRequestPricesResultDelegate Property Definitions *********
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryRequestPricesResultDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "SteamInventoryRequestPricesResultDelegate__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryRequestPricesResultDelegate__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryRequestPricesResultDelegate__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryRequestPricesResultDelegate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventSteamInventoryRequestPricesResultDelegate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryRequestPricesResultDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryRequestPricesResultDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryRequestPricesResultDelegate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventSteamInventoryRequestPricesResultDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryRequestPricesResultDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryRequestPricesResultDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSteamInventoryRequestPricesResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& SteamInventoryRequestPricesResultDelegate, ESIK_Result Result, const FString& Currency)
{
	struct _Script_SteamIntegrationKit_eventSteamInventoryRequestPricesResultDelegate_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
		FString Currency;
	};
	_Script_SteamIntegrationKit_eventSteamInventoryRequestPricesResultDelegate_Parms Parms;
	Parms.Result=Result;
	Parms.Currency=Currency;
	SteamInventoryRequestPricesResultDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FSteamInventoryRequestPricesResultDelegate ******************************

// ********** Begin Class USIK_InventorySubsystem **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_InventorySubsystem;
UClass* USIK_InventorySubsystem::GetPrivateStaticClass()
{
	using TClass = USIK_InventorySubsystem;
	if (!Z_Registration_Info_UClass_USIK_InventorySubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_InventorySubsystem"),
			Z_Registration_Info_UClass_USIK_InventorySubsystem.InnerSingleton,
			StaticRegisterNativesUSIK_InventorySubsystem,
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
	return Z_Registration_Info_UClass_USIK_InventorySubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_InventorySubsystem_NoRegister()
{
	return USIK_InventorySubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_InventorySubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Functions/Inventory/SIK_InventorySubsystem.h" },
		{ "ModuleRelativePath", "Functions/Inventory/SIK_InventorySubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSteamInventoryDefinitionUpdate_MetaData[] = {
		{ "Category", "Steam Integration Kit || Inventory || Callbacks" },
		{ "Comment", "//This callback is triggered whenever item definitions have been updated, which could be in response to LoadItemDefinitions or any time new item definitions are available (eg, from the dynamic addition of new item types while players are still in-game).\n" },
		{ "ModuleRelativePath", "Functions/Inventory/SIK_InventorySubsystem.h" },
		{ "ToolTip", "This callback is triggered whenever item definitions have been updated, which could be in response to LoadItemDefinitions or any time new item definitions are available (eg, from the dynamic addition of new item types while players are still in-game)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSteamInventoryEligiblePromoItemDefIDs_MetaData[] = {
		{ "Category", "Steam Integration Kit || Inventory || Callbacks" },
		{ "Comment", "//Returned when you have requested the list of \"eligible\" promo items that can be manually granted to the given user. These are promo items of type \"manual\" that won't be granted automatically. An example usage of this is an item that becomes available every week.\n" },
		{ "ModuleRelativePath", "Functions/Inventory/SIK_InventorySubsystem.h" },
		{ "ToolTip", "Returned when you have requested the list of \"eligible\" promo items that can be manually granted to the given user. These are promo items of type \"manual\" that won't be granted automatically. An example usage of this is an item that becomes available every week." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSteamInventoryFullUpdate_MetaData[] = {
		{ "Category", "Steam Integration Kit || Inventory || Callbacks" },
		{ "Comment", "/*\n\x09Triggered when GetAllItems successfully returns a result which is newer / fresher than the last known result. (It will not trigger if the inventory hasn't changed, or if results from two overlapping calls are reversed in flight and the earlier result is already known to be stale/out-of-date.)\n\x09\n\x09The regular SteamInventoryResultReady_t callback will still be triggered immediately afterwards; this is an additional notification for your convenience.\n\x09 */" },
		{ "ModuleRelativePath", "Functions/Inventory/SIK_InventorySubsystem.h" },
		{ "ToolTip", "Triggered when GetAllItems successfully returns a result which is newer / fresher than the last known result. (It will not trigger if the inventory hasn't changed, or if results from two overlapping calls are reversed in flight and the earlier result is already known to be stale/out-of-date.)\n\nThe regular SteamInventoryResultReady_t callback will still be triggered immediately afterwards; this is an additional notification for your convenience." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSteamInventoryResultReady_MetaData[] = {
		{ "Category", "Steam Integration Kit || Inventory || Callbacks" },
		{ "Comment", "//This is fired whenever an inventory result transitions from k_EResultPending to any other completed state, see GetResultStatus for the complete list of states. There will always be exactly one callback per handle.\n" },
		{ "ModuleRelativePath", "Functions/Inventory/SIK_InventorySubsystem.h" },
		{ "ToolTip", "This is fired whenever an inventory result transitions from k_EResultPending to any other completed state, see GetResultStatus for the complete list of states. There will always be exactly one callback per handle." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSteamInventoryStartPurchaseResult_MetaData[] = {
		{ "Category", "Steam Integration Kit || Inventory || Callbacks" },
		{ "Comment", "//Returned after StartPurchase is called.\n" },
		{ "ModuleRelativePath", "Functions/Inventory/SIK_InventorySubsystem.h" },
		{ "ToolTip", "Returned after StartPurchase is called." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSteamInventoryRequestPricesResult_MetaData[] = {
		{ "Category", "Steam Integration Kit || Inventory || Callbacks" },
		{ "Comment", "//Returned after RequestPrices is called.\n" },
		{ "ModuleRelativePath", "Functions/Inventory/SIK_InventorySubsystem.h" },
		{ "ToolTip", "Returned after RequestPrices is called." },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_InventorySubsystem constinit property declarations ******************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSteamInventoryDefinitionUpdate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSteamInventoryEligiblePromoItemDefIDs;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSteamInventoryFullUpdate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSteamInventoryResultReady;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSteamInventoryStartPurchaseResult;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSteamInventoryRequestPricesResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USIK_InventorySubsystem constinit property declarations ********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_InventorySubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_InventorySubsystem_Statics

// ********** Begin Class USIK_InventorySubsystem Property Definitions *****************************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_InventorySubsystem_Statics::NewProp_OnSteamInventoryDefinitionUpdate = { "OnSteamInventoryDefinitionUpdate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_InventorySubsystem, OnSteamInventoryDefinitionUpdate), Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryDefinitionUpdateDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSteamInventoryDefinitionUpdate_MetaData), NewProp_OnSteamInventoryDefinitionUpdate_MetaData) }; // 2283624088
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_InventorySubsystem_Statics::NewProp_OnSteamInventoryEligiblePromoItemDefIDs = { "OnSteamInventoryEligiblePromoItemDefIDs", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_InventorySubsystem, OnSteamInventoryEligiblePromoItemDefIDs), Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryEligiblePromoItemDefIDsDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSteamInventoryEligiblePromoItemDefIDs_MetaData), NewProp_OnSteamInventoryEligiblePromoItemDefIDs_MetaData) }; // 2218229576
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_InventorySubsystem_Statics::NewProp_OnSteamInventoryFullUpdate = { "OnSteamInventoryFullUpdate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_InventorySubsystem, OnSteamInventoryFullUpdate), Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryFullUpdateDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSteamInventoryFullUpdate_MetaData), NewProp_OnSteamInventoryFullUpdate_MetaData) }; // 283063787
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_InventorySubsystem_Statics::NewProp_OnSteamInventoryResultReady = { "OnSteamInventoryResultReady", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_InventorySubsystem, OnSteamInventoryResultReady), Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryResultReadyDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSteamInventoryResultReady_MetaData), NewProp_OnSteamInventoryResultReady_MetaData) }; // 4047556623
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_InventorySubsystem_Statics::NewProp_OnSteamInventoryStartPurchaseResult = { "OnSteamInventoryStartPurchaseResult", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_InventorySubsystem, OnSteamInventoryStartPurchaseResult), Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryStartPurchaseResultDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSteamInventoryStartPurchaseResult_MetaData), NewProp_OnSteamInventoryStartPurchaseResult_MetaData) }; // 3566994169
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_InventorySubsystem_Statics::NewProp_OnSteamInventoryRequestPricesResult = { "OnSteamInventoryRequestPricesResult", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_InventorySubsystem, OnSteamInventoryRequestPricesResult), Z_Construct_UDelegateFunction_SteamIntegrationKit_SteamInventoryRequestPricesResultDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSteamInventoryRequestPricesResult_MetaData), NewProp_OnSteamInventoryRequestPricesResult_MetaData) }; // 1730677260
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USIK_InventorySubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_InventorySubsystem_Statics::NewProp_OnSteamInventoryDefinitionUpdate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_InventorySubsystem_Statics::NewProp_OnSteamInventoryEligiblePromoItemDefIDs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_InventorySubsystem_Statics::NewProp_OnSteamInventoryFullUpdate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_InventorySubsystem_Statics::NewProp_OnSteamInventoryResultReady,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_InventorySubsystem_Statics::NewProp_OnSteamInventoryStartPurchaseResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_InventorySubsystem_Statics::NewProp_OnSteamInventoryRequestPricesResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_InventorySubsystem_Statics::PropPointers) < 2048);
// ********** End Class USIK_InventorySubsystem Property Definitions *******************************
UObject* (*const Z_Construct_UClass_USIK_InventorySubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_InventorySubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_InventorySubsystem_Statics::ClassParams = {
	&USIK_InventorySubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USIK_InventorySubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USIK_InventorySubsystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_InventorySubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_InventorySubsystem_Statics::Class_MetaDataParams)
};
void USIK_InventorySubsystem::StaticRegisterNativesUSIK_InventorySubsystem()
{
}
UClass* Z_Construct_UClass_USIK_InventorySubsystem()
{
	if (!Z_Registration_Info_UClass_USIK_InventorySubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_InventorySubsystem.OuterSingleton, Z_Construct_UClass_USIK_InventorySubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_InventorySubsystem.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_InventorySubsystem);
// ********** End Class USIK_InventorySubsystem ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Inventory_SIK_InventorySubsystem_h__Script_SteamIntegrationKit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_InventorySubsystem, USIK_InventorySubsystem::StaticClass, TEXT("USIK_InventorySubsystem"), &Z_Registration_Info_UClass_USIK_InventorySubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_InventorySubsystem), 3300490596U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Inventory_SIK_InventorySubsystem_h__Script_SteamIntegrationKit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Inventory_SIK_InventorySubsystem_h__Script_SteamIntegrationKit_93726011{
	TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Inventory_SIK_InventorySubsystem_h__Script_SteamIntegrationKit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Inventory_SIK_InventorySubsystem_h__Script_SteamIntegrationKit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
