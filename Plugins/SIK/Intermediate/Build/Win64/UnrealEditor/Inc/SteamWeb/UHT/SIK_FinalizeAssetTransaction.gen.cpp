// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/Economy/SIK_FinalizeAssetTransaction.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_FinalizeAssetTransaction() {}

// ********** Begin Cross Module References ********************************************************
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_FinalizeAssetTransaction();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_FinalizeAssetTransaction_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USIK_FinalizeAssetTransaction Function FinalizeAssetTransaction **********
struct Z_Construct_UFunction_USIK_FinalizeAssetTransaction_FinalizeAssetTransaction_Statics
{
	struct SIK_FinalizeAssetTransaction_eventFinalizeAssetTransaction_Parms
	{
		FString Key;
		int32 AppId;
		int64 SteamId;
		FString TxnId;
		FString Language;
		USIK_FinalizeAssetTransaction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|Economy" },
		{ "ModuleRelativePath", "Functions/Economy/SIK_FinalizeAssetTransaction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TxnId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Language_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function FinalizeAssetTransaction constinit property declarations **************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TxnId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Language;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FinalizeAssetTransaction constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FinalizeAssetTransaction Property Definitions *************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_FinalizeAssetTransaction_FinalizeAssetTransaction_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FinalizeAssetTransaction_eventFinalizeAssetTransaction_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_FinalizeAssetTransaction_FinalizeAssetTransaction_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FinalizeAssetTransaction_eventFinalizeAssetTransaction_Parms, AppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppId_MetaData), NewProp_AppId_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_FinalizeAssetTransaction_FinalizeAssetTransaction_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FinalizeAssetTransaction_eventFinalizeAssetTransaction_Parms, SteamId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamId_MetaData), NewProp_SteamId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_FinalizeAssetTransaction_FinalizeAssetTransaction_Statics::NewProp_TxnId = { "TxnId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FinalizeAssetTransaction_eventFinalizeAssetTransaction_Parms, TxnId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TxnId_MetaData), NewProp_TxnId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_FinalizeAssetTransaction_FinalizeAssetTransaction_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FinalizeAssetTransaction_eventFinalizeAssetTransaction_Parms, Language), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Language_MetaData), NewProp_Language_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_FinalizeAssetTransaction_FinalizeAssetTransaction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FinalizeAssetTransaction_eventFinalizeAssetTransaction_Parms, ReturnValue), Z_Construct_UClass_USIK_FinalizeAssetTransaction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_FinalizeAssetTransaction_FinalizeAssetTransaction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FinalizeAssetTransaction_FinalizeAssetTransaction_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FinalizeAssetTransaction_FinalizeAssetTransaction_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FinalizeAssetTransaction_FinalizeAssetTransaction_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FinalizeAssetTransaction_FinalizeAssetTransaction_Statics::NewProp_TxnId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FinalizeAssetTransaction_FinalizeAssetTransaction_Statics::NewProp_Language,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FinalizeAssetTransaction_FinalizeAssetTransaction_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FinalizeAssetTransaction_FinalizeAssetTransaction_Statics::PropPointers) < 2048);
// ********** End Function FinalizeAssetTransaction Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_FinalizeAssetTransaction_FinalizeAssetTransaction_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_FinalizeAssetTransaction, nullptr, "FinalizeAssetTransaction", 	Z_Construct_UFunction_USIK_FinalizeAssetTransaction_FinalizeAssetTransaction_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FinalizeAssetTransaction_FinalizeAssetTransaction_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_FinalizeAssetTransaction_FinalizeAssetTransaction_Statics::SIK_FinalizeAssetTransaction_eventFinalizeAssetTransaction_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FinalizeAssetTransaction_FinalizeAssetTransaction_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_FinalizeAssetTransaction_FinalizeAssetTransaction_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_FinalizeAssetTransaction_FinalizeAssetTransaction_Statics::SIK_FinalizeAssetTransaction_eventFinalizeAssetTransaction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_FinalizeAssetTransaction_FinalizeAssetTransaction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_FinalizeAssetTransaction_FinalizeAssetTransaction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_FinalizeAssetTransaction::execFinalizeAssetTransaction)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppId);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_SteamId);
	P_GET_PROPERTY(FStrProperty,Z_Param_TxnId);
	P_GET_PROPERTY(FStrProperty,Z_Param_Language);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_FinalizeAssetTransaction**)Z_Param__Result=USIK_FinalizeAssetTransaction::FinalizeAssetTransaction(Z_Param_Key,Z_Param_Out_AppId,Z_Param_Out_SteamId,Z_Param_TxnId,Z_Param_Language);
	P_NATIVE_END;
}
// ********** End Class USIK_FinalizeAssetTransaction Function FinalizeAssetTransaction ************

