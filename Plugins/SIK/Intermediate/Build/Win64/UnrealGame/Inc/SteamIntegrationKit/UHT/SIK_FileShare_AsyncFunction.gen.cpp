// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/RemoteStorage/SIK_FileShare_AsyncFunction.h"
#include "SIK_SharedFile.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_FileShare_AsyncFunction() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_FileShare_AsyncFunction();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_FileShare_AsyncFunction_NoRegister();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageFileShareComplete__DelegateSignature();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_UGCHandle();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnRemoteStorageFileShareComplete *************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageFileShareComplete__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnRemoteStorageFileShareComplete_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
		FString SharedFile;
		FSIK_UGCHandle UGCHandle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_FileShare_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SharedFile_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UGCHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnRemoteStorageFileShareComplete constinit property declarations *****
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SharedFile;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UGCHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnRemoteStorageFileShareComplete constinit property declarations *******
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnRemoteStorageFileShareComplete Property Definitions ****************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageFileShareComplete__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnRemoteStorageFileShareComplete_Parms, Result), Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 655382749
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageFileShareComplete__DelegateSignature_Statics::NewProp_SharedFile = { "SharedFile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnRemoteStorageFileShareComplete_Parms, SharedFile), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SharedFile_MetaData), NewProp_SharedFile_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageFileShareComplete__DelegateSignature_Statics::NewProp_UGCHandle = { "UGCHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnRemoteStorageFileShareComplete_Parms, UGCHandle), Z_Construct_UScriptStruct_FSIK_UGCHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UGCHandle_MetaData), NewProp_UGCHandle_MetaData) }; // 3467694534
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageFileShareComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageFileShareComplete__DelegateSignature_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageFileShareComplete__DelegateSignature_Statics::NewProp_SharedFile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageFileShareComplete__DelegateSignature_Statics::NewProp_UGCHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageFileShareComplete__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnRemoteStorageFileShareComplete Property Definitions ******************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageFileShareComplete__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnRemoteStorageFileShareComplete__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageFileShareComplete__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageFileShareComplete__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageFileShareComplete__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnRemoteStorageFileShareComplete_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageFileShareComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageFileShareComplete__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageFileShareComplete__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnRemoteStorageFileShareComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageFileShareComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageFileShareComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRemoteStorageFileShareComplete_DelegateWrapper(const FMulticastScriptDelegate& OnRemoteStorageFileShareComplete, TEnumAsByte<ESIK_Result> const& Result, const FString& SharedFile, FSIK_UGCHandle const& UGCHandle)
{
	struct _Script_SteamIntegrationKit_eventOnRemoteStorageFileShareComplete_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
		FString SharedFile;
		FSIK_UGCHandle UGCHandle;
	};
	_Script_SteamIntegrationKit_eventOnRemoteStorageFileShareComplete_Parms Parms;
	Parms.Result=Result;
	Parms.SharedFile=SharedFile;
	Parms.UGCHandle=UGCHandle;
	OnRemoteStorageFileShareComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnRemoteStorageFileShareComplete ***************************************

// ********** Begin Class USIK_FileShare_AsyncFunction Function FileShareAsync *********************
struct Z_Construct_UFunction_USIK_FileShare_AsyncFunction_FileShareAsync_Statics
{
	struct SIK_FileShare_AsyncFunction_eventFileShareAsync_Parms
	{
		FString FileName;
		USIK_FileShare_AsyncFunction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit || SDK Functions || Remote Storage" },
		{ "DisplayName", "File Share Async" },
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_FileShare_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function FileShareAsync constinit property declarations ************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FileShareAsync constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FileShareAsync Property Definitions ***********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_FileShare_AsyncFunction_FileShareAsync_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FileShare_AsyncFunction_eventFileShareAsync_Parms, FileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileName_MetaData), NewProp_FileName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_FileShare_AsyncFunction_FileShareAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FileShare_AsyncFunction_eventFileShareAsync_Parms, ReturnValue), Z_Construct_UClass_USIK_FileShare_AsyncFunction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_FileShare_AsyncFunction_FileShareAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FileShare_AsyncFunction_FileShareAsync_Statics::NewProp_FileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FileShare_AsyncFunction_FileShareAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FileShare_AsyncFunction_FileShareAsync_Statics::PropPointers) < 2048);
// ********** End Function FileShareAsync Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_FileShare_AsyncFunction_FileShareAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_FileShare_AsyncFunction, nullptr, "FileShareAsync", 	Z_Construct_UFunction_USIK_FileShare_AsyncFunction_FileShareAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FileShare_AsyncFunction_FileShareAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_FileShare_AsyncFunction_FileShareAsync_Statics::SIK_FileShare_AsyncFunction_eventFileShareAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FileShare_AsyncFunction_FileShareAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_FileShare_AsyncFunction_FileShareAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_FileShare_AsyncFunction_FileShareAsync_Statics::SIK_FileShare_AsyncFunction_eventFileShareAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_FileShare_AsyncFunction_FileShareAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_FileShare_AsyncFunction_FileShareAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_FileShare_AsyncFunction::execFileShareAsync)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_FileShare_AsyncFunction**)Z_Param__Result=USIK_FileShare_AsyncFunction::FileShareAsync(Z_Param_FileName);
	P_NATIVE_END;
}
// ********** End Class USIK_FileShare_AsyncFunction Function FileShareAsync ***********************

