// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/Utils/SIK_UtilsLibrary.h"
#include "SIK_SharedFile.h"
#include "UObject/Class.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_UtilsLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_USaveGame_NoRegister();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_UtilsLibrary();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_UtilsLibrary_NoRegister();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_EFloatingGamepadTextInputMode();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_EGamepadTextInputLineMode();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_EGamepadTextInputMode();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_NotificationPosition();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_TextFilteringContext();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_AppId();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_SteamId();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USIK_UtilsLibrary Function BuildJSONObject *******************************
struct Z_Construct_UFunction_USIK_UtilsLibrary_BuildJSONObject_Statics
{
	struct SIK_UtilsLibrary_eventBuildJSONObject_Parms
	{
		TMap<FString,FString> KeyValuePairs;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || Helper Functions || JSON Serialization" },
		{ "DisplayName", "Build JSON Object" },
		{ "Keywords", "BuildJSONObject" },
		{ "ModuleRelativePath", "Functions/Utils/SIK_UtilsLibrary.h" },
		{ "ToolTip", "Builds a simple JSON object from key-value pairs" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyValuePairs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function BuildJSONObject constinit property declarations ***********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_KeyValuePairs_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_KeyValuePairs_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_KeyValuePairs;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BuildJSONObject constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BuildJSONObject Property Definitions **********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_BuildJSONObject_Statics::NewProp_KeyValuePairs_ValueProp = { "KeyValuePairs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_BuildJSONObject_Statics::NewProp_KeyValuePairs_Key_KeyProp = { "KeyValuePairs_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_BuildJSONObject_Statics::NewProp_KeyValuePairs = { "KeyValuePairs", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventBuildJSONObject_Parms, KeyValuePairs), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyValuePairs_MetaData), NewProp_KeyValuePairs_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_BuildJSONObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventBuildJSONObject_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UtilsLibrary_BuildJSONObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_BuildJSONObject_Statics::NewProp_KeyValuePairs_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_BuildJSONObject_Statics::NewProp_KeyValuePairs_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_BuildJSONObject_Statics::NewProp_KeyValuePairs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_BuildJSONObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_BuildJSONObject_Statics::PropPointers) < 2048);
// ********** End Function BuildJSONObject Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UtilsLibrary_BuildJSONObject_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_UtilsLibrary, nullptr, "BuildJSONObject", 	Z_Construct_UFunction_USIK_UtilsLibrary_BuildJSONObject_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_BuildJSONObject_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_BuildJSONObject_Statics::SIK_UtilsLibrary_eventBuildJSONObject_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_BuildJSONObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UtilsLibrary_BuildJSONObject_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_BuildJSONObject_Statics::SIK_UtilsLibrary_eventBuildJSONObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UtilsLibrary_BuildJSONObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UtilsLibrary_BuildJSONObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UtilsLibrary::execBuildJSONObject)
{
	P_GET_TMAP_REF(FString,FString,Z_Param_Out_KeyValuePairs);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USIK_UtilsLibrary::BuildJSONObject(Z_Param_Out_KeyValuePairs);
	P_NATIVE_END;
}
// ********** End Class USIK_UtilsLibrary Function BuildJSONObject *********************************

// ********** Begin Class USIK_UtilsLibrary Function ByteArrayToSaveGameObject *********************
struct Z_Construct_UFunction_USIK_UtilsLibrary_ByteArrayToSaveGameObject_Statics
{
	struct SIK_UtilsLibrary_eventByteArrayToSaveGameObject_Parms
	{
		TArray<uint8> Data;
		TSubclassOf<USaveGame> SaveGameClass;
		USaveGame* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || Helper Functions || Utils" },
		{ "DisplayName", "Byte Array to Save Game Object" },
		{ "Keywords", "ByteArrayToSaveGame" },
		{ "ModuleRelativePath", "Functions/Utils/SIK_UtilsLibrary.h" },
		{ "ToolTip", "Converts Byte Array back to Save Game Object from Steam Cloud data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ByteArrayToSaveGameObject constinit property declarations *************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
	static const UECodeGen_Private::FClassPropertyParams NewProp_SaveGameClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ByteArrayToSaveGameObject constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ByteArrayToSaveGameObject Property Definitions ************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_ByteArrayToSaveGameObject_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_ByteArrayToSaveGameObject_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventByteArrayToSaveGameObject_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_ByteArrayToSaveGameObject_Statics::NewProp_SaveGameClass = { "SaveGameClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventByteArrayToSaveGameObject_Parms, SaveGameClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_USaveGame_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_ByteArrayToSaveGameObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventByteArrayToSaveGameObject_Parms, ReturnValue), Z_Construct_UClass_USaveGame_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UtilsLibrary_ByteArrayToSaveGameObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_ByteArrayToSaveGameObject_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_ByteArrayToSaveGameObject_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_ByteArrayToSaveGameObject_Statics::NewProp_SaveGameClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_ByteArrayToSaveGameObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_ByteArrayToSaveGameObject_Statics::PropPointers) < 2048);
// ********** End Function ByteArrayToSaveGameObject Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UtilsLibrary_ByteArrayToSaveGameObject_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_UtilsLibrary, nullptr, "ByteArrayToSaveGameObject", 	Z_Construct_UFunction_USIK_UtilsLibrary_ByteArrayToSaveGameObject_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_ByteArrayToSaveGameObject_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_ByteArrayToSaveGameObject_Statics::SIK_UtilsLibrary_eventByteArrayToSaveGameObject_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_ByteArrayToSaveGameObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UtilsLibrary_ByteArrayToSaveGameObject_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_ByteArrayToSaveGameObject_Statics::SIK_UtilsLibrary_eventByteArrayToSaveGameObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UtilsLibrary_ByteArrayToSaveGameObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UtilsLibrary_ByteArrayToSaveGameObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UtilsLibrary::execByteArrayToSaveGameObject)
{
	P_GET_TARRAY_REF(uint8,Z_Param_Out_Data);
	P_GET_OBJECT(UClass,Z_Param_SaveGameClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USaveGame**)Z_Param__Result=USIK_UtilsLibrary::ByteArrayToSaveGameObject(Z_Param_Out_Data,Z_Param_SaveGameClass);
	P_NATIVE_END;
}
// ********** End Class USIK_UtilsLibrary Function ByteArrayToSaveGameObject ***********************

// ********** Begin Class USIK_UtilsLibrary Function CheckForSteamLobbyInvite **********************
struct Z_Construct_UFunction_USIK_UtilsLibrary_CheckForSteamLobbyInvite_Statics
{
	struct SIK_UtilsLibrary_eventCheckForSteamLobbyInvite_Parms
	{
		FSIK_SteamId OutSteamLobbyId;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || Helper Functions || Steam Lobby" },
		{ "DisplayName", "Check For Steam Lobby Invite" },
		{ "Keywords", "CheckSteamLobbyInvite" },
		{ "ModuleRelativePath", "Functions/Utils/SIK_UtilsLibrary.h" },
		{ "ToolTip", "Parses +connect_lobby argument from command line and returns Steam ID" },
	};
#endif // WITH_METADATA

// ********** Begin Function CheckForSteamLobbyInvite constinit property declarations **************
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutSteamLobbyId;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CheckForSteamLobbyInvite constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CheckForSteamLobbyInvite Property Definitions *************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_CheckForSteamLobbyInvite_Statics::NewProp_OutSteamLobbyId = { "OutSteamLobbyId", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventCheckForSteamLobbyInvite_Parms, OutSteamLobbyId), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
void Z_Construct_UFunction_USIK_UtilsLibrary_CheckForSteamLobbyInvite_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UtilsLibrary_eventCheckForSteamLobbyInvite_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_CheckForSteamLobbyInvite_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UtilsLibrary_eventCheckForSteamLobbyInvite_Parms), &Z_Construct_UFunction_USIK_UtilsLibrary_CheckForSteamLobbyInvite_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UtilsLibrary_CheckForSteamLobbyInvite_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_CheckForSteamLobbyInvite_Statics::NewProp_OutSteamLobbyId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_CheckForSteamLobbyInvite_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_CheckForSteamLobbyInvite_Statics::PropPointers) < 2048);
// ********** End Function CheckForSteamLobbyInvite Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UtilsLibrary_CheckForSteamLobbyInvite_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_UtilsLibrary, nullptr, "CheckForSteamLobbyInvite", 	Z_Construct_UFunction_USIK_UtilsLibrary_CheckForSteamLobbyInvite_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_CheckForSteamLobbyInvite_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_CheckForSteamLobbyInvite_Statics::SIK_UtilsLibrary_eventCheckForSteamLobbyInvite_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_CheckForSteamLobbyInvite_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UtilsLibrary_CheckForSteamLobbyInvite_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_CheckForSteamLobbyInvite_Statics::SIK_UtilsLibrary_eventCheckForSteamLobbyInvite_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UtilsLibrary_CheckForSteamLobbyInvite()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UtilsLibrary_CheckForSteamLobbyInvite_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UtilsLibrary::execCheckForSteamLobbyInvite)
{
	P_GET_STRUCT_REF(FSIK_SteamId,Z_Param_Out_OutSteamLobbyId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UtilsLibrary::CheckForSteamLobbyInvite(Z_Param_Out_OutSteamLobbyId);
	P_NATIVE_END;
}
// ********** End Class USIK_UtilsLibrary Function CheckForSteamLobbyInvite ************************

// ********** Begin Class USIK_UtilsLibrary Function DeserializeJSONToStruct ***********************
struct Z_Construct_UFunction_USIK_UtilsLibrary_DeserializeJSONToStruct_Statics
{
	struct SIK_UtilsLibrary_eventDeserializeJSONToStruct_Parms
	{
		FString InJsonString;
		int32 OutStruct;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || Helper Functions || JSON Serialization" },
		{ "CustomStructureParam", "OutStruct" },
		{ "CustomThunk", "true" },
		{ "DisplayName", "Deserialize JSON To Struct" },
		{ "Keywords", "DeserializeJSONToStruct" },
		{ "ModuleRelativePath", "Functions/Utils/SIK_UtilsLibrary.h" },
		{ "ToolTip", "Converts JSON string back to any struct" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InJsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function DeserializeJSONToStruct constinit property declarations ***************
	static const UECodeGen_Private::FStrPropertyParams NewProp_InJsonString;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutStruct;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DeserializeJSONToStruct constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DeserializeJSONToStruct Property Definitions **************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_DeserializeJSONToStruct_Statics::NewProp_InJsonString = { "InJsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventDeserializeJSONToStruct_Parms, InJsonString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InJsonString_MetaData), NewProp_InJsonString_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_DeserializeJSONToStruct_Statics::NewProp_OutStruct = { "OutStruct", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventDeserializeJSONToStruct_Parms, OutStruct), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_UtilsLibrary_DeserializeJSONToStruct_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UtilsLibrary_eventDeserializeJSONToStruct_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_DeserializeJSONToStruct_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UtilsLibrary_eventDeserializeJSONToStruct_Parms), &Z_Construct_UFunction_USIK_UtilsLibrary_DeserializeJSONToStruct_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UtilsLibrary_DeserializeJSONToStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_DeserializeJSONToStruct_Statics::NewProp_InJsonString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_DeserializeJSONToStruct_Statics::NewProp_OutStruct,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_DeserializeJSONToStruct_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_DeserializeJSONToStruct_Statics::PropPointers) < 2048);
// ********** End Function DeserializeJSONToStruct Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UtilsLibrary_DeserializeJSONToStruct_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_UtilsLibrary, nullptr, "DeserializeJSONToStruct", 	Z_Construct_UFunction_USIK_UtilsLibrary_DeserializeJSONToStruct_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_DeserializeJSONToStruct_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_DeserializeJSONToStruct_Statics::SIK_UtilsLibrary_eventDeserializeJSONToStruct_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_DeserializeJSONToStruct_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UtilsLibrary_DeserializeJSONToStruct_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_DeserializeJSONToStruct_Statics::SIK_UtilsLibrary_eventDeserializeJSONToStruct_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UtilsLibrary_DeserializeJSONToStruct()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UtilsLibrary_DeserializeJSONToStruct_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class USIK_UtilsLibrary Function DeserializeJSONToStruct *************************

// ********** Begin Class USIK_UtilsLibrary Function DeserializeJSONToStructArray ******************
struct Z_Construct_UFunction_USIK_UtilsLibrary_DeserializeJSONToStructArray_Statics
{
	struct SIK_UtilsLibrary_eventDeserializeJSONToStructArray_Parms
	{
		FString InJsonString;
		TArray<int32> OutStructArray;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || Helper Functions || JSON Serialization" },
		{ "CustomThunk", "true" },
		{ "DisplayName", "Deserialize JSON To Struct Array" },
		{ "Keywords", "DeserializeJSONToStructArray" },
		{ "ModuleRelativePath", "Functions/Utils/SIK_UtilsLibrary.h" },
		{ "SetParam", "OutStructArray" },
		{ "ToolTip", "Converts JSON string back to array of structs" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InJsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function DeserializeJSONToStructArray constinit property declarations **********
	static const UECodeGen_Private::FStrPropertyParams NewProp_InJsonString;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutStructArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutStructArray;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DeserializeJSONToStructArray constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DeserializeJSONToStructArray Property Definitions *********************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_DeserializeJSONToStructArray_Statics::NewProp_InJsonString = { "InJsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventDeserializeJSONToStructArray_Parms, InJsonString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InJsonString_MetaData), NewProp_InJsonString_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_DeserializeJSONToStructArray_Statics::NewProp_OutStructArray_Inner = { "OutStructArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_DeserializeJSONToStructArray_Statics::NewProp_OutStructArray = { "OutStructArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventDeserializeJSONToStructArray_Parms, OutStructArray), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_UtilsLibrary_DeserializeJSONToStructArray_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UtilsLibrary_eventDeserializeJSONToStructArray_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_DeserializeJSONToStructArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UtilsLibrary_eventDeserializeJSONToStructArray_Parms), &Z_Construct_UFunction_USIK_UtilsLibrary_DeserializeJSONToStructArray_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UtilsLibrary_DeserializeJSONToStructArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_DeserializeJSONToStructArray_Statics::NewProp_InJsonString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_DeserializeJSONToStructArray_Statics::NewProp_OutStructArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_DeserializeJSONToStructArray_Statics::NewProp_OutStructArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_DeserializeJSONToStructArray_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_DeserializeJSONToStructArray_Statics::PropPointers) < 2048);
// ********** End Function DeserializeJSONToStructArray Property Definitions ***********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UtilsLibrary_DeserializeJSONToStructArray_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_UtilsLibrary, nullptr, "DeserializeJSONToStructArray", 	Z_Construct_UFunction_USIK_UtilsLibrary_DeserializeJSONToStructArray_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_DeserializeJSONToStructArray_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_DeserializeJSONToStructArray_Statics::SIK_UtilsLibrary_eventDeserializeJSONToStructArray_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_DeserializeJSONToStructArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UtilsLibrary_DeserializeJSONToStructArray_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_DeserializeJSONToStructArray_Statics::SIK_UtilsLibrary_eventDeserializeJSONToStructArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UtilsLibrary_DeserializeJSONToStructArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UtilsLibrary_DeserializeJSONToStructArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class USIK_UtilsLibrary Function DeserializeJSONToStructArray ********************

// ********** Begin Class USIK_UtilsLibrary Function DoesFileExist *********************************
struct Z_Construct_UFunction_USIK_UtilsLibrary_DoesFileExist_Statics
{
	struct SIK_UtilsLibrary_eventDoesFileExist_Parms
	{
		FString FilePath;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || Helper Functions || File I/O" },
		{ "DisplayName", "Does File Exist" },
		{ "Keywords", "DoesFileExist" },
		{ "ModuleRelativePath", "Functions/Utils/SIK_UtilsLibrary.h" },
		{ "ToolTip", "Checks if file exists on disk" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function DoesFileExist constinit property declarations *************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DoesFileExist constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DoesFileExist Property Definitions ************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_DoesFileExist_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventDoesFileExist_Parms, FilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilePath_MetaData), NewProp_FilePath_MetaData) };
void Z_Construct_UFunction_USIK_UtilsLibrary_DoesFileExist_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UtilsLibrary_eventDoesFileExist_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_DoesFileExist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UtilsLibrary_eventDoesFileExist_Parms), &Z_Construct_UFunction_USIK_UtilsLibrary_DoesFileExist_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UtilsLibrary_DoesFileExist_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_DoesFileExist_Statics::NewProp_FilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_DoesFileExist_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_DoesFileExist_Statics::PropPointers) < 2048);
// ********** End Function DoesFileExist Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UtilsLibrary_DoesFileExist_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_UtilsLibrary, nullptr, "DoesFileExist", 	Z_Construct_UFunction_USIK_UtilsLibrary_DoesFileExist_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_DoesFileExist_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_DoesFileExist_Statics::SIK_UtilsLibrary_eventDoesFileExist_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_DoesFileExist_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UtilsLibrary_DoesFileExist_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_DoesFileExist_Statics::SIK_UtilsLibrary_eventDoesFileExist_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UtilsLibrary_DoesFileExist()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UtilsLibrary_DoesFileExist_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UtilsLibrary::execDoesFileExist)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UtilsLibrary::DoesFileExist(Z_Param_FilePath);
	P_NATIVE_END;
}
// ********** End Class USIK_UtilsLibrary Function DoesFileExist ***********************************

// ********** Begin Class USIK_UtilsLibrary Function EscapeJSONString ******************************
struct Z_Construct_UFunction_USIK_UtilsLibrary_EscapeJSONString_Statics
{
	struct SIK_UtilsLibrary_eventEscapeJSONString_Parms
	{
		FString InputString;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || Helper Functions || JSON Serialization" },
		{ "DisplayName", "Escape JSON String" },
		{ "Keywords", "EscapeJSONString" },
		{ "ModuleRelativePath", "Functions/Utils/SIK_UtilsLibrary.h" },
		{ "ToolTip", "Properly escapes special characters for JSON" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function EscapeJSONString constinit property declarations **********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_InputString;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EscapeJSONString constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EscapeJSONString Property Definitions *********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_EscapeJSONString_Statics::NewProp_InputString = { "InputString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventEscapeJSONString_Parms, InputString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputString_MetaData), NewProp_InputString_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_EscapeJSONString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventEscapeJSONString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UtilsLibrary_EscapeJSONString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_EscapeJSONString_Statics::NewProp_InputString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_EscapeJSONString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_EscapeJSONString_Statics::PropPointers) < 2048);
// ********** End Function EscapeJSONString Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UtilsLibrary_EscapeJSONString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_UtilsLibrary, nullptr, "EscapeJSONString", 	Z_Construct_UFunction_USIK_UtilsLibrary_EscapeJSONString_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_EscapeJSONString_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_EscapeJSONString_Statics::SIK_UtilsLibrary_eventEscapeJSONString_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_EscapeJSONString_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UtilsLibrary_EscapeJSONString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_EscapeJSONString_Statics::SIK_UtilsLibrary_eventEscapeJSONString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UtilsLibrary_EscapeJSONString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UtilsLibrary_EscapeJSONString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UtilsLibrary::execEscapeJSONString)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InputString);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USIK_UtilsLibrary::EscapeJSONString(Z_Param_InputString);
	P_NATIVE_END;
}
// ********** End Class USIK_UtilsLibrary Function EscapeJSONString ********************************

// ********** Begin Class USIK_UtilsLibrary Function FilterText ************************************
struct Z_Construct_UFunction_USIK_UtilsLibrary_FilterText_Statics
{
	struct SIK_UtilsLibrary_eventFilterText_Parms
	{
		TEnumAsByte<ESIK_TextFilteringContext> Context;
		FSIK_SteamId SourceSteamId;
		FString InputMessage;
		FString OutFilteredText;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Utils" },
		{ "DisplayName", "Filter Text" },
		{ "Keywords", "FilterText" },
		{ "ModuleRelativePath", "Functions/Utils/SIK_UtilsLibrary.h" },
		{ "ToolTip", "Filters text using Steam's content filtering system for Workshop content, chat, and names" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function FilterText constinit property declarations ****************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Context;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceSteamId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InputMessage;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutFilteredText;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FilterText constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FilterText Property Definitions ***************************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_FilterText_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventFilterText_Parms, Context), Z_Construct_UEnum_SteamIntegrationKit_ESIK_TextFilteringContext, METADATA_PARAMS(0, nullptr) }; // 1260653726
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_FilterText_Statics::NewProp_SourceSteamId = { "SourceSteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventFilterText_Parms, SourceSteamId), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_FilterText_Statics::NewProp_InputMessage = { "InputMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventFilterText_Parms, InputMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMessage_MetaData), NewProp_InputMessage_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_FilterText_Statics::NewProp_OutFilteredText = { "OutFilteredText", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventFilterText_Parms, OutFilteredText), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_FilterText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventFilterText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UtilsLibrary_FilterText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_FilterText_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_FilterText_Statics::NewProp_SourceSteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_FilterText_Statics::NewProp_InputMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_FilterText_Statics::NewProp_OutFilteredText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_FilterText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_FilterText_Statics::PropPointers) < 2048);
// ********** End Function FilterText Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UtilsLibrary_FilterText_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_UtilsLibrary, nullptr, "FilterText", 	Z_Construct_UFunction_USIK_UtilsLibrary_FilterText_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_FilterText_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_FilterText_Statics::SIK_UtilsLibrary_eventFilterText_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_FilterText_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UtilsLibrary_FilterText_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_FilterText_Statics::SIK_UtilsLibrary_eventFilterText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UtilsLibrary_FilterText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UtilsLibrary_FilterText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UtilsLibrary::execFilterText)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_Context);
	P_GET_STRUCT(FSIK_SteamId,Z_Param_SourceSteamId);
	P_GET_PROPERTY(FStrProperty,Z_Param_InputMessage);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutFilteredText);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USIK_UtilsLibrary::FilterText(ESIK_TextFilteringContext(Z_Param_Context),Z_Param_SourceSteamId,Z_Param_InputMessage,Z_Param_Out_OutFilteredText);
	P_NATIVE_END;
}
// ********** End Class USIK_UtilsLibrary Function FilterText **************************************

// ********** Begin Class USIK_UtilsLibrary Function GetAppID **************************************
struct Z_Construct_UFunction_USIK_UtilsLibrary_GetAppID_Statics
{
	struct SIK_UtilsLibrary_eventGetAppID_Parms
	{
		FSIK_AppId ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Utils" },
		{ "DisplayName", "Get App ID" },
		{ "Keywords", "GetAppID" },
		{ "ModuleRelativePath", "Functions/Utils/SIK_UtilsLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAppID constinit property declarations ******************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAppID constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAppID Property Definitions *****************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_GetAppID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventGetAppID_Parms, ReturnValue), Z_Construct_UScriptStruct_FSIK_AppId, METADATA_PARAMS(0, nullptr) }; // 3325316996
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UtilsLibrary_GetAppID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_GetAppID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_GetAppID_Statics::PropPointers) < 2048);
// ********** End Function GetAppID Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UtilsLibrary_GetAppID_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_UtilsLibrary, nullptr, "GetAppID", 	Z_Construct_UFunction_USIK_UtilsLibrary_GetAppID_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_GetAppID_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_GetAppID_Statics::SIK_UtilsLibrary_eventGetAppID_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_GetAppID_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UtilsLibrary_GetAppID_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_GetAppID_Statics::SIK_UtilsLibrary_eventGetAppID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UtilsLibrary_GetAppID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UtilsLibrary_GetAppID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UtilsLibrary::execGetAppID)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSIK_AppId*)Z_Param__Result=USIK_UtilsLibrary::GetAppID();
	P_NATIVE_END;
}
// ********** End Class USIK_UtilsLibrary Function GetAppID ****************************************

// ********** Begin Class USIK_UtilsLibrary Function GetCurrentBatteryPower ************************
struct Z_Construct_UFunction_USIK_UtilsLibrary_GetCurrentBatteryPower_Statics
{
	struct SIK_UtilsLibrary_eventGetCurrentBatteryPower_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Utils" },
		{ "DisplayName", "Get Current Battery Power" },
		{ "Keywords", "GetCurrentBatteryPower" },
		{ "ModuleRelativePath", "Functions/Utils/SIK_UtilsLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetCurrentBatteryPower constinit property declarations ****************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCurrentBatteryPower constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCurrentBatteryPower Property Definitions ***************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_GetCurrentBatteryPower_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventGetCurrentBatteryPower_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UtilsLibrary_GetCurrentBatteryPower_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_GetCurrentBatteryPower_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_GetCurrentBatteryPower_Statics::PropPointers) < 2048);
// ********** End Function GetCurrentBatteryPower Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UtilsLibrary_GetCurrentBatteryPower_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_UtilsLibrary, nullptr, "GetCurrentBatteryPower", 	Z_Construct_UFunction_USIK_UtilsLibrary_GetCurrentBatteryPower_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_GetCurrentBatteryPower_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_GetCurrentBatteryPower_Statics::SIK_UtilsLibrary_eventGetCurrentBatteryPower_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_GetCurrentBatteryPower_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UtilsLibrary_GetCurrentBatteryPower_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_GetCurrentBatteryPower_Statics::SIK_UtilsLibrary_eventGetCurrentBatteryPower_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UtilsLibrary_GetCurrentBatteryPower()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UtilsLibrary_GetCurrentBatteryPower_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UtilsLibrary::execGetCurrentBatteryPower)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USIK_UtilsLibrary::GetCurrentBatteryPower();
	P_NATIVE_END;
}
// ********** End Class USIK_UtilsLibrary Function GetCurrentBatteryPower **************************

// ********** Begin Class USIK_UtilsLibrary Function GetEnteredGamepadTextInput ********************
struct Z_Construct_UFunction_USIK_UtilsLibrary_GetEnteredGamepadTextInput_Statics
{
	struct SIK_UtilsLibrary_eventGetEnteredGamepadTextInput_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Utils" },
		{ "DisplayName", "Get Entered Gamepad Text Input" },
		{ "Keywords", "GetEnteredGamepadTextInput" },
		{ "ModuleRelativePath", "Functions/Utils/SIK_UtilsLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetEnteredGamepadTextInput constinit property declarations ************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetEnteredGamepadTextInput constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetEnteredGamepadTextInput Property Definitions ***********************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_GetEnteredGamepadTextInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventGetEnteredGamepadTextInput_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UtilsLibrary_GetEnteredGamepadTextInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_GetEnteredGamepadTextInput_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_GetEnteredGamepadTextInput_Statics::PropPointers) < 2048);
// ********** End Function GetEnteredGamepadTextInput Property Definitions *************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UtilsLibrary_GetEnteredGamepadTextInput_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_UtilsLibrary, nullptr, "GetEnteredGamepadTextInput", 	Z_Construct_UFunction_USIK_UtilsLibrary_GetEnteredGamepadTextInput_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_GetEnteredGamepadTextInput_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_GetEnteredGamepadTextInput_Statics::SIK_UtilsLibrary_eventGetEnteredGamepadTextInput_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_GetEnteredGamepadTextInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UtilsLibrary_GetEnteredGamepadTextInput_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_GetEnteredGamepadTextInput_Statics::SIK_UtilsLibrary_eventGetEnteredGamepadTextInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UtilsLibrary_GetEnteredGamepadTextInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UtilsLibrary_GetEnteredGamepadTextInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UtilsLibrary::execGetEnteredGamepadTextInput)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USIK_UtilsLibrary::GetEnteredGamepadTextInput();
	P_NATIVE_END;
}
// ********** End Class USIK_UtilsLibrary Function GetEnteredGamepadTextInput **********************

// ********** Begin Class USIK_UtilsLibrary Function GetEnteredGamepadTextLength *******************
struct Z_Construct_UFunction_USIK_UtilsLibrary_GetEnteredGamepadTextLength_Statics
{
	struct SIK_UtilsLibrary_eventGetEnteredGamepadTextLength_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Utils" },
		{ "DisplayName", "Get Entered Gamepad Text Length" },
		{ "Keywords", "GetEnteredGamepadTextLength" },
		{ "ModuleRelativePath", "Functions/Utils/SIK_UtilsLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetEnteredGamepadTextLength constinit property declarations ***********
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetEnteredGamepadTextLength constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetEnteredGamepadTextLength Property Definitions **********************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_GetEnteredGamepadTextLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventGetEnteredGamepadTextLength_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UtilsLibrary_GetEnteredGamepadTextLength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_GetEnteredGamepadTextLength_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_GetEnteredGamepadTextLength_Statics::PropPointers) < 2048);
// ********** End Function GetEnteredGamepadTextLength Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UtilsLibrary_GetEnteredGamepadTextLength_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_UtilsLibrary, nullptr, "GetEnteredGamepadTextLength", 	Z_Construct_UFunction_USIK_UtilsLibrary_GetEnteredGamepadTextLength_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_GetEnteredGamepadTextLength_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_GetEnteredGamepadTextLength_Statics::SIK_UtilsLibrary_eventGetEnteredGamepadTextLength_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_GetEnteredGamepadTextLength_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UtilsLibrary_GetEnteredGamepadTextLength_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_GetEnteredGamepadTextLength_Statics::SIK_UtilsLibrary_eventGetEnteredGamepadTextLength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UtilsLibrary_GetEnteredGamepadTextLength()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UtilsLibrary_GetEnteredGamepadTextLength_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UtilsLibrary::execGetEnteredGamepadTextLength)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USIK_UtilsLibrary::GetEnteredGamepadTextLength();
	P_NATIVE_END;
}
// ********** End Class USIK_UtilsLibrary Function GetEnteredGamepadTextLength *********************

// ********** Begin Class USIK_UtilsLibrary Function GetImageRGBA **********************************
struct Z_Construct_UFunction_USIK_UtilsLibrary_GetImageRGBA_Statics
{
	struct SIK_UtilsLibrary_eventGetImageRGBA_Parms
	{
		int32 Image;
		TArray<FColor> OutData;
		int32 OutWidth;
		int32 OutHeight;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Utils" },
		{ "Comment", "//Thanks to @marown for fixing this function\n" },
		{ "DisplayName", "Get Image RGBA" },
		{ "Keywords", "GetImageRGBA" },
		{ "ModuleRelativePath", "Functions/Utils/SIK_UtilsLibrary.h" },
		{ "ToolTip", "Thanks to @marown for fixing this function" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetImageRGBA constinit property declarations **************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Image;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutWidth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutHeight;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetImageRGBA constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetImageRGBA Property Definitions *************************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_GetImageRGBA_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventGetImageRGBA_Parms, Image), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_GetImageRGBA_Statics::NewProp_OutData_Inner = { "OutData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_GetImageRGBA_Statics::NewProp_OutData = { "OutData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventGetImageRGBA_Parms, OutData), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_GetImageRGBA_Statics::NewProp_OutWidth = { "OutWidth", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventGetImageRGBA_Parms, OutWidth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_GetImageRGBA_Statics::NewProp_OutHeight = { "OutHeight", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventGetImageRGBA_Parms, OutHeight), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_UtilsLibrary_GetImageRGBA_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UtilsLibrary_eventGetImageRGBA_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_GetImageRGBA_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UtilsLibrary_eventGetImageRGBA_Parms), &Z_Construct_UFunction_USIK_UtilsLibrary_GetImageRGBA_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UtilsLibrary_GetImageRGBA_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_GetImageRGBA_Statics::NewProp_Image,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_GetImageRGBA_Statics::NewProp_OutData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_GetImageRGBA_Statics::NewProp_OutData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_GetImageRGBA_Statics::NewProp_OutWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_GetImageRGBA_Statics::NewProp_OutHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_GetImageRGBA_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_GetImageRGBA_Statics::PropPointers) < 2048);
// ********** End Function GetImageRGBA Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UtilsLibrary_GetImageRGBA_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_UtilsLibrary, nullptr, "GetImageRGBA", 	Z_Construct_UFunction_USIK_UtilsLibrary_GetImageRGBA_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_GetImageRGBA_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_GetImageRGBA_Statics::SIK_UtilsLibrary_eventGetImageRGBA_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_GetImageRGBA_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UtilsLibrary_GetImageRGBA_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_GetImageRGBA_Statics::SIK_UtilsLibrary_eventGetImageRGBA_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UtilsLibrary_GetImageRGBA()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UtilsLibrary_GetImageRGBA_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UtilsLibrary::execGetImageRGBA)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Image);
	P_GET_TARRAY_REF(FColor,Z_Param_Out_OutData);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutWidth);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutHeight);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UtilsLibrary::GetImageRGBA(Z_Param_Image,Z_Param_Out_OutData,Z_Param_Out_OutWidth,Z_Param_Out_OutHeight);
	P_NATIVE_END;
}
// ********** End Class USIK_UtilsLibrary Function GetImageRGBA ************************************

// ********** Begin Class USIK_UtilsLibrary Function GetIPCountry **********************************
struct Z_Construct_UFunction_USIK_UtilsLibrary_GetIPCountry_Statics
{
	struct SIK_UtilsLibrary_eventGetIPCountry_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Utils" },
		{ "DisplayName", "Get IP Country" },
		{ "Keywords", "GetIPCountry" },
		{ "ModuleRelativePath", "Functions/Utils/SIK_UtilsLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetIPCountry constinit property declarations **************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetIPCountry constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetIPCountry Property Definitions *************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_GetIPCountry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventGetIPCountry_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UtilsLibrary_GetIPCountry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_GetIPCountry_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_GetIPCountry_Statics::PropPointers) < 2048);
// ********** End Function GetIPCountry Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UtilsLibrary_GetIPCountry_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_UtilsLibrary, nullptr, "GetIPCountry", 	Z_Construct_UFunction_USIK_UtilsLibrary_GetIPCountry_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_GetIPCountry_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_GetIPCountry_Statics::SIK_UtilsLibrary_eventGetIPCountry_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_GetIPCountry_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UtilsLibrary_GetIPCountry_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_GetIPCountry_Statics::SIK_UtilsLibrary_eventGetIPCountry_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UtilsLibrary_GetIPCountry()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UtilsLibrary_GetIPCountry_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UtilsLibrary::execGetIPCountry)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USIK_UtilsLibrary::GetIPCountry();
	P_NATIVE_END;
}
// ********** End Class USIK_UtilsLibrary Function GetIPCountry ************************************

// ********** Begin Class USIK_UtilsLibrary Function GetSecondsSinceAppActive **********************
struct Z_Construct_UFunction_USIK_UtilsLibrary_GetSecondsSinceAppActive_Statics
{
	struct SIK_UtilsLibrary_eventGetSecondsSinceAppActive_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Utils" },
		{ "DisplayName", "Get Seconds Since App Active" },
		{ "Keywords", "GetSecondsSinceAppActive" },
		{ "ModuleRelativePath", "Functions/Utils/SIK_UtilsLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetSecondsSinceAppActive constinit property declarations **************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSecondsSinceAppActive constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSecondsSinceAppActive Property Definitions *************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_GetSecondsSinceAppActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventGetSecondsSinceAppActive_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UtilsLibrary_GetSecondsSinceAppActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_GetSecondsSinceAppActive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_GetSecondsSinceAppActive_Statics::PropPointers) < 2048);
// ********** End Function GetSecondsSinceAppActive Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UtilsLibrary_GetSecondsSinceAppActive_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_UtilsLibrary, nullptr, "GetSecondsSinceAppActive", 	Z_Construct_UFunction_USIK_UtilsLibrary_GetSecondsSinceAppActive_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_GetSecondsSinceAppActive_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_GetSecondsSinceAppActive_Statics::SIK_UtilsLibrary_eventGetSecondsSinceAppActive_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_GetSecondsSinceAppActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UtilsLibrary_GetSecondsSinceAppActive_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_GetSecondsSinceAppActive_Statics::SIK_UtilsLibrary_eventGetSecondsSinceAppActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UtilsLibrary_GetSecondsSinceAppActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UtilsLibrary_GetSecondsSinceAppActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UtilsLibrary::execGetSecondsSinceAppActive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USIK_UtilsLibrary::GetSecondsSinceAppActive();
	P_NATIVE_END;
}
// ********** End Class USIK_UtilsLibrary Function GetSecondsSinceAppActive ************************

// ********** Begin Class USIK_UtilsLibrary Function GetSecondsSinceComputerActive *****************
struct Z_Construct_UFunction_USIK_UtilsLibrary_GetSecondsSinceComputerActive_Statics
{
	struct SIK_UtilsLibrary_eventGetSecondsSinceComputerActive_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Utils" },
		{ "DisplayName", "Get Seconds Since Computer Active" },
		{ "Keywords", "GetSecondsSinceComputerActive" },
		{ "ModuleRelativePath", "Functions/Utils/SIK_UtilsLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetSecondsSinceComputerActive constinit property declarations *********
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSecondsSinceComputerActive constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSecondsSinceComputerActive Property Definitions ********************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_GetSecondsSinceComputerActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventGetSecondsSinceComputerActive_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UtilsLibrary_GetSecondsSinceComputerActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_GetSecondsSinceComputerActive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_GetSecondsSinceComputerActive_Statics::PropPointers) < 2048);
// ********** End Function GetSecondsSinceComputerActive Property Definitions **********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UtilsLibrary_GetSecondsSinceComputerActive_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_UtilsLibrary, nullptr, "GetSecondsSinceComputerActive", 	Z_Construct_UFunction_USIK_UtilsLibrary_GetSecondsSinceComputerActive_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_GetSecondsSinceComputerActive_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_GetSecondsSinceComputerActive_Statics::SIK_UtilsLibrary_eventGetSecondsSinceComputerActive_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_GetSecondsSinceComputerActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UtilsLibrary_GetSecondsSinceComputerActive_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_GetSecondsSinceComputerActive_Statics::SIK_UtilsLibrary_eventGetSecondsSinceComputerActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UtilsLibrary_GetSecondsSinceComputerActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UtilsLibrary_GetSecondsSinceComputerActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UtilsLibrary::execGetSecondsSinceComputerActive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USIK_UtilsLibrary::GetSecondsSinceComputerActive();
	P_NATIVE_END;
}
// ********** End Class USIK_UtilsLibrary Function GetSecondsSinceComputerActive *******************

// ********** Begin Class USIK_UtilsLibrary Function GetServerRealTime *****************************
struct Z_Construct_UFunction_USIK_UtilsLibrary_GetServerRealTime_Statics
{
	struct SIK_UtilsLibrary_eventGetServerRealTime_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Utils" },
		{ "DisplayName", "Get Server Real Time" },
		{ "Keywords", "GetServerRealTime" },
		{ "ModuleRelativePath", "Functions/Utils/SIK_UtilsLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetServerRealTime constinit property declarations *********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetServerRealTime constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetServerRealTime Property Definitions ********************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_GetServerRealTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventGetServerRealTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UtilsLibrary_GetServerRealTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_GetServerRealTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_GetServerRealTime_Statics::PropPointers) < 2048);
// ********** End Function GetServerRealTime Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UtilsLibrary_GetServerRealTime_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_UtilsLibrary, nullptr, "GetServerRealTime", 	Z_Construct_UFunction_USIK_UtilsLibrary_GetServerRealTime_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_GetServerRealTime_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_GetServerRealTime_Statics::SIK_UtilsLibrary_eventGetServerRealTime_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_GetServerRealTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UtilsLibrary_GetServerRealTime_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_GetServerRealTime_Statics::SIK_UtilsLibrary_eventGetServerRealTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UtilsLibrary_GetServerRealTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UtilsLibrary_GetServerRealTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UtilsLibrary::execGetServerRealTime)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USIK_UtilsLibrary::GetServerRealTime();
	P_NATIVE_END;
}
// ********** End Class USIK_UtilsLibrary Function GetServerRealTime *******************************

// ********** Begin Class USIK_UtilsLibrary Function GetSteamUILanguage ****************************
struct Z_Construct_UFunction_USIK_UtilsLibrary_GetSteamUILanguage_Statics
{
	struct SIK_UtilsLibrary_eventGetSteamUILanguage_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Utils" },
		{ "DisplayName", "Get Steam UI Language" },
		{ "Keywords", "GetSteamUILanguage" },
		{ "ModuleRelativePath", "Functions/Utils/SIK_UtilsLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetSteamUILanguage constinit property declarations ********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSteamUILanguage constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSteamUILanguage Property Definitions *******************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_GetSteamUILanguage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventGetSteamUILanguage_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UtilsLibrary_GetSteamUILanguage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_GetSteamUILanguage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_GetSteamUILanguage_Statics::PropPointers) < 2048);
// ********** End Function GetSteamUILanguage Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UtilsLibrary_GetSteamUILanguage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_UtilsLibrary, nullptr, "GetSteamUILanguage", 	Z_Construct_UFunction_USIK_UtilsLibrary_GetSteamUILanguage_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_GetSteamUILanguage_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_GetSteamUILanguage_Statics::SIK_UtilsLibrary_eventGetSteamUILanguage_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_GetSteamUILanguage_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UtilsLibrary_GetSteamUILanguage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_GetSteamUILanguage_Statics::SIK_UtilsLibrary_eventGetSteamUILanguage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UtilsLibrary_GetSteamUILanguage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UtilsLibrary_GetSteamUILanguage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UtilsLibrary::execGetSteamUILanguage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USIK_UtilsLibrary::GetSteamUILanguage();
	P_NATIVE_END;
}
// ********** End Class USIK_UtilsLibrary Function GetSteamUILanguage ******************************

// ********** Begin Class USIK_UtilsLibrary Function InitFilterText ********************************
struct Z_Construct_UFunction_USIK_UtilsLibrary_InitFilterText_Statics
{
	struct SIK_UtilsLibrary_eventInitFilterText_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Utils" },
		{ "DisplayName", "Init Filter Text" },
		{ "Keywords", "InitFilterText" },
		{ "ModuleRelativePath", "Functions/Utils/SIK_UtilsLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function InitFilterText constinit property declarations ************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function InitFilterText constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function InitFilterText Property Definitions ***********************************
void Z_Construct_UFunction_USIK_UtilsLibrary_InitFilterText_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UtilsLibrary_eventInitFilterText_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_InitFilterText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UtilsLibrary_eventInitFilterText_Parms), &Z_Construct_UFunction_USIK_UtilsLibrary_InitFilterText_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UtilsLibrary_InitFilterText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_InitFilterText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_InitFilterText_Statics::PropPointers) < 2048);
// ********** End Function InitFilterText Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UtilsLibrary_InitFilterText_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_UtilsLibrary, nullptr, "InitFilterText", 	Z_Construct_UFunction_USIK_UtilsLibrary_InitFilterText_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_InitFilterText_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_InitFilterText_Statics::SIK_UtilsLibrary_eventInitFilterText_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_InitFilterText_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UtilsLibrary_InitFilterText_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_InitFilterText_Statics::SIK_UtilsLibrary_eventInitFilterText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UtilsLibrary_InitFilterText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UtilsLibrary_InitFilterText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UtilsLibrary::execInitFilterText)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UtilsLibrary::InitFilterText();
	P_NATIVE_END;
}
// ********** End Class USIK_UtilsLibrary Function InitFilterText **********************************

// ********** Begin Class USIK_UtilsLibrary Function IsControllerConnected *************************
struct Z_Construct_UFunction_USIK_UtilsLibrary_IsControllerConnected_Statics
{
	struct SIK_UtilsLibrary_eventIsControllerConnected_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Inputs" },
		{ "DisplayName", "Is Controller Connected" },
		{ "Keywords", "IsControllerConnected" },
		{ "ModuleRelativePath", "Functions/Utils/SIK_UtilsLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsControllerConnected constinit property declarations *****************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsControllerConnected constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsControllerConnected Property Definitions ****************************
void Z_Construct_UFunction_USIK_UtilsLibrary_IsControllerConnected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UtilsLibrary_eventIsControllerConnected_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_IsControllerConnected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UtilsLibrary_eventIsControllerConnected_Parms), &Z_Construct_UFunction_USIK_UtilsLibrary_IsControllerConnected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UtilsLibrary_IsControllerConnected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_IsControllerConnected_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_IsControllerConnected_Statics::PropPointers) < 2048);
// ********** End Function IsControllerConnected Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UtilsLibrary_IsControllerConnected_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_UtilsLibrary, nullptr, "IsControllerConnected", 	Z_Construct_UFunction_USIK_UtilsLibrary_IsControllerConnected_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_IsControllerConnected_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_IsControllerConnected_Statics::SIK_UtilsLibrary_eventIsControllerConnected_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_IsControllerConnected_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UtilsLibrary_IsControllerConnected_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_IsControllerConnected_Statics::SIK_UtilsLibrary_eventIsControllerConnected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UtilsLibrary_IsControllerConnected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UtilsLibrary_IsControllerConnected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UtilsLibrary::execIsControllerConnected)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UtilsLibrary::IsControllerConnected();
	P_NATIVE_END;
}
// ********** End Class USIK_UtilsLibrary Function IsControllerConnected ***************************

// ********** Begin Class USIK_UtilsLibrary Function IsOverlayEnabled ******************************
struct Z_Construct_UFunction_USIK_UtilsLibrary_IsOverlayEnabled_Statics
{
	struct SIK_UtilsLibrary_eventIsOverlayEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Utils" },
		{ "DisplayName", "Is Overlay Enabled" },
		{ "Keywords", "IsOverlayEnabled" },
		{ "ModuleRelativePath", "Functions/Utils/SIK_UtilsLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsOverlayEnabled constinit property declarations **********************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsOverlayEnabled constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsOverlayEnabled Property Definitions *********************************
void Z_Construct_UFunction_USIK_UtilsLibrary_IsOverlayEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UtilsLibrary_eventIsOverlayEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_IsOverlayEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UtilsLibrary_eventIsOverlayEnabled_Parms), &Z_Construct_UFunction_USIK_UtilsLibrary_IsOverlayEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UtilsLibrary_IsOverlayEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_IsOverlayEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_IsOverlayEnabled_Statics::PropPointers) < 2048);
// ********** End Function IsOverlayEnabled Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UtilsLibrary_IsOverlayEnabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_UtilsLibrary, nullptr, "IsOverlayEnabled", 	Z_Construct_UFunction_USIK_UtilsLibrary_IsOverlayEnabled_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_IsOverlayEnabled_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_IsOverlayEnabled_Statics::SIK_UtilsLibrary_eventIsOverlayEnabled_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_IsOverlayEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UtilsLibrary_IsOverlayEnabled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_IsOverlayEnabled_Statics::SIK_UtilsLibrary_eventIsOverlayEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UtilsLibrary_IsOverlayEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UtilsLibrary_IsOverlayEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UtilsLibrary::execIsOverlayEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UtilsLibrary::IsOverlayEnabled();
	P_NATIVE_END;
}
// ********** End Class USIK_UtilsLibrary Function IsOverlayEnabled ********************************

// ********** Begin Class USIK_UtilsLibrary Function IsSteamChinaLauncher **************************
struct Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamChinaLauncher_Statics
{
	struct SIK_UtilsLibrary_eventIsSteamChinaLauncher_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Utils" },
		{ "DisplayName", "Is Steam China Launcher" },
		{ "Keywords", "IsSteamChinaLauncher" },
		{ "ModuleRelativePath", "Functions/Utils/SIK_UtilsLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsSteamChinaLauncher constinit property declarations ******************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsSteamChinaLauncher constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsSteamChinaLauncher Property Definitions *****************************
void Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamChinaLauncher_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UtilsLibrary_eventIsSteamChinaLauncher_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamChinaLauncher_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UtilsLibrary_eventIsSteamChinaLauncher_Parms), &Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamChinaLauncher_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamChinaLauncher_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamChinaLauncher_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamChinaLauncher_Statics::PropPointers) < 2048);
// ********** End Function IsSteamChinaLauncher Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamChinaLauncher_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_UtilsLibrary, nullptr, "IsSteamChinaLauncher", 	Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamChinaLauncher_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamChinaLauncher_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamChinaLauncher_Statics::SIK_UtilsLibrary_eventIsSteamChinaLauncher_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamChinaLauncher_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamChinaLauncher_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamChinaLauncher_Statics::SIK_UtilsLibrary_eventIsSteamChinaLauncher_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamChinaLauncher()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamChinaLauncher_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UtilsLibrary::execIsSteamChinaLauncher)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UtilsLibrary::IsSteamChinaLauncher();
	P_NATIVE_END;
}
// ********** End Class USIK_UtilsLibrary Function IsSteamChinaLauncher ****************************

// ********** Begin Class USIK_UtilsLibrary Function IsSteamInBigPictureMode ***********************
struct Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamInBigPictureMode_Statics
{
	struct SIK_UtilsLibrary_eventIsSteamInBigPictureMode_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Utils" },
		{ "DisplayName", "Is Steam In Big Picture Mode" },
		{ "Keywords", "IsSteamInBigPictureMode" },
		{ "ModuleRelativePath", "Functions/Utils/SIK_UtilsLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsSteamInBigPictureMode constinit property declarations ***************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsSteamInBigPictureMode constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsSteamInBigPictureMode Property Definitions **************************
void Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamInBigPictureMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UtilsLibrary_eventIsSteamInBigPictureMode_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamInBigPictureMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UtilsLibrary_eventIsSteamInBigPictureMode_Parms), &Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamInBigPictureMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamInBigPictureMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamInBigPictureMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamInBigPictureMode_Statics::PropPointers) < 2048);
// ********** End Function IsSteamInBigPictureMode Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamInBigPictureMode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_UtilsLibrary, nullptr, "IsSteamInBigPictureMode", 	Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamInBigPictureMode_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamInBigPictureMode_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamInBigPictureMode_Statics::SIK_UtilsLibrary_eventIsSteamInBigPictureMode_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamInBigPictureMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamInBigPictureMode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamInBigPictureMode_Statics::SIK_UtilsLibrary_eventIsSteamInBigPictureMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamInBigPictureMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamInBigPictureMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UtilsLibrary::execIsSteamInBigPictureMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UtilsLibrary::IsSteamInBigPictureMode();
	P_NATIVE_END;
}
// ********** End Class USIK_UtilsLibrary Function IsSteamInBigPictureMode *************************

