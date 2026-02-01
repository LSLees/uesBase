// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/RemoteStorage/SIK_RemoteStorageSubsystem.h"
#include "Engine/GameInstance.h"
#include "SIK_SharedFile.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_RemoteStorageSubsystem() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_RemoteStorageSubsystem();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_RemoteStorageSubsystem_NoRegister();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageDownloadUGCResult__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageFileShareResult__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageFileWriteAsyncComplete__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageLocalFileChange__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStoragePublishedFileSubscribedComplete__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStoragePublishedFileUnsubscribedComplete__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageSubscribePublishedFileResult__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageUnsubscribePublishedFileResult__DelegateSignature();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_AppId();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_PublishedFileId();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_SteamId();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_UGCHandle();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnRemoteStorageDownloadUGCResult *************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageDownloadUGCResult__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnRemoteStorageDownloadUGCResult_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
		FSIK_UGCHandle UGCHandle;
		int32 AppID;
		FString FileName;
		int32 Size;
		FSIK_SteamId SteamIDOwner;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_RemoteStorageSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnRemoteStorageDownloadUGCResult constinit property declarations *****
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UGCHandle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Size;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDOwner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnRemoteStorageDownloadUGCResult constinit property declarations *******
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnRemoteStorageDownloadUGCResult Property Definitions ****************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageDownloadUGCResult__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnRemoteStorageDownloadUGCResult_Parms, Result), Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result, METADATA_PARAMS(0, nullptr) }; // 655382749
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageDownloadUGCResult__DelegateSignature_Statics::NewProp_UGCHandle = { "UGCHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnRemoteStorageDownloadUGCResult_Parms, UGCHandle), Z_Construct_UScriptStruct_FSIK_UGCHandle, METADATA_PARAMS(0, nullptr) }; // 3467694534
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageDownloadUGCResult__DelegateSignature_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnRemoteStorageDownloadUGCResult_Parms, AppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageDownloadUGCResult__DelegateSignature_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnRemoteStorageDownloadUGCResult_Parms, FileName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageDownloadUGCResult__DelegateSignature_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnRemoteStorageDownloadUGCResult_Parms, Size), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageDownloadUGCResult__DelegateSignature_Statics::NewProp_SteamIDOwner = { "SteamIDOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnRemoteStorageDownloadUGCResult_Parms, SteamIDOwner), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageDownloadUGCResult__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageDownloadUGCResult__DelegateSignature_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageDownloadUGCResult__DelegateSignature_Statics::NewProp_UGCHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageDownloadUGCResult__DelegateSignature_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageDownloadUGCResult__DelegateSignature_Statics::NewProp_FileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageDownloadUGCResult__DelegateSignature_Statics::NewProp_Size,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageDownloadUGCResult__DelegateSignature_Statics::NewProp_SteamIDOwner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageDownloadUGCResult__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnRemoteStorageDownloadUGCResult Property Definitions ******************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageDownloadUGCResult__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnRemoteStorageDownloadUGCResult__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageDownloadUGCResult__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageDownloadUGCResult__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageDownloadUGCResult__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnRemoteStorageDownloadUGCResult_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageDownloadUGCResult__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageDownloadUGCResult__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageDownloadUGCResult__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnRemoteStorageDownloadUGCResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageDownloadUGCResult__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageDownloadUGCResult__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRemoteStorageDownloadUGCResult_DelegateWrapper(const FMulticastScriptDelegate& OnRemoteStorageDownloadUGCResult, ESIK_Result Result, FSIK_UGCHandle UGCHandle, int32 AppID, const FString& FileName, int32 Size, FSIK_SteamId SteamIDOwner)
{
	struct _Script_SteamIntegrationKit_eventOnRemoteStorageDownloadUGCResult_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
		FSIK_UGCHandle UGCHandle;
		int32 AppID;
		FString FileName;
		int32 Size;
		FSIK_SteamId SteamIDOwner;
	};
	_Script_SteamIntegrationKit_eventOnRemoteStorageDownloadUGCResult_Parms Parms;
	Parms.Result=Result;
	Parms.UGCHandle=UGCHandle;
	Parms.AppID=AppID;
	Parms.FileName=FileName;
	Parms.Size=Size;
	Parms.SteamIDOwner=SteamIDOwner;
	OnRemoteStorageDownloadUGCResult.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnRemoteStorageDownloadUGCResult ***************************************

// ********** Begin Delegate FOnRemoteStorageFileShareResult ***************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageFileShareResult__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnRemoteStorageFileShareResult_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
		FSIK_UGCHandle FileHandle;
		FString FileName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_RemoteStorageSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnRemoteStorageFileShareResult constinit property declarations *******
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FileHandle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnRemoteStorageFileShareResult constinit property declarations *********
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnRemoteStorageFileShareResult Property Definitions ******************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageFileShareResult__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnRemoteStorageFileShareResult_Parms, Result), Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result, METADATA_PARAMS(0, nullptr) }; // 655382749
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageFileShareResult__DelegateSignature_Statics::NewProp_FileHandle = { "FileHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnRemoteStorageFileShareResult_Parms, FileHandle), Z_Construct_UScriptStruct_FSIK_UGCHandle, METADATA_PARAMS(0, nullptr) }; // 3467694534
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageFileShareResult__DelegateSignature_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnRemoteStorageFileShareResult_Parms, FileName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageFileShareResult__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageFileShareResult__DelegateSignature_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageFileShareResult__DelegateSignature_Statics::NewProp_FileHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageFileShareResult__DelegateSignature_Statics::NewProp_FileName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageFileShareResult__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnRemoteStorageFileShareResult Property Definitions ********************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageFileShareResult__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnRemoteStorageFileShareResult__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageFileShareResult__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageFileShareResult__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageFileShareResult__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnRemoteStorageFileShareResult_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageFileShareResult__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageFileShareResult__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageFileShareResult__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnRemoteStorageFileShareResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageFileShareResult__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageFileShareResult__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRemoteStorageFileShareResult_DelegateWrapper(const FMulticastScriptDelegate& OnRemoteStorageFileShareResult, ESIK_Result Result, FSIK_UGCHandle FileHandle, const FString& FileName)
{
	struct _Script_SteamIntegrationKit_eventOnRemoteStorageFileShareResult_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
		FSIK_UGCHandle FileHandle;
		FString FileName;
	};
	_Script_SteamIntegrationKit_eventOnRemoteStorageFileShareResult_Parms Parms;
	Parms.Result=Result;
	Parms.FileHandle=FileHandle;
	Parms.FileName=FileName;
	OnRemoteStorageFileShareResult.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnRemoteStorageFileShareResult *****************************************

// ********** Begin Delegate FOnRemoteStorageFileWriteAsyncComplete ********************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageFileWriteAsyncComplete__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnRemoteStorageFileWriteAsyncComplete_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_RemoteStorageSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnRemoteStorageFileWriteAsyncComplete constinit property declarations 
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnRemoteStorageFileWriteAsyncComplete constinit property declarations **
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnRemoteStorageFileWriteAsyncComplete Property Definitions ***********
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageFileWriteAsyncComplete__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnRemoteStorageFileWriteAsyncComplete_Parms, Result), Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result, METADATA_PARAMS(0, nullptr) }; // 655382749
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageFileWriteAsyncComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageFileWriteAsyncComplete__DelegateSignature_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageFileWriteAsyncComplete__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnRemoteStorageFileWriteAsyncComplete Property Definitions *************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageFileWriteAsyncComplete__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnRemoteStorageFileWriteAsyncComplete__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageFileWriteAsyncComplete__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageFileWriteAsyncComplete__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageFileWriteAsyncComplete__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnRemoteStorageFileWriteAsyncComplete_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageFileWriteAsyncComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageFileWriteAsyncComplete__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageFileWriteAsyncComplete__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnRemoteStorageFileWriteAsyncComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageFileWriteAsyncComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageFileWriteAsyncComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRemoteStorageFileWriteAsyncComplete_DelegateWrapper(const FMulticastScriptDelegate& OnRemoteStorageFileWriteAsyncComplete, ESIK_Result Result)
{
	struct _Script_SteamIntegrationKit_eventOnRemoteStorageFileWriteAsyncComplete_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
	};
	_Script_SteamIntegrationKit_eventOnRemoteStorageFileWriteAsyncComplete_Parms Parms;
	Parms.Result=Result;
	OnRemoteStorageFileWriteAsyncComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnRemoteStorageFileWriteAsyncComplete **********************************

