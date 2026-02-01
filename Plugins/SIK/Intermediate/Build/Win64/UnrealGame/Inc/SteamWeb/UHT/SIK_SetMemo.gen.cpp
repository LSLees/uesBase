// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/GameServers/SIK_SetMemo.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_SetMemo() {}

// ********** Begin Cross Module References ********************************************************
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_SetMemo();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_SetMemo_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USIK_SetMemo Function SetMemo ********************************************
struct Z_Construct_UFunction_USIK_SetMemo_SetMemo_Statics
{
	struct SIK_SetMemo_eventSetMemo_Parms
	{
		FString Key;
		int64 SteamId;
		FString Memo;
		USIK_SetMemo* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|GameServers" },
		{ "Comment", "//This method changes the memo associated with the game server account. Memos do not affect the account in any way. The memo shows up in the GetAccountList response and serves only as a reminder of what the account is used for.\n" },
		{ "ModuleRelativePath", "Functions/GameServers/SIK_SetMemo.h" },
		{ "ToolTip", "This method changes the memo associated with the game server account. Memos do not affect the account in any way. The memo shows up in the GetAccountList response and serves only as a reminder of what the account is used for." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Memo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetMemo constinit property declarations *******************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Memo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetMemo constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetMemo Property Definitions ******************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_SetMemo_SetMemo_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_SetMemo_eventSetMemo_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_SetMemo_SetMemo_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_SetMemo_eventSetMemo_Parms, SteamId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamId_MetaData), NewProp_SteamId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_SetMemo_SetMemo_Statics::NewProp_Memo = { "Memo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_SetMemo_eventSetMemo_Parms, Memo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Memo_MetaData), NewProp_Memo_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_SetMemo_SetMemo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_SetMemo_eventSetMemo_Parms, ReturnValue), Z_Construct_UClass_USIK_SetMemo_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_SetMemo_SetMemo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SetMemo_SetMemo_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SetMemo_SetMemo_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SetMemo_SetMemo_Statics::NewProp_Memo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SetMemo_SetMemo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SetMemo_SetMemo_Statics::PropPointers) < 2048);
// ********** End Function SetMemo Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_SetMemo_SetMemo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_SetMemo, nullptr, "SetMemo", 	Z_Construct_UFunction_USIK_SetMemo_SetMemo_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SetMemo_SetMemo_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_SetMemo_SetMemo_Statics::SIK_SetMemo_eventSetMemo_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SetMemo_SetMemo_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_SetMemo_SetMemo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_SetMemo_SetMemo_Statics::SIK_SetMemo_eventSetMemo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_SetMemo_SetMemo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_SetMemo_SetMemo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_SetMemo::execSetMemo)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_SteamId);
	P_GET_PROPERTY(FStrProperty,Z_Param_Memo);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_SetMemo**)Z_Param__Result=USIK_SetMemo::SetMemo(Z_Param_Key,Z_Param_Out_SteamId,Z_Param_Memo);
	P_NATIVE_END;
}
// ********** End Class USIK_SetMemo Function SetMemo **********************************************

// ********** Begin Class USIK_SetMemo *************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_SetMemo;
UClass* USIK_SetMemo::GetPrivateStaticClass()
{
	using TClass = USIK_SetMemo;
	if (!Z_Registration_Info_UClass_USIK_SetMemo.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_SetMemo"),
			Z_Registration_Info_UClass_USIK_SetMemo.InnerSingleton,
			StaticRegisterNativesUSIK_SetMemo,
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
	return Z_Registration_Info_UClass_USIK_SetMemo.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_SetMemo_NoRegister()
{
	return USIK_SetMemo::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_SetMemo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/GameServers/SIK_SetMemo.h" },
		{ "ModuleRelativePath", "Functions/GameServers/SIK_SetMemo.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_SetMemo constinit property declarations *****************************
// ********** End Class USIK_SetMemo constinit property declarations *******************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("SetMemo"), .Pointer = &USIK_SetMemo::execSetMemo },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_SetMemo_SetMemo, "SetMemo" }, // 801696475
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_SetMemo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_SetMemo_Statics
UObject* (*const Z_Construct_UClass_USIK_SetMemo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_SetMemo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_SetMemo_Statics::ClassParams = {
	&USIK_SetMemo::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_SetMemo_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_SetMemo_Statics::Class_MetaDataParams)
};
void USIK_SetMemo::StaticRegisterNativesUSIK_SetMemo()
{
	UClass* Class = USIK_SetMemo::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_SetMemo_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_SetMemo()
{
	if (!Z_Registration_Info_UClass_USIK_SetMemo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_SetMemo.OuterSingleton, Z_Construct_UClass_USIK_SetMemo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_SetMemo.OuterSingleton;
}
USIK_SetMemo::USIK_SetMemo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_SetMemo);
USIK_SetMemo::~USIK_SetMemo() {}
// ********** End Class USIK_SetMemo ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameServers_SIK_SetMemo_h__Script_SteamWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_SetMemo, USIK_SetMemo::StaticClass, TEXT("USIK_SetMemo"), &Z_Registration_Info_UClass_USIK_SetMemo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_SetMemo), 3975974406U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameServers_SIK_SetMemo_h__Script_SteamWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameServers_SIK_SetMemo_h__Script_SteamWeb_42208992{
	TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameServers_SIK_SetMemo_h__Script_SteamWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameServers_SIK_SetMemo_h__Script_SteamWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
