// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/GameServers/SIK_DeleteAccount.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_DeleteAccount() {}

// ********** Begin Cross Module References ********************************************************
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_DeleteAccount();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_DeleteAccount_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USIK_DeleteAccount Function DeleteAccount ********************************
struct Z_Construct_UFunction_USIK_DeleteAccount_DeleteAccount_Statics
{
	struct SIK_DeleteAccount_eventDeleteAccount_Parms
	{
		FString Key;
		int64 SteamId;
		USIK_DeleteAccount* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|GameServers" },
		{ "Comment", "//Deletes a persistent game server account\n" },
		{ "ModuleRelativePath", "Functions/GameServers/SIK_DeleteAccount.h" },
		{ "ToolTip", "Deletes a persistent game server account" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function DeleteAccount constinit property declarations *************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DeleteAccount constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DeleteAccount Property Definitions ************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_DeleteAccount_DeleteAccount_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_DeleteAccount_eventDeleteAccount_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_DeleteAccount_DeleteAccount_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_DeleteAccount_eventDeleteAccount_Parms, SteamId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamId_MetaData), NewProp_SteamId_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_DeleteAccount_DeleteAccount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_DeleteAccount_eventDeleteAccount_Parms, ReturnValue), Z_Construct_UClass_USIK_DeleteAccount_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_DeleteAccount_DeleteAccount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_DeleteAccount_DeleteAccount_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_DeleteAccount_DeleteAccount_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_DeleteAccount_DeleteAccount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_DeleteAccount_DeleteAccount_Statics::PropPointers) < 2048);
// ********** End Function DeleteAccount Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_DeleteAccount_DeleteAccount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_DeleteAccount, nullptr, "DeleteAccount", 	Z_Construct_UFunction_USIK_DeleteAccount_DeleteAccount_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_DeleteAccount_DeleteAccount_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_DeleteAccount_DeleteAccount_Statics::SIK_DeleteAccount_eventDeleteAccount_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_DeleteAccount_DeleteAccount_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_DeleteAccount_DeleteAccount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_DeleteAccount_DeleteAccount_Statics::SIK_DeleteAccount_eventDeleteAccount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_DeleteAccount_DeleteAccount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_DeleteAccount_DeleteAccount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_DeleteAccount::execDeleteAccount)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_SteamId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_DeleteAccount**)Z_Param__Result=USIK_DeleteAccount::DeleteAccount(Z_Param_Key,Z_Param_Out_SteamId);
	P_NATIVE_END;
}
// ********** End Class USIK_DeleteAccount Function DeleteAccount **********************************

// ********** Begin Class USIK_DeleteAccount *******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_DeleteAccount;
UClass* USIK_DeleteAccount::GetPrivateStaticClass()
{
	using TClass = USIK_DeleteAccount;
	if (!Z_Registration_Info_UClass_USIK_DeleteAccount.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_DeleteAccount"),
			Z_Registration_Info_UClass_USIK_DeleteAccount.InnerSingleton,
			StaticRegisterNativesUSIK_DeleteAccount,
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
	return Z_Registration_Info_UClass_USIK_DeleteAccount.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_DeleteAccount_NoRegister()
{
	return USIK_DeleteAccount::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_DeleteAccount_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/GameServers/SIK_DeleteAccount.h" },
		{ "ModuleRelativePath", "Functions/GameServers/SIK_DeleteAccount.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_DeleteAccount constinit property declarations ***********************
// ********** End Class USIK_DeleteAccount constinit property declarations *************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("DeleteAccount"), .Pointer = &USIK_DeleteAccount::execDeleteAccount },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_DeleteAccount_DeleteAccount, "DeleteAccount" }, // 1309234858
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_DeleteAccount>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_DeleteAccount_Statics
UObject* (*const Z_Construct_UClass_USIK_DeleteAccount_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_DeleteAccount_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_DeleteAccount_Statics::ClassParams = {
	&USIK_DeleteAccount::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_DeleteAccount_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_DeleteAccount_Statics::Class_MetaDataParams)
};
void USIK_DeleteAccount::StaticRegisterNativesUSIK_DeleteAccount()
{
	UClass* Class = USIK_DeleteAccount::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_DeleteAccount_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_DeleteAccount()
{
	if (!Z_Registration_Info_UClass_USIK_DeleteAccount.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_DeleteAccount.OuterSingleton, Z_Construct_UClass_USIK_DeleteAccount_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_DeleteAccount.OuterSingleton;
}
USIK_DeleteAccount::USIK_DeleteAccount(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_DeleteAccount);
USIK_DeleteAccount::~USIK_DeleteAccount() {}
// ********** End Class USIK_DeleteAccount *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameServers_SIK_DeleteAccount_h__Script_SteamWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_DeleteAccount, USIK_DeleteAccount::StaticClass, TEXT("USIK_DeleteAccount"), &Z_Registration_Info_UClass_USIK_DeleteAccount, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_DeleteAccount), 20109310U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameServers_SIK_DeleteAccount_h__Script_SteamWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameServers_SIK_DeleteAccount_h__Script_SteamWeb_2444555485{
	TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameServers_SIK_DeleteAccount_h__Script_SteamWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameServers_SIK_DeleteAccount_h__Script_SteamWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
