// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/Economy/SIK_StartTrade.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_StartTrade() {}

// ********** Begin Cross Module References ********************************************************
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_StartTrade();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_StartTrade_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USIK_StartTrade Function StartTrade **************************************
struct Z_Construct_UFunction_USIK_StartTrade_StartTrade_Statics
{
	struct SIK_StartTrade_eventStartTrade_Parms
	{
		FString Key;
		int32 AppId;
		int64 PartyA;
		int64 PartyB;
		USIK_StartTrade* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|Economy" },
		{ "ModuleRelativePath", "Functions/Economy/SIK_StartTrade.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartyA_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartyB_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function StartTrade constinit property declarations ****************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_PartyA;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_PartyB;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function StartTrade constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function StartTrade Property Definitions ***************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_StartTrade_StartTrade_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_StartTrade_eventStartTrade_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_StartTrade_StartTrade_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_StartTrade_eventStartTrade_Parms, AppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppId_MetaData), NewProp_AppId_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_StartTrade_StartTrade_Statics::NewProp_PartyA = { "PartyA", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_StartTrade_eventStartTrade_Parms, PartyA), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartyA_MetaData), NewProp_PartyA_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_StartTrade_StartTrade_Statics::NewProp_PartyB = { "PartyB", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_StartTrade_eventStartTrade_Parms, PartyB), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartyB_MetaData), NewProp_PartyB_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_StartTrade_StartTrade_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_StartTrade_eventStartTrade_Parms, ReturnValue), Z_Construct_UClass_USIK_StartTrade_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_StartTrade_StartTrade_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_StartTrade_StartTrade_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_StartTrade_StartTrade_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_StartTrade_StartTrade_Statics::NewProp_PartyA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_StartTrade_StartTrade_Statics::NewProp_PartyB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_StartTrade_StartTrade_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_StartTrade_StartTrade_Statics::PropPointers) < 2048);
// ********** End Function StartTrade Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_StartTrade_StartTrade_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_StartTrade, nullptr, "StartTrade", 	Z_Construct_UFunction_USIK_StartTrade_StartTrade_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_StartTrade_StartTrade_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_StartTrade_StartTrade_Statics::SIK_StartTrade_eventStartTrade_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_StartTrade_StartTrade_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_StartTrade_StartTrade_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_StartTrade_StartTrade_Statics::SIK_StartTrade_eventStartTrade_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_StartTrade_StartTrade()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_StartTrade_StartTrade_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_StartTrade::execStartTrade)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppId);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_PartyA);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_PartyB);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_StartTrade**)Z_Param__Result=USIK_StartTrade::StartTrade(Z_Param_Key,Z_Param_Out_AppId,Z_Param_Out_PartyA,Z_Param_Out_PartyB);
	P_NATIVE_END;
}
// ********** End Class USIK_StartTrade Function StartTrade ****************************************

// ********** Begin Class USIK_StartTrade **********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_StartTrade;
UClass* USIK_StartTrade::GetPrivateStaticClass()
{
	using TClass = USIK_StartTrade;
	if (!Z_Registration_Info_UClass_USIK_StartTrade.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_StartTrade"),
			Z_Registration_Info_UClass_USIK_StartTrade.InnerSingleton,
			StaticRegisterNativesUSIK_StartTrade,
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
	return Z_Registration_Info_UClass_USIK_StartTrade.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_StartTrade_NoRegister()
{
	return USIK_StartTrade::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_StartTrade_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/Economy/SIK_StartTrade.h" },
		{ "ModuleRelativePath", "Functions/Economy/SIK_StartTrade.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_StartTrade constinit property declarations **************************
// ********** End Class USIK_StartTrade constinit property declarations ****************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("StartTrade"), .Pointer = &USIK_StartTrade::execStartTrade },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_StartTrade_StartTrade, "StartTrade" }, // 2886795775
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_StartTrade>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_StartTrade_Statics
UObject* (*const Z_Construct_UClass_USIK_StartTrade_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_StartTrade_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_StartTrade_Statics::ClassParams = {
	&USIK_StartTrade::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_StartTrade_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_StartTrade_Statics::Class_MetaDataParams)
};
void USIK_StartTrade::StaticRegisterNativesUSIK_StartTrade()
{
	UClass* Class = USIK_StartTrade::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_StartTrade_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_StartTrade()
{
	if (!Z_Registration_Info_UClass_USIK_StartTrade.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_StartTrade.OuterSingleton, Z_Construct_UClass_USIK_StartTrade_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_StartTrade.OuterSingleton;
}
USIK_StartTrade::USIK_StartTrade(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_StartTrade);
USIK_StartTrade::~USIK_StartTrade() {}
// ********** End Class USIK_StartTrade ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Economy_SIK_StartTrade_h__Script_SteamWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_StartTrade, USIK_StartTrade::StaticClass, TEXT("USIK_StartTrade"), &Z_Registration_Info_UClass_USIK_StartTrade, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_StartTrade), 419370057U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Economy_SIK_StartTrade_h__Script_SteamWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Economy_SIK_StartTrade_h__Script_SteamWeb_2884131468{
	TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Economy_SIK_StartTrade_h__Script_SteamWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Economy_SIK_StartTrade_h__Script_SteamWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
