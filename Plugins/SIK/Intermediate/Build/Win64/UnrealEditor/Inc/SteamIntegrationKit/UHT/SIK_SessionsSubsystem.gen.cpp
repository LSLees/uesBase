// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/Sessions/SIK_SessionsSubsystem.h"
#include "Engine/GameInstance.h"
#include "FindSessionsCallbackProxy.h"
#include "SIK_SharedFile.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_SessionsSubsystem() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
ONLINESUBSYSTEMUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintSessionResult();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_SessionsSubsystem();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_SessionsSubsystem_NoRegister();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_OnSessionUserInviteAccepted__DelegateSignature();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_CurrentSessionInfo();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_SteamId();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FSIK_CurrentSessionInfo *******************************************
struct Z_Construct_UScriptStruct_FSIK_CurrentSessionInfo_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSIK_CurrentSessionInfo); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSIK_CurrentSessionInfo); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Functions/Sessions/SIK_SessionsSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SessionName_MetaData[] = {
		{ "Category", "Steam Integration Kit || Game Functions || Sessions" },
		{ "ModuleRelativePath", "Functions/Sessions/SIK_SessionsSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LobbyId_MetaData[] = {
		{ "Category", "Steam Integration Kit || Game Functions || Sessions" },
		{ "ModuleRelativePath", "Functions/Sessions/SIK_SessionsSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSIK_CurrentSessionInfo constinit property declarations ***********
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSIK_CurrentSessionInfo constinit property declarations *************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSIK_CurrentSessionInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSIK_CurrentSessionInfo_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSIK_CurrentSessionInfo;
class UScriptStruct* FSIK_CurrentSessionInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_CurrentSessionInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSIK_CurrentSessionInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSIK_CurrentSessionInfo, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("SIK_CurrentSessionInfo"));
	}
	return Z_Registration_Info_UScriptStruct_FSIK_CurrentSessionInfo.OuterSingleton;
	}

