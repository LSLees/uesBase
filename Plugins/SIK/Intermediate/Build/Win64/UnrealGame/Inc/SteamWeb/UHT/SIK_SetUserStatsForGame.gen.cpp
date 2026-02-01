// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/UserStats/SIK_SetUserStatsForGame.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_SetUserStatsForGame() {}

// ********** Begin Cross Module References ********************************************************
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_SetUserStatsForGame();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_SetUserStatsForGame_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USIK_SetUserStatsForGame Function SetUserStatsForGame ********************
struct Z_Construct_UFunction_USIK_SetUserStatsForGame_SetUserStatsForGame_Statics
{
	struct SIK_SetUserStatsForGame_eventSetUserStatsForGame_Parms
	{
		FString Key;
		int64 SteamId;
		int32 AppId;
		int32 Count;
		FString Name0;
		int32 Value0;
		USIK_SetUserStatsForGame* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|UserStats" },
		{ "Comment", "//Sets a stat for the specified user for the game.\n" },
		{ "ModuleRelativePath", "Functions/UserStats/SIK_SetUserStatsForGame.h" },
		{ "ToolTip", "Sets a stat for the specified user for the game." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name0_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value0_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetUserStatsForGame constinit property declarations *******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name0;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value0;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetUserStatsForGame constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetUserStatsForGame Property Definitions ******************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_SetUserStatsForGame_SetUserStatsForGame_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_SetUserStatsForGame_eventSetUserStatsForGame_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_SetUserStatsForGame_SetUserStatsForGame_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_SetUserStatsForGame_eventSetUserStatsForGame_Parms, SteamId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamId_MetaData), NewProp_SteamId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_SetUserStatsForGame_SetUserStatsForGame_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_SetUserStatsForGame_eventSetUserStatsForGame_Parms, AppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppId_MetaData), NewProp_AppId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_SetUserStatsForGame_SetUserStatsForGame_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_SetUserStatsForGame_eventSetUserStatsForGame_Parms, Count), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Count_MetaData), NewProp_Count_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_SetUserStatsForGame_SetUserStatsForGame_Statics::NewProp_Name0 = { "Name0", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_SetUserStatsForGame_eventSetUserStatsForGame_Parms, Name0), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name0_MetaData), NewProp_Name0_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_SetUserStatsForGame_SetUserStatsForGame_Statics::NewProp_Value0 = { "Value0", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_SetUserStatsForGame_eventSetUserStatsForGame_Parms, Value0), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value0_MetaData), NewProp_Value0_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_SetUserStatsForGame_SetUserStatsForGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_SetUserStatsForGame_eventSetUserStatsForGame_Parms, ReturnValue), Z_Construct_UClass_USIK_SetUserStatsForGame_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_SetUserStatsForGame_SetUserStatsForGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SetUserStatsForGame_SetUserStatsForGame_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SetUserStatsForGame_SetUserStatsForGame_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SetUserStatsForGame_SetUserStatsForGame_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SetUserStatsForGame_SetUserStatsForGame_Statics::NewProp_Count,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SetUserStatsForGame_SetUserStatsForGame_Statics::NewProp_Name0,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SetUserStatsForGame_SetUserStatsForGame_Statics::NewProp_Value0,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SetUserStatsForGame_SetUserStatsForGame_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SetUserStatsForGame_SetUserStatsForGame_Statics::PropPointers) < 2048);
