// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/GameServers/SIK_CreateAccount.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_CreateAccount() {}

// ********** Begin Cross Module References ********************************************************
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_CreateAccount();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_CreateAccount_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USIK_CreateAccount Function CreateAccount ********************************
struct Z_Construct_UFunction_USIK_CreateAccount_CreateAccount_Statics
{
	struct SIK_CreateAccount_eventCreateAccount_Parms
	{
		FString Key;
		int32 AppId;
		FString Memo;
		USIK_CreateAccount* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|GameServers" },
		{ "Comment", "//Creates a persistent game server account\n" },
		{ "ModuleRelativePath", "Functions/GameServers/SIK_CreateAccount.h" },
		{ "ToolTip", "Creates a persistent game server account" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Memo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function CreateAccount constinit property declarations *************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Memo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CreateAccount constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CreateAccount Property Definitions ************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_CreateAccount_CreateAccount_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_CreateAccount_eventCreateAccount_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_CreateAccount_CreateAccount_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_CreateAccount_eventCreateAccount_Parms, AppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppId_MetaData), NewProp_AppId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_CreateAccount_CreateAccount_Statics::NewProp_Memo = { "Memo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_CreateAccount_eventCreateAccount_Parms, Memo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Memo_MetaData), NewProp_Memo_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_CreateAccount_CreateAccount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_CreateAccount_eventCreateAccount_Parms, ReturnValue), Z_Construct_UClass_USIK_CreateAccount_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_CreateAccount_CreateAccount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_CreateAccount_CreateAccount_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_CreateAccount_CreateAccount_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_CreateAccount_CreateAccount_Statics::NewProp_Memo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_CreateAccount_CreateAccount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_CreateAccount_CreateAccount_Statics::PropPointers) < 2048);
// ********** End Function CreateAccount Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_CreateAccount_CreateAccount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_CreateAccount, nullptr, "CreateAccount", 	Z_Construct_UFunction_USIK_CreateAccount_CreateAccount_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_CreateAccount_CreateAccount_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_CreateAccount_CreateAccount_Statics::SIK_CreateAccount_eventCreateAccount_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_CreateAccount_CreateAccount_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_CreateAccount_CreateAccount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_CreateAccount_CreateAccount_Statics::SIK_CreateAccount_eventCreateAccount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_CreateAccount_CreateAccount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_CreateAccount_CreateAccount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_CreateAccount::execCreateAccount)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_Memo);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_CreateAccount**)Z_Param__Result=USIK_CreateAccount::CreateAccount(Z_Param_Key,Z_Param_Out_AppId,Z_Param_Memo);
	P_NATIVE_END;
}
// ********** End Class USIK_CreateAccount Function CreateAccount **********************************

// ********** Begin Class USIK_CreateAccount *******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_CreateAccount;
UClass* USIK_CreateAccount::GetPrivateStaticClass()
{
	using TClass = USIK_CreateAccount;
	if (!Z_Registration_Info_UClass_USIK_CreateAccount.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_CreateAccount"),
			Z_Registration_Info_UClass_USIK_CreateAccount.InnerSingleton,
			StaticRegisterNativesUSIK_CreateAccount,
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
	return Z_Registration_Info_UClass_USIK_CreateAccount.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_CreateAccount_NoRegister()
{
	return USIK_CreateAccount::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_CreateAccount_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/GameServers/SIK_CreateAccount.h" },
		{ "ModuleRelativePath", "Functions/GameServers/SIK_CreateAccount.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_CreateAccount constinit property declarations ***********************
// ********** End Class USIK_CreateAccount constinit property declarations *************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CreateAccount"), .Pointer = &USIK_CreateAccount::execCreateAccount },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_CreateAccount_CreateAccount, "CreateAccount" }, // 2218229307
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_CreateAccount>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_CreateAccount_Statics
UObject* (*const Z_Construct_UClass_USIK_CreateAccount_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_CreateAccount_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_CreateAccount_Statics::ClassParams = {
	&USIK_CreateAccount::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_CreateAccount_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_CreateAccount_Statics::Class_MetaDataParams)
};
void USIK_CreateAccount::StaticRegisterNativesUSIK_CreateAccount()
{
	UClass* Class = USIK_CreateAccount::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_CreateAccount_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_CreateAccount()
{
	if (!Z_Registration_Info_UClass_USIK_CreateAccount.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_CreateAccount.OuterSingleton, Z_Construct_UClass_USIK_CreateAccount_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_CreateAccount.OuterSingleton;
}
USIK_CreateAccount::USIK_CreateAccount(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_CreateAccount);
USIK_CreateAccount::~USIK_CreateAccount() {}
// ********** End Class USIK_CreateAccount *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameServers_SIK_CreateAccount_h__Script_SteamWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_CreateAccount, USIK_CreateAccount::StaticClass, TEXT("USIK_CreateAccount"), &Z_Registration_Info_UClass_USIK_CreateAccount, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_CreateAccount), 421589802U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameServers_SIK_CreateAccount_h__Script_SteamWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameServers_SIK_CreateAccount_h__Script_SteamWeb_3103263005{
	TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameServers_SIK_CreateAccount_h__Script_SteamWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameServers_SIK_CreateAccount_h__Script_SteamWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
