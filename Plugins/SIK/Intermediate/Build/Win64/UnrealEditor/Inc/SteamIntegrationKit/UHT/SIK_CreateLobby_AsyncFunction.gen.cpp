// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/Sessions/SIK_CreateLobby_AsyncFunction.h"
#include "SIK_SharedFile.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_CreateLobby_AsyncFunction() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_CreateLobby_AsyncFunction();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_CreateLobby_AsyncFunction_NoRegister();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_CreateLobby_Delegate__DelegateSignature();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_SteamId();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIKAttribute();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIKCreateLobbySettings();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FSIKCreateLobbySettings *******************************************
struct Z_Construct_UScriptStruct_FSIKCreateLobbySettings_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSIKCreateLobbySettings); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSIKCreateLobbySettings); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Functions/Sessions/SIK_CreateLobby_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsLanMatch_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Functions/Sessions/SIK_CreateLobby_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowInvites_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Functions/Sessions/SIK_CreateLobby_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfPrivateConnections_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Functions/Sessions/SIK_CreateLobby_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldAdvertise_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Functions/Sessions/SIK_CreateLobby_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowJoinInProgress_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Functions/Sessions/SIK_CreateLobby_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsePresence_MetaData[] = {
		{ "Category", "Steam Integration Kit" },
		{ "ModuleRelativePath", "Functions/Sessions/SIK_CreateLobby_AsyncFunction.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSIKCreateLobbySettings constinit property declarations ***********
	static void NewProp_bIsLanMatch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLanMatch;
	static void NewProp_bAllowInvites_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowInvites;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfPrivateConnections;
	static void NewProp_bShouldAdvertise_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldAdvertise;
	static void NewProp_bAllowJoinInProgress_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowJoinInProgress;
	static void NewProp_bUsePresence_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePresence;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSIKCreateLobbySettings constinit property declarations *************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSIKCreateLobbySettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSIKCreateLobbySettings_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSIKCreateLobbySettings;
class UScriptStruct* FSIKCreateLobbySettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSIKCreateLobbySettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSIKCreateLobbySettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSIKCreateLobbySettings, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("SIKCreateLobbySettings"));
	}
	return Z_Registration_Info_UScriptStruct_FSIKCreateLobbySettings.OuterSingleton;
	}

// ********** Begin ScriptStruct FSIKCreateLobbySettings Property Definitions **********************
void Z_Construct_UScriptStruct_FSIKCreateLobbySettings_Statics::NewProp_bIsLanMatch_SetBit(void* Obj)
{
	((FSIKCreateLobbySettings*)Obj)->bIsLanMatch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSIKCreateLobbySettings_Statics::NewProp_bIsLanMatch = { "bIsLanMatch", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSIKCreateLobbySettings), &Z_Construct_UScriptStruct_FSIKCreateLobbySettings_Statics::NewProp_bIsLanMatch_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsLanMatch_MetaData), NewProp_bIsLanMatch_MetaData) };
void Z_Construct_UScriptStruct_FSIKCreateLobbySettings_Statics::NewProp_bAllowInvites_SetBit(void* Obj)
{
	((FSIKCreateLobbySettings*)Obj)->bAllowInvites = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSIKCreateLobbySettings_Statics::NewProp_bAllowInvites = { "bAllowInvites", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSIKCreateLobbySettings), &Z_Construct_UScriptStruct_FSIKCreateLobbySettings_Statics::NewProp_bAllowInvites_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowInvites_MetaData), NewProp_bAllowInvites_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSIKCreateLobbySettings_Statics::NewProp_NumberOfPrivateConnections = { "NumberOfPrivateConnections", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIKCreateLobbySettings, NumberOfPrivateConnections), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberOfPrivateConnections_MetaData), NewProp_NumberOfPrivateConnections_MetaData) };
