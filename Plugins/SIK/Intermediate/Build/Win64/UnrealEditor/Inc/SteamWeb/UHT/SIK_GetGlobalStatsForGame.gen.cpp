// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/UserStats/SIK_GetGlobalStatsForGame.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_GetGlobalStatsForGame() {}

// ********** Begin Cross Module References ********************************************************
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetGlobalStatsForGame();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetGlobalStatsForGame_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USIK_GetGlobalStatsForGame Function GetGlobalStatsForGame ****************
struct Z_Construct_UFunction_USIK_GetGlobalStatsForGame_GetGlobalStatsForGame_Statics
{
	struct SIK_GetGlobalStatsForGame_eventGetGlobalStatsForGame_Parms
	{
		int32 AppId;
		int32 Count;
		FString Name;
		int32 StartDate;
		int32 EndDate;
		USIK_GetGlobalStatsForGame* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|UserStats" },
		{ "Comment", "//Retrieves the global stats percentages for the specified app.\n" },
		{ "CPP_Default_EndDate", "-1" },
		{ "CPP_Default_StartDate", "-1" },
		{ "ModuleRelativePath", "Functions/UserStats/SIK_GetGlobalStatsForGame.h" },
		{ "ToolTip", "Retrieves the global stats percentages for the specified app." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartDate_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndDate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetGlobalStatsForGame constinit property declarations *****************
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartDate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EndDate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetGlobalStatsForGame constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetGlobalStatsForGame Property Definitions ****************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_GetGlobalStatsForGame_GetGlobalStatsForGame_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetGlobalStatsForGame_eventGetGlobalStatsForGame_Parms, AppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppId_MetaData), NewProp_AppId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_GetGlobalStatsForGame_GetGlobalStatsForGame_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetGlobalStatsForGame_eventGetGlobalStatsForGame_Parms, Count), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Count_MetaData), NewProp_Count_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_GetGlobalStatsForGame_GetGlobalStatsForGame_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetGlobalStatsForGame_eventGetGlobalStatsForGame_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_GetGlobalStatsForGame_GetGlobalStatsForGame_Statics::NewProp_StartDate = { "StartDate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetGlobalStatsForGame_eventGetGlobalStatsForGame_Parms, StartDate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartDate_MetaData), NewProp_StartDate_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_GetGlobalStatsForGame_GetGlobalStatsForGame_Statics::NewProp_EndDate = { "EndDate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetGlobalStatsForGame_eventGetGlobalStatsForGame_Parms, EndDate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndDate_MetaData), NewProp_EndDate_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_GetGlobalStatsForGame_GetGlobalStatsForGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetGlobalStatsForGame_eventGetGlobalStatsForGame_Parms, ReturnValue), Z_Construct_UClass_USIK_GetGlobalStatsForGame_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GetGlobalStatsForGame_GetGlobalStatsForGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetGlobalStatsForGame_GetGlobalStatsForGame_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetGlobalStatsForGame_GetGlobalStatsForGame_Statics::NewProp_Count,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetGlobalStatsForGame_GetGlobalStatsForGame_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetGlobalStatsForGame_GetGlobalStatsForGame_Statics::NewProp_StartDate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetGlobalStatsForGame_GetGlobalStatsForGame_Statics::NewProp_EndDate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetGlobalStatsForGame_GetGlobalStatsForGame_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetGlobalStatsForGame_GetGlobalStatsForGame_Statics::PropPointers) < 2048);
// ********** End Function GetGlobalStatsForGame Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GetGlobalStatsForGame_GetGlobalStatsForGame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_GetGlobalStatsForGame, nullptr, "GetGlobalStatsForGame", 	Z_Construct_UFunction_USIK_GetGlobalStatsForGame_GetGlobalStatsForGame_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetGlobalStatsForGame_GetGlobalStatsForGame_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_GetGlobalStatsForGame_GetGlobalStatsForGame_Statics::SIK_GetGlobalStatsForGame_eventGetGlobalStatsForGame_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetGlobalStatsForGame_GetGlobalStatsForGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GetGlobalStatsForGame_GetGlobalStatsForGame_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_GetGlobalStatsForGame_GetGlobalStatsForGame_Statics::SIK_GetGlobalStatsForGame_eventGetGlobalStatsForGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GetGlobalStatsForGame_GetGlobalStatsForGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GetGlobalStatsForGame_GetGlobalStatsForGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GetGlobalStatsForGame::execGetGlobalStatsForGame)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppId);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Count);
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_StartDate);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_EndDate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_GetGlobalStatsForGame**)Z_Param__Result=USIK_GetGlobalStatsForGame::GetGlobalStatsForGame(Z_Param_Out_AppId,Z_Param_Out_Count,Z_Param_Name,Z_Param_Out_StartDate,Z_Param_Out_EndDate);
	P_NATIVE_END;
}
// ********** End Class USIK_GetGlobalStatsForGame Function GetGlobalStatsForGame ******************

