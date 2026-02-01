// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/Economy/SIK_StartAssetTransaction.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_StartAssetTransaction() {}

// ********** Begin Cross Module References ********************************************************
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_StartAssetTransaction();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_StartAssetTransaction_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USIK_StartAssetTransaction Function StartAssetTransaction ****************
struct Z_Construct_UFunction_USIK_StartAssetTransaction_StartAssetTransaction_Statics
{
	struct SIK_StartAssetTransaction_eventStartAssetTransaction_Parms
	{
		FString Key;
		int32 AppId;
		int64 SteamId;
		FString AssetId0;
		int32 AssetQuantity0;
		FString Currency;
		FString Language;
		FString IpAddress;
		FString Referrer;
		bool ClientAuth;
		USIK_StartAssetTransaction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|Economy" },
		{ "ModuleRelativePath", "Functions/Economy/SIK_StartAssetTransaction.h" },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetId0_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetQuantity0_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Currency_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Language_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IpAddress_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Referrer_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClientAuth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function StartAssetTransaction constinit property declarations *****************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AssetId0;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AssetQuantity0;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Currency;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Language;
	static const UECodeGen_Private::FStrPropertyParams NewProp_IpAddress;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Referrer;
	static void NewProp_ClientAuth_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ClientAuth;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function StartAssetTransaction constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function StartAssetTransaction Property Definitions ****************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_StartAssetTransaction_StartAssetTransaction_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_StartAssetTransaction_eventStartAssetTransaction_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_StartAssetTransaction_StartAssetTransaction_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_StartAssetTransaction_eventStartAssetTransaction_Parms, AppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppId_MetaData), NewProp_AppId_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_StartAssetTransaction_StartAssetTransaction_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_StartAssetTransaction_eventStartAssetTransaction_Parms, SteamId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamId_MetaData), NewProp_SteamId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_StartAssetTransaction_StartAssetTransaction_Statics::NewProp_AssetId0 = { "AssetId0", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_StartAssetTransaction_eventStartAssetTransaction_Parms, AssetId0), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetId0_MetaData), NewProp_AssetId0_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_StartAssetTransaction_StartAssetTransaction_Statics::NewProp_AssetQuantity0 = { "AssetQuantity0", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_StartAssetTransaction_eventStartAssetTransaction_Parms, AssetQuantity0), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetQuantity0_MetaData), NewProp_AssetQuantity0_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_StartAssetTransaction_StartAssetTransaction_Statics::NewProp_Currency = { "Currency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_StartAssetTransaction_eventStartAssetTransaction_Parms, Currency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Currency_MetaData), NewProp_Currency_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_StartAssetTransaction_StartAssetTransaction_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_StartAssetTransaction_eventStartAssetTransaction_Parms, Language), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Language_MetaData), NewProp_Language_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_StartAssetTransaction_StartAssetTransaction_Statics::NewProp_IpAddress = { "IpAddress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_StartAssetTransaction_eventStartAssetTransaction_Parms, IpAddress), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IpAddress_MetaData), NewProp_IpAddress_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_StartAssetTransaction_StartAssetTransaction_Statics::NewProp_Referrer = { "Referrer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_StartAssetTransaction_eventStartAssetTransaction_Parms, Referrer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Referrer_MetaData), NewProp_Referrer_MetaData) };
void Z_Construct_UFunction_USIK_StartAssetTransaction_StartAssetTransaction_Statics::NewProp_ClientAuth_SetBit(void* Obj)
{
	((SIK_StartAssetTransaction_eventStartAssetTransaction_Parms*)Obj)->ClientAuth = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_StartAssetTransaction_StartAssetTransaction_Statics::NewProp_ClientAuth = { "ClientAuth", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_StartAssetTransaction_eventStartAssetTransaction_Parms), &Z_Construct_UFunction_USIK_StartAssetTransaction_StartAssetTransaction_Statics::NewProp_ClientAuth_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClientAuth_MetaData), NewProp_ClientAuth_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_StartAssetTransaction_StartAssetTransaction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_StartAssetTransaction_eventStartAssetTransaction_Parms, ReturnValue), Z_Construct_UClass_USIK_StartAssetTransaction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_StartAssetTransaction_StartAssetTransaction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_StartAssetTransaction_StartAssetTransaction_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_StartAssetTransaction_StartAssetTransaction_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_StartAssetTransaction_StartAssetTransaction_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_StartAssetTransaction_StartAssetTransaction_Statics::NewProp_AssetId0,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_StartAssetTransaction_StartAssetTransaction_Statics::NewProp_AssetQuantity0,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_StartAssetTransaction_StartAssetTransaction_Statics::NewProp_Currency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_StartAssetTransaction_StartAssetTransaction_Statics::NewProp_Language,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_StartAssetTransaction_StartAssetTransaction_Statics::NewProp_IpAddress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_StartAssetTransaction_StartAssetTransaction_Statics::NewProp_Referrer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_StartAssetTransaction_StartAssetTransaction_Statics::NewProp_ClientAuth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_StartAssetTransaction_StartAssetTransaction_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_StartAssetTransaction_StartAssetTransaction_Statics::PropPointers) < 2048);
