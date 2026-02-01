// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/Player/SIK_GetRecentlyPlayedGames.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_GetRecentlyPlayedGames() {}

// ********** Begin Cross Module References ********************************************************
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetRecentlyPlayedGames();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetRecentlyPlayedGames_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USIK_GetRecentlyPlayedGames Function GetRecentlyPlayedGames **************
struct Z_Construct_UFunction_USIK_GetRecentlyPlayedGames_GetRecentlyPlayedGames_Statics
{
	struct SIK_GetRecentlyPlayedGames_eventGetRecentlyPlayedGames_Parms
	{
		FString Key;
		int64 SteamId;
		int32 Count;
		USIK_GetRecentlyPlayedGames* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|Player" },
		{ "Comment", "//Gets information about a player's recently played games.\n" },
		{ "ModuleRelativePath", "Functions/Player/SIK_GetRecentlyPlayedGames.h" },
		{ "ToolTip", "Gets information about a player's recently played games." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetRecentlyPlayedGames constinit property declarations ****************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetRecentlyPlayedGames constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetRecentlyPlayedGames Property Definitions ***************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_GetRecentlyPlayedGames_GetRecentlyPlayedGames_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetRecentlyPlayedGames_eventGetRecentlyPlayedGames_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_GetRecentlyPlayedGames_GetRecentlyPlayedGames_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetRecentlyPlayedGames_eventGetRecentlyPlayedGames_Parms, SteamId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamId_MetaData), NewProp_SteamId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_GetRecentlyPlayedGames_GetRecentlyPlayedGames_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetRecentlyPlayedGames_eventGetRecentlyPlayedGames_Parms, Count), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Count_MetaData), NewProp_Count_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_GetRecentlyPlayedGames_GetRecentlyPlayedGames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetRecentlyPlayedGames_eventGetRecentlyPlayedGames_Parms, ReturnValue), Z_Construct_UClass_USIK_GetRecentlyPlayedGames_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GetRecentlyPlayedGames_GetRecentlyPlayedGames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetRecentlyPlayedGames_GetRecentlyPlayedGames_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetRecentlyPlayedGames_GetRecentlyPlayedGames_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetRecentlyPlayedGames_GetRecentlyPlayedGames_Statics::NewProp_Count,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetRecentlyPlayedGames_GetRecentlyPlayedGames_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetRecentlyPlayedGames_GetRecentlyPlayedGames_Statics::PropPointers) < 2048);
// ********** End Function GetRecentlyPlayedGames Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GetRecentlyPlayedGames_GetRecentlyPlayedGames_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_GetRecentlyPlayedGames, nullptr, "GetRecentlyPlayedGames", 	Z_Construct_UFunction_USIK_GetRecentlyPlayedGames_GetRecentlyPlayedGames_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetRecentlyPlayedGames_GetRecentlyPlayedGames_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_GetRecentlyPlayedGames_GetRecentlyPlayedGames_Statics::SIK_GetRecentlyPlayedGames_eventGetRecentlyPlayedGames_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetRecentlyPlayedGames_GetRecentlyPlayedGames_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GetRecentlyPlayedGames_GetRecentlyPlayedGames_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_GetRecentlyPlayedGames_GetRecentlyPlayedGames_Statics::SIK_GetRecentlyPlayedGames_eventGetRecentlyPlayedGames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GetRecentlyPlayedGames_GetRecentlyPlayedGames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GetRecentlyPlayedGames_GetRecentlyPlayedGames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GetRecentlyPlayedGames::execGetRecentlyPlayedGames)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_SteamId);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Count);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_GetRecentlyPlayedGames**)Z_Param__Result=USIK_GetRecentlyPlayedGames::GetRecentlyPlayedGames(Z_Param_Key,Z_Param_Out_SteamId,Z_Param_Out_Count);
	P_NATIVE_END;
}
// ********** End Class USIK_GetRecentlyPlayedGames Function GetRecentlyPlayedGames ****************

// ********** Begin Class USIK_GetRecentlyPlayedGames **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_GetRecentlyPlayedGames;
UClass* USIK_GetRecentlyPlayedGames::GetPrivateStaticClass()
{
	using TClass = USIK_GetRecentlyPlayedGames;
	if (!Z_Registration_Info_UClass_USIK_GetRecentlyPlayedGames.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_GetRecentlyPlayedGames"),
			Z_Registration_Info_UClass_USIK_GetRecentlyPlayedGames.InnerSingleton,
			StaticRegisterNativesUSIK_GetRecentlyPlayedGames,
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
	return Z_Registration_Info_UClass_USIK_GetRecentlyPlayedGames.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_GetRecentlyPlayedGames_NoRegister()
{
	return USIK_GetRecentlyPlayedGames::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_GetRecentlyPlayedGames_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/Player/SIK_GetRecentlyPlayedGames.h" },
		{ "ModuleRelativePath", "Functions/Player/SIK_GetRecentlyPlayedGames.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_GetRecentlyPlayedGames constinit property declarations **************
// ********** End Class USIK_GetRecentlyPlayedGames constinit property declarations ****************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetRecentlyPlayedGames"), .Pointer = &USIK_GetRecentlyPlayedGames::execGetRecentlyPlayedGames },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_GetRecentlyPlayedGames_GetRecentlyPlayedGames, "GetRecentlyPlayedGames" }, // 4149017056
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_GetRecentlyPlayedGames>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_GetRecentlyPlayedGames_Statics
UObject* (*const Z_Construct_UClass_USIK_GetRecentlyPlayedGames_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetRecentlyPlayedGames_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_GetRecentlyPlayedGames_Statics::ClassParams = {
	&USIK_GetRecentlyPlayedGames::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetRecentlyPlayedGames_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_GetRecentlyPlayedGames_Statics::Class_MetaDataParams)
};
void USIK_GetRecentlyPlayedGames::StaticRegisterNativesUSIK_GetRecentlyPlayedGames()
{
	UClass* Class = USIK_GetRecentlyPlayedGames::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_GetRecentlyPlayedGames_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_GetRecentlyPlayedGames()
{
	if (!Z_Registration_Info_UClass_USIK_GetRecentlyPlayedGames.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_GetRecentlyPlayedGames.OuterSingleton, Z_Construct_UClass_USIK_GetRecentlyPlayedGames_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_GetRecentlyPlayedGames.OuterSingleton;
}
USIK_GetRecentlyPlayedGames::USIK_GetRecentlyPlayedGames(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_GetRecentlyPlayedGames);
USIK_GetRecentlyPlayedGames::~USIK_GetRecentlyPlayedGames() {}
// ********** End Class USIK_GetRecentlyPlayedGames ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Player_SIK_GetRecentlyPlayedGames_h__Script_SteamWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_GetRecentlyPlayedGames, USIK_GetRecentlyPlayedGames::StaticClass, TEXT("USIK_GetRecentlyPlayedGames"), &Z_Registration_Info_UClass_USIK_GetRecentlyPlayedGames, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_GetRecentlyPlayedGames), 2058759564U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Player_SIK_GetRecentlyPlayedGames_h__Script_SteamWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Player_SIK_GetRecentlyPlayedGames_h__Script_SteamWeb_2994798389{
	TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Player_SIK_GetRecentlyPlayedGames_h__Script_SteamWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Player_SIK_GetRecentlyPlayedGames_h__Script_SteamWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
