// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/RemoteStorage/SIK_RemoteStorageLibrary.h"
#include "SIK_SharedFile.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_RemoteStorageLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_RemoteStorageLibrary();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_RemoteStorageLibrary_NoRegister();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_RemoteStorageFilePathType();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_RemoteStorageLocalFileChange();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_RemoteStoragePlatform();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_UGCReadAction();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_SteamId();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_UGCFileWriteStreamHandle();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_UGCHandle();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USIK_RemoteStorageLibrary Function BeginFileWriteBatch *******************
struct Z_Construct_UFunction_USIK_RemoteStorageLibrary_BeginFileWriteBatch_Statics
{
	struct SIK_RemoteStorageLibrary_eventBeginFileWriteBatch_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Remote Storage" },
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_RemoteStorageLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function BeginFileWriteBatch constinit property declarations *******************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BeginFileWriteBatch constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BeginFileWriteBatch Property Definitions ******************************
void Z_Construct_UFunction_USIK_RemoteStorageLibrary_BeginFileWriteBatch_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_RemoteStorageLibrary_eventBeginFileWriteBatch_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_BeginFileWriteBatch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_RemoteStorageLibrary_eventBeginFileWriteBatch_Parms), &Z_Construct_UFunction_USIK_RemoteStorageLibrary_BeginFileWriteBatch_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_RemoteStorageLibrary_BeginFileWriteBatch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_BeginFileWriteBatch_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_BeginFileWriteBatch_Statics::PropPointers) < 2048);
// ********** End Function BeginFileWriteBatch Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_BeginFileWriteBatch_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_RemoteStorageLibrary, nullptr, "BeginFileWriteBatch", 	Z_Construct_UFunction_USIK_RemoteStorageLibrary_BeginFileWriteBatch_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_BeginFileWriteBatch_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_BeginFileWriteBatch_Statics::SIK_RemoteStorageLibrary_eventBeginFileWriteBatch_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_BeginFileWriteBatch_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_RemoteStorageLibrary_BeginFileWriteBatch_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_BeginFileWriteBatch_Statics::SIK_RemoteStorageLibrary_eventBeginFileWriteBatch_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_RemoteStorageLibrary_BeginFileWriteBatch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_RemoteStorageLibrary_BeginFileWriteBatch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_RemoteStorageLibrary::execBeginFileWriteBatch)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_RemoteStorageLibrary::BeginFileWriteBatch();
	P_NATIVE_END;
}
// ********** End Class USIK_RemoteStorageLibrary Function BeginFileWriteBatch *********************

// ********** Begin Class USIK_RemoteStorageLibrary Function EndFileWriteBatch *********************
struct Z_Construct_UFunction_USIK_RemoteStorageLibrary_EndFileWriteBatch_Statics
{
	struct SIK_RemoteStorageLibrary_eventEndFileWriteBatch_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Remote Storage" },
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_RemoteStorageLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function EndFileWriteBatch constinit property declarations *********************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EndFileWriteBatch constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EndFileWriteBatch Property Definitions ********************************
void Z_Construct_UFunction_USIK_RemoteStorageLibrary_EndFileWriteBatch_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_RemoteStorageLibrary_eventEndFileWriteBatch_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_EndFileWriteBatch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_RemoteStorageLibrary_eventEndFileWriteBatch_Parms), &Z_Construct_UFunction_USIK_RemoteStorageLibrary_EndFileWriteBatch_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_RemoteStorageLibrary_EndFileWriteBatch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_EndFileWriteBatch_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_EndFileWriteBatch_Statics::PropPointers) < 2048);
// ********** End Function EndFileWriteBatch Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_EndFileWriteBatch_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_RemoteStorageLibrary, nullptr, "EndFileWriteBatch", 	Z_Construct_UFunction_USIK_RemoteStorageLibrary_EndFileWriteBatch_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_EndFileWriteBatch_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_EndFileWriteBatch_Statics::SIK_RemoteStorageLibrary_eventEndFileWriteBatch_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_EndFileWriteBatch_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_RemoteStorageLibrary_EndFileWriteBatch_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_EndFileWriteBatch_Statics::SIK_RemoteStorageLibrary_eventEndFileWriteBatch_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_RemoteStorageLibrary_EndFileWriteBatch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_RemoteStorageLibrary_EndFileWriteBatch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_RemoteStorageLibrary::execEndFileWriteBatch)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_RemoteStorageLibrary::EndFileWriteBatch();
	P_NATIVE_END;
}
// ********** End Class USIK_RemoteStorageLibrary Function EndFileWriteBatch ***********************

// ********** Begin Class USIK_RemoteStorageLibrary Function FileDelete ****************************
struct Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileDelete_Statics
{
	struct SIK_RemoteStorageLibrary_eventFileDelete_Parms
	{
		FString FileName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Remote Storage" },
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_RemoteStorageLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function FileDelete constinit property declarations ****************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FileDelete constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FileDelete Property Definitions ***************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileDelete_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventFileDelete_Parms, FileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileName_MetaData), NewProp_FileName_MetaData) };
void Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileDelete_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_RemoteStorageLibrary_eventFileDelete_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileDelete_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_RemoteStorageLibrary_eventFileDelete_Parms), &Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileDelete_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileDelete_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileDelete_Statics::NewProp_FileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileDelete_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileDelete_Statics::PropPointers) < 2048);
// ********** End Function FileDelete Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileDelete_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_RemoteStorageLibrary, nullptr, "FileDelete", 	Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileDelete_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileDelete_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileDelete_Statics::SIK_RemoteStorageLibrary_eventFileDelete_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileDelete_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileDelete_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileDelete_Statics::SIK_RemoteStorageLibrary_eventFileDelete_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileDelete()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileDelete_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_RemoteStorageLibrary::execFileDelete)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_RemoteStorageLibrary::FileDelete(Z_Param_FileName);
	P_NATIVE_END;
}
// ********** End Class USIK_RemoteStorageLibrary Function FileDelete ******************************

// ********** Begin Class USIK_RemoteStorageLibrary Function FileExists ****************************
struct Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileExists_Statics
{
	struct SIK_RemoteStorageLibrary_eventFileExists_Parms
	{
		FString FileName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Remote Storage" },
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_RemoteStorageLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function FileExists constinit property declarations ****************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FileExists constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FileExists Property Definitions ***************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileExists_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventFileExists_Parms, FileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileName_MetaData), NewProp_FileName_MetaData) };
void Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileExists_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_RemoteStorageLibrary_eventFileExists_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileExists_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_RemoteStorageLibrary_eventFileExists_Parms), &Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileExists_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileExists_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileExists_Statics::NewProp_FileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileExists_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileExists_Statics::PropPointers) < 2048);
// ********** End Function FileExists Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileExists_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_RemoteStorageLibrary, nullptr, "FileExists", 	Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileExists_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileExists_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileExists_Statics::SIK_RemoteStorageLibrary_eventFileExists_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileExists_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileExists_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileExists_Statics::SIK_RemoteStorageLibrary_eventFileExists_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileExists()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileExists_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_RemoteStorageLibrary::execFileExists)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_RemoteStorageLibrary::FileExists(Z_Param_FileName);
	P_NATIVE_END;
}
// ********** End Class USIK_RemoteStorageLibrary Function FileExists ******************************

// ********** Begin Class USIK_RemoteStorageLibrary Function FileForget ****************************
struct Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileForget_Statics
{
	struct SIK_RemoteStorageLibrary_eventFileForget_Parms
	{
		FString FileName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Remote Storage" },
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_RemoteStorageLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function FileForget constinit property declarations ****************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FileForget constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FileForget Property Definitions ***************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileForget_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventFileForget_Parms, FileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileName_MetaData), NewProp_FileName_MetaData) };
void Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileForget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_RemoteStorageLibrary_eventFileForget_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileForget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_RemoteStorageLibrary_eventFileForget_Parms), &Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileForget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileForget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileForget_Statics::NewProp_FileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileForget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileForget_Statics::PropPointers) < 2048);
// ********** End Function FileForget Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileForget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_RemoteStorageLibrary, nullptr, "FileForget", 	Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileForget_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileForget_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileForget_Statics::SIK_RemoteStorageLibrary_eventFileForget_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileForget_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileForget_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileForget_Statics::SIK_RemoteStorageLibrary_eventFileForget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileForget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileForget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_RemoteStorageLibrary::execFileForget)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_RemoteStorageLibrary::FileForget(Z_Param_FileName);
	P_NATIVE_END;
}
// ********** End Class USIK_RemoteStorageLibrary Function FileForget ******************************

