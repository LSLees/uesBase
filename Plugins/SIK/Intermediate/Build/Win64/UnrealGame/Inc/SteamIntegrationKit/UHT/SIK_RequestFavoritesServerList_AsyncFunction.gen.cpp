// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/MatchmakingServers/SIK_RequestFavoritesServerList_AsyncFunction.h"
#include "SIK_SharedFile.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_RequestFavoritesServerList_AsyncFunction() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_RequestFavoritesServerList_AsyncFunction();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_RequestFavoritesServerList_AsyncFunction_NoRegister();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_MatchMakingServerResponse();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_RequestFavoritesServerListDelegate__DelegateSignature();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_AppId();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_FoundServers();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FRequestFavoritesServerListDelegate ***********************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_RequestFavoritesServerListDelegate__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventRequestFavoritesServerListDelegate_Parms
	{
		TEnumAsByte<ESIK_MatchMakingServerResponse> Response;
		TArray<FSIK_FoundServers> ServerList;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/MatchmakingServers/SIK_RequestFavoritesServerList_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FRequestFavoritesServerListDelegate constinit property declarations ***
	static const UECodeGen_Private::FBytePropertyParams NewProp_Response;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ServerList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ServerList;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FRequestFavoritesServerListDelegate constinit property declarations *****
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FRequestFavoritesServerListDelegate Property Definitions **************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_RequestFavoritesServerListDelegate__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventRequestFavoritesServerListDelegate_Parms, Response), Z_Construct_UEnum_SteamIntegrationKit_ESIK_MatchMakingServerResponse, METADATA_PARAMS(0, nullptr) }; // 2619640712
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_RequestFavoritesServerListDelegate__DelegateSignature_Statics::NewProp_ServerList_Inner = { "ServerList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSIK_FoundServers, METADATA_PARAMS(0, nullptr) }; // 3175229584
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_RequestFavoritesServerListDelegate__DelegateSignature_Statics::NewProp_ServerList = { "ServerList", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventRequestFavoritesServerListDelegate_Parms, ServerList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerList_MetaData), NewProp_ServerList_MetaData) }; // 3175229584
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_RequestFavoritesServerListDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_RequestFavoritesServerListDelegate__DelegateSignature_Statics::NewProp_Response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_RequestFavoritesServerListDelegate__DelegateSignature_Statics::NewProp_ServerList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_RequestFavoritesServerListDelegate__DelegateSignature_Statics::NewProp_ServerList,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_RequestFavoritesServerListDelegate__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FRequestFavoritesServerListDelegate Property Definitions ****************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_RequestFavoritesServerListDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "RequestFavoritesServerListDelegate__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_RequestFavoritesServerListDelegate__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_RequestFavoritesServerListDelegate__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_RequestFavoritesServerListDelegate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventRequestFavoritesServerListDelegate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_RequestFavoritesServerListDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_RequestFavoritesServerListDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_RequestFavoritesServerListDelegate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventRequestFavoritesServerListDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_RequestFavoritesServerListDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_RequestFavoritesServerListDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FRequestFavoritesServerListDelegate_DelegateWrapper(const FMulticastScriptDelegate& RequestFavoritesServerListDelegate, ESIK_MatchMakingServerResponse Response, TArray<FSIK_FoundServers> const& ServerList)
{
	struct _Script_SteamIntegrationKit_eventRequestFavoritesServerListDelegate_Parms
	{
		TEnumAsByte<ESIK_MatchMakingServerResponse> Response;
		TArray<FSIK_FoundServers> ServerList;
	};
	_Script_SteamIntegrationKit_eventRequestFavoritesServerListDelegate_Parms Parms;
	Parms.Response=Response;
	Parms.ServerList=ServerList;
	RequestFavoritesServerListDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FRequestFavoritesServerListDelegate *************************************

// ********** Begin Class USIK_RequestFavoritesServerList_AsyncFunction Function RequestFavoritesServerList 
struct Z_Construct_UFunction_USIK_RequestFavoritesServerList_AsyncFunction_RequestFavoritesServerList_Statics
{
	struct SIK_RequestFavoritesServerList_AsyncFunction_eventRequestFavoritesServerList_Parms
	{
		FSIK_AppId AppId;
		TMap<FString,FString> Filters;
		float TimeOut;
		USIK_RequestFavoritesServerList_AsyncFunction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Filters" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit || SDK Functions || Matchmaking Servers" },
		{ "CPP_Default_TimeOut", "10.000000" },
		{ "DisplayName", "Request Favorites Server List" },
		{ "ModuleRelativePath", "Functions/MatchmakingServers/SIK_RequestFavoritesServerList_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function RequestFavoritesServerList constinit property declarations ************
	static const UECodeGen_Private::FStructPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Filters_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Filters_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Filters;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeOut;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RequestFavoritesServerList constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RequestFavoritesServerList Property Definitions ***********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_RequestFavoritesServerList_AsyncFunction_RequestFavoritesServerList_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RequestFavoritesServerList_AsyncFunction_eventRequestFavoritesServerList_Parms, AppId), Z_Construct_UScriptStruct_FSIK_AppId, METADATA_PARAMS(0, nullptr) }; // 3325316996
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_RequestFavoritesServerList_AsyncFunction_RequestFavoritesServerList_Statics::NewProp_Filters_ValueProp = { "Filters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_RequestFavoritesServerList_AsyncFunction_RequestFavoritesServerList_Statics::NewProp_Filters_Key_KeyProp = { "Filters_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_USIK_RequestFavoritesServerList_AsyncFunction_RequestFavoritesServerList_Statics::NewProp_Filters = { "Filters", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RequestFavoritesServerList_AsyncFunction_eventRequestFavoritesServerList_Parms, Filters), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filters_MetaData), NewProp_Filters_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USIK_RequestFavoritesServerList_AsyncFunction_RequestFavoritesServerList_Statics::NewProp_TimeOut = { "TimeOut", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RequestFavoritesServerList_AsyncFunction_eventRequestFavoritesServerList_Parms, TimeOut), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_RequestFavoritesServerList_AsyncFunction_RequestFavoritesServerList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RequestFavoritesServerList_AsyncFunction_eventRequestFavoritesServerList_Parms, ReturnValue), Z_Construct_UClass_USIK_RequestFavoritesServerList_AsyncFunction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_RequestFavoritesServerList_AsyncFunction_RequestFavoritesServerList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RequestFavoritesServerList_AsyncFunction_RequestFavoritesServerList_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RequestFavoritesServerList_AsyncFunction_RequestFavoritesServerList_Statics::NewProp_Filters_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RequestFavoritesServerList_AsyncFunction_RequestFavoritesServerList_Statics::NewProp_Filters_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RequestFavoritesServerList_AsyncFunction_RequestFavoritesServerList_Statics::NewProp_Filters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RequestFavoritesServerList_AsyncFunction_RequestFavoritesServerList_Statics::NewProp_TimeOut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RequestFavoritesServerList_AsyncFunction_RequestFavoritesServerList_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RequestFavoritesServerList_AsyncFunction_RequestFavoritesServerList_Statics::PropPointers) < 2048);
// ********** End Function RequestFavoritesServerList Property Definitions *************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_RequestFavoritesServerList_AsyncFunction_RequestFavoritesServerList_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_RequestFavoritesServerList_AsyncFunction, nullptr, "RequestFavoritesServerList", 	Z_Construct_UFunction_USIK_RequestFavoritesServerList_AsyncFunction_RequestFavoritesServerList_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RequestFavoritesServerList_AsyncFunction_RequestFavoritesServerList_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_RequestFavoritesServerList_AsyncFunction_RequestFavoritesServerList_Statics::SIK_RequestFavoritesServerList_AsyncFunction_eventRequestFavoritesServerList_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RequestFavoritesServerList_AsyncFunction_RequestFavoritesServerList_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_RequestFavoritesServerList_AsyncFunction_RequestFavoritesServerList_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_RequestFavoritesServerList_AsyncFunction_RequestFavoritesServerList_Statics::SIK_RequestFavoritesServerList_AsyncFunction_eventRequestFavoritesServerList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_RequestFavoritesServerList_AsyncFunction_RequestFavoritesServerList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_RequestFavoritesServerList_AsyncFunction_RequestFavoritesServerList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_RequestFavoritesServerList_AsyncFunction::execRequestFavoritesServerList)
{
	P_GET_STRUCT(FSIK_AppId,Z_Param_AppId);
	P_GET_TMAP_REF(FString,FString,Z_Param_Out_Filters);
	P_GET_PROPERTY(FFloatProperty,Z_Param_TimeOut);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_RequestFavoritesServerList_AsyncFunction**)Z_Param__Result=USIK_RequestFavoritesServerList_AsyncFunction::RequestFavoritesServerList(Z_Param_AppId,Z_Param_Out_Filters,Z_Param_TimeOut);
	P_NATIVE_END;
}
// ********** End Class USIK_RequestFavoritesServerList_AsyncFunction Function RequestFavoritesServerList 

