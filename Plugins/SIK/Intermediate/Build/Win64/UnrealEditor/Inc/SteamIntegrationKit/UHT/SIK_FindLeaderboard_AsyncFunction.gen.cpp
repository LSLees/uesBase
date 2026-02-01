// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/UserStats/SIK_FindLeaderboard_AsyncFunction.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_FindLeaderboard_AsyncFunction() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_FindLeaderboard_AsyncFunction();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_FindLeaderboard_AsyncFunction_NoRegister();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_FindLeaderboard_Delegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FFindLeaderboard_Delegate *********************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_FindLeaderboard_Delegate__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventFindLeaderboard_Delegate_Parms
	{
		int32 LeaderboardID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/UserStats/SIK_FindLeaderboard_AsyncFunction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FFindLeaderboard_Delegate constinit property declarations *************
	static const UECodeGen_Private::FIntPropertyParams NewProp_LeaderboardID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FFindLeaderboard_Delegate constinit property declarations ***************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FFindLeaderboard_Delegate Property Definitions ************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_FindLeaderboard_Delegate__DelegateSignature_Statics::NewProp_LeaderboardID = { "LeaderboardID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventFindLeaderboard_Delegate_Parms, LeaderboardID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_FindLeaderboard_Delegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_FindLeaderboard_Delegate__DelegateSignature_Statics::NewProp_LeaderboardID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_FindLeaderboard_Delegate__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FFindLeaderboard_Delegate Property Definitions **************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_FindLeaderboard_Delegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "FindLeaderboard_Delegate__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_FindLeaderboard_Delegate__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_FindLeaderboard_Delegate__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_FindLeaderboard_Delegate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventFindLeaderboard_Delegate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_FindLeaderboard_Delegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_FindLeaderboard_Delegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_FindLeaderboard_Delegate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventFindLeaderboard_Delegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_FindLeaderboard_Delegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_FindLeaderboard_Delegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FFindLeaderboard_Delegate_DelegateWrapper(const FMulticastScriptDelegate& FindLeaderboard_Delegate, int32 LeaderboardID)
{
	struct _Script_SteamIntegrationKit_eventFindLeaderboard_Delegate_Parms
	{
		int32 LeaderboardID;
	};
	_Script_SteamIntegrationKit_eventFindLeaderboard_Delegate_Parms Parms;
	Parms.LeaderboardID=LeaderboardID;
	FindLeaderboard_Delegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FFindLeaderboard_Delegate ***********************************************

// ********** Begin Class USIK_FindLeaderboard_AsyncFunction Function FindLeaderboard **************
struct Z_Construct_UFunction_USIK_FindLeaderboard_AsyncFunction_FindLeaderboard_Statics
{
	struct SIK_FindLeaderboard_AsyncFunction_eventFindLeaderboard_Parms
	{
		FString LeaderboardName;
		USIK_FindLeaderboard_AsyncFunction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit || SDK Functions || User Stats" },
		{ "DisplayName", "Find Steam Leaderboard" },
		{ "ModuleRelativePath", "Functions/UserStats/SIK_FindLeaderboard_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeaderboardName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function FindLeaderboard constinit property declarations ***********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_LeaderboardName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FindLeaderboard constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FindLeaderboard Property Definitions **********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_FindLeaderboard_AsyncFunction_FindLeaderboard_Statics::NewProp_LeaderboardName = { "LeaderboardName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FindLeaderboard_AsyncFunction_eventFindLeaderboard_Parms, LeaderboardName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeaderboardName_MetaData), NewProp_LeaderboardName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_FindLeaderboard_AsyncFunction_FindLeaderboard_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FindLeaderboard_AsyncFunction_eventFindLeaderboard_Parms, ReturnValue), Z_Construct_UClass_USIK_FindLeaderboard_AsyncFunction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_FindLeaderboard_AsyncFunction_FindLeaderboard_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FindLeaderboard_AsyncFunction_FindLeaderboard_Statics::NewProp_LeaderboardName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FindLeaderboard_AsyncFunction_FindLeaderboard_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FindLeaderboard_AsyncFunction_FindLeaderboard_Statics::PropPointers) < 2048);
// ********** End Function FindLeaderboard Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_FindLeaderboard_AsyncFunction_FindLeaderboard_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_FindLeaderboard_AsyncFunction, nullptr, "FindLeaderboard", 	Z_Construct_UFunction_USIK_FindLeaderboard_AsyncFunction_FindLeaderboard_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FindLeaderboard_AsyncFunction_FindLeaderboard_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_FindLeaderboard_AsyncFunction_FindLeaderboard_Statics::SIK_FindLeaderboard_AsyncFunction_eventFindLeaderboard_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FindLeaderboard_AsyncFunction_FindLeaderboard_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_FindLeaderboard_AsyncFunction_FindLeaderboard_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_FindLeaderboard_AsyncFunction_FindLeaderboard_Statics::SIK_FindLeaderboard_AsyncFunction_eventFindLeaderboard_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_FindLeaderboard_AsyncFunction_FindLeaderboard()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_FindLeaderboard_AsyncFunction_FindLeaderboard_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_FindLeaderboard_AsyncFunction::execFindLeaderboard)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_LeaderboardName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_FindLeaderboard_AsyncFunction**)Z_Param__Result=USIK_FindLeaderboard_AsyncFunction::FindLeaderboard(Z_Param_LeaderboardName);
	P_NATIVE_END;
}
// ********** End Class USIK_FindLeaderboard_AsyncFunction Function FindLeaderboard ****************

// ********** Begin Class USIK_FindLeaderboard_AsyncFunction ***************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_FindLeaderboard_AsyncFunction;
UClass* USIK_FindLeaderboard_AsyncFunction::GetPrivateStaticClass()
{
	using TClass = USIK_FindLeaderboard_AsyncFunction;
	if (!Z_Registration_Info_UClass_USIK_FindLeaderboard_AsyncFunction.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_FindLeaderboard_AsyncFunction"),
			Z_Registration_Info_UClass_USIK_FindLeaderboard_AsyncFunction.InnerSingleton,
			StaticRegisterNativesUSIK_FindLeaderboard_AsyncFunction,
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
	return Z_Registration_Info_UClass_USIK_FindLeaderboard_AsyncFunction.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_FindLeaderboard_AsyncFunction_NoRegister()
{
	return USIK_FindLeaderboard_AsyncFunction::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_FindLeaderboard_AsyncFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Functions/UserStats/SIK_FindLeaderboard_AsyncFunction.h" },
		{ "ModuleRelativePath", "Functions/UserStats/SIK_FindLeaderboard_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Functions/UserStats/SIK_FindLeaderboard_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Functions/UserStats/SIK_FindLeaderboard_AsyncFunction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_FindLeaderboard_AsyncFunction constinit property declarations *******
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USIK_FindLeaderboard_AsyncFunction constinit property declarations *********
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("FindLeaderboard"), .Pointer = &USIK_FindLeaderboard_AsyncFunction::execFindLeaderboard },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_FindLeaderboard_AsyncFunction_FindLeaderboard, "FindLeaderboard" }, // 2173254316
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_FindLeaderboard_AsyncFunction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_FindLeaderboard_AsyncFunction_Statics

// ********** Begin Class USIK_FindLeaderboard_AsyncFunction Property Definitions ******************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_FindLeaderboard_AsyncFunction_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_FindLeaderboard_AsyncFunction, OnSuccess), Z_Construct_UDelegateFunction_SteamIntegrationKit_FindLeaderboard_Delegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 454620916
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_FindLeaderboard_AsyncFunction_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_FindLeaderboard_AsyncFunction, OnFailure), Z_Construct_UDelegateFunction_SteamIntegrationKit_FindLeaderboard_Delegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 454620916
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USIK_FindLeaderboard_AsyncFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_FindLeaderboard_AsyncFunction_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_FindLeaderboard_AsyncFunction_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_FindLeaderboard_AsyncFunction_Statics::PropPointers) < 2048);
// ********** End Class USIK_FindLeaderboard_AsyncFunction Property Definitions ********************
UObject* (*const Z_Construct_UClass_USIK_FindLeaderboard_AsyncFunction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_FindLeaderboard_AsyncFunction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_FindLeaderboard_AsyncFunction_Statics::ClassParams = {
	&USIK_FindLeaderboard_AsyncFunction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USIK_FindLeaderboard_AsyncFunction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USIK_FindLeaderboard_AsyncFunction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_FindLeaderboard_AsyncFunction_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_FindLeaderboard_AsyncFunction_Statics::Class_MetaDataParams)
};
void USIK_FindLeaderboard_AsyncFunction::StaticRegisterNativesUSIK_FindLeaderboard_AsyncFunction()
{
	UClass* Class = USIK_FindLeaderboard_AsyncFunction::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_FindLeaderboard_AsyncFunction_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_FindLeaderboard_AsyncFunction()
{
	if (!Z_Registration_Info_UClass_USIK_FindLeaderboard_AsyncFunction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_FindLeaderboard_AsyncFunction.OuterSingleton, Z_Construct_UClass_USIK_FindLeaderboard_AsyncFunction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_FindLeaderboard_AsyncFunction.OuterSingleton;
}
USIK_FindLeaderboard_AsyncFunction::USIK_FindLeaderboard_AsyncFunction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_FindLeaderboard_AsyncFunction);
USIK_FindLeaderboard_AsyncFunction::~USIK_FindLeaderboard_AsyncFunction() {}
// ********** End Class USIK_FindLeaderboard_AsyncFunction *****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_FindLeaderboard_AsyncFunction_h__Script_SteamIntegrationKit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_FindLeaderboard_AsyncFunction, USIK_FindLeaderboard_AsyncFunction::StaticClass, TEXT("USIK_FindLeaderboard_AsyncFunction"), &Z_Registration_Info_UClass_USIK_FindLeaderboard_AsyncFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_FindLeaderboard_AsyncFunction), 2123046521U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_FindLeaderboard_AsyncFunction_h__Script_SteamIntegrationKit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_FindLeaderboard_AsyncFunction_h__Script_SteamIntegrationKit_3216753969{
	TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_FindLeaderboard_AsyncFunction_h__Script_SteamIntegrationKit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_FindLeaderboard_AsyncFunction_h__Script_SteamIntegrationKit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
