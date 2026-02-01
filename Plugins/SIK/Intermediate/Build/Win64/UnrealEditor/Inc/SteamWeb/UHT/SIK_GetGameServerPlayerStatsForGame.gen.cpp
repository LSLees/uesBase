// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/GameServerStats/SIK_GetGameServerPlayerStatsForGame.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_GetGameServerPlayerStatsForGame() {}

// ********** Begin Cross Module References ********************************************************
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetGameServerPlayerStatsForGame();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetGameServerPlayerStatsForGame_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USIK_GetGameServerPlayerStatsForGame Function GetGameServerPlayerStatsForGame 
struct Z_Construct_UFunction_USIK_GetGameServerPlayerStatsForGame_GetGameServerPlayerStatsForGame_Statics
{
	struct SIK_GetGameServerPlayerStatsForGame_eventGetGameServerPlayerStatsForGame_Parms
	{
		FString Key;
		int64 GameId;
		int32 AppId;
		FString RangeStart;
		FString RangeEnd;
		int32 MaxResults;
		USIK_GetGameServerPlayerStatsForGame* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|GameServerStats" },
		{ "CPP_Default_MaxResults", "-1" },
		{ "ModuleRelativePath", "Functions/GameServerStats/SIK_GetGameServerPlayerStatsForGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RangeStart_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RangeEnd_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxResults_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetGameServerPlayerStatsForGame constinit property declarations *******
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_GameId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RangeStart;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RangeEnd;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxResults;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetGameServerPlayerStatsForGame constinit property declarations *********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetGameServerPlayerStatsForGame Property Definitions ******************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_GetGameServerPlayerStatsForGame_GetGameServerPlayerStatsForGame_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetGameServerPlayerStatsForGame_eventGetGameServerPlayerStatsForGame_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_GetGameServerPlayerStatsForGame_GetGameServerPlayerStatsForGame_Statics::NewProp_GameId = { "GameId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetGameServerPlayerStatsForGame_eventGetGameServerPlayerStatsForGame_Parms, GameId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameId_MetaData), NewProp_GameId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_GetGameServerPlayerStatsForGame_GetGameServerPlayerStatsForGame_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetGameServerPlayerStatsForGame_eventGetGameServerPlayerStatsForGame_Parms, AppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppId_MetaData), NewProp_AppId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_GetGameServerPlayerStatsForGame_GetGameServerPlayerStatsForGame_Statics::NewProp_RangeStart = { "RangeStart", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetGameServerPlayerStatsForGame_eventGetGameServerPlayerStatsForGame_Parms, RangeStart), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RangeStart_MetaData), NewProp_RangeStart_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_GetGameServerPlayerStatsForGame_GetGameServerPlayerStatsForGame_Statics::NewProp_RangeEnd = { "RangeEnd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetGameServerPlayerStatsForGame_eventGetGameServerPlayerStatsForGame_Parms, RangeEnd), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RangeEnd_MetaData), NewProp_RangeEnd_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_GetGameServerPlayerStatsForGame_GetGameServerPlayerStatsForGame_Statics::NewProp_MaxResults = { "MaxResults", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetGameServerPlayerStatsForGame_eventGetGameServerPlayerStatsForGame_Parms, MaxResults), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxResults_MetaData), NewProp_MaxResults_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_GetGameServerPlayerStatsForGame_GetGameServerPlayerStatsForGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetGameServerPlayerStatsForGame_eventGetGameServerPlayerStatsForGame_Parms, ReturnValue), Z_Construct_UClass_USIK_GetGameServerPlayerStatsForGame_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GetGameServerPlayerStatsForGame_GetGameServerPlayerStatsForGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetGameServerPlayerStatsForGame_GetGameServerPlayerStatsForGame_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetGameServerPlayerStatsForGame_GetGameServerPlayerStatsForGame_Statics::NewProp_GameId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetGameServerPlayerStatsForGame_GetGameServerPlayerStatsForGame_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetGameServerPlayerStatsForGame_GetGameServerPlayerStatsForGame_Statics::NewProp_RangeStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetGameServerPlayerStatsForGame_GetGameServerPlayerStatsForGame_Statics::NewProp_RangeEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetGameServerPlayerStatsForGame_GetGameServerPlayerStatsForGame_Statics::NewProp_MaxResults,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetGameServerPlayerStatsForGame_GetGameServerPlayerStatsForGame_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetGameServerPlayerStatsForGame_GetGameServerPlayerStatsForGame_Statics::PropPointers) < 2048);
// ********** End Function GetGameServerPlayerStatsForGame Property Definitions ********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GetGameServerPlayerStatsForGame_GetGameServerPlayerStatsForGame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_GetGameServerPlayerStatsForGame, nullptr, "GetGameServerPlayerStatsForGame", 	Z_Construct_UFunction_USIK_GetGameServerPlayerStatsForGame_GetGameServerPlayerStatsForGame_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetGameServerPlayerStatsForGame_GetGameServerPlayerStatsForGame_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_GetGameServerPlayerStatsForGame_GetGameServerPlayerStatsForGame_Statics::SIK_GetGameServerPlayerStatsForGame_eventGetGameServerPlayerStatsForGame_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetGameServerPlayerStatsForGame_GetGameServerPlayerStatsForGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GetGameServerPlayerStatsForGame_GetGameServerPlayerStatsForGame_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_GetGameServerPlayerStatsForGame_GetGameServerPlayerStatsForGame_Statics::SIK_GetGameServerPlayerStatsForGame_eventGetGameServerPlayerStatsForGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GetGameServerPlayerStatsForGame_GetGameServerPlayerStatsForGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GetGameServerPlayerStatsForGame_GetGameServerPlayerStatsForGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GetGameServerPlayerStatsForGame::execGetGameServerPlayerStatsForGame)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_GameId);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_RangeStart);
	P_GET_PROPERTY(FStrProperty,Z_Param_RangeEnd);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_MaxResults);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_GetGameServerPlayerStatsForGame**)Z_Param__Result=USIK_GetGameServerPlayerStatsForGame::GetGameServerPlayerStatsForGame(Z_Param_Key,Z_Param_Out_GameId,Z_Param_Out_AppId,Z_Param_RangeStart,Z_Param_RangeEnd,Z_Param_Out_MaxResults);
	P_NATIVE_END;
}
// ********** End Class USIK_GetGameServerPlayerStatsForGame Function GetGameServerPlayerStatsForGame 

