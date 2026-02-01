// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/RemoteStorage/SIK_UGCDownloadToLocation_AsyncFunction.h"
#include "SIK_SharedFile.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_UGCDownloadToLocation_AsyncFunction() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_UGCDownloadToLocation_AsyncFunction();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_UGCDownloadToLocation_AsyncFunction_NoRegister();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUGCDownloadToLocationComplete__DelegateSignature();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_SteamId();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_UGCHandle();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnUGCDownloadToLocationComplete **************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUGCDownloadToLocationComplete__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnUGCDownloadToLocationComplete_Parms
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
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_UGCDownloadToLocation_AsyncFunction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnUGCDownloadToLocationComplete constinit property declarations ******
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UGCHandle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Size;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDOwner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnUGCDownloadToLocationComplete constinit property declarations ********
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnUGCDownloadToLocationComplete Property Definitions *****************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUGCDownloadToLocationComplete__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnUGCDownloadToLocationComplete_Parms, Result), Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result, METADATA_PARAMS(0, nullptr) }; // 655382749
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUGCDownloadToLocationComplete__DelegateSignature_Statics::NewProp_UGCHandle = { "UGCHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnUGCDownloadToLocationComplete_Parms, UGCHandle), Z_Construct_UScriptStruct_FSIK_UGCHandle, METADATA_PARAMS(0, nullptr) }; // 3467694534
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUGCDownloadToLocationComplete__DelegateSignature_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnUGCDownloadToLocationComplete_Parms, AppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUGCDownloadToLocationComplete__DelegateSignature_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnUGCDownloadToLocationComplete_Parms, FileName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUGCDownloadToLocationComplete__DelegateSignature_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnUGCDownloadToLocationComplete_Parms, Size), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUGCDownloadToLocationComplete__DelegateSignature_Statics::NewProp_SteamIDOwner = { "SteamIDOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnUGCDownloadToLocationComplete_Parms, SteamIDOwner), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUGCDownloadToLocationComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUGCDownloadToLocationComplete__DelegateSignature_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUGCDownloadToLocationComplete__DelegateSignature_Statics::NewProp_UGCHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUGCDownloadToLocationComplete__DelegateSignature_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUGCDownloadToLocationComplete__DelegateSignature_Statics::NewProp_FileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUGCDownloadToLocationComplete__DelegateSignature_Statics::NewProp_Size,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUGCDownloadToLocationComplete__DelegateSignature_Statics::NewProp_SteamIDOwner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUGCDownloadToLocationComplete__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnUGCDownloadToLocationComplete Property Definitions *******************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUGCDownloadToLocationComplete__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnUGCDownloadToLocationComplete__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUGCDownloadToLocationComplete__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUGCDownloadToLocationComplete__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUGCDownloadToLocationComplete__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnUGCDownloadToLocationComplete_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUGCDownloadToLocationComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUGCDownloadToLocationComplete__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUGCDownloadToLocationComplete__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnUGCDownloadToLocationComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUGCDownloadToLocationComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUGCDownloadToLocationComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnUGCDownloadToLocationComplete_DelegateWrapper(const FMulticastScriptDelegate& OnUGCDownloadToLocationComplete, ESIK_Result Result, FSIK_UGCHandle UGCHandle, int32 AppID, const FString& FileName, int32 Size, FSIK_SteamId SteamIDOwner)
{
	struct _Script_SteamIntegrationKit_eventOnUGCDownloadToLocationComplete_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
		FSIK_UGCHandle UGCHandle;
		int32 AppID;
		FString FileName;
		int32 Size;
		FSIK_SteamId SteamIDOwner;
	};
	_Script_SteamIntegrationKit_eventOnUGCDownloadToLocationComplete_Parms Parms;
	Parms.Result=Result;
	Parms.UGCHandle=UGCHandle;
	Parms.AppID=AppID;
	Parms.FileName=FileName;
	Parms.Size=Size;
	Parms.SteamIDOwner=SteamIDOwner;
	OnUGCDownloadToLocationComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnUGCDownloadToLocationComplete ****************************************

// ********** Begin Class USIK_UGCDownloadToLocation_AsyncFunction Function UGCDownloadToLocation **
struct Z_Construct_UFunction_USIK_UGCDownloadToLocation_AsyncFunction_UGCDownloadToLocation_Statics
{
	struct SIK_UGCDownloadToLocation_AsyncFunction_eventUGCDownloadToLocation_Parms
	{
		FSIK_UGCHandle UGCHandle;
		FString Location;
		int32 Priority;
		USIK_UGCDownloadToLocation_AsyncFunction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit || SDK Functions || Remote Storage|| Async" },
		{ "Comment", "/*\n\x09""Downloads a UGC file to a specified location. A file is downloaded by UGC handle.\n\x09If a valid path is passed the file is saved to that location rather than to the cached UGC folder.\n\x09\n\x09Returns a SteamAPICall_t handle that is watched for the callback RemoteStorageDownloadUGCResult_t.\n\x09*/" },
		{ "DisplayName", "UGC Download To Location" },
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_UGCDownloadToLocation_AsyncFunction.h" },
		{ "ToolTip", "Downloads a UGC file to a specified location. A file is downloaded by UGC handle.\nIf a valid path is passed the file is saved to that location rather than to the cached UGC folder.\n\nReturns a SteamAPICall_t handle that is watched for the callback RemoteStorageDownloadUGCResult_t." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function UGCDownloadToLocation constinit property declarations *****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_UGCHandle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Location;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function UGCDownloadToLocation constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function UGCDownloadToLocation Property Definitions ****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_UGCDownloadToLocation_AsyncFunction_UGCDownloadToLocation_Statics::NewProp_UGCHandle = { "UGCHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCDownloadToLocation_AsyncFunction_eventUGCDownloadToLocation_Parms, UGCHandle), Z_Construct_UScriptStruct_FSIK_UGCHandle, METADATA_PARAMS(0, nullptr) }; // 3467694534
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UGCDownloadToLocation_AsyncFunction_UGCDownloadToLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCDownloadToLocation_AsyncFunction_eventUGCDownloadToLocation_Parms, Location), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UGCDownloadToLocation_AsyncFunction_UGCDownloadToLocation_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCDownloadToLocation_AsyncFunction_eventUGCDownloadToLocation_Parms, Priority), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_UGCDownloadToLocation_AsyncFunction_UGCDownloadToLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCDownloadToLocation_AsyncFunction_eventUGCDownloadToLocation_Parms, ReturnValue), Z_Construct_UClass_USIK_UGCDownloadToLocation_AsyncFunction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UGCDownloadToLocation_AsyncFunction_UGCDownloadToLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCDownloadToLocation_AsyncFunction_UGCDownloadToLocation_Statics::NewProp_UGCHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCDownloadToLocation_AsyncFunction_UGCDownloadToLocation_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCDownloadToLocation_AsyncFunction_UGCDownloadToLocation_Statics::NewProp_Priority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCDownloadToLocation_AsyncFunction_UGCDownloadToLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCDownloadToLocation_AsyncFunction_UGCDownloadToLocation_Statics::PropPointers) < 2048);
// ********** End Function UGCDownloadToLocation Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UGCDownloadToLocation_AsyncFunction_UGCDownloadToLocation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_UGCDownloadToLocation_AsyncFunction, nullptr, "UGCDownloadToLocation", 	Z_Construct_UFunction_USIK_UGCDownloadToLocation_AsyncFunction_UGCDownloadToLocation_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCDownloadToLocation_AsyncFunction_UGCDownloadToLocation_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_UGCDownloadToLocation_AsyncFunction_UGCDownloadToLocation_Statics::SIK_UGCDownloadToLocation_AsyncFunction_eventUGCDownloadToLocation_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCDownloadToLocation_AsyncFunction_UGCDownloadToLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UGCDownloadToLocation_AsyncFunction_UGCDownloadToLocation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_UGCDownloadToLocation_AsyncFunction_UGCDownloadToLocation_Statics::SIK_UGCDownloadToLocation_AsyncFunction_eventUGCDownloadToLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UGCDownloadToLocation_AsyncFunction_UGCDownloadToLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UGCDownloadToLocation_AsyncFunction_UGCDownloadToLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UGCDownloadToLocation_AsyncFunction::execUGCDownloadToLocation)
{
	P_GET_STRUCT(FSIK_UGCHandle,Z_Param_UGCHandle);
	P_GET_PROPERTY(FStrProperty,Z_Param_Location);
	P_GET_PROPERTY(FIntProperty,Z_Param_Priority);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_UGCDownloadToLocation_AsyncFunction**)Z_Param__Result=USIK_UGCDownloadToLocation_AsyncFunction::UGCDownloadToLocation(Z_Param_UGCHandle,Z_Param_Location,Z_Param_Priority);
	P_NATIVE_END;
}
// ********** End Class USIK_UGCDownloadToLocation_AsyncFunction Function UGCDownloadToLocation ****