// ********** Begin Delegate FOnRemoteStorageLocalFileChange ***************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageLocalFileChange__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_RemoteStorageSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnRemoteStorageLocalFileChange constinit property declarations *******
// ********** End Delegate FOnRemoteStorageLocalFileChange constinit property declarations *********
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageLocalFileChange__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnRemoteStorageLocalFileChange__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageLocalFileChange__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageLocalFileChange__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageLocalFileChange__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageLocalFileChange__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRemoteStorageLocalFileChange_DelegateWrapper(const FMulticastScriptDelegate& OnRemoteStorageLocalFileChange)
{
	OnRemoteStorageLocalFileChange.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnRemoteStorageLocalFileChange *****************************************

// ********** Begin Delegate FOnRemoteStoragePublishedFileSubscribedComplete ***********************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStoragePublishedFileSubscribedComplete__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnRemoteStoragePublishedFileSubscribedComplete_Parms
	{
		FSIK_PublishedFileId PublishedFileId;
		FSIK_AppId AppID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_RemoteStorageSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnRemoteStoragePublishedFileSubscribedComplete constinit property declarations 
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnRemoteStoragePublishedFileSubscribedComplete constinit property declarations 
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnRemoteStoragePublishedFileSubscribedComplete Property Definitions **
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStoragePublishedFileSubscribedComplete__DelegateSignature_Statics::NewProp_PublishedFileId = { "PublishedFileId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnRemoteStoragePublishedFileSubscribedComplete_Parms, PublishedFileId), Z_Construct_UScriptStruct_FSIK_PublishedFileId, METADATA_PARAMS(0, nullptr) }; // 3479136102
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStoragePublishedFileSubscribedComplete__DelegateSignature_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnRemoteStoragePublishedFileSubscribedComplete_Parms, AppID), Z_Construct_UScriptStruct_FSIK_AppId, METADATA_PARAMS(0, nullptr) }; // 3325316996
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStoragePublishedFileSubscribedComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStoragePublishedFileSubscribedComplete__DelegateSignature_Statics::NewProp_PublishedFileId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStoragePublishedFileSubscribedComplete__DelegateSignature_Statics::NewProp_AppID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStoragePublishedFileSubscribedComplete__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnRemoteStoragePublishedFileSubscribedComplete Property Definitions ****
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStoragePublishedFileSubscribedComplete__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnRemoteStoragePublishedFileSubscribedComplete__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStoragePublishedFileSubscribedComplete__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStoragePublishedFileSubscribedComplete__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStoragePublishedFileSubscribedComplete__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnRemoteStoragePublishedFileSubscribedComplete_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStoragePublishedFileSubscribedComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStoragePublishedFileSubscribedComplete__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStoragePublishedFileSubscribedComplete__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnRemoteStoragePublishedFileSubscribedComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStoragePublishedFileSubscribedComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStoragePublishedFileSubscribedComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRemoteStoragePublishedFileSubscribedComplete_DelegateWrapper(const FMulticastScriptDelegate& OnRemoteStoragePublishedFileSubscribedComplete, FSIK_PublishedFileId PublishedFileId, FSIK_AppId AppID)
{
	struct _Script_SteamIntegrationKit_eventOnRemoteStoragePublishedFileSubscribedComplete_Parms
	{
		FSIK_PublishedFileId PublishedFileId;
		FSIK_AppId AppID;
	};
	_Script_SteamIntegrationKit_eventOnRemoteStoragePublishedFileSubscribedComplete_Parms Parms;
	Parms.PublishedFileId=PublishedFileId;
	Parms.AppID=AppID;
	OnRemoteStoragePublishedFileSubscribedComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnRemoteStoragePublishedFileSubscribedComplete *************************

// ********** Begin Delegate FOnRemoteStoragePublishedFileUnsubscribedComplete *********************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStoragePublishedFileUnsubscribedComplete__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnRemoteStoragePublishedFileUnsubscribedComplete_Parms
	{
		FSIK_PublishedFileId PublishedFileId;
		FSIK_AppId AppID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_RemoteStorageSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnRemoteStoragePublishedFileUnsubscribedComplete constinit property declarations 
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnRemoteStoragePublishedFileUnsubscribedComplete constinit property declarations 
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnRemoteStoragePublishedFileUnsubscribedComplete Property Definitions 
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStoragePublishedFileUnsubscribedComplete__DelegateSignature_Statics::NewProp_PublishedFileId = { "PublishedFileId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnRemoteStoragePublishedFileUnsubscribedComplete_Parms, PublishedFileId), Z_Construct_UScriptStruct_FSIK_PublishedFileId, METADATA_PARAMS(0, nullptr) }; // 3479136102
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStoragePublishedFileUnsubscribedComplete__DelegateSignature_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnRemoteStoragePublishedFileUnsubscribedComplete_Parms, AppID), Z_Construct_UScriptStruct_FSIK_AppId, METADATA_PARAMS(0, nullptr) }; // 3325316996
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStoragePublishedFileUnsubscribedComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStoragePublishedFileUnsubscribedComplete__DelegateSignature_Statics::NewProp_PublishedFileId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStoragePublishedFileUnsubscribedComplete__DelegateSignature_Statics::NewProp_AppID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStoragePublishedFileUnsubscribedComplete__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnRemoteStoragePublishedFileUnsubscribedComplete Property Definitions **
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStoragePublishedFileUnsubscribedComplete__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnRemoteStoragePublishedFileUnsubscribedComplete__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStoragePublishedFileUnsubscribedComplete__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStoragePublishedFileUnsubscribedComplete__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStoragePublishedFileUnsubscribedComplete__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnRemoteStoragePublishedFileUnsubscribedComplete_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStoragePublishedFileUnsubscribedComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStoragePublishedFileUnsubscribedComplete__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStoragePublishedFileUnsubscribedComplete__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnRemoteStoragePublishedFileUnsubscribedComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStoragePublishedFileUnsubscribedComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStoragePublishedFileUnsubscribedComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRemoteStoragePublishedFileUnsubscribedComplete_DelegateWrapper(const FMulticastScriptDelegate& OnRemoteStoragePublishedFileUnsubscribedComplete, FSIK_PublishedFileId PublishedFileId, FSIK_AppId AppID)
{
	struct _Script_SteamIntegrationKit_eventOnRemoteStoragePublishedFileUnsubscribedComplete_Parms
	{
		FSIK_PublishedFileId PublishedFileId;
		FSIK_AppId AppID;
	};
	_Script_SteamIntegrationKit_eventOnRemoteStoragePublishedFileUnsubscribedComplete_Parms Parms;
	Parms.PublishedFileId=PublishedFileId;
	Parms.AppID=AppID;
	OnRemoteStoragePublishedFileUnsubscribedComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnRemoteStoragePublishedFileUnsubscribedComplete ***********************

// ********** Begin Delegate FOnRemoteStorageSubscribePublishedFileResult **************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageSubscribePublishedFileResult__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnRemoteStorageSubscribePublishedFileResult_Parms
	{
		FSIK_PublishedFileId PublishedFileId;
		TEnumAsByte<ESIK_Result> Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_RemoteStorageSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnRemoteStorageSubscribePublishedFileResult constinit property declarations 
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnRemoteStorageSubscribePublishedFileResult constinit property declarations 
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnRemoteStorageSubscribePublishedFileResult Property Definitions *****
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageSubscribePublishedFileResult__DelegateSignature_Statics::NewProp_PublishedFileId = { "PublishedFileId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnRemoteStorageSubscribePublishedFileResult_Parms, PublishedFileId), Z_Construct_UScriptStruct_FSIK_PublishedFileId, METADATA_PARAMS(0, nullptr) }; // 3479136102
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageSubscribePublishedFileResult__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnRemoteStorageSubscribePublishedFileResult_Parms, Result), Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result, METADATA_PARAMS(0, nullptr) }; // 655382749
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageSubscribePublishedFileResult__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageSubscribePublishedFileResult__DelegateSignature_Statics::NewProp_PublishedFileId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageSubscribePublishedFileResult__DelegateSignature_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageSubscribePublishedFileResult__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnRemoteStorageSubscribePublishedFileResult Property Definitions *******
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageSubscribePublishedFileResult__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnRemoteStorageSubscribePublishedFileResult__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageSubscribePublishedFileResult__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageSubscribePublishedFileResult__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageSubscribePublishedFileResult__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnRemoteStorageSubscribePublishedFileResult_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageSubscribePublishedFileResult__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageSubscribePublishedFileResult__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageSubscribePublishedFileResult__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnRemoteStorageSubscribePublishedFileResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageSubscribePublishedFileResult__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageSubscribePublishedFileResult__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRemoteStorageSubscribePublishedFileResult_DelegateWrapper(const FMulticastScriptDelegate& OnRemoteStorageSubscribePublishedFileResult, FSIK_PublishedFileId PublishedFileId, ESIK_Result Result)
{
	struct _Script_SteamIntegrationKit_eventOnRemoteStorageSubscribePublishedFileResult_Parms
	{
		FSIK_PublishedFileId PublishedFileId;
		TEnumAsByte<ESIK_Result> Result;
	};
	_Script_SteamIntegrationKit_eventOnRemoteStorageSubscribePublishedFileResult_Parms Parms;
	Parms.PublishedFileId=PublishedFileId;
	Parms.Result=Result;
	OnRemoteStorageSubscribePublishedFileResult.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnRemoteStorageSubscribePublishedFileResult ****************************

// ********** Begin Delegate FOnRemoteStorageUnsubscribePublishedFileResult ************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageUnsubscribePublishedFileResult__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnRemoteStorageUnsubscribePublishedFileResult_Parms
	{
		FSIK_PublishedFileId PublishedFileId;
		TEnumAsByte<ESIK_Result> Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_RemoteStorageSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnRemoteStorageUnsubscribePublishedFileResult constinit property declarations 
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnRemoteStorageUnsubscribePublishedFileResult constinit property declarations 
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnRemoteStorageUnsubscribePublishedFileResult Property Definitions ***
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageUnsubscribePublishedFileResult__DelegateSignature_Statics::NewProp_PublishedFileId = { "PublishedFileId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnRemoteStorageUnsubscribePublishedFileResult_Parms, PublishedFileId), Z_Construct_UScriptStruct_FSIK_PublishedFileId, METADATA_PARAMS(0, nullptr) }; // 3479136102
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageUnsubscribePublishedFileResult__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnRemoteStorageUnsubscribePublishedFileResult_Parms, Result), Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result, METADATA_PARAMS(0, nullptr) }; // 655382749
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageUnsubscribePublishedFileResult__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageUnsubscribePublishedFileResult__DelegateSignature_Statics::NewProp_PublishedFileId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageUnsubscribePublishedFileResult__DelegateSignature_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageUnsubscribePublishedFileResult__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnRemoteStorageUnsubscribePublishedFileResult Property Definitions *****
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageUnsubscribePublishedFileResult__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnRemoteStorageUnsubscribePublishedFileResult__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageUnsubscribePublishedFileResult__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageUnsubscribePublishedFileResult__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageUnsubscribePublishedFileResult__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnRemoteStorageUnsubscribePublishedFileResult_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageUnsubscribePublishedFileResult__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageUnsubscribePublishedFileResult__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageUnsubscribePublishedFileResult__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnRemoteStorageUnsubscribePublishedFileResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageUnsubscribePublishedFileResult__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageUnsubscribePublishedFileResult__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRemoteStorageUnsubscribePublishedFileResult_DelegateWrapper(const FMulticastScriptDelegate& OnRemoteStorageUnsubscribePublishedFileResult, FSIK_PublishedFileId PublishedFileId, ESIK_Result Result)
{
	struct _Script_SteamIntegrationKit_eventOnRemoteStorageUnsubscribePublishedFileResult_Parms
	{
		FSIK_PublishedFileId PublishedFileId;
		TEnumAsByte<ESIK_Result> Result;
	};
	_Script_SteamIntegrationKit_eventOnRemoteStorageUnsubscribePublishedFileResult_Parms Parms;
	Parms.PublishedFileId=PublishedFileId;
	Parms.Result=Result;
	OnRemoteStorageUnsubscribePublishedFileResult.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnRemoteStorageUnsubscribePublishedFileResult **************************

// ********** Begin Class USIK_RemoteStorageSubsystem **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_RemoteStorageSubsystem;
UClass* USIK_RemoteStorageSubsystem::GetPrivateStaticClass()
{
	using TClass = USIK_RemoteStorageSubsystem;
	if (!Z_Registration_Info_UClass_USIK_RemoteStorageSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_RemoteStorageSubsystem"),
			Z_Registration_Info_UClass_USIK_RemoteStorageSubsystem.InnerSingleton,
			StaticRegisterNativesUSIK_RemoteStorageSubsystem,
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
	return Z_Registration_Info_UClass_USIK_RemoteStorageSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_RemoteStorageSubsystem_NoRegister()
{
	return USIK_RemoteStorageSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_RemoteStorageSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Remote Storage" },
		{ "IncludePath", "Functions/RemoteStorage/SIK_RemoteStorageSubsystem.h" },
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_RemoteStorageSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRemoteStorageDownloadUGCResult_MetaData[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Remote Storage" },
		{ "Comment", "// Associated Functions: UGCDownload, UGCDownloadToLocation\n" },
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_RemoteStorageSubsystem.h" },
		{ "ToolTip", "Associated Functions: UGCDownload, UGCDownloadToLocation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRemoteStorageFileShareResult_MetaData[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Remote Storage" },
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_RemoteStorageSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRemoteStorageFileWriteAsyncComplete_MetaData[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Remote Storage" },
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_RemoteStorageSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRemoteStoragePublishedFileSubscribedComplete_MetaData[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Remote Storage" },
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_RemoteStorageSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRemoteStoragePublishedFileUnsubscribedComplete_MetaData[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Remote Storage" },
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_RemoteStorageSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRemoteStorageSubscribePublishedFileResult_MetaData[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Remote Storage" },
		{ "Comment", "//Called when the user has subscribed to a piece of UGC. Result from ISteamUGC::SubscribeItem.\n" },
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_RemoteStorageSubsystem.h" },
		{ "ToolTip", "Called when the user has subscribed to a piece of UGC. Result from ISteamUGC::SubscribeItem." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRemoteStorageUnsubscribePublishedFileResult_MetaData[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Remote Storage" },
		{ "Comment", "//Called when the user has unsubscribed from a piece of UGC. Result from ISteamUGC::UnsubscribeItem.\n" },
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_RemoteStorageSubsystem.h" },
		{ "ToolTip", "Called when the user has unsubscribed from a piece of UGC. Result from ISteamUGC::UnsubscribeItem." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRemoteStorageLocalFileChange_MetaData[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Remote Storage" },
		{ "Comment", "/*\n\x09*If a Steam app is flagged for supporting dynamic Steam Cloud sync, and a sync occurs, this callback will be posted to the app if any local files changed.\n\x09*\n\x09*Associated Functions: GetLocalFileChangeCount, GetLocalFileChange\n\x09*/" },
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_RemoteStorageSubsystem.h" },
		{ "ToolTip", "*If a Steam app is flagged for supporting dynamic Steam Cloud sync, and a sync occurs, this callback will be posted to the app if any local files changed.\n*\n*Associated Functions: GetLocalFileChangeCount, GetLocalFileChange" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_RemoteStorageSubsystem constinit property declarations **************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRemoteStorageDownloadUGCResult;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRemoteStorageFileShareResult;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRemoteStorageFileWriteAsyncComplete;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRemoteStoragePublishedFileSubscribedComplete;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRemoteStoragePublishedFileUnsubscribedComplete;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRemoteStorageSubscribePublishedFileResult;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRemoteStorageUnsubscribePublishedFileResult;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRemoteStorageLocalFileChange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USIK_RemoteStorageSubsystem constinit property declarations ****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_RemoteStorageSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_RemoteStorageSubsystem_Statics

// ********** Begin Class USIK_RemoteStorageSubsystem Property Definitions *************************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_RemoteStorageSubsystem_Statics::NewProp_OnRemoteStorageDownloadUGCResult = { "OnRemoteStorageDownloadUGCResult", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_RemoteStorageSubsystem, OnRemoteStorageDownloadUGCResult), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageDownloadUGCResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRemoteStorageDownloadUGCResult_MetaData), NewProp_OnRemoteStorageDownloadUGCResult_MetaData) }; // 1770891586
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_RemoteStorageSubsystem_Statics::NewProp_OnRemoteStorageFileShareResult = { "OnRemoteStorageFileShareResult", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_RemoteStorageSubsystem, OnRemoteStorageFileShareResult), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageFileShareResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRemoteStorageFileShareResult_MetaData), NewProp_OnRemoteStorageFileShareResult_MetaData) }; // 510555650
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_RemoteStorageSubsystem_Statics::NewProp_OnRemoteStorageFileWriteAsyncComplete = { "OnRemoteStorageFileWriteAsyncComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_RemoteStorageSubsystem, OnRemoteStorageFileWriteAsyncComplete), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageFileWriteAsyncComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRemoteStorageFileWriteAsyncComplete_MetaData), NewProp_OnRemoteStorageFileWriteAsyncComplete_MetaData) }; // 742413719
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_RemoteStorageSubsystem_Statics::NewProp_OnRemoteStoragePublishedFileSubscribedComplete = { "OnRemoteStoragePublishedFileSubscribedComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_RemoteStorageSubsystem, OnRemoteStoragePublishedFileSubscribedComplete), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStoragePublishedFileSubscribedComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRemoteStoragePublishedFileSubscribedComplete_MetaData), NewProp_OnRemoteStoragePublishedFileSubscribedComplete_MetaData) }; // 1786289989
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_RemoteStorageSubsystem_Statics::NewProp_OnRemoteStoragePublishedFileUnsubscribedComplete = { "OnRemoteStoragePublishedFileUnsubscribedComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_RemoteStorageSubsystem, OnRemoteStoragePublishedFileUnsubscribedComplete), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStoragePublishedFileUnsubscribedComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRemoteStoragePublishedFileUnsubscribedComplete_MetaData), NewProp_OnRemoteStoragePublishedFileUnsubscribedComplete_MetaData) }; // 2885465361
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_RemoteStorageSubsystem_Statics::NewProp_OnRemoteStorageSubscribePublishedFileResult = { "OnRemoteStorageSubscribePublishedFileResult", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_RemoteStorageSubsystem, OnRemoteStorageSubscribePublishedFileResult), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageSubscribePublishedFileResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRemoteStorageSubscribePublishedFileResult_MetaData), NewProp_OnRemoteStorageSubscribePublishedFileResult_MetaData) }; // 4253343829
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_RemoteStorageSubsystem_Statics::NewProp_OnRemoteStorageUnsubscribePublishedFileResult = { "OnRemoteStorageUnsubscribePublishedFileResult", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_RemoteStorageSubsystem, OnRemoteStorageUnsubscribePublishedFileResult), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageUnsubscribePublishedFileResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRemoteStorageUnsubscribePublishedFileResult_MetaData), NewProp_OnRemoteStorageUnsubscribePublishedFileResult_MetaData) }; // 3202458672
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_RemoteStorageSubsystem_Statics::NewProp_OnRemoteStorageLocalFileChange = { "OnRemoteStorageLocalFileChange", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_RemoteStorageSubsystem, OnRemoteStorageLocalFileChange), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageLocalFileChange__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRemoteStorageLocalFileChange_MetaData), NewProp_OnRemoteStorageLocalFileChange_MetaData) }; // 2452036267
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USIK_RemoteStorageSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_RemoteStorageSubsystem_Statics::NewProp_OnRemoteStorageDownloadUGCResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_RemoteStorageSubsystem_Statics::NewProp_OnRemoteStorageFileShareResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_RemoteStorageSubsystem_Statics::NewProp_OnRemoteStorageFileWriteAsyncComplete,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_RemoteStorageSubsystem_Statics::NewProp_OnRemoteStoragePublishedFileSubscribedComplete,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_RemoteStorageSubsystem_Statics::NewProp_OnRemoteStoragePublishedFileUnsubscribedComplete,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_RemoteStorageSubsystem_Statics::NewProp_OnRemoteStorageSubscribePublishedFileResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_RemoteStorageSubsystem_Statics::NewProp_OnRemoteStorageUnsubscribePublishedFileResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_RemoteStorageSubsystem_Statics::NewProp_OnRemoteStorageLocalFileChange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_RemoteStorageSubsystem_Statics::PropPointers) < 2048);
// ********** End Class USIK_RemoteStorageSubsystem Property Definitions ***************************
UObject* (*const Z_Construct_UClass_USIK_RemoteStorageSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_RemoteStorageSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_RemoteStorageSubsystem_Statics::ClassParams = {
	&USIK_RemoteStorageSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USIK_RemoteStorageSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USIK_RemoteStorageSubsystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_RemoteStorageSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_RemoteStorageSubsystem_Statics::Class_MetaDataParams)
};
void USIK_RemoteStorageSubsystem::StaticRegisterNativesUSIK_RemoteStorageSubsystem()
{
}
UClass* Z_Construct_UClass_USIK_RemoteStorageSubsystem()
{
	if (!Z_Registration_Info_UClass_USIK_RemoteStorageSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_RemoteStorageSubsystem.OuterSingleton, Z_Construct_UClass_USIK_RemoteStorageSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_RemoteStorageSubsystem.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_RemoteStorageSubsystem);
// ********** End Class USIK_RemoteStorageSubsystem ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_RemoteStorage_SIK_RemoteStorageSubsystem_h__Script_SteamIntegrationKit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_RemoteStorageSubsystem, USIK_RemoteStorageSubsystem::StaticClass, TEXT("USIK_RemoteStorageSubsystem"), &Z_Registration_Info_UClass_USIK_RemoteStorageSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_RemoteStorageSubsystem), 2887566950U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_RemoteStorage_SIK_RemoteStorageSubsystem_h__Script_SteamIntegrationKit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_RemoteStorage_SIK_RemoteStorageSubsystem_h__Script_SteamIntegrationKit_1689761818{
	TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_RemoteStorage_SIK_RemoteStorageSubsystem_h__Script_SteamIntegrationKit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_RemoteStorage_SIK_RemoteStorageSubsystem_h__Script_SteamIntegrationKit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
