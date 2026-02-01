// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/Parties/SIK_PartiesLibrary.h"
#include "SIK_SharedFile.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_PartiesLibrary() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_PartiesLibrary();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_PartiesLibrary_NoRegister();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamPartyBeaconLocationType();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_PartyBeaconID();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_SteamId();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_SteamPartyBeaconLocation();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USIK_PartiesLibrary Function DestroyBeacon *******************************
struct Z_Construct_UFunction_USIK_PartiesLibrary_DestroyBeacon_Statics
{
	struct SIK_PartiesLibrary_eventDestroyBeacon_Parms
	{
		FSIK_PartyBeaconID BeaconID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Parties" },
		{ "DisplayName", "Destroy Beacon" },
		{ "Keywords", "DestroyBeacon" },
		{ "ModuleRelativePath", "Functions/Parties/SIK_PartiesLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function DestroyBeacon constinit property declarations *************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_BeaconID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DestroyBeacon constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DestroyBeacon Property Definitions ************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_PartiesLibrary_DestroyBeacon_Statics::NewProp_BeaconID = { "BeaconID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_PartiesLibrary_eventDestroyBeacon_Parms, BeaconID), Z_Construct_UScriptStruct_FSIK_PartyBeaconID, METADATA_PARAMS(0, nullptr) }; // 93468669
void Z_Construct_UFunction_USIK_PartiesLibrary_DestroyBeacon_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_PartiesLibrary_eventDestroyBeacon_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_PartiesLibrary_DestroyBeacon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_PartiesLibrary_eventDestroyBeacon_Parms), &Z_Construct_UFunction_USIK_PartiesLibrary_DestroyBeacon_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_PartiesLibrary_DestroyBeacon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_PartiesLibrary_DestroyBeacon_Statics::NewProp_BeaconID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_PartiesLibrary_DestroyBeacon_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_PartiesLibrary_DestroyBeacon_Statics::PropPointers) < 2048);
// ********** End Function DestroyBeacon Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_PartiesLibrary_DestroyBeacon_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_PartiesLibrary, nullptr, "DestroyBeacon", 	Z_Construct_UFunction_USIK_PartiesLibrary_DestroyBeacon_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_PartiesLibrary_DestroyBeacon_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_PartiesLibrary_DestroyBeacon_Statics::SIK_PartiesLibrary_eventDestroyBeacon_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_PartiesLibrary_DestroyBeacon_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_PartiesLibrary_DestroyBeacon_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_PartiesLibrary_DestroyBeacon_Statics::SIK_PartiesLibrary_eventDestroyBeacon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_PartiesLibrary_DestroyBeacon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_PartiesLibrary_DestroyBeacon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_PartiesLibrary::execDestroyBeacon)
{
	P_GET_STRUCT(FSIK_PartyBeaconID,Z_Param_BeaconID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_PartiesLibrary::DestroyBeacon(Z_Param_BeaconID);
	P_NATIVE_END;
}
// ********** End Class USIK_PartiesLibrary Function DestroyBeacon *********************************

// ********** Begin Class USIK_PartiesLibrary Function GetAvailableBeaconLocations *****************
struct Z_Construct_UFunction_USIK_PartiesLibrary_GetAvailableBeaconLocations_Statics
{
	struct SIK_PartiesLibrary_eventGetAvailableBeaconLocations_Parms
	{
		int32 MaxNumberOfLocations;
		TArray<FSIK_SteamPartyBeaconLocation> Locations;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Parties" },
		{ "DisplayName", "Get Available Beacon Locations" },
		{ "Keywords", "GetAvailableBeaconLocations" },
		{ "ModuleRelativePath", "Functions/Parties/SIK_PartiesLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAvailableBeaconLocations constinit property declarations ***********
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxNumberOfLocations;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Locations_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Locations;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAvailableBeaconLocations constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAvailableBeaconLocations Property Definitions **********************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_PartiesLibrary_GetAvailableBeaconLocations_Statics::NewProp_MaxNumberOfLocations = { "MaxNumberOfLocations", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_PartiesLibrary_eventGetAvailableBeaconLocations_Parms, MaxNumberOfLocations), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_PartiesLibrary_GetAvailableBeaconLocations_Statics::NewProp_Locations_Inner = { "Locations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSIK_SteamPartyBeaconLocation, METADATA_PARAMS(0, nullptr) }; // 959866417
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_PartiesLibrary_GetAvailableBeaconLocations_Statics::NewProp_Locations = { "Locations", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_PartiesLibrary_eventGetAvailableBeaconLocations_Parms, Locations), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 959866417
void Z_Construct_UFunction_USIK_PartiesLibrary_GetAvailableBeaconLocations_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_PartiesLibrary_eventGetAvailableBeaconLocations_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_PartiesLibrary_GetAvailableBeaconLocations_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_PartiesLibrary_eventGetAvailableBeaconLocations_Parms), &Z_Construct_UFunction_USIK_PartiesLibrary_GetAvailableBeaconLocations_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_PartiesLibrary_GetAvailableBeaconLocations_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_PartiesLibrary_GetAvailableBeaconLocations_Statics::NewProp_MaxNumberOfLocations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_PartiesLibrary_GetAvailableBeaconLocations_Statics::NewProp_Locations_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_PartiesLibrary_GetAvailableBeaconLocations_Statics::NewProp_Locations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_PartiesLibrary_GetAvailableBeaconLocations_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_PartiesLibrary_GetAvailableBeaconLocations_Statics::PropPointers) < 2048);
// ********** End Function GetAvailableBeaconLocations Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_PartiesLibrary_GetAvailableBeaconLocations_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_PartiesLibrary, nullptr, "GetAvailableBeaconLocations", 	Z_Construct_UFunction_USIK_PartiesLibrary_GetAvailableBeaconLocations_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_PartiesLibrary_GetAvailableBeaconLocations_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_PartiesLibrary_GetAvailableBeaconLocations_Statics::SIK_PartiesLibrary_eventGetAvailableBeaconLocations_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_PartiesLibrary_GetAvailableBeaconLocations_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_PartiesLibrary_GetAvailableBeaconLocations_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_PartiesLibrary_GetAvailableBeaconLocations_Statics::SIK_PartiesLibrary_eventGetAvailableBeaconLocations_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_PartiesLibrary_GetAvailableBeaconLocations()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_PartiesLibrary_GetAvailableBeaconLocations_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_PartiesLibrary::execGetAvailableBeaconLocations)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxNumberOfLocations);
	P_GET_TARRAY_REF(FSIK_SteamPartyBeaconLocation,Z_Param_Out_Locations);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_PartiesLibrary::GetAvailableBeaconLocations(Z_Param_MaxNumberOfLocations,Z_Param_Out_Locations);
	P_NATIVE_END;
}
// ********** End Class USIK_PartiesLibrary Function GetAvailableBeaconLocations *******************

// ********** Begin Class USIK_PartiesLibrary Function GetBeaconByIndex ****************************
struct Z_Construct_UFunction_USIK_PartiesLibrary_GetBeaconByIndex_Statics
{
	struct SIK_PartiesLibrary_eventGetBeaconByIndex_Parms
	{
		int32 Index;
		FSIK_PartyBeaconID ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Parties" },
		{ "DisplayName", "Get Beacon By Index" },
		{ "Keywords", "GetBeaconByIndex" },
		{ "ModuleRelativePath", "Functions/Parties/SIK_PartiesLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetBeaconByIndex constinit property declarations **********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetBeaconByIndex constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetBeaconByIndex Property Definitions *********************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_PartiesLibrary_GetBeaconByIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_PartiesLibrary_eventGetBeaconByIndex_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_PartiesLibrary_GetBeaconByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_PartiesLibrary_eventGetBeaconByIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FSIK_PartyBeaconID, METADATA_PARAMS(0, nullptr) }; // 93468669
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_PartiesLibrary_GetBeaconByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_PartiesLibrary_GetBeaconByIndex_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_PartiesLibrary_GetBeaconByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_PartiesLibrary_GetBeaconByIndex_Statics::PropPointers) < 2048);
// ********** End Function GetBeaconByIndex Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_PartiesLibrary_GetBeaconByIndex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_PartiesLibrary, nullptr, "GetBeaconByIndex", 	Z_Construct_UFunction_USIK_PartiesLibrary_GetBeaconByIndex_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_PartiesLibrary_GetBeaconByIndex_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_PartiesLibrary_GetBeaconByIndex_Statics::SIK_PartiesLibrary_eventGetBeaconByIndex_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_PartiesLibrary_GetBeaconByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_PartiesLibrary_GetBeaconByIndex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_PartiesLibrary_GetBeaconByIndex_Statics::SIK_PartiesLibrary_eventGetBeaconByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_PartiesLibrary_GetBeaconByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_PartiesLibrary_GetBeaconByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_PartiesLibrary::execGetBeaconByIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSIK_PartyBeaconID*)Z_Param__Result=USIK_PartiesLibrary::GetBeaconByIndex(Z_Param_Index);
	P_NATIVE_END;
}
// ********** End Class USIK_PartiesLibrary Function GetBeaconByIndex ******************************

// ********** Begin Class USIK_PartiesLibrary Function GetBeaconDetails ****************************
struct Z_Construct_UFunction_USIK_PartiesLibrary_GetBeaconDetails_Statics
{
	struct SIK_PartiesLibrary_eventGetBeaconDetails_Parms
	{
		FSIK_PartyBeaconID BeaconID;
		FSIK_SteamId CreatorId;
		FSIK_SteamPartyBeaconLocation Location;
		FString MetaData;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Parties" },
		{ "DisplayName", "Get Beacon Details" },
		{ "Keywords", "GetBeaconDetails" },
		{ "ModuleRelativePath", "Functions/Parties/SIK_PartiesLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetBeaconDetails constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_BeaconID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CreatorId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MetaData;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetBeaconDetails constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetBeaconDetails Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_PartiesLibrary_GetBeaconDetails_Statics::NewProp_BeaconID = { "BeaconID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_PartiesLibrary_eventGetBeaconDetails_Parms, BeaconID), Z_Construct_UScriptStruct_FSIK_PartyBeaconID, METADATA_PARAMS(0, nullptr) }; // 93468669
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_PartiesLibrary_GetBeaconDetails_Statics::NewProp_CreatorId = { "CreatorId", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_PartiesLibrary_eventGetBeaconDetails_Parms, CreatorId), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_PartiesLibrary_GetBeaconDetails_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_PartiesLibrary_eventGetBeaconDetails_Parms, Location), Z_Construct_UScriptStruct_FSIK_SteamPartyBeaconLocation, METADATA_PARAMS(0, nullptr) }; // 959866417
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_PartiesLibrary_GetBeaconDetails_Statics::NewProp_MetaData = { "MetaData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_PartiesLibrary_eventGetBeaconDetails_Parms, MetaData), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_PartiesLibrary_GetBeaconDetails_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_PartiesLibrary_eventGetBeaconDetails_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_PartiesLibrary_GetBeaconDetails_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_PartiesLibrary_eventGetBeaconDetails_Parms), &Z_Construct_UFunction_USIK_PartiesLibrary_GetBeaconDetails_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_PartiesLibrary_GetBeaconDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_PartiesLibrary_GetBeaconDetails_Statics::NewProp_BeaconID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_PartiesLibrary_GetBeaconDetails_Statics::NewProp_CreatorId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_PartiesLibrary_GetBeaconDetails_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_PartiesLibrary_GetBeaconDetails_Statics::NewProp_MetaData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_PartiesLibrary_GetBeaconDetails_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_PartiesLibrary_GetBeaconDetails_Statics::PropPointers) < 2048);
// ********** End Function GetBeaconDetails Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_PartiesLibrary_GetBeaconDetails_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_PartiesLibrary, nullptr, "GetBeaconDetails", 	Z_Construct_UFunction_USIK_PartiesLibrary_GetBeaconDetails_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_PartiesLibrary_GetBeaconDetails_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_PartiesLibrary_GetBeaconDetails_Statics::SIK_PartiesLibrary_eventGetBeaconDetails_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_PartiesLibrary_GetBeaconDetails_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_PartiesLibrary_GetBeaconDetails_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_PartiesLibrary_GetBeaconDetails_Statics::SIK_PartiesLibrary_eventGetBeaconDetails_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_PartiesLibrary_GetBeaconDetails()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_PartiesLibrary_GetBeaconDetails_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_PartiesLibrary::execGetBeaconDetails)
{
	P_GET_STRUCT(FSIK_PartyBeaconID,Z_Param_BeaconID);
	P_GET_STRUCT_REF(FSIK_SteamId,Z_Param_Out_CreatorId);
	P_GET_STRUCT_REF(FSIK_SteamPartyBeaconLocation,Z_Param_Out_Location);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_MetaData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_PartiesLibrary::GetBeaconDetails(Z_Param_BeaconID,Z_Param_Out_CreatorId,Z_Param_Out_Location,Z_Param_Out_MetaData);
	P_NATIVE_END;
}
// ********** End Class USIK_PartiesLibrary Function GetBeaconDetails ******************************

// ********** Begin Class USIK_PartiesLibrary Function GetBeaconLocationData ***********************
struct Z_Construct_UFunction_USIK_PartiesLibrary_GetBeaconLocationData_Statics
{
	struct SIK_PartiesLibrary_eventGetBeaconLocationData_Parms
	{
		FSIK_SteamPartyBeaconLocation BeaconLocation;
		TEnumAsByte<ESIK_SteamPartyBeaconLocationType> LocationType;
		FString LocationString;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Parties" },
		{ "DisplayName", "Get Beacon Location Data" },
		{ "Keywords", "GetBeaconLocationData" },
		{ "ModuleRelativePath", "Functions/Parties/SIK_PartiesLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetBeaconLocationData constinit property declarations *****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_BeaconLocation;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LocationType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LocationString;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetBeaconLocationData constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetBeaconLocationData Property Definitions ****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_PartiesLibrary_GetBeaconLocationData_Statics::NewProp_BeaconLocation = { "BeaconLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_PartiesLibrary_eventGetBeaconLocationData_Parms, BeaconLocation), Z_Construct_UScriptStruct_FSIK_SteamPartyBeaconLocation, METADATA_PARAMS(0, nullptr) }; // 959866417
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_PartiesLibrary_GetBeaconLocationData_Statics::NewProp_LocationType = { "LocationType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_PartiesLibrary_eventGetBeaconLocationData_Parms, LocationType), Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamPartyBeaconLocationType, METADATA_PARAMS(0, nullptr) }; // 389953079
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_PartiesLibrary_GetBeaconLocationData_Statics::NewProp_LocationString = { "LocationString", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_PartiesLibrary_eventGetBeaconLocationData_Parms, LocationString), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_PartiesLibrary_GetBeaconLocationData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_PartiesLibrary_eventGetBeaconLocationData_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_PartiesLibrary_GetBeaconLocationData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_PartiesLibrary_eventGetBeaconLocationData_Parms), &Z_Construct_UFunction_USIK_PartiesLibrary_GetBeaconLocationData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_PartiesLibrary_GetBeaconLocationData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_PartiesLibrary_GetBeaconLocationData_Statics::NewProp_BeaconLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_PartiesLibrary_GetBeaconLocationData_Statics::NewProp_LocationType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_PartiesLibrary_GetBeaconLocationData_Statics::NewProp_LocationString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_PartiesLibrary_GetBeaconLocationData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_PartiesLibrary_GetBeaconLocationData_Statics::PropPointers) < 2048);
// ********** End Function GetBeaconLocationData Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_PartiesLibrary_GetBeaconLocationData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_PartiesLibrary, nullptr, "GetBeaconLocationData", 	Z_Construct_UFunction_USIK_PartiesLibrary_GetBeaconLocationData_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_PartiesLibrary_GetBeaconLocationData_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_PartiesLibrary_GetBeaconLocationData_Statics::SIK_PartiesLibrary_eventGetBeaconLocationData_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_PartiesLibrary_GetBeaconLocationData_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_PartiesLibrary_GetBeaconLocationData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_PartiesLibrary_GetBeaconLocationData_Statics::SIK_PartiesLibrary_eventGetBeaconLocationData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_PartiesLibrary_GetBeaconLocationData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_PartiesLibrary_GetBeaconLocationData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_PartiesLibrary::execGetBeaconLocationData)
{
	P_GET_STRUCT(FSIK_SteamPartyBeaconLocation,Z_Param_BeaconLocation);
	P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_LocationType);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_LocationString);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_PartiesLibrary::GetBeaconLocationData(Z_Param_BeaconLocation,(TEnumAsByte<ESIK_SteamPartyBeaconLocationType>&)(Z_Param_Out_LocationType),Z_Param_Out_LocationString);
	P_NATIVE_END;
}
// ********** End Class USIK_PartiesLibrary Function GetBeaconLocationData *************************