// ********** Begin ScriptStruct FSIK_CurrentSessionInfo Property Definitions **********************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSIK_CurrentSessionInfo_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_CurrentSessionInfo, SessionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionName_MetaData), NewProp_SessionName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSIK_CurrentSessionInfo_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_CurrentSessionInfo, LobbyId), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LobbyId_MetaData), NewProp_LobbyId_MetaData) }; // 3413883574
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSIK_CurrentSessionInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_CurrentSessionInfo_Statics::NewProp_SessionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_CurrentSessionInfo_Statics::NewProp_LobbyId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_CurrentSessionInfo_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSIK_CurrentSessionInfo Property Definitions ************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSIK_CurrentSessionInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	&NewStructOps,
	"SIK_CurrentSessionInfo",
	Z_Construct_UScriptStruct_FSIK_CurrentSessionInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_CurrentSessionInfo_Statics::PropPointers),
	sizeof(FSIK_CurrentSessionInfo),
	alignof(FSIK_CurrentSessionInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_CurrentSessionInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSIK_CurrentSessionInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSIK_CurrentSessionInfo()
{
	if (!Z_Registration_Info_UScriptStruct_FSIK_CurrentSessionInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSIK_CurrentSessionInfo.InnerSingleton, Z_Construct_UScriptStruct_FSIK_CurrentSessionInfo_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSIK_CurrentSessionInfo.InnerSingleton);
}
// ********** End ScriptStruct FSIK_CurrentSessionInfo *********************************************

// ********** Begin Delegate FSIK_OnSessionUserInviteAccepted **************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_OnSessionUserInviteAccepted__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventSIK_OnSessionUserInviteAccepted_Parms
	{
		bool bWasSuccesfull;
		FBlueprintSessionResult AcceptedSession;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/Sessions/SIK_SessionsSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AcceptedSession_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FSIK_OnSessionUserInviteAccepted constinit property declarations ******
	static void NewProp_bWasSuccesfull_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccesfull;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AcceptedSession;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FSIK_OnSessionUserInviteAccepted constinit property declarations ********
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FSIK_OnSessionUserInviteAccepted Property Definitions *****************
void Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_OnSessionUserInviteAccepted__DelegateSignature_Statics::NewProp_bWasSuccesfull_SetBit(void* Obj)
{
	((_Script_SteamIntegrationKit_eventSIK_OnSessionUserInviteAccepted_Parms*)Obj)->bWasSuccesfull = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_OnSessionUserInviteAccepted__DelegateSignature_Statics::NewProp_bWasSuccesfull = { "bWasSuccesfull", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamIntegrationKit_eventSIK_OnSessionUserInviteAccepted_Parms), &Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_OnSessionUserInviteAccepted__DelegateSignature_Statics::NewProp_bWasSuccesfull_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_OnSessionUserInviteAccepted__DelegateSignature_Statics::NewProp_AcceptedSession = { "AcceptedSession", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventSIK_OnSessionUserInviteAccepted_Parms, AcceptedSession), Z_Construct_UScriptStruct_FBlueprintSessionResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AcceptedSession_MetaData), NewProp_AcceptedSession_MetaData) }; // 2609908441
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_OnSessionUserInviteAccepted__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_OnSessionUserInviteAccepted__DelegateSignature_Statics::NewProp_bWasSuccesfull,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_OnSessionUserInviteAccepted__DelegateSignature_Statics::NewProp_AcceptedSession,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_OnSessionUserInviteAccepted__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FSIK_OnSessionUserInviteAccepted Property Definitions *******************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_OnSessionUserInviteAccepted__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "SIK_OnSessionUserInviteAccepted__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_OnSessionUserInviteAccepted__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_OnSessionUserInviteAccepted__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_OnSessionUserInviteAccepted__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventSIK_OnSessionUserInviteAccepted_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_OnSessionUserInviteAccepted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_OnSessionUserInviteAccepted__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_OnSessionUserInviteAccepted__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventSIK_OnSessionUserInviteAccepted_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_OnSessionUserInviteAccepted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_OnSessionUserInviteAccepted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSIK_OnSessionUserInviteAccepted_DelegateWrapper(const FMulticastScriptDelegate& SIK_OnSessionUserInviteAccepted, bool bWasSuccesfull, FBlueprintSessionResult const& AcceptedSession)
{
	struct _Script_SteamIntegrationKit_eventSIK_OnSessionUserInviteAccepted_Parms
	{
		bool bWasSuccesfull;
		FBlueprintSessionResult AcceptedSession;
	};
	_Script_SteamIntegrationKit_eventSIK_OnSessionUserInviteAccepted_Parms Parms;
	Parms.bWasSuccesfull=bWasSuccesfull ? true : false;
	Parms.AcceptedSession=AcceptedSession;
	SIK_OnSessionUserInviteAccepted.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FSIK_OnSessionUserInviteAccepted ****************************************

// ********** Begin Class USIK_SessionsSubsystem Function GetAllJoinedSessionsAndLobbies ***********
struct Z_Construct_UFunction_USIK_SessionsSubsystem_GetAllJoinedSessionsAndLobbies_Statics
{
	struct SIK_SessionsSubsystem_eventGetAllJoinedSessionsAndLobbies_Parms
	{
		UObject* Context;
		TArray<FSIK_CurrentSessionInfo> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || Game Functions || Sessions" },
		{ "DisplayName", "Get All Joined Sessions And Lobbies" },
		{ "ModuleRelativePath", "Functions/Sessions/SIK_SessionsSubsystem.h" },
		{ "WorldContext", "Context" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAllJoinedSessionsAndLobbies constinit property declarations ********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAllJoinedSessionsAndLobbies constinit property declarations **********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAllJoinedSessionsAndLobbies Property Definitions *******************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_SessionsSubsystem_GetAllJoinedSessionsAndLobbies_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_SessionsSubsystem_eventGetAllJoinedSessionsAndLobbies_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_SessionsSubsystem_GetAllJoinedSessionsAndLobbies_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSIK_CurrentSessionInfo, METADATA_PARAMS(0, nullptr) }; // 2894684917
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_SessionsSubsystem_GetAllJoinedSessionsAndLobbies_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_SessionsSubsystem_eventGetAllJoinedSessionsAndLobbies_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2894684917
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_SessionsSubsystem_GetAllJoinedSessionsAndLobbies_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SessionsSubsystem_GetAllJoinedSessionsAndLobbies_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SessionsSubsystem_GetAllJoinedSessionsAndLobbies_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SessionsSubsystem_GetAllJoinedSessionsAndLobbies_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SessionsSubsystem_GetAllJoinedSessionsAndLobbies_Statics::PropPointers) < 2048);
// ********** End Function GetAllJoinedSessionsAndLobbies Property Definitions *********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_SessionsSubsystem_GetAllJoinedSessionsAndLobbies_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_SessionsSubsystem, nullptr, "GetAllJoinedSessionsAndLobbies", 	Z_Construct_UFunction_USIK_SessionsSubsystem_GetAllJoinedSessionsAndLobbies_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SessionsSubsystem_GetAllJoinedSessionsAndLobbies_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_SessionsSubsystem_GetAllJoinedSessionsAndLobbies_Statics::SIK_SessionsSubsystem_eventGetAllJoinedSessionsAndLobbies_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SessionsSubsystem_GetAllJoinedSessionsAndLobbies_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_SessionsSubsystem_GetAllJoinedSessionsAndLobbies_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_SessionsSubsystem_GetAllJoinedSessionsAndLobbies_Statics::SIK_SessionsSubsystem_eventGetAllJoinedSessionsAndLobbies_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_SessionsSubsystem_GetAllJoinedSessionsAndLobbies()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_SessionsSubsystem_GetAllJoinedSessionsAndLobbies_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_SessionsSubsystem::execGetAllJoinedSessionsAndLobbies)
{
	P_GET_OBJECT(UObject,Z_Param_Context);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FSIK_CurrentSessionInfo>*)Z_Param__Result=USIK_SessionsSubsystem::GetAllJoinedSessionsAndLobbies(Z_Param_Context);
	P_NATIVE_END;
}
// ********** End Class USIK_SessionsSubsystem Function GetAllJoinedSessionsAndLobbies *************

