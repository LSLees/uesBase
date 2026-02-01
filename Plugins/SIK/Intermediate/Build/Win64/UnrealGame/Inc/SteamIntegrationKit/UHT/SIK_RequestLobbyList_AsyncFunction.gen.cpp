// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/Matchmaking/SIK_RequestLobbyList_AsyncFunction.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_RequestLobbyList_AsyncFunction() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_RequestLobbyList_AsyncFunction();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_RequestLobbyList_AsyncFunction_NoRegister();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRequestLobbyList__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnRequestLobbyList ***************************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRequestLobbyList__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnRequestLobbyList_Parms
	{
		int32 LobbiesMatching;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/Matchmaking/SIK_RequestLobbyList_AsyncFunction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnRequestLobbyList constinit property declarations *******************
	static const UECodeGen_Private::FIntPropertyParams NewProp_LobbiesMatching;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnRequestLobbyList constinit property declarations *********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnRequestLobbyList Property Definitions ******************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRequestLobbyList__DelegateSignature_Statics::NewProp_LobbiesMatching = { "LobbiesMatching", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnRequestLobbyList_Parms, LobbiesMatching), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRequestLobbyList__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRequestLobbyList__DelegateSignature_Statics::NewProp_LobbiesMatching,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRequestLobbyList__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnRequestLobbyList Property Definitions ********************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRequestLobbyList__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnRequestLobbyList__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRequestLobbyList__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRequestLobbyList__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRequestLobbyList__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnRequestLobbyList_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRequestLobbyList__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRequestLobbyList__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRequestLobbyList__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnRequestLobbyList_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRequestLobbyList__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRequestLobbyList__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRequestLobbyList_DelegateWrapper(const FMulticastScriptDelegate& OnRequestLobbyList, int32 LobbiesMatching)
{
	struct _Script_SteamIntegrationKit_eventOnRequestLobbyList_Parms
	{
		int32 LobbiesMatching;
	};
	_Script_SteamIntegrationKit_eventOnRequestLobbyList_Parms Parms;
	Parms.LobbiesMatching=LobbiesMatching;
	OnRequestLobbyList.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnRequestLobbyList *****************************************************

// ********** Begin Class USIK_RequestLobbyList_AsyncFunction Function RequestLobbyList ************
struct Z_Construct_UFunction_USIK_RequestLobbyList_AsyncFunction_RequestLobbyList_Statics
{
	struct SIK_RequestLobbyList_AsyncFunction_eventRequestLobbyList_Parms
	{
		USIK_RequestLobbyList_AsyncFunction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit || SDK Functions || Matchmaking" },
		{ "DisplayName", "Request Lobby List" },
		{ "ModuleRelativePath", "Functions/Matchmaking/SIK_RequestLobbyList_AsyncFunction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function RequestLobbyList constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RequestLobbyList constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RequestLobbyList Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_RequestLobbyList_AsyncFunction_RequestLobbyList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RequestLobbyList_AsyncFunction_eventRequestLobbyList_Parms, ReturnValue), Z_Construct_UClass_USIK_RequestLobbyList_AsyncFunction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_RequestLobbyList_AsyncFunction_RequestLobbyList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RequestLobbyList_AsyncFunction_RequestLobbyList_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RequestLobbyList_AsyncFunction_RequestLobbyList_Statics::PropPointers) < 2048);
// ********** End Function RequestLobbyList Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_RequestLobbyList_AsyncFunction_RequestLobbyList_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_RequestLobbyList_AsyncFunction, nullptr, "RequestLobbyList", 	Z_Construct_UFunction_USIK_RequestLobbyList_AsyncFunction_RequestLobbyList_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RequestLobbyList_AsyncFunction_RequestLobbyList_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_RequestLobbyList_AsyncFunction_RequestLobbyList_Statics::SIK_RequestLobbyList_AsyncFunction_eventRequestLobbyList_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RequestLobbyList_AsyncFunction_RequestLobbyList_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_RequestLobbyList_AsyncFunction_RequestLobbyList_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_RequestLobbyList_AsyncFunction_RequestLobbyList_Statics::SIK_RequestLobbyList_AsyncFunction_eventRequestLobbyList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_RequestLobbyList_AsyncFunction_RequestLobbyList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_RequestLobbyList_AsyncFunction_RequestLobbyList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_RequestLobbyList_AsyncFunction::execRequestLobbyList)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_RequestLobbyList_AsyncFunction**)Z_Param__Result=USIK_RequestLobbyList_AsyncFunction::RequestLobbyList();
	P_NATIVE_END;
}
// ********** End Class USIK_RequestLobbyList_AsyncFunction Function RequestLobbyList **************

// ********** Begin Class USIK_RequestLobbyList_AsyncFunction **************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_RequestLobbyList_AsyncFunction;
UClass* USIK_RequestLobbyList_AsyncFunction::GetPrivateStaticClass()
{
	using TClass = USIK_RequestLobbyList_AsyncFunction;
	if (!Z_Registration_Info_UClass_USIK_RequestLobbyList_AsyncFunction.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_RequestLobbyList_AsyncFunction"),
			Z_Registration_Info_UClass_USIK_RequestLobbyList_AsyncFunction.InnerSingleton,
			StaticRegisterNativesUSIK_RequestLobbyList_AsyncFunction,
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
	return Z_Registration_Info_UClass_USIK_RequestLobbyList_AsyncFunction.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_RequestLobbyList_AsyncFunction_NoRegister()
{
	return USIK_RequestLobbyList_AsyncFunction::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_RequestLobbyList_AsyncFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Functions/Matchmaking/SIK_RequestLobbyList_AsyncFunction.h" },
		{ "ModuleRelativePath", "Functions/Matchmaking/SIK_RequestLobbyList_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Functions/Matchmaking/SIK_RequestLobbyList_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Functions/Matchmaking/SIK_RequestLobbyList_AsyncFunction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_RequestLobbyList_AsyncFunction constinit property declarations ******
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USIK_RequestLobbyList_AsyncFunction constinit property declarations ********
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("RequestLobbyList"), .Pointer = &USIK_RequestLobbyList_AsyncFunction::execRequestLobbyList },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_RequestLobbyList_AsyncFunction_RequestLobbyList, "RequestLobbyList" }, // 2231447700
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_RequestLobbyList_AsyncFunction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_RequestLobbyList_AsyncFunction_Statics

// ********** Begin Class USIK_RequestLobbyList_AsyncFunction Property Definitions *****************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_RequestLobbyList_AsyncFunction_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_RequestLobbyList_AsyncFunction, OnSuccess), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRequestLobbyList__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 3941359582
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_RequestLobbyList_AsyncFunction_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_RequestLobbyList_AsyncFunction, OnFailure), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRequestLobbyList__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 3941359582
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USIK_RequestLobbyList_AsyncFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_RequestLobbyList_AsyncFunction_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_RequestLobbyList_AsyncFunction_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_RequestLobbyList_AsyncFunction_Statics::PropPointers) < 2048);
// ********** End Class USIK_RequestLobbyList_AsyncFunction Property Definitions *******************
UObject* (*const Z_Construct_UClass_USIK_RequestLobbyList_AsyncFunction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_RequestLobbyList_AsyncFunction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_RequestLobbyList_AsyncFunction_Statics::ClassParams = {
	&USIK_RequestLobbyList_AsyncFunction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USIK_RequestLobbyList_AsyncFunction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USIK_RequestLobbyList_AsyncFunction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_RequestLobbyList_AsyncFunction_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_RequestLobbyList_AsyncFunction_Statics::Class_MetaDataParams)
};
void USIK_RequestLobbyList_AsyncFunction::StaticRegisterNativesUSIK_RequestLobbyList_AsyncFunction()
{
	UClass* Class = USIK_RequestLobbyList_AsyncFunction::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_RequestLobbyList_AsyncFunction_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_RequestLobbyList_AsyncFunction()
{
	if (!Z_Registration_Info_UClass_USIK_RequestLobbyList_AsyncFunction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_RequestLobbyList_AsyncFunction.OuterSingleton, Z_Construct_UClass_USIK_RequestLobbyList_AsyncFunction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_RequestLobbyList_AsyncFunction.OuterSingleton;
}
USIK_RequestLobbyList_AsyncFunction::USIK_RequestLobbyList_AsyncFunction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_RequestLobbyList_AsyncFunction);
USIK_RequestLobbyList_AsyncFunction::~USIK_RequestLobbyList_AsyncFunction() {}
// ********** End Class USIK_RequestLobbyList_AsyncFunction ****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Matchmaking_SIK_RequestLobbyList_AsyncFunction_h__Script_SteamIntegrationKit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_RequestLobbyList_AsyncFunction, USIK_RequestLobbyList_AsyncFunction::StaticClass, TEXT("USIK_RequestLobbyList_AsyncFunction"), &Z_Registration_Info_UClass_USIK_RequestLobbyList_AsyncFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_RequestLobbyList_AsyncFunction), 2431830756U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Matchmaking_SIK_RequestLobbyList_AsyncFunction_h__Script_SteamIntegrationKit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Matchmaking_SIK_RequestLobbyList_AsyncFunction_h__Script_SteamIntegrationKit_1218084307{
	TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Matchmaking_SIK_RequestLobbyList_AsyncFunction_h__Script_SteamIntegrationKit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Matchmaking_SIK_RequestLobbyList_AsyncFunction_h__Script_SteamIntegrationKit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