// ********** Begin Class USIK_RemoteStorageLibrary Function FilePersisted *************************
struct Z_Construct_UFunction_USIK_RemoteStorageLibrary_FilePersisted_Statics
{
	struct SIK_RemoteStorageLibrary_eventFilePersisted_Parms
	{
		FString FileName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Remote Storage" },
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_RemoteStorageLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function FilePersisted constinit property declarations *************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FilePersisted constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FilePersisted Property Definitions ************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_FilePersisted_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventFilePersisted_Parms, FileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileName_MetaData), NewProp_FileName_MetaData) };
void Z_Construct_UFunction_USIK_RemoteStorageLibrary_FilePersisted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_RemoteStorageLibrary_eventFilePersisted_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_FilePersisted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_RemoteStorageLibrary_eventFilePersisted_Parms), &Z_Construct_UFunction_USIK_RemoteStorageLibrary_FilePersisted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_RemoteStorageLibrary_FilePersisted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_FilePersisted_Statics::NewProp_FileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_FilePersisted_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FilePersisted_Statics::PropPointers) < 2048);
// ********** End Function FilePersisted Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_FilePersisted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_RemoteStorageLibrary, nullptr, "FilePersisted", 	Z_Construct_UFunction_USIK_RemoteStorageLibrary_FilePersisted_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FilePersisted_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FilePersisted_Statics::SIK_RemoteStorageLibrary_eventFilePersisted_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FilePersisted_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_RemoteStorageLibrary_FilePersisted_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FilePersisted_Statics::SIK_RemoteStorageLibrary_eventFilePersisted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_RemoteStorageLibrary_FilePersisted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_RemoteStorageLibrary_FilePersisted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_RemoteStorageLibrary::execFilePersisted)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_RemoteStorageLibrary::FilePersisted(Z_Param_FileName);
	P_NATIVE_END;
}
// ********** End Class USIK_RemoteStorageLibrary Function FilePersisted ***************************

// ********** Begin Class USIK_RemoteStorageLibrary Function FileRead ******************************
struct Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileRead_Statics
{
	struct SIK_RemoteStorageLibrary_eventFileRead_Parms
	{
		FString FileName;
		TArray<uint8> Data;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Remote Storage" },
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_RemoteStorageLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function FileRead constinit property declarations ******************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FileRead constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FileRead Property Definitions *****************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileRead_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventFileRead_Parms, FileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileName_MetaData), NewProp_FileName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileRead_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileRead_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventFileRead_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileRead_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventFileRead_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileRead_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileRead_Statics::NewProp_FileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileRead_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileRead_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileRead_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileRead_Statics::PropPointers) < 2048);
// ********** End Function FileRead Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileRead_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_RemoteStorageLibrary, nullptr, "FileRead", 	Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileRead_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileRead_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileRead_Statics::SIK_RemoteStorageLibrary_eventFileRead_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileRead_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileRead_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileRead_Statics::SIK_RemoteStorageLibrary_eventFileRead_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileRead()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileRead_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_RemoteStorageLibrary::execFileRead)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
	P_GET_TARRAY_REF(uint8,Z_Param_Out_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USIK_RemoteStorageLibrary::FileRead(Z_Param_FileName,Z_Param_Out_Data);
	P_NATIVE_END;
}
// ********** End Class USIK_RemoteStorageLibrary Function FileRead ********************************

// ********** Begin Class USIK_RemoteStorageLibrary Function FileWrite *****************************
struct Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWrite_Statics
{
	struct SIK_RemoteStorageLibrary_eventFileWrite_Parms
	{
		FString FileName;
		TArray<uint8> Data;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Remote Storage" },
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_RemoteStorageLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function FileWrite constinit property declarations *****************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FileWrite constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FileWrite Property Definitions ****************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWrite_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventFileWrite_Parms, FileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileName_MetaData), NewProp_FileName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWrite_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWrite_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventFileWrite_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) };
void Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWrite_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_RemoteStorageLibrary_eventFileWrite_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWrite_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_RemoteStorageLibrary_eventFileWrite_Parms), &Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWrite_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWrite_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWrite_Statics::NewProp_FileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWrite_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWrite_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWrite_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWrite_Statics::PropPointers) < 2048);
// ********** End Function FileWrite Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWrite_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_RemoteStorageLibrary, nullptr, "FileWrite", 	Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWrite_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWrite_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWrite_Statics::SIK_RemoteStorageLibrary_eventFileWrite_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWrite_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWrite_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWrite_Statics::SIK_RemoteStorageLibrary_eventFileWrite_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWrite()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWrite_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_RemoteStorageLibrary::execFileWrite)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
	P_GET_TARRAY_REF(uint8,Z_Param_Out_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_RemoteStorageLibrary::FileWrite(Z_Param_FileName,Z_Param_Out_Data);
	P_NATIVE_END;
}
// ********** End Class USIK_RemoteStorageLibrary Function FileWrite *******************************

// ********** Begin Class USIK_RemoteStorageLibrary Function FileWriteStreamCancel *****************
struct Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamCancel_Statics
{
	struct SIK_RemoteStorageLibrary_eventFileWriteStreamCancel_Parms
	{
		FSIK_UGCFileWriteStreamHandle WriteStreamHandle;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Remote Storage" },
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_RemoteStorageLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function FileWriteStreamCancel constinit property declarations *****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_WriteStreamHandle;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FileWriteStreamCancel constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FileWriteStreamCancel Property Definitions ****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamCancel_Statics::NewProp_WriteStreamHandle = { "WriteStreamHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventFileWriteStreamCancel_Parms, WriteStreamHandle), Z_Construct_UScriptStruct_FSIK_UGCFileWriteStreamHandle, METADATA_PARAMS(0, nullptr) }; // 633603663
void Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamCancel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_RemoteStorageLibrary_eventFileWriteStreamCancel_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamCancel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_RemoteStorageLibrary_eventFileWriteStreamCancel_Parms), &Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamCancel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamCancel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamCancel_Statics::NewProp_WriteStreamHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamCancel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamCancel_Statics::PropPointers) < 2048);
// ********** End Function FileWriteStreamCancel Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamCancel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_RemoteStorageLibrary, nullptr, "FileWriteStreamCancel", 	Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamCancel_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamCancel_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamCancel_Statics::SIK_RemoteStorageLibrary_eventFileWriteStreamCancel_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamCancel_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamCancel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamCancel_Statics::SIK_RemoteStorageLibrary_eventFileWriteStreamCancel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamCancel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamCancel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_RemoteStorageLibrary::execFileWriteStreamCancel)
{
	P_GET_STRUCT(FSIK_UGCFileWriteStreamHandle,Z_Param_WriteStreamHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_RemoteStorageLibrary::FileWriteStreamCancel(Z_Param_WriteStreamHandle);
	P_NATIVE_END;
}
// ********** End Class USIK_RemoteStorageLibrary Function FileWriteStreamCancel *******************

// ********** Begin Class USIK_RemoteStorageLibrary Function FileWriteStreamClose ******************
struct Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamClose_Statics
{
	struct SIK_RemoteStorageLibrary_eventFileWriteStreamClose_Parms
	{
		FSIK_UGCFileWriteStreamHandle WriteStreamHandle;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Remote Storage" },
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_RemoteStorageLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function FileWriteStreamClose constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_WriteStreamHandle;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FileWriteStreamClose constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FileWriteStreamClose Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamClose_Statics::NewProp_WriteStreamHandle = { "WriteStreamHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventFileWriteStreamClose_Parms, WriteStreamHandle), Z_Construct_UScriptStruct_FSIK_UGCFileWriteStreamHandle, METADATA_PARAMS(0, nullptr) }; // 633603663
void Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamClose_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_RemoteStorageLibrary_eventFileWriteStreamClose_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamClose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_RemoteStorageLibrary_eventFileWriteStreamClose_Parms), &Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamClose_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamClose_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamClose_Statics::NewProp_WriteStreamHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamClose_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamClose_Statics::PropPointers) < 2048);
// ********** End Function FileWriteStreamClose Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamClose_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_RemoteStorageLibrary, nullptr, "FileWriteStreamClose", 	Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamClose_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamClose_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamClose_Statics::SIK_RemoteStorageLibrary_eventFileWriteStreamClose_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamClose_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamClose_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamClose_Statics::SIK_RemoteStorageLibrary_eventFileWriteStreamClose_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamClose()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamClose_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_RemoteStorageLibrary::execFileWriteStreamClose)
{
	P_GET_STRUCT(FSIK_UGCFileWriteStreamHandle,Z_Param_WriteStreamHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_RemoteStorageLibrary::FileWriteStreamClose(Z_Param_WriteStreamHandle);
	P_NATIVE_END;
}
// ********** End Class USIK_RemoteStorageLibrary Function FileWriteStreamClose ********************

// ********** Begin Class USIK_RemoteStorageLibrary Function FileWriteStreamOpen *******************
struct Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamOpen_Statics
{
	struct SIK_RemoteStorageLibrary_eventFileWriteStreamOpen_Parms
	{
		FString FileName;
		FSIK_UGCFileWriteStreamHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Remote Storage" },
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_RemoteStorageLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function FileWriteStreamOpen constinit property declarations *******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FileWriteStreamOpen constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FileWriteStreamOpen Property Definitions ******************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamOpen_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventFileWriteStreamOpen_Parms, FileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileName_MetaData), NewProp_FileName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamOpen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventFileWriteStreamOpen_Parms, ReturnValue), Z_Construct_UScriptStruct_FSIK_UGCFileWriteStreamHandle, METADATA_PARAMS(0, nullptr) }; // 633603663
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamOpen_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamOpen_Statics::NewProp_FileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamOpen_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamOpen_Statics::PropPointers) < 2048);
// ********** End Function FileWriteStreamOpen Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamOpen_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_RemoteStorageLibrary, nullptr, "FileWriteStreamOpen", 	Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamOpen_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamOpen_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamOpen_Statics::SIK_RemoteStorageLibrary_eventFileWriteStreamOpen_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamOpen_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamOpen_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamOpen_Statics::SIK_RemoteStorageLibrary_eventFileWriteStreamOpen_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamOpen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamOpen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_RemoteStorageLibrary::execFileWriteStreamOpen)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSIK_UGCFileWriteStreamHandle*)Z_Param__Result=USIK_RemoteStorageLibrary::FileWriteStreamOpen(Z_Param_FileName);
	P_NATIVE_END;
}
// ********** End Class USIK_RemoteStorageLibrary Function FileWriteStreamOpen *********************