// ********** Begin Class USIK_RequestFavoritesServerList_AsyncFunction ****************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_RequestFavoritesServerList_AsyncFunction;
UClass* USIK_RequestFavoritesServerList_AsyncFunction::GetPrivateStaticClass()
{
	using TClass = USIK_RequestFavoritesServerList_AsyncFunction;
	if (!Z_Registration_Info_UClass_USIK_RequestFavoritesServerList_AsyncFunction.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_RequestFavoritesServerList_AsyncFunction"),
			Z_Registration_Info_UClass_USIK_RequestFavoritesServerList_AsyncFunction.InnerSingleton,
			StaticRegisterNativesUSIK_RequestFavoritesServerList_AsyncFunction,
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
	return Z_Registration_Info_UClass_USIK_RequestFavoritesServerList_AsyncFunction.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_RequestFavoritesServerList_AsyncFunction_NoRegister()
{
	return USIK_RequestFavoritesServerList_AsyncFunction::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_RequestFavoritesServerList_AsyncFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Functions/MatchmakingServers/SIK_RequestFavoritesServerList_AsyncFunction.h" },
		{ "ModuleRelativePath", "Functions/MatchmakingServers/SIK_RequestFavoritesServerList_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Functions/MatchmakingServers/SIK_RequestFavoritesServerList_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Functions/MatchmakingServers/SIK_RequestFavoritesServerList_AsyncFunction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_RequestFavoritesServerList_AsyncFunction constinit property declarations 
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USIK_RequestFavoritesServerList_AsyncFunction constinit property declarations 
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("RequestFavoritesServerList"), .Pointer = &USIK_RequestFavoritesServerList_AsyncFunction::execRequestFavoritesServerList },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_RequestFavoritesServerList_AsyncFunction_RequestFavoritesServerList, "RequestFavoritesServerList" }, // 491039141
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_RequestFavoritesServerList_AsyncFunction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_RequestFavoritesServerList_AsyncFunction_Statics

// ********** Begin Class USIK_RequestFavoritesServerList_AsyncFunction Property Definitions *******
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_RequestFavoritesServerList_AsyncFunction_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_RequestFavoritesServerList_AsyncFunction, OnSuccess), Z_Construct_UDelegateFunction_SteamIntegrationKit_RequestFavoritesServerListDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 3110921144
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_RequestFavoritesServerList_AsyncFunction_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_RequestFavoritesServerList_AsyncFunction, OnFailure), Z_Construct_UDelegateFunction_SteamIntegrationKit_RequestFavoritesServerListDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 3110921144
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USIK_RequestFavoritesServerList_AsyncFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_RequestFavoritesServerList_AsyncFunction_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_RequestFavoritesServerList_AsyncFunction_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_RequestFavoritesServerList_AsyncFunction_Statics::PropPointers) < 2048);
// ********** End Class USIK_RequestFavoritesServerList_AsyncFunction Property Definitions *********
UObject* (*const Z_Construct_UClass_USIK_RequestFavoritesServerList_AsyncFunction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_RequestFavoritesServerList_AsyncFunction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_RequestFavoritesServerList_AsyncFunction_Statics::ClassParams = {
	&USIK_RequestFavoritesServerList_AsyncFunction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USIK_RequestFavoritesServerList_AsyncFunction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USIK_RequestFavoritesServerList_AsyncFunction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_RequestFavoritesServerList_AsyncFunction_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_RequestFavoritesServerList_AsyncFunction_Statics::Class_MetaDataParams)
};
void USIK_RequestFavoritesServerList_AsyncFunction::StaticRegisterNativesUSIK_RequestFavoritesServerList_AsyncFunction()
{
	UClass* Class = USIK_RequestFavoritesServerList_AsyncFunction::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_RequestFavoritesServerList_AsyncFunction_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_RequestFavoritesServerList_AsyncFunction()
{
	if (!Z_Registration_Info_UClass_USIK_RequestFavoritesServerList_AsyncFunction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_RequestFavoritesServerList_AsyncFunction.OuterSingleton, Z_Construct_UClass_USIK_RequestFavoritesServerList_AsyncFunction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_RequestFavoritesServerList_AsyncFunction.OuterSingleton;
}
USIK_RequestFavoritesServerList_AsyncFunction::USIK_RequestFavoritesServerList_AsyncFunction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_RequestFavoritesServerList_AsyncFunction);
USIK_RequestFavoritesServerList_AsyncFunction::~USIK_RequestFavoritesServerList_AsyncFunction() {}
// ********** End Class USIK_RequestFavoritesServerList_AsyncFunction ******************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_MatchmakingServers_SIK_RequestFavoritesServerList_AsyncFunction_h__Script_SteamIntegrationKit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_RequestFavoritesServerList_AsyncFunction, USIK_RequestFavoritesServerList_AsyncFunction::StaticClass, TEXT("USIK_RequestFavoritesServerList_AsyncFunction"), &Z_Registration_Info_UClass_USIK_RequestFavoritesServerList_AsyncFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_RequestFavoritesServerList_AsyncFunction), 3622971346U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_MatchmakingServers_SIK_RequestFavoritesServerList_AsyncFunction_h__Script_SteamIntegrationKit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_MatchmakingServers_SIK_RequestFavoritesServerList_AsyncFunction_h__Script_SteamIntegrationKit_964666886{
	TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_MatchmakingServers_SIK_RequestFavoritesServerList_AsyncFunction_h__Script_SteamIntegrationKit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_MatchmakingServers_SIK_RequestFavoritesServerList_AsyncFunction_h__Script_SteamIntegrationKit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
