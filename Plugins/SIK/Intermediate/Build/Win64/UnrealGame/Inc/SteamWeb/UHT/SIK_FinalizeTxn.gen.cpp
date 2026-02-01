// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/MicroTxn/SIK_FinalizeTxn.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_FinalizeTxn() {}

// ********** Begin Cross Module References ********************************************************
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_FinalizeTxn();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_FinalizeTxn_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USIK_FinalizeTxn Function FinalizeTxn ************************************
struct Z_Construct_UFunction_USIK_FinalizeTxn_FinalizeTxn_Statics
{
	struct SIK_FinalizeTxn_eventFinalizeTxn_Parms
	{
		FString Key;
		int64 OrderId;
		int32 AppId;
		bool bUseSandBox;
		USIK_FinalizeTxn* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|MicroTxn" },
		{ "Comment", "//Completes a purchase that was started by the InitTxn API.\n" },
		{ "CPP_Default_bUseSandBox", "false" },
		{ "ModuleRelativePath", "Functions/MicroTxn/SIK_FinalizeTxn.h" },
		{ "ToolTip", "Completes a purchase that was started by the InitTxn API." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrderId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function FinalizeTxn constinit property declarations ***************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_OrderId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static void NewProp_bUseSandBox_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSandBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FinalizeTxn constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FinalizeTxn Property Definitions **************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_FinalizeTxn_FinalizeTxn_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FinalizeTxn_eventFinalizeTxn_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_FinalizeTxn_FinalizeTxn_Statics::NewProp_OrderId = { "OrderId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FinalizeTxn_eventFinalizeTxn_Parms, OrderId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrderId_MetaData), NewProp_OrderId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_FinalizeTxn_FinalizeTxn_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FinalizeTxn_eventFinalizeTxn_Parms, AppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppId_MetaData), NewProp_AppId_MetaData) };
void Z_Construct_UFunction_USIK_FinalizeTxn_FinalizeTxn_Statics::NewProp_bUseSandBox_SetBit(void* Obj)
{
	((SIK_FinalizeTxn_eventFinalizeTxn_Parms*)Obj)->bUseSandBox = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_FinalizeTxn_FinalizeTxn_Statics::NewProp_bUseSandBox = { "bUseSandBox", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_FinalizeTxn_eventFinalizeTxn_Parms), &Z_Construct_UFunction_USIK_FinalizeTxn_FinalizeTxn_Statics::NewProp_bUseSandBox_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_FinalizeTxn_FinalizeTxn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FinalizeTxn_eventFinalizeTxn_Parms, ReturnValue), Z_Construct_UClass_USIK_FinalizeTxn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_FinalizeTxn_FinalizeTxn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FinalizeTxn_FinalizeTxn_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FinalizeTxn_FinalizeTxn_Statics::NewProp_OrderId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FinalizeTxn_FinalizeTxn_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FinalizeTxn_FinalizeTxn_Statics::NewProp_bUseSandBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FinalizeTxn_FinalizeTxn_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FinalizeTxn_FinalizeTxn_Statics::PropPointers) < 2048);
// ********** End Function FinalizeTxn Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_FinalizeTxn_FinalizeTxn_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_FinalizeTxn, nullptr, "FinalizeTxn", 	Z_Construct_UFunction_USIK_FinalizeTxn_FinalizeTxn_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FinalizeTxn_FinalizeTxn_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_FinalizeTxn_FinalizeTxn_Statics::SIK_FinalizeTxn_eventFinalizeTxn_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FinalizeTxn_FinalizeTxn_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_FinalizeTxn_FinalizeTxn_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_FinalizeTxn_FinalizeTxn_Statics::SIK_FinalizeTxn_eventFinalizeTxn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_FinalizeTxn_FinalizeTxn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_FinalizeTxn_FinalizeTxn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_FinalizeTxn::execFinalizeTxn)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_OrderId);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppId);
	P_GET_UBOOL(Z_Param_bUseSandBox);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_FinalizeTxn**)Z_Param__Result=USIK_FinalizeTxn::FinalizeTxn(Z_Param_Key,Z_Param_Out_OrderId,Z_Param_Out_AppId,Z_Param_bUseSandBox);
	P_NATIVE_END;
}
// ********** End Class USIK_FinalizeTxn Function FinalizeTxn **************************************

// ********** Begin Class USIK_FinalizeTxn *********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_FinalizeTxn;
UClass* USIK_FinalizeTxn::GetPrivateStaticClass()
{
	using TClass = USIK_FinalizeTxn;
	if (!Z_Registration_Info_UClass_USIK_FinalizeTxn.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_FinalizeTxn"),
			Z_Registration_Info_UClass_USIK_FinalizeTxn.InnerSingleton,
			StaticRegisterNativesUSIK_FinalizeTxn,
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
	return Z_Registration_Info_UClass_USIK_FinalizeTxn.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_FinalizeTxn_NoRegister()
{
	return USIK_FinalizeTxn::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_FinalizeTxn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/MicroTxn/SIK_FinalizeTxn.h" },
		{ "ModuleRelativePath", "Functions/MicroTxn/SIK_FinalizeTxn.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_FinalizeTxn constinit property declarations *************************
// ********** End Class USIK_FinalizeTxn constinit property declarations ***************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("FinalizeTxn"), .Pointer = &USIK_FinalizeTxn::execFinalizeTxn },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_FinalizeTxn_FinalizeTxn, "FinalizeTxn" }, // 516905315
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_FinalizeTxn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_FinalizeTxn_Statics
UObject* (*const Z_Construct_UClass_USIK_FinalizeTxn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_FinalizeTxn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_FinalizeTxn_Statics::ClassParams = {
	&USIK_FinalizeTxn::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_FinalizeTxn_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_FinalizeTxn_Statics::Class_MetaDataParams)
};
void USIK_FinalizeTxn::StaticRegisterNativesUSIK_FinalizeTxn()
{
	UClass* Class = USIK_FinalizeTxn::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_FinalizeTxn_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_FinalizeTxn()
{
	if (!Z_Registration_Info_UClass_USIK_FinalizeTxn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_FinalizeTxn.OuterSingleton, Z_Construct_UClass_USIK_FinalizeTxn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_FinalizeTxn.OuterSingleton;
}
USIK_FinalizeTxn::USIK_FinalizeTxn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_FinalizeTxn);
USIK_FinalizeTxn::~USIK_FinalizeTxn() {}
// ********** End Class USIK_FinalizeTxn ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_MicroTxn_SIK_FinalizeTxn_h__Script_SteamWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_FinalizeTxn, USIK_FinalizeTxn::StaticClass, TEXT("USIK_FinalizeTxn"), &Z_Registration_Info_UClass_USIK_FinalizeTxn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_FinalizeTxn), 3426810394U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_MicroTxn_SIK_FinalizeTxn_h__Script_SteamWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_MicroTxn_SIK_FinalizeTxn_h__Script_SteamWeb_2428685596{
	TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_MicroTxn_SIK_FinalizeTxn_h__Script_SteamWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_MicroTxn_SIK_FinalizeTxn_h__Script_SteamWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
