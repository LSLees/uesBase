// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/Sessions/SIK_JoinSession_AsyncFunction.h"
#include "SIK_SharedFile.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_JoinSession_AsyncFunction() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_JoinSession_AsyncFunction();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_JoinSession_AsyncFunction_NoRegister();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIKJoinResult();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_JoinSession_Delegate__DelegateSignature();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSSessionFindStruct();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ESIKJoinResult ************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESIKJoinResult;
static UEnum* ESIKJoinResult_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESIKJoinResult.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESIKJoinResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamIntegrationKit_ESIKJoinResult, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("ESIKJoinResult"));
	}
	return Z_Registration_Info_UEnum_ESIKJoinResult.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<ESIKJoinResult>()
{
	return ESIKJoinResult_StaticEnum();
}
struct Z_Construct_UEnum_SteamIntegrationKit_ESIKJoinResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AlreadyInSession.DisplayName", "Already In Session" },
		{ "AlreadyInSession.Name", "ESIKJoinResult::AlreadyInSession" },
		{ "BlueprintType", "true" },
		{ "CouldNotRetrieveAddress.DisplayName", "Could Not Retrieve Address" },
		{ "CouldNotRetrieveAddress.Name", "ESIKJoinResult::CouldNotRetrieveAddress" },
		{ "ModuleRelativePath", "Functions/Sessions/SIK_JoinSession_AsyncFunction.h" },
		{ "SessionDoesNotExist.DisplayName", "Session Does Not Exist" },
		{ "SessionDoesNotExist.Name", "ESIKJoinResult::SessionDoesNotExist" },
		{ "SessionIsFull.DisplayName", "Session Is Full" },
		{ "SessionIsFull.Name", "ESIKJoinResult::SessionIsFull" },
		{ "Success.DisplayName", "Success" },
		{ "Success.Name", "ESIKJoinResult::Success" },
		{ "UnknownError.DisplayName", "UnknownError" },
		{ "UnknownError.Name", "ESIKJoinResult::UnknownError" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESIKJoinResult::Success", (int64)ESIKJoinResult::Success },
		{ "ESIKJoinResult::SessionIsFull", (int64)ESIKJoinResult::SessionIsFull },
		{ "ESIKJoinResult::SessionDoesNotExist", (int64)ESIKJoinResult::SessionDoesNotExist },
		{ "ESIKJoinResult::CouldNotRetrieveAddress", (int64)ESIKJoinResult::CouldNotRetrieveAddress },
		{ "ESIKJoinResult::AlreadyInSession", (int64)ESIKJoinResult::AlreadyInSession },
		{ "ESIKJoinResult::UnknownError", (int64)ESIKJoinResult::UnknownError },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamIntegrationKit_ESIKJoinResult_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamIntegrationKit_ESIKJoinResult_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	"ESIKJoinResult",
	"ESIKJoinResult",
	Z_Construct_UEnum_SteamIntegrationKit_ESIKJoinResult_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIKJoinResult_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIKJoinResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamIntegrationKit_ESIKJoinResult_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIKJoinResult()
{
	if (!Z_Registration_Info_UEnum_ESIKJoinResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESIKJoinResult.InnerSingleton, Z_Construct_UEnum_SteamIntegrationKit_ESIKJoinResult_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESIKJoinResult.InnerSingleton;
}
// ********** End Enum ESIKJoinResult **************************************************************

// ********** Begin Delegate FSIK_JoinSession_Delegate *********************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_JoinSession_Delegate__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventSIK_JoinSession_Delegate_Parms
	{
		ESIKJoinResult Result;
		FString SessionJoinAddress;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/Sessions/SIK_JoinSession_AsyncFunction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FSIK_JoinSession_Delegate constinit property declarations *************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionJoinAddress;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FSIK_JoinSession_Delegate constinit property declarations ***************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FSIK_JoinSession_Delegate Property Definitions ************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_JoinSession_Delegate__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_JoinSession_Delegate__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventSIK_JoinSession_Delegate_Parms, Result), Z_Construct_UEnum_SteamIntegrationKit_ESIKJoinResult, METADATA_PARAMS(0, nullptr) }; // 1653083318
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_JoinSession_Delegate__DelegateSignature_Statics::NewProp_SessionJoinAddress = { "SessionJoinAddress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventSIK_JoinSession_Delegate_Parms, SessionJoinAddress), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_JoinSession_Delegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_JoinSession_Delegate__DelegateSignature_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_JoinSession_Delegate__DelegateSignature_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_JoinSession_Delegate__DelegateSignature_Statics::NewProp_SessionJoinAddress,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_JoinSession_Delegate__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FSIK_JoinSession_Delegate Property Definitions **************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_JoinSession_Delegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "SIK_JoinSession_Delegate__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_JoinSession_Delegate__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_JoinSession_Delegate__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_JoinSession_Delegate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventSIK_JoinSession_Delegate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_JoinSession_Delegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_JoinSession_Delegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_JoinSession_Delegate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventSIK_JoinSession_Delegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_JoinSession_Delegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_JoinSession_Delegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSIK_JoinSession_Delegate_DelegateWrapper(const FMulticastScriptDelegate& SIK_JoinSession_Delegate, ESIKJoinResult Result, const FString& SessionJoinAddress)
{
	struct _Script_SteamIntegrationKit_eventSIK_JoinSession_Delegate_Parms
	{
		ESIKJoinResult Result;
		FString SessionJoinAddress;
	};
	_Script_SteamIntegrationKit_eventSIK_JoinSession_Delegate_Parms Parms;
	Parms.Result=Result;
	Parms.SessionJoinAddress=SessionJoinAddress;
	SIK_JoinSession_Delegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FSIK_JoinSession_Delegate ***********************************************

// ********** Begin Class USIK_JoinSession_AsyncFunction Function JoinSIKSessions ******************
struct Z_Construct_UFunction_USIK_JoinSession_AsyncFunction_JoinSIKSessions_Statics
{
	struct SIK_JoinSession_AsyncFunction_eventJoinSIKSessions_Parms
	{
		UObject* WorldContextObject;
		FName SessionName;
		FSSessionFindStruct SessionToJoin;
		USIK_JoinSession_AsyncFunction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit || Game Functions || Sessions" },
		{ "CPP_Default_SessionName", "GameSession" },
		{ "CPP_Default_SessionToJoin", "()" },
		{ "DisplayName", "Join SIK Session" },
		{ "ModuleRelativePath", "Functions/Sessions/SIK_JoinSession_AsyncFunction.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function JoinSIKSessions constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SessionName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SessionToJoin;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function JoinSIKSessions constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function JoinSIKSessions Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_JoinSession_AsyncFunction_JoinSIKSessions_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_JoinSession_AsyncFunction_eventJoinSIKSessions_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USIK_JoinSession_AsyncFunction_JoinSIKSessions_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_JoinSession_AsyncFunction_eventJoinSIKSessions_Parms, SessionName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_JoinSession_AsyncFunction_JoinSIKSessions_Statics::NewProp_SessionToJoin = { "SessionToJoin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_JoinSession_AsyncFunction_eventJoinSIKSessions_Parms, SessionToJoin), Z_Construct_UScriptStruct_FSSessionFindStruct, METADATA_PARAMS(0, nullptr) }; // 3135024091
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_JoinSession_AsyncFunction_JoinSIKSessions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_JoinSession_AsyncFunction_eventJoinSIKSessions_Parms, ReturnValue), Z_Construct_UClass_USIK_JoinSession_AsyncFunction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_JoinSession_AsyncFunction_JoinSIKSessions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_JoinSession_AsyncFunction_JoinSIKSessions_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_JoinSession_AsyncFunction_JoinSIKSessions_Statics::NewProp_SessionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_JoinSession_AsyncFunction_JoinSIKSessions_Statics::NewProp_SessionToJoin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_JoinSession_AsyncFunction_JoinSIKSessions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_JoinSession_AsyncFunction_JoinSIKSessions_Statics::PropPointers) < 2048);
// ********** End Function JoinSIKSessions Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_JoinSession_AsyncFunction_JoinSIKSessions_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_JoinSession_AsyncFunction, nullptr, "JoinSIKSessions", 	Z_Construct_UFunction_USIK_JoinSession_AsyncFunction_JoinSIKSessions_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_JoinSession_AsyncFunction_JoinSIKSessions_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_JoinSession_AsyncFunction_JoinSIKSessions_Statics::SIK_JoinSession_AsyncFunction_eventJoinSIKSessions_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_JoinSession_AsyncFunction_JoinSIKSessions_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_JoinSession_AsyncFunction_JoinSIKSessions_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_JoinSession_AsyncFunction_JoinSIKSessions_Statics::SIK_JoinSession_AsyncFunction_eventJoinSIKSessions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_JoinSession_AsyncFunction_JoinSIKSessions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_JoinSession_AsyncFunction_JoinSIKSessions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_JoinSession_AsyncFunction::execJoinSIKSessions)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FNameProperty,Z_Param_SessionName);
	P_GET_STRUCT(FSSessionFindStruct,Z_Param_SessionToJoin);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_JoinSession_AsyncFunction**)Z_Param__Result=USIK_JoinSession_AsyncFunction::JoinSIKSessions(Z_Param_WorldContextObject,Z_Param_SessionName,Z_Param_SessionToJoin);
	P_NATIVE_END;
}
// ********** End Class USIK_JoinSession_AsyncFunction Function JoinSIKSessions ********************