// ********** Begin Class USIK_SessionsSubsystem Function IsSIKActive ******************************
struct Z_Construct_UFunction_USIK_SessionsSubsystem_IsSIKActive_Statics
{
	struct SIK_SessionsSubsystem_eventIsSIKActive_Parms
	{
		UObject* Context;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || Game Functions || Sessions" },
		{ "DisplayName", "Is SIK Active" },
		{ "ModuleRelativePath", "Functions/Sessions/SIK_SessionsSubsystem.h" },
		{ "WorldContext", "Context" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsSIKActive constinit property declarations ***************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsSIKActive constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsSIKActive Property Definitions **************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_SessionsSubsystem_IsSIKActive_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_SessionsSubsystem_eventIsSIKActive_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_SessionsSubsystem_IsSIKActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_SessionsSubsystem_eventIsSIKActive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_SessionsSubsystem_IsSIKActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_SessionsSubsystem_eventIsSIKActive_Parms), &Z_Construct_UFunction_USIK_SessionsSubsystem_IsSIKActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_SessionsSubsystem_IsSIKActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SessionsSubsystem_IsSIKActive_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SessionsSubsystem_IsSIKActive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SessionsSubsystem_IsSIKActive_Statics::PropPointers) < 2048);
// ********** End Function IsSIKActive Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_SessionsSubsystem_IsSIKActive_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_SessionsSubsystem, nullptr, "IsSIKActive", 	Z_Construct_UFunction_USIK_SessionsSubsystem_IsSIKActive_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SessionsSubsystem_IsSIKActive_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_SessionsSubsystem_IsSIKActive_Statics::SIK_SessionsSubsystem_eventIsSIKActive_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SessionsSubsystem_IsSIKActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_SessionsSubsystem_IsSIKActive_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_SessionsSubsystem_IsSIKActive_Statics::SIK_SessionsSubsystem_eventIsSIKActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_SessionsSubsystem_IsSIKActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_SessionsSubsystem_IsSIKActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_SessionsSubsystem::execIsSIKActive)
{
	P_GET_OBJECT(UObject,Z_Param_Context);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_SessionsSubsystem::IsSIKActive(Z_Param_Context);
	P_NATIVE_END;
}
// ********** End Class USIK_SessionsSubsystem Function IsSIKActive ********************************

