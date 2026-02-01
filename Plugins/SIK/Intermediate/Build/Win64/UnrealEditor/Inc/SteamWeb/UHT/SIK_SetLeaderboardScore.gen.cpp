// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/Leaderboards/SIK_SetLeaderboardScore.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_SetLeaderboardScore() {}

// ********** Begin Cross Module References ********************************************************
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_SetLeaderboardScore();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_SetLeaderboardScore_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USIK_SetLeaderboardScore Function SetLeaderboardScore ********************
struct Z_Construct_UFunction_USIK_SetLeaderboardScore_SetLeaderboardScore_Statics
{
	struct SIK_SetLeaderboardScore_eventSetLeaderboardScore_Parms
	{
		FString Key;
		int32 AppId;
		int32 LeaderboardId;
		int64 SteamId;
		int32 Score;
		FString ScoreMethod;
		TArray<uint8> Details;
		USIK_SetLeaderboardScore* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|Leaderboards" },
		{ "ModuleRelativePath", "Functions/Leaderboards/SIK_SetLeaderboardScore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeaderboardId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Score_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScoreMethod_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Details_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetLeaderboardScore constinit property declarations *******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LeaderboardId;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Score;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ScoreMethod;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Details_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Details;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetLeaderboardScore constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetLeaderboardScore Property Definitions ******************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_SetLeaderboardScore_SetLeaderboardScore_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_SetLeaderboardScore_eventSetLeaderboardScore_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_SetLeaderboardScore_SetLeaderboardScore_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_SetLeaderboardScore_eventSetLeaderboardScore_Parms, AppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppId_MetaData), NewProp_AppId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_SetLeaderboardScore_SetLeaderboardScore_Statics::NewProp_LeaderboardId = { "LeaderboardId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_SetLeaderboardScore_eventSetLeaderboardScore_Parms, LeaderboardId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeaderboardId_MetaData), NewProp_LeaderboardId_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_SetLeaderboardScore_SetLeaderboardScore_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_SetLeaderboardScore_eventSetLeaderboardScore_Parms, SteamId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamId_MetaData), NewProp_SteamId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_SetLeaderboardScore_SetLeaderboardScore_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_SetLeaderboardScore_eventSetLeaderboardScore_Parms, Score), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Score_MetaData), NewProp_Score_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_SetLeaderboardScore_SetLeaderboardScore_Statics::NewProp_ScoreMethod = { "ScoreMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_SetLeaderboardScore_eventSetLeaderboardScore_Parms, ScoreMethod), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScoreMethod_MetaData), NewProp_ScoreMethod_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_SetLeaderboardScore_SetLeaderboardScore_Statics::NewProp_Details_Inner = { "Details", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_SetLeaderboardScore_SetLeaderboardScore_Statics::NewProp_Details = { "Details", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_SetLeaderboardScore_eventSetLeaderboardScore_Parms, Details), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Details_MetaData), NewProp_Details_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_SetLeaderboardScore_SetLeaderboardScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_SetLeaderboardScore_eventSetLeaderboardScore_Parms, ReturnValue), Z_Construct_UClass_USIK_SetLeaderboardScore_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_SetLeaderboardScore_SetLeaderboardScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SetLeaderboardScore_SetLeaderboardScore_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SetLeaderboardScore_SetLeaderboardScore_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SetLeaderboardScore_SetLeaderboardScore_Statics::NewProp_LeaderboardId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SetLeaderboardScore_SetLeaderboardScore_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SetLeaderboardScore_SetLeaderboardScore_Statics::NewProp_Score,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SetLeaderboardScore_SetLeaderboardScore_Statics::NewProp_ScoreMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SetLeaderboardScore_SetLeaderboardScore_Statics::NewProp_Details_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SetLeaderboardScore_SetLeaderboardScore_Statics::NewProp_Details,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SetLeaderboardScore_SetLeaderboardScore_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SetLeaderboardScore_SetLeaderboardScore_Statics::PropPointers) < 2048);
// ********** End Function SetLeaderboardScore Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_SetLeaderboardScore_SetLeaderboardScore_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_SetLeaderboardScore, nullptr, "SetLeaderboardScore", 	Z_Construct_UFunction_USIK_SetLeaderboardScore_SetLeaderboardScore_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SetLeaderboardScore_SetLeaderboardScore_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_SetLeaderboardScore_SetLeaderboardScore_Statics::SIK_SetLeaderboardScore_eventSetLeaderboardScore_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SetLeaderboardScore_SetLeaderboardScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_SetLeaderboardScore_SetLeaderboardScore_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_SetLeaderboardScore_SetLeaderboardScore_Statics::SIK_SetLeaderboardScore_eventSetLeaderboardScore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_SetLeaderboardScore_SetLeaderboardScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_SetLeaderboardScore_SetLeaderboardScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_SetLeaderboardScore::execSetLeaderboardScore)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppId);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_LeaderboardId);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_SteamId);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Score);
	P_GET_PROPERTY(FStrProperty,Z_Param_ScoreMethod);
	P_GET_TARRAY_REF(uint8,Z_Param_Out_Details);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_SetLeaderboardScore**)Z_Param__Result=USIK_SetLeaderboardScore::SetLeaderboardScore(Z_Param_Key,Z_Param_Out_AppId,Z_Param_Out_LeaderboardId,Z_Param_Out_SteamId,Z_Param_Out_Score,Z_Param_ScoreMethod,Z_Param_Out_Details);
	P_NATIVE_END;
}
// ********** End Class USIK_SetLeaderboardScore Function SetLeaderboardScore **********************

