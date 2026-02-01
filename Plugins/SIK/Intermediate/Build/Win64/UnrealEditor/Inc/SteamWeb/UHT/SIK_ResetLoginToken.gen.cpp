// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/GameServers/SIK_ResetLoginToken.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_ResetLoginToken() {}

// ********** Begin Cross Module References ********************************************************
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_ResetLoginToken();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_ResetLoginToken_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USIK_ResetLoginToken Function ResetLoginToken ****************************
struct Z_Construct_UFunction_USIK_ResetLoginToken_ResetLoginToken_Statics
{
	struct SIK_ResetLoginToken_eventResetLoginToken_Parms
	{
		FString Key;
		int64 SteamId;
		USIK_ResetLoginToken* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|GameServers" },
		{ "Comment", "//Generates a new login token for the specified game server\n" },
		{ "ModuleRelativePath", "Functions/GameServers/SIK_ResetLoginToken.h" },
		{ "ToolTip", "Generates a new login token for the specified game server" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ResetLoginToken constinit property declarations ***********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ResetLoginToken constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ResetLoginToken Property Definitions **********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_ResetLoginToken_ResetLoginToken_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ResetLoginToken_eventResetLoginToken_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_ResetLoginToken_ResetLoginToken_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ResetLoginToken_eventResetLoginToken_Parms, SteamId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamId_MetaData), NewProp_SteamId_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_ResetLoginToken_ResetLoginToken_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ResetLoginToken_eventResetLoginToken_Parms, ReturnValue), Z_Construct_UClass_USIK_ResetLoginToken_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_ResetLoginToken_ResetLoginToken_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ResetLoginToken_ResetLoginToken_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ResetLoginToken_ResetLoginToken_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ResetLoginToken_ResetLoginToken_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_ResetLoginToken_ResetLoginToken_Statics::PropPointers) < 2048);
// ********** End Function ResetLoginToken Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_ResetLoginToken_ResetLoginToken_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_ResetLoginToken, nullptr, "ResetLoginToken", 	Z_Construct_UFunction_USIK_ResetLoginToken_ResetLoginToken_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_ResetLoginToken_ResetLoginToken_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_ResetLoginToken_ResetLoginToken_Statics::SIK_ResetLoginToken_eventResetLoginToken_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_ResetLoginToken_ResetLoginToken_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_ResetLoginToken_ResetLoginToken_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_ResetLoginToken_ResetLoginToken_Statics::SIK_ResetLoginToken_eventResetLoginToken_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_ResetLoginToken_ResetLoginToken()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_ResetLoginToken_ResetLoginToken_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_ResetLoginToken::execResetLoginToken)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_SteamId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_ResetLoginToken**)Z_Param__Result=USIK_ResetLoginToken::ResetLoginToken(Z_Param_Key,Z_Param_Out_SteamId);
	P_NATIVE_END;
}
// ********** End Class USIK_ResetLoginToken Function ResetLoginToken ******************************

// ********** Begin Class USIK_ResetLoginToken *****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_ResetLoginToken;
UClass* USIK_ResetLoginToken::GetPrivateStaticClass()
{
	using TClass = USIK_ResetLoginToken;
	if (!Z_Registration_Info_UClass_USIK_ResetLoginToken.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_ResetLoginToken"),
			Z_Registration_Info_UClass_USIK_ResetLoginToken.InnerSingleton,
			StaticRegisterNativesUSIK_ResetLoginToken,
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
	return Z_Registration_Info_UClass_USIK_ResetLoginToken.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_ResetLoginToken_NoRegister()
{
	return USIK_ResetLoginToken::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_ResetLoginToken_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/GameServers/SIK_ResetLoginToken.h" },
		{ "ModuleRelativePath", "Functions/GameServers/SIK_ResetLoginToken.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_ResetLoginToken constinit property declarations *********************
// ********** End Class USIK_ResetLoginToken constinit property declarations ***********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ResetLoginToken"), .Pointer = &USIK_ResetLoginToken::execResetLoginToken },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_ResetLoginToken_ResetLoginToken, "ResetLoginToken" }, // 3986816592
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_ResetLoginToken>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_ResetLoginToken_Statics
UObject* (*const Z_Construct_UClass_USIK_ResetLoginToken_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_ResetLoginToken_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_ResetLoginToken_Statics::ClassParams = {
	&USIK_ResetLoginToken::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_ResetLoginToken_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_ResetLoginToken_Statics::Class_MetaDataParams)
};
void USIK_ResetLoginToken::StaticRegisterNativesUSIK_ResetLoginToken()
{
	UClass* Class = USIK_ResetLoginToken::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_ResetLoginToken_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_ResetLoginToken()
{
	if (!Z_Registration_Info_UClass_USIK_ResetLoginToken.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_ResetLoginToken.OuterSingleton, Z_Construct_UClass_USIK_ResetLoginToken_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_ResetLoginToken.OuterSingleton;
}
USIK_ResetLoginToken::USIK_ResetLoginToken(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_ResetLoginToken);
USIK_ResetLoginToken::~USIK_ResetLoginToken() {}
// ********** End Class USIK_ResetLoginToken *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameServers_SIK_ResetLoginToken_h__Script_SteamWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_ResetLoginToken, USIK_ResetLoginToken::StaticClass, TEXT("USIK_ResetLoginToken"), &Z_Registration_Info_UClass_USIK_ResetLoginToken, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_ResetLoginToken), 3802990840U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameServers_SIK_ResetLoginToken_h__Script_SteamWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameServers_SIK_ResetLoginToken_h__Script_SteamWeb_539004818{
	TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameServers_SIK_ResetLoginToken_h__Script_SteamWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameServers_SIK_ResetLoginToken_h__Script_SteamWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
