// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/Parties/SIK_PartiesSubsystem.h"
#include "Engine/GameInstance.h"
#include "SIK_SharedFile.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_PartiesSubsystem() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_PartiesSubsystem();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_PartiesSubsystem_NoRegister();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_ActiveBeaconsUpdatedDelegate__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_AvailableBeaconLocationsUpdatedDelegate__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_ChangeNumOpenSlotsDelegate1__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_CreateBeaconDelegate1__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_ReservationNotificationDelegate__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_JoinPartyDelegate__DelegateSignature();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_PartyBeaconID();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_SteamId();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FSIK_JoinPartyDelegate ************************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_JoinPartyDelegate__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventSIK_JoinPartyDelegate_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
		FSIK_PartyBeaconID PartyBeaconID;
		FSIK_SteamId BeaconOwner;
		FString ConnectString;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/Parties/SIK_PartiesSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FSIK_JoinPartyDelegate constinit property declarations ****************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PartyBeaconID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BeaconOwner;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ConnectString;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FSIK_JoinPartyDelegate constinit property declarations ******************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FSIK_JoinPartyDelegate Property Definitions ***************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_JoinPartyDelegate__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventSIK_JoinPartyDelegate_Parms, Result), Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result, METADATA_PARAMS(0, nullptr) }; // 655382749
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_JoinPartyDelegate__DelegateSignature_Statics::NewProp_PartyBeaconID = { "PartyBeaconID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventSIK_JoinPartyDelegate_Parms, PartyBeaconID), Z_Construct_UScriptStruct_FSIK_PartyBeaconID, METADATA_PARAMS(0, nullptr) }; // 93468669
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_JoinPartyDelegate__DelegateSignature_Statics::NewProp_BeaconOwner = { "BeaconOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventSIK_JoinPartyDelegate_Parms, BeaconOwner), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_JoinPartyDelegate__DelegateSignature_Statics::NewProp_ConnectString = { "ConnectString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventSIK_JoinPartyDelegate_Parms, ConnectString), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_JoinPartyDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_JoinPartyDelegate__DelegateSignature_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_JoinPartyDelegate__DelegateSignature_Statics::NewProp_PartyBeaconID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_JoinPartyDelegate__DelegateSignature_Statics::NewProp_BeaconOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_JoinPartyDelegate__DelegateSignature_Statics::NewProp_ConnectString,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_JoinPartyDelegate__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FSIK_JoinPartyDelegate Property Definitions *****************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_JoinPartyDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "SIK_JoinPartyDelegate__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_JoinPartyDelegate__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_JoinPartyDelegate__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_JoinPartyDelegate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventSIK_JoinPartyDelegate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_JoinPartyDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_JoinPartyDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_JoinPartyDelegate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventSIK_JoinPartyDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_JoinPartyDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_JoinPartyDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSIK_JoinPartyDelegate_DelegateWrapper(const FMulticastScriptDelegate& SIK_JoinPartyDelegate, ESIK_Result Result, FSIK_PartyBeaconID PartyBeaconID, FSIK_SteamId BeaconOwner, const FString& ConnectString)
{
	struct _Script_SteamIntegrationKit_eventSIK_JoinPartyDelegate_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
		FSIK_PartyBeaconID PartyBeaconID;
		FSIK_SteamId BeaconOwner;
		FString ConnectString;
	};
	_Script_SteamIntegrationKit_eventSIK_JoinPartyDelegate_Parms Parms;
	Parms.Result=Result;
	Parms.PartyBeaconID=PartyBeaconID;
	Parms.BeaconOwner=BeaconOwner;
	Parms.ConnectString=ConnectString;
	SIK_JoinPartyDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FSIK_JoinPartyDelegate **************************************************

// ********** Begin Delegate FCreateBeaconDelegate1 ************************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_CreateBeaconDelegate1__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventCreateBeaconDelegate1_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
		FSIK_PartyBeaconID BeaconID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/Parties/SIK_PartiesSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FCreateBeaconDelegate1 constinit property declarations ****************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BeaconID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FCreateBeaconDelegate1 constinit property declarations ******************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FCreateBeaconDelegate1 Property Definitions ***************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_CreateBeaconDelegate1__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventCreateBeaconDelegate1_Parms, Result), Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result, METADATA_PARAMS(0, nullptr) }; // 655382749
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_CreateBeaconDelegate1__DelegateSignature_Statics::NewProp_BeaconID = { "BeaconID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventCreateBeaconDelegate1_Parms, BeaconID), Z_Construct_UScriptStruct_FSIK_PartyBeaconID, METADATA_PARAMS(0, nullptr) }; // 93468669
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_CreateBeaconDelegate1__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_CreateBeaconDelegate1__DelegateSignature_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_CreateBeaconDelegate1__DelegateSignature_Statics::NewProp_BeaconID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_CreateBeaconDelegate1__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FCreateBeaconDelegate1 Property Definitions *****************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_CreateBeaconDelegate1__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "CreateBeaconDelegate1__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_CreateBeaconDelegate1__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_CreateBeaconDelegate1__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_CreateBeaconDelegate1__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventCreateBeaconDelegate1_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_CreateBeaconDelegate1__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_CreateBeaconDelegate1__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_CreateBeaconDelegate1__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventCreateBeaconDelegate1_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_CreateBeaconDelegate1__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_CreateBeaconDelegate1__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FCreateBeaconDelegate1_DelegateWrapper(const FMulticastScriptDelegate& CreateBeaconDelegate1, ESIK_Result Result, FSIK_PartyBeaconID BeaconID)
{
	struct _Script_SteamIntegrationKit_eventCreateBeaconDelegate1_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
		FSIK_PartyBeaconID BeaconID;
	};
	_Script_SteamIntegrationKit_eventCreateBeaconDelegate1_Parms Parms;
	Parms.Result=Result;
	Parms.BeaconID=BeaconID;
	CreateBeaconDelegate1.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FCreateBeaconDelegate1 **************************************************

// ********** Begin Delegate FReservationNotificationDelegate **************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_ReservationNotificationDelegate__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventReservationNotificationDelegate_Parms
	{
		FSIK_PartyBeaconID BeaconID;
		FSIK_SteamId SteamID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/Parties/SIK_PartiesSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FReservationNotificationDelegate constinit property declarations ******
	static const UECodeGen_Private::FStructPropertyParams NewProp_BeaconID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FReservationNotificationDelegate constinit property declarations ********
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FReservationNotificationDelegate Property Definitions *****************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_ReservationNotificationDelegate__DelegateSignature_Statics::NewProp_BeaconID = { "BeaconID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventReservationNotificationDelegate_Parms, BeaconID), Z_Construct_UScriptStruct_FSIK_PartyBeaconID, METADATA_PARAMS(0, nullptr) }; // 93468669
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_ReservationNotificationDelegate__DelegateSignature_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventReservationNotificationDelegate_Parms, SteamID), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_ReservationNotificationDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_ReservationNotificationDelegate__DelegateSignature_Statics::NewProp_BeaconID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_ReservationNotificationDelegate__DelegateSignature_Statics::NewProp_SteamID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_ReservationNotificationDelegate__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FReservationNotificationDelegate Property Definitions *******************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_ReservationNotificationDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "ReservationNotificationDelegate__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_ReservationNotificationDelegate__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_ReservationNotificationDelegate__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_ReservationNotificationDelegate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventReservationNotificationDelegate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_ReservationNotificationDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_ReservationNotificationDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_ReservationNotificationDelegate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventReservationNotificationDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_ReservationNotificationDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_ReservationNotificationDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FReservationNotificationDelegate_DelegateWrapper(const FMulticastScriptDelegate& ReservationNotificationDelegate, FSIK_PartyBeaconID BeaconID, FSIK_SteamId SteamID)
{
	struct _Script_SteamIntegrationKit_eventReservationNotificationDelegate_Parms
	{
		FSIK_PartyBeaconID BeaconID;
		FSIK_SteamId SteamID;
	};
	_Script_SteamIntegrationKit_eventReservationNotificationDelegate_Parms Parms;
	Parms.BeaconID=BeaconID;
	Parms.SteamID=SteamID;
	ReservationNotificationDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FReservationNotificationDelegate ****************************************

// ********** Begin Delegate FChangeNumOpenSlotsDelegate1 ******************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_ChangeNumOpenSlotsDelegate1__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventChangeNumOpenSlotsDelegate1_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/Parties/SIK_PartiesSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FChangeNumOpenSlotsDelegate1 constinit property declarations **********
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FChangeNumOpenSlotsDelegate1 constinit property declarations ************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FChangeNumOpenSlotsDelegate1 Property Definitions *********************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_ChangeNumOpenSlotsDelegate1__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventChangeNumOpenSlotsDelegate1_Parms, Result), Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 655382749
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_ChangeNumOpenSlotsDelegate1__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_ChangeNumOpenSlotsDelegate1__DelegateSignature_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_ChangeNumOpenSlotsDelegate1__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FChangeNumOpenSlotsDelegate1 Property Definitions ***********************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_ChangeNumOpenSlotsDelegate1__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "ChangeNumOpenSlotsDelegate1__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_ChangeNumOpenSlotsDelegate1__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_ChangeNumOpenSlotsDelegate1__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_ChangeNumOpenSlotsDelegate1__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventChangeNumOpenSlotsDelegate1_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_ChangeNumOpenSlotsDelegate1__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_ChangeNumOpenSlotsDelegate1__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_ChangeNumOpenSlotsDelegate1__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventChangeNumOpenSlotsDelegate1_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_ChangeNumOpenSlotsDelegate1__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_ChangeNumOpenSlotsDelegate1__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FChangeNumOpenSlotsDelegate1_DelegateWrapper(const FMulticastScriptDelegate& ChangeNumOpenSlotsDelegate1, const ESIK_Result Result)
{
	struct _Script_SteamIntegrationKit_eventChangeNumOpenSlotsDelegate1_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
	};
	_Script_SteamIntegrationKit_eventChangeNumOpenSlotsDelegate1_Parms Parms;
	Parms.Result=Result;
	ChangeNumOpenSlotsDelegate1.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FChangeNumOpenSlotsDelegate1 ********************************************

// ********** Begin Delegate FAvailableBeaconLocationsUpdatedDelegate ******************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_AvailableBeaconLocationsUpdatedDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/Parties/SIK_PartiesSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FAvailableBeaconLocationsUpdatedDelegate constinit property declarations 
// ********** End Delegate FAvailableBeaconLocationsUpdatedDelegate constinit property declarations 
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_AvailableBeaconLocationsUpdatedDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "AvailableBeaconLocationsUpdatedDelegate__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_AvailableBeaconLocationsUpdatedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_AvailableBeaconLocationsUpdatedDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_AvailableBeaconLocationsUpdatedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_AvailableBeaconLocationsUpdatedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FAvailableBeaconLocationsUpdatedDelegate_DelegateWrapper(const FMulticastScriptDelegate& AvailableBeaconLocationsUpdatedDelegate)
{
	AvailableBeaconLocationsUpdatedDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FAvailableBeaconLocationsUpdatedDelegate ********************************

// ********** Begin Delegate FActiveBeaconsUpdatedDelegate *****************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_ActiveBeaconsUpdatedDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/Parties/SIK_PartiesSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FActiveBeaconsUpdatedDelegate constinit property declarations *********
// ********** End Delegate FActiveBeaconsUpdatedDelegate constinit property declarations ***********
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_ActiveBeaconsUpdatedDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "ActiveBeaconsUpdatedDelegate__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_ActiveBeaconsUpdatedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_ActiveBeaconsUpdatedDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_ActiveBeaconsUpdatedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_ActiveBeaconsUpdatedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FActiveBeaconsUpdatedDelegate_DelegateWrapper(const FMulticastScriptDelegate& ActiveBeaconsUpdatedDelegate)
{
	ActiveBeaconsUpdatedDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FActiveBeaconsUpdatedDelegate *******************************************

// ********** Begin Class USIK_PartiesSubsystem ****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_PartiesSubsystem;
UClass* USIK_PartiesSubsystem::GetPrivateStaticClass()
{
	using TClass = USIK_PartiesSubsystem;
	if (!Z_Registration_Info_UClass_USIK_PartiesSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_PartiesSubsystem"),
			Z_Registration_Info_UClass_USIK_PartiesSubsystem.InnerSingleton,
			StaticRegisterNativesUSIK_PartiesSubsystem,
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
	return Z_Registration_Info_UClass_USIK_PartiesSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_PartiesSubsystem_NoRegister()
{
	return USIK_PartiesSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_PartiesSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit || SDK Functions || Parties" },
		{ "DisplayName", "Parties Subsystem" },
		{ "IncludePath", "Functions/Parties/SIK_PartiesSubsystem.h" },
		{ "ModuleRelativePath", "Functions/Parties/SIK_PartiesSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnJoinPartyResult_MetaData[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Parties" },
		{ "ModuleRelativePath", "Functions/Parties/SIK_PartiesSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCreateBeaconResult_MetaData[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Parties" },
		{ "ModuleRelativePath", "Functions/Parties/SIK_PartiesSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnReservationNotification_MetaData[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Parties" },
		{ "ModuleRelativePath", "Functions/Parties/SIK_PartiesSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnChangeNumOpenSlots_MetaData[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Parties" },
		{ "ModuleRelativePath", "Functions/Parties/SIK_PartiesSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAvailableBeaconLocationsUpdated_MetaData[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Parties" },
		{ "ModuleRelativePath", "Functions/Parties/SIK_PartiesSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnActiveBeaconsUpdated_MetaData[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Parties" },
		{ "ModuleRelativePath", "Functions/Parties/SIK_PartiesSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_PartiesSubsystem constinit property declarations ********************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnJoinPartyResult;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCreateBeaconResult;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnReservationNotification;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnChangeNumOpenSlots;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAvailableBeaconLocationsUpdated;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnActiveBeaconsUpdated;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USIK_PartiesSubsystem constinit property declarations **********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_PartiesSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_PartiesSubsystem_Statics

// ********** Begin Class USIK_PartiesSubsystem Property Definitions *******************************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_PartiesSubsystem_Statics::NewProp_OnJoinPartyResult = { "OnJoinPartyResult", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_PartiesSubsystem, OnJoinPartyResult), Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_JoinPartyDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnJoinPartyResult_MetaData), NewProp_OnJoinPartyResult_MetaData) }; // 2461441633
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_PartiesSubsystem_Statics::NewProp_OnCreateBeaconResult = { "OnCreateBeaconResult", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_PartiesSubsystem, OnCreateBeaconResult), Z_Construct_UDelegateFunction_SteamIntegrationKit_CreateBeaconDelegate1__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCreateBeaconResult_MetaData), NewProp_OnCreateBeaconResult_MetaData) }; // 514324331
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_PartiesSubsystem_Statics::NewProp_OnReservationNotification = { "OnReservationNotification", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_PartiesSubsystem, OnReservationNotification), Z_Construct_UDelegateFunction_SteamIntegrationKit_ReservationNotificationDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnReservationNotification_MetaData), NewProp_OnReservationNotification_MetaData) }; // 987812332
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_PartiesSubsystem_Statics::NewProp_OnChangeNumOpenSlots = { "OnChangeNumOpenSlots", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_PartiesSubsystem, OnChangeNumOpenSlots), Z_Construct_UDelegateFunction_SteamIntegrationKit_ChangeNumOpenSlotsDelegate1__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnChangeNumOpenSlots_MetaData), NewProp_OnChangeNumOpenSlots_MetaData) }; // 568072071
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_PartiesSubsystem_Statics::NewProp_OnAvailableBeaconLocationsUpdated = { "OnAvailableBeaconLocationsUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_PartiesSubsystem, OnAvailableBeaconLocationsUpdated), Z_Construct_UDelegateFunction_SteamIntegrationKit_AvailableBeaconLocationsUpdatedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAvailableBeaconLocationsUpdated_MetaData), NewProp_OnAvailableBeaconLocationsUpdated_MetaData) }; // 314135201
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_PartiesSubsystem_Statics::NewProp_OnActiveBeaconsUpdated = { "OnActiveBeaconsUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_PartiesSubsystem, OnActiveBeaconsUpdated), Z_Construct_UDelegateFunction_SteamIntegrationKit_ActiveBeaconsUpdatedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnActiveBeaconsUpdated_MetaData), NewProp_OnActiveBeaconsUpdated_MetaData) }; // 4050830419
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USIK_PartiesSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_PartiesSubsystem_Statics::NewProp_OnJoinPartyResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_PartiesSubsystem_Statics::NewProp_OnCreateBeaconResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_PartiesSubsystem_Statics::NewProp_OnReservationNotification,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_PartiesSubsystem_Statics::NewProp_OnChangeNumOpenSlots,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_PartiesSubsystem_Statics::NewProp_OnAvailableBeaconLocationsUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_PartiesSubsystem_Statics::NewProp_OnActiveBeaconsUpdated,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_PartiesSubsystem_Statics::PropPointers) < 2048);
// ********** End Class USIK_PartiesSubsystem Property Definitions *********************************
UObject* (*const Z_Construct_UClass_USIK_PartiesSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_PartiesSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_PartiesSubsystem_Statics::ClassParams = {
	&USIK_PartiesSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USIK_PartiesSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USIK_PartiesSubsystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_PartiesSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_PartiesSubsystem_Statics::Class_MetaDataParams)
};
void USIK_PartiesSubsystem::StaticRegisterNativesUSIK_PartiesSubsystem()
{
}
UClass* Z_Construct_UClass_USIK_PartiesSubsystem()
{
	if (!Z_Registration_Info_UClass_USIK_PartiesSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_PartiesSubsystem.OuterSingleton, Z_Construct_UClass_USIK_PartiesSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_PartiesSubsystem.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_PartiesSubsystem);
// ********** End Class USIK_PartiesSubsystem ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Parties_SIK_PartiesSubsystem_h__Script_SteamIntegrationKit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_PartiesSubsystem, USIK_PartiesSubsystem::StaticClass, TEXT("USIK_PartiesSubsystem"), &Z_Registration_Info_UClass_USIK_PartiesSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_PartiesSubsystem), 2511575490U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Parties_SIK_PartiesSubsystem_h__Script_SteamIntegrationKit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Parties_SIK_PartiesSubsystem_h__Script_SteamIntegrationKit_3264666149{
	TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Parties_SIK_PartiesSubsystem_h__Script_SteamIntegrationKit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Parties_SIK_PartiesSubsystem_h__Script_SteamIntegrationKit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