// ********** Begin Class USIK_RemoteStorageLibrary Function FileWriteStreamWriteChunk *************
struct Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamWriteChunk_Statics
{
	struct SIK_RemoteStorageLibrary_eventFileWriteStreamWriteChunk_Parms
	{
		FSIK_UGCFileWriteStreamHandle WriteStreamHandle;
		TArray<uint8> Data;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Remote Storage" },
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_RemoteStorageLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function FileWriteStreamWriteChunk constinit property declarations *************
	static const UECodeGen_Private::FStructPropertyParams NewProp_WriteStreamHandle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FileWriteStreamWriteChunk constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FileWriteStreamWriteChunk Property Definitions ************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamWriteChunk_Statics::NewProp_WriteStreamHandle = { "WriteStreamHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventFileWriteStreamWriteChunk_Parms, WriteStreamHandle), Z_Construct_UScriptStruct_FSIK_UGCFileWriteStreamHandle, METADATA_PARAMS(0, nullptr) }; // 633603663
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamWriteChunk_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamWriteChunk_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventFileWriteStreamWriteChunk_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) };
void Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamWriteChunk_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_RemoteStorageLibrary_eventFileWriteStreamWriteChunk_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamWriteChunk_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_RemoteStorageLibrary_eventFileWriteStreamWriteChunk_Parms), &Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamWriteChunk_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamWriteChunk_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamWriteChunk_Statics::NewProp_WriteStreamHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamWriteChunk_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamWriteChunk_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamWriteChunk_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamWriteChunk_Statics::PropPointers) < 2048);
// ********** End Function FileWriteStreamWriteChunk Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamWriteChunk_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_RemoteStorageLibrary, nullptr, "FileWriteStreamWriteChunk", 	Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamWriteChunk_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamWriteChunk_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamWriteChunk_Statics::SIK_RemoteStorageLibrary_eventFileWriteStreamWriteChunk_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamWriteChunk_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamWriteChunk_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamWriteChunk_Statics::SIK_RemoteStorageLibrary_eventFileWriteStreamWriteChunk_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamWriteChunk()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamWriteChunk_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_RemoteStorageLibrary::execFileWriteStreamWriteChunk)
{
	P_GET_STRUCT(FSIK_UGCFileWriteStreamHandle,Z_Param_WriteStreamHandle);
	P_GET_TARRAY_REF(uint8,Z_Param_Out_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_RemoteStorageLibrary::FileWriteStreamWriteChunk(Z_Param_WriteStreamHandle,Z_Param_Out_Data);
	P_NATIVE_END;
}
// ********** End Class USIK_RemoteStorageLibrary Function FileWriteStreamWriteChunk ***************

// ********** Begin Class USIK_RemoteStorageLibrary Function GetCachedUGCCount *********************
struct Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetCachedUGCCount_Statics
{
	struct SIK_RemoteStorageLibrary_eventGetCachedUGCCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Remote Storage" },
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_RemoteStorageLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetCachedUGCCount constinit property declarations *********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCachedUGCCount constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCachedUGCCount Property Definitions ********************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetCachedUGCCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventGetCachedUGCCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetCachedUGCCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetCachedUGCCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetCachedUGCCount_Statics::PropPointers) < 2048);
// ********** End Function GetCachedUGCCount Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetCachedUGCCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_RemoteStorageLibrary, nullptr, "GetCachedUGCCount", 	Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetCachedUGCCount_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetCachedUGCCount_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetCachedUGCCount_Statics::SIK_RemoteStorageLibrary_eventGetCachedUGCCount_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetCachedUGCCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetCachedUGCCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetCachedUGCCount_Statics::SIK_RemoteStorageLibrary_eventGetCachedUGCCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetCachedUGCCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetCachedUGCCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_RemoteStorageLibrary::execGetCachedUGCCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USIK_RemoteStorageLibrary::GetCachedUGCCount();
	P_NATIVE_END;
}
// ********** End Class USIK_RemoteStorageLibrary Function GetCachedUGCCount ***********************

// ********** Begin Class USIK_RemoteStorageLibrary Function GetCachedUGCHandle ********************
struct Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetCachedUGCHandle_Statics
{
	struct SIK_RemoteStorageLibrary_eventGetCachedUGCHandle_Parms
	{
		int32 CachedContent;
		FSIK_UGCHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Remote Storage" },
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_RemoteStorageLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetCachedUGCHandle constinit property declarations ********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_CachedContent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCachedUGCHandle constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCachedUGCHandle Property Definitions *******************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetCachedUGCHandle_Statics::NewProp_CachedContent = { "CachedContent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventGetCachedUGCHandle_Parms, CachedContent), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetCachedUGCHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventGetCachedUGCHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FSIK_UGCHandle, METADATA_PARAMS(0, nullptr) }; // 3467694534
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetCachedUGCHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetCachedUGCHandle_Statics::NewProp_CachedContent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetCachedUGCHandle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetCachedUGCHandle_Statics::PropPointers) < 2048);
// ********** End Function GetCachedUGCHandle Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetCachedUGCHandle_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_RemoteStorageLibrary, nullptr, "GetCachedUGCHandle", 	Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetCachedUGCHandle_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetCachedUGCHandle_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetCachedUGCHandle_Statics::SIK_RemoteStorageLibrary_eventGetCachedUGCHandle_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetCachedUGCHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetCachedUGCHandle_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetCachedUGCHandle_Statics::SIK_RemoteStorageLibrary_eventGetCachedUGCHandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetCachedUGCHandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetCachedUGCHandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_RemoteStorageLibrary::execGetCachedUGCHandle)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_CachedContent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSIK_UGCHandle*)Z_Param__Result=USIK_RemoteStorageLibrary::GetCachedUGCHandle(Z_Param_CachedContent);
	P_NATIVE_END;
}
// ********** End Class USIK_RemoteStorageLibrary Function GetCachedUGCHandle **********************

