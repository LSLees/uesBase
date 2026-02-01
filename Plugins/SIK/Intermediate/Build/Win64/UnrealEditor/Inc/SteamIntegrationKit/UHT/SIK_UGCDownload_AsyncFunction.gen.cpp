// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/RemoteStorage/SIK_UGCDownload_AsyncFunction.h"
#include "SIK_SharedFile.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_UGCDownload_AsyncFunction() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_UGCDownload_AsyncFunction();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_UGCDownload_AsyncFunction_NoRegister();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUGCDownloadComplete__DelegateSignature();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_SteamId();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_UGCHandle();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnUGCDownloadComplete ************************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUGCDownloadComplete__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnUGCDownloadComplete_Parms
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
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_UGCDownload_AsyncFunction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnUGCDownloadComplete constinit property declarations ****************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UGCHandle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Size;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDOwner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnUGCDownloadComplete constinit property declarations ******************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnUGCDownloadComplete Property Definitions ***************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUGCDownloadComplete__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnUGCDownloadComplete_Parms, Result), Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result, METADATA_PARAMS(0, nullptr) }; // 655382749
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUGCDownloadComplete__DelegateSignature_Statics::NewProp_UGCHandle = { "UGCHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnUGCDownloadComplete_Parms, UGCHandle), Z_Construct_UScriptStruct_FSIK_UGCHandle, METADATA_PARAMS(0, nullptr) }; // 3467694534
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUGCDownloadComplete__DelegateSignature_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnUGCDownloadComplete_Parms, AppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUGCDownloadComplete__DelegateSignature_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnUGCDownloadComplete_Parms, FileName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUGCDownloadComplete__DelegateSignature_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnUGCDownloadComplete_Parms, Size), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUGCDownloadComplete__DelegateSignature_Statics::NewProp_SteamIDOwner = { "SteamIDOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnUGCDownloadComplete_Parms, SteamIDOwner), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUGCDownloadComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUGCDownloadComplete__DelegateSignature_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUGCDownloadComplete__DelegateSignature_Statics::NewProp_UGCHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUGCDownloadComplete__DelegateSignature_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUGCDownloadComplete__DelegateSignature_Statics::NewProp_FileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUGCDownloadComplete__DelegateSignature_Statics::NewProp_Size,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUGCDownloadComplete__DelegateSignature_Statics::NewProp_SteamIDOwner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUGCDownloadComplete__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnUGCDownloadComplete Property Definitions *****************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUGCDownloadComplete__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnUGCDownloadComplete__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUGCDownloadComplete__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUGCDownloadComplete__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUGCDownloadComplete__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnUGCDownloadComplete_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUGCDownloadComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUGCDownloadComplete__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUGCDownloadComplete__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnUGCDownloadComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUGCDownloadComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUGCDownloadComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnUGCDownloadComplete_DelegateWrapper(const FMulticastScriptDelegate& OnUGCDownloadComplete, ESIK_Result Result, FSIK_UGCHandle UGCHandle, int32 AppID, const FString& FileName, int32 Size, FSIK_SteamId SteamIDOwner)
{
	struct _Script_SteamIntegrationKit_eventOnUGCDownloadComplete_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
		FSIK_UGCHandle UGCHandle;
		int32 AppID;
		FString FileName;
		int32 Size;
		FSIK_SteamId SteamIDOwner;
	};
	_Script_SteamIntegrationKit_eventOnUGCDownloadComplete_Parms Parms;
	Parms.Result=Result;
	Parms.UGCHandle=UGCHandle;
	Parms.AppID=AppID;
	Parms.FileName=FileName;
	Parms.Size=Size;
	Parms.SteamIDOwner=SteamIDOwner;
	OnUGCDownloadComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnUGCDownloadComplete **************************************************

// ********** Begin Class USIK_UGCDownload_AsyncFunction Function UGCDownload **********************
struct Z_Construct_UFunction_USIK_UGCDownload_AsyncFunction_UGCDownload_Statics
{
	struct SIK_UGCDownload_AsyncFunction_eventUGCDownload_Parms
	{
		FSIK_UGCHandle UGCHandle;
		int32 Priority;
		USIK_UGCDownload_AsyncFunction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit || SDK Functions || Remote Storage|| Async" },
		{ "Comment", "/*\n\x09""Downloads a UGC file. A file is downloaded by UGC handle.\n\x09Priority and cubUncompressedFileSize are available on the file page of the UGC item and are passed in so \n\x09Steam can prioritize downloads and display progress to the user. Be sure to pass the uncompress file size \n\x09""even if it's the same as the compressed file size.\n\x09\n\x09Returns a SteamAPICall_t handle that is watched for the callback RemoteStorageDownloadUGCResult_t.\n\x09*/" },
		{ "DisplayName", "UGC Download" },
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_UGCDownload_AsyncFunction.h" },
		{ "ToolTip", "Downloads a UGC file. A file is downloaded by UGC handle.\nPriority and cubUncompressedFileSize are available on the file page of the UGC item and are passed in so\nSteam can prioritize downloads and display progress to the user. Be sure to pass the uncompress file size\neven if it's the same as the compressed file size.\n\nReturns a SteamAPICall_t handle that is watched for the callback RemoteStorageDownloadUGCResult_t." },
	};
#endif // WITH_METADATA

// ********** Begin Function UGCDownload constinit property declarations ***************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_UGCHandle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function UGCDownload constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function UGCDownload Property Definitions **************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_UGCDownload_AsyncFunction_UGCDownload_Statics::NewProp_UGCHandle = { "UGCHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCDownload_AsyncFunction_eventUGCDownload_Parms, UGCHandle), Z_Construct_UScriptStruct_FSIK_UGCHandle, METADATA_PARAMS(0, nullptr) }; // 3467694534
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UGCDownload_AsyncFunction_UGCDownload_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCDownload_AsyncFunction_eventUGCDownload_Parms, Priority), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_UGCDownload_AsyncFunction_UGCDownload_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCDownload_AsyncFunction_eventUGCDownload_Parms, ReturnValue), Z_Construct_UClass_USIK_UGCDownload_AsyncFunction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UGCDownload_AsyncFunction_UGCDownload_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCDownload_AsyncFunction_UGCDownload_Statics::NewProp_UGCHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCDownload_AsyncFunction_UGCDownload_Statics::NewProp_Priority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCDownload_AsyncFunction_UGCDownload_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCDownload_AsyncFunction_UGCDownload_Statics::PropPointers) < 2048);
// ********** End Function UGCDownload Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UGCDownload_AsyncFunction_UGCDownload_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_UGCDownload_AsyncFunction, nullptr, "UGCDownload", 	Z_Construct_UFunction_USIK_UGCDownload_AsyncFunction_UGCDownload_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCDownload_AsyncFunction_UGCDownload_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_UGCDownload_AsyncFunction_UGCDownload_Statics::SIK_UGCDownload_AsyncFunction_eventUGCDownload_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCDownload_AsyncFunction_UGCDownload_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UGCDownload_AsyncFunction_UGCDownload_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_UGCDownload_AsyncFunction_UGCDownload_Statics::SIK_UGCDownload_AsyncFunction_eventUGCDownload_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UGCDownload_AsyncFunction_UGCDownload()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UGCDownload_AsyncFunction_UGCDownload_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UGCDownload_AsyncFunction::execUGCDownload)
{
	P_GET_STRUCT(FSIK_UGCHandle,Z_Param_UGCHandle);
	P_GET_PROPERTY(FIntProperty,Z_Param_Priority);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_UGCDownload_AsyncFunction**)Z_Param__Result=USIK_UGCDownload_AsyncFunction::UGCDownload(Z_Param_UGCHandle,Z_Param_Priority);
	P_NATIVE_END;
}
// ********** End Class USIK_UGCDownload_AsyncFunction Function UGCDownload ************************