// ********** Begin Class USIK_UGCDownloadToLocation_AsyncFunction *********************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_UGCDownloadToLocation_AsyncFunction;
UClass* USIK_UGCDownloadToLocation_AsyncFunction::GetPrivateStaticClass()
{
	using TClass = USIK_UGCDownloadToLocation_AsyncFunction;
	if (!Z_Registration_Info_UClass_USIK_UGCDownloadToLocation_AsyncFunction.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_UGCDownloadToLocation_AsyncFunction"),
			Z_Registration_Info_UClass_USIK_UGCDownloadToLocation_AsyncFunction.InnerSingleton,
			StaticRegisterNativesUSIK_UGCDownloadToLocation_AsyncFunction,
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
	return Z_Registration_Info_UClass_USIK_UGCDownloadToLocation_AsyncFunction.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_UGCDownloadToLocation_AsyncFunction_NoRegister()
{
	return USIK_UGCDownloadToLocation_AsyncFunction::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_UGCDownloadToLocation_AsyncFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Functions/RemoteStorage/SIK_UGCDownloadToLocation_AsyncFunction.h" },
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_UGCDownloadToLocation_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_UGCDownloadToLocation_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_UGCDownloadToLocation_AsyncFunction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_UGCDownloadToLocation_AsyncFunction constinit property declarations *
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USIK_UGCDownloadToLocation_AsyncFunction constinit property declarations ***
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("UGCDownloadToLocation"), .Pointer = &USIK_UGCDownloadToLocation_AsyncFunction::execUGCDownloadToLocation },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_UGCDownloadToLocation_AsyncFunction_UGCDownloadToLocation, "UGCDownloadToLocation" }, // 3626052149
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_UGCDownloadToLocation_AsyncFunction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_UGCDownloadToLocation_AsyncFunction_Statics

// ********** Begin Class USIK_UGCDownloadToLocation_AsyncFunction Property Definitions ************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_UGCDownloadToLocation_AsyncFunction_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_UGCDownloadToLocation_AsyncFunction, OnSuccess), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUGCDownloadToLocationComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 2551014123
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_UGCDownloadToLocation_AsyncFunction_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_UGCDownloadToLocation_AsyncFunction, OnFailure), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnUGCDownloadToLocationComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 2551014123
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USIK_UGCDownloadToLocation_AsyncFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_UGCDownloadToLocation_AsyncFunction_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_UGCDownloadToLocation_AsyncFunction_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_UGCDownloadToLocation_AsyncFunction_Statics::PropPointers) < 2048);
// ********** End Class USIK_UGCDownloadToLocation_AsyncFunction Property Definitions **************
UObject* (*const Z_Construct_UClass_USIK_UGCDownloadToLocation_AsyncFunction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_UGCDownloadToLocation_AsyncFunction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_UGCDownloadToLocation_AsyncFunction_Statics::ClassParams = {
	&USIK_UGCDownloadToLocation_AsyncFunction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USIK_UGCDownloadToLocation_AsyncFunction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USIK_UGCDownloadToLocation_AsyncFunction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_UGCDownloadToLocation_AsyncFunction_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_UGCDownloadToLocation_AsyncFunction_Statics::Class_MetaDataParams)
};
void USIK_UGCDownloadToLocation_AsyncFunction::StaticRegisterNativesUSIK_UGCDownloadToLocation_AsyncFunction()
{
	UClass* Class = USIK_UGCDownloadToLocation_AsyncFunction::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_UGCDownloadToLocation_AsyncFunction_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_UGCDownloadToLocation_AsyncFunction()
{
	if (!Z_Registration_Info_UClass_USIK_UGCDownloadToLocation_AsyncFunction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_UGCDownloadToLocation_AsyncFunction.OuterSingleton, Z_Construct_UClass_USIK_UGCDownloadToLocation_AsyncFunction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_UGCDownloadToLocation_AsyncFunction.OuterSingleton;
}
USIK_UGCDownloadToLocation_AsyncFunction::USIK_UGCDownloadToLocation_AsyncFunction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_UGCDownloadToLocation_AsyncFunction);
USIK_UGCDownloadToLocation_AsyncFunction::~USIK_UGCDownloadToLocation_AsyncFunction() {}
// ********** End Class USIK_UGCDownloadToLocation_AsyncFunction ***********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_RemoteStorage_SIK_UGCDownloadToLocation_AsyncFunction_h__Script_SteamIntegrationKit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_UGCDownloadToLocation_AsyncFunction, USIK_UGCDownloadToLocation_AsyncFunction::StaticClass, TEXT("USIK_UGCDownloadToLocation_AsyncFunction"), &Z_Registration_Info_UClass_USIK_UGCDownloadToLocation_AsyncFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_UGCDownloadToLocation_AsyncFunction), 1824298577U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_RemoteStorage_SIK_UGCDownloadToLocation_AsyncFunction_h__Script_SteamIntegrationKit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_RemoteStorage_SIK_UGCDownloadToLocation_AsyncFunction_h__Script_SteamIntegrationKit_3551263150{
	TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_RemoteStorage_SIK_UGCDownloadToLocation_AsyncFunction_h__Script_SteamIntegrationKit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_RemoteStorage_SIK_UGCDownloadToLocation_AsyncFunction_h__Script_SteamIntegrationKit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