// ********** Begin Class USIK_GetGlobalStatsForGame ***********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_GetGlobalStatsForGame;
UClass* USIK_GetGlobalStatsForGame::GetPrivateStaticClass()
{
	using TClass = USIK_GetGlobalStatsForGame;
	if (!Z_Registration_Info_UClass_USIK_GetGlobalStatsForGame.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_GetGlobalStatsForGame"),
			Z_Registration_Info_UClass_USIK_GetGlobalStatsForGame.InnerSingleton,
			StaticRegisterNativesUSIK_GetGlobalStatsForGame,
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
	return Z_Registration_Info_UClass_USIK_GetGlobalStatsForGame.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_GetGlobalStatsForGame_NoRegister()
{
	return USIK_GetGlobalStatsForGame::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_GetGlobalStatsForGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/UserStats/SIK_GetGlobalStatsForGame.h" },
		{ "ModuleRelativePath", "Functions/UserStats/SIK_GetGlobalStatsForGame.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_GetGlobalStatsForGame constinit property declarations ***************
// ********** End Class USIK_GetGlobalStatsForGame constinit property declarations *****************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetGlobalStatsForGame"), .Pointer = &USIK_GetGlobalStatsForGame::execGetGlobalStatsForGame },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_GetGlobalStatsForGame_GetGlobalStatsForGame, "GetGlobalStatsForGame" }, // 1621173616
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_GetGlobalStatsForGame>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_GetGlobalStatsForGame_Statics
UObject* (*const Z_Construct_UClass_USIK_GetGlobalStatsForGame_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetGlobalStatsForGame_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_GetGlobalStatsForGame_Statics::ClassParams = {
	&USIK_GetGlobalStatsForGame::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetGlobalStatsForGame_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_GetGlobalStatsForGame_Statics::Class_MetaDataParams)
};
void USIK_GetGlobalStatsForGame::StaticRegisterNativesUSIK_GetGlobalStatsForGame()
{
	UClass* Class = USIK_GetGlobalStatsForGame::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_GetGlobalStatsForGame_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_GetGlobalStatsForGame()
{
	if (!Z_Registration_Info_UClass_USIK_GetGlobalStatsForGame.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_GetGlobalStatsForGame.OuterSingleton, Z_Construct_UClass_USIK_GetGlobalStatsForGame_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_GetGlobalStatsForGame.OuterSingleton;
}
USIK_GetGlobalStatsForGame::USIK_GetGlobalStatsForGame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_GetGlobalStatsForGame);
USIK_GetGlobalStatsForGame::~USIK_GetGlobalStatsForGame() {}
// ********** End Class USIK_GetGlobalStatsForGame *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_UserStats_SIK_GetGlobalStatsForGame_h__Script_SteamWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_GetGlobalStatsForGame, USIK_GetGlobalStatsForGame::StaticClass, TEXT("USIK_GetGlobalStatsForGame"), &Z_Registration_Info_UClass_USIK_GetGlobalStatsForGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_GetGlobalStatsForGame), 2301479550U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_UserStats_SIK_GetGlobalStatsForGame_h__Script_SteamWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_UserStats_SIK_GetGlobalStatsForGame_h__Script_SteamWeb_202968282{
	TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_UserStats_SIK_GetGlobalStatsForGame_h__Script_SteamWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_UserStats_SIK_GetGlobalStatsForGame_h__Script_SteamWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