// ********** End Function StartAssetTransaction Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_StartAssetTransaction_StartAssetTransaction_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_StartAssetTransaction, nullptr, "StartAssetTransaction", 	Z_Construct_UFunction_USIK_StartAssetTransaction_StartAssetTransaction_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_StartAssetTransaction_StartAssetTransaction_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_StartAssetTransaction_StartAssetTransaction_Statics::SIK_StartAssetTransaction_eventStartAssetTransaction_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_StartAssetTransaction_StartAssetTransaction_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_StartAssetTransaction_StartAssetTransaction_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_StartAssetTransaction_StartAssetTransaction_Statics::SIK_StartAssetTransaction_eventStartAssetTransaction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_StartAssetTransaction_StartAssetTransaction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_StartAssetTransaction_StartAssetTransaction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_StartAssetTransaction::execStartAssetTransaction)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppId);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_SteamId);
	P_GET_PROPERTY(FStrProperty,Z_Param_AssetId0);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AssetQuantity0);
	P_GET_PROPERTY(FStrProperty,Z_Param_Currency);
	P_GET_PROPERTY(FStrProperty,Z_Param_Language);
	P_GET_PROPERTY(FStrProperty,Z_Param_IpAddress);
	P_GET_PROPERTY(FStrProperty,Z_Param_Referrer);
	P_GET_UBOOL_REF(Z_Param_Out_ClientAuth);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_StartAssetTransaction**)Z_Param__Result=USIK_StartAssetTransaction::StartAssetTransaction(Z_Param_Key,Z_Param_Out_AppId,Z_Param_Out_SteamId,Z_Param_AssetId0,Z_Param_Out_AssetQuantity0,Z_Param_Currency,Z_Param_Language,Z_Param_IpAddress,Z_Param_Referrer,Z_Param_Out_ClientAuth);
	P_NATIVE_END;
}
// ********** End Class USIK_StartAssetTransaction Function StartAssetTransaction ******************

// ********** Begin Class USIK_StartAssetTransaction ***********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_StartAssetTransaction;
UClass* USIK_StartAssetTransaction::GetPrivateStaticClass()
{
	using TClass = USIK_StartAssetTransaction;
	if (!Z_Registration_Info_UClass_USIK_StartAssetTransaction.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_StartAssetTransaction"),
			Z_Registration_Info_UClass_USIK_StartAssetTransaction.InnerSingleton,
			StaticRegisterNativesUSIK_StartAssetTransaction,
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
	return Z_Registration_Info_UClass_USIK_StartAssetTransaction.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_StartAssetTransaction_NoRegister()
{
	return USIK_StartAssetTransaction::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_StartAssetTransaction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/Economy/SIK_StartAssetTransaction.h" },
		{ "ModuleRelativePath", "Functions/Economy/SIK_StartAssetTransaction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_StartAssetTransaction constinit property declarations ***************
// ********** End Class USIK_StartAssetTransaction constinit property declarations *****************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("StartAssetTransaction"), .Pointer = &USIK_StartAssetTransaction::execStartAssetTransaction },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_StartAssetTransaction_StartAssetTransaction, "StartAssetTransaction" }, // 1668783363
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_StartAssetTransaction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_StartAssetTransaction_Statics
UObject* (*const Z_Construct_UClass_USIK_StartAssetTransaction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_StartAssetTransaction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_StartAssetTransaction_Statics::ClassParams = {
	&USIK_StartAssetTransaction::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_StartAssetTransaction_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_StartAssetTransaction_Statics::Class_MetaDataParams)
};
void USIK_StartAssetTransaction::StaticRegisterNativesUSIK_StartAssetTransaction()
{
	UClass* Class = USIK_StartAssetTransaction::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_StartAssetTransaction_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_StartAssetTransaction()
{
	if (!Z_Registration_Info_UClass_USIK_StartAssetTransaction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_StartAssetTransaction.OuterSingleton, Z_Construct_UClass_USIK_StartAssetTransaction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_StartAssetTransaction.OuterSingleton;
}
USIK_StartAssetTransaction::USIK_StartAssetTransaction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_StartAssetTransaction);
USIK_StartAssetTransaction::~USIK_StartAssetTransaction() {}
// ********** End Class USIK_StartAssetTransaction *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Economy_SIK_StartAssetTransaction_h__Script_SteamWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_StartAssetTransaction, USIK_StartAssetTransaction::StaticClass, TEXT("USIK_StartAssetTransaction"), &Z_Registration_Info_UClass_USIK_StartAssetTransaction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_StartAssetTransaction), 3361897484U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Economy_SIK_StartAssetTransaction_h__Script_SteamWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Economy_SIK_StartAssetTransaction_h__Script_SteamWeb_1452411832{
	TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Economy_SIK_StartAssetTransaction_h__Script_SteamWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Economy_SIK_StartAssetTransaction_h__Script_SteamWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