// ********** Begin Class USIK_PartiesLibrary Function GetNumActiveBeacons *************************
struct Z_Construct_UFunction_USIK_PartiesLibrary_GetNumActiveBeacons_Statics
{
	struct SIK_PartiesLibrary_eventGetNumActiveBeacons_Parms
	{
		int32 NumActiveBeacons;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Parties" },
		{ "DisplayName", "Get Num Active Beacons" },
		{ "Keywords", "GetNumActiveBeacons" },
		{ "ModuleRelativePath", "Functions/Parties/SIK_PartiesLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetNumActiveBeacons constinit property declarations *******************
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumActiveBeacons;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetNumActiveBeacons constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetNumActiveBeacons Property Definitions ******************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_PartiesLibrary_GetNumActiveBeacons_Statics::NewProp_NumActiveBeacons = { "NumActiveBeacons", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_PartiesLibrary_eventGetNumActiveBeacons_Parms, NumActiveBeacons), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_PartiesLibrary_GetNumActiveBeacons_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_PartiesLibrary_GetNumActiveBeacons_Statics::NewProp_NumActiveBeacons,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_PartiesLibrary_GetNumActiveBeacons_Statics::PropPointers) < 2048);
// ********** End Function GetNumActiveBeacons Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_PartiesLibrary_GetNumActiveBeacons_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_PartiesLibrary, nullptr, "GetNumActiveBeacons", 	Z_Construct_UFunction_USIK_PartiesLibrary_GetNumActiveBeacons_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_PartiesLibrary_GetNumActiveBeacons_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_PartiesLibrary_GetNumActiveBeacons_Statics::SIK_PartiesLibrary_eventGetNumActiveBeacons_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_PartiesLibrary_GetNumActiveBeacons_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_PartiesLibrary_GetNumActiveBeacons_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_PartiesLibrary_GetNumActiveBeacons_Statics::SIK_PartiesLibrary_eventGetNumActiveBeacons_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_PartiesLibrary_GetNumActiveBeacons()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_PartiesLibrary_GetNumActiveBeacons_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_PartiesLibrary::execGetNumActiveBeacons)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_NumActiveBeacons);
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_PartiesLibrary::GetNumActiveBeacons(Z_Param_Out_NumActiveBeacons);
	P_NATIVE_END;
}
// ********** End Class USIK_PartiesLibrary Function GetNumActiveBeacons ***************************