// ********** Begin Class USIK_RemoteStorageLibrary Function GetFileCount **************************
struct Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileCount_Statics
{
	struct SIK_RemoteStorageLibrary_eventGetFileCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Remote Storage" },
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_RemoteStorageLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetFileCount constinit property declarations **************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetFileCount constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetFileCount Property Definitions *************************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventGetFileCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileCount_Statics::PropPointers) < 2048);
// ********** End Function GetFileCount Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_RemoteStorageLibrary, nullptr, "GetFileCount", 	Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileCount_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileCount_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileCount_Statics::SIK_RemoteStorageLibrary_eventGetFileCount_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileCount_Statics::SIK_RemoteStorageLibrary_eventGetFileCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_RemoteStorageLibrary::execGetFileCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USIK_RemoteStorageLibrary::GetFileCount();
	P_NATIVE_END;
}
// ********** End Class USIK_RemoteStorageLibrary Function GetFileCount ****************************

// ********** Begin Class USIK_RemoteStorageLibrary Function GetFileNameAndSize ********************
struct Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileNameAndSize_Statics
{
	struct SIK_RemoteStorageLibrary_eventGetFileNameAndSize_Parms
	{
		int32 File;
		int32 FileSize;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Remote Storage" },
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_RemoteStorageLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetFileNameAndSize constinit property declarations ********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_File;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FileSize;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetFileNameAndSize constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetFileNameAndSize Property Definitions *******************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileNameAndSize_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventGetFileNameAndSize_Parms, File), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileNameAndSize_Statics::NewProp_FileSize = { "FileSize", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventGetFileNameAndSize_Parms, FileSize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileNameAndSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventGetFileNameAndSize_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileNameAndSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileNameAndSize_Statics::NewProp_File,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileNameAndSize_Statics::NewProp_FileSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileNameAndSize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileNameAndSize_Statics::PropPointers) < 2048);
// ********** End Function GetFileNameAndSize Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileNameAndSize_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_RemoteStorageLibrary, nullptr, "GetFileNameAndSize", 	Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileNameAndSize_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileNameAndSize_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileNameAndSize_Statics::SIK_RemoteStorageLibrary_eventGetFileNameAndSize_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileNameAndSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileNameAndSize_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileNameAndSize_Statics::SIK_RemoteStorageLibrary_eventGetFileNameAndSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileNameAndSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileNameAndSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_RemoteStorageLibrary::execGetFileNameAndSize)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_File);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_FileSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USIK_RemoteStorageLibrary::GetFileNameAndSize(Z_Param_File,Z_Param_Out_FileSize);
	P_NATIVE_END;
}
// ********** End Class USIK_RemoteStorageLibrary Function GetFileNameAndSize **********************

// ********** Begin Class USIK_RemoteStorageLibrary Function GetFileSize ***************************
struct Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileSize_Statics
{
	struct SIK_RemoteStorageLibrary_eventGetFileSize_Parms
	{
		FString FileName;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Remote Storage" },
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_RemoteStorageLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetFileSize constinit property declarations ***************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetFileSize constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetFileSize Property Definitions **************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileSize_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventGetFileSize_Parms, FileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileName_MetaData), NewProp_FileName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventGetFileSize_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileSize_Statics::NewProp_FileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileSize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileSize_Statics::PropPointers) < 2048);
// ********** End Function GetFileSize Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileSize_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_RemoteStorageLibrary, nullptr, "GetFileSize", 	Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileSize_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileSize_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileSize_Statics::SIK_RemoteStorageLibrary_eventGetFileSize_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileSize_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileSize_Statics::SIK_RemoteStorageLibrary_eventGetFileSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_RemoteStorageLibrary::execGetFileSize)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USIK_RemoteStorageLibrary::GetFileSize(Z_Param_FileName);
	P_NATIVE_END;
}
// ********** End Class USIK_RemoteStorageLibrary Function GetFileSize *****************************

// ********** Begin Class USIK_RemoteStorageLibrary Function GetFileTimestamp **********************
struct Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileTimestamp_Statics
{
	struct SIK_RemoteStorageLibrary_eventGetFileTimestamp_Parms
	{
		FString FileName;
		int64 Timestamp;
		FDateTime ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Remote Storage" },
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_RemoteStorageLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetFileTimestamp constinit property declarations **********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_Timestamp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetFileTimestamp constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetFileTimestamp Property Definitions *********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileTimestamp_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventGetFileTimestamp_Parms, FileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileName_MetaData), NewProp_FileName_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileTimestamp_Statics::NewProp_Timestamp = { "Timestamp", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventGetFileTimestamp_Parms, Timestamp), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileTimestamp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventGetFileTimestamp_Parms, ReturnValue), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileTimestamp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileTimestamp_Statics::NewProp_FileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileTimestamp_Statics::NewProp_Timestamp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileTimestamp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileTimestamp_Statics::PropPointers) < 2048);
// ********** End Function GetFileTimestamp Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileTimestamp_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_RemoteStorageLibrary, nullptr, "GetFileTimestamp", 	Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileTimestamp_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileTimestamp_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileTimestamp_Statics::SIK_RemoteStorageLibrary_eventGetFileTimestamp_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileTimestamp_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileTimestamp_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileTimestamp_Statics::SIK_RemoteStorageLibrary_eventGetFileTimestamp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileTimestamp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileTimestamp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_RemoteStorageLibrary::execGetFileTimestamp)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_Timestamp);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FDateTime*)Z_Param__Result=USIK_RemoteStorageLibrary::GetFileTimestamp(Z_Param_FileName,Z_Param_Out_Timestamp);
	P_NATIVE_END;
}
// ********** End Class USIK_RemoteStorageLibrary Function GetFileTimestamp ************************

// ********** Begin Class USIK_RemoteStorageLibrary Function GetLocalFileChange ********************
struct Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetLocalFileChange_Statics
{
	struct SIK_RemoteStorageLibrary_eventGetLocalFileChange_Parms
	{
		int32 File;
		TEnumAsByte<ESIK_RemoteStorageLocalFileChange> ChangeType;
		TEnumAsByte<ESIK_RemoteStorageFilePathType> PathType;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Remote Storage" },
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_RemoteStorageLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetLocalFileChange constinit property declarations ********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_File;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ChangeType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PathType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetLocalFileChange constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetLocalFileChange Property Definitions *******************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetLocalFileChange_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventGetLocalFileChange_Parms, File), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetLocalFileChange_Statics::NewProp_ChangeType = { "ChangeType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventGetLocalFileChange_Parms, ChangeType), Z_Construct_UEnum_SteamIntegrationKit_ESIK_RemoteStorageLocalFileChange, METADATA_PARAMS(0, nullptr) }; // 450793937
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetLocalFileChange_Statics::NewProp_PathType = { "PathType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventGetLocalFileChange_Parms, PathType), Z_Construct_UEnum_SteamIntegrationKit_ESIK_RemoteStorageFilePathType, METADATA_PARAMS(0, nullptr) }; // 630300744
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetLocalFileChange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventGetLocalFileChange_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetLocalFileChange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetLocalFileChange_Statics::NewProp_File,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetLocalFileChange_Statics::NewProp_ChangeType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetLocalFileChange_Statics::NewProp_PathType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetLocalFileChange_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetLocalFileChange_Statics::PropPointers) < 2048);
// ********** End Function GetLocalFileChange Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetLocalFileChange_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_RemoteStorageLibrary, nullptr, "GetLocalFileChange", 	Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetLocalFileChange_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetLocalFileChange_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetLocalFileChange_Statics::SIK_RemoteStorageLibrary_eventGetLocalFileChange_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetLocalFileChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetLocalFileChange_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetLocalFileChange_Statics::SIK_RemoteStorageLibrary_eventGetLocalFileChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetLocalFileChange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetLocalFileChange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_RemoteStorageLibrary::execGetLocalFileChange)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_File);
	P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_ChangeType);
	P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_PathType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USIK_RemoteStorageLibrary::GetLocalFileChange(Z_Param_File,(TEnumAsByte<ESIK_RemoteStorageLocalFileChange>&)(Z_Param_Out_ChangeType),(TEnumAsByte<ESIK_RemoteStorageFilePathType>&)(Z_Param_Out_PathType));
	P_NATIVE_END;
}
// ********** End Class USIK_RemoteStorageLibrary Function GetLocalFileChange **********************

