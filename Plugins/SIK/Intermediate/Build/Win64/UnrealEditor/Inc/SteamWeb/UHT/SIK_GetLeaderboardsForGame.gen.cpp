// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/Leaderboards/SIK_GetLeaderboardsForGame.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_GetLeaderboardsForGame() {}

// ********** Begin Cross Module References ********************************************************
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetLeaderboardsForGame();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetLeaderboardsForGame_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USIK_GetLeaderboardsForGame Function GetLeaderboardsForGame **************
struct Z_Construct_UFunction_USIK_GetLeaderboardsForGame_GetLeaderboardsForGame_Statics
{
	struct SIK_GetLeaderboardsForGame_eventGetLeaderboardsForGame_Parms
	{
		FString Key;
		int32 AppId;
		USIK_GetLeaderboardsForGame* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|Leaderboards" },
		{ "ModuleRelativePath", "Functions/Leaderboards/SIK_GetLeaderboardsForGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetLeaderboardsForGame constinit property declarations ****************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetLeaderboardsForGame constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetLeaderboardsForGame Property Definitions ***************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_GetLeaderboardsForGame_GetLeaderboardsForGame_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetLeaderboardsForGame_eventGetLeaderboardsForGame_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_GetLeaderboardsForGame_GetLeaderboardsForGame_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetLeaderboardsForGame_eventGetLeaderboardsForGame_Parms, AppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppId_MetaData), NewProp_AppId_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_GetLeaderboardsForGame_GetLeaderboardsForGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetLeaderboardsForGame_eventGetLeaderboardsForGame_Parms, ReturnValue), Z_Construct_UClass_USIK_GetLeaderboardsForGame_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GetLeaderboardsForGame_GetLeaderboardsForGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetLeaderboardsForGame_GetLeaderboardsForGame_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetLeaderboardsForGame_GetLeaderboardsForGame_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetLeaderboardsForGame_GetLeaderboardsForGame_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetLeaderboardsForGame_GetLeaderboardsForGame_Statics::PropPointers) < 2048);
// ********** End Function GetLeaderboardsForGame Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GetLeaderboardsForGame_GetLeaderboardsForGame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_GetLeaderboardsForGame, nullptr, "GetLeaderboardsForGame", 	Z_Construct_UFunction_USIK_GetLeaderboardsForGame_GetLeaderboardsForGame_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetLeaderboardsForGame_GetLeaderboardsForGame_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_GetLeaderboardsForGame_GetLeaderboardsForGame_Statics::SIK_GetLeaderboardsForGame_eventGetLeaderboardsForGame_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetLeaderboardsForGame_GetLeaderboardsForGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GetLeaderboardsForGame_GetLeaderboardsForGame_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_GetLeaderboardsForGame_GetLeaderboardsForGame_Statics::SIK_GetLeaderboardsForGame_eventGetLeaderboardsForGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GetLeaderboardsForGame_GetLeaderboardsForGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GetLeaderboardsForGame_GetLeaderboardsForGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GetLeaderboardsForGame::execGetLeaderboardsForGame)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_GetLeaderboardsForGame**)Z_Param__Result=USIK_GetLeaderboardsForGame::GetLeaderboardsForGame(Z_Param_Key,Z_Param_Out_AppId);
	P_NATIVE_END;
}
// ********** End Class USIK_GetLeaderboardsForGame Function GetLeaderboardsForGame ****************

// ********** Begin Class USIK_GetLeaderboardsForGame **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_GetLeaderboardsForGame;
UClass* USIK_GetLeaderboardsForGame::GetPrivateStaticClass()
{
	using TClass = USIK_GetLeaderboardsForGame;
	if (!Z_Registration_Info_UClass_USIK_GetLeaderboardsForGame.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_GetLeaderboardsForGame"),
			Z_Registration_Info_UClass_USIK_GetLeaderboardsForGame.InnerSingleton,
			StaticRegisterNativesUSIK_GetLeaderboardsForGame,
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
	return Z_Registration_Info_UClass_USIK_GetLeaderboardsForGame.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_GetLeaderboardsForGame_NoRegister()
{
	return USIK_GetLeaderboardsForGame::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_GetLeaderboardsForGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/Leaderboards/SIK_GetLeaderboardsForGame.h" },
		{ "ModuleRelativePath", "Functions/Leaderboards/SIK_GetLeaderboardsForGame.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_GetLeaderboardsForGame constinit property declarations **************
// ********** End Class USIK_GetLeaderboardsForGame constinit property declarations ****************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetLeaderboardsForGame"), .Pointer = &USIK_GetLeaderboardsForGame::execGetLeaderboardsForGame },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_GetLeaderboardsForGame_GetLeaderboardsForGame, "GetLeaderboardsForGame" }, // 890002600
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_GetLeaderboardsForGame>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_GetLeaderboardsForGame_Statics
UObject* (*const Z_Construct_UClass_USIK_GetLeaderboardsForGame_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetLeaderboardsForGame_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_GetLeaderboardsForGame_Statics::ClassParams = {
	&USIK_GetLeaderboardsForGame::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetLeaderboardsForGame_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_GetLeaderboardsForGame_Statics::Class_MetaDataParams)
};
void USIK_GetLeaderboardsForGame::StaticRegisterNativesUSIK_GetLeaderboardsForGame()
{
	UClass* Class = USIK_GetLeaderboardsForGame::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_GetLeaderboardsForGame_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_GetLeaderboardsForGame()
{
	if (!Z_Registration_Info_UClass_USIK_GetLeaderboardsForGame.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_GetLeaderboardsForGame.OuterSingleton, Z_Construct_UClass_USIK_GetLeaderboardsForGame_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_GetLeaderboardsForGame.OuterSingleton;
}
USIK_GetLeaderboardsForGame::USIK_GetLeaderboardsForGame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_GetLeaderboardsForGame);
USIK_GetLeaderboardsForGame::~USIK_GetLeaderboardsForGame() {}
// ********** End Class USIK_GetLeaderboardsForGame ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Leaderboards_SIK_GetLeaderboardsForGame_h__Script_SteamWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_GetLeaderboardsForGame, USIK_GetLeaderboardsForGame::StaticClass, TEXT("USIK_GetLeaderboardsForGame"), &Z_Registration_Info_UClass_USIK_GetLeaderboardsForGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_GetLeaderboardsForGame), 3910981942U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Leaderboards_SIK_GetLeaderboardsForGame_h__Script_SteamWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Leaderboards_SIK_GetLeaderboardsForGame_h__Script_SteamWeb_37615802{
	TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Leaderboards_SIK_GetLeaderboardsForGame_h__Script_SteamWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Leaderboards_SIK_GetLeaderboardsForGame_h__Script_SteamWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
