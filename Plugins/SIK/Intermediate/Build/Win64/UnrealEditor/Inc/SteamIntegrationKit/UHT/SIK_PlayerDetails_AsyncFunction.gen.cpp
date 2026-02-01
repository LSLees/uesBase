// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/MatchmakingServers/SIK_PlayerDetails_AsyncFunction.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_PlayerDetails_AsyncFunction() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_PlayerDetails_AsyncFunction();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_PlayerDetails_AsyncFunction_NoRegister();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddPlayerToList__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnPlayersFailedToRespond__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnPlayersRefreshComplete__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnAddPlayerToList ****************************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddPlayerToList__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnAddPlayerToList_Parms
	{
		FString PlayerName;
		int32 Score;
		float TimePlayed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/MatchmakingServers/SIK_PlayerDetails_AsyncFunction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnAddPlayerToList constinit property declarations ********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Score;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimePlayed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnAddPlayerToList constinit property declarations **********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnAddPlayerToList Property Definitions *******************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddPlayerToList__DelegateSignature_Statics::NewProp_PlayerName = { "PlayerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnAddPlayerToList_Parms, PlayerName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddPlayerToList__DelegateSignature_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnAddPlayerToList_Parms, Score), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddPlayerToList__DelegateSignature_Statics::NewProp_TimePlayed = { "TimePlayed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnAddPlayerToList_Parms, TimePlayed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddPlayerToList__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddPlayerToList__DelegateSignature_Statics::NewProp_PlayerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddPlayerToList__DelegateSignature_Statics::NewProp_Score,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddPlayerToList__DelegateSignature_Statics::NewProp_TimePlayed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddPlayerToList__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnAddPlayerToList Property Definitions *********************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddPlayerToList__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnAddPlayerToList__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddPlayerToList__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddPlayerToList__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddPlayerToList__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnAddPlayerToList_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddPlayerToList__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddPlayerToList__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddPlayerToList__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnAddPlayerToList_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddPlayerToList__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddPlayerToList__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAddPlayerToList_DelegateWrapper(const FMulticastScriptDelegate& OnAddPlayerToList, const FString& PlayerName, int32 Score, float TimePlayed)
{
	struct _Script_SteamIntegrationKit_eventOnAddPlayerToList_Parms
	{
		FString PlayerName;
		int32 Score;
		float TimePlayed;
	};
	_Script_SteamIntegrationKit_eventOnAddPlayerToList_Parms Parms;
	Parms.PlayerName=PlayerName;
	Parms.Score=Score;
	Parms.TimePlayed=TimePlayed;
	OnAddPlayerToList.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnAddPlayerToList ******************************************************

// ********** Begin Delegate FOnPlayersFailedToRespond *********************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnPlayersFailedToRespond__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/MatchmakingServers/SIK_PlayerDetails_AsyncFunction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnPlayersFailedToRespond constinit property declarations *************
// ********** End Delegate FOnPlayersFailedToRespond constinit property declarations ***************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnPlayersFailedToRespond__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnPlayersFailedToRespond__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnPlayersFailedToRespond__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnPlayersFailedToRespond__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnPlayersFailedToRespond__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnPlayersFailedToRespond__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPlayersFailedToRespond_DelegateWrapper(const FMulticastScriptDelegate& OnPlayersFailedToRespond)
{
	OnPlayersFailedToRespond.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnPlayersFailedToRespond ***********************************************

// ********** Begin Delegate FOnPlayersRefreshComplete *********************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnPlayersRefreshComplete__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/MatchmakingServers/SIK_PlayerDetails_AsyncFunction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnPlayersRefreshComplete constinit property declarations *************
// ********** End Delegate FOnPlayersRefreshComplete constinit property declarations ***************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnPlayersRefreshComplete__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnPlayersRefreshComplete__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnPlayersRefreshComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnPlayersRefreshComplete__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnPlayersRefreshComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnPlayersRefreshComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPlayersRefreshComplete_DelegateWrapper(const FMulticastScriptDelegate& OnPlayersRefreshComplete)
{
	OnPlayersRefreshComplete.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnPlayersRefreshComplete ***********************************************

// ********** Begin Class USIK_PlayerDetails_AsyncFunction Function RequestPlayerDetails ***********
struct Z_Construct_UFunction_USIK_PlayerDetails_AsyncFunction_RequestPlayerDetails_Statics
{
	struct SIK_PlayerDetails_AsyncFunction_eventRequestPlayerDetails_Parms
	{
		FString ServerIP;
		int32 ServerPort;
		USIK_PlayerDetails_AsyncFunction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Matchmaking Servers" },
		{ "DisplayName", "Request Player Details" },
		{ "ModuleRelativePath", "Functions/MatchmakingServers/SIK_PlayerDetails_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerIP_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function RequestPlayerDetails constinit property declarations ******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ServerIP;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ServerPort;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RequestPlayerDetails constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RequestPlayerDetails Property Definitions *****************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_PlayerDetails_AsyncFunction_RequestPlayerDetails_Statics::NewProp_ServerIP = { "ServerIP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_PlayerDetails_AsyncFunction_eventRequestPlayerDetails_Parms, ServerIP), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerIP_MetaData), NewProp_ServerIP_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_PlayerDetails_AsyncFunction_RequestPlayerDetails_Statics::NewProp_ServerPort = { "ServerPort", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_PlayerDetails_AsyncFunction_eventRequestPlayerDetails_Parms, ServerPort), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_PlayerDetails_AsyncFunction_RequestPlayerDetails_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_PlayerDetails_AsyncFunction_eventRequestPlayerDetails_Parms, ReturnValue), Z_Construct_UClass_USIK_PlayerDetails_AsyncFunction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_PlayerDetails_AsyncFunction_RequestPlayerDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_PlayerDetails_AsyncFunction_RequestPlayerDetails_Statics::NewProp_ServerIP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_PlayerDetails_AsyncFunction_RequestPlayerDetails_Statics::NewProp_ServerPort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_PlayerDetails_AsyncFunction_RequestPlayerDetails_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_PlayerDetails_AsyncFunction_RequestPlayerDetails_Statics::PropPointers) < 2048);
// ********** End Function RequestPlayerDetails Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_PlayerDetails_AsyncFunction_RequestPlayerDetails_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_PlayerDetails_AsyncFunction, nullptr, "RequestPlayerDetails", 	Z_Construct_UFunction_USIK_PlayerDetails_AsyncFunction_RequestPlayerDetails_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_PlayerDetails_AsyncFunction_RequestPlayerDetails_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_PlayerDetails_AsyncFunction_RequestPlayerDetails_Statics::SIK_PlayerDetails_AsyncFunction_eventRequestPlayerDetails_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_PlayerDetails_AsyncFunction_RequestPlayerDetails_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_PlayerDetails_AsyncFunction_RequestPlayerDetails_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_PlayerDetails_AsyncFunction_RequestPlayerDetails_Statics::SIK_PlayerDetails_AsyncFunction_eventRequestPlayerDetails_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_PlayerDetails_AsyncFunction_RequestPlayerDetails()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_PlayerDetails_AsyncFunction_RequestPlayerDetails_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_PlayerDetails_AsyncFunction::execRequestPlayerDetails)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ServerIP);
	P_GET_PROPERTY(FIntProperty,Z_Param_ServerPort);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_PlayerDetails_AsyncFunction**)Z_Param__Result=USIK_PlayerDetails_AsyncFunction::RequestPlayerDetails(Z_Param_ServerIP,Z_Param_ServerPort);
	P_NATIVE_END;
}
// ********** End Class USIK_PlayerDetails_AsyncFunction Function RequestPlayerDetails *************

// ********** Begin Class USIK_PlayerDetails_AsyncFunction *****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_PlayerDetails_AsyncFunction;
UClass* USIK_PlayerDetails_AsyncFunction::GetPrivateStaticClass()
{
	using TClass = USIK_PlayerDetails_AsyncFunction;
	if (!Z_Registration_Info_UClass_USIK_PlayerDetails_AsyncFunction.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_PlayerDetails_AsyncFunction"),
			Z_Registration_Info_UClass_USIK_PlayerDetails_AsyncFunction.InnerSingleton,
			StaticRegisterNativesUSIK_PlayerDetails_AsyncFunction,
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
	return Z_Registration_Info_UClass_USIK_PlayerDetails_AsyncFunction.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_PlayerDetails_AsyncFunction_NoRegister()
{
	return USIK_PlayerDetails_AsyncFunction::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_PlayerDetails_AsyncFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Functions/MatchmakingServers/SIK_PlayerDetails_AsyncFunction.h" },
		{ "ModuleRelativePath", "Functions/MatchmakingServers/SIK_PlayerDetails_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAddPlayerToList_MetaData[] = {
		{ "ModuleRelativePath", "Functions/MatchmakingServers/SIK_PlayerDetails_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPlayersFailedToRespond_MetaData[] = {
		{ "ModuleRelativePath", "Functions/MatchmakingServers/SIK_PlayerDetails_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPlayersRefreshComplete_MetaData[] = {
		{ "ModuleRelativePath", "Functions/MatchmakingServers/SIK_PlayerDetails_AsyncFunction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_PlayerDetails_AsyncFunction constinit property declarations *********
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAddPlayerToList;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayersFailedToRespond;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayersRefreshComplete;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USIK_PlayerDetails_AsyncFunction constinit property declarations ***********
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("RequestPlayerDetails"), .Pointer = &USIK_PlayerDetails_AsyncFunction::execRequestPlayerDetails },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_PlayerDetails_AsyncFunction_RequestPlayerDetails, "RequestPlayerDetails" }, // 2025776462
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_PlayerDetails_AsyncFunction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_PlayerDetails_AsyncFunction_Statics

// ********** Begin Class USIK_PlayerDetails_AsyncFunction Property Definitions ********************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_PlayerDetails_AsyncFunction_Statics::NewProp_OnAddPlayerToList = { "OnAddPlayerToList", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_PlayerDetails_AsyncFunction, OnAddPlayerToList), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnAddPlayerToList__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAddPlayerToList_MetaData), NewProp_OnAddPlayerToList_MetaData) }; // 2114750937
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_PlayerDetails_AsyncFunction_Statics::NewProp_OnPlayersFailedToRespond = { "OnPlayersFailedToRespond", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_PlayerDetails_AsyncFunction, OnPlayersFailedToRespond), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnPlayersFailedToRespond__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPlayersFailedToRespond_MetaData), NewProp_OnPlayersFailedToRespond_MetaData) }; // 1892980940
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_PlayerDetails_AsyncFunction_Statics::NewProp_OnPlayersRefreshComplete = { "OnPlayersRefreshComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_PlayerDetails_AsyncFunction, OnPlayersRefreshComplete), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnPlayersRefreshComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPlayersRefreshComplete_MetaData), NewProp_OnPlayersRefreshComplete_MetaData) }; // 465203361
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USIK_PlayerDetails_AsyncFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_PlayerDetails_AsyncFunction_Statics::NewProp_OnAddPlayerToList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_PlayerDetails_AsyncFunction_Statics::NewProp_OnPlayersFailedToRespond,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_PlayerDetails_AsyncFunction_Statics::NewProp_OnPlayersRefreshComplete,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_PlayerDetails_AsyncFunction_Statics::PropPointers) < 2048);
// ********** End Class USIK_PlayerDetails_AsyncFunction Property Definitions **********************
UObject* (*const Z_Construct_UClass_USIK_PlayerDetails_AsyncFunction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_PlayerDetails_AsyncFunction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_PlayerDetails_AsyncFunction_Statics::ClassParams = {
	&USIK_PlayerDetails_AsyncFunction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USIK_PlayerDetails_AsyncFunction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USIK_PlayerDetails_AsyncFunction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_PlayerDetails_AsyncFunction_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_PlayerDetails_AsyncFunction_Statics::Class_MetaDataParams)
};
void USIK_PlayerDetails_AsyncFunction::StaticRegisterNativesUSIK_PlayerDetails_AsyncFunction()
{
	UClass* Class = USIK_PlayerDetails_AsyncFunction::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_PlayerDetails_AsyncFunction_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_PlayerDetails_AsyncFunction()
{
	if (!Z_Registration_Info_UClass_USIK_PlayerDetails_AsyncFunction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_PlayerDetails_AsyncFunction.OuterSingleton, Z_Construct_UClass_USIK_PlayerDetails_AsyncFunction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_PlayerDetails_AsyncFunction.OuterSingleton;
}
USIK_PlayerDetails_AsyncFunction::USIK_PlayerDetails_AsyncFunction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_PlayerDetails_AsyncFunction);
USIK_PlayerDetails_AsyncFunction::~USIK_PlayerDetails_AsyncFunction() {}
// ********** End Class USIK_PlayerDetails_AsyncFunction *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_MatchmakingServers_SIK_PlayerDetails_AsyncFunction_h__Script_SteamIntegrationKit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_PlayerDetails_AsyncFunction, USIK_PlayerDetails_AsyncFunction::StaticClass, TEXT("USIK_PlayerDetails_AsyncFunction"), &Z_Registration_Info_UClass_USIK_PlayerDetails_AsyncFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_PlayerDetails_AsyncFunction), 1004340085U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_MatchmakingServers_SIK_PlayerDetails_AsyncFunction_h__Script_SteamIntegrationKit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_MatchmakingServers_SIK_PlayerDetails_AsyncFunction_h__Script_SteamIntegrationKit_2940542087{
	TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_MatchmakingServers_SIK_PlayerDetails_AsyncFunction_h__Script_SteamIntegrationKit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_MatchmakingServers_SIK_PlayerDetails_AsyncFunction_h__Script_SteamIntegrationKit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
