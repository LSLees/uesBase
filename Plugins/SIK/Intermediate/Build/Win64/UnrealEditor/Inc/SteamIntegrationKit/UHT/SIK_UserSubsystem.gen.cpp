// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/User/SIK_UserSubsystem.h"
#include "Engine/GameInstance.h"
#include "SIK_SharedFile.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_UserSubsystem() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_UserSubsystem();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_UserSubsystem_NoRegister();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_ClientGameServerDenyDelegate__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_DurationControlDelegate__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_EncryptedAppTicketResponseDelegate__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_GameWebCallbackDelegate__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_GetAuthSessionTicketResponseDelegate__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_GetTicketForWebApiResponseDelegate__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_IPCFailureDelegate__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_LicensesUpdatedDelegate__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_MicroTxnAuthorizationResponseDelegate__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_SteamServerConnectFailureDelegate__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_SteamServersConnectedDelegate__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_SteamServersDisconnectedDelegate__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_StoreAuthURLResponseDelegate__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_ValidateAuthTicketResponseDelegate__DelegateSignature();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_SteamId();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FSIK_ClientGameServerDenyDelegate *************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_ClientGameServerDenyDelegate__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventSIK_ClientGameServerDenyDelegate_Parms
	{
		int32 AppID;
		FString GameServerIP;
		int32 GameServerPort;
		int32 Secure;
		int32 Reason;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/User/SIK_UserSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FSIK_ClientGameServerDenyDelegate constinit property declarations *****
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GameServerIP;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GameServerPort;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Secure;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Reason;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FSIK_ClientGameServerDenyDelegate constinit property declarations *******
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FSIK_ClientGameServerDenyDelegate Property Definitions ****************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_ClientGameServerDenyDelegate__DelegateSignature_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventSIK_ClientGameServerDenyDelegate_Parms, AppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_ClientGameServerDenyDelegate__DelegateSignature_Statics::NewProp_GameServerIP = { "GameServerIP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventSIK_ClientGameServerDenyDelegate_Parms, GameServerIP), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_ClientGameServerDenyDelegate__DelegateSignature_Statics::NewProp_GameServerPort = { "GameServerPort", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventSIK_ClientGameServerDenyDelegate_Parms, GameServerPort), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_ClientGameServerDenyDelegate__DelegateSignature_Statics::NewProp_Secure = { "Secure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventSIK_ClientGameServerDenyDelegate_Parms, Secure), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_ClientGameServerDenyDelegate__DelegateSignature_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventSIK_ClientGameServerDenyDelegate_Parms, Reason), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_ClientGameServerDenyDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_ClientGameServerDenyDelegate__DelegateSignature_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_ClientGameServerDenyDelegate__DelegateSignature_Statics::NewProp_GameServerIP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_ClientGameServerDenyDelegate__DelegateSignature_Statics::NewProp_GameServerPort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_ClientGameServerDenyDelegate__DelegateSignature_Statics::NewProp_Secure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_ClientGameServerDenyDelegate__DelegateSignature_Statics::NewProp_Reason,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_ClientGameServerDenyDelegate__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FSIK_ClientGameServerDenyDelegate Property Definitions ******************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_ClientGameServerDenyDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "SIK_ClientGameServerDenyDelegate__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_ClientGameServerDenyDelegate__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_ClientGameServerDenyDelegate__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_ClientGameServerDenyDelegate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventSIK_ClientGameServerDenyDelegate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_ClientGameServerDenyDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_ClientGameServerDenyDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_ClientGameServerDenyDelegate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventSIK_ClientGameServerDenyDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_ClientGameServerDenyDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_ClientGameServerDenyDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSIK_ClientGameServerDenyDelegate_DelegateWrapper(const FMulticastScriptDelegate& SIK_ClientGameServerDenyDelegate, int32 AppID, const FString& GameServerIP, int32 GameServerPort, int32 Secure, int32 Reason)
{
	struct _Script_SteamIntegrationKit_eventSIK_ClientGameServerDenyDelegate_Parms
	{
		int32 AppID;
		FString GameServerIP;
		int32 GameServerPort;
		int32 Secure;
		int32 Reason;
	};
	_Script_SteamIntegrationKit_eventSIK_ClientGameServerDenyDelegate_Parms Parms;
	Parms.AppID=AppID;
	Parms.GameServerIP=GameServerIP;
	Parms.GameServerPort=GameServerPort;
	Parms.Secure=Secure;
	Parms.Reason=Reason;
	SIK_ClientGameServerDenyDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FSIK_ClientGameServerDenyDelegate ***************************************

// ********** Begin Delegate FSIK_DurationControlDelegate ******************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_DurationControlDelegate__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventSIK_DurationControlDelegate_Parms
	{
		int32 AppID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/User/SIK_UserSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FSIK_DurationControlDelegate constinit property declarations **********
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FSIK_DurationControlDelegate constinit property declarations ************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FSIK_DurationControlDelegate Property Definitions *********************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_DurationControlDelegate__DelegateSignature_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventSIK_DurationControlDelegate_Parms, AppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_DurationControlDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_DurationControlDelegate__DelegateSignature_Statics::NewProp_AppID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_DurationControlDelegate__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FSIK_DurationControlDelegate Property Definitions ***********************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_DurationControlDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "SIK_DurationControlDelegate__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_DurationControlDelegate__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_DurationControlDelegate__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_DurationControlDelegate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventSIK_DurationControlDelegate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_DurationControlDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_DurationControlDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_DurationControlDelegate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventSIK_DurationControlDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_DurationControlDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_DurationControlDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSIK_DurationControlDelegate_DelegateWrapper(const FMulticastScriptDelegate& SIK_DurationControlDelegate, int32 AppID)
{
	struct _Script_SteamIntegrationKit_eventSIK_DurationControlDelegate_Parms
	{
		int32 AppID;
	};
	_Script_SteamIntegrationKit_eventSIK_DurationControlDelegate_Parms Parms;
	Parms.AppID=AppID;
	SIK_DurationControlDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FSIK_DurationControlDelegate ********************************************

// ********** Begin Delegate FSIK_EncryptedAppTicketResponseDelegate *******************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_EncryptedAppTicketResponseDelegate__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventSIK_EncryptedAppTicketResponseDelegate_Parms
	{
		int32 Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/User/SIK_UserSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FSIK_EncryptedAppTicketResponseDelegate constinit property declarations 
	static const UECodeGen_Private::FIntPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FSIK_EncryptedAppTicketResponseDelegate constinit property declarations *
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FSIK_EncryptedAppTicketResponseDelegate Property Definitions **********
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_EncryptedAppTicketResponseDelegate__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventSIK_EncryptedAppTicketResponseDelegate_Parms, Result), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_EncryptedAppTicketResponseDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_EncryptedAppTicketResponseDelegate__DelegateSignature_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_EncryptedAppTicketResponseDelegate__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FSIK_EncryptedAppTicketResponseDelegate Property Definitions ************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_EncryptedAppTicketResponseDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "SIK_EncryptedAppTicketResponseDelegate__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_EncryptedAppTicketResponseDelegate__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_EncryptedAppTicketResponseDelegate__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_EncryptedAppTicketResponseDelegate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventSIK_EncryptedAppTicketResponseDelegate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_EncryptedAppTicketResponseDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_EncryptedAppTicketResponseDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_EncryptedAppTicketResponseDelegate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventSIK_EncryptedAppTicketResponseDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_EncryptedAppTicketResponseDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_EncryptedAppTicketResponseDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSIK_EncryptedAppTicketResponseDelegate_DelegateWrapper(const FMulticastScriptDelegate& SIK_EncryptedAppTicketResponseDelegate, int32 Result)
{
	struct _Script_SteamIntegrationKit_eventSIK_EncryptedAppTicketResponseDelegate_Parms
	{
		int32 Result;
	};
	_Script_SteamIntegrationKit_eventSIK_EncryptedAppTicketResponseDelegate_Parms Parms;
	Parms.Result=Result;
	SIK_EncryptedAppTicketResponseDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FSIK_EncryptedAppTicketResponseDelegate *********************************

// ********** Begin Delegate FSIK_GameWebCallbackDelegate ******************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_GameWebCallbackDelegate__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventSIK_GameWebCallbackDelegate_Parms
	{
		FString URL;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/User/SIK_UserSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FSIK_GameWebCallbackDelegate constinit property declarations **********
	static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FSIK_GameWebCallbackDelegate constinit property declarations ************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FSIK_GameWebCallbackDelegate Property Definitions *********************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_GameWebCallbackDelegate__DelegateSignature_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventSIK_GameWebCallbackDelegate_Parms, URL), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_GameWebCallbackDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_GameWebCallbackDelegate__DelegateSignature_Statics::NewProp_URL,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_GameWebCallbackDelegate__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FSIK_GameWebCallbackDelegate Property Definitions ***********************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_GameWebCallbackDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "SIK_GameWebCallbackDelegate__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_GameWebCallbackDelegate__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_GameWebCallbackDelegate__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_GameWebCallbackDelegate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventSIK_GameWebCallbackDelegate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_GameWebCallbackDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_GameWebCallbackDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_GameWebCallbackDelegate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventSIK_GameWebCallbackDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_GameWebCallbackDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_GameWebCallbackDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSIK_GameWebCallbackDelegate_DelegateWrapper(const FMulticastScriptDelegate& SIK_GameWebCallbackDelegate, const FString& URL)
{
	struct _Script_SteamIntegrationKit_eventSIK_GameWebCallbackDelegate_Parms
	{
		FString URL;
	};
	_Script_SteamIntegrationKit_eventSIK_GameWebCallbackDelegate_Parms Parms;
	Parms.URL=URL;
	SIK_GameWebCallbackDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FSIK_GameWebCallbackDelegate ********************************************

// ********** Begin Delegate FSIK_GetAuthSessionTicketResponseDelegate *****************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_GetAuthSessionTicketResponseDelegate__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventSIK_GetAuthSessionTicketResponseDelegate_Parms
	{
		int32 Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/User/SIK_UserSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FSIK_GetAuthSessionTicketResponseDelegate constinit property declarations 
	static const UECodeGen_Private::FIntPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FSIK_GetAuthSessionTicketResponseDelegate constinit property declarations 
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FSIK_GetAuthSessionTicketResponseDelegate Property Definitions ********
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_GetAuthSessionTicketResponseDelegate__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventSIK_GetAuthSessionTicketResponseDelegate_Parms, Result), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_GetAuthSessionTicketResponseDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_GetAuthSessionTicketResponseDelegate__DelegateSignature_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_GetAuthSessionTicketResponseDelegate__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FSIK_GetAuthSessionTicketResponseDelegate Property Definitions **********
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_GetAuthSessionTicketResponseDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "SIK_GetAuthSessionTicketResponseDelegate__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_GetAuthSessionTicketResponseDelegate__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_GetAuthSessionTicketResponseDelegate__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_GetAuthSessionTicketResponseDelegate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventSIK_GetAuthSessionTicketResponseDelegate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_GetAuthSessionTicketResponseDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_GetAuthSessionTicketResponseDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_GetAuthSessionTicketResponseDelegate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventSIK_GetAuthSessionTicketResponseDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_GetAuthSessionTicketResponseDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_GetAuthSessionTicketResponseDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSIK_GetAuthSessionTicketResponseDelegate_DelegateWrapper(const FMulticastScriptDelegate& SIK_GetAuthSessionTicketResponseDelegate, int32 Result)
{
	struct _Script_SteamIntegrationKit_eventSIK_GetAuthSessionTicketResponseDelegate_Parms
	{
		int32 Result;
	};
	_Script_SteamIntegrationKit_eventSIK_GetAuthSessionTicketResponseDelegate_Parms Parms;
	Parms.Result=Result;
	SIK_GetAuthSessionTicketResponseDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FSIK_GetAuthSessionTicketResponseDelegate *******************************

// ********** Begin Delegate FSIK_GetTicketForWebApiResponseDelegate *******************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_GetTicketForWebApiResponseDelegate__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventSIK_GetTicketForWebApiResponseDelegate_Parms
	{
		int32 Result;
		int32 AuthTicket;
		TArray<uint8> TicketData;
		FString TicketAsStr;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/User/SIK_UserSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TicketData_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TicketAsStr_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FSIK_GetTicketForWebApiResponseDelegate constinit property declarations 
	static const UECodeGen_Private::FIntPropertyParams NewProp_Result;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AuthTicket;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TicketData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TicketData;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TicketAsStr;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FSIK_GetTicketForWebApiResponseDelegate constinit property declarations *
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FSIK_GetTicketForWebApiResponseDelegate Property Definitions **********
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_GetTicketForWebApiResponseDelegate__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventSIK_GetTicketForWebApiResponseDelegate_Parms, Result), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_GetTicketForWebApiResponseDelegate__DelegateSignature_Statics::NewProp_AuthTicket = { "AuthTicket", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventSIK_GetTicketForWebApiResponseDelegate_Parms, AuthTicket), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_GetTicketForWebApiResponseDelegate__DelegateSignature_Statics::NewProp_TicketData_Inner = { "TicketData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_GetTicketForWebApiResponseDelegate__DelegateSignature_Statics::NewProp_TicketData = { "TicketData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventSIK_GetTicketForWebApiResponseDelegate_Parms, TicketData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TicketData_MetaData), NewProp_TicketData_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_GetTicketForWebApiResponseDelegate__DelegateSignature_Statics::NewProp_TicketAsStr = { "TicketAsStr", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventSIK_GetTicketForWebApiResponseDelegate_Parms, TicketAsStr), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TicketAsStr_MetaData), NewProp_TicketAsStr_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_GetTicketForWebApiResponseDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_GetTicketForWebApiResponseDelegate__DelegateSignature_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_GetTicketForWebApiResponseDelegate__DelegateSignature_Statics::NewProp_AuthTicket,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_GetTicketForWebApiResponseDelegate__DelegateSignature_Statics::NewProp_TicketData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_GetTicketForWebApiResponseDelegate__DelegateSignature_Statics::NewProp_TicketData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_GetTicketForWebApiResponseDelegate__DelegateSignature_Statics::NewProp_TicketAsStr,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_GetTicketForWebApiResponseDelegate__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FSIK_GetTicketForWebApiResponseDelegate Property Definitions ************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_GetTicketForWebApiResponseDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "SIK_GetTicketForWebApiResponseDelegate__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_GetTicketForWebApiResponseDelegate__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_GetTicketForWebApiResponseDelegate__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_GetTicketForWebApiResponseDelegate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventSIK_GetTicketForWebApiResponseDelegate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_GetTicketForWebApiResponseDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_GetTicketForWebApiResponseDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_GetTicketForWebApiResponseDelegate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventSIK_GetTicketForWebApiResponseDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_GetTicketForWebApiResponseDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_GetTicketForWebApiResponseDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSIK_GetTicketForWebApiResponseDelegate_DelegateWrapper(const FMulticastScriptDelegate& SIK_GetTicketForWebApiResponseDelegate, int32 Result, int32 AuthTicket, TArray<uint8> const& TicketData, const FString& TicketAsStr)
{
	struct _Script_SteamIntegrationKit_eventSIK_GetTicketForWebApiResponseDelegate_Parms
	{
		int32 Result;
		int32 AuthTicket;
		TArray<uint8> TicketData;
		FString TicketAsStr;
	};
	_Script_SteamIntegrationKit_eventSIK_GetTicketForWebApiResponseDelegate_Parms Parms;
	Parms.Result=Result;
	Parms.AuthTicket=AuthTicket;
	Parms.TicketData=TicketData;
	Parms.TicketAsStr=TicketAsStr;
	SIK_GetTicketForWebApiResponseDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FSIK_GetTicketForWebApiResponseDelegate *********************************

// ********** Begin Delegate FSIK_IPCFailureDelegate ***********************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_IPCFailureDelegate__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventSIK_IPCFailureDelegate_Parms
	{
		int32 FailureType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/User/SIK_UserSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FSIK_IPCFailureDelegate constinit property declarations ***************
	static const UECodeGen_Private::FIntPropertyParams NewProp_FailureType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FSIK_IPCFailureDelegate constinit property declarations *****************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FSIK_IPCFailureDelegate Property Definitions **************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_IPCFailureDelegate__DelegateSignature_Statics::NewProp_FailureType = { "FailureType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventSIK_IPCFailureDelegate_Parms, FailureType), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_IPCFailureDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_IPCFailureDelegate__DelegateSignature_Statics::NewProp_FailureType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_IPCFailureDelegate__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FSIK_IPCFailureDelegate Property Definitions ****************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_IPCFailureDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "SIK_IPCFailureDelegate__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_IPCFailureDelegate__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_IPCFailureDelegate__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_IPCFailureDelegate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventSIK_IPCFailureDelegate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_IPCFailureDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_IPCFailureDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_IPCFailureDelegate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventSIK_IPCFailureDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_IPCFailureDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_IPCFailureDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSIK_IPCFailureDelegate_DelegateWrapper(const FMulticastScriptDelegate& SIK_IPCFailureDelegate, int32 FailureType)
{
	struct _Script_SteamIntegrationKit_eventSIK_IPCFailureDelegate_Parms
	{
		int32 FailureType;
	};
	_Script_SteamIntegrationKit_eventSIK_IPCFailureDelegate_Parms Parms;
	Parms.FailureType=FailureType;
	SIK_IPCFailureDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FSIK_IPCFailureDelegate *************************************************

// ********** Begin Delegate FSIK_LicensesUpdatedDelegate ******************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_LicensesUpdatedDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/User/SIK_UserSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FSIK_LicensesUpdatedDelegate constinit property declarations **********
// ********** End Delegate FSIK_LicensesUpdatedDelegate constinit property declarations ************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_LicensesUpdatedDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "SIK_LicensesUpdatedDelegate__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_LicensesUpdatedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_LicensesUpdatedDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_LicensesUpdatedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_LicensesUpdatedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSIK_LicensesUpdatedDelegate_DelegateWrapper(const FMulticastScriptDelegate& SIK_LicensesUpdatedDelegate)
{
	SIK_LicensesUpdatedDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FSIK_LicensesUpdatedDelegate ********************************************

// ********** Begin Delegate FSIK_MicroTxnAuthorizationResponseDelegate ****************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_MicroTxnAuthorizationResponseDelegate__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventSIK_MicroTxnAuthorizationResponseDelegate_Parms
	{
		int32 AppID;
		int32 OrderID;
		bool Authorized;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/User/SIK_UserSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FSIK_MicroTxnAuthorizationResponseDelegate constinit property declarations 
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OrderID;
	static void NewProp_Authorized_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Authorized;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FSIK_MicroTxnAuthorizationResponseDelegate constinit property declarations 
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FSIK_MicroTxnAuthorizationResponseDelegate Property Definitions *******
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_MicroTxnAuthorizationResponseDelegate__DelegateSignature_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventSIK_MicroTxnAuthorizationResponseDelegate_Parms, AppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_MicroTxnAuthorizationResponseDelegate__DelegateSignature_Statics::NewProp_OrderID = { "OrderID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventSIK_MicroTxnAuthorizationResponseDelegate_Parms, OrderID), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_MicroTxnAuthorizationResponseDelegate__DelegateSignature_Statics::NewProp_Authorized_SetBit(void* Obj)
{
	((_Script_SteamIntegrationKit_eventSIK_MicroTxnAuthorizationResponseDelegate_Parms*)Obj)->Authorized = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_MicroTxnAuthorizationResponseDelegate__DelegateSignature_Statics::NewProp_Authorized = { "Authorized", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamIntegrationKit_eventSIK_MicroTxnAuthorizationResponseDelegate_Parms), &Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_MicroTxnAuthorizationResponseDelegate__DelegateSignature_Statics::NewProp_Authorized_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_MicroTxnAuthorizationResponseDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_MicroTxnAuthorizationResponseDelegate__DelegateSignature_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_MicroTxnAuthorizationResponseDelegate__DelegateSignature_Statics::NewProp_OrderID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_MicroTxnAuthorizationResponseDelegate__DelegateSignature_Statics::NewProp_Authorized,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_MicroTxnAuthorizationResponseDelegate__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FSIK_MicroTxnAuthorizationResponseDelegate Property Definitions *********
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_MicroTxnAuthorizationResponseDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "SIK_MicroTxnAuthorizationResponseDelegate__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_MicroTxnAuthorizationResponseDelegate__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_MicroTxnAuthorizationResponseDelegate__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_MicroTxnAuthorizationResponseDelegate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventSIK_MicroTxnAuthorizationResponseDelegate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_MicroTxnAuthorizationResponseDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_MicroTxnAuthorizationResponseDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_MicroTxnAuthorizationResponseDelegate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventSIK_MicroTxnAuthorizationResponseDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_MicroTxnAuthorizationResponseDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_MicroTxnAuthorizationResponseDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSIK_MicroTxnAuthorizationResponseDelegate_DelegateWrapper(const FMulticastScriptDelegate& SIK_MicroTxnAuthorizationResponseDelegate, int32 AppID, int32 OrderID, bool Authorized)
{
	struct _Script_SteamIntegrationKit_eventSIK_MicroTxnAuthorizationResponseDelegate_Parms
	{
		int32 AppID;
		int32 OrderID;
		bool Authorized;
	};
	_Script_SteamIntegrationKit_eventSIK_MicroTxnAuthorizationResponseDelegate_Parms Parms;
	Parms.AppID=AppID;
	Parms.OrderID=OrderID;
	Parms.Authorized=Authorized ? true : false;
	SIK_MicroTxnAuthorizationResponseDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FSIK_MicroTxnAuthorizationResponseDelegate ******************************

// ********** Begin Delegate FSIK_SteamServerConnectFailureDelegate ********************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_SteamServerConnectFailureDelegate__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventSIK_SteamServerConnectFailureDelegate_Parms
	{
		int32 Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/User/SIK_UserSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FSIK_SteamServerConnectFailureDelegate constinit property declarations 
	static const UECodeGen_Private::FIntPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FSIK_SteamServerConnectFailureDelegate constinit property declarations **
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FSIK_SteamServerConnectFailureDelegate Property Definitions ***********
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_SteamServerConnectFailureDelegate__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventSIK_SteamServerConnectFailureDelegate_Parms, Result), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_SteamServerConnectFailureDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_SteamServerConnectFailureDelegate__DelegateSignature_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_SteamServerConnectFailureDelegate__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FSIK_SteamServerConnectFailureDelegate Property Definitions *************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_SteamServerConnectFailureDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "SIK_SteamServerConnectFailureDelegate__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_SteamServerConnectFailureDelegate__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_SteamServerConnectFailureDelegate__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_SteamServerConnectFailureDelegate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventSIK_SteamServerConnectFailureDelegate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_SteamServerConnectFailureDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_SteamServerConnectFailureDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_SteamServerConnectFailureDelegate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventSIK_SteamServerConnectFailureDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_SteamServerConnectFailureDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_SteamServerConnectFailureDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSIK_SteamServerConnectFailureDelegate_DelegateWrapper(const FMulticastScriptDelegate& SIK_SteamServerConnectFailureDelegate, int32 Result)
{
	struct _Script_SteamIntegrationKit_eventSIK_SteamServerConnectFailureDelegate_Parms
	{
		int32 Result;
	};
	_Script_SteamIntegrationKit_eventSIK_SteamServerConnectFailureDelegate_Parms Parms;
	Parms.Result=Result;
	SIK_SteamServerConnectFailureDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FSIK_SteamServerConnectFailureDelegate **********************************

// ********** Begin Delegate FSIK_SteamServersConnectedDelegate ************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_SteamServersConnectedDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/User/SIK_UserSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FSIK_SteamServersConnectedDelegate constinit property declarations ****
// ********** End Delegate FSIK_SteamServersConnectedDelegate constinit property declarations ******
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_SteamServersConnectedDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "SIK_SteamServersConnectedDelegate__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_SteamServersConnectedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_SteamServersConnectedDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_SteamServersConnectedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_SteamServersConnectedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSIK_SteamServersConnectedDelegate_DelegateWrapper(const FMulticastScriptDelegate& SIK_SteamServersConnectedDelegate)
{
	SIK_SteamServersConnectedDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FSIK_SteamServersConnectedDelegate **************************************

// ********** Begin Delegate FSIK_SteamServersDisconnectedDelegate *********************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_SteamServersDisconnectedDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/User/SIK_UserSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FSIK_SteamServersDisconnectedDelegate constinit property declarations *
// ********** End Delegate FSIK_SteamServersDisconnectedDelegate constinit property declarations ***
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_SteamServersDisconnectedDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "SIK_SteamServersDisconnectedDelegate__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_SteamServersDisconnectedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_SteamServersDisconnectedDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_SteamServersDisconnectedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_SteamServersDisconnectedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSIK_SteamServersDisconnectedDelegate_DelegateWrapper(const FMulticastScriptDelegate& SIK_SteamServersDisconnectedDelegate)
{
	SIK_SteamServersDisconnectedDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FSIK_SteamServersDisconnectedDelegate ***********************************

// ********** Begin Delegate FSIK_StoreAuthURLResponseDelegate *************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_StoreAuthURLResponseDelegate__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventSIK_StoreAuthURLResponseDelegate_Parms
	{
		FString URL;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/User/SIK_UserSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FSIK_StoreAuthURLResponseDelegate constinit property declarations *****
	static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FSIK_StoreAuthURLResponseDelegate constinit property declarations *******
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FSIK_StoreAuthURLResponseDelegate Property Definitions ****************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_StoreAuthURLResponseDelegate__DelegateSignature_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventSIK_StoreAuthURLResponseDelegate_Parms, URL), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_StoreAuthURLResponseDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_StoreAuthURLResponseDelegate__DelegateSignature_Statics::NewProp_URL,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_StoreAuthURLResponseDelegate__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FSIK_StoreAuthURLResponseDelegate Property Definitions ******************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_StoreAuthURLResponseDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "SIK_StoreAuthURLResponseDelegate__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_StoreAuthURLResponseDelegate__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_StoreAuthURLResponseDelegate__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_StoreAuthURLResponseDelegate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventSIK_StoreAuthURLResponseDelegate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_StoreAuthURLResponseDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_StoreAuthURLResponseDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_StoreAuthURLResponseDelegate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventSIK_StoreAuthURLResponseDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_StoreAuthURLResponseDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_StoreAuthURLResponseDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSIK_StoreAuthURLResponseDelegate_DelegateWrapper(const FMulticastScriptDelegate& SIK_StoreAuthURLResponseDelegate, const FString& URL)
{
	struct _Script_SteamIntegrationKit_eventSIK_StoreAuthURLResponseDelegate_Parms
	{
		FString URL;
	};
	_Script_SteamIntegrationKit_eventSIK_StoreAuthURLResponseDelegate_Parms Parms;
	Parms.URL=URL;
	SIK_StoreAuthURLResponseDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FSIK_StoreAuthURLResponseDelegate ***************************************

// ********** Begin Delegate FSIK_ValidateAuthTicketResponseDelegate *******************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_ValidateAuthTicketResponseDelegate__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventSIK_ValidateAuthTicketResponseDelegate_Parms
	{
		FSIK_SteamId SteamID;
		int32 AuthSessionResponse;
		FSIK_SteamId OwnerSteamID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/User/SIK_UserSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FSIK_ValidateAuthTicketResponseDelegate constinit property declarations 
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AuthSessionResponse;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OwnerSteamID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FSIK_ValidateAuthTicketResponseDelegate constinit property declarations *
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FSIK_ValidateAuthTicketResponseDelegate Property Definitions **********
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_ValidateAuthTicketResponseDelegate__DelegateSignature_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventSIK_ValidateAuthTicketResponseDelegate_Parms, SteamID), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_ValidateAuthTicketResponseDelegate__DelegateSignature_Statics::NewProp_AuthSessionResponse = { "AuthSessionResponse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventSIK_ValidateAuthTicketResponseDelegate_Parms, AuthSessionResponse), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_ValidateAuthTicketResponseDelegate__DelegateSignature_Statics::NewProp_OwnerSteamID = { "OwnerSteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventSIK_ValidateAuthTicketResponseDelegate_Parms, OwnerSteamID), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_ValidateAuthTicketResponseDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_ValidateAuthTicketResponseDelegate__DelegateSignature_Statics::NewProp_SteamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_ValidateAuthTicketResponseDelegate__DelegateSignature_Statics::NewProp_AuthSessionResponse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_ValidateAuthTicketResponseDelegate__DelegateSignature_Statics::NewProp_OwnerSteamID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_ValidateAuthTicketResponseDelegate__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FSIK_ValidateAuthTicketResponseDelegate Property Definitions ************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_ValidateAuthTicketResponseDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "SIK_ValidateAuthTicketResponseDelegate__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_ValidateAuthTicketResponseDelegate__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_ValidateAuthTicketResponseDelegate__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_ValidateAuthTicketResponseDelegate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventSIK_ValidateAuthTicketResponseDelegate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_ValidateAuthTicketResponseDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_ValidateAuthTicketResponseDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_ValidateAuthTicketResponseDelegate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventSIK_ValidateAuthTicketResponseDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_ValidateAuthTicketResponseDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_ValidateAuthTicketResponseDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSIK_ValidateAuthTicketResponseDelegate_DelegateWrapper(const FMulticastScriptDelegate& SIK_ValidateAuthTicketResponseDelegate, FSIK_SteamId SteamID, int32 AuthSessionResponse, FSIK_SteamId OwnerSteamID)
{
	struct _Script_SteamIntegrationKit_eventSIK_ValidateAuthTicketResponseDelegate_Parms
	{
		FSIK_SteamId SteamID;
		int32 AuthSessionResponse;
		FSIK_SteamId OwnerSteamID;
	};
	_Script_SteamIntegrationKit_eventSIK_ValidateAuthTicketResponseDelegate_Parms Parms;
	Parms.SteamID=SteamID;
	Parms.AuthSessionResponse=AuthSessionResponse;
	Parms.OwnerSteamID=OwnerSteamID;
	SIK_ValidateAuthTicketResponseDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FSIK_ValidateAuthTicketResponseDelegate *********************************

// ********** Begin Class USIK_UserSubsystem *******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_UserSubsystem;
UClass* USIK_UserSubsystem::GetPrivateStaticClass()
{
	using TClass = USIK_UserSubsystem;
	if (!Z_Registration_Info_UClass_USIK_UserSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_UserSubsystem"),
			Z_Registration_Info_UClass_USIK_UserSubsystem.InnerSingleton,
			StaticRegisterNativesUSIK_UserSubsystem,
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
	return Z_Registration_Info_UClass_USIK_UserSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_UserSubsystem_NoRegister()
{
	return USIK_UserSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_UserSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Functions/User/SIK_UserSubsystem.h" },
		{ "ModuleRelativePath", "Functions/User/SIK_UserSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnClientGameServerDenyCallback_MetaData[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || User" },
		{ "ModuleRelativePath", "Functions/User/SIK_UserSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDurationControlCallback_MetaData[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || User" },
		{ "ModuleRelativePath", "Functions/User/SIK_UserSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnEncryptedAppTicketResponseCallback_MetaData[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || User" },
		{ "ModuleRelativePath", "Functions/User/SIK_UserSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGameWebCallbackCallback_MetaData[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || User" },
		{ "ModuleRelativePath", "Functions/User/SIK_UserSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGetAuthSessionTicketResponseCallback_MetaData[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || User" },
		{ "ModuleRelativePath", "Functions/User/SIK_UserSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGetTicketForWebApiResponseCallback_MetaData[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || User" },
		{ "ModuleRelativePath", "Functions/User/SIK_UserSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnIPCFailureCallback_MetaData[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || User" },
		{ "ModuleRelativePath", "Functions/User/SIK_UserSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLicensesUpdatedCallback_MetaData[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || User" },
		{ "ModuleRelativePath", "Functions/User/SIK_UserSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMicroTxnAuthorizationResponseCallback_MetaData[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || User" },
		{ "ModuleRelativePath", "Functions/User/SIK_UserSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSteamServerConnectFailureCallback_MetaData[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || User" },
		{ "ModuleRelativePath", "Functions/User/SIK_UserSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSteamServersConnectedCallback_MetaData[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || User" },
		{ "ModuleRelativePath", "Functions/User/SIK_UserSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSteamServersDisconnectedCallback_MetaData[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || User" },
		{ "ModuleRelativePath", "Functions/User/SIK_UserSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnStoreAuthURLResponseCallback_MetaData[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || User" },
		{ "ModuleRelativePath", "Functions/User/SIK_UserSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnValidateAuthTicketResponseCallback_MetaData[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || User" },
		{ "ModuleRelativePath", "Functions/User/SIK_UserSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_UserSubsystem constinit property declarations ***********************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnClientGameServerDenyCallback;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDurationControlCallback;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEncryptedAppTicketResponseCallback;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGameWebCallbackCallback;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGetAuthSessionTicketResponseCallback;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGetTicketForWebApiResponseCallback;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnIPCFailureCallback;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLicensesUpdatedCallback;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMicroTxnAuthorizationResponseCallback;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSteamServerConnectFailureCallback;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSteamServersConnectedCallback;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSteamServersDisconnectedCallback;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStoreAuthURLResponseCallback;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnValidateAuthTicketResponseCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USIK_UserSubsystem constinit property declarations *************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_UserSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_UserSubsystem_Statics

// ********** Begin Class USIK_UserSubsystem Property Definitions **********************************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_UserSubsystem_Statics::NewProp_OnClientGameServerDenyCallback = { "OnClientGameServerDenyCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_UserSubsystem, OnClientGameServerDenyCallback), Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_ClientGameServerDenyDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnClientGameServerDenyCallback_MetaData), NewProp_OnClientGameServerDenyCallback_MetaData) }; // 1352551338
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_UserSubsystem_Statics::NewProp_OnDurationControlCallback = { "OnDurationControlCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_UserSubsystem, OnDurationControlCallback), Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_DurationControlDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDurationControlCallback_MetaData), NewProp_OnDurationControlCallback_MetaData) }; // 1607727489
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_UserSubsystem_Statics::NewProp_OnEncryptedAppTicketResponseCallback = { "OnEncryptedAppTicketResponseCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_UserSubsystem, OnEncryptedAppTicketResponseCallback), Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_EncryptedAppTicketResponseDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnEncryptedAppTicketResponseCallback_MetaData), NewProp_OnEncryptedAppTicketResponseCallback_MetaData) }; // 3901943267
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_UserSubsystem_Statics::NewProp_OnGameWebCallbackCallback = { "OnGameWebCallbackCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_UserSubsystem, OnGameWebCallbackCallback), Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_GameWebCallbackDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGameWebCallbackCallback_MetaData), NewProp_OnGameWebCallbackCallback_MetaData) }; // 2205417007
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_UserSubsystem_Statics::NewProp_OnGetAuthSessionTicketResponseCallback = { "OnGetAuthSessionTicketResponseCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_UserSubsystem, OnGetAuthSessionTicketResponseCallback), Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_GetAuthSessionTicketResponseDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGetAuthSessionTicketResponseCallback_MetaData), NewProp_OnGetAuthSessionTicketResponseCallback_MetaData) }; // 2017451154
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_UserSubsystem_Statics::NewProp_OnGetTicketForWebApiResponseCallback = { "OnGetTicketForWebApiResponseCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_UserSubsystem, OnGetTicketForWebApiResponseCallback), Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_GetTicketForWebApiResponseDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGetTicketForWebApiResponseCallback_MetaData), NewProp_OnGetTicketForWebApiResponseCallback_MetaData) }; // 3239391413
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_UserSubsystem_Statics::NewProp_OnIPCFailureCallback = { "OnIPCFailureCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_UserSubsystem, OnIPCFailureCallback), Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_IPCFailureDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnIPCFailureCallback_MetaData), NewProp_OnIPCFailureCallback_MetaData) }; // 3509393252
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_UserSubsystem_Statics::NewProp_OnLicensesUpdatedCallback = { "OnLicensesUpdatedCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_UserSubsystem, OnLicensesUpdatedCallback), Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_LicensesUpdatedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLicensesUpdatedCallback_MetaData), NewProp_OnLicensesUpdatedCallback_MetaData) }; // 2434046902
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_UserSubsystem_Statics::NewProp_OnMicroTxnAuthorizationResponseCallback = { "OnMicroTxnAuthorizationResponseCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_UserSubsystem, OnMicroTxnAuthorizationResponseCallback), Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_MicroTxnAuthorizationResponseDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMicroTxnAuthorizationResponseCallback_MetaData), NewProp_OnMicroTxnAuthorizationResponseCallback_MetaData) }; // 587853783
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_UserSubsystem_Statics::NewProp_OnSteamServerConnectFailureCallback = { "OnSteamServerConnectFailureCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_UserSubsystem, OnSteamServerConnectFailureCallback), Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_SteamServerConnectFailureDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSteamServerConnectFailureCallback_MetaData), NewProp_OnSteamServerConnectFailureCallback_MetaData) }; // 3098943360
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_UserSubsystem_Statics::NewProp_OnSteamServersConnectedCallback = { "OnSteamServersConnectedCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_UserSubsystem, OnSteamServersConnectedCallback), Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_SteamServersConnectedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSteamServersConnectedCallback_MetaData), NewProp_OnSteamServersConnectedCallback_MetaData) }; // 2674348656
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_UserSubsystem_Statics::NewProp_OnSteamServersDisconnectedCallback = { "OnSteamServersDisconnectedCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_UserSubsystem, OnSteamServersDisconnectedCallback), Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_SteamServersDisconnectedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSteamServersDisconnectedCallback_MetaData), NewProp_OnSteamServersDisconnectedCallback_MetaData) }; // 160533502
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_UserSubsystem_Statics::NewProp_OnStoreAuthURLResponseCallback = { "OnStoreAuthURLResponseCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_UserSubsystem, OnStoreAuthURLResponseCallback), Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_StoreAuthURLResponseDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnStoreAuthURLResponseCallback_MetaData), NewProp_OnStoreAuthURLResponseCallback_MetaData) }; // 2426669747
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_UserSubsystem_Statics::NewProp_OnValidateAuthTicketResponseCallback = { "OnValidateAuthTicketResponseCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_UserSubsystem, OnValidateAuthTicketResponseCallback), Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_ValidateAuthTicketResponseDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnValidateAuthTicketResponseCallback_MetaData), NewProp_OnValidateAuthTicketResponseCallback_MetaData) }; // 3398126687
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USIK_UserSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_UserSubsystem_Statics::NewProp_OnClientGameServerDenyCallback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_UserSubsystem_Statics::NewProp_OnDurationControlCallback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_UserSubsystem_Statics::NewProp_OnEncryptedAppTicketResponseCallback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_UserSubsystem_Statics::NewProp_OnGameWebCallbackCallback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_UserSubsystem_Statics::NewProp_OnGetAuthSessionTicketResponseCallback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_UserSubsystem_Statics::NewProp_OnGetTicketForWebApiResponseCallback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_UserSubsystem_Statics::NewProp_OnIPCFailureCallback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_UserSubsystem_Statics::NewProp_OnLicensesUpdatedCallback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_UserSubsystem_Statics::NewProp_OnMicroTxnAuthorizationResponseCallback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_UserSubsystem_Statics::NewProp_OnSteamServerConnectFailureCallback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_UserSubsystem_Statics::NewProp_OnSteamServersConnectedCallback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_UserSubsystem_Statics::NewProp_OnSteamServersDisconnectedCallback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_UserSubsystem_Statics::NewProp_OnStoreAuthURLResponseCallback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_UserSubsystem_Statics::NewProp_OnValidateAuthTicketResponseCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_UserSubsystem_Statics::PropPointers) < 2048);
// ********** End Class USIK_UserSubsystem Property Definitions ************************************
UObject* (*const Z_Construct_UClass_USIK_UserSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_UserSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_UserSubsystem_Statics::ClassParams = {
	&USIK_UserSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USIK_UserSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USIK_UserSubsystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_UserSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_UserSubsystem_Statics::Class_MetaDataParams)
};
void USIK_UserSubsystem::StaticRegisterNativesUSIK_UserSubsystem()
{
}
UClass* Z_Construct_UClass_USIK_UserSubsystem()
{
	if (!Z_Registration_Info_UClass_USIK_UserSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_UserSubsystem.OuterSingleton, Z_Construct_UClass_USIK_UserSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_UserSubsystem.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_UserSubsystem);
// ********** End Class USIK_UserSubsystem *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_User_SIK_UserSubsystem_h__Script_SteamIntegrationKit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_UserSubsystem, USIK_UserSubsystem::StaticClass, TEXT("USIK_UserSubsystem"), &Z_Registration_Info_UClass_USIK_UserSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_UserSubsystem), 139577085U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_User_SIK_UserSubsystem_h__Script_SteamIntegrationKit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_User_SIK_UserSubsystem_h__Script_SteamIntegrationKit_3642276166{
	TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_User_SIK_UserSubsystem_h__Script_SteamIntegrationKit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_User_SIK_UserSubsystem_h__Script_SteamIntegrationKit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
