// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/GameServers/SIK_QueryLoginToken.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_QueryLoginToken() {}

// ********** Begin Cross Module References ********************************************************
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_QueryLoginToken();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_QueryLoginToken_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USIK_QueryLoginToken Function QueryLoginToken ****************************
struct Z_Construct_UFunction_USIK_QueryLoginToken_QueryLoginToken_Statics
{
	struct SIK_QueryLoginToken_eventQueryLoginToken_Parms
	{
		FString Key;
		FString LoginToken;
		USIK_QueryLoginToken* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|GameServers" },
		{ "Comment", "/*QueryLoginToken\n\x09GET https://api.steampowered.com/IGameServersService/QueryLoginToken/v1/\n\x09Name\x09Type\x09Required\x09""Description\n\x09key\x09string\x09\xe2\x9c\x94\x09Steamworks Web API user authentication key.\n\x09login_token\x09string\x09\xe2\x9c\x94\x09Login token to query\n\n\x09Queries the status of the specified token, which must be owned by your game server account.\n\x09*/" },
		{ "ModuleRelativePath", "Functions/GameServers/SIK_QueryLoginToken.h" },
		{ "ToolTip", "QueryLoginToken\n       GET https://api.steampowered.com/IGameServersService/QueryLoginToken/v1/\n       Name    Type    Required        Description\n       key     string  \xe2\x9c\x94       Steamworks Web API user authentication key.\n       login_token     string  \xe2\x9c\x94       Login token to query\n\n       Queries the status of the specified token, which must be owned by your game server account." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoginToken_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function QueryLoginToken constinit property declarations ***********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LoginToken;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function QueryLoginToken constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function QueryLoginToken Property Definitions **********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_QueryLoginToken_QueryLoginToken_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_QueryLoginToken_eventQueryLoginToken_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_QueryLoginToken_QueryLoginToken_Statics::NewProp_LoginToken = { "LoginToken", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_QueryLoginToken_eventQueryLoginToken_Parms, LoginToken), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoginToken_MetaData), NewProp_LoginToken_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_QueryLoginToken_QueryLoginToken_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_QueryLoginToken_eventQueryLoginToken_Parms, ReturnValue), Z_Construct_UClass_USIK_QueryLoginToken_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_QueryLoginToken_QueryLoginToken_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_QueryLoginToken_QueryLoginToken_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_QueryLoginToken_QueryLoginToken_Statics::NewProp_LoginToken,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_QueryLoginToken_QueryLoginToken_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_QueryLoginToken_QueryLoginToken_Statics::PropPointers) < 2048);
// ********** End Function QueryLoginToken Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_QueryLoginToken_QueryLoginToken_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_QueryLoginToken, nullptr, "QueryLoginToken", 	Z_Construct_UFunction_USIK_QueryLoginToken_QueryLoginToken_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_QueryLoginToken_QueryLoginToken_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_QueryLoginToken_QueryLoginToken_Statics::SIK_QueryLoginToken_eventQueryLoginToken_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_QueryLoginToken_QueryLoginToken_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_QueryLoginToken_QueryLoginToken_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_QueryLoginToken_QueryLoginToken_Statics::SIK_QueryLoginToken_eventQueryLoginToken_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_QueryLoginToken_QueryLoginToken()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_QueryLoginToken_QueryLoginToken_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_QueryLoginToken::execQueryLoginToken)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_LoginToken);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_QueryLoginToken**)Z_Param__Result=USIK_QueryLoginToken::QueryLoginToken(Z_Param_Key,Z_Param_LoginToken);
	P_NATIVE_END;
}
// ********** End Class USIK_QueryLoginToken Function QueryLoginToken ******************************

// ********** Begin Class USIK_QueryLoginToken *****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_QueryLoginToken;
UClass* USIK_QueryLoginToken::GetPrivateStaticClass()
{
	using TClass = USIK_QueryLoginToken;
	if (!Z_Registration_Info_UClass_USIK_QueryLoginToken.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_QueryLoginToken"),
			Z_Registration_Info_UClass_USIK_QueryLoginToken.InnerSingleton,
			StaticRegisterNativesUSIK_QueryLoginToken,
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
	return Z_Registration_Info_UClass_USIK_QueryLoginToken.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_QueryLoginToken_NoRegister()
{
	return USIK_QueryLoginToken::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_QueryLoginToken_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/GameServers/SIK_QueryLoginToken.h" },
		{ "ModuleRelativePath", "Functions/GameServers/SIK_QueryLoginToken.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_QueryLoginToken constinit property declarations *********************
// ********** End Class USIK_QueryLoginToken constinit property declarations ***********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("QueryLoginToken"), .Pointer = &USIK_QueryLoginToken::execQueryLoginToken },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_QueryLoginToken_QueryLoginToken, "QueryLoginToken" }, // 1750209150
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_QueryLoginToken>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_QueryLoginToken_Statics
UObject* (*const Z_Construct_UClass_USIK_QueryLoginToken_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_QueryLoginToken_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_QueryLoginToken_Statics::ClassParams = {
	&USIK_QueryLoginToken::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_QueryLoginToken_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_QueryLoginToken_Statics::Class_MetaDataParams)
};
void USIK_QueryLoginToken::StaticRegisterNativesUSIK_QueryLoginToken()
{
	UClass* Class = USIK_QueryLoginToken::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_QueryLoginToken_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_QueryLoginToken()
{
	if (!Z_Registration_Info_UClass_USIK_QueryLoginToken.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_QueryLoginToken.OuterSingleton, Z_Construct_UClass_USIK_QueryLoginToken_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_QueryLoginToken.OuterSingleton;
}
USIK_QueryLoginToken::USIK_QueryLoginToken(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_QueryLoginToken);
USIK_QueryLoginToken::~USIK_QueryLoginToken() {}
// ********** End Class USIK_QueryLoginToken *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameServers_SIK_QueryLoginToken_h__Script_SteamWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_QueryLoginToken, USIK_QueryLoginToken::StaticClass, TEXT("USIK_QueryLoginToken"), &Z_Registration_Info_UClass_USIK_QueryLoginToken, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_QueryLoginToken), 2595796961U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameServers_SIK_QueryLoginToken_h__Script_SteamWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameServers_SIK_QueryLoginToken_h__Script_SteamWeb_1359137174{
	TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameServers_SIK_QueryLoginToken_h__Script_SteamWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameServers_SIK_QueryLoginToken_h__Script_SteamWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