// ********** Begin Class USIK_UtilsLibrary Function IsSteamRunningInVR ****************************
struct Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamRunningInVR_Statics
{
	struct SIK_UtilsLibrary_eventIsSteamRunningInVR_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Utils" },
		{ "DisplayName", "Is Steam Running In VR" },
		{ "Keywords", "IsSteamRunningInVR" },
		{ "ModuleRelativePath", "Functions/Utils/SIK_UtilsLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsSteamRunningInVR constinit property declarations ********************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsSteamRunningInVR constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsSteamRunningInVR Property Definitions *******************************
void Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamRunningInVR_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UtilsLibrary_eventIsSteamRunningInVR_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamRunningInVR_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UtilsLibrary_eventIsSteamRunningInVR_Parms), &Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamRunningInVR_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamRunningInVR_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamRunningInVR_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamRunningInVR_Statics::PropPointers) < 2048);
// ********** End Function IsSteamRunningInVR Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamRunningInVR_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_UtilsLibrary, nullptr, "IsSteamRunningInVR", 	Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamRunningInVR_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamRunningInVR_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamRunningInVR_Statics::SIK_UtilsLibrary_eventIsSteamRunningInVR_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamRunningInVR_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamRunningInVR_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamRunningInVR_Statics::SIK_UtilsLibrary_eventIsSteamRunningInVR_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamRunningInVR()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamRunningInVR_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UtilsLibrary::execIsSteamRunningInVR)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UtilsLibrary::IsSteamRunningInVR();
	P_NATIVE_END;
}
// ********** End Class USIK_UtilsLibrary Function IsSteamRunningInVR ******************************