// ********** Begin Class USIK_SetLeaderboardScore *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_SetLeaderboardScore;
UClass* USIK_SetLeaderboardScore::GetPrivateStaticClass()
{
	using TClass = USIK_SetLeaderboardScore;
	if (!Z_Registration_Info_UClass_USIK_SetLeaderboardScore.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_SetLeaderboardScore"),
			Z_Registration_Info_UClass_USIK_SetLeaderboardScore.InnerSingleton,
			StaticRegisterNativesUSIK_SetLeaderboardScore,
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
	return Z_Registration_Info_UClass_USIK_SetLeaderboardScore.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_SetLeaderboardScore_NoRegister()
{
	return USIK_SetLeaderboardScore::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_SetLeaderboardScore_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/Leaderboards/SIK_SetLeaderboardScore.h" },
		{ "ModuleRelativePath", "Functions/Leaderboards/SIK_SetLeaderboardScore.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_SetLeaderboardScore constinit property declarations *****************
// ********** End Class USIK_SetLeaderboardScore constinit property declarations *******************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("SetLeaderboardScore"), .Pointer = &USIK_SetLeaderboardScore::execSetLeaderboardScore },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_SetLeaderboardScore_SetLeaderboardScore, "SetLeaderboardScore" }, // 26871820
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_SetLeaderboardScore>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_SetLeaderboardScore_Statics
UObject* (*const Z_Construct_UClass_USIK_SetLeaderboardScore_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_SetLeaderboardScore_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_SetLeaderboardScore_Statics::ClassParams = {
	&USIK_SetLeaderboardScore::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_SetLeaderboardScore_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_SetLeaderboardScore_Statics::Class_MetaDataParams)
};
void USIK_SetLeaderboardScore::StaticRegisterNativesUSIK_SetLeaderboardScore()
{
	UClass* Class = USIK_SetLeaderboardScore::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_SetLeaderboardScore_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_SetLeaderboardScore()
{
	if (!Z_Registration_Info_UClass_USIK_SetLeaderboardScore.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_SetLeaderboardScore.OuterSingleton, Z_Construct_UClass_USIK_SetLeaderboardScore_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_SetLeaderboardScore.OuterSingleton;
}
USIK_SetLeaderboardScore::USIK_SetLeaderboardScore(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_SetLeaderboardScore);
USIK_SetLeaderboardScore::~USIK_SetLeaderboardScore() {}
// ********** End Class USIK_SetLeaderboardScore ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Leaderboards_SIK_SetLeaderboardScore_h__Script_SteamWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_SetLeaderboardScore, USIK_SetLeaderboardScore::StaticClass, TEXT("USIK_SetLeaderboardScore"), &Z_Registration_Info_UClass_USIK_SetLeaderboardScore, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_SetLeaderboardScore), 2690431490U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Leaderboards_SIK_SetLeaderboardScore_h__Script_SteamWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Leaderboards_SIK_SetLeaderboardScore_h__Script_SteamWeb_3883980740{
	TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Leaderboards_SIK_SetLeaderboardScore_h__Script_SteamWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Leaderboards_SIK_SetLeaderboardScore_h__Script_SteamWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