// ********** Begin Class USIK_PartiesLibrary Function GetNumAvailableBeaconLocations **************
struct Z_Construct_UFunction_USIK_PartiesLibrary_GetNumAvailableBeaconLocations_Statics
{
	struct SIK_PartiesLibrary_eventGetNumAvailableBeaconLocations_Parms
	{
		int32 NumLocations;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Parties" },
		{ "DisplayName", "Get Num Available Beacon Locations" },
		{ "Keywords", "GetNumAvailableBeaconLocations" },
		{ "ModuleRelativePath", "Functions/Parties/SIK_PartiesLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetNumAvailableBeaconLocations constinit property declarations ********
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumLocations;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetNumAvailableBeaconLocations constinit property declarations **********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetNumAvailableBeaconLocations Property Definitions *******************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_PartiesLibrary_GetNumAvailableBeaconLocations_Statics::NewProp_NumLocations = { "NumLocations", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_PartiesLibrary_eventGetNumAvailableBeaconLocations_Parms, NumLocations), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_PartiesLibrary_GetNumAvailableBeaconLocations_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_PartiesLibrary_eventGetNumAvailableBeaconLocations_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_PartiesLibrary_GetNumAvailableBeaconLocations_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_PartiesLibrary_eventGetNumAvailableBeaconLocations_Parms), &Z_Construct_UFunction_USIK_PartiesLibrary_GetNumAvailableBeaconLocations_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_PartiesLibrary_GetNumAvailableBeaconLocations_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_PartiesLibrary_GetNumAvailableBeaconLocations_Statics::NewProp_NumLocations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_PartiesLibrary_GetNumAvailableBeaconLocations_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_PartiesLibrary_GetNumAvailableBeaconLocations_Statics::PropPointers) < 2048);
// ********** End Function GetNumAvailableBeaconLocations Property Definitions *********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_PartiesLibrary_GetNumAvailableBeaconLocations_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_PartiesLibrary, nullptr, "GetNumAvailableBeaconLocations", 	Z_Construct_UFunction_USIK_PartiesLibrary_GetNumAvailableBeaconLocations_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_PartiesLibrary_GetNumAvailableBeaconLocations_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_PartiesLibrary_GetNumAvailableBeaconLocations_Statics::SIK_PartiesLibrary_eventGetNumAvailableBeaconLocations_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_PartiesLibrary_GetNumAvailableBeaconLocations_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_PartiesLibrary_GetNumAvailableBeaconLocations_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_PartiesLibrary_GetNumAvailableBeaconLocations_Statics::SIK_PartiesLibrary_eventGetNumAvailableBeaconLocations_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_PartiesLibrary_GetNumAvailableBeaconLocations()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_PartiesLibrary_GetNumAvailableBeaconLocations_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_PartiesLibrary::execGetNumAvailableBeaconLocations)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_NumLocations);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_PartiesLibrary::GetNumAvailableBeaconLocations(Z_Param_Out_NumLocations);
	P_NATIVE_END;
}
// ********** End Class USIK_PartiesLibrary Function GetNumAvailableBeaconLocations ****************