// ********** Begin Class USIK_UtilsLibrary Function IsSteamRunningOnSteamDeck *********************
struct Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamRunningOnSteamDeck_Statics
{
	struct SIK_UtilsLibrary_eventIsSteamRunningOnSteamDeck_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Utils" },
		{ "DisplayName", "Is Steam Running On Steam Deck" },
		{ "Keywords", "IsSteamRunningOnSteamDeck" },
		{ "ModuleRelativePath", "Functions/Utils/SIK_UtilsLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsSteamRunningOnSteamDeck constinit property declarations *************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsSteamRunningOnSteamDeck constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsSteamRunningOnSteamDeck Property Definitions ************************
void Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamRunningOnSteamDeck_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UtilsLibrary_eventIsSteamRunningOnSteamDeck_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamRunningOnSteamDeck_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UtilsLibrary_eventIsSteamRunningOnSteamDeck_Parms), &Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamRunningOnSteamDeck_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamRunningOnSteamDeck_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamRunningOnSteamDeck_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamRunningOnSteamDeck_Statics::PropPointers) < 2048);
// ********** End Function IsSteamRunningOnSteamDeck Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamRunningOnSteamDeck_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_UtilsLibrary, nullptr, "IsSteamRunningOnSteamDeck", 	Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamRunningOnSteamDeck_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamRunningOnSteamDeck_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamRunningOnSteamDeck_Statics::SIK_UtilsLibrary_eventIsSteamRunningOnSteamDeck_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamRunningOnSteamDeck_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamRunningOnSteamDeck_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamRunningOnSteamDeck_Statics::SIK_UtilsLibrary_eventIsSteamRunningOnSteamDeck_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamRunningOnSteamDeck()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamRunningOnSteamDeck_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UtilsLibrary::execIsSteamRunningOnSteamDeck)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UtilsLibrary::IsSteamRunningOnSteamDeck();
	P_NATIVE_END;
}
// ********** End Class USIK_UtilsLibrary Function IsSteamRunningOnSteamDeck ***********************

