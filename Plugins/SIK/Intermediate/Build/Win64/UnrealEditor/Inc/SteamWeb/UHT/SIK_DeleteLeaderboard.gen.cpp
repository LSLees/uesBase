// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/Leaderboards/SIK_DeleteLeaderboard.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_DeleteLeaderboard() {}

// ********** Begin Cross Module References ********************************************************
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_DeleteLeaderboard();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_DeleteLeaderboard_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USIK_DeleteLeaderboard Function DeleteLeaderboard ************************
struct Z_Construct_UFunction_USIK_DeleteLeaderboard_DeleteLeaderboard_Statics
{
	struct SIK_DeleteLeaderboard_eventDeleteLeaderboard_Parms
	{
		FString Key;
		int32 AppId;
		FString Name;
		USIK_DeleteLeaderboard* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|Leaderboards" },
		{ "Comment", "/*\n\x09*DeleteLeaderboard\n\x09POST https://partner.steam-api.com/ISteamLeaderboards/DeleteLeaderboard/v1/\n\x09Name\x09Type\x09Required\x09""Description\n\x09key\x09string\x09\xe2\x9c\x94\x09Steamworks Web API publisher authentication key.\n\x09""appid\x09uint32\x09\xe2\x9c\x94\x09""appid of game\n\x09name\x09string\x09\xe2\x9c\x94\x09name of the leaderboard to delete\n\n\n\n\x09NOTE: This call requires a publisher API key to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!\n\x09*/" },
		{ "ModuleRelativePath", "Functions/Leaderboards/SIK_DeleteLeaderboard.h" },
		{ "ToolTip", "*DeleteLeaderboard\nPOST https://partner.steam-api.com/ISteamLeaderboards/DeleteLeaderboard/v1/\nName    Type    Required        Description\nkey     string  \xe2\x9c\x94       Steamworks Web API publisher authentication key.\nappid   uint32  \xe2\x9c\x94       appid of game\nname    string  \xe2\x9c\x94       name of the leaderboard to delete\n\n\n\nNOTE: This call requires a publisher API key to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function DeleteLeaderboard constinit property declarations *********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DeleteLeaderboard constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DeleteLeaderboard Property Definitions ********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_DeleteLeaderboard_DeleteLeaderboard_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_DeleteLeaderboard_eventDeleteLeaderboard_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_DeleteLeaderboard_DeleteLeaderboard_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_DeleteLeaderboard_eventDeleteLeaderboard_Parms, AppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppId_MetaData), NewProp_AppId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_DeleteLeaderboard_DeleteLeaderboard_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_DeleteLeaderboard_eventDeleteLeaderboard_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_DeleteLeaderboard_DeleteLeaderboard_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_DeleteLeaderboard_eventDeleteLeaderboard_Parms, ReturnValue), Z_Construct_UClass_USIK_DeleteLeaderboard_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_DeleteLeaderboard_DeleteLeaderboard_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_DeleteLeaderboard_DeleteLeaderboard_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_DeleteLeaderboard_DeleteLeaderboard_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_DeleteLeaderboard_DeleteLeaderboard_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_DeleteLeaderboard_DeleteLeaderboard_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_DeleteLeaderboard_DeleteLeaderboard_Statics::PropPointers) < 2048);
// ********** End Function DeleteLeaderboard Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_DeleteLeaderboard_DeleteLeaderboard_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_DeleteLeaderboard, nullptr, "DeleteLeaderboard", 	Z_Construct_UFunction_USIK_DeleteLeaderboard_DeleteLeaderboard_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_DeleteLeaderboard_DeleteLeaderboard_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_DeleteLeaderboard_DeleteLeaderboard_Statics::SIK_DeleteLeaderboard_eventDeleteLeaderboard_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_DeleteLeaderboard_DeleteLeaderboard_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_DeleteLeaderboard_DeleteLeaderboard_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_DeleteLeaderboard_DeleteLeaderboard_Statics::SIK_DeleteLeaderboard_eventDeleteLeaderboard_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_DeleteLeaderboard_DeleteLeaderboard()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_DeleteLeaderboard_DeleteLeaderboard_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_DeleteLeaderboard::execDeleteLeaderboard)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_DeleteLeaderboard**)Z_Param__Result=USIK_DeleteLeaderboard::DeleteLeaderboard(Z_Param_Key,Z_Param_Out_AppId,Z_Param_Name);
	P_NATIVE_END;
}
// ********** End Class USIK_DeleteLeaderboard Function DeleteLeaderboard **************************

// ********** Begin Class USIK_DeleteLeaderboard ***************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_DeleteLeaderboard;
UClass* USIK_DeleteLeaderboard::GetPrivateStaticClass()
{
	using TClass = USIK_DeleteLeaderboard;
	if (!Z_Registration_Info_UClass_USIK_DeleteLeaderboard.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_DeleteLeaderboard"),
			Z_Registration_Info_UClass_USIK_DeleteLeaderboard.InnerSingleton,
			StaticRegisterNativesUSIK_DeleteLeaderboard,
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
	return Z_Registration_Info_UClass_USIK_DeleteLeaderboard.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_DeleteLeaderboard_NoRegister()
{
	return USIK_DeleteLeaderboard::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_DeleteLeaderboard_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/Leaderboards/SIK_DeleteLeaderboard.h" },
		{ "ModuleRelativePath", "Functions/Leaderboards/SIK_DeleteLeaderboard.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_DeleteLeaderboard constinit property declarations *******************
// ********** End Class USIK_DeleteLeaderboard constinit property declarations *********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("DeleteLeaderboard"), .Pointer = &USIK_DeleteLeaderboard::execDeleteLeaderboard },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_DeleteLeaderboard_DeleteLeaderboard, "DeleteLeaderboard" }, // 1428920504
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_DeleteLeaderboard>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_DeleteLeaderboard_Statics
UObject* (*const Z_Construct_UClass_USIK_DeleteLeaderboard_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_DeleteLeaderboard_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_DeleteLeaderboard_Statics::ClassParams = {
	&USIK_DeleteLeaderboard::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_DeleteLeaderboard_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_DeleteLeaderboard_Statics::Class_MetaDataParams)
};
void USIK_DeleteLeaderboard::StaticRegisterNativesUSIK_DeleteLeaderboard()
{
	UClass* Class = USIK_DeleteLeaderboard::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_DeleteLeaderboard_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_DeleteLeaderboard()
{
	if (!Z_Registration_Info_UClass_USIK_DeleteLeaderboard.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_DeleteLeaderboard.OuterSingleton, Z_Construct_UClass_USIK_DeleteLeaderboard_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_DeleteLeaderboard.OuterSingleton;
}
USIK_DeleteLeaderboard::USIK_DeleteLeaderboard(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_DeleteLeaderboard);
USIK_DeleteLeaderboard::~USIK_DeleteLeaderboard() {}
// ********** End Class USIK_DeleteLeaderboard *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Leaderboards_SIK_DeleteLeaderboard_h__Script_SteamWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_DeleteLeaderboard, USIK_DeleteLeaderboard::StaticClass, TEXT("USIK_DeleteLeaderboard"), &Z_Registration_Info_UClass_USIK_DeleteLeaderboard, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_DeleteLeaderboard), 3287472100U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Leaderboards_SIK_DeleteLeaderboard_h__Script_SteamWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Leaderboards_SIK_DeleteLeaderboard_h__Script_SteamWeb_559033794{
	TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Leaderboards_SIK_DeleteLeaderboard_h__Script_SteamWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Leaderboards_SIK_DeleteLeaderboard_h__Script_SteamWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