// ********** Begin Class USIK_JoinSession_AsyncFunction *******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_JoinSession_AsyncFunction;
UClass* USIK_JoinSession_AsyncFunction::GetPrivateStaticClass()
{
	using TClass = USIK_JoinSession_AsyncFunction;
	if (!Z_Registration_Info_UClass_USIK_JoinSession_AsyncFunction.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_JoinSession_AsyncFunction"),
			Z_Registration_Info_UClass_USIK_JoinSession_AsyncFunction.InnerSingleton,
			StaticRegisterNativesUSIK_JoinSession_AsyncFunction,
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
	return Z_Registration_Info_UClass_USIK_JoinSession_AsyncFunction.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_JoinSession_AsyncFunction_NoRegister()
{
	return USIK_JoinSession_AsyncFunction::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_JoinSession_AsyncFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/Sessions/SIK_JoinSession_AsyncFunction.h" },
		{ "ModuleRelativePath", "Functions/Sessions/SIK_JoinSession_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "DisplayName", "Success" },
		{ "ModuleRelativePath", "Functions/Sessions/SIK_JoinSession_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFail_MetaData[] = {
		{ "DisplayName", "Failure" },
		{ "ModuleRelativePath", "Functions/Sessions/SIK_JoinSession_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Var_WorldContextObject_MetaData[] = {
		{ "ModuleRelativePath", "Functions/Sessions/SIK_JoinSession_AsyncFunction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_JoinSession_AsyncFunction constinit property declarations ***********
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFail;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Var_WorldContextObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USIK_JoinSession_AsyncFunction constinit property declarations *************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("JoinSIKSessions"), .Pointer = &USIK_JoinSession_AsyncFunction::execJoinSIKSessions },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_JoinSession_AsyncFunction_JoinSIKSessions, "JoinSIKSessions" }, // 3431140295
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_JoinSession_AsyncFunction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_JoinSession_AsyncFunction_Statics

// ********** Begin Class USIK_JoinSession_AsyncFunction Property Definitions **********************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_JoinSession_AsyncFunction_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_JoinSession_AsyncFunction, OnSuccess), Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_JoinSession_Delegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 3179582367
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_JoinSession_AsyncFunction_Statics::NewProp_OnFail = { "OnFail", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_JoinSession_AsyncFunction, OnFail), Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_JoinSession_Delegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFail_MetaData), NewProp_OnFail_MetaData) }; // 3179582367
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USIK_JoinSession_AsyncFunction_Statics::NewProp_Var_WorldContextObject = { "Var_WorldContextObject", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_JoinSession_AsyncFunction, Var_WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Var_WorldContextObject_MetaData), NewProp_Var_WorldContextObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USIK_JoinSession_AsyncFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_JoinSession_AsyncFunction_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_JoinSession_AsyncFunction_Statics::NewProp_OnFail,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_JoinSession_AsyncFunction_Statics::NewProp_Var_WorldContextObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_JoinSession_AsyncFunction_Statics::PropPointers) < 2048);
// ********** End Class USIK_JoinSession_AsyncFunction Property Definitions ************************
UObject* (*const Z_Construct_UClass_USIK_JoinSession_AsyncFunction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_JoinSession_AsyncFunction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_JoinSession_AsyncFunction_Statics::ClassParams = {
	&USIK_JoinSession_AsyncFunction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USIK_JoinSession_AsyncFunction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USIK_JoinSession_AsyncFunction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_JoinSession_AsyncFunction_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_JoinSession_AsyncFunction_Statics::Class_MetaDataParams)
};
void USIK_JoinSession_AsyncFunction::StaticRegisterNativesUSIK_JoinSession_AsyncFunction()
{
	UClass* Class = USIK_JoinSession_AsyncFunction::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_JoinSession_AsyncFunction_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_JoinSession_AsyncFunction()
{
	if (!Z_Registration_Info_UClass_USIK_JoinSession_AsyncFunction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_JoinSession_AsyncFunction.OuterSingleton, Z_Construct_UClass_USIK_JoinSession_AsyncFunction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_JoinSession_AsyncFunction.OuterSingleton;
}
USIK_JoinSession_AsyncFunction::USIK_JoinSession_AsyncFunction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_JoinSession_AsyncFunction);
USIK_JoinSession_AsyncFunction::~USIK_JoinSession_AsyncFunction() {}
// ********** End Class USIK_JoinSession_AsyncFunction *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_JoinSession_AsyncFunction_h__Script_SteamIntegrationKit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESIKJoinResult_StaticEnum, TEXT("ESIKJoinResult"), &Z_Registration_Info_UEnum_ESIKJoinResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1653083318U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_JoinSession_AsyncFunction, USIK_JoinSession_AsyncFunction::StaticClass, TEXT("USIK_JoinSession_AsyncFunction"), &Z_Registration_Info_UClass_USIK_JoinSession_AsyncFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_JoinSession_AsyncFunction), 1496704005U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_JoinSession_AsyncFunction_h__Script_SteamIntegrationKit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_JoinSession_AsyncFunction_h__Script_SteamIntegrationKit_3946505936{
	TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_JoinSession_AsyncFunction_h__Script_SteamIntegrationKit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_JoinSession_AsyncFunction_h__Script_SteamIntegrationKit_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_JoinSession_AsyncFunction_h__Script_SteamIntegrationKit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_JoinSession_AsyncFunction_h__Script_SteamIntegrationKit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