// ********** Begin Class USIK_UtilsLibrary Function IsValidJSON ***********************************
struct Z_Construct_UFunction_USIK_UtilsLibrary_IsValidJSON_Statics
{
	struct SIK_UtilsLibrary_eventIsValidJSON_Parms
	{
		FString JsonString;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || Helper Functions || JSON Serialization" },
		{ "DisplayName", "Is Valid JSON" },
		{ "Keywords", "IsValidJSON" },
		{ "ModuleRelativePath", "Functions/Utils/SIK_UtilsLibrary.h" },
		{ "ToolTip", "Checks if a string is valid JSON format" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsValidJSON constinit property declarations ***************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsValidJSON constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsValidJSON Property Definitions **************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_IsValidJSON_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventIsValidJSON_Parms, JsonString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JsonString_MetaData), NewProp_JsonString_MetaData) };
void Z_Construct_UFunction_USIK_UtilsLibrary_IsValidJSON_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UtilsLibrary_eventIsValidJSON_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_IsValidJSON_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UtilsLibrary_eventIsValidJSON_Parms), &Z_Construct_UFunction_USIK_UtilsLibrary_IsValidJSON_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UtilsLibrary_IsValidJSON_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_IsValidJSON_Statics::NewProp_JsonString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_IsValidJSON_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_IsValidJSON_Statics::PropPointers) < 2048);
// ********** End Function IsValidJSON Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UtilsLibrary_IsValidJSON_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_UtilsLibrary, nullptr, "IsValidJSON", 	Z_Construct_UFunction_USIK_UtilsLibrary_IsValidJSON_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_IsValidJSON_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_IsValidJSON_Statics::SIK_UtilsLibrary_eventIsValidJSON_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_IsValidJSON_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UtilsLibrary_IsValidJSON_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_IsValidJSON_Statics::SIK_UtilsLibrary_eventIsValidJSON_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UtilsLibrary_IsValidJSON()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UtilsLibrary_IsValidJSON_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UtilsLibrary::execIsValidJSON)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UtilsLibrary::IsValidJSON(Z_Param_JsonString);
	P_NATIVE_END;
}
// ********** End Class USIK_UtilsLibrary Function IsValidJSON *************************************

// ********** Begin Class USIK_UtilsLibrary Function IsValidUGCTag *********************************
struct Z_Construct_UFunction_USIK_UtilsLibrary_IsValidUGCTag_Statics
{
	struct SIK_UtilsLibrary_eventIsValidUGCTag_Parms
	{
		FString TagName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || Helper Functions || UGC" },
		{ "DisplayName", "Is Valid UGC Tag" },
		{ "Keywords", "IsValidUGCTag" },
		{ "ModuleRelativePath", "Functions/Utils/SIK_UtilsLibrary.h" },
		{ "ToolTip", "Checks if a UGC tag meets Steam's requirements: \xe2\x89\xa4""255 chars, no commas, printable characters only" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsValidUGCTag constinit property declarations *************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_TagName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsValidUGCTag constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsValidUGCTag Property Definitions ************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_IsValidUGCTag_Statics::NewProp_TagName = { "TagName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventIsValidUGCTag_Parms, TagName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagName_MetaData), NewProp_TagName_MetaData) };
void Z_Construct_UFunction_USIK_UtilsLibrary_IsValidUGCTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UtilsLibrary_eventIsValidUGCTag_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_IsValidUGCTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UtilsLibrary_eventIsValidUGCTag_Parms), &Z_Construct_UFunction_USIK_UtilsLibrary_IsValidUGCTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UtilsLibrary_IsValidUGCTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_IsValidUGCTag_Statics::NewProp_TagName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_IsValidUGCTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_IsValidUGCTag_Statics::PropPointers) < 2048);
// ********** End Function IsValidUGCTag Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UtilsLibrary_IsValidUGCTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_UtilsLibrary, nullptr, "IsValidUGCTag", 	Z_Construct_UFunction_USIK_UtilsLibrary_IsValidUGCTag_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_IsValidUGCTag_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_IsValidUGCTag_Statics::SIK_UtilsLibrary_eventIsValidUGCTag_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_IsValidUGCTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UtilsLibrary_IsValidUGCTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_IsValidUGCTag_Statics::SIK_UtilsLibrary_eventIsValidUGCTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UtilsLibrary_IsValidUGCTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UtilsLibrary_IsValidUGCTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UtilsLibrary::execIsValidUGCTag)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_TagName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UtilsLibrary::IsValidUGCTag(Z_Param_TagName);
	P_NATIVE_END;
}
// ********** End Class USIK_UtilsLibrary Function IsValidUGCTag ***********************************

// ********** Begin Class USIK_UtilsLibrary Function IsVRHeadsetStreamingEnabled *******************
struct Z_Construct_UFunction_USIK_UtilsLibrary_IsVRHeadsetStreamingEnabled_Statics
{
	struct SIK_UtilsLibrary_eventIsVRHeadsetStreamingEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Utils" },
		{ "DisplayName", "Is VR Headset Streaming Enabled" },
		{ "Keywords", "IsVRHeadsetStreamingEnabled" },
		{ "ModuleRelativePath", "Functions/Utils/SIK_UtilsLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsVRHeadsetStreamingEnabled constinit property declarations ***********
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsVRHeadsetStreamingEnabled constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsVRHeadsetStreamingEnabled Property Definitions **********************
void Z_Construct_UFunction_USIK_UtilsLibrary_IsVRHeadsetStreamingEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UtilsLibrary_eventIsVRHeadsetStreamingEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_IsVRHeadsetStreamingEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UtilsLibrary_eventIsVRHeadsetStreamingEnabled_Parms), &Z_Construct_UFunction_USIK_UtilsLibrary_IsVRHeadsetStreamingEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UtilsLibrary_IsVRHeadsetStreamingEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_IsVRHeadsetStreamingEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_IsVRHeadsetStreamingEnabled_Statics::PropPointers) < 2048);
// ********** End Function IsVRHeadsetStreamingEnabled Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UtilsLibrary_IsVRHeadsetStreamingEnabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_UtilsLibrary, nullptr, "IsVRHeadsetStreamingEnabled", 	Z_Construct_UFunction_USIK_UtilsLibrary_IsVRHeadsetStreamingEnabled_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_IsVRHeadsetStreamingEnabled_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_IsVRHeadsetStreamingEnabled_Statics::SIK_UtilsLibrary_eventIsVRHeadsetStreamingEnabled_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_IsVRHeadsetStreamingEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UtilsLibrary_IsVRHeadsetStreamingEnabled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_IsVRHeadsetStreamingEnabled_Statics::SIK_UtilsLibrary_eventIsVRHeadsetStreamingEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UtilsLibrary_IsVRHeadsetStreamingEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UtilsLibrary_IsVRHeadsetStreamingEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UtilsLibrary::execIsVRHeadsetStreamingEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UtilsLibrary::IsVRHeadsetStreamingEnabled();
	P_NATIVE_END;
}
// ********** End Class USIK_UtilsLibrary Function IsVRHeadsetStreamingEnabled *********************

// ********** Begin Class USIK_UtilsLibrary Function JSONToStringArray *****************************
struct Z_Construct_UFunction_USIK_UtilsLibrary_JSONToStringArray_Statics
{
	struct SIK_UtilsLibrary_eventJSONToStringArray_Parms
	{
		FString JsonString;
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || Helper Functions || JSON Serialization" },
		{ "DisplayName", "JSON To String Array" },
		{ "Keywords", "JSONToStringArray" },
		{ "ModuleRelativePath", "Functions/Utils/SIK_UtilsLibrary.h" },
		{ "ToolTip", "Converts JSON array back to array of strings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function JSONToStringArray constinit property declarations *********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function JSONToStringArray constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function JSONToStringArray Property Definitions ********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_JSONToStringArray_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventJSONToStringArray_Parms, JsonString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JsonString_MetaData), NewProp_JsonString_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_JSONToStringArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_JSONToStringArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventJSONToStringArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UtilsLibrary_JSONToStringArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_JSONToStringArray_Statics::NewProp_JsonString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_JSONToStringArray_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_JSONToStringArray_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_JSONToStringArray_Statics::PropPointers) < 2048);
// ********** End Function JSONToStringArray Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UtilsLibrary_JSONToStringArray_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_UtilsLibrary, nullptr, "JSONToStringArray", 	Z_Construct_UFunction_USIK_UtilsLibrary_JSONToStringArray_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_JSONToStringArray_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_JSONToStringArray_Statics::SIK_UtilsLibrary_eventJSONToStringArray_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_JSONToStringArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UtilsLibrary_JSONToStringArray_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_JSONToStringArray_Statics::SIK_UtilsLibrary_eventJSONToStringArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UtilsLibrary_JSONToStringArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UtilsLibrary_JSONToStringArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UtilsLibrary::execJSONToStringArray)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=USIK_UtilsLibrary::JSONToStringArray(Z_Param_JsonString);
	P_NATIVE_END;
}
// ********** End Class USIK_UtilsLibrary Function JSONToStringArray *******************************

// ********** Begin Class USIK_UtilsLibrary Function OpenSteamKeyboard *****************************
struct Z_Construct_UFunction_USIK_UtilsLibrary_OpenSteamKeyboard_Statics
{
	struct SIK_UtilsLibrary_eventOpenSteamKeyboard_Parms
	{
		int32 KeyboardMode;
		int32 TextFieldXPosition;
		int32 TextFieldYPosition;
		int32 TextFieldWidth;
		int32 TextFieldHeight;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Utils" },
		{ "DisplayName", "Open Steam Keyboard" },
		{ "Keywords", "OpenSteamKeyboard" },
		{ "ModuleRelativePath", "Functions/Utils/SIK_UtilsLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OpenSteamKeyboard constinit property declarations *********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_KeyboardMode;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TextFieldXPosition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TextFieldYPosition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TextFieldWidth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TextFieldHeight;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OpenSteamKeyboard constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OpenSteamKeyboard Property Definitions ********************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_OpenSteamKeyboard_Statics::NewProp_KeyboardMode = { "KeyboardMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventOpenSteamKeyboard_Parms, KeyboardMode), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_OpenSteamKeyboard_Statics::NewProp_TextFieldXPosition = { "TextFieldXPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventOpenSteamKeyboard_Parms, TextFieldXPosition), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_OpenSteamKeyboard_Statics::NewProp_TextFieldYPosition = { "TextFieldYPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventOpenSteamKeyboard_Parms, TextFieldYPosition), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_OpenSteamKeyboard_Statics::NewProp_TextFieldWidth = { "TextFieldWidth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventOpenSteamKeyboard_Parms, TextFieldWidth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_OpenSteamKeyboard_Statics::NewProp_TextFieldHeight = { "TextFieldHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventOpenSteamKeyboard_Parms, TextFieldHeight), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_UtilsLibrary_OpenSteamKeyboard_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UtilsLibrary_eventOpenSteamKeyboard_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_OpenSteamKeyboard_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UtilsLibrary_eventOpenSteamKeyboard_Parms), &Z_Construct_UFunction_USIK_UtilsLibrary_OpenSteamKeyboard_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UtilsLibrary_OpenSteamKeyboard_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_OpenSteamKeyboard_Statics::NewProp_KeyboardMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_OpenSteamKeyboard_Statics::NewProp_TextFieldXPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_OpenSteamKeyboard_Statics::NewProp_TextFieldYPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_OpenSteamKeyboard_Statics::NewProp_TextFieldWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_OpenSteamKeyboard_Statics::NewProp_TextFieldHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_OpenSteamKeyboard_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_OpenSteamKeyboard_Statics::PropPointers) < 2048);
// ********** End Function OpenSteamKeyboard Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UtilsLibrary_OpenSteamKeyboard_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_UtilsLibrary, nullptr, "OpenSteamKeyboard", 	Z_Construct_UFunction_USIK_UtilsLibrary_OpenSteamKeyboard_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_OpenSteamKeyboard_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_OpenSteamKeyboard_Statics::SIK_UtilsLibrary_eventOpenSteamKeyboard_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_OpenSteamKeyboard_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UtilsLibrary_OpenSteamKeyboard_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_OpenSteamKeyboard_Statics::SIK_UtilsLibrary_eventOpenSteamKeyboard_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UtilsLibrary_OpenSteamKeyboard()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UtilsLibrary_OpenSteamKeyboard_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UtilsLibrary::execOpenSteamKeyboard)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_KeyboardMode);
	P_GET_PROPERTY(FIntProperty,Z_Param_TextFieldXPosition);
	P_GET_PROPERTY(FIntProperty,Z_Param_TextFieldYPosition);
	P_GET_PROPERTY(FIntProperty,Z_Param_TextFieldWidth);
	P_GET_PROPERTY(FIntProperty,Z_Param_TextFieldHeight);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UtilsLibrary::OpenSteamKeyboard(Z_Param_KeyboardMode,Z_Param_TextFieldXPosition,Z_Param_TextFieldYPosition,Z_Param_TextFieldWidth,Z_Param_TextFieldHeight);
	P_NATIVE_END;
}
// ********** End Class USIK_UtilsLibrary Function OpenSteamKeyboard *******************************