void Z_Construct_UScriptStruct_FSIKCreateLobbySettings_Statics::NewProp_bShouldAdvertise_SetBit(void* Obj)
{
	((FSIKCreateLobbySettings*)Obj)->bShouldAdvertise = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSIKCreateLobbySettings_Statics::NewProp_bShouldAdvertise = { "bShouldAdvertise", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSIKCreateLobbySettings), &Z_Construct_UScriptStruct_FSIKCreateLobbySettings_Statics::NewProp_bShouldAdvertise_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldAdvertise_MetaData), NewProp_bShouldAdvertise_MetaData) };
void Z_Construct_UScriptStruct_FSIKCreateLobbySettings_Statics::NewProp_bAllowJoinInProgress_SetBit(void* Obj)
{
	((FSIKCreateLobbySettings*)Obj)->bAllowJoinInProgress = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSIKCreateLobbySettings_Statics::NewProp_bAllowJoinInProgress = { "bAllowJoinInProgress", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSIKCreateLobbySettings), &Z_Construct_UScriptStruct_FSIKCreateLobbySettings_Statics::NewProp_bAllowJoinInProgress_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowJoinInProgress_MetaData), NewProp_bAllowJoinInProgress_MetaData) };
void Z_Construct_UScriptStruct_FSIKCreateLobbySettings_Statics::NewProp_bUsePresence_SetBit(void* Obj)
{
	((FSIKCreateLobbySettings*)Obj)->bUsePresence = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSIKCreateLobbySettings_Statics::NewProp_bUsePresence = { "bUsePresence", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSIKCreateLobbySettings), &Z_Construct_UScriptStruct_FSIKCreateLobbySettings_Statics::NewProp_bUsePresence_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsePresence_MetaData), NewProp_bUsePresence_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSIKCreateLobbySettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIKCreateLobbySettings_Statics::NewProp_bIsLanMatch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIKCreateLobbySettings_Statics::NewProp_bAllowInvites,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIKCreateLobbySettings_Statics::NewProp_NumberOfPrivateConnections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIKCreateLobbySettings_Statics::NewProp_bShouldAdvertise,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIKCreateLobbySettings_Statics::NewProp_bAllowJoinInProgress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIKCreateLobbySettings_Statics::NewProp_bUsePresence,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIKCreateLobbySettings_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSIKCreateLobbySettings Property Definitions ************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSIKCreateLobbySettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	&NewStructOps,
	"SIKCreateLobbySettings",
	Z_Construct_UScriptStruct_FSIKCreateLobbySettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIKCreateLobbySettings_Statics::PropPointers),
	sizeof(FSIKCreateLobbySettings),
	alignof(FSIKCreateLobbySettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIKCreateLobbySettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSIKCreateLobbySettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSIKCreateLobbySettings()
{
	if (!Z_Registration_Info_UScriptStruct_FSIKCreateLobbySettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSIKCreateLobbySettings.InnerSingleton, Z_Construct_UScriptStruct_FSIKCreateLobbySettings_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSIKCreateLobbySettings.InnerSingleton);
}
// ********** End ScriptStruct FSIKCreateLobbySettings *********************************************

// ********** Begin Delegate FSIK_CreateLobby_Delegate *********************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_CreateLobby_Delegate__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventSIK_CreateLobby_Delegate_Parms
	{
		FSIK_SteamId LobbyID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/Sessions/SIK_CreateLobby_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LobbyID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FSIK_CreateLobby_Delegate constinit property declarations *************
	static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FSIK_CreateLobby_Delegate constinit property declarations ***************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FSIK_CreateLobby_Delegate Property Definitions ************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_CreateLobby_Delegate__DelegateSignature_Statics::NewProp_LobbyID = { "LobbyID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventSIK_CreateLobby_Delegate_Parms, LobbyID), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LobbyID_MetaData), NewProp_LobbyID_MetaData) }; // 3413883574
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_CreateLobby_Delegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_CreateLobby_Delegate__DelegateSignature_Statics::NewProp_LobbyID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_CreateLobby_Delegate__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FSIK_CreateLobby_Delegate Property Definitions **************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_CreateLobby_Delegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "SIK_CreateLobby_Delegate__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_CreateLobby_Delegate__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_CreateLobby_Delegate__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_CreateLobby_Delegate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventSIK_CreateLobby_Delegate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_CreateLobby_Delegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_CreateLobby_Delegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_CreateLobby_Delegate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventSIK_CreateLobby_Delegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_CreateLobby_Delegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_CreateLobby_Delegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSIK_CreateLobby_Delegate_DelegateWrapper(const FMulticastScriptDelegate& SIK_CreateLobby_Delegate, FSIK_SteamId const& LobbyID)
{
	struct _Script_SteamIntegrationKit_eventSIK_CreateLobby_Delegate_Parms
	{
		FSIK_SteamId LobbyID;
	};
	_Script_SteamIntegrationKit_eventSIK_CreateLobby_Delegate_Parms Parms;
	Parms.LobbyID=LobbyID;
	SIK_CreateLobby_Delegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FSIK_CreateLobby_Delegate ***********************************************

// ********** Begin Class USIK_CreateLobby_AsyncFunction Function CreateSIKLobby *******************
struct Z_Construct_UFunction_USIK_CreateLobby_AsyncFunction_CreateSIKLobby_Statics
{
	struct SIK_CreateLobby_AsyncFunction_eventCreateSIKLobby_Parms
	{
		TMap<FString,FSIKAttribute> SessionSettings;
		FName SessionName;
		int32 NumberOfPublicConnections;
		FSIKCreateLobbySettings ExtraSettings;
		USIK_CreateLobby_AsyncFunction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "SessionSettings" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit || Game Functions || Sessions" },
		{ "Comment", "/*\n\x09This function is used to create a lobby with the given settings and returns a result delegate which can be used to determine if the lobby was created successfully or not.\n\n\x09*/" },
		{ "CPP_Default_ExtraSettings", "()" },
		{ "CPP_Default_NumberOfPublicConnections", "0" },
		{ "CPP_Default_SessionName", "GameSession" },
		{ "DisplayName", "Create Listen Server Session" },
		{ "ModuleRelativePath", "Functions/Sessions/SIK_CreateLobby_AsyncFunction.h" },
		{ "ToolTip", "This function is used to create a lobby with the given settings and returns a result delegate which can be used to determine if the lobby was created successfully or not." },
	};
#endif // WITH_METADATA

// ********** Begin Function CreateSIKLobby constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SessionSettings_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionSettings_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SessionSettings;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SessionName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfPublicConnections;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExtraSettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CreateSIKLobby constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CreateSIKLobby Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_CreateLobby_AsyncFunction_CreateSIKLobby_Statics::NewProp_SessionSettings_ValueProp = { "SessionSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FSIKAttribute, METADATA_PARAMS(0, nullptr) }; // 1564803091
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_CreateLobby_AsyncFunction_CreateSIKLobby_Statics::NewProp_SessionSettings_Key_KeyProp = { "SessionSettings_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_USIK_CreateLobby_AsyncFunction_CreateSIKLobby_Statics::NewProp_SessionSettings = { "SessionSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_CreateLobby_AsyncFunction_eventCreateSIKLobby_Parms, SessionSettings), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1564803091
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USIK_CreateLobby_AsyncFunction_CreateSIKLobby_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_CreateLobby_AsyncFunction_eventCreateSIKLobby_Parms, SessionName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_CreateLobby_AsyncFunction_CreateSIKLobby_Statics::NewProp_NumberOfPublicConnections = { "NumberOfPublicConnections", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_CreateLobby_AsyncFunction_eventCreateSIKLobby_Parms, NumberOfPublicConnections), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_CreateLobby_AsyncFunction_CreateSIKLobby_Statics::NewProp_ExtraSettings = { "ExtraSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_CreateLobby_AsyncFunction_eventCreateSIKLobby_Parms, ExtraSettings), Z_Construct_UScriptStruct_FSIKCreateLobbySettings, METADATA_PARAMS(0, nullptr) }; // 1594970500
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_CreateLobby_AsyncFunction_CreateSIKLobby_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_CreateLobby_AsyncFunction_eventCreateSIKLobby_Parms, ReturnValue), Z_Construct_UClass_USIK_CreateLobby_AsyncFunction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_CreateLobby_AsyncFunction_CreateSIKLobby_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_CreateLobby_AsyncFunction_CreateSIKLobby_Statics::NewProp_SessionSettings_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_CreateLobby_AsyncFunction_CreateSIKLobby_Statics::NewProp_SessionSettings_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_CreateLobby_AsyncFunction_CreateSIKLobby_Statics::NewProp_SessionSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_CreateLobby_AsyncFunction_CreateSIKLobby_Statics::NewProp_SessionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_CreateLobby_AsyncFunction_CreateSIKLobby_Statics::NewProp_NumberOfPublicConnections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_CreateLobby_AsyncFunction_CreateSIKLobby_Statics::NewProp_ExtraSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_CreateLobby_AsyncFunction_CreateSIKLobby_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_CreateLobby_AsyncFunction_CreateSIKLobby_Statics::PropPointers) < 2048);
// ********** End Function CreateSIKLobby Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_CreateLobby_AsyncFunction_CreateSIKLobby_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_CreateLobby_AsyncFunction, nullptr, "CreateSIKLobby", 	Z_Construct_UFunction_USIK_CreateLobby_AsyncFunction_CreateSIKLobby_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_CreateLobby_AsyncFunction_CreateSIKLobby_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_CreateLobby_AsyncFunction_CreateSIKLobby_Statics::SIK_CreateLobby_AsyncFunction_eventCreateSIKLobby_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_CreateLobby_AsyncFunction_CreateSIKLobby_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_CreateLobby_AsyncFunction_CreateSIKLobby_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_CreateLobby_AsyncFunction_CreateSIKLobby_Statics::SIK_CreateLobby_AsyncFunction_eventCreateSIKLobby_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_CreateLobby_AsyncFunction_CreateSIKLobby()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_CreateLobby_AsyncFunction_CreateSIKLobby_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_CreateLobby_AsyncFunction::execCreateSIKLobby)
{
	P_GET_TMAP(FString,FSIKAttribute,Z_Param_SessionSettings);
	P_GET_PROPERTY(FNameProperty,Z_Param_SessionName);
	P_GET_PROPERTY(FIntProperty,Z_Param_NumberOfPublicConnections);
	P_GET_STRUCT(FSIKCreateLobbySettings,Z_Param_ExtraSettings);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_CreateLobby_AsyncFunction**)Z_Param__Result=USIK_CreateLobby_AsyncFunction::CreateSIKLobby(Z_Param_SessionSettings,Z_Param_SessionName,Z_Param_NumberOfPublicConnections,Z_Param_ExtraSettings);
	P_NATIVE_END;
}
// ********** End Class USIK_CreateLobby_AsyncFunction Function CreateSIKLobby *********************

// ********** Begin Class USIK_CreateLobby_AsyncFunction *******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_CreateLobby_AsyncFunction;
UClass* USIK_CreateLobby_AsyncFunction::GetPrivateStaticClass()
{
	using TClass = USIK_CreateLobby_AsyncFunction;
	if (!Z_Registration_Info_UClass_USIK_CreateLobby_AsyncFunction.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_CreateLobby_AsyncFunction"),
			Z_Registration_Info_UClass_USIK_CreateLobby_AsyncFunction.InnerSingleton,
			StaticRegisterNativesUSIK_CreateLobby_AsyncFunction,
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
	return Z_Registration_Info_UClass_USIK_CreateLobby_AsyncFunction.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_CreateLobby_AsyncFunction_NoRegister()
{
	return USIK_CreateLobby_AsyncFunction::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_CreateLobby_AsyncFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Functions/Sessions/SIK_CreateLobby_AsyncFunction.h" },
		{ "ModuleRelativePath", "Functions/Sessions/SIK_CreateLobby_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "DisplayName", "Success" },
		{ "ModuleRelativePath", "Functions/Sessions/SIK_CreateLobby_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFail_MetaData[] = {
		{ "DisplayName", "Failure" },
		{ "ModuleRelativePath", "Functions/Sessions/SIK_CreateLobby_AsyncFunction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_CreateLobby_AsyncFunction constinit property declarations ***********
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFail;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USIK_CreateLobby_AsyncFunction constinit property declarations *************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CreateSIKLobby"), .Pointer = &USIK_CreateLobby_AsyncFunction::execCreateSIKLobby },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_CreateLobby_AsyncFunction_CreateSIKLobby, "CreateSIKLobby" }, // 759119157
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_CreateLobby_AsyncFunction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_CreateLobby_AsyncFunction_Statics

// ********** Begin Class USIK_CreateLobby_AsyncFunction Property Definitions **********************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_CreateLobby_AsyncFunction_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_CreateLobby_AsyncFunction, OnSuccess), Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_CreateLobby_Delegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 490730144
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_CreateLobby_AsyncFunction_Statics::NewProp_OnFail = { "OnFail", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_CreateLobby_AsyncFunction, OnFail), Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_CreateLobby_Delegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFail_MetaData), NewProp_OnFail_MetaData) }; // 490730144
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USIK_CreateLobby_AsyncFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_CreateLobby_AsyncFunction_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_CreateLobby_AsyncFunction_Statics::NewProp_OnFail,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_CreateLobby_AsyncFunction_Statics::PropPointers) < 2048);
// ********** End Class USIK_CreateLobby_AsyncFunction Property Definitions ************************
UObject* (*const Z_Construct_UClass_USIK_CreateLobby_AsyncFunction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_CreateLobby_AsyncFunction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_CreateLobby_AsyncFunction_Statics::ClassParams = {
	&USIK_CreateLobby_AsyncFunction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USIK_CreateLobby_AsyncFunction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USIK_CreateLobby_AsyncFunction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_CreateLobby_AsyncFunction_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_CreateLobby_AsyncFunction_Statics::Class_MetaDataParams)
};
void USIK_CreateLobby_AsyncFunction::StaticRegisterNativesUSIK_CreateLobby_AsyncFunction()
{
	UClass* Class = USIK_CreateLobby_AsyncFunction::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_CreateLobby_AsyncFunction_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_CreateLobby_AsyncFunction()
{
	if (!Z_Registration_Info_UClass_USIK_CreateLobby_AsyncFunction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_CreateLobby_AsyncFunction.OuterSingleton, Z_Construct_UClass_USIK_CreateLobby_AsyncFunction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_CreateLobby_AsyncFunction.OuterSingleton;
}
USIK_CreateLobby_AsyncFunction::USIK_CreateLobby_AsyncFunction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_CreateLobby_AsyncFunction);
USIK_CreateLobby_AsyncFunction::~USIK_CreateLobby_AsyncFunction() {}
// ********** End Class USIK_CreateLobby_AsyncFunction *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_CreateLobby_AsyncFunction_h__Script_SteamIntegrationKit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSIKCreateLobbySettings::StaticStruct, Z_Construct_UScriptStruct_FSIKCreateLobbySettings_Statics::NewStructOps, TEXT("SIKCreateLobbySettings"),&Z_Registration_Info_UScriptStruct_FSIKCreateLobbySettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSIKCreateLobbySettings), 1594970500U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_CreateLobby_AsyncFunction, USIK_CreateLobby_AsyncFunction::StaticClass, TEXT("USIK_CreateLobby_AsyncFunction"), &Z_Registration_Info_UClass_USIK_CreateLobby_AsyncFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_CreateLobby_AsyncFunction), 2076121918U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_CreateLobby_AsyncFunction_h__Script_SteamIntegrationKit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_CreateLobby_AsyncFunction_h__Script_SteamIntegrationKit_3498114977{
	TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_CreateLobby_AsyncFunction_h__Script_SteamIntegrationKit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_CreateLobby_AsyncFunction_h__Script_SteamIntegrationKit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_CreateLobby_AsyncFunction_h__Script_SteamIntegrationKit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_CreateLobby_AsyncFunction_h__Script_SteamIntegrationKit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