// ********** Begin Class USIK_RemoteStorageLibrary Function GetLocalFileChangeCount ***************
struct Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetLocalFileChangeCount_Statics
{
	struct SIK_RemoteStorageLibrary_eventGetLocalFileChangeCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Remote Storage" },
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_RemoteStorageLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetLocalFileChangeCount constinit property declarations ***************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetLocalFileChangeCount constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetLocalFileChangeCount Property Definitions **************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetLocalFileChangeCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventGetLocalFileChangeCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetLocalFileChangeCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetLocalFileChangeCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetLocalFileChangeCount_Statics::PropPointers) < 2048);
// ********** End Function GetLocalFileChangeCount Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetLocalFileChangeCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_RemoteStorageLibrary, nullptr, "GetLocalFileChangeCount", 	Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetLocalFileChangeCount_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetLocalFileChangeCount_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetLocalFileChangeCount_Statics::SIK_RemoteStorageLibrary_eventGetLocalFileChangeCount_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetLocalFileChangeCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetLocalFileChangeCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetLocalFileChangeCount_Statics::SIK_RemoteStorageLibrary_eventGetLocalFileChangeCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetLocalFileChangeCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetLocalFileChangeCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_RemoteStorageLibrary::execGetLocalFileChangeCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USIK_RemoteStorageLibrary::GetLocalFileChangeCount();
	P_NATIVE_END;
}
// ********** End Class USIK_RemoteStorageLibrary Function GetLocalFileChangeCount *****************

// ********** Begin Class USIK_RemoteStorageLibrary Function GetQuota ******************************
struct Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetQuota_Statics
{
	struct SIK_RemoteStorageLibrary_eventGetQuota_Parms
	{
		int64 TotalBytes;
		int64 AvailableBytes;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Remote Storage" },
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_RemoteStorageLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetQuota constinit property declarations ******************************
	static const UECodeGen_Private::FInt64PropertyParams NewProp_TotalBytes;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_AvailableBytes;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetQuota constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetQuota Property Definitions *****************************************
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetQuota_Statics::NewProp_TotalBytes = { "TotalBytes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventGetQuota_Parms, TotalBytes), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetQuota_Statics::NewProp_AvailableBytes = { "AvailableBytes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventGetQuota_Parms, AvailableBytes), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetQuota_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_RemoteStorageLibrary_eventGetQuota_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetQuota_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_RemoteStorageLibrary_eventGetQuota_Parms), &Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetQuota_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetQuota_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetQuota_Statics::NewProp_TotalBytes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetQuota_Statics::NewProp_AvailableBytes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetQuota_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetQuota_Statics::PropPointers) < 2048);
// ********** End Function GetQuota Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetQuota_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_RemoteStorageLibrary, nullptr, "GetQuota", 	Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetQuota_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetQuota_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetQuota_Statics::SIK_RemoteStorageLibrary_eventGetQuota_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetQuota_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetQuota_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetQuota_Statics::SIK_RemoteStorageLibrary_eventGetQuota_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetQuota()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetQuota_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_RemoteStorageLibrary::execGetQuota)
{
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_TotalBytes);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_AvailableBytes);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_RemoteStorageLibrary::GetQuota(Z_Param_Out_TotalBytes,Z_Param_Out_AvailableBytes);
	P_NATIVE_END;
}
// ********** End Class USIK_RemoteStorageLibrary Function GetQuota ********************************

// ********** Begin Class USIK_RemoteStorageLibrary Function GetSyncPlatforms **********************
struct Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetSyncPlatforms_Statics
{
	struct SIK_RemoteStorageLibrary_eventGetSyncPlatforms_Parms
	{
		FString FileName;
		TEnumAsByte<ESIK_RemoteStoragePlatform> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Remote Storage" },
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_RemoteStorageLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetSyncPlatforms constinit property declarations **********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSyncPlatforms constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSyncPlatforms Property Definitions *********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetSyncPlatforms_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventGetSyncPlatforms_Parms, FileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileName_MetaData), NewProp_FileName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetSyncPlatforms_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventGetSyncPlatforms_Parms, ReturnValue), Z_Construct_UEnum_SteamIntegrationKit_ESIK_RemoteStoragePlatform, METADATA_PARAMS(0, nullptr) }; // 1661510505
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetSyncPlatforms_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetSyncPlatforms_Statics::NewProp_FileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetSyncPlatforms_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetSyncPlatforms_Statics::PropPointers) < 2048);
// ********** End Function GetSyncPlatforms Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetSyncPlatforms_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_RemoteStorageLibrary, nullptr, "GetSyncPlatforms", 	Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetSyncPlatforms_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetSyncPlatforms_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetSyncPlatforms_Statics::SIK_RemoteStorageLibrary_eventGetSyncPlatforms_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetSyncPlatforms_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetSyncPlatforms_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetSyncPlatforms_Statics::SIK_RemoteStorageLibrary_eventGetSyncPlatforms_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetSyncPlatforms()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetSyncPlatforms_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_RemoteStorageLibrary::execGetSyncPlatforms)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<ESIK_RemoteStoragePlatform>*)Z_Param__Result=USIK_RemoteStorageLibrary::GetSyncPlatforms(Z_Param_FileName);
	P_NATIVE_END;
}
// ********** End Class USIK_RemoteStorageLibrary Function GetSyncPlatforms ************************

// ********** Begin Class USIK_RemoteStorageLibrary Function GetUGCDetails *************************
struct Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDetails_Statics
{
	struct SIK_RemoteStorageLibrary_eventGetUGCDetails_Parms
	{
		FSIK_UGCHandle UGCHandle;
		FString FileName;
		int32 FileSize;
		FSIK_SteamId OwnerID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Remote Storage" },
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_RemoteStorageLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetUGCDetails constinit property declarations *************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_UGCHandle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FileSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OwnerID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetUGCDetails constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetUGCDetails Property Definitions ************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDetails_Statics::NewProp_UGCHandle = { "UGCHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventGetUGCDetails_Parms, UGCHandle), Z_Construct_UScriptStruct_FSIK_UGCHandle, METADATA_PARAMS(0, nullptr) }; // 3467694534
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDetails_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventGetUGCDetails_Parms, FileName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDetails_Statics::NewProp_FileSize = { "FileSize", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventGetUGCDetails_Parms, FileSize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDetails_Statics::NewProp_OwnerID = { "OwnerID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventGetUGCDetails_Parms, OwnerID), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
void Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDetails_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_RemoteStorageLibrary_eventGetUGCDetails_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDetails_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_RemoteStorageLibrary_eventGetUGCDetails_Parms), &Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDetails_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDetails_Statics::NewProp_UGCHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDetails_Statics::NewProp_FileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDetails_Statics::NewProp_FileSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDetails_Statics::NewProp_OwnerID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDetails_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDetails_Statics::PropPointers) < 2048);
// ********** End Function GetUGCDetails Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDetails_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_RemoteStorageLibrary, nullptr, "GetUGCDetails", 	Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDetails_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDetails_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDetails_Statics::SIK_RemoteStorageLibrary_eventGetUGCDetails_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDetails_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDetails_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDetails_Statics::SIK_RemoteStorageLibrary_eventGetUGCDetails_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDetails()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDetails_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_RemoteStorageLibrary::execGetUGCDetails)
{
	P_GET_STRUCT(FSIK_UGCHandle,Z_Param_UGCHandle);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_FileName);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_FileSize);
	P_GET_STRUCT_REF(FSIK_SteamId,Z_Param_Out_OwnerID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_RemoteStorageLibrary::GetUGCDetails(Z_Param_UGCHandle,Z_Param_Out_FileName,Z_Param_Out_FileSize,Z_Param_Out_OwnerID);
	P_NATIVE_END;
}
// ********** End Class USIK_RemoteStorageLibrary Function GetUGCDetails ***************************

// ********** Begin Class USIK_RemoteStorageLibrary Function GetUGCDownloadProgress ****************
struct Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDownloadProgress_Statics
{
	struct SIK_RemoteStorageLibrary_eventGetUGCDownloadProgress_Parms
	{
		FSIK_UGCHandle UGCHandle;
		int32 BytesDownloaded;
		int32 BytesExpected;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Remote Storage" },
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_RemoteStorageLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetUGCDownloadProgress constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_UGCHandle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BytesDownloaded;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BytesExpected;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetUGCDownloadProgress constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetUGCDownloadProgress Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDownloadProgress_Statics::NewProp_UGCHandle = { "UGCHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventGetUGCDownloadProgress_Parms, UGCHandle), Z_Construct_UScriptStruct_FSIK_UGCHandle, METADATA_PARAMS(0, nullptr) }; // 3467694534
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDownloadProgress_Statics::NewProp_BytesDownloaded = { "BytesDownloaded", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventGetUGCDownloadProgress_Parms, BytesDownloaded), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDownloadProgress_Statics::NewProp_BytesExpected = { "BytesExpected", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventGetUGCDownloadProgress_Parms, BytesExpected), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDownloadProgress_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_RemoteStorageLibrary_eventGetUGCDownloadProgress_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDownloadProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_RemoteStorageLibrary_eventGetUGCDownloadProgress_Parms), &Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDownloadProgress_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDownloadProgress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDownloadProgress_Statics::NewProp_UGCHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDownloadProgress_Statics::NewProp_BytesDownloaded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDownloadProgress_Statics::NewProp_BytesExpected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDownloadProgress_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDownloadProgress_Statics::PropPointers) < 2048);
// ********** End Function GetUGCDownloadProgress Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDownloadProgress_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_RemoteStorageLibrary, nullptr, "GetUGCDownloadProgress", 	Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDownloadProgress_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDownloadProgress_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDownloadProgress_Statics::SIK_RemoteStorageLibrary_eventGetUGCDownloadProgress_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDownloadProgress_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDownloadProgress_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDownloadProgress_Statics::SIK_RemoteStorageLibrary_eventGetUGCDownloadProgress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDownloadProgress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDownloadProgress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_RemoteStorageLibrary::execGetUGCDownloadProgress)
{
	P_GET_STRUCT(FSIK_UGCHandle,Z_Param_UGCHandle);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_BytesDownloaded);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_BytesExpected);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_RemoteStorageLibrary::GetUGCDownloadProgress(Z_Param_UGCHandle,Z_Param_Out_BytesDownloaded,Z_Param_Out_BytesExpected);
	P_NATIVE_END;
}
// ********** End Class USIK_RemoteStorageLibrary Function GetUGCDownloadProgress ******************