// ********** Begin Class USIK_UtilsLibrary Function OverlayNeedsPresent ***************************
struct Z_Construct_UFunction_USIK_UtilsLibrary_OverlayNeedsPresent_Statics
{
	struct SIK_UtilsLibrary_eventOverlayNeedsPresent_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Utils" },
		{ "DisplayName", "Overlay Needs Present" },
		{ "Keywords", "BOverlayNeedsPresent" },
		{ "ModuleRelativePath", "Functions/Utils/SIK_UtilsLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OverlayNeedsPresent constinit property declarations *******************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OverlayNeedsPresent constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OverlayNeedsPresent Property Definitions ******************************
void Z_Construct_UFunction_USIK_UtilsLibrary_OverlayNeedsPresent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UtilsLibrary_eventOverlayNeedsPresent_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_OverlayNeedsPresent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UtilsLibrary_eventOverlayNeedsPresent_Parms), &Z_Construct_UFunction_USIK_UtilsLibrary_OverlayNeedsPresent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UtilsLibrary_OverlayNeedsPresent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_OverlayNeedsPresent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_OverlayNeedsPresent_Statics::PropPointers) < 2048);
// ********** End Function OverlayNeedsPresent Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UtilsLibrary_OverlayNeedsPresent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_UtilsLibrary, nullptr, "OverlayNeedsPresent", 	Z_Construct_UFunction_USIK_UtilsLibrary_OverlayNeedsPresent_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_OverlayNeedsPresent_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_OverlayNeedsPresent_Statics::SIK_UtilsLibrary_eventOverlayNeedsPresent_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_OverlayNeedsPresent_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UtilsLibrary_OverlayNeedsPresent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_OverlayNeedsPresent_Statics::SIK_UtilsLibrary_eventOverlayNeedsPresent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UtilsLibrary_OverlayNeedsPresent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UtilsLibrary_OverlayNeedsPresent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UtilsLibrary::execOverlayNeedsPresent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UtilsLibrary::OverlayNeedsPresent();
	P_NATIVE_END;
}
// ********** End Class USIK_UtilsLibrary Function OverlayNeedsPresent *****************************

// ********** Begin Class USIK_UtilsLibrary Function ParseJSONValue ********************************
struct Z_Construct_UFunction_USIK_UtilsLibrary_ParseJSONValue_Statics
{
	struct SIK_UtilsLibrary_eventParseJSONValue_Parms
	{
		FString JsonString;
		FString Key;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || Helper Functions || JSON Serialization" },
		{ "DisplayName", "Parse JSON Value" },
		{ "Keywords", "ParseJSONValue" },
		{ "ModuleRelativePath", "Functions/Utils/SIK_UtilsLibrary.h" },
		{ "ToolTip", "Extracts a string value from a JSON object by key" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ParseJSONValue constinit property declarations ************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ParseJSONValue constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ParseJSONValue Property Definitions ***********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_ParseJSONValue_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventParseJSONValue_Parms, JsonString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JsonString_MetaData), NewProp_JsonString_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_ParseJSONValue_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventParseJSONValue_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_ParseJSONValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventParseJSONValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UtilsLibrary_ParseJSONValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_ParseJSONValue_Statics::NewProp_JsonString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_ParseJSONValue_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_ParseJSONValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_ParseJSONValue_Statics::PropPointers) < 2048);
// ********** End Function ParseJSONValue Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UtilsLibrary_ParseJSONValue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_UtilsLibrary, nullptr, "ParseJSONValue", 	Z_Construct_UFunction_USIK_UtilsLibrary_ParseJSONValue_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_ParseJSONValue_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_ParseJSONValue_Statics::SIK_UtilsLibrary_eventParseJSONValue_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_ParseJSONValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UtilsLibrary_ParseJSONValue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_ParseJSONValue_Statics::SIK_UtilsLibrary_eventParseJSONValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UtilsLibrary_ParseJSONValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UtilsLibrary_ParseJSONValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UtilsLibrary::execParseJSONValue)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USIK_UtilsLibrary::ParseJSONValue(Z_Param_JsonString,Z_Param_Key);
	P_NATIVE_END;
}
// ********** End Class USIK_UtilsLibrary Function ParseJSONValue **********************************

// ********** Begin Class USIK_UtilsLibrary Function ReadTextFile **********************************
struct Z_Construct_UFunction_USIK_UtilsLibrary_ReadTextFile_Statics
{
	struct SIK_UtilsLibrary_eventReadTextFile_Parms
	{
		FString FilePath;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || Helper Functions || File I/O" },
		{ "DisplayName", "Read Text File" },
		{ "Keywords", "ReadTextFile" },
		{ "ModuleRelativePath", "Functions/Utils/SIK_UtilsLibrary.h" },
		{ "ToolTip", "Reads entire text file content as string" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ReadTextFile constinit property declarations **************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ReadTextFile constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ReadTextFile Property Definitions *************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_ReadTextFile_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventReadTextFile_Parms, FilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilePath_MetaData), NewProp_FilePath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_ReadTextFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventReadTextFile_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UtilsLibrary_ReadTextFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_ReadTextFile_Statics::NewProp_FilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_ReadTextFile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_ReadTextFile_Statics::PropPointers) < 2048);
// ********** End Function ReadTextFile Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UtilsLibrary_ReadTextFile_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_UtilsLibrary, nullptr, "ReadTextFile", 	Z_Construct_UFunction_USIK_UtilsLibrary_ReadTextFile_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_ReadTextFile_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_ReadTextFile_Statics::SIK_UtilsLibrary_eventReadTextFile_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_ReadTextFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UtilsLibrary_ReadTextFile_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_ReadTextFile_Statics::SIK_UtilsLibrary_eventReadTextFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UtilsLibrary_ReadTextFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UtilsLibrary_ReadTextFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UtilsLibrary::execReadTextFile)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USIK_UtilsLibrary::ReadTextFile(Z_Param_FilePath);
	P_NATIVE_END;
}
// ********** End Class USIK_UtilsLibrary Function ReadTextFile ************************************

