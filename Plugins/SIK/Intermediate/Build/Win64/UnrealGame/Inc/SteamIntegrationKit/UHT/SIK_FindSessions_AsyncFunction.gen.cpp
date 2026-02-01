// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/Sessions/SIK_FindSessions_AsyncFunction.h"
#include "SIK_SharedFile.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_FindSessions_AsyncFunction() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_FindSessions_AsyncFunction();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_FindSessions_AsyncFunction_NoRegister();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESMatchType();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_FindSession_Delegate__DelegateSignature();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIKAttribute();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSSessionFindStruct();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FSIK_FindSession_Delegate *********************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_FindSession_Delegate__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventSIK_FindSession_Delegate_Parms
	{
		TArray<FSSessionFindStruct> SessionResults;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/Sessions/SIK_FindSessions_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SessionResults_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FSIK_FindSession_Delegate constinit property declarations *************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SessionResults_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SessionResults;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FSIK_FindSession_Delegate constinit property declarations ***************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FSIK_FindSession_Delegate Property Definitions ************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_FindSession_Delegate__DelegateSignature_Statics::NewProp_SessionResults_Inner = { "SessionResults", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSSessionFindStruct, METADATA_PARAMS(0, nullptr) }; // 3135024091
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_FindSession_Delegate__DelegateSignature_Statics::NewProp_SessionResults = { "SessionResults", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventSIK_FindSession_Delegate_Parms, SessionResults), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionResults_MetaData), NewProp_SessionResults_MetaData) }; // 3135024091
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_FindSession_Delegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_FindSession_Delegate__DelegateSignature_Statics::NewProp_SessionResults_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_FindSession_Delegate__DelegateSignature_Statics::NewProp_SessionResults,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_FindSession_Delegate__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FSIK_FindSession_Delegate Property Definitions **************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_FindSession_Delegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "SIK_FindSession_Delegate__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_FindSession_Delegate__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_FindSession_Delegate__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_FindSession_Delegate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventSIK_FindSession_Delegate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_FindSession_Delegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_FindSession_Delegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_FindSession_Delegate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventSIK_FindSession_Delegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_FindSession_Delegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_FindSession_Delegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSIK_FindSession_Delegate_DelegateWrapper(const FMulticastScriptDelegate& SIK_FindSession_Delegate, TArray<FSSessionFindStruct> const& SessionResults)
{
	struct _Script_SteamIntegrationKit_eventSIK_FindSession_Delegate_Parms
	{
		TArray<FSSessionFindStruct> SessionResults;
	};
	_Script_SteamIntegrationKit_eventSIK_FindSession_Delegate_Parms Parms;
	Parms.SessionResults=SessionResults;
	SIK_FindSession_Delegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FSIK_FindSession_Delegate ***********************************************

// ********** Begin Class USIK_FindSessions_AsyncFunction Function FindSIKSessions *****************
struct Z_Construct_UFunction_USIK_FindSessions_AsyncFunction_FindSIKSessions_Statics
{
	struct SIK_FindSessions_AsyncFunction_eventFindSIKSessions_Parms
	{
		TMap<FName,FSIKAttribute> SessionSettings;
		ESMatchType MatchType;
		int32 MaxResults;
		bool bLanSearch;
		bool bEmptyServerOnly;
		bool bSecureServerOnly;
		USIK_FindSessions_AsyncFunction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "SessionSettings" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit || Game Functions || Sessions" },
		{ "Comment", "/*\n\x09This C++ method searches for sessions in an online subsystem using the selected method and sets up a callback function to handle the search response.\n\x09""Documentation link: https://betide-studio.gitbook.io/eos-integration-kit/sessions/\n\x09""For Input Parameters, please refer to the documentation link above.\n\x09*/" },
		{ "CPP_Default_bEmptyServerOnly", "false" },
		{ "CPP_Default_bLanSearch", "false" },
		{ "CPP_Default_bSecureServerOnly", "false" },
		{ "CPP_Default_MatchType", "MT_Lobby" },
		{ "CPP_Default_MaxResults", "15" },
		{ "DisplayName", "Find SIK Sessions" },
		{ "ModuleRelativePath", "Functions/Sessions/SIK_FindSessions_AsyncFunction.h" },
		{ "ToolTip", "This C++ method searches for sessions in an online subsystem using the selected method and sets up a callback function to handle the search response.\nDocumentation link: https://betide-studio.gitbook.io/eos-integration-kit/sessions/\nFor Input Parameters, please refer to the documentation link above." },
	};
#endif // WITH_METADATA

// ********** Begin Function FindSIKSessions constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SessionSettings_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SessionSettings_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SessionSettings;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MatchType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MatchType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxResults;
	static void NewProp_bLanSearch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLanSearch;
	static void NewProp_bEmptyServerOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEmptyServerOnly;
	static void NewProp_bSecureServerOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSecureServerOnly;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FindSIKSessions constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FindSIKSessions Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_FindSessions_AsyncFunction_FindSIKSessions_Statics::NewProp_SessionSettings_ValueProp = { "SessionSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FSIKAttribute, METADATA_PARAMS(0, nullptr) }; // 1564803091
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USIK_FindSessions_AsyncFunction_FindSIKSessions_Statics::NewProp_SessionSettings_Key_KeyProp = { "SessionSettings_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_USIK_FindSessions_AsyncFunction_FindSIKSessions_Statics::NewProp_SessionSettings = { "SessionSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FindSessions_AsyncFunction_eventFindSIKSessions_Parms, SessionSettings), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1564803091
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_FindSessions_AsyncFunction_FindSIKSessions_Statics::NewProp_MatchType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USIK_FindSessions_AsyncFunction_FindSIKSessions_Statics::NewProp_MatchType = { "MatchType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FindSessions_AsyncFunction_eventFindSIKSessions_Parms, MatchType), Z_Construct_UEnum_SteamIntegrationKit_ESMatchType, METADATA_PARAMS(0, nullptr) }; // 3314708744
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_FindSessions_AsyncFunction_FindSIKSessions_Statics::NewProp_MaxResults = { "MaxResults", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FindSessions_AsyncFunction_eventFindSIKSessions_Parms, MaxResults), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_FindSessions_AsyncFunction_FindSIKSessions_Statics::NewProp_bLanSearch_SetBit(void* Obj)
{
	((SIK_FindSessions_AsyncFunction_eventFindSIKSessions_Parms*)Obj)->bLanSearch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_FindSessions_AsyncFunction_FindSIKSessions_Statics::NewProp_bLanSearch = { "bLanSearch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_FindSessions_AsyncFunction_eventFindSIKSessions_Parms), &Z_Construct_UFunction_USIK_FindSessions_AsyncFunction_FindSIKSessions_Statics::NewProp_bLanSearch_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_FindSessions_AsyncFunction_FindSIKSessions_Statics::NewProp_bEmptyServerOnly_SetBit(void* Obj)
{
	((SIK_FindSessions_AsyncFunction_eventFindSIKSessions_Parms*)Obj)->bEmptyServerOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_FindSessions_AsyncFunction_FindSIKSessions_Statics::NewProp_bEmptyServerOnly = { "bEmptyServerOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_FindSessions_AsyncFunction_eventFindSIKSessions_Parms), &Z_Construct_UFunction_USIK_FindSessions_AsyncFunction_FindSIKSessions_Statics::NewProp_bEmptyServerOnly_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_FindSessions_AsyncFunction_FindSIKSessions_Statics::NewProp_bSecureServerOnly_SetBit(void* Obj)
{
	((SIK_FindSessions_AsyncFunction_eventFindSIKSessions_Parms*)Obj)->bSecureServerOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_FindSessions_AsyncFunction_FindSIKSessions_Statics::NewProp_bSecureServerOnly = { "bSecureServerOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_FindSessions_AsyncFunction_eventFindSIKSessions_Parms), &Z_Construct_UFunction_USIK_FindSessions_AsyncFunction_FindSIKSessions_Statics::NewProp_bSecureServerOnly_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_FindSessions_AsyncFunction_FindSIKSessions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FindSessions_AsyncFunction_eventFindSIKSessions_Parms, ReturnValue), Z_Construct_UClass_USIK_FindSessions_AsyncFunction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_FindSessions_AsyncFunction_FindSIKSessions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FindSessions_AsyncFunction_FindSIKSessions_Statics::NewProp_SessionSettings_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FindSessions_AsyncFunction_FindSIKSessions_Statics::NewProp_SessionSettings_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FindSessions_AsyncFunction_FindSIKSessions_Statics::NewProp_SessionSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FindSessions_AsyncFunction_FindSIKSessions_Statics::NewProp_MatchType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FindSessions_AsyncFunction_FindSIKSessions_Statics::NewProp_MatchType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FindSessions_AsyncFunction_FindSIKSessions_Statics::NewProp_MaxResults,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FindSessions_AsyncFunction_FindSIKSessions_Statics::NewProp_bLanSearch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FindSessions_AsyncFunction_FindSIKSessions_Statics::NewProp_bEmptyServerOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FindSessions_AsyncFunction_FindSIKSessions_Statics::NewProp_bSecureServerOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FindSessions_AsyncFunction_FindSIKSessions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FindSessions_AsyncFunction_FindSIKSessions_Statics::PropPointers) < 2048);
// ********** End Function FindSIKSessions Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_FindSessions_AsyncFunction_FindSIKSessions_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_FindSessions_AsyncFunction, nullptr, "FindSIKSessions", 	Z_Construct_UFunction_USIK_FindSessions_AsyncFunction_FindSIKSessions_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FindSessions_AsyncFunction_FindSIKSessions_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_FindSessions_AsyncFunction_FindSIKSessions_Statics::SIK_FindSessions_AsyncFunction_eventFindSIKSessions_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FindSessions_AsyncFunction_FindSIKSessions_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_FindSessions_AsyncFunction_FindSIKSessions_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_FindSessions_AsyncFunction_FindSIKSessions_Statics::SIK_FindSessions_AsyncFunction_eventFindSIKSessions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_FindSessions_AsyncFunction_FindSIKSessions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_FindSessions_AsyncFunction_FindSIKSessions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_FindSessions_AsyncFunction::execFindSIKSessions)
{
	P_GET_TMAP(FName,FSIKAttribute,Z_Param_SessionSettings);
	P_GET_ENUM(ESMatchType,Z_Param_MatchType);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxResults);
	P_GET_UBOOL(Z_Param_bLanSearch);
	P_GET_UBOOL(Z_Param_bEmptyServerOnly);
	P_GET_UBOOL(Z_Param_bSecureServerOnly);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_FindSessions_AsyncFunction**)Z_Param__Result=USIK_FindSessions_AsyncFunction::FindSIKSessions(Z_Param_SessionSettings,ESMatchType(Z_Param_MatchType),Z_Param_MaxResults,Z_Param_bLanSearch,Z_Param_bEmptyServerOnly,Z_Param_bSecureServerOnly);
	P_NATIVE_END;
}
// ********** End Class USIK_FindSessions_AsyncFunction Function FindSIKSessions *******************

// ********** Begin Class USIK_FindSessions_AsyncFunction ******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_FindSessions_AsyncFunction;
UClass* USIK_FindSessions_AsyncFunction::GetPrivateStaticClass()
{
	using TClass = USIK_FindSessions_AsyncFunction;
	if (!Z_Registration_Info_UClass_USIK_FindSessions_AsyncFunction.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_FindSessions_AsyncFunction"),
			Z_Registration_Info_UClass_USIK_FindSessions_AsyncFunction.InnerSingleton,
			StaticRegisterNativesUSIK_FindSessions_AsyncFunction,
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
	return Z_Registration_Info_UClass_USIK_FindSessions_AsyncFunction.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_FindSessions_AsyncFunction_NoRegister()
{
	return USIK_FindSessions_AsyncFunction::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_FindSessions_AsyncFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/Sessions/SIK_FindSessions_AsyncFunction.h" },
		{ "ModuleRelativePath", "Functions/Sessions/SIK_FindSessions_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "DisplayName", "Success" },
		{ "ModuleRelativePath", "Functions/Sessions/SIK_FindSessions_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFail_MetaData[] = {
		{ "DisplayName", "Failure" },
		{ "ModuleRelativePath", "Functions/Sessions/SIK_FindSessions_AsyncFunction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_FindSessions_AsyncFunction constinit property declarations **********
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFail;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USIK_FindSessions_AsyncFunction constinit property declarations ************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("FindSIKSessions"), .Pointer = &USIK_FindSessions_AsyncFunction::execFindSIKSessions },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_FindSessions_AsyncFunction_FindSIKSessions, "FindSIKSessions" }, // 1356726322
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_FindSessions_AsyncFunction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_FindSessions_AsyncFunction_Statics

// ********** Begin Class USIK_FindSessions_AsyncFunction Property Definitions *********************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_FindSessions_AsyncFunction_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_FindSessions_AsyncFunction, OnSuccess), Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_FindSession_Delegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 1866676572
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_FindSessions_AsyncFunction_Statics::NewProp_OnFail = { "OnFail", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_FindSessions_AsyncFunction, OnFail), Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_FindSession_Delegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFail_MetaData), NewProp_OnFail_MetaData) }; // 1866676572
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USIK_FindSessions_AsyncFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_FindSessions_AsyncFunction_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_FindSessions_AsyncFunction_Statics::NewProp_OnFail,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_FindSessions_AsyncFunction_Statics::PropPointers) < 2048);
// ********** End Class USIK_FindSessions_AsyncFunction Property Definitions ***********************
UObject* (*const Z_Construct_UClass_USIK_FindSessions_AsyncFunction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_FindSessions_AsyncFunction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_FindSessions_AsyncFunction_Statics::ClassParams = {
	&USIK_FindSessions_AsyncFunction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USIK_FindSessions_AsyncFunction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USIK_FindSessions_AsyncFunction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_FindSessions_AsyncFunction_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_FindSessions_AsyncFunction_Statics::Class_MetaDataParams)
};
void USIK_FindSessions_AsyncFunction::StaticRegisterNativesUSIK_FindSessions_AsyncFunction()
{
	UClass* Class = USIK_FindSessions_AsyncFunction::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_FindSessions_AsyncFunction_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_FindSessions_AsyncFunction()
{
	if (!Z_Registration_Info_UClass_USIK_FindSessions_AsyncFunction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_FindSessions_AsyncFunction.OuterSingleton, Z_Construct_UClass_USIK_FindSessions_AsyncFunction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_FindSessions_AsyncFunction.OuterSingleton;
}
USIK_FindSessions_AsyncFunction::USIK_FindSessions_AsyncFunction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_FindSessions_AsyncFunction);
USIK_FindSessions_AsyncFunction::~USIK_FindSessions_AsyncFunction() {}
// ********** End Class USIK_FindSessions_AsyncFunction ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_FindSessions_AsyncFunction_h__Script_SteamIntegrationKit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_FindSessions_AsyncFunction, USIK_FindSessions_AsyncFunction::StaticClass, TEXT("USIK_FindSessions_AsyncFunction"), &Z_Registration_Info_UClass_USIK_FindSessions_AsyncFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_FindSessions_AsyncFunction), 3138220761U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_FindSessions_AsyncFunction_h__Script_SteamIntegrationKit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_FindSessions_AsyncFunction_h__Script_SteamIntegrationKit_2416213800{
	TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_FindSessions_AsyncFunction_h__Script_SteamIntegrationKit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_FindSessions_AsyncFunction_h__Script_SteamIntegrationKit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