// ********** Begin Class USIK_FinalizeAssetTransaction ********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_FinalizeAssetTransaction;
UClass* USIK_FinalizeAssetTransaction::GetPrivateStaticClass()
{
	using TClass = USIK_FinalizeAssetTransaction;
	if (!Z_Registration_Info_UClass_USIK_FinalizeAssetTransaction.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_FinalizeAssetTransaction"),
			Z_Registration_Info_UClass_USIK_FinalizeAssetTransaction.InnerSingleton,
			StaticRegisterNativesUSIK_FinalizeAssetTransaction,
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
	return Z_Registration_Info_UClass_USIK_FinalizeAssetTransaction.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_FinalizeAssetTransaction_NoRegister()
{
	return USIK_FinalizeAssetTransaction::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_FinalizeAssetTransaction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/Economy/SIK_FinalizeAssetTransaction.h" },
		{ "ModuleRelativePath", "Functions/Economy/SIK_FinalizeAssetTransaction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_FinalizeAssetTransaction constinit property declarations ************
// ********** End Class USIK_FinalizeAssetTransaction constinit property declarations **************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("FinalizeAssetTransaction"), .Pointer = &USIK_FinalizeAssetTransaction::execFinalizeAssetTransaction },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_FinalizeAssetTransaction_FinalizeAssetTransaction, "FinalizeAssetTransaction" }, // 1174466356
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_FinalizeAssetTransaction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_FinalizeAssetTransaction_Statics
UObject* (*const Z_Construct_UClass_USIK_FinalizeAssetTransaction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_FinalizeAssetTransaction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_FinalizeAssetTransaction_Statics::ClassParams = {
	&USIK_FinalizeAssetTransaction::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_FinalizeAssetTransaction_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_FinalizeAssetTransaction_Statics::Class_MetaDataParams)
};
void USIK_FinalizeAssetTransaction::StaticRegisterNativesUSIK_FinalizeAssetTransaction()
{
	UClass* Class = USIK_FinalizeAssetTransaction::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_FinalizeAssetTransaction_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_FinalizeAssetTransaction()
{
	if (!Z_Registration_Info_UClass_USIK_FinalizeAssetTransaction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_FinalizeAssetTransaction.OuterSingleton, Z_Construct_UClass_USIK_FinalizeAssetTransaction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_FinalizeAssetTransaction.OuterSingleton;
}
USIK_FinalizeAssetTransaction::USIK_FinalizeAssetTransaction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_FinalizeAssetTransaction);
USIK_FinalizeAssetTransaction::~USIK_FinalizeAssetTransaction() {}
// ********** End Class USIK_FinalizeAssetTransaction **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Economy_SIK_FinalizeAssetTransaction_h__Script_SteamWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_FinalizeAssetTransaction, USIK_FinalizeAssetTransaction::StaticClass, TEXT("USIK_FinalizeAssetTransaction"), &Z_Registration_Info_UClass_USIK_FinalizeAssetTransaction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_FinalizeAssetTransaction), 1632877362U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Economy_SIK_FinalizeAssetTransaction_h__Script_SteamWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Economy_SIK_FinalizeAssetTransaction_h__Script_SteamWeb_2213080922{
	TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Economy_SIK_FinalizeAssetTransaction_h__Script_SteamWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Economy_SIK_FinalizeAssetTransaction_h__Script_SteamWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
