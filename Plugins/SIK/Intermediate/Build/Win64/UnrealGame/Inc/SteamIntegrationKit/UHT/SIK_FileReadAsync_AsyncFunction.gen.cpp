// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/RemoteStorage/SIK_FileReadAsync_AsyncFunction.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_FileReadAsync_AsyncFunction() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_FileReadAsync_AsyncFunction();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_FileReadAsync_AsyncFunction_NoRegister();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageFileReadAsyncComplete__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnRemoteStorageFileReadAsyncComplete *********************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageFileReadAsyncComplete__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnRemoteStorageFileReadAsyncComplete_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
		int32 nOffset;
		int32 nBytesRead;
		TArray<uint8> Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_FileReadAsync_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnRemoteStorageFileReadAsyncComplete constinit property declarations *
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FIntPropertyParams NewProp_nOffset;
	static const UECodeGen_Private::FIntPropertyParams NewProp_nBytesRead;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnRemoteStorageFileReadAsyncComplete constinit property declarations ***
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnRemoteStorageFileReadAsyncComplete Property Definitions ************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageFileReadAsyncComplete__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnRemoteStorageFileReadAsyncComplete_Parms, Result), Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 655382749
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageFileReadAsyncComplete__DelegateSignature_Statics::NewProp_nOffset = { "nOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnRemoteStorageFileReadAsyncComplete_Parms, nOffset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageFileReadAsyncComplete__DelegateSignature_Statics::NewProp_nBytesRead = { "nBytesRead", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnRemoteStorageFileReadAsyncComplete_Parms, nBytesRead), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageFileReadAsyncComplete__DelegateSignature_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageFileReadAsyncComplete__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnRemoteStorageFileReadAsyncComplete_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageFileReadAsyncComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageFileReadAsyncComplete__DelegateSignature_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageFileReadAsyncComplete__DelegateSignature_Statics::NewProp_nOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageFileReadAsyncComplete__DelegateSignature_Statics::NewProp_nBytesRead,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageFileReadAsyncComplete__DelegateSignature_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageFileReadAsyncComplete__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageFileReadAsyncComplete__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnRemoteStorageFileReadAsyncComplete Property Definitions **************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageFileReadAsyncComplete__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnRemoteStorageFileReadAsyncComplete__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageFileReadAsyncComplete__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageFileReadAsyncComplete__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageFileReadAsyncComplete__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnRemoteStorageFileReadAsyncComplete_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageFileReadAsyncComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageFileReadAsyncComplete__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageFileReadAsyncComplete__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnRemoteStorageFileReadAsyncComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageFileReadAsyncComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageFileReadAsyncComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRemoteStorageFileReadAsyncComplete_DelegateWrapper(const FMulticastScriptDelegate& OnRemoteStorageFileReadAsyncComplete, TEnumAsByte<ESIK_Result> const& Result, int32 nOffset, int32 nBytesRead, TArray<uint8> const& Data)
{
	struct _Script_SteamIntegrationKit_eventOnRemoteStorageFileReadAsyncComplete_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
		int32 nOffset;
		int32 nBytesRead;
		TArray<uint8> Data;
	};
	_Script_SteamIntegrationKit_eventOnRemoteStorageFileReadAsyncComplete_Parms Parms;
	Parms.Result=Result;
	Parms.nOffset=nOffset;
	Parms.nBytesRead=nBytesRead;
	Parms.Data=Data;
	OnRemoteStorageFileReadAsyncComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnRemoteStorageFileReadAsyncComplete ***********************************

// ********** Begin Class USIK_FileReadAsync_AsyncFunction Function FileReadAsync ******************
struct Z_Construct_UFunction_USIK_FileReadAsync_AsyncFunction_FileReadAsync_Statics
{
	struct SIK_FileReadAsync_AsyncFunction_eventFileReadAsync_Parms
	{
		FString FileName;
		int32 nOffset;
		int32 nBytesToRead;
		USIK_FileReadAsync_AsyncFunction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit || SDK Functions || Remote Storage|| Async" },
		{ "Comment", "/*\n\x09Starts an asynchronous read from a file.\n\x09The offset and amount to read should be valid for the size of the file, as indicated by GetFileSize or GetFileTimestamp.\n\x09\n\x09Returns k_uAPICallInvalid under the following conditions:\n\x09*You tried to read from invalid path or filename. Because Steam Cloud is cross platform the files need to have valid names on all supported OSes and file systems. See Microsoft's documentation on Naming Files, Paths, and Namespaces.\n\x09*The file doesn't exist.\n\x09*cubDataToRead is <= 0 bytes. You need to be able to read something!\n\x09*The combination of pvData and cubDataToRead would read past the end of the file.\n\x09*You have an async read in progress on this file already.\n\x09\n\x09Upon completion of the read request you will receive the call result, if the value of m_eResult within the call result is k_EResultOK you can then call FileReadAsyncComplete to read the requested data into your buffer\n\x09*/" },
		{ "DisplayName", "File Read Async" },
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_FileReadAsync_AsyncFunction.h" },
		{ "ToolTip", "Starts an asynchronous read from a file.\nThe offset and amount to read should be valid for the size of the file, as indicated by GetFileSize or GetFileTimestamp.\n\nReturns k_uAPICallInvalid under the following conditions:\n*You tried to read from invalid path or filename. Because Steam Cloud is cross platform the files need to have valid names on all supported OSes and file systems. See Microsoft's documentation on Naming Files, Paths, and Namespaces.\n*The file doesn't exist.\n*cubDataToRead is <= 0 bytes. You need to be able to read something!\n*The combination of pvData and cubDataToRead would read past the end of the file.\n*You have an async read in progress on this file already.\n\nUpon completion of the read request you will receive the call result, if the value of m_eResult within the call result is k_EResultOK you can then call FileReadAsyncComplete to read the requested data into your buffer" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function FileReadAsync constinit property declarations *************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_nOffset;
	static const UECodeGen_Private::FIntPropertyParams NewProp_nBytesToRead;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FileReadAsync constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FileReadAsync Property Definitions ************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_FileReadAsync_AsyncFunction_FileReadAsync_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FileReadAsync_AsyncFunction_eventFileReadAsync_Parms, FileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileName_MetaData), NewProp_FileName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_FileReadAsync_AsyncFunction_FileReadAsync_Statics::NewProp_nOffset = { "nOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FileReadAsync_AsyncFunction_eventFileReadAsync_Parms, nOffset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_FileReadAsync_AsyncFunction_FileReadAsync_Statics::NewProp_nBytesToRead = { "nBytesToRead", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FileReadAsync_AsyncFunction_eventFileReadAsync_Parms, nBytesToRead), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_FileReadAsync_AsyncFunction_FileReadAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FileReadAsync_AsyncFunction_eventFileReadAsync_Parms, ReturnValue), Z_Construct_UClass_USIK_FileReadAsync_AsyncFunction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_FileReadAsync_AsyncFunction_FileReadAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FileReadAsync_AsyncFunction_FileReadAsync_Statics::NewProp_FileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FileReadAsync_AsyncFunction_FileReadAsync_Statics::NewProp_nOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FileReadAsync_AsyncFunction_FileReadAsync_Statics::NewProp_nBytesToRead,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FileReadAsync_AsyncFunction_FileReadAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FileReadAsync_AsyncFunction_FileReadAsync_Statics::PropPointers) < 2048);
// ********** End Function FileReadAsync Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_FileReadAsync_AsyncFunction_FileReadAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_FileReadAsync_AsyncFunction, nullptr, "FileReadAsync", 	Z_Construct_UFunction_USIK_FileReadAsync_AsyncFunction_FileReadAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FileReadAsync_AsyncFunction_FileReadAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_FileReadAsync_AsyncFunction_FileReadAsync_Statics::SIK_FileReadAsync_AsyncFunction_eventFileReadAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FileReadAsync_AsyncFunction_FileReadAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_FileReadAsync_AsyncFunction_FileReadAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_FileReadAsync_AsyncFunction_FileReadAsync_Statics::SIK_FileReadAsync_AsyncFunction_eventFileReadAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_FileReadAsync_AsyncFunction_FileReadAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_FileReadAsync_AsyncFunction_FileReadAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_FileReadAsync_AsyncFunction::execFileReadAsync)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
	P_GET_PROPERTY(FIntProperty,Z_Param_nOffset);
	P_GET_PROPERTY(FIntProperty,Z_Param_nBytesToRead);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_FileReadAsync_AsyncFunction**)Z_Param__Result=USIK_FileReadAsync_AsyncFunction::FileReadAsync(Z_Param_FileName,Z_Param_nOffset,Z_Param_nBytesToRead);
	P_NATIVE_END;
}
// ********** End Class USIK_FileReadAsync_AsyncFunction Function FileReadAsync ********************

// ********** Begin Class USIK_FileReadAsync_AsyncFunction *****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_FileReadAsync_AsyncFunction;
UClass* USIK_FileReadAsync_AsyncFunction::GetPrivateStaticClass()
{
	using TClass = USIK_FileReadAsync_AsyncFunction;
	if (!Z_Registration_Info_UClass_USIK_FileReadAsync_AsyncFunction.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_FileReadAsync_AsyncFunction"),
			Z_Registration_Info_UClass_USIK_FileReadAsync_AsyncFunction.InnerSingleton,
			StaticRegisterNativesUSIK_FileReadAsync_AsyncFunction,
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
	return Z_Registration_Info_UClass_USIK_FileReadAsync_AsyncFunction.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_FileReadAsync_AsyncFunction_NoRegister()
{
	return USIK_FileReadAsync_AsyncFunction::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_FileReadAsync_AsyncFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Functions/RemoteStorage/SIK_FileReadAsync_AsyncFunction.h" },
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_FileReadAsync_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_FileReadAsync_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_FileReadAsync_AsyncFunction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_FileReadAsync_AsyncFunction constinit property declarations *********
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USIK_FileReadAsync_AsyncFunction constinit property declarations ***********
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("FileReadAsync"), .Pointer = &USIK_FileReadAsync_AsyncFunction::execFileReadAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_FileReadAsync_AsyncFunction_FileReadAsync, "FileReadAsync" }, // 2803347368
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_FileReadAsync_AsyncFunction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_FileReadAsync_AsyncFunction_Statics

// ********** Begin Class USIK_FileReadAsync_AsyncFunction Property Definitions ********************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_FileReadAsync_AsyncFunction_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_FileReadAsync_AsyncFunction, OnSuccess), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageFileReadAsyncComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 2338786078
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_FileReadAsync_AsyncFunction_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_FileReadAsync_AsyncFunction, OnFailure), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageFileReadAsyncComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 2338786078
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USIK_FileReadAsync_AsyncFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_FileReadAsync_AsyncFunction_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_FileReadAsync_AsyncFunction_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_FileReadAsync_AsyncFunction_Statics::PropPointers) < 2048);
// ********** End Class USIK_FileReadAsync_AsyncFunction Property Definitions **********************
UObject* (*const Z_Construct_UClass_USIK_FileReadAsync_AsyncFunction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_FileReadAsync_AsyncFunction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_FileReadAsync_AsyncFunction_Statics::ClassParams = {
	&USIK_FileReadAsync_AsyncFunction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USIK_FileReadAsync_AsyncFunction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USIK_FileReadAsync_AsyncFunction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_FileReadAsync_AsyncFunction_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_FileReadAsync_AsyncFunction_Statics::Class_MetaDataParams)
};
void USIK_FileReadAsync_AsyncFunction::StaticRegisterNativesUSIK_FileReadAsync_AsyncFunction()
{
	UClass* Class = USIK_FileReadAsync_AsyncFunction::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_FileReadAsync_AsyncFunction_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_FileReadAsync_AsyncFunction()
{
	if (!Z_Registration_Info_UClass_USIK_FileReadAsync_AsyncFunction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_FileReadAsync_AsyncFunction.OuterSingleton, Z_Construct_UClass_USIK_FileReadAsync_AsyncFunction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_FileReadAsync_AsyncFunction.OuterSingleton;
}
USIK_FileReadAsync_AsyncFunction::USIK_FileReadAsync_AsyncFunction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_FileReadAsync_AsyncFunction);
USIK_FileReadAsync_AsyncFunction::~USIK_FileReadAsync_AsyncFunction() {}
// ********** End Class USIK_FileReadAsync_AsyncFunction *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_RemoteStorage_SIK_FileReadAsync_AsyncFunction_h__Script_SteamIntegrationKit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_FileReadAsync_AsyncFunction, USIK_FileReadAsync_AsyncFunction::StaticClass, TEXT("USIK_FileReadAsync_AsyncFunction"), &Z_Registration_Info_UClass_USIK_FileReadAsync_AsyncFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_FileReadAsync_AsyncFunction), 2638110952U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_RemoteStorage_SIK_FileReadAsync_AsyncFunction_h__Script_SteamIntegrationKit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_RemoteStorage_SIK_FileReadAsync_AsyncFunction_h__Script_SteamIntegrationKit_1328788754{
	TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_RemoteStorage_SIK_FileReadAsync_AsyncFunction_h__Script_SteamIntegrationKit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_RemoteStorage_SIK_FileReadAsync_AsyncFunction_h__Script_SteamIntegrationKit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
