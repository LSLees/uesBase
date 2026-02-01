// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/GameServer/SIK_GameServerLibrary.h"
#include "SIK_SharedFile.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_GameServerLibrary() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_GameServerLibrary();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_GameServerLibrary_NoRegister();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_BeginAuthSessionResult();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_UserHasLicenseForAppResult();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_AuthTicket();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_SteamId();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_SteamIPAddress();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ESIK_UserHasLicenseForAppResult *******************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESIK_UserHasLicenseForAppResult;
static UEnum* ESIK_UserHasLicenseForAppResult_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESIK_UserHasLicenseForAppResult.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESIK_UserHasLicenseForAppResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamIntegrationKit_ESIK_UserHasLicenseForAppResult, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("ESIK_UserHasLicenseForAppResult"));
	}
	return Z_Registration_Info_UEnum_ESIK_UserHasLicenseForAppResult.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<ESIK_UserHasLicenseForAppResult>()
{
	return ESIK_UserHasLicenseForAppResult_StaticEnum();
}
struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_UserHasLicenseForAppResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Functions/GameServer/SIK_GameServerLibrary.h" },
		{ "UserHasLicenseResultDoesNotHaveLicense.DisplayName", "Does Not Have License" },
		{ "UserHasLicenseResultDoesNotHaveLicense.Name", "UserHasLicenseResultDoesNotHaveLicense" },
		{ "UserHasLicenseResultHasLicense.DisplayName", "Has License" },
		{ "UserHasLicenseResultHasLicense.Name", "UserHasLicenseResultHasLicense" },
		{ "UserHasLicenseResultNoAuth.DisplayName", "No Auth" },
		{ "UserHasLicenseResultNoAuth.Name", "UserHasLicenseResultNoAuth" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "UserHasLicenseResultHasLicense", (int64)UserHasLicenseResultHasLicense },
		{ "UserHasLicenseResultDoesNotHaveLicense", (int64)UserHasLicenseResultDoesNotHaveLicense },
		{ "UserHasLicenseResultNoAuth", (int64)UserHasLicenseResultNoAuth },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_UserHasLicenseForAppResult_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamIntegrationKit_ESIK_UserHasLicenseForAppResult_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	"ESIK_UserHasLicenseForAppResult",
	"ESIK_UserHasLicenseForAppResult",
	Z_Construct_UEnum_SteamIntegrationKit_ESIK_UserHasLicenseForAppResult_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_UserHasLicenseForAppResult_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_UserHasLicenseForAppResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamIntegrationKit_ESIK_UserHasLicenseForAppResult_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_UserHasLicenseForAppResult()
{
	if (!Z_Registration_Info_UEnum_ESIK_UserHasLicenseForAppResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESIK_UserHasLicenseForAppResult.InnerSingleton, Z_Construct_UEnum_SteamIntegrationKit_ESIK_UserHasLicenseForAppResult_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESIK_UserHasLicenseForAppResult.InnerSingleton;
}
// ********** End Enum ESIK_UserHasLicenseForAppResult *********************************************

// ********** Begin Class USIK_GameServerLibrary Function BeginAuthSession *************************
struct Z_Construct_UFunction_USIK_GameServerLibrary_BeginAuthSession_Statics
{
	struct SIK_GameServerLibrary_eventBeginAuthSession_Parms
	{
		TArray<uint8> Token;
		FSIK_SteamId SteamId;
		TEnumAsByte<ESIK_BeginAuthSessionResult> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Game Server" },
		{ "DisplayName", "Begin Steam Auth Session" },
		{ "Keywords", "BeginAuthSession" },
		{ "ModuleRelativePath", "Functions/GameServer/SIK_GameServerLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Token_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function BeginAuthSession constinit property declarations **********************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Token_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Token;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BeginAuthSession constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BeginAuthSession Property Definitions *********************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_GameServerLibrary_BeginAuthSession_Statics::NewProp_Token_Inner = { "Token", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_GameServerLibrary_BeginAuthSession_Statics::NewProp_Token = { "Token", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GameServerLibrary_eventBeginAuthSession_Parms, Token), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Token_MetaData), NewProp_Token_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_GameServerLibrary_BeginAuthSession_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GameServerLibrary_eventBeginAuthSession_Parms, SteamId), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_GameServerLibrary_BeginAuthSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GameServerLibrary_eventBeginAuthSession_Parms, ReturnValue), Z_Construct_UEnum_SteamIntegrationKit_ESIK_BeginAuthSessionResult, METADATA_PARAMS(0, nullptr) }; // 2172916366
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GameServerLibrary_BeginAuthSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GameServerLibrary_BeginAuthSession_Statics::NewProp_Token_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GameServerLibrary_BeginAuthSession_Statics::NewProp_Token,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GameServerLibrary_BeginAuthSession_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GameServerLibrary_BeginAuthSession_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerLibrary_BeginAuthSession_Statics::PropPointers) < 2048);
// ********** End Function BeginAuthSession Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GameServerLibrary_BeginAuthSession_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_GameServerLibrary, nullptr, "BeginAuthSession", 	Z_Construct_UFunction_USIK_GameServerLibrary_BeginAuthSession_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerLibrary_BeginAuthSession_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_GameServerLibrary_BeginAuthSession_Statics::SIK_GameServerLibrary_eventBeginAuthSession_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerLibrary_BeginAuthSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GameServerLibrary_BeginAuthSession_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_GameServerLibrary_BeginAuthSession_Statics::SIK_GameServerLibrary_eventBeginAuthSession_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GameServerLibrary_BeginAuthSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GameServerLibrary_BeginAuthSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GameServerLibrary::execBeginAuthSession)
{
	P_GET_TARRAY_REF(uint8,Z_Param_Out_Token);
	P_GET_STRUCT(FSIK_SteamId,Z_Param_SteamId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<ESIK_BeginAuthSessionResult>*)Z_Param__Result=USIK_GameServerLibrary::BeginAuthSession(Z_Param_Out_Token,Z_Param_SteamId);
	P_NATIVE_END;
}
// ********** End Class USIK_GameServerLibrary Function BeginAuthSession ***************************

// ********** Begin Class USIK_GameServerLibrary Function CancelAuthTicket *************************
struct Z_Construct_UFunction_USIK_GameServerLibrary_CancelAuthTicket_Statics
{
	struct SIK_GameServerLibrary_eventCancelAuthTicket_Parms
	{
		FSIK_AuthTicket AuthTicket;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Game Server" },
		{ "Comment", "/*\n\x09""Cancels an auth ticket for a user.\n\x09@param SteamId - The Steam ID of the user.\n\x09*/" },
		{ "DisplayName", "Cancel Steam Auth Ticket" },
		{ "Keywords", "CancelAuthTicket" },
		{ "ModuleRelativePath", "Functions/GameServer/SIK_GameServerLibrary.h" },
		{ "ToolTip", "Cancels an auth ticket for a user.\n@param SteamId - The Steam ID of the user." },
	};
#endif // WITH_METADATA

// ********** Begin Function CancelAuthTicket constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_AuthTicket;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CancelAuthTicket constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CancelAuthTicket Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_GameServerLibrary_CancelAuthTicket_Statics::NewProp_AuthTicket = { "AuthTicket", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GameServerLibrary_eventCancelAuthTicket_Parms, AuthTicket), Z_Construct_UScriptStruct_FSIK_AuthTicket, METADATA_PARAMS(0, nullptr) }; // 642335022
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GameServerLibrary_CancelAuthTicket_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GameServerLibrary_CancelAuthTicket_Statics::NewProp_AuthTicket,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerLibrary_CancelAuthTicket_Statics::PropPointers) < 2048);
// ********** End Function CancelAuthTicket Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GameServerLibrary_CancelAuthTicket_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_GameServerLibrary, nullptr, "CancelAuthTicket", 	Z_Construct_UFunction_USIK_GameServerLibrary_CancelAuthTicket_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerLibrary_CancelAuthTicket_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_GameServerLibrary_CancelAuthTicket_Statics::SIK_GameServerLibrary_eventCancelAuthTicket_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerLibrary_CancelAuthTicket_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GameServerLibrary_CancelAuthTicket_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_GameServerLibrary_CancelAuthTicket_Statics::SIK_GameServerLibrary_eventCancelAuthTicket_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GameServerLibrary_CancelAuthTicket()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GameServerLibrary_CancelAuthTicket_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GameServerLibrary::execCancelAuthTicket)
{
	P_GET_STRUCT(FSIK_AuthTicket,Z_Param_AuthTicket);
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_GameServerLibrary::CancelAuthTicket(Z_Param_AuthTicket);
	P_NATIVE_END;
}
// ********** End Class USIK_GameServerLibrary Function CancelAuthTicket ***************************

// ********** Begin Class USIK_GameServerLibrary Function ClearAllKeyValues ************************
struct Z_Construct_UFunction_USIK_GameServerLibrary_ClearAllKeyValues_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Game Server" },
		{ "Comment", "/*\n\x09""Clears all key-value pairs for the game server.\n\x09*/" },
		{ "DisplayName", "Clear All Key Values" },
		{ "Keywords", "ClearAllKeyValues" },
		{ "ModuleRelativePath", "Functions/GameServer/SIK_GameServerLibrary.h" },
		{ "ToolTip", "Clears all key-value pairs for the game server." },
	};
#endif // WITH_METADATA

// ********** Begin Function ClearAllKeyValues constinit property declarations *********************
// ********** End Function ClearAllKeyValues constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GameServerLibrary_ClearAllKeyValues_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_GameServerLibrary, nullptr, "ClearAllKeyValues", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerLibrary_ClearAllKeyValues_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GameServerLibrary_ClearAllKeyValues_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USIK_GameServerLibrary_ClearAllKeyValues()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GameServerLibrary_ClearAllKeyValues_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GameServerLibrary::execClearAllKeyValues)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_GameServerLibrary::ClearAllKeyValues();
	P_NATIVE_END;
}
// ********** End Class USIK_GameServerLibrary Function ClearAllKeyValues **************************