// ********** Begin Class USIK_GetGameServerPlayerStatsForGame *************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_GetGameServerPlayerStatsForGame;
UClass* USIK_GetGameServerPlayerStatsForGame::GetPrivateStaticClass()
{
	using TClass = USIK_GetGameServerPlayerStatsForGame;
	if (!Z_Registration_Info_UClass_USIK_GetGameServerPlayerStatsForGame.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_GetGameServerPlayerStatsForGame"),
			Z_Registration_Info_UClass_USIK_GetGameServerPlayerStatsForGame.InnerSingleton,
			StaticRegisterNativesUSIK_GetGameServerPlayerStatsForGame,
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
	return Z_Registration_Info_UClass_USIK_GetGameServerPlayerStatsForGame.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_GetGameServerPlayerStatsForGame_NoRegister()
{
	return USIK_GetGameServerPlayerStatsForGame::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_GetGameServerPlayerStatsForGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/GameServerStats/SIK_GetGameServerPlayerStatsForGame.h" },
		{ "ModuleRelativePath", "Functions/GameServerStats/SIK_GetGameServerPlayerStatsForGame.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_GetGameServerPlayerStatsForGame constinit property declarations *****
// ********** End Class USIK_GetGameServerPlayerStatsForGame constinit property declarations *******
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetGameServerPlayerStatsForGame"), .Pointer = &USIK_GetGameServerPlayerStatsForGame::execGetGameServerPlayerStatsForGame },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_GetGameServerPlayerStatsForGame_GetGameServerPlayerStatsForGame, "GetGameServerPlayerStatsForGame" }, // 2536340767
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_GetGameServerPlayerStatsForGame>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_GetGameServerPlayerStatsForGame_Statics
UObject* (*const Z_Construct_UClass_USIK_GetGameServerPlayerStatsForGame_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetGameServerPlayerStatsForGame_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_GetGameServerPlayerStatsForGame_Statics::ClassParams = {
	&USIK_GetGameServerPlayerStatsForGame::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetGameServerPlayerStatsForGame_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_GetGameServerPlayerStatsForGame_Statics::Class_MetaDataParams)
};
void USIK_GetGameServerPlayerStatsForGame::StaticRegisterNativesUSIK_GetGameServerPlayerStatsForGame()
{
	UClass* Class = USIK_GetGameServerPlayerStatsForGame::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_GetGameServerPlayerStatsForGame_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_GetGameServerPlayerStatsForGame()
{
	if (!Z_Registration_Info_UClass_USIK_GetGameServerPlayerStatsForGame.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_GetGameServerPlayerStatsForGame.OuterSingleton, Z_Construct_UClass_USIK_GetGameServerPlayerStatsForGame_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_GetGameServerPlayerStatsForGame.OuterSingleton;
}
USIK_GetGameServerPlayerStatsForGame::USIK_GetGameServerPlayerStatsForGame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_GetGameServerPlayerStatsForGame);
USIK_GetGameServerPlayerStatsForGame::~USIK_GetGameServerPlayerStatsForGame() {}
// ********** End Class USIK_GetGameServerPlayerStatsForGame ***************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameServerStats_SIK_GetGameServerPlayerStatsForGame_h__Script_SteamWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_GetGameServerPlayerStatsForGame, USIK_GetGameServerPlayerStatsForGame::StaticClass, TEXT("USIK_GetGameServerPlayerStatsForGame"), &Z_Registration_Info_UClass_USIK_GetGameServerPlayerStatsForGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_GetGameServerPlayerStatsForGame), 3965893837U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameServerStats_SIK_GetGameServerPlayerStatsForGame_h__Script_SteamWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameServerStats_SIK_GetGameServerPlayerStatsForGame_h__Script_SteamWeb_250400740{
	TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameServerStats_SIK_GetGameServerPlayerStatsForGame_h__Script_SteamWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameServerStats_SIK_GetGameServerPlayerStatsForGame_h__Script_SteamWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
