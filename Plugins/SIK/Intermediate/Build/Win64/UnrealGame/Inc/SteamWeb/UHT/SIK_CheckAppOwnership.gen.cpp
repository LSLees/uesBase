// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/User/SIK_CheckAppOwnership.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_CheckAppOwnership() {}

// ********** Begin Cross Module References ********************************************************
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_CheckAppOwnership();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_CheckAppOwnership_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USIK_CheckAppOwnership Function CheckAppOwnership ************************
struct Z_Construct_UFunction_USIK_CheckAppOwnership_CheckAppOwnership_Statics
{
	struct SIK_CheckAppOwnership_eventCheckAppOwnership_Parms
	{
		FString Key;
		int64 SteamId;
		int32 AppId;
		USIK_CheckAppOwnership* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|User" },
		{ "Comment", "//Checks if the specified user owns the app.\n" },
		{ "ModuleRelativePath", "Functions/User/SIK_CheckAppOwnership.h" },
		{ "ToolTip", "Checks if the specified user owns the app." },
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
#endif // WITH_METADATA

// ********** Begin Function CheckAppOwnership constinit property declarations *********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CheckAppOwnership constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CheckAppOwnership Property Definitions ********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_CheckAppOwnership_CheckAppOwnership_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_CheckAppOwnership_eventCheckAppOwnership_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_CheckAppOwnership_CheckAppOwnership_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_CheckAppOwnership_eventCheckAppOwnership_Parms, SteamId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamId_MetaData), NewProp_SteamId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_CheckAppOwnership_CheckAppOwnership_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_CheckAppOwnership_eventCheckAppOwnership_Parms, AppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppId_MetaData), NewProp_AppId_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_CheckAppOwnership_CheckAppOwnership_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_CheckAppOwnership_eventCheckAppOwnership_Parms, ReturnValue), Z_Construct_UClass_USIK_CheckAppOwnership_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_CheckAppOwnership_CheckAppOwnership_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_CheckAppOwnership_CheckAppOwnership_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_CheckAppOwnership_CheckAppOwnership_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_CheckAppOwnership_CheckAppOwnership_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_CheckAppOwnership_CheckAppOwnership_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_CheckAppOwnership_CheckAppOwnership_Statics::PropPointers) < 2048);
// ********** End Function CheckAppOwnership Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_CheckAppOwnership_CheckAppOwnership_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_CheckAppOwnership, nullptr, "CheckAppOwnership", 	Z_Construct_UFunction_USIK_CheckAppOwnership_CheckAppOwnership_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_CheckAppOwnership_CheckAppOwnership_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_CheckAppOwnership_CheckAppOwnership_Statics::SIK_CheckAppOwnership_eventCheckAppOwnership_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_CheckAppOwnership_CheckAppOwnership_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_CheckAppOwnership_CheckAppOwnership_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_CheckAppOwnership_CheckAppOwnership_Statics::SIK_CheckAppOwnership_eventCheckAppOwnership_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_CheckAppOwnership_CheckAppOwnership()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_CheckAppOwnership_CheckAppOwnership_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_CheckAppOwnership::execCheckAppOwnership)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_SteamId);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_CheckAppOwnership**)Z_Param__Result=USIK_CheckAppOwnership::CheckAppOwnership(Z_Param_Key,Z_Param_Out_SteamId,Z_Param_Out_AppId);
	P_NATIVE_END;
}
// ********** End Class USIK_CheckAppOwnership Function CheckAppOwnership **************************

// ********** Begin Class USIK_CheckAppOwnership ***************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_CheckAppOwnership;
UClass* USIK_CheckAppOwnership::GetPrivateStaticClass()
{
	using TClass = USIK_CheckAppOwnership;
	if (!Z_Registration_Info_UClass_USIK_CheckAppOwnership.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_CheckAppOwnership"),
			Z_Registration_Info_UClass_USIK_CheckAppOwnership.InnerSingleton,
			StaticRegisterNativesUSIK_CheckAppOwnership,
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
	return Z_Registration_Info_UClass_USIK_CheckAppOwnership.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_CheckAppOwnership_NoRegister()
{
	return USIK_CheckAppOwnership::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_CheckAppOwnership_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/User/SIK_CheckAppOwnership.h" },
		{ "ModuleRelativePath", "Functions/User/SIK_CheckAppOwnership.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_CheckAppOwnership constinit property declarations *******************
// ********** End Class USIK_CheckAppOwnership constinit property declarations *********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CheckAppOwnership"), .Pointer = &USIK_CheckAppOwnership::execCheckAppOwnership },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_CheckAppOwnership_CheckAppOwnership, "CheckAppOwnership" }, // 1036226726
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_CheckAppOwnership>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_CheckAppOwnership_Statics
UObject* (*const Z_Construct_UClass_USIK_CheckAppOwnership_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_CheckAppOwnership_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_CheckAppOwnership_Statics::ClassParams = {
	&USIK_CheckAppOwnership::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_CheckAppOwnership_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_CheckAppOwnership_Statics::Class_MetaDataParams)
};
void USIK_CheckAppOwnership::StaticRegisterNativesUSIK_CheckAppOwnership()
{
	UClass* Class = USIK_CheckAppOwnership::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_CheckAppOwnership_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_CheckAppOwnership()
{
	if (!Z_Registration_Info_UClass_USIK_CheckAppOwnership.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_CheckAppOwnership.OuterSingleton, Z_Construct_UClass_USIK_CheckAppOwnership_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_CheckAppOwnership.OuterSingleton;
}
USIK_CheckAppOwnership::USIK_CheckAppOwnership(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_CheckAppOwnership);
USIK_CheckAppOwnership::~USIK_CheckAppOwnership() {}
// ********** End Class USIK_CheckAppOwnership *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_User_SIK_CheckAppOwnership_h__Script_SteamWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_CheckAppOwnership, USIK_CheckAppOwnership::StaticClass, TEXT("USIK_CheckAppOwnership"), &Z_Registration_Info_UClass_USIK_CheckAppOwnership, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_CheckAppOwnership), 1701920652U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_User_SIK_CheckAppOwnership_h__Script_SteamWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_User_SIK_CheckAppOwnership_h__Script_SteamWeb_841666387{
	TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_User_SIK_CheckAppOwnership_h__Script_SteamWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_User_SIK_CheckAppOwnership_h__Script_SteamWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