// ********** Begin Class USIK_RemoteStorageLibrary Function IsCloudEnabledForAccount **************
struct Z_Construct_UFunction_USIK_RemoteStorageLibrary_IsCloudEnabledForAccount_Statics
{
	struct SIK_RemoteStorageLibrary_eventIsCloudEnabledForAccount_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Remote Storage" },
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_RemoteStorageLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsCloudEnabledForAccount constinit property declarations **************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsCloudEnabledForAccount constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsCloudEnabledForAccount Property Definitions *************************
void Z_Construct_UFunction_USIK_RemoteStorageLibrary_IsCloudEnabledForAccount_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_RemoteStorageLibrary_eventIsCloudEnabledForAccount_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_IsCloudEnabledForAccount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_RemoteStorageLibrary_eventIsCloudEnabledForAccount_Parms), &Z_Construct_UFunction_USIK_RemoteStorageLibrary_IsCloudEnabledForAccount_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_RemoteStorageLibrary_IsCloudEnabledForAccount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_IsCloudEnabledForAccount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_IsCloudEnabledForAccount_Statics::PropPointers) < 2048);
// ********** End Function IsCloudEnabledForAccount Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_IsCloudEnabledForAccount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_RemoteStorageLibrary, nullptr, "IsCloudEnabledForAccount", 	Z_Construct_UFunction_USIK_RemoteStorageLibrary_IsCloudEnabledForAccount_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_IsCloudEnabledForAccount_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_IsCloudEnabledForAccount_Statics::SIK_RemoteStorageLibrary_eventIsCloudEnabledForAccount_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_IsCloudEnabledForAccount_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_RemoteStorageLibrary_IsCloudEnabledForAccount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_IsCloudEnabledForAccount_Statics::SIK_RemoteStorageLibrary_eventIsCloudEnabledForAccount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_RemoteStorageLibrary_IsCloudEnabledForAccount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_RemoteStorageLibrary_IsCloudEnabledForAccount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_RemoteStorageLibrary::execIsCloudEnabledForAccount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_RemoteStorageLibrary::IsCloudEnabledForAccount();
	P_NATIVE_END;
}
// ********** End Class USIK_RemoteStorageLibrary Function IsCloudEnabledForAccount ****************

// ********** Begin Class USIK_RemoteStorageLibrary Function IsCloudEnabledForApp ******************
struct Z_Construct_UFunction_USIK_RemoteStorageLibrary_IsCloudEnabledForApp_Statics
{
	struct SIK_RemoteStorageLibrary_eventIsCloudEnabledForApp_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Remote Storage" },
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_RemoteStorageLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsCloudEnabledForApp constinit property declarations ******************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsCloudEnabledForApp constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsCloudEnabledForApp Property Definitions *****************************
void Z_Construct_UFunction_USIK_RemoteStorageLibrary_IsCloudEnabledForApp_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_RemoteStorageLibrary_eventIsCloudEnabledForApp_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_IsCloudEnabledForApp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_RemoteStorageLibrary_eventIsCloudEnabledForApp_Parms), &Z_Construct_UFunction_USIK_RemoteStorageLibrary_IsCloudEnabledForApp_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_RemoteStorageLibrary_IsCloudEnabledForApp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_IsCloudEnabledForApp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_IsCloudEnabledForApp_Statics::PropPointers) < 2048);
// ********** End Function IsCloudEnabledForApp Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_IsCloudEnabledForApp_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_RemoteStorageLibrary, nullptr, "IsCloudEnabledForApp", 	Z_Construct_UFunction_USIK_RemoteStorageLibrary_IsCloudEnabledForApp_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_IsCloudEnabledForApp_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_IsCloudEnabledForApp_Statics::SIK_RemoteStorageLibrary_eventIsCloudEnabledForApp_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_IsCloudEnabledForApp_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_RemoteStorageLibrary_IsCloudEnabledForApp_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_IsCloudEnabledForApp_Statics::SIK_RemoteStorageLibrary_eventIsCloudEnabledForApp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_RemoteStorageLibrary_IsCloudEnabledForApp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_RemoteStorageLibrary_IsCloudEnabledForApp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_RemoteStorageLibrary::execIsCloudEnabledForApp)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_RemoteStorageLibrary::IsCloudEnabledForApp();
	P_NATIVE_END;
}
// ********** End Class USIK_RemoteStorageLibrary Function IsCloudEnabledForApp ********************