// ********** Begin Class USIK_PartiesLibrary Function OnReservationCompleted **********************
struct Z_Construct_UFunction_USIK_PartiesLibrary_OnReservationCompleted_Statics
{
	struct SIK_PartiesLibrary_eventOnReservationCompleted_Parms
	{
		FSIK_PartyBeaconID BeaconID;
		FSIK_SteamId UserSteamID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Parties" },
		{ "DisplayName", "On Reservation Completed" },
		{ "Keywords", "OnReservationCompleted" },
		{ "ModuleRelativePath", "Functions/Parties/SIK_PartiesLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnReservationCompleted constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_BeaconID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UserSteamID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnReservationCompleted constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnReservationCompleted Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_PartiesLibrary_OnReservationCompleted_Statics::NewProp_BeaconID = { "BeaconID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_PartiesLibrary_eventOnReservationCompleted_Parms, BeaconID), Z_Construct_UScriptStruct_FSIK_PartyBeaconID, METADATA_PARAMS(0, nullptr) }; // 93468669
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_PartiesLibrary_OnReservationCompleted_Statics::NewProp_UserSteamID = { "UserSteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_PartiesLibrary_eventOnReservationCompleted_Parms, UserSteamID), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_PartiesLibrary_OnReservationCompleted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_PartiesLibrary_OnReservationCompleted_Statics::NewProp_BeaconID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_PartiesLibrary_OnReservationCompleted_Statics::NewProp_UserSteamID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_PartiesLibrary_OnReservationCompleted_Statics::PropPointers) < 2048);
// ********** End Function OnReservationCompleted Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_PartiesLibrary_OnReservationCompleted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_PartiesLibrary, nullptr, "OnReservationCompleted", 	Z_Construct_UFunction_USIK_PartiesLibrary_OnReservationCompleted_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_PartiesLibrary_OnReservationCompleted_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_PartiesLibrary_OnReservationCompleted_Statics::SIK_PartiesLibrary_eventOnReservationCompleted_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_PartiesLibrary_OnReservationCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_PartiesLibrary_OnReservationCompleted_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_PartiesLibrary_OnReservationCompleted_Statics::SIK_PartiesLibrary_eventOnReservationCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_PartiesLibrary_OnReservationCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_PartiesLibrary_OnReservationCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_PartiesLibrary::execOnReservationCompleted)
{
	P_GET_STRUCT(FSIK_PartyBeaconID,Z_Param_BeaconID);
	P_GET_STRUCT(FSIK_SteamId,Z_Param_UserSteamID);
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_PartiesLibrary::OnReservationCompleted(Z_Param_BeaconID,Z_Param_UserSteamID);
	P_NATIVE_END;
}
// ********** End Class USIK_PartiesLibrary Function OnReservationCompleted ************************

// ********** Begin Class USIK_PartiesLibrary ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_PartiesLibrary;
UClass* USIK_PartiesLibrary::GetPrivateStaticClass()
{
	using TClass = USIK_PartiesLibrary;
	if (!Z_Registration_Info_UClass_USIK_PartiesLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_PartiesLibrary"),
			Z_Registration_Info_UClass_USIK_PartiesLibrary.InnerSingleton,
			StaticRegisterNativesUSIK_PartiesLibrary,
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
	return Z_Registration_Info_UClass_USIK_PartiesLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_PartiesLibrary_NoRegister()
{
	return USIK_PartiesLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_PartiesLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Functions/Parties/SIK_PartiesLibrary.h" },
		{ "ModuleRelativePath", "Functions/Parties/SIK_PartiesLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_PartiesLibrary constinit property declarations **********************
// ********** End Class USIK_PartiesLibrary constinit property declarations ************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("DestroyBeacon"), .Pointer = &USIK_PartiesLibrary::execDestroyBeacon },
		{ .NameUTF8 = UTF8TEXT("GetAvailableBeaconLocations"), .Pointer = &USIK_PartiesLibrary::execGetAvailableBeaconLocations },
		{ .NameUTF8 = UTF8TEXT("GetBeaconByIndex"), .Pointer = &USIK_PartiesLibrary::execGetBeaconByIndex },
		{ .NameUTF8 = UTF8TEXT("GetBeaconDetails"), .Pointer = &USIK_PartiesLibrary::execGetBeaconDetails },
		{ .NameUTF8 = UTF8TEXT("GetBeaconLocationData"), .Pointer = &USIK_PartiesLibrary::execGetBeaconLocationData },
		{ .NameUTF8 = UTF8TEXT("GetNumActiveBeacons"), .Pointer = &USIK_PartiesLibrary::execGetNumActiveBeacons },
		{ .NameUTF8 = UTF8TEXT("GetNumAvailableBeaconLocations"), .Pointer = &USIK_PartiesLibrary::execGetNumAvailableBeaconLocations },
		{ .NameUTF8 = UTF8TEXT("OnReservationCompleted"), .Pointer = &USIK_PartiesLibrary::execOnReservationCompleted },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_PartiesLibrary_DestroyBeacon, "DestroyBeacon" }, // 74253902
		{ &Z_Construct_UFunction_USIK_PartiesLibrary_GetAvailableBeaconLocations, "GetAvailableBeaconLocations" }, // 470394985
		{ &Z_Construct_UFunction_USIK_PartiesLibrary_GetBeaconByIndex, "GetBeaconByIndex" }, // 3539710025
		{ &Z_Construct_UFunction_USIK_PartiesLibrary_GetBeaconDetails, "GetBeaconDetails" }, // 4058610275
		{ &Z_Construct_UFunction_USIK_PartiesLibrary_GetBeaconLocationData, "GetBeaconLocationData" }, // 2701877855
		{ &Z_Construct_UFunction_USIK_PartiesLibrary_GetNumActiveBeacons, "GetNumActiveBeacons" }, // 2266203306
		{ &Z_Construct_UFunction_USIK_PartiesLibrary_GetNumAvailableBeaconLocations, "GetNumAvailableBeaconLocations" }, // 2714084804
		{ &Z_Construct_UFunction_USIK_PartiesLibrary_OnReservationCompleted, "OnReservationCompleted" }, // 1183084322
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_PartiesLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_PartiesLibrary_Statics
UObject* (*const Z_Construct_UClass_USIK_PartiesLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_PartiesLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_PartiesLibrary_Statics::ClassParams = {
	&USIK_PartiesLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_PartiesLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_PartiesLibrary_Statics::Class_MetaDataParams)
};
void USIK_PartiesLibrary::StaticRegisterNativesUSIK_PartiesLibrary()
{
	UClass* Class = USIK_PartiesLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_PartiesLibrary_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_PartiesLibrary()
{
	if (!Z_Registration_Info_UClass_USIK_PartiesLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_PartiesLibrary.OuterSingleton, Z_Construct_UClass_USIK_PartiesLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_PartiesLibrary.OuterSingleton;
}
USIK_PartiesLibrary::USIK_PartiesLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_PartiesLibrary);
USIK_PartiesLibrary::~USIK_PartiesLibrary() {}
// ********** End Class USIK_PartiesLibrary ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Parties_SIK_PartiesLibrary_h__Script_SteamIntegrationKit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_PartiesLibrary, USIK_PartiesLibrary::StaticClass, TEXT("USIK_PartiesLibrary"), &Z_Registration_Info_UClass_USIK_PartiesLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_PartiesLibrary), 1988465939U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Parties_SIK_PartiesLibrary_h__Script_SteamIntegrationKit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Parties_SIK_PartiesLibrary_h__Script_SteamIntegrationKit_3748611470{
	TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Parties_SIK_PartiesLibrary_h__Script_SteamIntegrationKit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Parties_SIK_PartiesLibrary_h__Script_SteamIntegrationKit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
