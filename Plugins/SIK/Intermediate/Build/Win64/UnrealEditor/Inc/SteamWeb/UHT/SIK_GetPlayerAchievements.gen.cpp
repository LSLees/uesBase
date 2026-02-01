// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/UserStats/SIK_GetPlayerAchievements.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_GetPlayerAchievements() {}

// ********** Begin Cross Module References ********************************************************
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetPlayerAchievements();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetPlayerAchievements_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USIK_GetPlayerAchievements Function GetPlayerAchievements ****************
struct Z_Construct_UFunction_USIK_GetPlayerAchievements_GetPlayerAchievements_Statics
{
	struct SIK_GetPlayerAchievements_eventGetPlayerAchievements_Parms
	{
		FString Key;
		int64 SteamId;
		int32 AppId;
		FString Language;
		USIK_GetPlayerAchievements* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|UserStats" },
		{ "Comment", "//Gets the list of achievements the specified user has unlocked in an app.\n" },
		{ "ModuleRelativePath", "Functions/UserStats/SIK_GetPlayerAchievements.h" },
		{ "ToolTip", "Gets the list of achievements the specified user has unlocked in an app." },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Language_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetPlayerAchievements constinit property declarations *****************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Language;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPlayerAchievements constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPlayerAchievements Property Definitions ****************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_GetPlayerAchievements_GetPlayerAchievements_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetPlayerAchievements_eventGetPlayerAchievements_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_GetPlayerAchievements_GetPlayerAchievements_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetPlayerAchievements_eventGetPlayerAchievements_Parms, SteamId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamId_MetaData), NewProp_SteamId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_GetPlayerAchievements_GetPlayerAchievements_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetPlayerAchievements_eventGetPlayerAchievements_Parms, AppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppId_MetaData), NewProp_AppId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_GetPlayerAchievements_GetPlayerAchievements_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetPlayerAchievements_eventGetPlayerAchievements_Parms, Language), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Language_MetaData), NewProp_Language_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_GetPlayerAchievements_GetPlayerAchievements_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetPlayerAchievements_eventGetPlayerAchievements_Parms, ReturnValue), Z_Construct_UClass_USIK_GetPlayerAchievements_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GetPlayerAchievements_GetPlayerAchievements_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetPlayerAchievements_GetPlayerAchievements_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetPlayerAchievements_GetPlayerAchievements_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetPlayerAchievements_GetPlayerAchievements_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetPlayerAchievements_GetPlayerAchievements_Statics::NewProp_Language,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetPlayerAchievements_GetPlayerAchievements_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetPlayerAchievements_GetPlayerAchievements_Statics::PropPointers) < 2048);
// ********** End Function GetPlayerAchievements Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GetPlayerAchievements_GetPlayerAchievements_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_GetPlayerAchievements, nullptr, "GetPlayerAchievements", 	Z_Construct_UFunction_USIK_GetPlayerAchievements_GetPlayerAchievements_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetPlayerAchievements_GetPlayerAchievements_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_GetPlayerAchievements_GetPlayerAchievements_Statics::SIK_GetPlayerAchievements_eventGetPlayerAchievements_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetPlayerAchievements_GetPlayerAchievements_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GetPlayerAchievements_GetPlayerAchievements_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_GetPlayerAchievements_GetPlayerAchievements_Statics::SIK_GetPlayerAchievements_eventGetPlayerAchievements_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GetPlayerAchievements_GetPlayerAchievements()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GetPlayerAchievements_GetPlayerAchievements_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GetPlayerAchievements::execGetPlayerAchievements)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_SteamId);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_Language);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_GetPlayerAchievements**)Z_Param__Result=USIK_GetPlayerAchievements::GetPlayerAchievements(Z_Param_Key,Z_Param_Out_SteamId,Z_Param_Out_AppId,Z_Param_Language);
	P_NATIVE_END;
}
// ********** End Class USIK_GetPlayerAchievements Function GetPlayerAchievements ******************

// ********** Begin Class USIK_GetPlayerAchievements ***********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_GetPlayerAchievements;
UClass* USIK_GetPlayerAchievements::GetPrivateStaticClass()
{
	using TClass = USIK_GetPlayerAchievements;
	if (!Z_Registration_Info_UClass_USIK_GetPlayerAchievements.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_GetPlayerAchievements"),
			Z_Registration_Info_UClass_USIK_GetPlayerAchievements.InnerSingleton,
			StaticRegisterNativesUSIK_GetPlayerAchievements,
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
	return Z_Registration_Info_UClass_USIK_GetPlayerAchievements.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_GetPlayerAchievements_NoRegister()
{
	return USIK_GetPlayerAchievements::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_GetPlayerAchievements_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/UserStats/SIK_GetPlayerAchievements.h" },
		{ "ModuleRelativePath", "Functions/UserStats/SIK_GetPlayerAchievements.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_GetPlayerAchievements constinit property declarations ***************
// ********** End Class USIK_GetPlayerAchievements constinit property declarations *****************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetPlayerAchievements"), .Pointer = &USIK_GetPlayerAchievements::execGetPlayerAchievements },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_GetPlayerAchievements_GetPlayerAchievements, "GetPlayerAchievements" }, // 254327073
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_GetPlayerAchievements>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_GetPlayerAchievements_Statics
UObject* (*const Z_Construct_UClass_USIK_GetPlayerAchievements_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetPlayerAchievements_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_GetPlayerAchievements_Statics::ClassParams = {
	&USIK_GetPlayerAchievements::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetPlayerAchievements_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_GetPlayerAchievements_Statics::Class_MetaDataParams)
};
void USIK_GetPlayerAchievements::StaticRegisterNativesUSIK_GetPlayerAchievements()
{
	UClass* Class = USIK_GetPlayerAchievements::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_GetPlayerAchievements_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_GetPlayerAchievements()
{
	if (!Z_Registration_Info_UClass_USIK_GetPlayerAchievements.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_GetPlayerAchievements.OuterSingleton, Z_Construct_UClass_USIK_GetPlayerAchievements_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_GetPlayerAchievements.OuterSingleton;
}
USIK_GetPlayerAchievements::USIK_GetPlayerAchievements(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_GetPlayerAchievements);
USIK_GetPlayerAchievements::~USIK_GetPlayerAchievements() {}
// ********** End Class USIK_GetPlayerAchievements *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_UserStats_SIK_GetPlayerAchievements_h__Script_SteamWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_GetPlayerAchievements, USIK_GetPlayerAchievements::StaticClass, TEXT("USIK_GetPlayerAchievements"), &Z_Registration_Info_UClass_USIK_GetPlayerAchievements, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_GetPlayerAchievements), 2459497121U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_UserStats_SIK_GetPlayerAchievements_h__Script_SteamWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_UserStats_SIK_GetPlayerAchievements_h__Script_SteamWeb_2068881417{
	TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_UserStats_SIK_GetPlayerAchievements_h__Script_SteamWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_UserStats_SIK_GetPlayerAchievements_h__Script_SteamWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