// ********** Begin Class USIK_GameServerLibrary Function CreateUnauthenticatedUserConnection ******
struct Z_Construct_UFunction_USIK_GameServerLibrary_CreateUnauthenticatedUserConnection_Statics
{
	struct SIK_GameServerLibrary_eventCreateUnauthenticatedUserConnection_Parms
	{
		FSIK_SteamId ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Game Server" },
		{ "Comment", "/*\n\x09""Creates an unauthenticated user connection.\n\x09@return - The Steam ID of the unauthenticated user.\n\x09*/" },
		{ "DisplayName", "Create Unauthenticated User Connection" },
		{ "Keywords", "CreateUnauthenticatedUserConnection" },
		{ "ModuleRelativePath", "Functions/GameServer/SIK_GameServerLibrary.h" },
		{ "ToolTip", "Creates an unauthenticated user connection.\n@return - The Steam ID of the unauthenticated user." },
	};
#endif // WITH_METADATA

// ********** Begin Function CreateUnauthenticatedUserConnection constinit property declarations ***
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CreateUnauthenticatedUserConnection constinit property declarations *****
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CreateUnauthenticatedUserConnection Property Definitions **************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_GameServerLibrary_CreateUnauthenticatedUserConnection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GameServerLibrary_eventCreateUnauthenticatedUserConnection_Parms, ReturnValue), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GameServerLibrary_CreateUnauthenticatedUserConnection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GameServerLibrary_CreateUnauthenticatedUserConnection_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerLibrary_CreateUnauthenticatedUserConnection_Statics::PropPointers) < 2048);
// ********** End Function CreateUnauthenticatedUserConnection Property Definitions ****************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GameServerLibrary_CreateUnauthenticatedUserConnection_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_GameServerLibrary, nullptr, "CreateUnauthenticatedUserConnection", 	Z_Construct_UFunction_USIK_GameServerLibrary_CreateUnauthenticatedUserConnection_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerLibrary_CreateUnauthenticatedUserConnection_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_GameServerLibrary_CreateUnauthenticatedUserConnection_Statics::SIK_GameServerLibrary_eventCreateUnauthenticatedUserConnection_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerLibrary_CreateUnauthenticatedUserConnection_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GameServerLibrary_CreateUnauthenticatedUserConnection_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_GameServerLibrary_CreateUnauthenticatedUserConnection_Statics::SIK_GameServerLibrary_eventCreateUnauthenticatedUserConnection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GameServerLibrary_CreateUnauthenticatedUserConnection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GameServerLibrary_CreateUnauthenticatedUserConnection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GameServerLibrary::execCreateUnauthenticatedUserConnection)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSIK_SteamId*)Z_Param__Result=USIK_GameServerLibrary::CreateUnauthenticatedUserConnection();
	P_NATIVE_END;
}
// ********** End Class USIK_GameServerLibrary Function CreateUnauthenticatedUserConnection ********

// ********** Begin Class USIK_GameServerLibrary Function EndAuthSession ***************************
struct Z_Construct_UFunction_USIK_GameServerLibrary_EndAuthSession_Statics
{
	struct SIK_GameServerLibrary_eventEndAuthSession_Parms
	{
		FSIK_SteamId SteamId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Game Server" },
		{ "Comment", "/*\n\x09""Ends an auth session for a user.\n\x09@param SteamId - The Steam ID of the user.\n\x09*/" },
		{ "DisplayName", "End Auth Session" },
		{ "Keywords", "EndAuthSession" },
		{ "ModuleRelativePath", "Functions/GameServer/SIK_GameServerLibrary.h" },
		{ "ToolTip", "Ends an auth session for a user.\n@param SteamId - The Steam ID of the user." },
	};
#endif // WITH_METADATA

// ********** Begin Function EndAuthSession constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EndAuthSession constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EndAuthSession Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_GameServerLibrary_EndAuthSession_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GameServerLibrary_eventEndAuthSession_Parms, SteamId), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GameServerLibrary_EndAuthSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GameServerLibrary_EndAuthSession_Statics::NewProp_SteamId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerLibrary_EndAuthSession_Statics::PropPointers) < 2048);
// ********** End Function EndAuthSession Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GameServerLibrary_EndAuthSession_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_GameServerLibrary, nullptr, "EndAuthSession", 	Z_Construct_UFunction_USIK_GameServerLibrary_EndAuthSession_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerLibrary_EndAuthSession_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_GameServerLibrary_EndAuthSession_Statics::SIK_GameServerLibrary_eventEndAuthSession_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerLibrary_EndAuthSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GameServerLibrary_EndAuthSession_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_GameServerLibrary_EndAuthSession_Statics::SIK_GameServerLibrary_eventEndAuthSession_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GameServerLibrary_EndAuthSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GameServerLibrary_EndAuthSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GameServerLibrary::execEndAuthSession)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_SteamId);
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_GameServerLibrary::EndAuthSession(Z_Param_SteamId);
	P_NATIVE_END;
}
// ********** End Class USIK_GameServerLibrary Function EndAuthSession *****************************

// ********** Begin Class USIK_GameServerLibrary Function GetAuthSessionTicket *********************
struct Z_Construct_UFunction_USIK_GameServerLibrary_GetAuthSessionTicket_Statics
{
	struct SIK_GameServerLibrary_eventGetAuthSessionTicket_Parms
	{
		TArray<uint8> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Game Server" },
		{ "Comment", "/*\n\x09Gets an auth session ticket for the game server.\n\x09@return - The auth session ticket as an array of bytes.\n\x09*/" },
		{ "DisplayName", "Get Auth Session Ticket" },
		{ "Keywords", "GetAuthSessionTicket" },
		{ "ModuleRelativePath", "Functions/GameServer/SIK_GameServerLibrary.h" },
		{ "ToolTip", "Gets an auth session ticket for the game server.\n@return - The auth session ticket as an array of bytes." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAuthSessionTicket constinit property declarations ******************
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAuthSessionTicket constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAuthSessionTicket Property Definitions *****************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_GameServerLibrary_GetAuthSessionTicket_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_GameServerLibrary_GetAuthSessionTicket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GameServerLibrary_eventGetAuthSessionTicket_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GameServerLibrary_GetAuthSessionTicket_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GameServerLibrary_GetAuthSessionTicket_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GameServerLibrary_GetAuthSessionTicket_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerLibrary_GetAuthSessionTicket_Statics::PropPointers) < 2048);
// ********** End Function GetAuthSessionTicket Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GameServerLibrary_GetAuthSessionTicket_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_GameServerLibrary, nullptr, "GetAuthSessionTicket", 	Z_Construct_UFunction_USIK_GameServerLibrary_GetAuthSessionTicket_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerLibrary_GetAuthSessionTicket_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_GameServerLibrary_GetAuthSessionTicket_Statics::SIK_GameServerLibrary_eventGetAuthSessionTicket_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerLibrary_GetAuthSessionTicket_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GameServerLibrary_GetAuthSessionTicket_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_GameServerLibrary_GetAuthSessionTicket_Statics::SIK_GameServerLibrary_eventGetAuthSessionTicket_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GameServerLibrary_GetAuthSessionTicket()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GameServerLibrary_GetAuthSessionTicket_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GameServerLibrary::execGetAuthSessionTicket)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<uint8>*)Z_Param__Result=USIK_GameServerLibrary::GetAuthSessionTicket();
	P_NATIVE_END;
}
// ********** End Class USIK_GameServerLibrary Function GetAuthSessionTicket ***********************

// ********** Begin Class USIK_GameServerLibrary Function GetPublicIP ******************************
struct Z_Construct_UFunction_USIK_GameServerLibrary_GetPublicIP_Statics
{
	struct SIK_GameServerLibrary_eventGetPublicIP_Parms
	{
		FSIK_SteamIPAddress ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Game Server" },
		{ "Comment", "/*\n\x09Gets the public IP address of the game server.\n\x09@return - The public IP address.\n\x09*/" },
		{ "DisplayName", "Get Public IP" },
		{ "Keywords", "GetPublicIP" },
		{ "ModuleRelativePath", "Functions/GameServer/SIK_GameServerLibrary.h" },
		{ "ToolTip", "Gets the public IP address of the game server.\n@return - The public IP address." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetPublicIP constinit property declarations ***************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPublicIP constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPublicIP Property Definitions **************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_GameServerLibrary_GetPublicIP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GameServerLibrary_eventGetPublicIP_Parms, ReturnValue), Z_Construct_UScriptStruct_FSIK_SteamIPAddress, METADATA_PARAMS(0, nullptr) }; // 791396157
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GameServerLibrary_GetPublicIP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GameServerLibrary_GetPublicIP_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerLibrary_GetPublicIP_Statics::PropPointers) < 2048);
// ********** End Function GetPublicIP Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GameServerLibrary_GetPublicIP_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_GameServerLibrary, nullptr, "GetPublicIP", 	Z_Construct_UFunction_USIK_GameServerLibrary_GetPublicIP_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerLibrary_GetPublicIP_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_GameServerLibrary_GetPublicIP_Statics::SIK_GameServerLibrary_eventGetPublicIP_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerLibrary_GetPublicIP_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GameServerLibrary_GetPublicIP_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_GameServerLibrary_GetPublicIP_Statics::SIK_GameServerLibrary_eventGetPublicIP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GameServerLibrary_GetPublicIP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GameServerLibrary_GetPublicIP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GameServerLibrary::execGetPublicIP)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSIK_SteamIPAddress*)Z_Param__Result=USIK_GameServerLibrary::GetPublicIP();
	P_NATIVE_END;
}
// ********** End Class USIK_GameServerLibrary Function GetPublicIP ********************************

// ********** Begin Class USIK_GameServerLibrary Function GetSteamID *******************************
struct Z_Construct_UFunction_USIK_GameServerLibrary_GetSteamID_Statics
{
	struct SIK_GameServerLibrary_eventGetSteamID_Parms
	{
		FSIK_SteamId ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Game Server" },
		{ "Comment", "/*\n\x09Gets the Steam ID of the game server.\n\x09@return - The Steam ID of the server.\n\x09*/" },
		{ "DisplayName", "Get Server Steam ID" },
		{ "Keywords", "GetSteamID" },
		{ "ModuleRelativePath", "Functions/GameServer/SIK_GameServerLibrary.h" },
		{ "ToolTip", "Gets the Steam ID of the game server.\n@return - The Steam ID of the server." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetSteamID constinit property declarations ****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSteamID constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSteamID Property Definitions ***************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_GameServerLibrary_GetSteamID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GameServerLibrary_eventGetSteamID_Parms, ReturnValue), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GameServerLibrary_GetSteamID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GameServerLibrary_GetSteamID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerLibrary_GetSteamID_Statics::PropPointers) < 2048);
// ********** End Function GetSteamID Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GameServerLibrary_GetSteamID_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_GameServerLibrary, nullptr, "GetSteamID", 	Z_Construct_UFunction_USIK_GameServerLibrary_GetSteamID_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerLibrary_GetSteamID_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_GameServerLibrary_GetSteamID_Statics::SIK_GameServerLibrary_eventGetSteamID_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerLibrary_GetSteamID_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GameServerLibrary_GetSteamID_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_GameServerLibrary_GetSteamID_Statics::SIK_GameServerLibrary_eventGetSteamID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GameServerLibrary_GetSteamID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GameServerLibrary_GetSteamID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GameServerLibrary::execGetSteamID)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSIK_SteamId*)Z_Param__Result=USIK_GameServerLibrary::GetSteamID();
	P_NATIVE_END;
}
// ********** End Class USIK_GameServerLibrary Function GetSteamID *********************************

// ********** Begin Class USIK_GameServerLibrary Function LoggedOn *********************************
struct Z_Construct_UFunction_USIK_GameServerLibrary_LoggedOn_Statics
{
	struct SIK_GameServerLibrary_eventLoggedOn_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Game Server" },
		{ "Comment", "/*\n\x09""Checks if the game server is currently logged on to Steam.\n\x09@return - true if logged on, false otherwise.\n\x09*/" },
		{ "DisplayName", "Logged On" },
		{ "Keywords", "BLoggedOn" },
		{ "ModuleRelativePath", "Functions/GameServer/SIK_GameServerLibrary.h" },
		{ "ToolTip", "Checks if the game server is currently logged on to Steam.\n@return - true if logged on, false otherwise." },
	};