// ********** Begin Class USIK_FileShare_AsyncFunction *********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_FileShare_AsyncFunction;
UClass* USIK_FileShare_AsyncFunction::GetPrivateStaticClass()
{
	using TClass = USIK_FileShare_AsyncFunction;
	if (!Z_Registration_Info_UClass_USIK_FileShare_AsyncFunction.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_FileShare_AsyncFunction"),
			Z_Registration_Info_UClass_USIK_FileShare_AsyncFunction.InnerSingleton,
			StaticRegisterNativesUSIK_FileShare_AsyncFunction,
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
	return Z_Registration_Info_UClass_USIK_FileShare_AsyncFunction.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_FileShare_AsyncFunction_NoRegister()
{
	return USIK_FileShare_AsyncFunction::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_FileShare_AsyncFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Functions/RemoteStorage/SIK_FileShare_AsyncFunction.h" },
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_FileShare_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_FileShare_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_FileShare_AsyncFunction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_FileShare_AsyncFunction constinit property declarations *************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USIK_FileShare_AsyncFunction constinit property declarations ***************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("FileShareAsync"), .Pointer = &USIK_FileShare_AsyncFunction::execFileShareAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_FileShare_AsyncFunction_FileShareAsync, "FileShareAsync" }, // 211222050
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_FileShare_AsyncFunction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_FileShare_AsyncFunction_Statics

// ********** Begin Class USIK_FileShare_AsyncFunction Property Definitions ************************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_FileShare_AsyncFunction_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_FileShare_AsyncFunction, OnSuccess), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageFileShareComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 2115777570
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_FileShare_AsyncFunction_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_FileShare_AsyncFunction, OnFailure), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoteStorageFileShareComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 2115777570
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USIK_FileShare_AsyncFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_FileShare_AsyncFunction_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_FileShare_AsyncFunction_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_FileShare_AsyncFunction_Statics::PropPointers) < 2048);
// ********** End Class USIK_FileShare_AsyncFunction Property Definitions **************************
UObject* (*const Z_Construct_UClass_USIK_FileShare_AsyncFunction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_FileShare_AsyncFunction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_FileShare_AsyncFunction_Statics::ClassParams = {
	&USIK_FileShare_AsyncFunction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USIK_FileShare_AsyncFunction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USIK_FileShare_AsyncFunction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_FileShare_AsyncFunction_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_FileShare_AsyncFunction_Statics::Class_MetaDataParams)
};
void USIK_FileShare_AsyncFunction::StaticRegisterNativesUSIK_FileShare_AsyncFunction()
{
	UClass* Class = USIK_FileShare_AsyncFunction::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_FileShare_AsyncFunction_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_FileShare_AsyncFunction()
{
	if (!Z_Registration_Info_UClass_USIK_FileShare_AsyncFunction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_FileShare_AsyncFunction.OuterSingleton, Z_Construct_UClass_USIK_FileShare_AsyncFunction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_FileShare_AsyncFunction.OuterSingleton;
}
USIK_FileShare_AsyncFunction::USIK_FileShare_AsyncFunction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_FileShare_AsyncFunction);
USIK_FileShare_AsyncFunction::~USIK_FileShare_AsyncFunction() {}
// ********** End Class USIK_FileShare_AsyncFunction ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_RemoteStorage_SIK_FileShare_AsyncFunction_h__Script_SteamIntegrationKit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_FileShare_AsyncFunction, USIK_FileShare_AsyncFunction::StaticClass, TEXT("USIK_FileShare_AsyncFunction"), &Z_Registration_Info_UClass_USIK_FileShare_AsyncFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_FileShare_AsyncFunction), 1335751910U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_RemoteStorage_SIK_FileShare_AsyncFunction_h__Script_SteamIntegrationKit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_RemoteStorage_SIK_FileShare_AsyncFunction_h__Script_SteamIntegrationKit_218231405{
	TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_RemoteStorage_SIK_FileShare_AsyncFunction_h__Script_SteamIntegrationKit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_RemoteStorage_SIK_FileShare_AsyncFunction_h__Script_SteamIntegrationKit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