// ********** Begin Class USIK_RemoteStorageLibrary Function SetCloudEnabledForApp *****************
struct Z_Construct_UFunction_USIK_RemoteStorageLibrary_SetCloudEnabledForApp_Statics
{
	struct SIK_RemoteStorageLibrary_eventSetCloudEnabledForApp_Parms
	{
		bool bEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Remote Storage" },
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_RemoteStorageLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetCloudEnabledForApp constinit property declarations *****************
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetCloudEnabledForApp constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetCloudEnabledForApp Property Definitions ****************************
void Z_Construct_UFunction_USIK_RemoteStorageLibrary_SetCloudEnabledForApp_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((SIK_RemoteStorageLibrary_eventSetCloudEnabledForApp_Parms*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_SetCloudEnabledForApp_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_RemoteStorageLibrary_eventSetCloudEnabledForApp_Parms), &Z_Construct_UFunction_USIK_RemoteStorageLibrary_SetCloudEnabledForApp_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_RemoteStorageLibrary_SetCloudEnabledForApp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_SetCloudEnabledForApp_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_SetCloudEnabledForApp_Statics::PropPointers) < 2048);
// ********** End Function SetCloudEnabledForApp Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_SetCloudEnabledForApp_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_RemoteStorageLibrary, nullptr, "SetCloudEnabledForApp", 	Z_Construct_UFunction_USIK_RemoteStorageLibrary_SetCloudEnabledForApp_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_SetCloudEnabledForApp_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_SetCloudEnabledForApp_Statics::SIK_RemoteStorageLibrary_eventSetCloudEnabledForApp_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_SetCloudEnabledForApp_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_RemoteStorageLibrary_SetCloudEnabledForApp_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_SetCloudEnabledForApp_Statics::SIK_RemoteStorageLibrary_eventSetCloudEnabledForApp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_RemoteStorageLibrary_SetCloudEnabledForApp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_RemoteStorageLibrary_SetCloudEnabledForApp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_RemoteStorageLibrary::execSetCloudEnabledForApp)
{
	P_GET_UBOOL(Z_Param_bEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_RemoteStorageLibrary::SetCloudEnabledForApp(Z_Param_bEnabled);
	P_NATIVE_END;
}
// ********** End Class USIK_RemoteStorageLibrary Function SetCloudEnabledForApp *******************

// ********** Begin Class USIK_RemoteStorageLibrary Function SetSyncPlatforms **********************
struct Z_Construct_UFunction_USIK_RemoteStorageLibrary_SetSyncPlatforms_Statics
{
	struct SIK_RemoteStorageLibrary_eventSetSyncPlatforms_Parms
	{
		FString FileName;
		TEnumAsByte<ESIK_RemoteStoragePlatform> RemoteStoragePlatform;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Remote Storage" },
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_RemoteStorageLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetSyncPlatforms constinit property declarations **********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RemoteStoragePlatform;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetSyncPlatforms constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetSyncPlatforms Property Definitions *********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_SetSyncPlatforms_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventSetSyncPlatforms_Parms, FileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileName_MetaData), NewProp_FileName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_SetSyncPlatforms_Statics::NewProp_RemoteStoragePlatform = { "RemoteStoragePlatform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventSetSyncPlatforms_Parms, RemoteStoragePlatform), Z_Construct_UEnum_SteamIntegrationKit_ESIK_RemoteStoragePlatform, METADATA_PARAMS(0, nullptr) }; // 1661510505
void Z_Construct_UFunction_USIK_RemoteStorageLibrary_SetSyncPlatforms_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_RemoteStorageLibrary_eventSetSyncPlatforms_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_SetSyncPlatforms_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_RemoteStorageLibrary_eventSetSyncPlatforms_Parms), &Z_Construct_UFunction_USIK_RemoteStorageLibrary_SetSyncPlatforms_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_RemoteStorageLibrary_SetSyncPlatforms_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_SetSyncPlatforms_Statics::NewProp_FileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_SetSyncPlatforms_Statics::NewProp_RemoteStoragePlatform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_SetSyncPlatforms_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_SetSyncPlatforms_Statics::PropPointers) < 2048);
// ********** End Function SetSyncPlatforms Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_SetSyncPlatforms_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_RemoteStorageLibrary, nullptr, "SetSyncPlatforms", 	Z_Construct_UFunction_USIK_RemoteStorageLibrary_SetSyncPlatforms_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_SetSyncPlatforms_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_SetSyncPlatforms_Statics::SIK_RemoteStorageLibrary_eventSetSyncPlatforms_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_SetSyncPlatforms_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_RemoteStorageLibrary_SetSyncPlatforms_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_SetSyncPlatforms_Statics::SIK_RemoteStorageLibrary_eventSetSyncPlatforms_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_RemoteStorageLibrary_SetSyncPlatforms()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_RemoteStorageLibrary_SetSyncPlatforms_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_RemoteStorageLibrary::execSetSyncPlatforms)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
	P_GET_PROPERTY(FByteProperty,Z_Param_RemoteStoragePlatform);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_RemoteStorageLibrary::SetSyncPlatforms(Z_Param_FileName,ESIK_RemoteStoragePlatform(Z_Param_RemoteStoragePlatform));
	P_NATIVE_END;
}
// ********** End Class USIK_RemoteStorageLibrary Function SetSyncPlatforms ************************

// ********** Begin Class USIK_RemoteStorageLibrary Function UGCRead *******************************
struct Z_Construct_UFunction_USIK_RemoteStorageLibrary_UGCRead_Statics
{
	struct SIK_RemoteStorageLibrary_eventUGCRead_Parms
	{
		FSIK_UGCHandle UGCHandle;
		TArray<uint8> Data;
		int32 DataToRead;
		int32 Offset;
		TEnumAsByte<ESIK_UGCReadAction> Action;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Remote Storage" },
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_RemoteStorageLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UGCHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function UGCRead constinit property declarations *******************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_UGCHandle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DataToRead;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Action;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function UGCRead constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function UGCRead Property Definitions ******************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_UGCRead_Statics::NewProp_UGCHandle = { "UGCHandle", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventUGCRead_Parms, UGCHandle), Z_Construct_UScriptStruct_FSIK_UGCHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UGCHandle_MetaData), NewProp_UGCHandle_MetaData) }; // 3467694534
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_UGCRead_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_UGCRead_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventUGCRead_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_UGCRead_Statics::NewProp_DataToRead = { "DataToRead", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventUGCRead_Parms, DataToRead), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_UGCRead_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventUGCRead_Parms, Offset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_UGCRead_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventUGCRead_Parms, Action), Z_Construct_UEnum_SteamIntegrationKit_ESIK_UGCReadAction, METADATA_PARAMS(0, nullptr) }; // 2322620827
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_UGCRead_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoteStorageLibrary_eventUGCRead_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_RemoteStorageLibrary_UGCRead_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_UGCRead_Statics::NewProp_UGCHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_UGCRead_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_UGCRead_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_UGCRead_Statics::NewProp_DataToRead,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_UGCRead_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_UGCRead_Statics::NewProp_Action,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoteStorageLibrary_UGCRead_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_UGCRead_Statics::PropPointers) < 2048);
// ********** End Function UGCRead Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_RemoteStorageLibrary_UGCRead_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_RemoteStorageLibrary, nullptr, "UGCRead", 	Z_Construct_UFunction_USIK_RemoteStorageLibrary_UGCRead_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_UGCRead_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_UGCRead_Statics::SIK_RemoteStorageLibrary_eventUGCRead_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoteStorageLibrary_UGCRead_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_RemoteStorageLibrary_UGCRead_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_RemoteStorageLibrary_UGCRead_Statics::SIK_RemoteStorageLibrary_eventUGCRead_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_RemoteStorageLibrary_UGCRead()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_RemoteStorageLibrary_UGCRead_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_RemoteStorageLibrary::execUGCRead)
{
	P_GET_STRUCT(FSIK_UGCHandle,Z_Param_UGCHandle);
	P_GET_TARRAY_REF(uint8,Z_Param_Out_Data);
	P_GET_PROPERTY(FIntProperty,Z_Param_DataToRead);
	P_GET_PROPERTY(FIntProperty,Z_Param_Offset);
	P_GET_PROPERTY(FByteProperty,Z_Param_Action);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USIK_RemoteStorageLibrary::UGCRead(Z_Param_UGCHandle,Z_Param_Out_Data,Z_Param_DataToRead,Z_Param_Offset,ESIK_UGCReadAction(Z_Param_Action));
	P_NATIVE_END;
}
// ********** End Class USIK_RemoteStorageLibrary Function UGCRead *********************************

