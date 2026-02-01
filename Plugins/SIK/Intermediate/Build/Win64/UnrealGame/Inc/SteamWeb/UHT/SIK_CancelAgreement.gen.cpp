// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/MicroTxn/SIK_CancelAgreement.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_CancelAgreement() {}

// ********** Begin Cross Module References ********************************************************
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_CancelAgreement();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_CancelAgreement_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USIK_CancelAgreement Function CancelAgreement ****************************
struct Z_Construct_UFunction_USIK_CancelAgreement_CancelAgreement_Statics
{
	struct SIK_CancelAgreement_eventCancelAgreement_Parms
	{
		FString Key;
		int64 SteamId;
		int64 AgreementId;
		int32 AppId;
		bool bUseSandBox;
		USIK_CancelAgreement* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|MicroTxn" },
		{ "Comment", "//Cancels a recurring billing agreement (subscription). The agreementid can be retrieved using GetUserAgreementInfo.\n" },
		{ "CPP_Default_bUseSandBox", "false" },
		{ "ModuleRelativePath", "Functions/MicroTxn/SIK_CancelAgreement.h" },
		{ "ToolTip", "Cancels a recurring billing agreement (subscription). The agreementid can be retrieved using GetUserAgreementInfo." },
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
#endif // WITH_METADATA

// ********** Begin Function CancelAgreement constinit property declarations ***********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_AgreementId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static void NewProp_bUseSandBox_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSandBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CancelAgreement constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CancelAgreement Property Definitions **********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_CancelAgreement_CancelAgreement_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_CancelAgreement_eventCancelAgreement_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_CancelAgreement_CancelAgreement_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_CancelAgreement_eventCancelAgreement_Parms, SteamId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamId_MetaData), NewProp_SteamId_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_CancelAgreement_CancelAgreement_Statics::NewProp_AgreementId = { "AgreementId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_CancelAgreement_eventCancelAgreement_Parms, AgreementId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AgreementId_MetaData), NewProp_AgreementId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_CancelAgreement_CancelAgreement_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_CancelAgreement_eventCancelAgreement_Parms, AppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppId_MetaData), NewProp_AppId_MetaData) };
void Z_Construct_UFunction_USIK_CancelAgreement_CancelAgreement_Statics::NewProp_bUseSandBox_SetBit(void* Obj)
{
	((SIK_CancelAgreement_eventCancelAgreement_Parms*)Obj)->bUseSandBox = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_CancelAgreement_CancelAgreement_Statics::NewProp_bUseSandBox = { "bUseSandBox", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_CancelAgreement_eventCancelAgreement_Parms), &Z_Construct_UFunction_USIK_CancelAgreement_CancelAgreement_Statics::NewProp_bUseSandBox_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_CancelAgreement_CancelAgreement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_CancelAgreement_eventCancelAgreement_Parms, ReturnValue), Z_Construct_UClass_USIK_CancelAgreement_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_CancelAgreement_CancelAgreement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_CancelAgreement_CancelAgreement_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_CancelAgreement_CancelAgreement_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_CancelAgreement_CancelAgreement_Statics::NewProp_AgreementId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_CancelAgreement_CancelAgreement_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_CancelAgreement_CancelAgreement_Statics::NewProp_bUseSandBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_CancelAgreement_CancelAgreement_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_CancelAgreement_CancelAgreement_Statics::PropPointers) < 2048);
// ********** End Function CancelAgreement Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_CancelAgreement_CancelAgreement_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_CancelAgreement, nullptr, "CancelAgreement", 	Z_Construct_UFunction_USIK_CancelAgreement_CancelAgreement_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_CancelAgreement_CancelAgreement_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_CancelAgreement_CancelAgreement_Statics::SIK_CancelAgreement_eventCancelAgreement_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_CancelAgreement_CancelAgreement_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_CancelAgreement_CancelAgreement_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_CancelAgreement_CancelAgreement_Statics::SIK_CancelAgreement_eventCancelAgreement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_CancelAgreement_CancelAgreement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_CancelAgreement_CancelAgreement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_CancelAgreement::execCancelAgreement)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_SteamId);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_AgreementId);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppId);
	P_GET_UBOOL(Z_Param_bUseSandBox);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_CancelAgreement**)Z_Param__Result=USIK_CancelAgreement::CancelAgreement(Z_Param_Key,Z_Param_Out_SteamId,Z_Param_Out_AgreementId,Z_Param_Out_AppId,Z_Param_bUseSandBox);
	P_NATIVE_END;
}
// ********** End Class USIK_CancelAgreement Function CancelAgreement ******************************

// ********** Begin Class USIK_CancelAgreement *****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_CancelAgreement;
UClass* USIK_CancelAgreement::GetPrivateStaticClass()
{
	using TClass = USIK_CancelAgreement;
	if (!Z_Registration_Info_UClass_USIK_CancelAgreement.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_CancelAgreement"),
			Z_Registration_Info_UClass_USIK_CancelAgreement.InnerSingleton,
			StaticRegisterNativesUSIK_CancelAgreement,
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
	return Z_Registration_Info_UClass_USIK_CancelAgreement.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_CancelAgreement_NoRegister()
{
	return USIK_CancelAgreement::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_CancelAgreement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/MicroTxn/SIK_CancelAgreement.h" },
		{ "ModuleRelativePath", "Functions/MicroTxn/SIK_CancelAgreement.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_CancelAgreement constinit property declarations *********************
// ********** End Class USIK_CancelAgreement constinit property declarations ***********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CancelAgreement"), .Pointer = &USIK_CancelAgreement::execCancelAgreement },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_CancelAgreement_CancelAgreement, "CancelAgreement" }, // 3017084382
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_CancelAgreement>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_CancelAgreement_Statics
UObject* (*const Z_Construct_UClass_USIK_CancelAgreement_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_CancelAgreement_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_CancelAgreement_Statics::ClassParams = {
	&USIK_CancelAgreement::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_CancelAgreement_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_CancelAgreement_Statics::Class_MetaDataParams)
};
void USIK_CancelAgreement::StaticRegisterNativesUSIK_CancelAgreement()
{
	UClass* Class = USIK_CancelAgreement::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_CancelAgreement_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_CancelAgreement()
{
	if (!Z_Registration_Info_UClass_USIK_CancelAgreement.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_CancelAgreement.OuterSingleton, Z_Construct_UClass_USIK_CancelAgreement_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_CancelAgreement.OuterSingleton;
}
USIK_CancelAgreement::USIK_CancelAgreement(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_CancelAgreement);
USIK_CancelAgreement::~USIK_CancelAgreement() {}
// ********** End Class USIK_CancelAgreement *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_MicroTxn_SIK_CancelAgreement_h__Script_SteamWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_CancelAgreement, USIK_CancelAgreement::StaticClass, TEXT("USIK_CancelAgreement"), &Z_Registration_Info_UClass_USIK_CancelAgreement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_CancelAgreement), 3799890643U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_MicroTxn_SIK_CancelAgreement_h__Script_SteamWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_MicroTxn_SIK_CancelAgreement_h__Script_SteamWeb_2973974238{
	TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_MicroTxn_SIK_CancelAgreement_h__Script_SteamWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_MicroTxn_SIK_CancelAgreement_h__Script_SteamWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