#endif // WITH_METADATA

// ********** Begin Function LoggedOn constinit property declarations ******************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function LoggedOn constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function LoggedOn Property Definitions *****************************************
void Z_Construct_UFunction_USIK_GameServerLibrary_LoggedOn_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_GameServerLibrary_eventLoggedOn_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_GameServerLibrary_LoggedOn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_GameServerLibrary_eventLoggedOn_Parms), &Z_Construct_UFunction_USIK_GameServerLibrary_LoggedOn_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GameServerLibrary_LoggedOn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GameServerLibrary_LoggedOn_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerLibrary_LoggedOn_Statics::PropPointers) < 2048);
// ********** End Function LoggedOn Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GameServerLibrary_LoggedOn_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_GameServerLibrary, nullptr, "LoggedOn", 	Z_Construct_UFunction_USIK_GameServerLibrary_LoggedOn_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerLibrary_LoggedOn_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_GameServerLibrary_LoggedOn_Statics::SIK_GameServerLibrary_eventLoggedOn_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerLibrary_LoggedOn_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GameServerLibrary_LoggedOn_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_GameServerLibrary_LoggedOn_Statics::SIK_GameServerLibrary_eventLoggedOn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GameServerLibrary_LoggedOn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GameServerLibrary_LoggedOn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GameServerLibrary::execLoggedOn)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_GameServerLibrary::LoggedOn();
	P_NATIVE_END;
}
// ********** End Class USIK_GameServerLibrary Function LoggedOn ***********************************

// ********** Begin Class USIK_GameServerLibrary Function LogOff ***********************************
struct Z_Construct_UFunction_USIK_GameServerLibrary_LogOff_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Game Server" },
		{ "Comment", "/*\n\x09Logs the game server off from Steam.\n\x09*/" },
		{ "DisplayName", "Log Server Off" },
		{ "Keywords", "LogOff" },
		{ "ModuleRelativePath", "Functions/GameServer/SIK_GameServerLibrary.h" },
		{ "ToolTip", "Logs the game server off from Steam." },
	};
#endif // WITH_METADATA

// ********** Begin Function LogOff constinit property declarations ********************************
// ********** End Function LogOff constinit property declarations **********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GameServerLibrary_LogOff_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_GameServerLibrary, nullptr, "LogOff", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerLibrary_LogOff_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GameServerLibrary_LogOff_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USIK_GameServerLibrary_LogOff()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GameServerLibrary_LogOff_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GameServerLibrary::execLogOff)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_GameServerLibrary::LogOff();
	P_NATIVE_END;
}
// ********** End Class USIK_GameServerLibrary Function LogOff *************************************

// ********** Begin Class USIK_GameServerLibrary Function LogOn ************************************
struct Z_Construct_UFunction_USIK_GameServerLibrary_LogOn_Statics
{
	struct SIK_GameServerLibrary_eventLogOn_Parms
	{
		FString Token;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Game Server" },
		{ "Comment", "/*\n\x09Logs the game server on to Steam.\n\x09@param Token - The login token for the server.\n\x09*/" },
		{ "DisplayName", "Log Server On" },
		{ "Keywords", "LogOn" },
		{ "ModuleRelativePath", "Functions/GameServer/SIK_GameServerLibrary.h" },
		{ "ToolTip", "Logs the game server on to Steam.\n@param Token - The login token for the server." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Token_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function LogOn constinit property declarations *********************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Token;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function LogOn constinit property declarations ***********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function LogOn Property Definitions ********************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_GameServerLibrary_LogOn_Statics::NewProp_Token = { "Token", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GameServerLibrary_eventLogOn_Parms, Token), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Token_MetaData), NewProp_Token_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GameServerLibrary_LogOn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GameServerLibrary_LogOn_Statics::NewProp_Token,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerLibrary_LogOn_Statics::PropPointers) < 2048);
// ********** End Function LogOn Property Definitions **********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GameServerLibrary_LogOn_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_GameServerLibrary, nullptr, "LogOn", 	Z_Construct_UFunction_USIK_GameServerLibrary_LogOn_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerLibrary_LogOn_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_GameServerLibrary_LogOn_Statics::SIK_GameServerLibrary_eventLogOn_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerLibrary_LogOn_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GameServerLibrary_LogOn_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_GameServerLibrary_LogOn_Statics::SIK_GameServerLibrary_eventLogOn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GameServerLibrary_LogOn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GameServerLibrary_LogOn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GameServerLibrary::execLogOn)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Token);
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_GameServerLibrary::LogOn(Z_Param_Token);
	P_NATIVE_END;
}
// ********** End Class USIK_GameServerLibrary Function LogOn **************************************

// ********** Begin Class USIK_GameServerLibrary Function LogOnAnonymous ***************************
struct Z_Construct_UFunction_USIK_GameServerLibrary_LogOnAnonymous_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Game Server" },
		{ "Comment", "/*\n\x09Logs the game server on to Steam anonymously.\n\x09*/" },
		{ "DisplayName", "Log Server On Anonymous" },
		{ "Keywords", "LogOnAnonymous" },
		{ "ModuleRelativePath", "Functions/GameServer/SIK_GameServerLibrary.h" },
		{ "ToolTip", "Logs the game server on to Steam anonymously." },
	};
#endif // WITH_METADATA

// ********** Begin Function LogOnAnonymous constinit property declarations ************************
// ********** End Function LogOnAnonymous constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GameServerLibrary_LogOnAnonymous_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_GameServerLibrary, nullptr, "LogOnAnonymous", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerLibrary_LogOnAnonymous_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GameServerLibrary_LogOnAnonymous_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USIK_GameServerLibrary_LogOnAnonymous()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GameServerLibrary_LogOnAnonymous_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GameServerLibrary::execLogOnAnonymous)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_GameServerLibrary::LogOnAnonymous();
	P_NATIVE_END;
}
// ********** End Class USIK_GameServerLibrary Function LogOnAnonymous *****************************

// ********** Begin Class USIK_GameServerLibrary Function RequestUserGroupStatus *******************
struct Z_Construct_UFunction_USIK_GameServerLibrary_RequestUserGroupStatus_Statics
{
	struct SIK_GameServerLibrary_eventRequestUserGroupStatus_Parms
	{
		FSIK_SteamId SteamId;
		FSIK_SteamId GroupId;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Game Server" },
		{ "Comment", "/*\n\x09Requests the user group status for a user.\n\x09@param SteamId - The Steam ID of the user.\n\x09@param GroupId - The Steam ID of the group.\n\x09@return - true if the request was successful, false otherwise.\n\x09*/" },
		{ "DisplayName", "Request User Group Status" },
		{ "Keywords", "RequestUserGroupStatus" },
		{ "ModuleRelativePath", "Functions/GameServer/SIK_GameServerLibrary.h" },
		{ "ToolTip", "Requests the user group status for a user.\n@param SteamId - The Steam ID of the user.\n@param GroupId - The Steam ID of the group.\n@return - true if the request was successful, false otherwise." },
	};
#endif // WITH_METADATA

// ********** Begin Function RequestUserGroupStatus constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GroupId;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RequestUserGroupStatus constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RequestUserGroupStatus Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_GameServerLibrary_RequestUserGroupStatus_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GameServerLibrary_eventRequestUserGroupStatus_Parms, SteamId), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_GameServerLibrary_RequestUserGroupStatus_Statics::NewProp_GroupId = { "GroupId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GameServerLibrary_eventRequestUserGroupStatus_Parms, GroupId), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
void Z_Construct_UFunction_USIK_GameServerLibrary_RequestUserGroupStatus_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_GameServerLibrary_eventRequestUserGroupStatus_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_GameServerLibrary_RequestUserGroupStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_GameServerLibrary_eventRequestUserGroupStatus_Parms), &Z_Construct_UFunction_USIK_GameServerLibrary_RequestUserGroupStatus_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GameServerLibrary_RequestUserGroupStatus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GameServerLibrary_RequestUserGroupStatus_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GameServerLibrary_RequestUserGroupStatus_Statics::NewProp_GroupId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GameServerLibrary_RequestUserGroupStatus_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerLibrary_RequestUserGroupStatus_Statics::PropPointers) < 2048);
// ********** End Function RequestUserGroupStatus Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GameServerLibrary_RequestUserGroupStatus_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_GameServerLibrary, nullptr, "RequestUserGroupStatus", 	Z_Construct_UFunction_USIK_GameServerLibrary_RequestUserGroupStatus_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerLibrary_RequestUserGroupStatus_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_GameServerLibrary_RequestUserGroupStatus_Statics::SIK_GameServerLibrary_eventRequestUserGroupStatus_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerLibrary_RequestUserGroupStatus_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GameServerLibrary_RequestUserGroupStatus_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_GameServerLibrary_RequestUserGroupStatus_Statics::SIK_GameServerLibrary_eventRequestUserGroupStatus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GameServerLibrary_RequestUserGroupStatus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GameServerLibrary_RequestUserGroupStatus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GameServerLibrary::execRequestUserGroupStatus)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_SteamId);
	P_GET_STRUCT(FSIK_SteamId,Z_Param_GroupId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_GameServerLibrary::RequestUserGroupStatus(Z_Param_SteamId,Z_Param_GroupId);
	P_NATIVE_END;
}
// ********** End Class USIK_GameServerLibrary Function RequestUserGroupStatus *********************

// ********** Begin Class USIK_GameServerLibrary Function Secure ***********************************
struct Z_Construct_UFunction_USIK_GameServerLibrary_Secure_Statics
{
	struct SIK_GameServerLibrary_eventSecure_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Game Server" },
		{ "Comment", "/*\n\x09""Checks if the game server is marked as secure.\n\x09@return - true if secure, false otherwise.\n\x09*/" },
		{ "DisplayName", "Secure" },
		{ "Keywords", "BSecure" },
		{ "ModuleRelativePath", "Functions/GameServer/SIK_GameServerLibrary.h" },
		{ "ToolTip", "Checks if the game server is marked as secure.\n@return - true if secure, false otherwise." },
	};
#endif // WITH_METADATA

// ********** Begin Function Secure constinit property declarations ********************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Secure constinit property declarations **********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Secure Property Definitions *******************************************
void Z_Construct_UFunction_USIK_GameServerLibrary_Secure_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_GameServerLibrary_eventSecure_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_GameServerLibrary_Secure_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_GameServerLibrary_eventSecure_Parms), &Z_Construct_UFunction_USIK_GameServerLibrary_Secure_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GameServerLibrary_Secure_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GameServerLibrary_Secure_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerLibrary_Secure_Statics::PropPointers) < 2048);
// ********** End Function Secure Property Definitions *********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GameServerLibrary_Secure_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_GameServerLibrary, nullptr, "Secure", 	Z_Construct_UFunction_USIK_GameServerLibrary_Secure_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerLibrary_Secure_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_GameServerLibrary_Secure_Statics::SIK_GameServerLibrary_eventSecure_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerLibrary_Secure_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GameServerLibrary_Secure_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_GameServerLibrary_Secure_Statics::SIK_GameServerLibrary_eventSecure_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GameServerLibrary_Secure()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GameServerLibrary_Secure_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GameServerLibrary::execSecure)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_GameServerLibrary::Secure();
	P_NATIVE_END;
}
// ********** End Class USIK_GameServerLibrary Function Secure *************************************

