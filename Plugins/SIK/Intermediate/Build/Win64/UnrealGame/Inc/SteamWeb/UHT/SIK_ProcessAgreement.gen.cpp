// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/MicroTxn/SIK_ProcessAgreement.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_ProcessAgreement() {}

// ********** Begin Cross Module References ********************************************************
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_ProcessAgreement();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_ProcessAgreement_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USIK_ProcessAgreement Function ProcessAgreement **************************
struct Z_Construct_UFunction_USIK_ProcessAgreement_ProcessAgreement_Statics
{
	struct SIK_ProcessAgreement_eventProcessAgreement_Parms
	{
		FString Key;
		int64 OrderId;
		int64 SteamId;
		int64 AgreementId;
		int32 AppId;
		int32 Amount;
		FString Currency;
		bool bUseSandBox;
		USIK_ProcessAgreement* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|MicroTxn" },
		{ "Comment", "//Initiate a recurring payment (subscription) for the user.\n" },
		{ "CPP_Default_bUseSandBox", "false" },
		{ "ModuleRelativePath", "Functions/MicroTxn/SIK_ProcessAgreement.h" },
		{ "ToolTip", "Initiate a recurring payment (subscription) for the user." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrderId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AgreementId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Amount_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Currency_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ProcessAgreement constinit property declarations **********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_OrderId;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_AgreementId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Currency;
	static void NewProp_bUseSandBox_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSandBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ProcessAgreement constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ProcessAgreement Property Definitions *********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_ProcessAgreement_ProcessAgreement_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ProcessAgreement_eventProcessAgreement_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_ProcessAgreement_ProcessAgreement_Statics::NewProp_OrderId = { "OrderId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ProcessAgreement_eventProcessAgreement_Parms, OrderId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrderId_MetaData), NewProp_OrderId_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_ProcessAgreement_ProcessAgreement_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ProcessAgreement_eventProcessAgreement_Parms, SteamId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamId_MetaData), NewProp_SteamId_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_ProcessAgreement_ProcessAgreement_Statics::NewProp_AgreementId = { "AgreementId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ProcessAgreement_eventProcessAgreement_Parms, AgreementId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AgreementId_MetaData), NewProp_AgreementId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_ProcessAgreement_ProcessAgreement_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ProcessAgreement_eventProcessAgreement_Parms, AppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppId_MetaData), NewProp_AppId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_ProcessAgreement_ProcessAgreement_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ProcessAgreement_eventProcessAgreement_Parms, Amount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Amount_MetaData), NewProp_Amount_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_ProcessAgreement_ProcessAgreement_Statics::NewProp_Currency = { "Currency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ProcessAgreement_eventProcessAgreement_Parms, Currency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Currency_MetaData), NewProp_Currency_MetaData) };
void Z_Construct_UFunction_USIK_ProcessAgreement_ProcessAgreement_Statics::NewProp_bUseSandBox_SetBit(void* Obj)
{
	((SIK_ProcessAgreement_eventProcessAgreement_Parms*)Obj)->bUseSandBox = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_ProcessAgreement_ProcessAgreement_Statics::NewProp_bUseSandBox = { "bUseSandBox", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_ProcessAgreement_eventProcessAgreement_Parms), &Z_Construct_UFunction_USIK_ProcessAgreement_ProcessAgreement_Statics::NewProp_bUseSandBox_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_ProcessAgreement_ProcessAgreement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ProcessAgreement_eventProcessAgreement_Parms, ReturnValue), Z_Construct_UClass_USIK_ProcessAgreement_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_ProcessAgreement_ProcessAgreement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ProcessAgreement_ProcessAgreement_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ProcessAgreement_ProcessAgreement_Statics::NewProp_OrderId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ProcessAgreement_ProcessAgreement_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ProcessAgreement_ProcessAgreement_Statics::NewProp_AgreementId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ProcessAgreement_ProcessAgreement_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ProcessAgreement_ProcessAgreement_Statics::NewProp_Amount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ProcessAgreement_ProcessAgreement_Statics::NewProp_Currency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ProcessAgreement_ProcessAgreement_Statics::NewProp_bUseSandBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ProcessAgreement_ProcessAgreement_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_ProcessAgreement_ProcessAgreement_Statics::PropPointers) < 2048);