// ********** Begin Class USIK_RemoteStorageLibrary ************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_RemoteStorageLibrary;
UClass* USIK_RemoteStorageLibrary::GetPrivateStaticClass()
{
	using TClass = USIK_RemoteStorageLibrary;
	if (!Z_Registration_Info_UClass_USIK_RemoteStorageLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_RemoteStorageLibrary"),
			Z_Registration_Info_UClass_USIK_RemoteStorageLibrary.InnerSingleton,
			StaticRegisterNativesUSIK_RemoteStorageLibrary,
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
	return Z_Registration_Info_UClass_USIK_RemoteStorageLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_RemoteStorageLibrary_NoRegister()
{
	return USIK_RemoteStorageLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_RemoteStorageLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/RemoteStorage/SIK_RemoteStorageLibrary.h" },
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_RemoteStorageLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_RemoteStorageLibrary constinit property declarations ****************
// ********** End Class USIK_RemoteStorageLibrary constinit property declarations ******************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("BeginFileWriteBatch"), .Pointer = &USIK_RemoteStorageLibrary::execBeginFileWriteBatch },
		{ .NameUTF8 = UTF8TEXT("EndFileWriteBatch"), .Pointer = &USIK_RemoteStorageLibrary::execEndFileWriteBatch },
		{ .NameUTF8 = UTF8TEXT("FileDelete"), .Pointer = &USIK_RemoteStorageLibrary::execFileDelete },
		{ .NameUTF8 = UTF8TEXT("FileExists"), .Pointer = &USIK_RemoteStorageLibrary::execFileExists },
		{ .NameUTF8 = UTF8TEXT("FileForget"), .Pointer = &USIK_RemoteStorageLibrary::execFileForget },
		{ .NameUTF8 = UTF8TEXT("FilePersisted"), .Pointer = &USIK_RemoteStorageLibrary::execFilePersisted },
		{ .NameUTF8 = UTF8TEXT("FileRead"), .Pointer = &USIK_RemoteStorageLibrary::execFileRead },
		{ .NameUTF8 = UTF8TEXT("FileWrite"), .Pointer = &USIK_RemoteStorageLibrary::execFileWrite },
		{ .NameUTF8 = UTF8TEXT("FileWriteStreamCancel"), .Pointer = &USIK_RemoteStorageLibrary::execFileWriteStreamCancel },
		{ .NameUTF8 = UTF8TEXT("FileWriteStreamClose"), .Pointer = &USIK_RemoteStorageLibrary::execFileWriteStreamClose },
		{ .NameUTF8 = UTF8TEXT("FileWriteStreamOpen"), .Pointer = &USIK_RemoteStorageLibrary::execFileWriteStreamOpen },
		{ .NameUTF8 = UTF8TEXT("FileWriteStreamWriteChunk"), .Pointer = &USIK_RemoteStorageLibrary::execFileWriteStreamWriteChunk },
		{ .NameUTF8 = UTF8TEXT("GetCachedUGCCount"), .Pointer = &USIK_RemoteStorageLibrary::execGetCachedUGCCount },
		{ .NameUTF8 = UTF8TEXT("GetCachedUGCHandle"), .Pointer = &USIK_RemoteStorageLibrary::execGetCachedUGCHandle },
		{ .NameUTF8 = UTF8TEXT("GetFileCount"), .Pointer = &USIK_RemoteStorageLibrary::execGetFileCount },
		{ .NameUTF8 = UTF8TEXT("GetFileNameAndSize"), .Pointer = &USIK_RemoteStorageLibrary::execGetFileNameAndSize },
		{ .NameUTF8 = UTF8TEXT("GetFileSize"), .Pointer = &USIK_RemoteStorageLibrary::execGetFileSize },
		{ .NameUTF8 = UTF8TEXT("GetFileTimestamp"), .Pointer = &USIK_RemoteStorageLibrary::execGetFileTimestamp },
		{ .NameUTF8 = UTF8TEXT("GetLocalFileChange"), .Pointer = &USIK_RemoteStorageLibrary::execGetLocalFileChange },
		{ .NameUTF8 = UTF8TEXT("GetLocalFileChangeCount"), .Pointer = &USIK_RemoteStorageLibrary::execGetLocalFileChangeCount },
		{ .NameUTF8 = UTF8TEXT("GetQuota"), .Pointer = &USIK_RemoteStorageLibrary::execGetQuota },
		{ .NameUTF8 = UTF8TEXT("GetSyncPlatforms"), .Pointer = &USIK_RemoteStorageLibrary::execGetSyncPlatforms },
		{ .NameUTF8 = UTF8TEXT("GetUGCDetails"), .Pointer = &USIK_RemoteStorageLibrary::execGetUGCDetails },
		{ .NameUTF8 = UTF8TEXT("GetUGCDownloadProgress"), .Pointer = &USIK_RemoteStorageLibrary::execGetUGCDownloadProgress },
		{ .NameUTF8 = UTF8TEXT("IsCloudEnabledForAccount"), .Pointer = &USIK_RemoteStorageLibrary::execIsCloudEnabledForAccount },
		{ .NameUTF8 = UTF8TEXT("IsCloudEnabledForApp"), .Pointer = &USIK_RemoteStorageLibrary::execIsCloudEnabledForApp },
		{ .NameUTF8 = UTF8TEXT("SetCloudEnabledForApp"), .Pointer = &USIK_RemoteStorageLibrary::execSetCloudEnabledForApp },
		{ .NameUTF8 = UTF8TEXT("SetSyncPlatforms"), .Pointer = &USIK_RemoteStorageLibrary::execSetSyncPlatforms },
		{ .NameUTF8 = UTF8TEXT("UGCRead"), .Pointer = &USIK_RemoteStorageLibrary::execUGCRead },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_RemoteStorageLibrary_BeginFileWriteBatch, "BeginFileWriteBatch" }, // 1726768720
		{ &Z_Construct_UFunction_USIK_RemoteStorageLibrary_EndFileWriteBatch, "EndFileWriteBatch" }, // 792510057
		{ &Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileDelete, "FileDelete" }, // 319062888
		{ &Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileExists, "FileExists" }, // 2244252459
		{ &Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileForget, "FileForget" }, // 207256794
		{ &Z_Construct_UFunction_USIK_RemoteStorageLibrary_FilePersisted, "FilePersisted" }, // 3676864142
		{ &Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileRead, "FileRead" }, // 228017701
		{ &Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWrite, "FileWrite" }, // 2691113260
		{ &Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamCancel, "FileWriteStreamCancel" }, // 2146413794
		{ &Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamClose, "FileWriteStreamClose" }, // 3382974972
		{ &Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamOpen, "FileWriteStreamOpen" }, // 3529806646
		{ &Z_Construct_UFunction_USIK_RemoteStorageLibrary_FileWriteStreamWriteChunk, "FileWriteStreamWriteChunk" }, // 2170174117
		{ &Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetCachedUGCCount, "GetCachedUGCCount" }, // 1709065964
		{ &Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetCachedUGCHandle, "GetCachedUGCHandle" }, // 3608081277
		{ &Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileCount, "GetFileCount" }, // 834560407
		{ &Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileNameAndSize, "GetFileNameAndSize" }, // 2455710553
		{ &Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileSize, "GetFileSize" }, // 1981173730
		{ &Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetFileTimestamp, "GetFileTimestamp" }, // 3270544597
		{ &Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetLocalFileChange, "GetLocalFileChange" }, // 3906291976
		{ &Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetLocalFileChangeCount, "GetLocalFileChangeCount" }, // 2174337432
		{ &Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetQuota, "GetQuota" }, // 3859486600
		{ &Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetSyncPlatforms, "GetSyncPlatforms" }, // 1286454399
		{ &Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDetails, "GetUGCDetails" }, // 591494312
		{ &Z_Construct_UFunction_USIK_RemoteStorageLibrary_GetUGCDownloadProgress, "GetUGCDownloadProgress" }, // 2329822102
		{ &Z_Construct_UFunction_USIK_RemoteStorageLibrary_IsCloudEnabledForAccount, "IsCloudEnabledForAccount" }, // 1536321013
		{ &Z_Construct_UFunction_USIK_RemoteStorageLibrary_IsCloudEnabledForApp, "IsCloudEnabledForApp" }, // 1086247239
		{ &Z_Construct_UFunction_USIK_RemoteStorageLibrary_SetCloudEnabledForApp, "SetCloudEnabledForApp" }, // 3259743347
		{ &Z_Construct_UFunction_USIK_RemoteStorageLibrary_SetSyncPlatforms, "SetSyncPlatforms" }, // 1532452042
		{ &Z_Construct_UFunction_USIK_RemoteStorageLibrary_UGCRead, "UGCRead" }, // 566244461
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_RemoteStorageLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_RemoteStorageLibrary_Statics
UObject* (*const Z_Construct_UClass_USIK_RemoteStorageLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_RemoteStorageLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_RemoteStorageLibrary_Statics::ClassParams = {
	&USIK_RemoteStorageLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_RemoteStorageLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_RemoteStorageLibrary_Statics::Class_MetaDataParams)
};
void USIK_RemoteStorageLibrary::StaticRegisterNativesUSIK_RemoteStorageLibrary()
{
	UClass* Class = USIK_RemoteStorageLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_RemoteStorageLibrary_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_RemoteStorageLibrary()
{
	if (!Z_Registration_Info_UClass_USIK_RemoteStorageLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_RemoteStorageLibrary.OuterSingleton, Z_Construct_UClass_USIK_RemoteStorageLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_RemoteStorageLibrary.OuterSingleton;
}
USIK_RemoteStorageLibrary::USIK_RemoteStorageLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_RemoteStorageLibrary);
USIK_RemoteStorageLibrary::~USIK_RemoteStorageLibrary() {}
// ********** End Class USIK_RemoteStorageLibrary **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_RemoteStorage_SIK_RemoteStorageLibrary_h__Script_SteamIntegrationKit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_RemoteStorageLibrary, USIK_RemoteStorageLibrary::StaticClass, TEXT("USIK_RemoteStorageLibrary"), &Z_Registration_Info_UClass_USIK_RemoteStorageLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_RemoteStorageLibrary), 2123376220U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_RemoteStorage_SIK_RemoteStorageLibrary_h__Script_SteamIntegrationKit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_RemoteStorage_SIK_RemoteStorageLibrary_h__Script_SteamIntegrationKit_715441149{
	TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_RemoteStorage_SIK_RemoteStorageLibrary_h__Script_SteamIntegrationKit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_RemoteStorage_SIK_RemoteStorageLibrary_h__Script_SteamIntegrationKit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
