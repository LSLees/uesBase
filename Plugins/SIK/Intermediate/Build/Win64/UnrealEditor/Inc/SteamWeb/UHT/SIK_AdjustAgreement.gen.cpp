// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/MicroTxn/SIK_AdjustAgreement.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_AdjustAgreement() {}

// ********** Begin Cross Module References ********************************************************
STEAMWEB_API UClass* Z_Construct_UClass_USIK_AdjustAgreement();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_AdjustAgreement_NoRegister();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USIK_AdjustAgreement Function AdjustAgreement ****************************
struct Z_Construct_UFunction_USIK_AdjustAgreement_AdjustAgreement_Statics
{
	struct SIK_AdjustAgreement_eventAdjustAgreement_Parms
	{
		FString Key;
		int64 SteamId;
		int64 AgreementId;
		int32 AppId;
		FString NextProcessDate;
		FString OldNextProcessDate;
		bool bUseSandBox;
		USIK_AdjustAgreement* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|MicroTxn" },
		{ "Comment", "//Add time to the payment schedule of an agreement with billing type \"steam\". The agreementid can be retrieved using GetUserAgreementInfo. \n" },
		{ "CPP_Default_bUseSandBox", "false" },
		{ "CPP_Default_OldNextProcessDate", "" },
		{ "ModuleRelativePath", "Functions/MicroTxn/SIK_AdjustAgreement.h" },
		{ "ToolTip", "Add time to the payment schedule of an agreement with billing type \"steam\". The agreementid can be retrieved using GetUserAgreementInfo." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NextProcessDate_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldNextProcessDate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AdjustAgreement constinit property declarations ***********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_AgreementId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_NextProcessDate;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OldNextProcessDate;
	static void NewProp_bUseSandBox_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSandBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AdjustAgreement constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AdjustAgreement Property Definitions **********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_AdjustAgreement_AdjustAgreement_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_AdjustAgreement_eventAdjustAgreement_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_AdjustAgreement_AdjustAgreement_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_AdjustAgreement_eventAdjustAgreement_Parms, SteamId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamId_MetaData), NewProp_SteamId_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_AdjustAgreement_AdjustAgreement_Statics::NewProp_AgreementId = { "AgreementId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_AdjustAgreement_eventAdjustAgreement_Parms, AgreementId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AgreementId_MetaData), NewProp_AgreementId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_AdjustAgreement_AdjustAgreement_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_AdjustAgreement_eventAdjustAgreement_Parms, AppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppId_MetaData), NewProp_AppId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_AdjustAgreement_AdjustAgreement_Statics::NewProp_NextProcessDate = { "NextProcessDate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_AdjustAgreement_eventAdjustAgreement_Parms, NextProcessDate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextProcessDate_MetaData), NewProp_NextProcessDate_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_AdjustAgreement_AdjustAgreement_Statics::NewProp_OldNextProcessDate = { "OldNextProcessDate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_AdjustAgreement_eventAdjustAgreement_Parms, OldNextProcessDate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldNextProcessDate_MetaData), NewProp_OldNextProcessDate_MetaData) };
void Z_Construct_UFunction_USIK_AdjustAgreement_AdjustAgreement_Statics::NewProp_bUseSandBox_SetBit(void* Obj)
{
	((SIK_AdjustAgreement_eventAdjustAgreement_Parms*)Obj)->bUseSandBox = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_AdjustAgreement_AdjustAgreement_Statics::NewProp_bUseSandBox = { "bUseSandBox", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_AdjustAgreement_eventAdjustAgreement_Parms), &Z_Construct_UFunction_USIK_AdjustAgreement_AdjustAgreement_Statics::NewProp_bUseSandBox_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_AdjustAgreement_AdjustAgreement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_AdjustAgreement_eventAdjustAgreement_Parms, ReturnValue), Z_Construct_UClass_USIK_AdjustAgreement_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_AdjustAgreement_AdjustAgreement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_AdjustAgreement_AdjustAgreement_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_AdjustAgreement_AdjustAgreement_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_AdjustAgreement_AdjustAgreement_Statics::NewProp_AgreementId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_AdjustAgreement_AdjustAgreement_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_AdjustAgreement_AdjustAgreement_Statics::NewProp_NextProcessDate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_AdjustAgreement_AdjustAgreement_Statics::NewProp_OldNextProcessDate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_AdjustAgreement_AdjustAgreement_Statics::NewProp_bUseSandBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_AdjustAgreement_AdjustAgreement_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AdjustAgreement_AdjustAgreement_Statics::PropPointers) < 2048);
// ********** End Function AdjustAgreement Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_AdjustAgreement_AdjustAgreement_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_AdjustAgreement, nullptr, "AdjustAgreement", 	Z_Construct_UFunction_USIK_AdjustAgreement_AdjustAgreement_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AdjustAgreement_AdjustAgreement_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_AdjustAgreement_AdjustAgreement_Statics::SIK_AdjustAgreement_eventAdjustAgreement_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AdjustAgreement_AdjustAgreement_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_AdjustAgreement_AdjustAgreement_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_AdjustAgreement_AdjustAgreement_Statics::SIK_AdjustAgreement_eventAdjustAgreement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_AdjustAgreement_AdjustAgreement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_AdjustAgreement_AdjustAgreement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_AdjustAgreement::execAdjustAgreement)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_SteamId);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_AgreementId);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_NextProcessDate);
	P_GET_PROPERTY(FStrProperty,Z_Param_OldNextProcessDate);
	P_GET_UBOOL(Z_Param_bUseSandBox);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_AdjustAgreement**)Z_Param__Result=USIK_AdjustAgreement::AdjustAgreement(Z_Param_Key,Z_Param_Out_SteamId,Z_Param_Out_AgreementId,Z_Param_Out_AppId,Z_Param_NextProcessDate,Z_Param_OldNextProcessDate,Z_Param_bUseSandBox);
	P_NATIVE_END;
}
// ********** End Class USIK_AdjustAgreement Function AdjustAgreement ******************************