// ********** Begin Class USIK_SessionsSubsystem ***************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_SessionsSubsystem;
UClass* USIK_SessionsSubsystem::GetPrivateStaticClass()
{
	using TClass = USIK_SessionsSubsystem;
	if (!Z_Registration_Info_UClass_USIK_SessionsSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_SessionsSubsystem"),
			Z_Registration_Info_UClass_USIK_SessionsSubsystem.InnerSingleton,
			StaticRegisterNativesUSIK_SessionsSubsystem,
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
	return Z_Registration_Info_UClass_USIK_SessionsSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_SessionsSubsystem_NoRegister()
{
	return USIK_SessionsSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_SessionsSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Functions/Sessions/SIK_SessionsSubsystem.h" },
		{ "ModuleRelativePath", "Functions/Sessions/SIK_SessionsSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSessionUserInviteAccepted_MetaData[] = {
		{ "DisplayName", "On Session User Invite Accepted" },
		{ "ModuleRelativePath", "Functions/Sessions/SIK_SessionsSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_SessionsSubsystem constinit property declarations *******************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSessionUserInviteAccepted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USIK_SessionsSubsystem constinit property declarations *********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetAllJoinedSessionsAndLobbies"), .Pointer = &USIK_SessionsSubsystem::execGetAllJoinedSessionsAndLobbies },
		{ .NameUTF8 = UTF8TEXT("IsSIKActive"), .Pointer = &USIK_SessionsSubsystem::execIsSIKActive },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_SessionsSubsystem_GetAllJoinedSessionsAndLobbies, "GetAllJoinedSessionsAndLobbies" }, // 3683744477
		{ &Z_Construct_UFunction_USIK_SessionsSubsystem_IsSIKActive, "IsSIKActive" }, // 1910569867
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_SessionsSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_SessionsSubsystem_Statics

// ********** Begin Class USIK_SessionsSubsystem Property Definitions ******************************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_SessionsSubsystem_Statics::NewProp_OnSessionUserInviteAccepted = { "OnSessionUserInviteAccepted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_SessionsSubsystem, OnSessionUserInviteAccepted), Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_OnSessionUserInviteAccepted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSessionUserInviteAccepted_MetaData), NewProp_OnSessionUserInviteAccepted_MetaData) }; // 3596084019
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USIK_SessionsSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_SessionsSubsystem_Statics::NewProp_OnSessionUserInviteAccepted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_SessionsSubsystem_Statics::PropPointers) < 2048);
// ********** End Class USIK_SessionsSubsystem Property Definitions ********************************
UObject* (*const Z_Construct_UClass_USIK_SessionsSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_SessionsSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_SessionsSubsystem_Statics::ClassParams = {
	&USIK_SessionsSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USIK_SessionsSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USIK_SessionsSubsystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_SessionsSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_SessionsSubsystem_Statics::Class_MetaDataParams)
};
void USIK_SessionsSubsystem::StaticRegisterNativesUSIK_SessionsSubsystem()
{
	UClass* Class = USIK_SessionsSubsystem::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_SessionsSubsystem_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_SessionsSubsystem()
{
	if (!Z_Registration_Info_UClass_USIK_SessionsSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_SessionsSubsystem.OuterSingleton, Z_Construct_UClass_USIK_SessionsSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_SessionsSubsystem.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_SessionsSubsystem);
// ********** End Class USIK_SessionsSubsystem *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_SessionsSubsystem_h__Script_SteamIntegrationKit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSIK_CurrentSessionInfo::StaticStruct, Z_Construct_UScriptStruct_FSIK_CurrentSessionInfo_Statics::NewStructOps, TEXT("SIK_CurrentSessionInfo"),&Z_Registration_Info_UScriptStruct_FSIK_CurrentSessionInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSIK_CurrentSessionInfo), 2894684917U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_SessionsSubsystem, USIK_SessionsSubsystem::StaticClass, TEXT("USIK_SessionsSubsystem"), &Z_Registration_Info_UClass_USIK_SessionsSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_SessionsSubsystem), 2570075572U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_SessionsSubsystem_h__Script_SteamIntegrationKit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_SessionsSubsystem_h__Script_SteamIntegrationKit_1208862466{
	TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_SessionsSubsystem_h__Script_SteamIntegrationKit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_SessionsSubsystem_h__Script_SteamIntegrationKit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_SessionsSubsystem_h__Script_SteamIntegrationKit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_SessionsSubsystem_h__Script_SteamIntegrationKit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