// ********** End Function SetUserStatsForGame Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_SetUserStatsForGame_SetUserStatsForGame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_SetUserStatsForGame, nullptr, "SetUserStatsForGame", 	Z_Construct_UFunction_USIK_SetUserStatsForGame_SetUserStatsForGame_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SetUserStatsForGame_SetUserStatsForGame_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_SetUserStatsForGame_SetUserStatsForGame_Statics::SIK_SetUserStatsForGame_eventSetUserStatsForGame_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SetUserStatsForGame_SetUserStatsForGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_SetUserStatsForGame_SetUserStatsForGame_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_SetUserStatsForGame_SetUserStatsForGame_Statics::SIK_SetUserStatsForGame_eventSetUserStatsForGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_SetUserStatsForGame_SetUserStatsForGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_SetUserStatsForGame_SetUserStatsForGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_SetUserStatsForGame::execSetUserStatsForGame)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_SteamId);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppId);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Count);
	P_GET_PROPERTY(FStrProperty,Z_Param_Name0);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Value0);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_SetUserStatsForGame**)Z_Param__Result=USIK_SetUserStatsForGame::SetUserStatsForGame(Z_Param_Key,Z_Param_Out_SteamId,Z_Param_Out_AppId,Z_Param_Out_Count,Z_Param_Name0,Z_Param_Out_Value0);
	P_NATIVE_END;
}
// ********** End Class USIK_SetUserStatsForGame Function SetUserStatsForGame **********************

// ********** Begin Class USIK_SetUserStatsForGame *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_SetUserStatsForGame;
UClass* USIK_SetUserStatsForGame::GetPrivateStaticClass()
{
	using TClass = USIK_SetUserStatsForGame;
	if (!Z_Registration_Info_UClass_USIK_SetUserStatsForGame.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_SetUserStatsForGame"),
			Z_Registration_Info_UClass_USIK_SetUserStatsForGame.InnerSingleton,
			StaticRegisterNativesUSIK_SetUserStatsForGame,
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
	return Z_Registration_Info_UClass_USIK_SetUserStatsForGame.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_SetUserStatsForGame_NoRegister()
{
	return USIK_SetUserStatsForGame::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_SetUserStatsForGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/UserStats/SIK_SetUserStatsForGame.h" },
		{ "ModuleRelativePath", "Functions/UserStats/SIK_SetUserStatsForGame.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_SetUserStatsForGame constinit property declarations *****************
// ********** End Class USIK_SetUserStatsForGame constinit property declarations *******************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("SetUserStatsForGame"), .Pointer = &USIK_SetUserStatsForGame::execSetUserStatsForGame },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_SetUserStatsForGame_SetUserStatsForGame, "SetUserStatsForGame" }, // 566198990
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_SetUserStatsForGame>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_SetUserStatsForGame_Statics
UObject* (*const Z_Construct_UClass_USIK_SetUserStatsForGame_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_SetUserStatsForGame_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_SetUserStatsForGame_Statics::ClassParams = {
	&USIK_SetUserStatsForGame::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_SetUserStatsForGame_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_SetUserStatsForGame_Statics::Class_MetaDataParams)
};
void USIK_SetUserStatsForGame::StaticRegisterNativesUSIK_SetUserStatsForGame()
{
	UClass* Class = USIK_SetUserStatsForGame::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_SetUserStatsForGame_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_SetUserStatsForGame()
{
	if (!Z_Registration_Info_UClass_USIK_SetUserStatsForGame.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_SetUserStatsForGame.OuterSingleton, Z_Construct_UClass_USIK_SetUserStatsForGame_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_SetUserStatsForGame.OuterSingleton;
}
USIK_SetUserStatsForGame::USIK_SetUserStatsForGame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_SetUserStatsForGame);
USIK_SetUserStatsForGame::~USIK_SetUserStatsForGame() {}
// ********** End Class USIK_SetUserStatsForGame ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_UserStats_SIK_SetUserStatsForGame_h__Script_SteamWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_SetUserStatsForGame, USIK_SetUserStatsForGame::StaticClass, TEXT("USIK_SetUserStatsForGame"), &Z_Registration_Info_UClass_USIK_SetUserStatsForGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_SetUserStatsForGame), 1321448107U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_UserStats_SIK_SetUserStatsForGame_h__Script_SteamWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_UserStats_SIK_SetUserStatsForGame_h__Script_SteamWeb_1060365309{
	TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_UserStats_SIK_SetUserStatsForGame_h__Script_SteamWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_UserStats_SIK_SetUserStatsForGame_h__Script_SteamWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