// ********** Begin Class USIK_GameServerLibrary Function SetBotPlayerCount ************************
struct Z_Construct_UFunction_USIK_GameServerLibrary_SetBotPlayerCount_Statics
{
	struct SIK_GameServerLibrary_eventSetBotPlayerCount_Parms
	{
		int32 BotPlayerCount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Game Server" },
		{ "Comment", "/*\n\x09Sets the bot player count for the game server.\n\x09@param BotPlayerCount - The number of bot players.\n\x09*/" },
		{ "DisplayName", "Set Bot Player Count" },
		{ "Keywords", "SetBotPlayerCount" },
		{ "ModuleRelativePath", "Functions/GameServer/SIK_GameServerLibrary.h" },
		{ "ToolTip", "Sets the bot player count for the game server.\n@param BotPlayerCount - The number of bot players." },
	};
#endif // WITH_METADATA

// ********** Begin Function SetBotPlayerCount constinit property declarations *********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_BotPlayerCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetBotPlayerCount constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetBotPlayerCount Property Definitions ********************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_GameServerLibrary_SetBotPlayerCount_Statics::NewProp_BotPlayerCount = { "BotPlayerCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GameServerLibrary_eventSetBotPlayerCount_Parms, BotPlayerCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GameServerLibrary_SetBotPlayerCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GameServerLibrary_SetBotPlayerCount_Statics::NewProp_BotPlayerCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerLibrary_SetBotPlayerCount_Statics::PropPointers) < 2048);
// ********** End Function SetBotPlayerCount Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GameServerLibrary_SetBotPlayerCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_GameServerLibrary, nullptr, "SetBotPlayerCount", 	Z_Construct_UFunction_USIK_GameServerLibrary_SetBotPlayerCount_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerLibrary_SetBotPlayerCount_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_GameServerLibrary_SetBotPlayerCount_Statics::SIK_GameServerLibrary_eventSetBotPlayerCount_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerLibrary_SetBotPlayerCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GameServerLibrary_SetBotPlayerCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_GameServerLibrary_SetBotPlayerCount_Statics::SIK_GameServerLibrary_eventSetBotPlayerCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GameServerLibrary_SetBotPlayerCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GameServerLibrary_SetBotPlayerCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GameServerLibrary::execSetBotPlayerCount)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_BotPlayerCount);
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_GameServerLibrary::SetBotPlayerCount(Z_Param_BotPlayerCount);
	P_NATIVE_END;
}
// ********** End Class USIK_GameServerLibrary Function SetBotPlayerCount **************************

// ********** Begin Class USIK_GameServerLibrary Function SetDedicatedServer ***********************
struct Z_Construct_UFunction_USIK_GameServerLibrary_SetDedicatedServer_Statics
{
	struct SIK_GameServerLibrary_eventSetDedicatedServer_Parms
	{
		bool bDedicated;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Game Server" },
		{ "Comment", "/*\n\x09Sets whether the game server is a dedicated server.\n\x09@param bDedicated - If true, the server is dedicated.\n\x09*/" },
		{ "DisplayName", "Set Dedicated Server" },
		{ "Keywords", "SetDedicatedServer" },
		{ "ModuleRelativePath", "Functions/GameServer/SIK_GameServerLibrary.h" },
		{ "ToolTip", "Sets whether the game server is a dedicated server.\n@param bDedicated - If true, the server is dedicated." },
	};
#endif // WITH_METADATA

// ********** Begin Function SetDedicatedServer constinit property declarations ********************
	static void NewProp_bDedicated_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDedicated;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetDedicatedServer constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetDedicatedServer Property Definitions *******************************
void Z_Construct_UFunction_USIK_GameServerLibrary_SetDedicatedServer_Statics::NewProp_bDedicated_SetBit(void* Obj)
{
	((SIK_GameServerLibrary_eventSetDedicatedServer_Parms*)Obj)->bDedicated = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_GameServerLibrary_SetDedicatedServer_Statics::NewProp_bDedicated = { "bDedicated", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_GameServerLibrary_eventSetDedicatedServer_Parms), &Z_Construct_UFunction_USIK_GameServerLibrary_SetDedicatedServer_Statics::NewProp_bDedicated_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GameServerLibrary_SetDedicatedServer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GameServerLibrary_SetDedicatedServer_Statics::NewProp_bDedicated,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerLibrary_SetDedicatedServer_Statics::PropPointers) < 2048);
// ********** End Function SetDedicatedServer Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GameServerLibrary_SetDedicatedServer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_GameServerLibrary, nullptr, "SetDedicatedServer", 	Z_Construct_UFunction_USIK_GameServerLibrary_SetDedicatedServer_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerLibrary_SetDedicatedServer_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_GameServerLibrary_SetDedicatedServer_Statics::SIK_GameServerLibrary_eventSetDedicatedServer_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerLibrary_SetDedicatedServer_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GameServerLibrary_SetDedicatedServer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_GameServerLibrary_SetDedicatedServer_Statics::SIK_GameServerLibrary_eventSetDedicatedServer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GameServerLibrary_SetDedicatedServer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GameServerLibrary_SetDedicatedServer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GameServerLibrary::execSetDedicatedServer)
{
	P_GET_UBOOL(Z_Param_bDedicated);
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_GameServerLibrary::SetDedicatedServer(Z_Param_bDedicated);
	P_NATIVE_END;
}
// ********** End Class USIK_GameServerLibrary Function SetDedicatedServer *************************

