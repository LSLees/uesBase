// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/UserStats/SIK_GetSchemaForGame.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_GetSchemaForGame() {}

// ********** Begin Cross Module References ********************************************************
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetSchemaForGame();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetSchemaForGame_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USIK_GetSchemaForGame Function GetSchemaForGame **************************
struct Z_Construct_UFunction_USIK_GetSchemaForGame_GetSchemaForGame_Statics
{
	struct SIK_GetSchemaForGame_eventGetSchemaForGame_Parms
	{
		FString Key;
		int32 AppId;
		FString Language;
		USIK_GetSchemaForGame* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|UserStats" },
		{ "Comment", "//Gets the complete list of stats and achievements for the specified game.\n" },
		{ "ModuleRelativePath", "Functions/UserStats/SIK_GetSchemaForGame.h" },
		{ "ToolTip", "Gets the complete list of stats and achievements for the specified game." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Language_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetSchemaForGame constinit property declarations **********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Language;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSchemaForGame constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSchemaForGame Property Definitions *********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_GetSchemaForGame_GetSchemaForGame_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetSchemaForGame_eventGetSchemaForGame_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_GetSchemaForGame_GetSchemaForGame_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetSchemaForGame_eventGetSchemaForGame_Parms, AppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppId_MetaData), NewProp_AppId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_GetSchemaForGame_GetSchemaForGame_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetSchemaForGame_eventGetSchemaForGame_Parms, Language), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Language_MetaData), NewProp_Language_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_GetSchemaForGame_GetSchemaForGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetSchemaForGame_eventGetSchemaForGame_Parms, ReturnValue), Z_Construct_UClass_USIK_GetSchemaForGame_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GetSchemaForGame_GetSchemaForGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetSchemaForGame_GetSchemaForGame_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetSchemaForGame_GetSchemaForGame_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetSchemaForGame_GetSchemaForGame_Statics::NewProp_Language,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetSchemaForGame_GetSchemaForGame_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetSchemaForGame_GetSchemaForGame_Statics::PropPointers) < 2048);
// ********** End Function GetSchemaForGame Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GetSchemaForGame_GetSchemaForGame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_GetSchemaForGame, nullptr, "GetSchemaForGame", 	Z_Construct_UFunction_USIK_GetSchemaForGame_GetSchemaForGame_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetSchemaForGame_GetSchemaForGame_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_GetSchemaForGame_GetSchemaForGame_Statics::SIK_GetSchemaForGame_eventGetSchemaForGame_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetSchemaForGame_GetSchemaForGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GetSchemaForGame_GetSchemaForGame_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_GetSchemaForGame_GetSchemaForGame_Statics::SIK_GetSchemaForGame_eventGetSchemaForGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GetSchemaForGame_GetSchemaForGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GetSchemaForGame_GetSchemaForGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GetSchemaForGame::execGetSchemaForGame)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_Language);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_GetSchemaForGame**)Z_Param__Result=USIK_GetSchemaForGame::GetSchemaForGame(Z_Param_Key,Z_Param_Out_AppId,Z_Param_Language);
	P_NATIVE_END;
}
// ********** End Class USIK_GetSchemaForGame Function GetSchemaForGame ****************************

// ********** Begin Class USIK_GetSchemaForGame ****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_GetSchemaForGame;
UClass* USIK_GetSchemaForGame::GetPrivateStaticClass()
{
	using TClass = USIK_GetSchemaForGame;
	if (!Z_Registration_Info_UClass_USIK_GetSchemaForGame.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_GetSchemaForGame"),
			Z_Registration_Info_UClass_USIK_GetSchemaForGame.InnerSingleton,
			StaticRegisterNativesUSIK_GetSchemaForGame,
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
	return Z_Registration_Info_UClass_USIK_GetSchemaForGame.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_GetSchemaForGame_NoRegister()
{
	return USIK_GetSchemaForGame::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_GetSchemaForGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/UserStats/SIK_GetSchemaForGame.h" },
		{ "ModuleRelativePath", "Functions/UserStats/SIK_GetSchemaForGame.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_GetSchemaForGame constinit property declarations ********************
// ********** End Class USIK_GetSchemaForGame constinit property declarations **********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetSchemaForGame"), .Pointer = &USIK_GetSchemaForGame::execGetSchemaForGame },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_GetSchemaForGame_GetSchemaForGame, "GetSchemaForGame" }, // 1363833369
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_GetSchemaForGame>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_GetSchemaForGame_Statics
UObject* (*const Z_Construct_UClass_USIK_GetSchemaForGame_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetSchemaForGame_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_GetSchemaForGame_Statics::ClassParams = {
	&USIK_GetSchemaForGame::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetSchemaForGame_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_GetSchemaForGame_Statics::Class_MetaDataParams)
};
void USIK_GetSchemaForGame::StaticRegisterNativesUSIK_GetSchemaForGame()
{
	UClass* Class = USIK_GetSchemaForGame::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_GetSchemaForGame_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_GetSchemaForGame()
{
	if (!Z_Registration_Info_UClass_USIK_GetSchemaForGame.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_GetSchemaForGame.OuterSingleton, Z_Construct_UClass_USIK_GetSchemaForGame_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_GetSchemaForGame.OuterSingleton;
}
USIK_GetSchemaForGame::USIK_GetSchemaForGame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_GetSchemaForGame);
USIK_GetSchemaForGame::~USIK_GetSchemaForGame() {}
// ********** End Class USIK_GetSchemaForGame ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_UserStats_SIK_GetSchemaForGame_h__Script_SteamWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_GetSchemaForGame, USIK_GetSchemaForGame::StaticClass, TEXT("USIK_GetSchemaForGame"), &Z_Registration_Info_UClass_USIK_GetSchemaForGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_GetSchemaForGame), 3088052455U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_UserStats_SIK_GetSchemaForGame_h__Script_SteamWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_UserStats_SIK_GetSchemaForGame_h__Script_SteamWeb_676103771{
	TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_UserStats_SIK_GetSchemaForGame_h__Script_SteamWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_UserStats_SIK_GetSchemaForGame_h__Script_SteamWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
