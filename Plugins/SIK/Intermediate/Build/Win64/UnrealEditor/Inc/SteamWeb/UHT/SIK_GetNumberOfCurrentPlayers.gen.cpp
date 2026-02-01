// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/UserStats/SIK_GetNumberOfCurrentPlayers.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_GetNumberOfCurrentPlayers() {}

// ********** Begin Cross Module References ********************************************************
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetNumberOfCurrentPlayers();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetNumberOfCurrentPlayers_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USIK_GetNumberOfCurrentPlayers Function GetNumberOfCurrentPlayers ********
struct Z_Construct_UFunction_USIK_GetNumberOfCurrentPlayers_GetNumberOfCurrentPlayers_Statics
{
	struct SIK_GetNumberOfCurrentPlayers_eventGetNumberOfCurrentPlayers_Parms
	{
		int32 AppId;
		USIK_GetNumberOfCurrentPlayers* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|UserStats" },
		{ "Comment", "//Gets the total number of players currently active in the specified app on Steam.\n" },
		{ "ModuleRelativePath", "Functions/UserStats/SIK_GetNumberOfCurrentPlayers.h" },
		{ "ToolTip", "Gets the total number of players currently active in the specified app on Steam." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetNumberOfCurrentPlayers constinit property declarations *************
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetNumberOfCurrentPlayers constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetNumberOfCurrentPlayers Property Definitions ************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_GetNumberOfCurrentPlayers_GetNumberOfCurrentPlayers_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetNumberOfCurrentPlayers_eventGetNumberOfCurrentPlayers_Parms, AppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppId_MetaData), NewProp_AppId_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_GetNumberOfCurrentPlayers_GetNumberOfCurrentPlayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetNumberOfCurrentPlayers_eventGetNumberOfCurrentPlayers_Parms, ReturnValue), Z_Construct_UClass_USIK_GetNumberOfCurrentPlayers_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GetNumberOfCurrentPlayers_GetNumberOfCurrentPlayers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetNumberOfCurrentPlayers_GetNumberOfCurrentPlayers_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetNumberOfCurrentPlayers_GetNumberOfCurrentPlayers_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetNumberOfCurrentPlayers_GetNumberOfCurrentPlayers_Statics::PropPointers) < 2048);
// ********** End Function GetNumberOfCurrentPlayers Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GetNumberOfCurrentPlayers_GetNumberOfCurrentPlayers_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_GetNumberOfCurrentPlayers, nullptr, "GetNumberOfCurrentPlayers", 	Z_Construct_UFunction_USIK_GetNumberOfCurrentPlayers_GetNumberOfCurrentPlayers_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetNumberOfCurrentPlayers_GetNumberOfCurrentPlayers_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_GetNumberOfCurrentPlayers_GetNumberOfCurrentPlayers_Statics::SIK_GetNumberOfCurrentPlayers_eventGetNumberOfCurrentPlayers_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetNumberOfCurrentPlayers_GetNumberOfCurrentPlayers_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GetNumberOfCurrentPlayers_GetNumberOfCurrentPlayers_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_GetNumberOfCurrentPlayers_GetNumberOfCurrentPlayers_Statics::SIK_GetNumberOfCurrentPlayers_eventGetNumberOfCurrentPlayers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GetNumberOfCurrentPlayers_GetNumberOfCurrentPlayers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GetNumberOfCurrentPlayers_GetNumberOfCurrentPlayers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GetNumberOfCurrentPlayers::execGetNumberOfCurrentPlayers)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_GetNumberOfCurrentPlayers**)Z_Param__Result=USIK_GetNumberOfCurrentPlayers::GetNumberOfCurrentPlayers(Z_Param_Out_AppId);
	P_NATIVE_END;
}
// ********** End Class USIK_GetNumberOfCurrentPlayers Function GetNumberOfCurrentPlayers **********

// ********** Begin Class USIK_GetNumberOfCurrentPlayers *******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_GetNumberOfCurrentPlayers;
UClass* USIK_GetNumberOfCurrentPlayers::GetPrivateStaticClass()
{
	using TClass = USIK_GetNumberOfCurrentPlayers;
	if (!Z_Registration_Info_UClass_USIK_GetNumberOfCurrentPlayers.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_GetNumberOfCurrentPlayers"),
			Z_Registration_Info_UClass_USIK_GetNumberOfCurrentPlayers.InnerSingleton,
			StaticRegisterNativesUSIK_GetNumberOfCurrentPlayers,
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
	return Z_Registration_Info_UClass_USIK_GetNumberOfCurrentPlayers.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_GetNumberOfCurrentPlayers_NoRegister()
{
	return USIK_GetNumberOfCurrentPlayers::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_GetNumberOfCurrentPlayers_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/UserStats/SIK_GetNumberOfCurrentPlayers.h" },
		{ "ModuleRelativePath", "Functions/UserStats/SIK_GetNumberOfCurrentPlayers.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_GetNumberOfCurrentPlayers constinit property declarations ***********
// ********** End Class USIK_GetNumberOfCurrentPlayers constinit property declarations *************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetNumberOfCurrentPlayers"), .Pointer = &USIK_GetNumberOfCurrentPlayers::execGetNumberOfCurrentPlayers },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_GetNumberOfCurrentPlayers_GetNumberOfCurrentPlayers, "GetNumberOfCurrentPlayers" }, // 2944795884
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_GetNumberOfCurrentPlayers>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_GetNumberOfCurrentPlayers_Statics
UObject* (*const Z_Construct_UClass_USIK_GetNumberOfCurrentPlayers_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetNumberOfCurrentPlayers_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_GetNumberOfCurrentPlayers_Statics::ClassParams = {
	&USIK_GetNumberOfCurrentPlayers::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetNumberOfCurrentPlayers_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_GetNumberOfCurrentPlayers_Statics::Class_MetaDataParams)
};
void USIK_GetNumberOfCurrentPlayers::StaticRegisterNativesUSIK_GetNumberOfCurrentPlayers()
{
	UClass* Class = USIK_GetNumberOfCurrentPlayers::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_GetNumberOfCurrentPlayers_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_GetNumberOfCurrentPlayers()
{
	if (!Z_Registration_Info_UClass_USIK_GetNumberOfCurrentPlayers.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_GetNumberOfCurrentPlayers.OuterSingleton, Z_Construct_UClass_USIK_GetNumberOfCurrentPlayers_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_GetNumberOfCurrentPlayers.OuterSingleton;
}
USIK_GetNumberOfCurrentPlayers::USIK_GetNumberOfCurrentPlayers(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_GetNumberOfCurrentPlayers);
USIK_GetNumberOfCurrentPlayers::~USIK_GetNumberOfCurrentPlayers() {}
// ********** End Class USIK_GetNumberOfCurrentPlayers *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_UserStats_SIK_GetNumberOfCurrentPlayers_h__Script_SteamWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_GetNumberOfCurrentPlayers, USIK_GetNumberOfCurrentPlayers::StaticClass, TEXT("USIK_GetNumberOfCurrentPlayers"), &Z_Registration_Info_UClass_USIK_GetNumberOfCurrentPlayers, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_GetNumberOfCurrentPlayers), 527898607U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_UserStats_SIK_GetNumberOfCurrentPlayers_h__Script_SteamWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_UserStats_SIK_GetNumberOfCurrentPlayers_h__Script_SteamWeb_1429411178{
	TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_UserStats_SIK_GetNumberOfCurrentPlayers_h__Script_SteamWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_UserStats_SIK_GetNumberOfCurrentPlayers_h__Script_SteamWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