// ********** Begin Class USIK_AdjustAgreement *****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_AdjustAgreement;
UClass* USIK_AdjustAgreement::GetPrivateStaticClass()
{
	using TClass = USIK_AdjustAgreement;
	if (!Z_Registration_Info_UClass_USIK_AdjustAgreement.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_AdjustAgreement"),
			Z_Registration_Info_UClass_USIK_AdjustAgreement.InnerSingleton,
			StaticRegisterNativesUSIK_AdjustAgreement,
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
	return Z_Registration_Info_UClass_USIK_AdjustAgreement.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_AdjustAgreement_NoRegister()
{
	return USIK_AdjustAgreement::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_AdjustAgreement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/MicroTxn/SIK_AdjustAgreement.h" },
		{ "ModuleRelativePath", "Functions/MicroTxn/SIK_AdjustAgreement.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_AdjustAgreement constinit property declarations *********************
// ********** End Class USIK_AdjustAgreement constinit property declarations ***********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AdjustAgreement"), .Pointer = &USIK_AdjustAgreement::execAdjustAgreement },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_AdjustAgreement_AdjustAgreement, "AdjustAgreement" }, // 1788083600
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_AdjustAgreement>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_AdjustAgreement_Statics
UObject* (*const Z_Construct_UClass_USIK_AdjustAgreement_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_AdjustAgreement_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_AdjustAgreement_Statics::ClassParams = {
	&USIK_AdjustAgreement::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_AdjustAgreement_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_AdjustAgreement_Statics::Class_MetaDataParams)
};
void USIK_AdjustAgreement::StaticRegisterNativesUSIK_AdjustAgreement()
{
	UClass* Class = USIK_AdjustAgreement::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_AdjustAgreement_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_AdjustAgreement()
{
	if (!Z_Registration_Info_UClass_USIK_AdjustAgreement.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_AdjustAgreement.OuterSingleton, Z_Construct_UClass_USIK_AdjustAgreement_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_AdjustAgreement.OuterSingleton;
}
USIK_AdjustAgreement::USIK_AdjustAgreement(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_AdjustAgreement);
USIK_AdjustAgreement::~USIK_AdjustAgreement() {}
// ********** End Class USIK_AdjustAgreement *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_MicroTxn_SIK_AdjustAgreement_h__Script_SteamWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_AdjustAgreement, USIK_AdjustAgreement::StaticClass, TEXT("USIK_AdjustAgreement"), &Z_Registration_Info_UClass_USIK_AdjustAgreement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_AdjustAgreement), 304255984U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_MicroTxn_SIK_AdjustAgreement_h__Script_SteamWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_MicroTxn_SIK_AdjustAgreement_h__Script_SteamWeb_12447164{
	TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_MicroTxn_SIK_AdjustAgreement_h__Script_SteamWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_MicroTxn_SIK_AdjustAgreement_h__Script_SteamWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