// ********** End Function ProcessAgreement Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_ProcessAgreement_ProcessAgreement_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_ProcessAgreement, nullptr, "ProcessAgreement", 	Z_Construct_UFunction_USIK_ProcessAgreement_ProcessAgreement_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_ProcessAgreement_ProcessAgreement_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_ProcessAgreement_ProcessAgreement_Statics::SIK_ProcessAgreement_eventProcessAgreement_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_ProcessAgreement_ProcessAgreement_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_ProcessAgreement_ProcessAgreement_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_ProcessAgreement_ProcessAgreement_Statics::SIK_ProcessAgreement_eventProcessAgreement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_ProcessAgreement_ProcessAgreement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_ProcessAgreement_ProcessAgreement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_ProcessAgreement::execProcessAgreement)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_OrderId);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_SteamId);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_AgreementId);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppId);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Amount);
	P_GET_PROPERTY(FStrProperty,Z_Param_Currency);
	P_GET_UBOOL(Z_Param_bUseSandBox);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_ProcessAgreement**)Z_Param__Result=USIK_ProcessAgreement::ProcessAgreement(Z_Param_Key,Z_Param_Out_OrderId,Z_Param_Out_SteamId,Z_Param_Out_AgreementId,Z_Param_Out_AppId,Z_Param_Out_Amount,Z_Param_Currency,Z_Param_bUseSandBox);
	P_NATIVE_END;
}
// ********** End Class USIK_ProcessAgreement Function ProcessAgreement ****************************

// ********** Begin Class USIK_ProcessAgreement ****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_ProcessAgreement;
UClass* USIK_ProcessAgreement::GetPrivateStaticClass()
{
	using TClass = USIK_ProcessAgreement;
	if (!Z_Registration_Info_UClass_USIK_ProcessAgreement.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_ProcessAgreement"),
			Z_Registration_Info_UClass_USIK_ProcessAgreement.InnerSingleton,
			StaticRegisterNativesUSIK_ProcessAgreement,
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
	return Z_Registration_Info_UClass_USIK_ProcessAgreement.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_ProcessAgreement_NoRegister()
{
	return USIK_ProcessAgreement::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_ProcessAgreement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/MicroTxn/SIK_ProcessAgreement.h" },
		{ "ModuleRelativePath", "Functions/MicroTxn/SIK_ProcessAgreement.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_ProcessAgreement constinit property declarations ********************
// ********** End Class USIK_ProcessAgreement constinit property declarations **********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ProcessAgreement"), .Pointer = &USIK_ProcessAgreement::execProcessAgreement },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_ProcessAgreement_ProcessAgreement, "ProcessAgreement" }, // 2467081017
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_ProcessAgreement>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_ProcessAgreement_Statics
UObject* (*const Z_Construct_UClass_USIK_ProcessAgreement_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_ProcessAgreement_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_ProcessAgreement_Statics::ClassParams = {
	&USIK_ProcessAgreement::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_ProcessAgreement_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_ProcessAgreement_Statics::Class_MetaDataParams)
};
void USIK_ProcessAgreement::StaticRegisterNativesUSIK_ProcessAgreement()
{
	UClass* Class = USIK_ProcessAgreement::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_ProcessAgreement_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_ProcessAgreement()
{
	if (!Z_Registration_Info_UClass_USIK_ProcessAgreement.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_ProcessAgreement.OuterSingleton, Z_Construct_UClass_USIK_ProcessAgreement_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_ProcessAgreement.OuterSingleton;
}
USIK_ProcessAgreement::USIK_ProcessAgreement(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_ProcessAgreement);
USIK_ProcessAgreement::~USIK_ProcessAgreement() {}
// ********** End Class USIK_ProcessAgreement ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_MicroTxn_SIK_ProcessAgreement_h__Script_SteamWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_ProcessAgreement, USIK_ProcessAgreement::StaticClass, TEXT("USIK_ProcessAgreement"), &Z_Registration_Info_UClass_USIK_ProcessAgreement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_ProcessAgreement), 2818507501U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_MicroTxn_SIK_ProcessAgreement_h__Script_SteamWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_MicroTxn_SIK_ProcessAgreement_h__Script_SteamWeb_375267195{
	TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_MicroTxn_SIK_ProcessAgreement_h__Script_SteamWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_MicroTxn_SIK_ProcessAgreement_h__Script_SteamWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