// ********** Begin Class USIK_UGCDownload_AsyncFunction *******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_UGCDownload_AsyncFunction;
UClass* USIK_UGCDownload_AsyncFunction::GetPrivateStaticClass()
{
	using TClass = USIK_UGCDownload_AsyncFunction;
	if (!Z_Registration_Info_UClass_USIK_UGCDownload_AsyncFunction.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_UGCDownload_AsyncFunction"),
			Z_Registration_Info_UClass_USIK_UGCDownload_AsyncFunction.InnerSingleton,
			StaticRegisterNativesUSIK_UGCDownload_AsyncFunction,
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
	return Z_Registration_Info_UClass_USIK_UGCDownload_AsyncFunction.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_UGCDownload_AsyncFunction_NoRegister()
{
	return USIK_UGCDownload_AsyncFunction::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_UGCDownload_AsyncFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Functions/RemoteStorage/SIK_UGCDownload_AsyncFunction.h" },
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_UGCDownload_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_UGCDownload_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_UGCDownload_AsyncFunction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_UGCDownload_AsyncFunction constinit property declarations ***********
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USIK_UGCDownload_AsyncFunction constinit property declarations *************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("UGCDownload"), .Pointer = &USIK_UGCDownload_AsyncFunction::execUGCDownload },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_UGCDownload_AsyncFunction_UGCDownload, "UGCDownload" }, // 2345423468
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_UGCDownload_AsyncFunction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_UGCDownload_AsyncFunction_Statics

// ********** Begin Class USIK_UGCDownload_AsyncFunction Property Definitions **********************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_UGCDownload_AsyncFunction_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_UGCDownload_AsyncFunction, OnSuccess), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUGCDownloadComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 2114848760
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_UGCDownload_AsyncFunction_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_UGCDownload_AsyncFunction, OnFailure), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUGCDownloadComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 2114848760
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USIK_UGCDownload_AsyncFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_UGCDownload_AsyncFunction_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_UGCDownload_AsyncFunction_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_UGCDownload_AsyncFunction_Statics::PropPointers) < 2048);
// ********** End Class USIK_UGCDownload_AsyncFunction Property Definitions ************************
UObject* (*const Z_Construct_UClass_USIK_UGCDownload_AsyncFunction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_UGCDownload_AsyncFunction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_UGCDownload_AsyncFunction_Statics::ClassParams = {
	&USIK_UGCDownload_AsyncFunction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USIK_UGCDownload_AsyncFunction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USIK_UGCDownload_AsyncFunction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_UGCDownload_AsyncFunction_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_UGCDownload_AsyncFunction_Statics::Class_MetaDataParams)
};
void USIK_UGCDownload_AsyncFunction::StaticRegisterNativesUSIK_UGCDownload_AsyncFunction()
{
	UClass* Class = USIK_UGCDownload_AsyncFunction::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_UGCDownload_AsyncFunction_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_UGCDownload_AsyncFunction()
{
	if (!Z_Registration_Info_UClass_USIK_UGCDownload_AsyncFunction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_UGCDownload_AsyncFunction.OuterSingleton, Z_Construct_UClass_USIK_UGCDownload_AsyncFunction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_UGCDownload_AsyncFunction.OuterSingleton;
}
USIK_UGCDownload_AsyncFunction::USIK_UGCDownload_AsyncFunction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_UGCDownload_AsyncFunction);
USIK_UGCDownload_AsyncFunction::~USIK_UGCDownload_AsyncFunction() {}
// ********** End Class USIK_UGCDownload_AsyncFunction *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_RemoteStorage_SIK_UGCDownload_AsyncFunction_h__Script_SteamIntegrationKit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_UGCDownload_AsyncFunction, USIK_UGCDownload_AsyncFunction::StaticClass, TEXT("USIK_UGCDownload_AsyncFunction"), &Z_Registration_Info_UClass_USIK_UGCDownload_AsyncFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_UGCDownload_AsyncFunction), 1158274004U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_RemoteStorage_SIK_UGCDownload_AsyncFunction_h__Script_SteamIntegrationKit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_RemoteStorage_SIK_UGCDownload_AsyncFunction_h__Script_SteamIntegrationKit_1608281034{
	TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_RemoteStorage_SIK_UGCDownload_AsyncFunction_h__Script_SteamIntegrationKit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_RemoteStorage_SIK_UGCDownload_AsyncFunction_h__Script_SteamIntegrationKit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