// ********** Begin Class USIK_GameServerLibrary Function SetGameData ******************************
struct Z_Construct_UFunction_USIK_GameServerLibrary_SetGameData_Statics
{
	struct SIK_GameServerLibrary_eventSetGameData_Parms
	{
		FString GameData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Game Server" },
		{ "Comment", "/*\n\x09Sets the game data for the game server.\n\x09@param GameData - The game data string.\n\x09*/" },
		{ "DisplayName", "Set Game Data" },
		{ "Keywords", "SetGameData" },
		{ "ModuleRelativePath", "Functions/GameServer/SIK_GameServerLibrary.h" },
		{ "ToolTip", "Sets the game data for the game server.\n@param GameData - The game data string." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetGameData constinit property declarations ***************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_GameData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetGameData constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetGameData Property Definitions **************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_GameServerLibrary_SetGameData_Statics::NewProp_GameData = { "GameData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GameServerLibrary_eventSetGameData_Parms, GameData), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameData_MetaData), NewProp_GameData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GameServerLibrary_SetGameData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GameServerLibrary_SetGameData_Statics::NewProp_GameData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerLibrary_SetGameData_Statics::PropPointers) < 2048);
// ********** End Function SetGameData Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GameServerLibrary_SetGameData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_GameServerLibrary, nullptr, "SetGameData", 	Z_Construct_UFunction_USIK_GameServerLibrary_SetGameData_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerLibrary_SetGameData_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_GameServerLibrary_SetGameData_Statics::SIK_GameServerLibrary_eventSetGameData_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerLibrary_SetGameData_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GameServerLibrary_SetGameData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_GameServerLibrary_SetGameData_Statics::SIK_GameServerLibrary_eventSetGameData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GameServerLibrary_SetGameData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GameServerLibrary_SetGameData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GameServerLibrary::execSetGameData)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_GameData);
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_GameServerLibrary::SetGameData(Z_Param_GameData);
	P_NATIVE_END;
}
// ********** End Class USIK_GameServerLibrary Function SetGameData ********************************

// ********** Begin Class USIK_GameServerLibrary Function SetGameDescription ***********************
struct Z_Construct_UFunction_USIK_GameServerLibrary_SetGameDescription_Statics
{
	struct SIK_GameServerLibrary_eventSetGameDescription_Parms
	{
		FString GameDescription;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Game Server" },
		{ "Comment", "/*\n\x09Sets the game description for the game server.\n\x09@param GameDescription - The game description string.\n\x09*/" },
		{ "DisplayName", "Set Game Description" },
		{ "Keywords", "SetGameDescription" },
		{ "ModuleRelativePath", "Functions/GameServer/SIK_GameServerLibrary.h" },
		{ "ToolTip", "Sets the game description for the game server.\n@param GameDescription - The game description string." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameDescription_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetGameDescription constinit property declarations ********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_GameDescription;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetGameDescription constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetGameDescription Property Definitions *******************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_GameServerLibrary_SetGameDescription_Statics::NewProp_GameDescription = { "GameDescription", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GameServerLibrary_eventSetGameDescription_Parms, GameDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameDescription_MetaData), NewProp_GameDescription_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GameServerLibrary_SetGameDescription_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GameServerLibrary_SetGameDescription_Statics::NewProp_GameDescription,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerLibrary_SetGameDescription_Statics::PropPointers) < 2048);
// ********** End Function SetGameDescription Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GameServerLibrary_SetGameDescription_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_GameServerLibrary, nullptr, "SetGameDescription", 	Z_Construct_UFunction_USIK_GameServerLibrary_SetGameDescription_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerLibrary_SetGameDescription_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_GameServerLibrary_SetGameDescription_Statics::SIK_GameServerLibrary_eventSetGameDescription_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerLibrary_SetGameDescription_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GameServerLibrary_SetGameDescription_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_GameServerLibrary_SetGameDescription_Statics::SIK_GameServerLibrary_eventSetGameDescription_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GameServerLibrary_SetGameDescription()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GameServerLibrary_SetGameDescription_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GameServerLibrary::execSetGameDescription)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_GameDescription);
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_GameServerLibrary::SetGameDescription(Z_Param_GameDescription);
	P_NATIVE_END;
}
// ********** End Class USIK_GameServerLibrary Function SetGameDescription *************************

// ********** Begin Class USIK_GameServerLibrary Function SetGameTags ******************************
struct Z_Construct_UFunction_USIK_GameServerLibrary_SetGameTags_Statics
{
	struct SIK_GameServerLibrary_eventSetGameTags_Parms
	{
		FString GameTags;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Game Server" },
		{ "Comment", "/*\n\x09Sets the game tags for the game server.\n\x09@param GameTags - The game tags string.\n\x09*/" },
		{ "DisplayName", "Set Game Tags" },
		{ "Keywords", "SetGameTags" },
		{ "ModuleRelativePath", "Functions/GameServer/SIK_GameServerLibrary.h" },
		{ "ToolTip", "Sets the game tags for the game server.\n@param GameTags - The game tags string." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetGameTags constinit property declarations ***************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_GameTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetGameTags constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetGameTags Property Definitions **************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_GameServerLibrary_SetGameTags_Statics::NewProp_GameTags = { "GameTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GameServerLibrary_eventSetGameTags_Parms, GameTags), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameTags_MetaData), NewProp_GameTags_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GameServerLibrary_SetGameTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GameServerLibrary_SetGameTags_Statics::NewProp_GameTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerLibrary_SetGameTags_Statics::PropPointers) < 2048);
// ********** End Function SetGameTags Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GameServerLibrary_SetGameTags_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_GameServerLibrary, nullptr, "SetGameTags", 	Z_Construct_UFunction_USIK_GameServerLibrary_SetGameTags_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerLibrary_SetGameTags_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_GameServerLibrary_SetGameTags_Statics::SIK_GameServerLibrary_eventSetGameTags_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerLibrary_SetGameTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GameServerLibrary_SetGameTags_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_GameServerLibrary_SetGameTags_Statics::SIK_GameServerLibrary_eventSetGameTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GameServerLibrary_SetGameTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GameServerLibrary_SetGameTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GameServerLibrary::execSetGameTags)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_GameTags);
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_GameServerLibrary::SetGameTags(Z_Param_GameTags);
	P_NATIVE_END;
}
// ********** End Class USIK_GameServerLibrary Function SetGameTags ********************************

// ********** Begin Class USIK_GameServerLibrary Function SetKeyValue ******************************
struct Z_Construct_UFunction_USIK_GameServerLibrary_SetKeyValue_Statics
{
	struct SIK_GameServerLibrary_eventSetKeyValue_Parms
	{
		FString Key;
		FString Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Game Server" },
		{ "Comment", "/*\n\x09Sets a key-value pair for the game server.\n\x09@param Key - The key string.\n\x09@param Value - The value string.\n\x09*/" },
		{ "DisplayName", "Set Key Value" },
		{ "Keywords", "SetKeyValue" },
		{ "ModuleRelativePath", "Functions/GameServer/SIK_GameServerLibrary.h" },
		{ "ToolTip", "Sets a key-value pair for the game server.\n@param Key - The key string.\n@param Value - The value string." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetKeyValue constinit property declarations ***************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetKeyValue constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetKeyValue Property Definitions **************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_GameServerLibrary_SetKeyValue_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GameServerLibrary_eventSetKeyValue_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_GameServerLibrary_SetKeyValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GameServerLibrary_eventSetKeyValue_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GameServerLibrary_SetKeyValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GameServerLibrary_SetKeyValue_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GameServerLibrary_SetKeyValue_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerLibrary_SetKeyValue_Statics::PropPointers) < 2048);
// ********** End Function SetKeyValue Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GameServerLibrary_SetKeyValue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_GameServerLibrary, nullptr, "SetKeyValue", 	Z_Construct_UFunction_USIK_GameServerLibrary_SetKeyValue_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerLibrary_SetKeyValue_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_GameServerLibrary_SetKeyValue_Statics::SIK_GameServerLibrary_eventSetKeyValue_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerLibrary_SetKeyValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GameServerLibrary_SetKeyValue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_GameServerLibrary_SetKeyValue_Statics::SIK_GameServerLibrary_eventSetKeyValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GameServerLibrary_SetKeyValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GameServerLibrary_SetKeyValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GameServerLibrary::execSetKeyValue)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_GameServerLibrary::SetKeyValue(Z_Param_Key,Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class USIK_GameServerLibrary Function SetKeyValue ********************************

// ********** Begin Class USIK_GameServerLibrary Function SetMapName *******************************
struct Z_Construct_UFunction_USIK_GameServerLibrary_SetMapName_Statics
{
	struct SIK_GameServerLibrary_eventSetMapName_Parms
	{
		FString MapName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Game Server" },
		{ "Comment", "/*\n\x09Sets the map name for the game server.\n\x09@param MapName - The map name string.\n\x09*/" },
		{ "DisplayName", "Set Map Name" },
		{ "Keywords", "SetMapName" },
		{ "ModuleRelativePath", "Functions/GameServer/SIK_GameServerLibrary.h" },
		{ "ToolTip", "Sets the map name for the game server.\n@param MapName - The map name string." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetMapName constinit property declarations ****************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_MapName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetMapName constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetMapName Property Definitions ***************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_GameServerLibrary_SetMapName_Statics::NewProp_MapName = { "MapName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GameServerLibrary_eventSetMapName_Parms, MapName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapName_MetaData), NewProp_MapName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GameServerLibrary_SetMapName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GameServerLibrary_SetMapName_Statics::NewProp_MapName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerLibrary_SetMapName_Statics::PropPointers) < 2048);
// ********** End Function SetMapName Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GameServerLibrary_SetMapName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_GameServerLibrary, nullptr, "SetMapName", 	Z_Construct_UFunction_USIK_GameServerLibrary_SetMapName_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerLibrary_SetMapName_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_GameServerLibrary_SetMapName_Statics::SIK_GameServerLibrary_eventSetMapName_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerLibrary_SetMapName_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GameServerLibrary_SetMapName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_GameServerLibrary_SetMapName_Statics::SIK_GameServerLibrary_eventSetMapName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GameServerLibrary_SetMapName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GameServerLibrary_SetMapName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GameServerLibrary::execSetMapName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_MapName);
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_GameServerLibrary::SetMapName(Z_Param_MapName);
	P_NATIVE_END;
}
// ********** End Class USIK_GameServerLibrary Function SetMapName *********************************

// ********** Begin Class USIK_GameServerLibrary Function SetMaxPlayerCount ************************
struct Z_Construct_UFunction_USIK_GameServerLibrary_SetMaxPlayerCount_Statics
{
	struct SIK_GameServerLibrary_eventSetMaxPlayerCount_Parms
	{
		int32 MaxPlayerCount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Game Server" },
		{ "Comment", "/*\n\x09Sets the max player count for the game server.\n\x09@param MaxPlayerCount - The maximum number of players.\n\x09*/" },
		{ "DisplayName", "Set Max Player Count" },
		{ "Keywords", "SetMaxPlayerCount" },
		{ "ModuleRelativePath", "Functions/GameServer/SIK_GameServerLibrary.h" },
		{ "ToolTip", "Sets the max player count for the game server.\n@param MaxPlayerCount - The maximum number of players." },
	};
#endif // WITH_METADATA

// ********** Begin Function SetMaxPlayerCount constinit property declarations *********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPlayerCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetMaxPlayerCount constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetMaxPlayerCount Property Definitions ********************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_GameServerLibrary_SetMaxPlayerCount_Statics::NewProp_MaxPlayerCount = { "MaxPlayerCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GameServerLibrary_eventSetMaxPlayerCount_Parms, MaxPlayerCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GameServerLibrary_SetMaxPlayerCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GameServerLibrary_SetMaxPlayerCount_Statics::NewProp_MaxPlayerCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerLibrary_SetMaxPlayerCount_Statics::PropPointers) < 2048);
// ********** End Function SetMaxPlayerCount Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GameServerLibrary_SetMaxPlayerCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_GameServerLibrary, nullptr, "SetMaxPlayerCount", 	Z_Construct_UFunction_USIK_GameServerLibrary_SetMaxPlayerCount_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerLibrary_SetMaxPlayerCount_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_GameServerLibrary_SetMaxPlayerCount_Statics::SIK_GameServerLibrary_eventSetMaxPlayerCount_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerLibrary_SetMaxPlayerCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GameServerLibrary_SetMaxPlayerCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_GameServerLibrary_SetMaxPlayerCount_Statics::SIK_GameServerLibrary_eventSetMaxPlayerCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GameServerLibrary_SetMaxPlayerCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GameServerLibrary_SetMaxPlayerCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GameServerLibrary::execSetMaxPlayerCount)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxPlayerCount);
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_GameServerLibrary::SetMaxPlayerCount(Z_Param_MaxPlayerCount);
	P_NATIVE_END;
}
// ********** End Class USIK_GameServerLibrary Function SetMaxPlayerCount **************************

// ********** Begin Class USIK_GameServerLibrary Function SetModDir ********************************
struct Z_Construct_UFunction_USIK_GameServerLibrary_SetModDir_Statics
{
	struct SIK_GameServerLibrary_eventSetModDir_Parms
	{
		FString ModDir;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Game Server" },
		{ "Comment", "/*\n\x09Sets the mod directory for the game server.\n\x09@param ModDir - The mod directory string.\n\x09*/" },
		{ "DisplayName", "Set Mod Dir" },
		{ "Keywords", "SetModDir" },
		{ "ModuleRelativePath", "Functions/GameServer/SIK_GameServerLibrary.h" },
		{ "ToolTip", "Sets the mod directory for the game server.\n@param ModDir - The mod directory string." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModDir_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetModDir constinit property declarations *****************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ModDir;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetModDir constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetModDir Property Definitions ****************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_GameServerLibrary_SetModDir_Statics::NewProp_ModDir = { "ModDir", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GameServerLibrary_eventSetModDir_Parms, ModDir), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModDir_MetaData), NewProp_ModDir_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GameServerLibrary_SetModDir_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GameServerLibrary_SetModDir_Statics::NewProp_ModDir,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerLibrary_SetModDir_Statics::PropPointers) < 2048);
// ********** End Function SetModDir Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GameServerLibrary_SetModDir_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_GameServerLibrary, nullptr, "SetModDir", 	Z_Construct_UFunction_USIK_GameServerLibrary_SetModDir_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerLibrary_SetModDir_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_GameServerLibrary_SetModDir_Statics::SIK_GameServerLibrary_eventSetModDir_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerLibrary_SetModDir_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GameServerLibrary_SetModDir_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_GameServerLibrary_SetModDir_Statics::SIK_GameServerLibrary_eventSetModDir_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GameServerLibrary_SetModDir()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GameServerLibrary_SetModDir_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GameServerLibrary::execSetModDir)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ModDir);
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_GameServerLibrary::SetModDir(Z_Param_ModDir);
	P_NATIVE_END;
}
// ********** End Class USIK_GameServerLibrary Function SetModDir **********************************

// ********** Begin Class USIK_GameServerLibrary Function SetPasswordProtected *********************
struct Z_Construct_UFunction_USIK_GameServerLibrary_SetPasswordProtected_Statics
{
	struct SIK_GameServerLibrary_eventSetPasswordProtected_Parms
	{
		bool bPasswordProtected;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Game Server" },
		{ "Comment", "/*\n\x09Sets whether the game server is password protected.\n\x09@param bPasswordProtected - If true, the server is password protected.\n\x09*/" },
		{ "DisplayName", "Set Password Protected" },
		{ "Keywords", "SetPasswordProtected" },
		{ "ModuleRelativePath", "Functions/GameServer/SIK_GameServerLibrary.h" },
		{ "ToolTip", "Sets whether the game server is password protected.\n@param bPasswordProtected - If true, the server is password protected." },
	};
#endif // WITH_METADATA

// ********** Begin Function SetPasswordProtected constinit property declarations ******************
	static void NewProp_bPasswordProtected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPasswordProtected;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetPasswordProtected constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetPasswordProtected Property Definitions *****************************
void Z_Construct_UFunction_USIK_GameServerLibrary_SetPasswordProtected_Statics::NewProp_bPasswordProtected_SetBit(void* Obj)
{
	((SIK_GameServerLibrary_eventSetPasswordProtected_Parms*)Obj)->bPasswordProtected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_GameServerLibrary_SetPasswordProtected_Statics::NewProp_bPasswordProtected = { "bPasswordProtected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_GameServerLibrary_eventSetPasswordProtected_Parms), &Z_Construct_UFunction_USIK_GameServerLibrary_SetPasswordProtected_Statics::NewProp_bPasswordProtected_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GameServerLibrary_SetPasswordProtected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GameServerLibrary_SetPasswordProtected_Statics::NewProp_bPasswordProtected,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerLibrary_SetPasswordProtected_Statics::PropPointers) < 2048);
// ********** End Function SetPasswordProtected Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GameServerLibrary_SetPasswordProtected_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_GameServerLibrary, nullptr, "SetPasswordProtected", 	Z_Construct_UFunction_USIK_GameServerLibrary_SetPasswordProtected_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerLibrary_SetPasswordProtected_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_GameServerLibrary_SetPasswordProtected_Statics::SIK_GameServerLibrary_eventSetPasswordProtected_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerLibrary_SetPasswordProtected_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GameServerLibrary_SetPasswordProtected_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_GameServerLibrary_SetPasswordProtected_Statics::SIK_GameServerLibrary_eventSetPasswordProtected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GameServerLibrary_SetPasswordProtected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GameServerLibrary_SetPasswordProtected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GameServerLibrary::execSetPasswordProtected)
{
	P_GET_UBOOL(Z_Param_bPasswordProtected);
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_GameServerLibrary::SetPasswordProtected(Z_Param_bPasswordProtected);
	P_NATIVE_END;
}
// ********** End Class USIK_GameServerLibrary Function SetPasswordProtected ***********************

// ********** Begin Class USIK_GameServerLibrary Function SetProduct *******************************
struct Z_Construct_UFunction_USIK_GameServerLibrary_SetProduct_Statics
{
	struct SIK_GameServerLibrary_eventSetProduct_Parms
	{
		FString Product;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Game Server" },
		{ "Comment", "/*\n\x09Sets the product name for the game server.\n\x09@param Product - The product name string.\n\x09*/" },
		{ "DisplayName", "Set Product" },
		{ "Keywords", "SetProduct" },
		{ "ModuleRelativePath", "Functions/GameServer/SIK_GameServerLibrary.h" },
		{ "ToolTip", "Sets the product name for the game server.\n@param Product - The product name string." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Product_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetProduct constinit property declarations ****************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Product;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetProduct constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetProduct Property Definitions ***************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_GameServerLibrary_SetProduct_Statics::NewProp_Product = { "Product", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GameServerLibrary_eventSetProduct_Parms, Product), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Product_MetaData), NewProp_Product_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GameServerLibrary_SetProduct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GameServerLibrary_SetProduct_Statics::NewProp_Product,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerLibrary_SetProduct_Statics::PropPointers) < 2048);
// ********** End Function SetProduct Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GameServerLibrary_SetProduct_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_GameServerLibrary, nullptr, "SetProduct", 	Z_Construct_UFunction_USIK_GameServerLibrary_SetProduct_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerLibrary_SetProduct_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_GameServerLibrary_SetProduct_Statics::SIK_GameServerLibrary_eventSetProduct_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerLibrary_SetProduct_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GameServerLibrary_SetProduct_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_GameServerLibrary_SetProduct_Statics::SIK_GameServerLibrary_eventSetProduct_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GameServerLibrary_SetProduct()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GameServerLibrary_SetProduct_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GameServerLibrary::execSetProduct)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Product);
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_GameServerLibrary::SetProduct(Z_Param_Product);
	P_NATIVE_END;
}
// ********** End Class USIK_GameServerLibrary Function SetProduct *********************************

// ********** Begin Class USIK_GameServerLibrary Function SetRegion ********************************
struct Z_Construct_UFunction_USIK_GameServerLibrary_SetRegion_Statics
{
	struct SIK_GameServerLibrary_eventSetRegion_Parms
	{
		FString Region;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Game Server" },
		{ "Comment", "/*\n\x09Sets the region for the game server.\n\x09@param Region - The region string.\n\x09*/" },
		{ "DisplayName", "Set Region" },
		{ "Keywords", "SetRegion" },
		{ "ModuleRelativePath", "Functions/GameServer/SIK_GameServerLibrary.h" },
		{ "ToolTip", "Sets the region for the game server.\n@param Region - The region string." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Region_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetRegion constinit property declarations *****************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Region;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetRegion constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetRegion Property Definitions ****************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_GameServerLibrary_SetRegion_Statics::NewProp_Region = { "Region", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GameServerLibrary_eventSetRegion_Parms, Region), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Region_MetaData), NewProp_Region_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GameServerLibrary_SetRegion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GameServerLibrary_SetRegion_Statics::NewProp_Region,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerLibrary_SetRegion_Statics::PropPointers) < 2048);
// ********** End Function SetRegion Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GameServerLibrary_SetRegion_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_GameServerLibrary, nullptr, "SetRegion", 	Z_Construct_UFunction_USIK_GameServerLibrary_SetRegion_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerLibrary_SetRegion_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_GameServerLibrary_SetRegion_Statics::SIK_GameServerLibrary_eventSetRegion_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerLibrary_SetRegion_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GameServerLibrary_SetRegion_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_GameServerLibrary_SetRegion_Statics::SIK_GameServerLibrary_eventSetRegion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GameServerLibrary_SetRegion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GameServerLibrary_SetRegion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GameServerLibrary::execSetRegion)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Region);
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_GameServerLibrary::SetRegion(Z_Param_Region);
	P_NATIVE_END;
}
// ********** End Class USIK_GameServerLibrary Function SetRegion **********************************

// ********** Begin Class USIK_GameServerLibrary Function SetServerName ****************************
struct Z_Construct_UFunction_USIK_GameServerLibrary_SetServerName_Statics
{
	struct SIK_GameServerLibrary_eventSetServerName_Parms
	{
		FString ServerName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Game Server" },
		{ "Comment", "/*\n\x09Sets the server name for the game server.\n\x09@param ServerName - The server name string.\n\x09*/" },
		{ "DisplayName", "Set Server Name" },
		{ "Keywords", "SetServerName" },
		{ "ModuleRelativePath", "Functions/GameServer/SIK_GameServerLibrary.h" },
		{ "ToolTip", "Sets the server name for the game server.\n@param ServerName - The server name string." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetServerName constinit property declarations *************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ServerName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetServerName constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetServerName Property Definitions ************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_GameServerLibrary_SetServerName_Statics::NewProp_ServerName = { "ServerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GameServerLibrary_eventSetServerName_Parms, ServerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerName_MetaData), NewProp_ServerName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GameServerLibrary_SetServerName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GameServerLibrary_SetServerName_Statics::NewProp_ServerName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerLibrary_SetServerName_Statics::PropPointers) < 2048);
// ********** End Function SetServerName Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GameServerLibrary_SetServerName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_GameServerLibrary, nullptr, "SetServerName", 	Z_Construct_UFunction_USIK_GameServerLibrary_SetServerName_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerLibrary_SetServerName_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_GameServerLibrary_SetServerName_Statics::SIK_GameServerLibrary_eventSetServerName_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerLibrary_SetServerName_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GameServerLibrary_SetServerName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_GameServerLibrary_SetServerName_Statics::SIK_GameServerLibrary_eventSetServerName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GameServerLibrary_SetServerName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GameServerLibrary_SetServerName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GameServerLibrary::execSetServerName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ServerName);
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_GameServerLibrary::SetServerName(Z_Param_ServerName);
	P_NATIVE_END;
}
// ********** End Class USIK_GameServerLibrary Function SetServerName ******************************

// ********** Begin Class USIK_GameServerLibrary Function SetSpectatorPort *************************
struct Z_Construct_UFunction_USIK_GameServerLibrary_SetSpectatorPort_Statics
{
	struct SIK_GameServerLibrary_eventSetSpectatorPort_Parms
	{
		int32 SpectatorPort;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Game Server" },
		{ "Comment", "/*\n\x09Sets the spectator port for the game server.\n\x09@param SpectatorPort - The spectator port number.\n\x09*/" },
		{ "DisplayName", "Set Spectator Port" },
		{ "Keywords", "SetSpectatorPort" },
		{ "ModuleRelativePath", "Functions/GameServer/SIK_GameServerLibrary.h" },
		{ "ToolTip", "Sets the spectator port for the game server.\n@param SpectatorPort - The spectator port number." },
	};
#endif // WITH_METADATA

// ********** Begin Function SetSpectatorPort constinit property declarations **********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_SpectatorPort;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetSpectatorPort constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetSpectatorPort Property Definitions *********************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_GameServerLibrary_SetSpectatorPort_Statics::NewProp_SpectatorPort = { "SpectatorPort", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GameServerLibrary_eventSetSpectatorPort_Parms, SpectatorPort), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GameServerLibrary_SetSpectatorPort_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GameServerLibrary_SetSpectatorPort_Statics::NewProp_SpectatorPort,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerLibrary_SetSpectatorPort_Statics::PropPointers) < 2048);
// ********** End Function SetSpectatorPort Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GameServerLibrary_SetSpectatorPort_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_GameServerLibrary, nullptr, "SetSpectatorPort", 	Z_Construct_UFunction_USIK_GameServerLibrary_SetSpectatorPort_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerLibrary_SetSpectatorPort_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_GameServerLibrary_SetSpectatorPort_Statics::SIK_GameServerLibrary_eventSetSpectatorPort_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerLibrary_SetSpectatorPort_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GameServerLibrary_SetSpectatorPort_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_GameServerLibrary_SetSpectatorPort_Statics::SIK_GameServerLibrary_eventSetSpectatorPort_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GameServerLibrary_SetSpectatorPort()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GameServerLibrary_SetSpectatorPort_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GameServerLibrary::execSetSpectatorPort)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_SpectatorPort);
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_GameServerLibrary::SetSpectatorPort(Z_Param_SpectatorPort);
	P_NATIVE_END;
}
// ********** End Class USIK_GameServerLibrary Function SetSpectatorPort ***************************

// ********** Begin Class USIK_GameServerLibrary Function SetSpectatorServerName *******************
struct Z_Construct_UFunction_USIK_GameServerLibrary_SetSpectatorServerName_Statics
{
	struct SIK_GameServerLibrary_eventSetSpectatorServerName_Parms
	{
		FString SpectatorServerName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Game Server" },
		{ "Comment", "/*\n\x09Sets the spectator server name for the game server.\n\x09@param SpectatorServerName - The spectator server name string.\n\x09*/" },
		{ "DisplayName", "Set Spectator Server Name" },
		{ "Keywords", "SetSpectatorServerName" },
		{ "ModuleRelativePath", "Functions/GameServer/SIK_GameServerLibrary.h" },
		{ "ToolTip", "Sets the spectator server name for the game server.\n@param SpectatorServerName - The spectator server name string." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpectatorServerName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetSpectatorServerName constinit property declarations ****************
	static const UECodeGen_Private::FStrPropertyParams NewProp_SpectatorServerName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetSpectatorServerName constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetSpectatorServerName Property Definitions ***************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_GameServerLibrary_SetSpectatorServerName_Statics::NewProp_SpectatorServerName = { "SpectatorServerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GameServerLibrary_eventSetSpectatorServerName_Parms, SpectatorServerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpectatorServerName_MetaData), NewProp_SpectatorServerName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GameServerLibrary_SetSpectatorServerName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GameServerLibrary_SetSpectatorServerName_Statics::NewProp_SpectatorServerName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerLibrary_SetSpectatorServerName_Statics::PropPointers) < 2048);
// ********** End Function SetSpectatorServerName Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GameServerLibrary_SetSpectatorServerName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_GameServerLibrary, nullptr, "SetSpectatorServerName", 	Z_Construct_UFunction_USIK_GameServerLibrary_SetSpectatorServerName_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerLibrary_SetSpectatorServerName_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_GameServerLibrary_SetSpectatorServerName_Statics::SIK_GameServerLibrary_eventSetSpectatorServerName_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerLibrary_SetSpectatorServerName_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GameServerLibrary_SetSpectatorServerName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_GameServerLibrary_SetSpectatorServerName_Statics::SIK_GameServerLibrary_eventSetSpectatorServerName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GameServerLibrary_SetSpectatorServerName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GameServerLibrary_SetSpectatorServerName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GameServerLibrary::execSetSpectatorServerName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SpectatorServerName);
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_GameServerLibrary::SetSpectatorServerName(Z_Param_SpectatorServerName);
	P_NATIVE_END;
}
// ********** End Class USIK_GameServerLibrary Function SetSpectatorServerName *********************

// ********** Begin Class USIK_GameServerLibrary Function UpdateUserData ***************************
struct Z_Construct_UFunction_USIK_GameServerLibrary_UpdateUserData_Statics
{
	struct SIK_GameServerLibrary_eventUpdateUserData_Parms
	{
		FSIK_SteamId SteamId;
		FString PlayerName;
		int32 Score;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Game Server" },
		{ "Comment", "/*\n\x09Updates the user data for a connected user.\n\x09@param SteamId - The Steam ID of the user.\n\x09@param PlayerName - The name of the player.\n\x09@param Score - The score of the player.\n\x09@return - true if the user data was updated successfully, false otherwise.\n\x09*/" },
		{ "DisplayName", "Update User Data" },
		{ "Keywords", "BUpdateUserData" },
		{ "ModuleRelativePath", "Functions/GameServer/SIK_GameServerLibrary.h" },
		{ "ToolTip", "Updates the user data for a connected user.\n@param SteamId - The Steam ID of the user.\n@param PlayerName - The name of the player.\n@param Score - The score of the player.\n@return - true if the user data was updated successfully, false otherwise." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function UpdateUserData constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Score;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function UpdateUserData constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function UpdateUserData Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_GameServerLibrary_UpdateUserData_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GameServerLibrary_eventUpdateUserData_Parms, SteamId), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_GameServerLibrary_UpdateUserData_Statics::NewProp_PlayerName = { "PlayerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GameServerLibrary_eventUpdateUserData_Parms, PlayerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerName_MetaData), NewProp_PlayerName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_GameServerLibrary_UpdateUserData_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GameServerLibrary_eventUpdateUserData_Parms, Score), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_GameServerLibrary_UpdateUserData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_GameServerLibrary_eventUpdateUserData_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_GameServerLibrary_UpdateUserData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_GameServerLibrary_eventUpdateUserData_Parms), &Z_Construct_UFunction_USIK_GameServerLibrary_UpdateUserData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GameServerLibrary_UpdateUserData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GameServerLibrary_UpdateUserData_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GameServerLibrary_UpdateUserData_Statics::NewProp_PlayerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GameServerLibrary_UpdateUserData_Statics::NewProp_Score,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GameServerLibrary_UpdateUserData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerLibrary_UpdateUserData_Statics::PropPointers) < 2048);
// ********** End Function UpdateUserData Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GameServerLibrary_UpdateUserData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_GameServerLibrary, nullptr, "UpdateUserData", 	Z_Construct_UFunction_USIK_GameServerLibrary_UpdateUserData_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerLibrary_UpdateUserData_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_GameServerLibrary_UpdateUserData_Statics::SIK_GameServerLibrary_eventUpdateUserData_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerLibrary_UpdateUserData_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GameServerLibrary_UpdateUserData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_GameServerLibrary_UpdateUserData_Statics::SIK_GameServerLibrary_eventUpdateUserData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GameServerLibrary_UpdateUserData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GameServerLibrary_UpdateUserData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GameServerLibrary::execUpdateUserData)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_SteamId);
	P_GET_PROPERTY(FStrProperty,Z_Param_PlayerName);
	P_GET_PROPERTY(FIntProperty,Z_Param_Score);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_GameServerLibrary::UpdateUserData(Z_Param_SteamId,Z_Param_PlayerName,Z_Param_Score);
	P_NATIVE_END;
}
// ********** End Class USIK_GameServerLibrary Function UpdateUserData *****************************

// ********** Begin Class USIK_GameServerLibrary Function UserHasLicenseForApp *********************
struct Z_Construct_UFunction_USIK_GameServerLibrary_UserHasLicenseForApp_Statics
{
	struct SIK_GameServerLibrary_eventUserHasLicenseForApp_Parms
	{
		FSIK_SteamId SteamId;
		int32 AppId;
		TEnumAsByte<ESIK_UserHasLicenseForAppResult> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Game Server" },
		{ "Comment", "/*\n\x09""Checks if a user has a license for an app.\n\x09@param SteamId - The Steam ID of the user.\n\x09@param AppId - The App ID to check.\n\x09@return - The license result as an ESIK_UserHasLicenseForAppResult enum.\n\x09*/" },
		{ "DisplayName", "User Has License For App" },
		{ "Keywords", "UserHasLicenseForApp" },
		{ "ModuleRelativePath", "Functions/GameServer/SIK_GameServerLibrary.h" },
		{ "ToolTip", "Checks if a user has a license for an app.\n@param SteamId - The Steam ID of the user.\n@param AppId - The App ID to check.\n@return - The license result as an ESIK_UserHasLicenseForAppResult enum." },
	};
#endif // WITH_METADATA

// ********** Begin Function UserHasLicenseForApp constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function UserHasLicenseForApp constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function UserHasLicenseForApp Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_GameServerLibrary_UserHasLicenseForApp_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GameServerLibrary_eventUserHasLicenseForApp_Parms, SteamId), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_GameServerLibrary_UserHasLicenseForApp_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GameServerLibrary_eventUserHasLicenseForApp_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_GameServerLibrary_UserHasLicenseForApp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GameServerLibrary_eventUserHasLicenseForApp_Parms, ReturnValue), Z_Construct_UEnum_SteamIntegrationKit_ESIK_UserHasLicenseForAppResult, METADATA_PARAMS(0, nullptr) }; // 1181921963
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GameServerLibrary_UserHasLicenseForApp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GameServerLibrary_UserHasLicenseForApp_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GameServerLibrary_UserHasLicenseForApp_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GameServerLibrary_UserHasLicenseForApp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerLibrary_UserHasLicenseForApp_Statics::PropPointers) < 2048);
// ********** End Function UserHasLicenseForApp Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GameServerLibrary_UserHasLicenseForApp_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_GameServerLibrary, nullptr, "UserHasLicenseForApp", 	Z_Construct_UFunction_USIK_GameServerLibrary_UserHasLicenseForApp_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerLibrary_UserHasLicenseForApp_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_GameServerLibrary_UserHasLicenseForApp_Statics::SIK_GameServerLibrary_eventUserHasLicenseForApp_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerLibrary_UserHasLicenseForApp_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GameServerLibrary_UserHasLicenseForApp_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_GameServerLibrary_UserHasLicenseForApp_Statics::SIK_GameServerLibrary_eventUserHasLicenseForApp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GameServerLibrary_UserHasLicenseForApp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GameServerLibrary_UserHasLicenseForApp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GameServerLibrary::execUserHasLicenseForApp)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_SteamId);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<ESIK_UserHasLicenseForAppResult>*)Z_Param__Result=USIK_GameServerLibrary::UserHasLicenseForApp(Z_Param_SteamId,Z_Param_AppId);
	P_NATIVE_END;
}
// ********** End Class USIK_GameServerLibrary Function UserHasLicenseForApp ***********************

// ********** Begin Class USIK_GameServerLibrary Function WasRestartRequested **********************
struct Z_Construct_UFunction_USIK_GameServerLibrary_WasRestartRequested_Statics
{
	struct SIK_GameServerLibrary_eventWasRestartRequested_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Game Server" },
		{ "Comment", "/*\n\x09""Checks if a restart was requested for the game server.\n\x09@return - true if a restart was requested, false otherwise.\n\x09*/" },
		{ "DisplayName", "Was Restart Requested" },
		{ "Keywords", "WasRestartRequested" },
		{ "ModuleRelativePath", "Functions/GameServer/SIK_GameServerLibrary.h" },
		{ "ToolTip", "Checks if a restart was requested for the game server.\n@return - true if a restart was requested, false otherwise." },
	};
#endif // WITH_METADATA

// ********** Begin Function WasRestartRequested constinit property declarations *******************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function WasRestartRequested constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function WasRestartRequested Property Definitions ******************************
void Z_Construct_UFunction_USIK_GameServerLibrary_WasRestartRequested_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_GameServerLibrary_eventWasRestartRequested_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_GameServerLibrary_WasRestartRequested_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_GameServerLibrary_eventWasRestartRequested_Parms), &Z_Construct_UFunction_USIK_GameServerLibrary_WasRestartRequested_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GameServerLibrary_WasRestartRequested_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GameServerLibrary_WasRestartRequested_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerLibrary_WasRestartRequested_Statics::PropPointers) < 2048);
// ********** End Function WasRestartRequested Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GameServerLibrary_WasRestartRequested_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_GameServerLibrary, nullptr, "WasRestartRequested", 	Z_Construct_UFunction_USIK_GameServerLibrary_WasRestartRequested_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerLibrary_WasRestartRequested_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_GameServerLibrary_WasRestartRequested_Statics::SIK_GameServerLibrary_eventWasRestartRequested_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GameServerLibrary_WasRestartRequested_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GameServerLibrary_WasRestartRequested_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_GameServerLibrary_WasRestartRequested_Statics::SIK_GameServerLibrary_eventWasRestartRequested_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GameServerLibrary_WasRestartRequested()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GameServerLibrary_WasRestartRequested_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GameServerLibrary::execWasRestartRequested)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_GameServerLibrary::WasRestartRequested();
	P_NATIVE_END;
}
// ********** End Class USIK_GameServerLibrary Function WasRestartRequested ************************

// ********** Begin Class USIK_GameServerLibrary ***************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_GameServerLibrary;
UClass* USIK_GameServerLibrary::GetPrivateStaticClass()
{
	using TClass = USIK_GameServerLibrary;
	if (!Z_Registration_Info_UClass_USIK_GameServerLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_GameServerLibrary"),
			Z_Registration_Info_UClass_USIK_GameServerLibrary.InnerSingleton,
			StaticRegisterNativesUSIK_GameServerLibrary,
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
	return Z_Registration_Info_UClass_USIK_GameServerLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_GameServerLibrary_NoRegister()
{
	return USIK_GameServerLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_GameServerLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Functions/GameServer/SIK_GameServerLibrary.h" },
		{ "ModuleRelativePath", "Functions/GameServer/SIK_GameServerLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_GameServerLibrary constinit property declarations *******************
// ********** End Class USIK_GameServerLibrary constinit property declarations *********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("BeginAuthSession"), .Pointer = &USIK_GameServerLibrary::execBeginAuthSession },
		{ .NameUTF8 = UTF8TEXT("CancelAuthTicket"), .Pointer = &USIK_GameServerLibrary::execCancelAuthTicket },
		{ .NameUTF8 = UTF8TEXT("ClearAllKeyValues"), .Pointer = &USIK_GameServerLibrary::execClearAllKeyValues },
		{ .NameUTF8 = UTF8TEXT("CreateUnauthenticatedUserConnection"), .Pointer = &USIK_GameServerLibrary::execCreateUnauthenticatedUserConnection },
		{ .NameUTF8 = UTF8TEXT("EndAuthSession"), .Pointer = &USIK_GameServerLibrary::execEndAuthSession },
		{ .NameUTF8 = UTF8TEXT("GetAuthSessionTicket"), .Pointer = &USIK_GameServerLibrary::execGetAuthSessionTicket },
		{ .NameUTF8 = UTF8TEXT("GetPublicIP"), .Pointer = &USIK_GameServerLibrary::execGetPublicIP },
		{ .NameUTF8 = UTF8TEXT("GetSteamID"), .Pointer = &USIK_GameServerLibrary::execGetSteamID },
		{ .NameUTF8 = UTF8TEXT("LoggedOn"), .Pointer = &USIK_GameServerLibrary::execLoggedOn },
		{ .NameUTF8 = UTF8TEXT("LogOff"), .Pointer = &USIK_GameServerLibrary::execLogOff },
		{ .NameUTF8 = UTF8TEXT("LogOn"), .Pointer = &USIK_GameServerLibrary::execLogOn },
		{ .NameUTF8 = UTF8TEXT("LogOnAnonymous"), .Pointer = &USIK_GameServerLibrary::execLogOnAnonymous },
		{ .NameUTF8 = UTF8TEXT("RequestUserGroupStatus"), .Pointer = &USIK_GameServerLibrary::execRequestUserGroupStatus },
		{ .NameUTF8 = UTF8TEXT("Secure"), .Pointer = &USIK_GameServerLibrary::execSecure },
		{ .NameUTF8 = UTF8TEXT("SetBotPlayerCount"), .Pointer = &USIK_GameServerLibrary::execSetBotPlayerCount },
		{ .NameUTF8 = UTF8TEXT("SetDedicatedServer"), .Pointer = &USIK_GameServerLibrary::execSetDedicatedServer },
		{ .NameUTF8 = UTF8TEXT("SetGameData"), .Pointer = &USIK_GameServerLibrary::execSetGameData },
		{ .NameUTF8 = UTF8TEXT("SetGameDescription"), .Pointer = &USIK_GameServerLibrary::execSetGameDescription },
		{ .NameUTF8 = UTF8TEXT("SetGameTags"), .Pointer = &USIK_GameServerLibrary::execSetGameTags },
		{ .NameUTF8 = UTF8TEXT("SetKeyValue"), .Pointer = &USIK_GameServerLibrary::execSetKeyValue },
		{ .NameUTF8 = UTF8TEXT("SetMapName"), .Pointer = &USIK_GameServerLibrary::execSetMapName },
		{ .NameUTF8 = UTF8TEXT("SetMaxPlayerCount"), .Pointer = &USIK_GameServerLibrary::execSetMaxPlayerCount },
		{ .NameUTF8 = UTF8TEXT("SetModDir"), .Pointer = &USIK_GameServerLibrary::execSetModDir },
		{ .NameUTF8 = UTF8TEXT("SetPasswordProtected"), .Pointer = &USIK_GameServerLibrary::execSetPasswordProtected },
		{ .NameUTF8 = UTF8TEXT("SetProduct"), .Pointer = &USIK_GameServerLibrary::execSetProduct },
		{ .NameUTF8 = UTF8TEXT("SetRegion"), .Pointer = &USIK_GameServerLibrary::execSetRegion },
		{ .NameUTF8 = UTF8TEXT("SetServerName"), .Pointer = &USIK_GameServerLibrary::execSetServerName },
		{ .NameUTF8 = UTF8TEXT("SetSpectatorPort"), .Pointer = &USIK_GameServerLibrary::execSetSpectatorPort },
		{ .NameUTF8 = UTF8TEXT("SetSpectatorServerName"), .Pointer = &USIK_GameServerLibrary::execSetSpectatorServerName },
		{ .NameUTF8 = UTF8TEXT("UpdateUserData"), .Pointer = &USIK_GameServerLibrary::execUpdateUserData },
		{ .NameUTF8 = UTF8TEXT("UserHasLicenseForApp"), .Pointer = &USIK_GameServerLibrary::execUserHasLicenseForApp },
		{ .NameUTF8 = UTF8TEXT("WasRestartRequested"), .Pointer = &USIK_GameServerLibrary::execWasRestartRequested },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_GameServerLibrary_BeginAuthSession, "BeginAuthSession" }, // 280636851
		{ &Z_Construct_UFunction_USIK_GameServerLibrary_CancelAuthTicket, "CancelAuthTicket" }, // 1834382133
		{ &Z_Construct_UFunction_USIK_GameServerLibrary_ClearAllKeyValues, "ClearAllKeyValues" }, // 1420740860
		{ &Z_Construct_UFunction_USIK_GameServerLibrary_CreateUnauthenticatedUserConnection, "CreateUnauthenticatedUserConnection" }, // 1033710278
		{ &Z_Construct_UFunction_USIK_GameServerLibrary_EndAuthSession, "EndAuthSession" }, // 1687559291
		{ &Z_Construct_UFunction_USIK_GameServerLibrary_GetAuthSessionTicket, "GetAuthSessionTicket" }, // 870129042
		{ &Z_Construct_UFunction_USIK_GameServerLibrary_GetPublicIP, "GetPublicIP" }, // 1923397986
		{ &Z_Construct_UFunction_USIK_GameServerLibrary_GetSteamID, "GetSteamID" }, // 887503534
		{ &Z_Construct_UFunction_USIK_GameServerLibrary_LoggedOn, "LoggedOn" }, // 3398430445
		{ &Z_Construct_UFunction_USIK_GameServerLibrary_LogOff, "LogOff" }, // 205877564
		{ &Z_Construct_UFunction_USIK_GameServerLibrary_LogOn, "LogOn" }, // 985191900
		{ &Z_Construct_UFunction_USIK_GameServerLibrary_LogOnAnonymous, "LogOnAnonymous" }, // 1882229949
		{ &Z_Construct_UFunction_USIK_GameServerLibrary_RequestUserGroupStatus, "RequestUserGroupStatus" }, // 1920345078
		{ &Z_Construct_UFunction_USIK_GameServerLibrary_Secure, "Secure" }, // 2609425557
		{ &Z_Construct_UFunction_USIK_GameServerLibrary_SetBotPlayerCount, "SetBotPlayerCount" }, // 3968350903
		{ &Z_Construct_UFunction_USIK_GameServerLibrary_SetDedicatedServer, "SetDedicatedServer" }, // 1925975315
		{ &Z_Construct_UFunction_USIK_GameServerLibrary_SetGameData, "SetGameData" }, // 932227568
		{ &Z_Construct_UFunction_USIK_GameServerLibrary_SetGameDescription, "SetGameDescription" }, // 1406621751
		{ &Z_Construct_UFunction_USIK_GameServerLibrary_SetGameTags, "SetGameTags" }, // 2799721960
		{ &Z_Construct_UFunction_USIK_GameServerLibrary_SetKeyValue, "SetKeyValue" }, // 2322347771
		{ &Z_Construct_UFunction_USIK_GameServerLibrary_SetMapName, "SetMapName" }, // 2882353311
		{ &Z_Construct_UFunction_USIK_GameServerLibrary_SetMaxPlayerCount, "SetMaxPlayerCount" }, // 499574039
		{ &Z_Construct_UFunction_USIK_GameServerLibrary_SetModDir, "SetModDir" }, // 3178725856
		{ &Z_Construct_UFunction_USIK_GameServerLibrary_SetPasswordProtected, "SetPasswordProtected" }, // 1972223329
		{ &Z_Construct_UFunction_USIK_GameServerLibrary_SetProduct, "SetProduct" }, // 3983722578
		{ &Z_Construct_UFunction_USIK_GameServerLibrary_SetRegion, "SetRegion" }, // 1715473515
		{ &Z_Construct_UFunction_USIK_GameServerLibrary_SetServerName, "SetServerName" }, // 2967766883
		{ &Z_Construct_UFunction_USIK_GameServerLibrary_SetSpectatorPort, "SetSpectatorPort" }, // 652478724
		{ &Z_Construct_UFunction_USIK_GameServerLibrary_SetSpectatorServerName, "SetSpectatorServerName" }, // 1945296918
		{ &Z_Construct_UFunction_USIK_GameServerLibrary_UpdateUserData, "UpdateUserData" }, // 943022395
		{ &Z_Construct_UFunction_USIK_GameServerLibrary_UserHasLicenseForApp, "UserHasLicenseForApp" }, // 1364093673
		{ &Z_Construct_UFunction_USIK_GameServerLibrary_WasRestartRequested, "WasRestartRequested" }, // 1737091441
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_GameServerLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_GameServerLibrary_Statics
UObject* (*const Z_Construct_UClass_USIK_GameServerLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GameServerLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_GameServerLibrary_Statics::ClassParams = {
	&USIK_GameServerLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GameServerLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_GameServerLibrary_Statics::Class_MetaDataParams)
};
void USIK_GameServerLibrary::StaticRegisterNativesUSIK_GameServerLibrary()
{
	UClass* Class = USIK_GameServerLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_GameServerLibrary_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_GameServerLibrary()
{
	if (!Z_Registration_Info_UClass_USIK_GameServerLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_GameServerLibrary.OuterSingleton, Z_Construct_UClass_USIK_GameServerLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_GameServerLibrary.OuterSingleton;
}
USIK_GameServerLibrary::USIK_GameServerLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_GameServerLibrary);
USIK_GameServerLibrary::~USIK_GameServerLibrary() {}
// ********** End Class USIK_GameServerLibrary *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_GameServer_SIK_GameServerLibrary_h__Script_SteamIntegrationKit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESIK_UserHasLicenseForAppResult_StaticEnum, TEXT("ESIK_UserHasLicenseForAppResult"), &Z_Registration_Info_UEnum_ESIK_UserHasLicenseForAppResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1181921963U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_GameServerLibrary, USIK_GameServerLibrary::StaticClass, TEXT("USIK_GameServerLibrary"), &Z_Registration_Info_UClass_USIK_GameServerLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_GameServerLibrary), 2584644248U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_GameServer_SIK_GameServerLibrary_h__Script_SteamIntegrationKit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_GameServer_SIK_GameServerLibrary_h__Script_SteamIntegrationKit_1649833652{
	TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_GameServer_SIK_GameServerLibrary_h__Script_SteamIntegrationKit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_GameServer_SIK_GameServerLibrary_h__Script_SteamIntegrationKit_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_GameServer_SIK_GameServerLibrary_h__Script_SteamIntegrationKit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_GameServer_SIK_GameServerLibrary_h__Script_SteamIntegrationKit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
