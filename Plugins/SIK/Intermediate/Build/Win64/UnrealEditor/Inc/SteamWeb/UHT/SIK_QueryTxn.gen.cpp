// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/MicroTxn/SIK_QueryTxn.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_QueryTxn() {}

// ********** Begin Cross Module References ********************************************************
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_QueryTxn();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_QueryTxn_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USIK_QueryTxn Function QueryTxn ******************************************
struct Z_Construct_UFunction_USIK_QueryTxn_QueryTxn_Statics
{
	struct SIK_QueryTxn_eventQueryTxn_Parms
	{
		FString Key;
		int32 AppId;
		int64 OrderId;
		int64 TransId;
		bool bUseSandBox;
		USIK_QueryTxn* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|MicroTxn" },
		{ "Comment", "//Query the status of an order that was previously created with InitTxn.\n" },
		{ "CPP_Default_bUseSandBox", "false" },
		{ "CPP_Default_OrderId", "-1" },
		{ "CPP_Default_TransId", "-1" },
		{ "ModuleRelativePath", "Functions/MicroTxn/SIK_QueryTxn.h" },
		{ "ToolTip", "Query the status of an order that was previously created with InitTxn." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrderId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function QueryTxn constinit property declarations ******************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_OrderId;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_TransId;
	static void NewProp_bUseSandBox_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSandBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function QueryTxn constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function QueryTxn Property Definitions *****************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_QueryTxn_QueryTxn_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_QueryTxn_eventQueryTxn_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_QueryTxn_QueryTxn_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_QueryTxn_eventQueryTxn_Parms, AppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppId_MetaData), NewProp_AppId_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_QueryTxn_QueryTxn_Statics::NewProp_OrderId = { "OrderId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_QueryTxn_eventQueryTxn_Parms, OrderId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrderId_MetaData), NewProp_OrderId_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_QueryTxn_QueryTxn_Statics::NewProp_TransId = { "TransId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_QueryTxn_eventQueryTxn_Parms, TransId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransId_MetaData), NewProp_TransId_MetaData) };
void Z_Construct_UFunction_USIK_QueryTxn_QueryTxn_Statics::NewProp_bUseSandBox_SetBit(void* Obj)
{
	((SIK_QueryTxn_eventQueryTxn_Parms*)Obj)->bUseSandBox = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_QueryTxn_QueryTxn_Statics::NewProp_bUseSandBox = { "bUseSandBox", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_QueryTxn_eventQueryTxn_Parms), &Z_Construct_UFunction_USIK_QueryTxn_QueryTxn_Statics::NewProp_bUseSandBox_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_QueryTxn_QueryTxn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_QueryTxn_eventQueryTxn_Parms, ReturnValue), Z_Construct_UClass_USIK_QueryTxn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_QueryTxn_QueryTxn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_QueryTxn_QueryTxn_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_QueryTxn_QueryTxn_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_QueryTxn_QueryTxn_Statics::NewProp_OrderId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_QueryTxn_QueryTxn_Statics::NewProp_TransId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_QueryTxn_QueryTxn_Statics::NewProp_bUseSandBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_QueryTxn_QueryTxn_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_QueryTxn_QueryTxn_Statics::PropPointers) < 2048);
// ********** End Function QueryTxn Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_QueryTxn_QueryTxn_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_QueryTxn, nullptr, "QueryTxn", 	Z_Construct_UFunction_USIK_QueryTxn_QueryTxn_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_QueryTxn_QueryTxn_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_QueryTxn_QueryTxn_Statics::SIK_QueryTxn_eventQueryTxn_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_QueryTxn_QueryTxn_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_QueryTxn_QueryTxn_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_QueryTxn_QueryTxn_Statics::SIK_QueryTxn_eventQueryTxn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_QueryTxn_QueryTxn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_QueryTxn_QueryTxn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_QueryTxn::execQueryTxn)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppId);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_OrderId);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_TransId);
	P_GET_UBOOL(Z_Param_bUseSandBox);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_QueryTxn**)Z_Param__Result=USIK_QueryTxn::QueryTxn(Z_Param_Key,Z_Param_Out_AppId,Z_Param_Out_OrderId,Z_Param_Out_TransId,Z_Param_bUseSandBox);
	P_NATIVE_END;
}
// ********** End Class USIK_QueryTxn Function QueryTxn ********************************************

// ********** Begin Class USIK_QueryTxn ************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_QueryTxn;
UClass* USIK_QueryTxn::GetPrivateStaticClass()
{
	using TClass = USIK_QueryTxn;
	if (!Z_Registration_Info_UClass_USIK_QueryTxn.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_QueryTxn"),
			Z_Registration_Info_UClass_USIK_QueryTxn.InnerSingleton,
			StaticRegisterNativesUSIK_QueryTxn,
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
	return Z_Registration_Info_UClass_USIK_QueryTxn.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_QueryTxn_NoRegister()
{
	return USIK_QueryTxn::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_QueryTxn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/MicroTxn/SIK_QueryTxn.h" },
		{ "ModuleRelativePath", "Functions/MicroTxn/SIK_QueryTxn.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_QueryTxn constinit property declarations ****************************
// ********** End Class USIK_QueryTxn constinit property declarations ******************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("QueryTxn"), .Pointer = &USIK_QueryTxn::execQueryTxn },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_QueryTxn_QueryTxn, "QueryTxn" }, // 3930122132
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_QueryTxn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_QueryTxn_Statics
UObject* (*const Z_Construct_UClass_USIK_QueryTxn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_QueryTxn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_QueryTxn_Statics::ClassParams = {
	&USIK_QueryTxn::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_QueryTxn_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_QueryTxn_Statics::Class_MetaDataParams)
};
void USIK_QueryTxn::StaticRegisterNativesUSIK_QueryTxn()
{
	UClass* Class = USIK_QueryTxn::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_QueryTxn_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_QueryTxn()
{
	if (!Z_Registration_Info_UClass_USIK_QueryTxn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_QueryTxn.OuterSingleton, Z_Construct_UClass_USIK_QueryTxn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_QueryTxn.OuterSingleton;
}
USIK_QueryTxn::USIK_QueryTxn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_QueryTxn);
USIK_QueryTxn::~USIK_QueryTxn() {}
// ********** End Class USIK_QueryTxn **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_MicroTxn_SIK_QueryTxn_h__Script_SteamWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_QueryTxn, USIK_QueryTxn::StaticClass, TEXT("USIK_QueryTxn"), &Z_Registration_Info_UClass_USIK_QueryTxn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_QueryTxn), 3304851548U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_MicroTxn_SIK_QueryTxn_h__Script_SteamWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_MicroTxn_SIK_QueryTxn_h__Script_SteamWeb_915317645{
	TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_MicroTxn_SIK_QueryTxn_h__Script_SteamWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_MicroTxn_SIK_QueryTxn_h__Script_SteamWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