// ********** Begin Class USIK_UtilsLibrary Function SanitizeUGCTag ********************************
struct Z_Construct_UFunction_USIK_UtilsLibrary_SanitizeUGCTag_Statics
{
	struct SIK_UtilsLibrary_eventSanitizeUGCTag_Parms
	{
		FString TagName;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || Helper Functions || UGC" },
		{ "DisplayName", "Sanitize UGC Tag" },
		{ "Keywords", "SanitizeUGCTag" },
		{ "ModuleRelativePath", "Functions/Utils/SIK_UtilsLibrary.h" },
		{ "ToolTip", "Cleans a UGC tag by removing commas, non-printable chars, and truncating to 255 chars" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SanitizeUGCTag constinit property declarations ************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_TagName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SanitizeUGCTag constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SanitizeUGCTag Property Definitions ***********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_SanitizeUGCTag_Statics::NewProp_TagName = { "TagName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventSanitizeUGCTag_Parms, TagName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagName_MetaData), NewProp_TagName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_SanitizeUGCTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventSanitizeUGCTag_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UtilsLibrary_SanitizeUGCTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_SanitizeUGCTag_Statics::NewProp_TagName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_SanitizeUGCTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_SanitizeUGCTag_Statics::PropPointers) < 2048);
// ********** End Function SanitizeUGCTag Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UtilsLibrary_SanitizeUGCTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_UtilsLibrary, nullptr, "SanitizeUGCTag", 	Z_Construct_UFunction_USIK_UtilsLibrary_SanitizeUGCTag_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_SanitizeUGCTag_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_SanitizeUGCTag_Statics::SIK_UtilsLibrary_eventSanitizeUGCTag_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_SanitizeUGCTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UtilsLibrary_SanitizeUGCTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_SanitizeUGCTag_Statics::SIK_UtilsLibrary_eventSanitizeUGCTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UtilsLibrary_SanitizeUGCTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UtilsLibrary_SanitizeUGCTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UtilsLibrary::execSanitizeUGCTag)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_TagName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USIK_UtilsLibrary::SanitizeUGCTag(Z_Param_TagName);
	P_NATIVE_END;
}
// ********** End Class USIK_UtilsLibrary Function SanitizeUGCTag **********************************

// ********** Begin Class USIK_UtilsLibrary Function SanitizeUGCTagsArray **************************
struct Z_Construct_UFunction_USIK_UtilsLibrary_SanitizeUGCTagsArray_Statics
{
	struct SIK_UtilsLibrary_eventSanitizeUGCTagsArray_Parms
	{
		TArray<FString> Tags;
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || Helper Functions || UGC" },
		{ "DisplayName", "Sanitize UGC Tags Array" },
		{ "Keywords", "SanitizeUGCTagsArray" },
		{ "ModuleRelativePath", "Functions/Utils/SIK_UtilsLibrary.h" },
		{ "ToolTip", "Sanitizes an array of UGC tags, removing invalid ones and cleaning valid ones" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SanitizeUGCTagsArray constinit property declarations ******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Tags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Tags;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SanitizeUGCTagsArray constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SanitizeUGCTagsArray Property Definitions *****************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_SanitizeUGCTagsArray_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_SanitizeUGCTagsArray_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventSanitizeUGCTagsArray_Parms, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tags_MetaData), NewProp_Tags_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_SanitizeUGCTagsArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_SanitizeUGCTagsArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventSanitizeUGCTagsArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UtilsLibrary_SanitizeUGCTagsArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_SanitizeUGCTagsArray_Statics::NewProp_Tags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_SanitizeUGCTagsArray_Statics::NewProp_Tags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_SanitizeUGCTagsArray_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_SanitizeUGCTagsArray_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_SanitizeUGCTagsArray_Statics::PropPointers) < 2048);
// ********** End Function SanitizeUGCTagsArray Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UtilsLibrary_SanitizeUGCTagsArray_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_UtilsLibrary, nullptr, "SanitizeUGCTagsArray", 	Z_Construct_UFunction_USIK_UtilsLibrary_SanitizeUGCTagsArray_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_SanitizeUGCTagsArray_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_SanitizeUGCTagsArray_Statics::SIK_UtilsLibrary_eventSanitizeUGCTagsArray_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_SanitizeUGCTagsArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UtilsLibrary_SanitizeUGCTagsArray_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_SanitizeUGCTagsArray_Statics::SIK_UtilsLibrary_eventSanitizeUGCTagsArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UtilsLibrary_SanitizeUGCTagsArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UtilsLibrary_SanitizeUGCTagsArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UtilsLibrary::execSanitizeUGCTagsArray)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_Tags);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=USIK_UtilsLibrary::SanitizeUGCTagsArray(Z_Param_Out_Tags);
	P_NATIVE_END;
}
// ********** End Class USIK_UtilsLibrary Function SanitizeUGCTagsArray ****************************

// ********** Begin Class USIK_UtilsLibrary Function SaveGameObjectToByteArray *********************
struct Z_Construct_UFunction_USIK_UtilsLibrary_SaveGameObjectToByteArray_Statics
{
	struct SIK_UtilsLibrary_eventSaveGameObjectToByteArray_Parms
	{
		USaveGame* SaveGameObject;
		TArray<uint8> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || Helper Functions || Utils" },
		{ "DisplayName", "Save Game Object to Byte Array" },
		{ "Keywords", "SaveGameToByteArray" },
		{ "ModuleRelativePath", "Functions/Utils/SIK_UtilsLibrary.h" },
		{ "ToolTip", "Converts a Save Game Object to Byte Array for Steam Cloud storage" },
	};
#endif // WITH_METADATA

// ********** Begin Function SaveGameObjectToByteArray constinit property declarations *************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SaveGameObject;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SaveGameObjectToByteArray constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SaveGameObjectToByteArray Property Definitions ************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_SaveGameObjectToByteArray_Statics::NewProp_SaveGameObject = { "SaveGameObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventSaveGameObjectToByteArray_Parms, SaveGameObject), Z_Construct_UClass_USaveGame_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_SaveGameObjectToByteArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_SaveGameObjectToByteArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventSaveGameObjectToByteArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UtilsLibrary_SaveGameObjectToByteArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_SaveGameObjectToByteArray_Statics::NewProp_SaveGameObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_SaveGameObjectToByteArray_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_SaveGameObjectToByteArray_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_SaveGameObjectToByteArray_Statics::PropPointers) < 2048);
// ********** End Function SaveGameObjectToByteArray Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UtilsLibrary_SaveGameObjectToByteArray_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_UtilsLibrary, nullptr, "SaveGameObjectToByteArray", 	Z_Construct_UFunction_USIK_UtilsLibrary_SaveGameObjectToByteArray_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_SaveGameObjectToByteArray_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_SaveGameObjectToByteArray_Statics::SIK_UtilsLibrary_eventSaveGameObjectToByteArray_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_SaveGameObjectToByteArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UtilsLibrary_SaveGameObjectToByteArray_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_SaveGameObjectToByteArray_Statics::SIK_UtilsLibrary_eventSaveGameObjectToByteArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UtilsLibrary_SaveGameObjectToByteArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UtilsLibrary_SaveGameObjectToByteArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UtilsLibrary::execSaveGameObjectToByteArray)
{
	P_GET_OBJECT(USaveGame,Z_Param_SaveGameObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<uint8>*)Z_Param__Result=USIK_UtilsLibrary::SaveGameObjectToByteArray(Z_Param_SaveGameObject);
	P_NATIVE_END;
}
// ********** End Class USIK_UtilsLibrary Function SaveGameObjectToByteArray ***********************

// ********** Begin Class USIK_UtilsLibrary Function SerializeStructArrayToJSON ********************
struct Z_Construct_UFunction_USIK_UtilsLibrary_SerializeStructArrayToJSON_Statics
{
	struct SIK_UtilsLibrary_eventSerializeStructArrayToJSON_Parms
	{
		TArray<int32> InStructArray;
		FString OutJsonString;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || Helper Functions || JSON Serialization" },
		{ "CustomThunk", "true" },
		{ "DisplayName", "Serialize Struct Array To JSON" },
		{ "Keywords", "SerializeStructArrayToJSON" },
		{ "ModuleRelativePath", "Functions/Utils/SIK_UtilsLibrary.h" },
		{ "SetParam", "InStructArray" },
		{ "ToolTip", "Converts array of structs to JSON string" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InStructArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SerializeStructArrayToJSON constinit property declarations ************
	static const UECodeGen_Private::FIntPropertyParams NewProp_InStructArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InStructArray;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutJsonString;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SerializeStructArrayToJSON constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SerializeStructArrayToJSON Property Definitions ***********************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_SerializeStructArrayToJSON_Statics::NewProp_InStructArray_Inner = { "InStructArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_SerializeStructArrayToJSON_Statics::NewProp_InStructArray = { "InStructArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventSerializeStructArrayToJSON_Parms, InStructArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InStructArray_MetaData), NewProp_InStructArray_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_SerializeStructArrayToJSON_Statics::NewProp_OutJsonString = { "OutJsonString", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventSerializeStructArrayToJSON_Parms, OutJsonString), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_UtilsLibrary_SerializeStructArrayToJSON_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UtilsLibrary_eventSerializeStructArrayToJSON_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_SerializeStructArrayToJSON_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UtilsLibrary_eventSerializeStructArrayToJSON_Parms), &Z_Construct_UFunction_USIK_UtilsLibrary_SerializeStructArrayToJSON_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UtilsLibrary_SerializeStructArrayToJSON_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_SerializeStructArrayToJSON_Statics::NewProp_InStructArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_SerializeStructArrayToJSON_Statics::NewProp_InStructArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_SerializeStructArrayToJSON_Statics::NewProp_OutJsonString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_SerializeStructArrayToJSON_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_SerializeStructArrayToJSON_Statics::PropPointers) < 2048);
// ********** End Function SerializeStructArrayToJSON Property Definitions *************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UtilsLibrary_SerializeStructArrayToJSON_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_UtilsLibrary, nullptr, "SerializeStructArrayToJSON", 	Z_Construct_UFunction_USIK_UtilsLibrary_SerializeStructArrayToJSON_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_SerializeStructArrayToJSON_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_SerializeStructArrayToJSON_Statics::SIK_UtilsLibrary_eventSerializeStructArrayToJSON_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_SerializeStructArrayToJSON_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UtilsLibrary_SerializeStructArrayToJSON_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_SerializeStructArrayToJSON_Statics::SIK_UtilsLibrary_eventSerializeStructArrayToJSON_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UtilsLibrary_SerializeStructArrayToJSON()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UtilsLibrary_SerializeStructArrayToJSON_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class USIK_UtilsLibrary Function SerializeStructArrayToJSON **********************

// ********** Begin Class USIK_UtilsLibrary Function SerializeStructToJSON *************************
struct Z_Construct_UFunction_USIK_UtilsLibrary_SerializeStructToJSON_Statics
{
	struct SIK_UtilsLibrary_eventSerializeStructToJSON_Parms
	{
		int32 InStruct;
		FString OutJsonString;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || Helper Functions || JSON Serialization" },
		{ "CustomStructureParam", "InStruct" },
		{ "CustomThunk", "true" },
		{ "DisplayName", "Serialize Struct To JSON" },
		{ "Keywords", "SerializeStructToJSON" },
		{ "ModuleRelativePath", "Functions/Utils/SIK_UtilsLibrary.h" },
		{ "ToolTip", "Converts any struct to JSON string for saving or networking" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InStruct_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SerializeStructToJSON constinit property declarations *****************
	static const UECodeGen_Private::FIntPropertyParams NewProp_InStruct;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutJsonString;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SerializeStructToJSON constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SerializeStructToJSON Property Definitions ****************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_SerializeStructToJSON_Statics::NewProp_InStruct = { "InStruct", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventSerializeStructToJSON_Parms, InStruct), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InStruct_MetaData), NewProp_InStruct_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_SerializeStructToJSON_Statics::NewProp_OutJsonString = { "OutJsonString", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventSerializeStructToJSON_Parms, OutJsonString), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_UtilsLibrary_SerializeStructToJSON_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UtilsLibrary_eventSerializeStructToJSON_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_SerializeStructToJSON_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UtilsLibrary_eventSerializeStructToJSON_Parms), &Z_Construct_UFunction_USIK_UtilsLibrary_SerializeStructToJSON_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UtilsLibrary_SerializeStructToJSON_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_SerializeStructToJSON_Statics::NewProp_InStruct,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_SerializeStructToJSON_Statics::NewProp_OutJsonString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_SerializeStructToJSON_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_SerializeStructToJSON_Statics::PropPointers) < 2048);
// ********** End Function SerializeStructToJSON Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UtilsLibrary_SerializeStructToJSON_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_UtilsLibrary, nullptr, "SerializeStructToJSON", 	Z_Construct_UFunction_USIK_UtilsLibrary_SerializeStructToJSON_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_SerializeStructToJSON_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_SerializeStructToJSON_Statics::SIK_UtilsLibrary_eventSerializeStructToJSON_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_SerializeStructToJSON_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UtilsLibrary_SerializeStructToJSON_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_SerializeStructToJSON_Statics::SIK_UtilsLibrary_eventSerializeStructToJSON_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UtilsLibrary_SerializeStructToJSON()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UtilsLibrary_SerializeStructToJSON_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class USIK_UtilsLibrary Function SerializeStructToJSON ***************************

// ********** Begin Class USIK_UtilsLibrary Function SetGameLauncherMode ***************************
struct Z_Construct_UFunction_USIK_UtilsLibrary_SetGameLauncherMode_Statics
{
	struct SIK_UtilsLibrary_eventSetGameLauncherMode_Parms
	{
		bool bLauncherMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Utils" },
		{ "DisplayName", "Set Game Launcher Mode" },
		{ "Keywords", "SetGameLauncherMode" },
		{ "ModuleRelativePath", "Functions/Utils/SIK_UtilsLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetGameLauncherMode constinit property declarations *******************
	static void NewProp_bLauncherMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLauncherMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetGameLauncherMode constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetGameLauncherMode Property Definitions ******************************
void Z_Construct_UFunction_USIK_UtilsLibrary_SetGameLauncherMode_Statics::NewProp_bLauncherMode_SetBit(void* Obj)
{
	((SIK_UtilsLibrary_eventSetGameLauncherMode_Parms*)Obj)->bLauncherMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_SetGameLauncherMode_Statics::NewProp_bLauncherMode = { "bLauncherMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UtilsLibrary_eventSetGameLauncherMode_Parms), &Z_Construct_UFunction_USIK_UtilsLibrary_SetGameLauncherMode_Statics::NewProp_bLauncherMode_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UtilsLibrary_SetGameLauncherMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_SetGameLauncherMode_Statics::NewProp_bLauncherMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_SetGameLauncherMode_Statics::PropPointers) < 2048);
// ********** End Function SetGameLauncherMode Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UtilsLibrary_SetGameLauncherMode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_UtilsLibrary, nullptr, "SetGameLauncherMode", 	Z_Construct_UFunction_USIK_UtilsLibrary_SetGameLauncherMode_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_SetGameLauncherMode_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_SetGameLauncherMode_Statics::SIK_UtilsLibrary_eventSetGameLauncherMode_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_SetGameLauncherMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UtilsLibrary_SetGameLauncherMode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_SetGameLauncherMode_Statics::SIK_UtilsLibrary_eventSetGameLauncherMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UtilsLibrary_SetGameLauncherMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UtilsLibrary_SetGameLauncherMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UtilsLibrary::execSetGameLauncherMode)
{
	P_GET_UBOOL(Z_Param_bLauncherMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_UtilsLibrary::SetGameLauncherMode(Z_Param_bLauncherMode);
	P_NATIVE_END;
}
// ********** End Class USIK_UtilsLibrary Function SetGameLauncherMode *****************************

// ********** Begin Class USIK_UtilsLibrary Function SetOverlayNotificationInset *******************
struct Z_Construct_UFunction_USIK_UtilsLibrary_SetOverlayNotificationInset_Statics
{
	struct SIK_UtilsLibrary_eventSetOverlayNotificationInset_Parms
	{
		int32 HorizontalInset;
		int32 VerticalInset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Utils" },
		{ "DisplayName", "Set Overlay Notification Inset" },
		{ "Keywords", "SetOverlayNotificationInset" },
		{ "ModuleRelativePath", "Functions/Utils/SIK_UtilsLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetOverlayNotificationInset constinit property declarations ***********
	static const UECodeGen_Private::FIntPropertyParams NewProp_HorizontalInset;
	static const UECodeGen_Private::FIntPropertyParams NewProp_VerticalInset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetOverlayNotificationInset constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetOverlayNotificationInset Property Definitions **********************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_SetOverlayNotificationInset_Statics::NewProp_HorizontalInset = { "HorizontalInset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventSetOverlayNotificationInset_Parms, HorizontalInset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_SetOverlayNotificationInset_Statics::NewProp_VerticalInset = { "VerticalInset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventSetOverlayNotificationInset_Parms, VerticalInset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UtilsLibrary_SetOverlayNotificationInset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_SetOverlayNotificationInset_Statics::NewProp_HorizontalInset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_SetOverlayNotificationInset_Statics::NewProp_VerticalInset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_SetOverlayNotificationInset_Statics::PropPointers) < 2048);
// ********** End Function SetOverlayNotificationInset Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UtilsLibrary_SetOverlayNotificationInset_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_UtilsLibrary, nullptr, "SetOverlayNotificationInset", 	Z_Construct_UFunction_USIK_UtilsLibrary_SetOverlayNotificationInset_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_SetOverlayNotificationInset_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_SetOverlayNotificationInset_Statics::SIK_UtilsLibrary_eventSetOverlayNotificationInset_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_SetOverlayNotificationInset_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UtilsLibrary_SetOverlayNotificationInset_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_SetOverlayNotificationInset_Statics::SIK_UtilsLibrary_eventSetOverlayNotificationInset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UtilsLibrary_SetOverlayNotificationInset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UtilsLibrary_SetOverlayNotificationInset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UtilsLibrary::execSetOverlayNotificationInset)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_HorizontalInset);
	P_GET_PROPERTY(FIntProperty,Z_Param_VerticalInset);
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_UtilsLibrary::SetOverlayNotificationInset(Z_Param_HorizontalInset,Z_Param_VerticalInset);
	P_NATIVE_END;
}
// ********** End Class USIK_UtilsLibrary Function SetOverlayNotificationInset *********************

// ********** Begin Class USIK_UtilsLibrary Function SetOverlayNotificationPosition ****************
struct Z_Construct_UFunction_USIK_UtilsLibrary_SetOverlayNotificationPosition_Statics
{
	struct SIK_UtilsLibrary_eventSetOverlayNotificationPosition_Parms
	{
		TEnumAsByte<ESIK_NotificationPosition> NotificationPosition;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Utils" },
		{ "DisplayName", "Set Overlay Notification Position" },
		{ "Keywords", "SetOverlayNotificationPosition" },
		{ "ModuleRelativePath", "Functions/Utils/SIK_UtilsLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetOverlayNotificationPosition constinit property declarations ********
	static const UECodeGen_Private::FBytePropertyParams NewProp_NotificationPosition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetOverlayNotificationPosition constinit property declarations **********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetOverlayNotificationPosition Property Definitions *******************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_SetOverlayNotificationPosition_Statics::NewProp_NotificationPosition = { "NotificationPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventSetOverlayNotificationPosition_Parms, NotificationPosition), Z_Construct_UEnum_SteamIntegrationKit_ESIK_NotificationPosition, METADATA_PARAMS(0, nullptr) }; // 2506201625
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UtilsLibrary_SetOverlayNotificationPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_SetOverlayNotificationPosition_Statics::NewProp_NotificationPosition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_SetOverlayNotificationPosition_Statics::PropPointers) < 2048);
// ********** End Function SetOverlayNotificationPosition Property Definitions *********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UtilsLibrary_SetOverlayNotificationPosition_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_UtilsLibrary, nullptr, "SetOverlayNotificationPosition", 	Z_Construct_UFunction_USIK_UtilsLibrary_SetOverlayNotificationPosition_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_SetOverlayNotificationPosition_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_SetOverlayNotificationPosition_Statics::SIK_UtilsLibrary_eventSetOverlayNotificationPosition_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_SetOverlayNotificationPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UtilsLibrary_SetOverlayNotificationPosition_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_SetOverlayNotificationPosition_Statics::SIK_UtilsLibrary_eventSetOverlayNotificationPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UtilsLibrary_SetOverlayNotificationPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UtilsLibrary_SetOverlayNotificationPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UtilsLibrary::execSetOverlayNotificationPosition)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_NotificationPosition);
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_UtilsLibrary::SetOverlayNotificationPosition(ESIK_NotificationPosition(Z_Param_NotificationPosition));
	P_NATIVE_END;
}
// ********** End Class USIK_UtilsLibrary Function SetOverlayNotificationPosition ******************

// ********** Begin Class USIK_UtilsLibrary Function SetVRHeadsetStreamingEnabled ******************
struct Z_Construct_UFunction_USIK_UtilsLibrary_SetVRHeadsetStreamingEnabled_Statics
{
	struct SIK_UtilsLibrary_eventSetVRHeadsetStreamingEnabled_Parms
	{
		bool bEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Utils" },
		{ "DisplayName", "Set VR Headset Streaming Enabled" },
		{ "Keywords", "SetVRHeadsetStreamingEnabled" },
		{ "ModuleRelativePath", "Functions/Utils/SIK_UtilsLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetVRHeadsetStreamingEnabled constinit property declarations **********
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetVRHeadsetStreamingEnabled constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetVRHeadsetStreamingEnabled Property Definitions *********************
void Z_Construct_UFunction_USIK_UtilsLibrary_SetVRHeadsetStreamingEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((SIK_UtilsLibrary_eventSetVRHeadsetStreamingEnabled_Parms*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_SetVRHeadsetStreamingEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UtilsLibrary_eventSetVRHeadsetStreamingEnabled_Parms), &Z_Construct_UFunction_USIK_UtilsLibrary_SetVRHeadsetStreamingEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UtilsLibrary_SetVRHeadsetStreamingEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_SetVRHeadsetStreamingEnabled_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_SetVRHeadsetStreamingEnabled_Statics::PropPointers) < 2048);
// ********** End Function SetVRHeadsetStreamingEnabled Property Definitions ***********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UtilsLibrary_SetVRHeadsetStreamingEnabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_UtilsLibrary, nullptr, "SetVRHeadsetStreamingEnabled", 	Z_Construct_UFunction_USIK_UtilsLibrary_SetVRHeadsetStreamingEnabled_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_SetVRHeadsetStreamingEnabled_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_SetVRHeadsetStreamingEnabled_Statics::SIK_UtilsLibrary_eventSetVRHeadsetStreamingEnabled_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_SetVRHeadsetStreamingEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UtilsLibrary_SetVRHeadsetStreamingEnabled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_SetVRHeadsetStreamingEnabled_Statics::SIK_UtilsLibrary_eventSetVRHeadsetStreamingEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UtilsLibrary_SetVRHeadsetStreamingEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UtilsLibrary_SetVRHeadsetStreamingEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UtilsLibrary::execSetVRHeadsetStreamingEnabled)
{
	P_GET_UBOOL(Z_Param_bEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_UtilsLibrary::SetVRHeadsetStreamingEnabled(Z_Param_bEnabled);
	P_NATIVE_END;
}
// ********** End Class USIK_UtilsLibrary Function SetVRHeadsetStreamingEnabled ********************

// ********** Begin Class USIK_UtilsLibrary Function ShowFloatingGamepadTextInput ******************
struct Z_Construct_UFunction_USIK_UtilsLibrary_ShowFloatingGamepadTextInput_Statics
{
	struct SIK_UtilsLibrary_eventShowFloatingGamepadTextInput_Parms
	{
		TEnumAsByte<ESIK_EFloatingGamepadTextInputMode> KeyboardMode;
		int32 TextFieldXPosition;
		int32 TextFieldYPosition;
		int32 TextFieldWidth;
		int32 TextFieldHeight;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Utils" },
		{ "DisplayName", "Show Floating Gamepad Text Input" },
		{ "Keywords", "ShowFloatingGamepadTextInput" },
		{ "ModuleRelativePath", "Functions/Utils/SIK_UtilsLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ShowFloatingGamepadTextInput constinit property declarations **********
	static const UECodeGen_Private::FBytePropertyParams NewProp_KeyboardMode;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TextFieldXPosition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TextFieldYPosition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TextFieldWidth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TextFieldHeight;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ShowFloatingGamepadTextInput constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ShowFloatingGamepadTextInput Property Definitions *********************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_ShowFloatingGamepadTextInput_Statics::NewProp_KeyboardMode = { "KeyboardMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventShowFloatingGamepadTextInput_Parms, KeyboardMode), Z_Construct_UEnum_SteamIntegrationKit_ESIK_EFloatingGamepadTextInputMode, METADATA_PARAMS(0, nullptr) }; // 272099106
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_ShowFloatingGamepadTextInput_Statics::NewProp_TextFieldXPosition = { "TextFieldXPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventShowFloatingGamepadTextInput_Parms, TextFieldXPosition), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_ShowFloatingGamepadTextInput_Statics::NewProp_TextFieldYPosition = { "TextFieldYPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventShowFloatingGamepadTextInput_Parms, TextFieldYPosition), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_ShowFloatingGamepadTextInput_Statics::NewProp_TextFieldWidth = { "TextFieldWidth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventShowFloatingGamepadTextInput_Parms, TextFieldWidth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_ShowFloatingGamepadTextInput_Statics::NewProp_TextFieldHeight = { "TextFieldHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventShowFloatingGamepadTextInput_Parms, TextFieldHeight), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_UtilsLibrary_ShowFloatingGamepadTextInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UtilsLibrary_eventShowFloatingGamepadTextInput_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_ShowFloatingGamepadTextInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UtilsLibrary_eventShowFloatingGamepadTextInput_Parms), &Z_Construct_UFunction_USIK_UtilsLibrary_ShowFloatingGamepadTextInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UtilsLibrary_ShowFloatingGamepadTextInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_ShowFloatingGamepadTextInput_Statics::NewProp_KeyboardMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_ShowFloatingGamepadTextInput_Statics::NewProp_TextFieldXPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_ShowFloatingGamepadTextInput_Statics::NewProp_TextFieldYPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_ShowFloatingGamepadTextInput_Statics::NewProp_TextFieldWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_ShowFloatingGamepadTextInput_Statics::NewProp_TextFieldHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_ShowFloatingGamepadTextInput_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_ShowFloatingGamepadTextInput_Statics::PropPointers) < 2048);
// ********** End Function ShowFloatingGamepadTextInput Property Definitions ***********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UtilsLibrary_ShowFloatingGamepadTextInput_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_UtilsLibrary, nullptr, "ShowFloatingGamepadTextInput", 	Z_Construct_UFunction_USIK_UtilsLibrary_ShowFloatingGamepadTextInput_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_ShowFloatingGamepadTextInput_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_ShowFloatingGamepadTextInput_Statics::SIK_UtilsLibrary_eventShowFloatingGamepadTextInput_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_ShowFloatingGamepadTextInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UtilsLibrary_ShowFloatingGamepadTextInput_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_ShowFloatingGamepadTextInput_Statics::SIK_UtilsLibrary_eventShowFloatingGamepadTextInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UtilsLibrary_ShowFloatingGamepadTextInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UtilsLibrary_ShowFloatingGamepadTextInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UtilsLibrary::execShowFloatingGamepadTextInput)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_KeyboardMode);
	P_GET_PROPERTY(FIntProperty,Z_Param_TextFieldXPosition);
	P_GET_PROPERTY(FIntProperty,Z_Param_TextFieldYPosition);
	P_GET_PROPERTY(FIntProperty,Z_Param_TextFieldWidth);
	P_GET_PROPERTY(FIntProperty,Z_Param_TextFieldHeight);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UtilsLibrary::ShowFloatingGamepadTextInput(ESIK_EFloatingGamepadTextInputMode(Z_Param_KeyboardMode),Z_Param_TextFieldXPosition,Z_Param_TextFieldYPosition,Z_Param_TextFieldWidth,Z_Param_TextFieldHeight);
	P_NATIVE_END;
}
// ********** End Class USIK_UtilsLibrary Function ShowFloatingGamepadTextInput ********************

// ********** Begin Class USIK_UtilsLibrary Function ShowGamepadTextInput **************************
struct Z_Construct_UFunction_USIK_UtilsLibrary_ShowGamepadTextInput_Statics
{
	struct SIK_UtilsLibrary_eventShowGamepadTextInput_Parms
	{
		TEnumAsByte<ESIK_EGamepadTextInputMode> InputMode;
		TEnumAsByte<ESIK_EGamepadTextInputLineMode> LineInputMode;
		FString Description;
		int32 CharMax;
		FString ExistingText;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Utils" },
		{ "DisplayName", "Show Gamepad Text Input" },
		{ "Keywords", "ShowGamepadTextInput" },
		{ "ModuleRelativePath", "Functions/Utils/SIK_UtilsLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExistingText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ShowGamepadTextInput constinit property declarations ******************
	static const UECodeGen_Private::FBytePropertyParams NewProp_InputMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LineInputMode;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CharMax;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExistingText;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ShowGamepadTextInput constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ShowGamepadTextInput Property Definitions *****************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_ShowGamepadTextInput_Statics::NewProp_InputMode = { "InputMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventShowGamepadTextInput_Parms, InputMode), Z_Construct_UEnum_SteamIntegrationKit_ESIK_EGamepadTextInputMode, METADATA_PARAMS(0, nullptr) }; // 1413543027
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_ShowGamepadTextInput_Statics::NewProp_LineInputMode = { "LineInputMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventShowGamepadTextInput_Parms, LineInputMode), Z_Construct_UEnum_SteamIntegrationKit_ESIK_EGamepadTextInputLineMode, METADATA_PARAMS(0, nullptr) }; // 1422390230
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_ShowGamepadTextInput_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventShowGamepadTextInput_Parms, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_ShowGamepadTextInput_Statics::NewProp_CharMax = { "CharMax", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventShowGamepadTextInput_Parms, CharMax), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_ShowGamepadTextInput_Statics::NewProp_ExistingText = { "ExistingText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventShowGamepadTextInput_Parms, ExistingText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExistingText_MetaData), NewProp_ExistingText_MetaData) };
void Z_Construct_UFunction_USIK_UtilsLibrary_ShowGamepadTextInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UtilsLibrary_eventShowGamepadTextInput_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_ShowGamepadTextInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UtilsLibrary_eventShowGamepadTextInput_Parms), &Z_Construct_UFunction_USIK_UtilsLibrary_ShowGamepadTextInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UtilsLibrary_ShowGamepadTextInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_ShowGamepadTextInput_Statics::NewProp_InputMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_ShowGamepadTextInput_Statics::NewProp_LineInputMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_ShowGamepadTextInput_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_ShowGamepadTextInput_Statics::NewProp_CharMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_ShowGamepadTextInput_Statics::NewProp_ExistingText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_ShowGamepadTextInput_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_ShowGamepadTextInput_Statics::PropPointers) < 2048);
// ********** End Function ShowGamepadTextInput Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UtilsLibrary_ShowGamepadTextInput_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_UtilsLibrary, nullptr, "ShowGamepadTextInput", 	Z_Construct_UFunction_USIK_UtilsLibrary_ShowGamepadTextInput_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_ShowGamepadTextInput_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_ShowGamepadTextInput_Statics::SIK_UtilsLibrary_eventShowGamepadTextInput_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_ShowGamepadTextInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UtilsLibrary_ShowGamepadTextInput_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_ShowGamepadTextInput_Statics::SIK_UtilsLibrary_eventShowGamepadTextInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UtilsLibrary_ShowGamepadTextInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UtilsLibrary_ShowGamepadTextInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UtilsLibrary::execShowGamepadTextInput)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_InputMode);
	P_GET_PROPERTY(FByteProperty,Z_Param_LineInputMode);
	P_GET_PROPERTY(FStrProperty,Z_Param_Description);
	P_GET_PROPERTY(FIntProperty,Z_Param_CharMax);
	P_GET_PROPERTY(FStrProperty,Z_Param_ExistingText);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UtilsLibrary::ShowGamepadTextInput(ESIK_EGamepadTextInputMode(Z_Param_InputMode),ESIK_EGamepadTextInputLineMode(Z_Param_LineInputMode),Z_Param_Description,Z_Param_CharMax,Z_Param_ExistingText);
	P_NATIVE_END;
}
// ********** End Class USIK_UtilsLibrary Function ShowGamepadTextInput ****************************

// ********** Begin Class USIK_UtilsLibrary Function StartVrDashboard ******************************
struct Z_Construct_UFunction_USIK_UtilsLibrary_StartVrDashboard_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Utils" },
		{ "DisplayName", "Start Vr Dashboard" },
		{ "Keywords", "StartVrDashboard" },
		{ "ModuleRelativePath", "Functions/Utils/SIK_UtilsLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function StartVrDashboard constinit property declarations **********************
// ********** End Function StartVrDashboard constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UtilsLibrary_StartVrDashboard_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_UtilsLibrary, nullptr, "StartVrDashboard", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_StartVrDashboard_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UtilsLibrary_StartVrDashboard_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USIK_UtilsLibrary_StartVrDashboard()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UtilsLibrary_StartVrDashboard_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UtilsLibrary::execStartVrDashboard)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_UtilsLibrary::StartVrDashboard();
	P_NATIVE_END;
}
// ********** End Class USIK_UtilsLibrary Function StartVrDashboard ********************************

// ********** Begin Class USIK_UtilsLibrary Function StringArrayToJSON *****************************
struct Z_Construct_UFunction_USIK_UtilsLibrary_StringArrayToJSON_Statics
{
	struct SIK_UtilsLibrary_eventStringArrayToJSON_Parms
	{
		TArray<FString> StringArray;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || Helper Functions || JSON Serialization" },
		{ "DisplayName", "String Array To JSON" },
		{ "Keywords", "StringArrayToJSON" },
		{ "ModuleRelativePath", "Functions/Utils/SIK_UtilsLibrary.h" },
		{ "ToolTip", "Converts array of strings to JSON array format" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StringArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function StringArrayToJSON constinit property declarations *********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_StringArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StringArray;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function StringArrayToJSON constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function StringArrayToJSON Property Definitions ********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_StringArrayToJSON_Statics::NewProp_StringArray_Inner = { "StringArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_StringArrayToJSON_Statics::NewProp_StringArray = { "StringArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventStringArrayToJSON_Parms, StringArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StringArray_MetaData), NewProp_StringArray_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_StringArrayToJSON_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventStringArrayToJSON_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UtilsLibrary_StringArrayToJSON_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_StringArrayToJSON_Statics::NewProp_StringArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_StringArrayToJSON_Statics::NewProp_StringArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_StringArrayToJSON_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_StringArrayToJSON_Statics::PropPointers) < 2048);
// ********** End Function StringArrayToJSON Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UtilsLibrary_StringArrayToJSON_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_UtilsLibrary, nullptr, "StringArrayToJSON", 	Z_Construct_UFunction_USIK_UtilsLibrary_StringArrayToJSON_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_StringArrayToJSON_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_StringArrayToJSON_Statics::SIK_UtilsLibrary_eventStringArrayToJSON_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_StringArrayToJSON_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UtilsLibrary_StringArrayToJSON_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_StringArrayToJSON_Statics::SIK_UtilsLibrary_eventStringArrayToJSON_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UtilsLibrary_StringArrayToJSON()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UtilsLibrary_StringArrayToJSON_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UtilsLibrary::execStringArrayToJSON)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_StringArray);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USIK_UtilsLibrary::StringArrayToJSON(Z_Param_Out_StringArray);
	P_NATIVE_END;
}
// ********** End Class USIK_UtilsLibrary Function StringArrayToJSON *******************************

// ********** Begin Class USIK_UtilsLibrary Function ValidateUGCTagsArray **************************
struct Z_Construct_UFunction_USIK_UtilsLibrary_ValidateUGCTagsArray_Statics
{
	struct SIK_UtilsLibrary_eventValidateUGCTagsArray_Parms
	{
		TArray<FString> Tags;
		TArray<FString> InvalidTags;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || Helper Functions || UGC" },
		{ "DisplayName", "Validate UGC Tags Array" },
		{ "Keywords", "ValidateUGCTagsArray" },
		{ "ModuleRelativePath", "Functions/Utils/SIK_UtilsLibrary.h" },
		{ "ToolTip", "Validates an array of UGC tags and returns invalid ones for debugging" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ValidateUGCTagsArray constinit property declarations ******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Tags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Tags;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InvalidTags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InvalidTags;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ValidateUGCTagsArray constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ValidateUGCTagsArray Property Definitions *****************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_ValidateUGCTagsArray_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_ValidateUGCTagsArray_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventValidateUGCTagsArray_Parms, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tags_MetaData), NewProp_Tags_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_ValidateUGCTagsArray_Statics::NewProp_InvalidTags_Inner = { "InvalidTags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_ValidateUGCTagsArray_Statics::NewProp_InvalidTags = { "InvalidTags", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventValidateUGCTagsArray_Parms, InvalidTags), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_UtilsLibrary_ValidateUGCTagsArray_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UtilsLibrary_eventValidateUGCTagsArray_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_ValidateUGCTagsArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UtilsLibrary_eventValidateUGCTagsArray_Parms), &Z_Construct_UFunction_USIK_UtilsLibrary_ValidateUGCTagsArray_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UtilsLibrary_ValidateUGCTagsArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_ValidateUGCTagsArray_Statics::NewProp_Tags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_ValidateUGCTagsArray_Statics::NewProp_Tags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_ValidateUGCTagsArray_Statics::NewProp_InvalidTags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_ValidateUGCTagsArray_Statics::NewProp_InvalidTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_ValidateUGCTagsArray_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_ValidateUGCTagsArray_Statics::PropPointers) < 2048);
// ********** End Function ValidateUGCTagsArray Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UtilsLibrary_ValidateUGCTagsArray_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_UtilsLibrary, nullptr, "ValidateUGCTagsArray", 	Z_Construct_UFunction_USIK_UtilsLibrary_ValidateUGCTagsArray_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_ValidateUGCTagsArray_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_ValidateUGCTagsArray_Statics::SIK_UtilsLibrary_eventValidateUGCTagsArray_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_ValidateUGCTagsArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UtilsLibrary_ValidateUGCTagsArray_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_ValidateUGCTagsArray_Statics::SIK_UtilsLibrary_eventValidateUGCTagsArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UtilsLibrary_ValidateUGCTagsArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UtilsLibrary_ValidateUGCTagsArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UtilsLibrary::execValidateUGCTagsArray)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_Tags);
	P_GET_TARRAY_REF(FString,Z_Param_Out_InvalidTags);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UtilsLibrary::ValidateUGCTagsArray(Z_Param_Out_Tags,Z_Param_Out_InvalidTags);
	P_NATIVE_END;
}
// ********** End Class USIK_UtilsLibrary Function ValidateUGCTagsArray ****************************

// ********** Begin Class USIK_UtilsLibrary Function WriteTextFile *********************************
struct Z_Construct_UFunction_USIK_UtilsLibrary_WriteTextFile_Statics
{
	struct SIK_UtilsLibrary_eventWriteTextFile_Parms
	{
		FString Content;
		FString FilePath;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || Helper Functions || File I/O" },
		{ "DisplayName", "Write Text File" },
		{ "Keywords", "WriteTextFile" },
		{ "ModuleRelativePath", "Functions/Utils/SIK_UtilsLibrary.h" },
		{ "ToolTip", "Writes string content to text file" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function WriteTextFile constinit property declarations *************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Content;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function WriteTextFile constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function WriteTextFile Property Definitions ************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_WriteTextFile_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventWriteTextFile_Parms, Content), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Content_MetaData), NewProp_Content_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_WriteTextFile_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventWriteTextFile_Parms, FilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilePath_MetaData), NewProp_FilePath_MetaData) };
void Z_Construct_UFunction_USIK_UtilsLibrary_WriteTextFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UtilsLibrary_eventWriteTextFile_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_WriteTextFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UtilsLibrary_eventWriteTextFile_Parms), &Z_Construct_UFunction_USIK_UtilsLibrary_WriteTextFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UtilsLibrary_WriteTextFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_WriteTextFile_Statics::NewProp_Content,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_WriteTextFile_Statics::NewProp_FilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_WriteTextFile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_WriteTextFile_Statics::PropPointers) < 2048);
// ********** End Function WriteTextFile Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UtilsLibrary_WriteTextFile_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_UtilsLibrary, nullptr, "WriteTextFile", 	Z_Construct_UFunction_USIK_UtilsLibrary_WriteTextFile_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_WriteTextFile_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_WriteTextFile_Statics::SIK_UtilsLibrary_eventWriteTextFile_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_WriteTextFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UtilsLibrary_WriteTextFile_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_WriteTextFile_Statics::SIK_UtilsLibrary_eventWriteTextFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UtilsLibrary_WriteTextFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UtilsLibrary_WriteTextFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UtilsLibrary::execWriteTextFile)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Content);
	P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UtilsLibrary::WriteTextFile(Z_Param_Content,Z_Param_FilePath);
	P_NATIVE_END;
}
// ********** End Class USIK_UtilsLibrary Function WriteTextFile ***********************************

// ********** Begin Class USIK_UtilsLibrary ********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_UtilsLibrary;
UClass* USIK_UtilsLibrary::GetPrivateStaticClass()
{
	using TClass = USIK_UtilsLibrary;
	if (!Z_Registration_Info_UClass_USIK_UtilsLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_UtilsLibrary"),
			Z_Registration_Info_UClass_USIK_UtilsLibrary.InnerSingleton,
			StaticRegisterNativesUSIK_UtilsLibrary,
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
	return Z_Registration_Info_UClass_USIK_UtilsLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_UtilsLibrary_NoRegister()
{
	return USIK_UtilsLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_UtilsLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/Utils/SIK_UtilsLibrary.h" },
		{ "ModuleRelativePath", "Functions/Utils/SIK_UtilsLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_UtilsLibrary constinit property declarations ************************
// ********** End Class USIK_UtilsLibrary constinit property declarations **************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("BuildJSONObject"), .Pointer = &USIK_UtilsLibrary::execBuildJSONObject },
		{ .NameUTF8 = UTF8TEXT("ByteArrayToSaveGameObject"), .Pointer = &USIK_UtilsLibrary::execByteArrayToSaveGameObject },
		{ .NameUTF8 = UTF8TEXT("CheckForSteamLobbyInvite"), .Pointer = &USIK_UtilsLibrary::execCheckForSteamLobbyInvite },
		{ .NameUTF8 = UTF8TEXT("DeserializeJSONToStruct"), .Pointer = &USIK_UtilsLibrary::execDeserializeJSONToStruct },
		{ .NameUTF8 = UTF8TEXT("DeserializeJSONToStructArray"), .Pointer = &USIK_UtilsLibrary::execDeserializeJSONToStructArray },
		{ .NameUTF8 = UTF8TEXT("DoesFileExist"), .Pointer = &USIK_UtilsLibrary::execDoesFileExist },
		{ .NameUTF8 = UTF8TEXT("EscapeJSONString"), .Pointer = &USIK_UtilsLibrary::execEscapeJSONString },
		{ .NameUTF8 = UTF8TEXT("FilterText"), .Pointer = &USIK_UtilsLibrary::execFilterText },
		{ .NameUTF8 = UTF8TEXT("GetAppID"), .Pointer = &USIK_UtilsLibrary::execGetAppID },
		{ .NameUTF8 = UTF8TEXT("GetCurrentBatteryPower"), .Pointer = &USIK_UtilsLibrary::execGetCurrentBatteryPower },
		{ .NameUTF8 = UTF8TEXT("GetEnteredGamepadTextInput"), .Pointer = &USIK_UtilsLibrary::execGetEnteredGamepadTextInput },
		{ .NameUTF8 = UTF8TEXT("GetEnteredGamepadTextLength"), .Pointer = &USIK_UtilsLibrary::execGetEnteredGamepadTextLength },
		{ .NameUTF8 = UTF8TEXT("GetImageRGBA"), .Pointer = &USIK_UtilsLibrary::execGetImageRGBA },
		{ .NameUTF8 = UTF8TEXT("GetIPCountry"), .Pointer = &USIK_UtilsLibrary::execGetIPCountry },
		{ .NameUTF8 = UTF8TEXT("GetSecondsSinceAppActive"), .Pointer = &USIK_UtilsLibrary::execGetSecondsSinceAppActive },
		{ .NameUTF8 = UTF8TEXT("GetSecondsSinceComputerActive"), .Pointer = &USIK_UtilsLibrary::execGetSecondsSinceComputerActive },
		{ .NameUTF8 = UTF8TEXT("GetServerRealTime"), .Pointer = &USIK_UtilsLibrary::execGetServerRealTime },
		{ .NameUTF8 = UTF8TEXT("GetSteamUILanguage"), .Pointer = &USIK_UtilsLibrary::execGetSteamUILanguage },
		{ .NameUTF8 = UTF8TEXT("InitFilterText"), .Pointer = &USIK_UtilsLibrary::execInitFilterText },
		{ .NameUTF8 = UTF8TEXT("IsControllerConnected"), .Pointer = &USIK_UtilsLibrary::execIsControllerConnected },
		{ .NameUTF8 = UTF8TEXT("IsOverlayEnabled"), .Pointer = &USIK_UtilsLibrary::execIsOverlayEnabled },
		{ .NameUTF8 = UTF8TEXT("IsSteamChinaLauncher"), .Pointer = &USIK_UtilsLibrary::execIsSteamChinaLauncher },
		{ .NameUTF8 = UTF8TEXT("IsSteamInBigPictureMode"), .Pointer = &USIK_UtilsLibrary::execIsSteamInBigPictureMode },
		{ .NameUTF8 = UTF8TEXT("IsSteamRunningInVR"), .Pointer = &USIK_UtilsLibrary::execIsSteamRunningInVR },
		{ .NameUTF8 = UTF8TEXT("IsSteamRunningOnSteamDeck"), .Pointer = &USIK_UtilsLibrary::execIsSteamRunningOnSteamDeck },
		{ .NameUTF8 = UTF8TEXT("IsValidJSON"), .Pointer = &USIK_UtilsLibrary::execIsValidJSON },
		{ .NameUTF8 = UTF8TEXT("IsValidUGCTag"), .Pointer = &USIK_UtilsLibrary::execIsValidUGCTag },
		{ .NameUTF8 = UTF8TEXT("IsVRHeadsetStreamingEnabled"), .Pointer = &USIK_UtilsLibrary::execIsVRHeadsetStreamingEnabled },
		{ .NameUTF8 = UTF8TEXT("JSONToStringArray"), .Pointer = &USIK_UtilsLibrary::execJSONToStringArray },
		{ .NameUTF8 = UTF8TEXT("OpenSteamKeyboard"), .Pointer = &USIK_UtilsLibrary::execOpenSteamKeyboard },
		{ .NameUTF8 = UTF8TEXT("OverlayNeedsPresent"), .Pointer = &USIK_UtilsLibrary::execOverlayNeedsPresent },
		{ .NameUTF8 = UTF8TEXT("ParseJSONValue"), .Pointer = &USIK_UtilsLibrary::execParseJSONValue },
		{ .NameUTF8 = UTF8TEXT("ReadTextFile"), .Pointer = &USIK_UtilsLibrary::execReadTextFile },
		{ .NameUTF8 = UTF8TEXT("SanitizeUGCTag"), .Pointer = &USIK_UtilsLibrary::execSanitizeUGCTag },
		{ .NameUTF8 = UTF8TEXT("SanitizeUGCTagsArray"), .Pointer = &USIK_UtilsLibrary::execSanitizeUGCTagsArray },
		{ .NameUTF8 = UTF8TEXT("SaveGameObjectToByteArray"), .Pointer = &USIK_UtilsLibrary::execSaveGameObjectToByteArray },
		{ .NameUTF8 = UTF8TEXT("SerializeStructArrayToJSON"), .Pointer = &USIK_UtilsLibrary::execSerializeStructArrayToJSON },
		{ .NameUTF8 = UTF8TEXT("SerializeStructToJSON"), .Pointer = &USIK_UtilsLibrary::execSerializeStructToJSON },
		{ .NameUTF8 = UTF8TEXT("SetGameLauncherMode"), .Pointer = &USIK_UtilsLibrary::execSetGameLauncherMode },
		{ .NameUTF8 = UTF8TEXT("SetOverlayNotificationInset"), .Pointer = &USIK_UtilsLibrary::execSetOverlayNotificationInset },
		{ .NameUTF8 = UTF8TEXT("SetOverlayNotificationPosition"), .Pointer = &USIK_UtilsLibrary::execSetOverlayNotificationPosition },
		{ .NameUTF8 = UTF8TEXT("SetVRHeadsetStreamingEnabled"), .Pointer = &USIK_UtilsLibrary::execSetVRHeadsetStreamingEnabled },
		{ .NameUTF8 = UTF8TEXT("ShowFloatingGamepadTextInput"), .Pointer = &USIK_UtilsLibrary::execShowFloatingGamepadTextInput },
		{ .NameUTF8 = UTF8TEXT("ShowGamepadTextInput"), .Pointer = &USIK_UtilsLibrary::execShowGamepadTextInput },
		{ .NameUTF8 = UTF8TEXT("StartVrDashboard"), .Pointer = &USIK_UtilsLibrary::execStartVrDashboard },
		{ .NameUTF8 = UTF8TEXT("StringArrayToJSON"), .Pointer = &USIK_UtilsLibrary::execStringArrayToJSON },
		{ .NameUTF8 = UTF8TEXT("ValidateUGCTagsArray"), .Pointer = &USIK_UtilsLibrary::execValidateUGCTagsArray },
		{ .NameUTF8 = UTF8TEXT("WriteTextFile"), .Pointer = &USIK_UtilsLibrary::execWriteTextFile },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_UtilsLibrary_BuildJSONObject, "BuildJSONObject" }, // 2180912419
		{ &Z_Construct_UFunction_USIK_UtilsLibrary_ByteArrayToSaveGameObject, "ByteArrayToSaveGameObject" }, // 138309687
		{ &Z_Construct_UFunction_USIK_UtilsLibrary_CheckForSteamLobbyInvite, "CheckForSteamLobbyInvite" }, // 2972746988
		{ &Z_Construct_UFunction_USIK_UtilsLibrary_DeserializeJSONToStruct, "DeserializeJSONToStruct" }, // 2357436457
		{ &Z_Construct_UFunction_USIK_UtilsLibrary_DeserializeJSONToStructArray, "DeserializeJSONToStructArray" }, // 1090639516
		{ &Z_Construct_UFunction_USIK_UtilsLibrary_DoesFileExist, "DoesFileExist" }, // 456151213
		{ &Z_Construct_UFunction_USIK_UtilsLibrary_EscapeJSONString, "EscapeJSONString" }, // 252022513
		{ &Z_Construct_UFunction_USIK_UtilsLibrary_FilterText, "FilterText" }, // 690972897
		{ &Z_Construct_UFunction_USIK_UtilsLibrary_GetAppID, "GetAppID" }, // 1812546278
		{ &Z_Construct_UFunction_USIK_UtilsLibrary_GetCurrentBatteryPower, "GetCurrentBatteryPower" }, // 832844208
		{ &Z_Construct_UFunction_USIK_UtilsLibrary_GetEnteredGamepadTextInput, "GetEnteredGamepadTextInput" }, // 4055152791
		{ &Z_Construct_UFunction_USIK_UtilsLibrary_GetEnteredGamepadTextLength, "GetEnteredGamepadTextLength" }, // 684921290
		{ &Z_Construct_UFunction_USIK_UtilsLibrary_GetImageRGBA, "GetImageRGBA" }, // 1577701631
		{ &Z_Construct_UFunction_USIK_UtilsLibrary_GetIPCountry, "GetIPCountry" }, // 218662447
		{ &Z_Construct_UFunction_USIK_UtilsLibrary_GetSecondsSinceAppActive, "GetSecondsSinceAppActive" }, // 3319575066
		{ &Z_Construct_UFunction_USIK_UtilsLibrary_GetSecondsSinceComputerActive, "GetSecondsSinceComputerActive" }, // 80037806
		{ &Z_Construct_UFunction_USIK_UtilsLibrary_GetServerRealTime, "GetServerRealTime" }, // 3704726990
		{ &Z_Construct_UFunction_USIK_UtilsLibrary_GetSteamUILanguage, "GetSteamUILanguage" }, // 3660699365
		{ &Z_Construct_UFunction_USIK_UtilsLibrary_InitFilterText, "InitFilterText" }, // 2229953709
		{ &Z_Construct_UFunction_USIK_UtilsLibrary_IsControllerConnected, "IsControllerConnected" }, // 615672101
		{ &Z_Construct_UFunction_USIK_UtilsLibrary_IsOverlayEnabled, "IsOverlayEnabled" }, // 788713834
		{ &Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamChinaLauncher, "IsSteamChinaLauncher" }, // 2976864205
		{ &Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamInBigPictureMode, "IsSteamInBigPictureMode" }, // 1873380425
		{ &Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamRunningInVR, "IsSteamRunningInVR" }, // 1229218988
		{ &Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamRunningOnSteamDeck, "IsSteamRunningOnSteamDeck" }, // 4121096534
		{ &Z_Construct_UFunction_USIK_UtilsLibrary_IsValidJSON, "IsValidJSON" }, // 2363237186
		{ &Z_Construct_UFunction_USIK_UtilsLibrary_IsValidUGCTag, "IsValidUGCTag" }, // 3623564038
		{ &Z_Construct_UFunction_USIK_UtilsLibrary_IsVRHeadsetStreamingEnabled, "IsVRHeadsetStreamingEnabled" }, // 3849087729
		{ &Z_Construct_UFunction_USIK_UtilsLibrary_JSONToStringArray, "JSONToStringArray" }, // 1077589166
		{ &Z_Construct_UFunction_USIK_UtilsLibrary_OpenSteamKeyboard, "OpenSteamKeyboard" }, // 2965523211
		{ &Z_Construct_UFunction_USIK_UtilsLibrary_OverlayNeedsPresent, "OverlayNeedsPresent" }, // 531500098
		{ &Z_Construct_UFunction_USIK_UtilsLibrary_ParseJSONValue, "ParseJSONValue" }, // 935892385
		{ &Z_Construct_UFunction_USIK_UtilsLibrary_ReadTextFile, "ReadTextFile" }, // 3670742084
		{ &Z_Construct_UFunction_USIK_UtilsLibrary_SanitizeUGCTag, "SanitizeUGCTag" }, // 1460848790
		{ &Z_Construct_UFunction_USIK_UtilsLibrary_SanitizeUGCTagsArray, "SanitizeUGCTagsArray" }, // 2511216166
		{ &Z_Construct_UFunction_USIK_UtilsLibrary_SaveGameObjectToByteArray, "SaveGameObjectToByteArray" }, // 4132169190
		{ &Z_Construct_UFunction_USIK_UtilsLibrary_SerializeStructArrayToJSON, "SerializeStructArrayToJSON" }, // 3911987442
		{ &Z_Construct_UFunction_USIK_UtilsLibrary_SerializeStructToJSON, "SerializeStructToJSON" }, // 868037416
		{ &Z_Construct_UFunction_USIK_UtilsLibrary_SetGameLauncherMode, "SetGameLauncherMode" }, // 2914995270
		{ &Z_Construct_UFunction_USIK_UtilsLibrary_SetOverlayNotificationInset, "SetOverlayNotificationInset" }, // 2768782833
		{ &Z_Construct_UFunction_USIK_UtilsLibrary_SetOverlayNotificationPosition, "SetOverlayNotificationPosition" }, // 2849164727
		{ &Z_Construct_UFunction_USIK_UtilsLibrary_SetVRHeadsetStreamingEnabled, "SetVRHeadsetStreamingEnabled" }, // 2277860376
		{ &Z_Construct_UFunction_USIK_UtilsLibrary_ShowFloatingGamepadTextInput, "ShowFloatingGamepadTextInput" }, // 2543248829
		{ &Z_Construct_UFunction_USIK_UtilsLibrary_ShowGamepadTextInput, "ShowGamepadTextInput" }, // 1522138453
		{ &Z_Construct_UFunction_USIK_UtilsLibrary_StartVrDashboard, "StartVrDashboard" }, // 951800195
		{ &Z_Construct_UFunction_USIK_UtilsLibrary_StringArrayToJSON, "StringArrayToJSON" }, // 441287456
		{ &Z_Construct_UFunction_USIK_UtilsLibrary_ValidateUGCTagsArray, "ValidateUGCTagsArray" }, // 3179503978
		{ &Z_Construct_UFunction_USIK_UtilsLibrary_WriteTextFile, "WriteTextFile" }, // 2040184543
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_UtilsLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_UtilsLibrary_Statics
UObject* (*const Z_Construct_UClass_USIK_UtilsLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_UtilsLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_UtilsLibrary_Statics::ClassParams = {
	&USIK_UtilsLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_UtilsLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_UtilsLibrary_Statics::Class_MetaDataParams)
};
void USIK_UtilsLibrary::StaticRegisterNativesUSIK_UtilsLibrary()
{
	UClass* Class = USIK_UtilsLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_UtilsLibrary_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_UtilsLibrary()
{
	if (!Z_Registration_Info_UClass_USIK_UtilsLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_UtilsLibrary.OuterSingleton, Z_Construct_UClass_USIK_UtilsLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_UtilsLibrary.OuterSingleton;
}
USIK_UtilsLibrary::USIK_UtilsLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_UtilsLibrary);
USIK_UtilsLibrary::~USIK_UtilsLibrary() {}
// ********** End Class USIK_UtilsLibrary **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Utils_SIK_UtilsLibrary_h__Script_SteamIntegrationKit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_UtilsLibrary, USIK_UtilsLibrary::StaticClass, TEXT("USIK_UtilsLibrary"), &Z_Registration_Info_UClass_USIK_UtilsLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_UtilsLibrary), 4199510844U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Utils_SIK_UtilsLibrary_h__Script_SteamIntegrationKit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Utils_SIK_UtilsLibrary_h__Script_SteamIntegrationKit_1700520664{
	TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Utils_SIK_UtilsLibrary_h__Script_SteamIntegrationKit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Utils_SIK_UtilsLibrary_h__Script_SteamIntegrationKit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
