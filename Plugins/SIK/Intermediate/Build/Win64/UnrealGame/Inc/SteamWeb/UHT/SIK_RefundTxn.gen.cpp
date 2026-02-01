// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/MicroTxn/SIK_RefundTxn.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_RefundTxn() {}

// ********** Begin Cross Module References ********************************************************
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_RefundTxn();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_RefundTxn_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USIK_RefundTxn Function RefundTxn ****************************************
struct Z_Construct_UFunction_USIK_RefundTxn_RefundTxn_Statics
{
	struct SIK_RefundTxn_eventRefundTxn_Parms
	{
		FString Key;
		int64 OrderId;
		int32 AppId;
		bool bUseSandBox;
		USIK_RefundTxn* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|MicroTxn" },
		{ "Comment", "//Tells Steam to refund a user for a purchase. Refunds can only be made for the full value of the original order.\n" },
		{ "CPP_Default_bUseSandBox", "false" },
		{ "ModuleRelativePath", "Functions/MicroTxn/SIK_RefundTxn.h" },
		{ "ToolTip", "Tells Steam to refund a user for a purchase. Refunds can only be made for the full value of the original order." },
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

// ********** Begin Function RefundTxn constinit property declarations *****************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_OrderId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static void NewProp_bUseSandBox_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSandBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RefundTxn constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RefundTxn Property Definitions ****************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_RefundTxn_RefundTxn_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RefundTxn_eventRefundTxn_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_RefundTxn_RefundTxn_Statics::NewProp_OrderId = { "OrderId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RefundTxn_eventRefundTxn_Parms, OrderId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrderId_MetaData), NewProp_OrderId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_RefundTxn_RefundTxn_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RefundTxn_eventRefundTxn_Parms, AppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppId_MetaData), NewProp_AppId_MetaData) };
void Z_Construct_UFunction_USIK_RefundTxn_RefundTxn_Statics::NewProp_bUseSandBox_SetBit(void* Obj)
{
	((SIK_RefundTxn_eventRefundTxn_Parms*)Obj)->bUseSandBox = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_RefundTxn_RefundTxn_Statics::NewProp_bUseSandBox = { "bUseSandBox", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_RefundTxn_eventRefundTxn_Parms), &Z_Construct_UFunction_USIK_RefundTxn_RefundTxn_Statics::NewProp_bUseSandBox_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_RefundTxn_RefundTxn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RefundTxn_eventRefundTxn_Parms, ReturnValue), Z_Construct_UClass_USIK_RefundTxn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_RefundTxn_RefundTxn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RefundTxn_RefundTxn_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RefundTxn_RefundTxn_Statics::NewProp_OrderId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RefundTxn_RefundTxn_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RefundTxn_RefundTxn_Statics::NewProp_bUseSandBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RefundTxn_RefundTxn_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RefundTxn_RefundTxn_Statics::PropPointers) < 2048);
// ********** End Function RefundTxn Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_RefundTxn_RefundTxn_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_RefundTxn, nullptr, "RefundTxn", 	Z_Construct_UFunction_USIK_RefundTxn_RefundTxn_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RefundTxn_RefundTxn_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_RefundTxn_RefundTxn_Statics::SIK_RefundTxn_eventRefundTxn_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RefundTxn_RefundTxn_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_RefundTxn_RefundTxn_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_RefundTxn_RefundTxn_Statics::SIK_RefundTxn_eventRefundTxn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_RefundTxn_RefundTxn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_RefundTxn_RefundTxn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_RefundTxn::execRefundTxn)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_OrderId);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppId);
	P_GET_UBOOL(Z_Param_bUseSandBox);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_RefundTxn**)Z_Param__Result=USIK_RefundTxn::RefundTxn(Z_Param_Key,Z_Param_Out_OrderId,Z_Param_Out_AppId,Z_Param_bUseSandBox);
	P_NATIVE_END;
}
// ********** End Class USIK_RefundTxn Function RefundTxn ******************************************

// ********** Begin Class USIK_RefundTxn ***********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_RefundTxn;
UClass* USIK_RefundTxn::GetPrivateStaticClass()
{
	using TClass = USIK_RefundTxn;
	if (!Z_Registration_Info_UClass_USIK_RefundTxn.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_RefundTxn"),
			Z_Registration_Info_UClass_USIK_RefundTxn.InnerSingleton,
			StaticRegisterNativesUSIK_RefundTxn,
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
	return Z_Registration_Info_UClass_USIK_RefundTxn.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_RefundTxn_NoRegister()
{
	return USIK_RefundTxn::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_RefundTxn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/MicroTxn/SIK_RefundTxn.h" },
		{ "ModuleRelativePath", "Functions/MicroTxn/SIK_RefundTxn.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_RefundTxn constinit property declarations ***************************
// ********** End Class USIK_RefundTxn constinit property declarations *****************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("RefundTxn"), .Pointer = &USIK_RefundTxn::execRefundTxn },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_RefundTxn_RefundTxn, "RefundTxn" }, // 3474190024
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_RefundTxn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_RefundTxn_Statics
UObject* (*const Z_Construct_UClass_USIK_RefundTxn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_RefundTxn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_RefundTxn_Statics::ClassParams = {
	&USIK_RefundTxn::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_RefundTxn_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_RefundTxn_Statics::Class_MetaDataParams)
};
void USIK_RefundTxn::StaticRegisterNativesUSIK_RefundTxn()
{
	UClass* Class = USIK_RefundTxn::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_RefundTxn_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_RefundTxn()
{
	if (!Z_Registration_Info_UClass_USIK_RefundTxn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_RefundTxn.OuterSingleton, Z_Construct_UClass_USIK_RefundTxn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_RefundTxn.OuterSingleton;
}
USIK_RefundTxn::USIK_RefundTxn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_RefundTxn);
USIK_RefundTxn::~USIK_RefundTxn() {}
// ********** End Class USIK_RefundTxn *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_MicroTxn_SIK_RefundTxn_h__Script_SteamWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_RefundTxn, USIK_RefundTxn::StaticClass, TEXT("USIK_RefundTxn"), &Z_Registration_Info_UClass_USIK_RefundTxn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_RefundTxn), 4187512137U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_MicroTxn_SIK_RefundTxn_h__Script_SteamWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_MicroTxn_SIK_RefundTxn_h__Script_SteamWeb_2502450033{
	TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_MicroTxn_SIK_RefundTxn_h__Script_SteamWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_MicroTxn_SIK_RefundTxn_h__Script_SteamWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
