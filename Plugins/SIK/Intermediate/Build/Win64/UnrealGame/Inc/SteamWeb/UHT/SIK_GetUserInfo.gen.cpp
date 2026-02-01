// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/MicroTxn/SIK_GetUserInfo.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_GetUserInfo() {}

// ********** Begin Cross Module References ********************************************************
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetUserInfo();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetUserInfo_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USIK_GetUserInfo Function GetUserInfo ************************************
struct Z_Construct_UFunction_USIK_GetUserInfo_GetUserInfo_Statics
{
	struct SIK_GetUserInfo_eventGetUserInfo_Parms
	{
		FString Key;
		int32 AppId;
		int64 SteamId;
		FString IpAddress;
		bool bUseSandBox;
		USIK_GetUserInfo* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|MicroTxn" },
		{ "Comment", "//Retrieves details for a user's purchasing info.\n" },
		{ "CPP_Default_bUseSandBox", "false" },
		{ "CPP_Default_IpAddress", "" },
		{ "CPP_Default_SteamId", "-1" },
		{ "ModuleRelativePath", "Functions/MicroTxn/SIK_GetUserInfo.h" },
		{ "ToolTip", "Retrieves details for a user's purchasing info." },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IpAddress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetUserInfo constinit property declarations ***************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_IpAddress;
	static void NewProp_bUseSandBox_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSandBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetUserInfo constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetUserInfo Property Definitions **************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_GetUserInfo_GetUserInfo_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetUserInfo_eventGetUserInfo_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_GetUserInfo_GetUserInfo_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetUserInfo_eventGetUserInfo_Parms, AppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppId_MetaData), NewProp_AppId_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_GetUserInfo_GetUserInfo_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetUserInfo_eventGetUserInfo_Parms, SteamId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamId_MetaData), NewProp_SteamId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_GetUserInfo_GetUserInfo_Statics::NewProp_IpAddress = { "IpAddress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetUserInfo_eventGetUserInfo_Parms, IpAddress), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IpAddress_MetaData), NewProp_IpAddress_MetaData) };
void Z_Construct_UFunction_USIK_GetUserInfo_GetUserInfo_Statics::NewProp_bUseSandBox_SetBit(void* Obj)
{
	((SIK_GetUserInfo_eventGetUserInfo_Parms*)Obj)->bUseSandBox = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_GetUserInfo_GetUserInfo_Statics::NewProp_bUseSandBox = { "bUseSandBox", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_GetUserInfo_eventGetUserInfo_Parms), &Z_Construct_UFunction_USIK_GetUserInfo_GetUserInfo_Statics::NewProp_bUseSandBox_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_GetUserInfo_GetUserInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetUserInfo_eventGetUserInfo_Parms, ReturnValue), Z_Construct_UClass_USIK_GetUserInfo_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GetUserInfo_GetUserInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetUserInfo_GetUserInfo_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetUserInfo_GetUserInfo_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetUserInfo_GetUserInfo_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetUserInfo_GetUserInfo_Statics::NewProp_IpAddress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetUserInfo_GetUserInfo_Statics::NewProp_bUseSandBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetUserInfo_GetUserInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetUserInfo_GetUserInfo_Statics::PropPointers) < 2048);
// ********** End Function GetUserInfo Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GetUserInfo_GetUserInfo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_GetUserInfo, nullptr, "GetUserInfo", 	Z_Construct_UFunction_USIK_GetUserInfo_GetUserInfo_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetUserInfo_GetUserInfo_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_GetUserInfo_GetUserInfo_Statics::SIK_GetUserInfo_eventGetUserInfo_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetUserInfo_GetUserInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GetUserInfo_GetUserInfo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_GetUserInfo_GetUserInfo_Statics::SIK_GetUserInfo_eventGetUserInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GetUserInfo_GetUserInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GetUserInfo_GetUserInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GetUserInfo::execGetUserInfo)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppId);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_SteamId);
	P_GET_PROPERTY(FStrProperty,Z_Param_IpAddress);
	P_GET_UBOOL(Z_Param_bUseSandBox);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_GetUserInfo**)Z_Param__Result=USIK_GetUserInfo::GetUserInfo(Z_Param_Key,Z_Param_Out_AppId,Z_Param_Out_SteamId,Z_Param_IpAddress,Z_Param_bUseSandBox);
	P_NATIVE_END;
}
// ********** End Class USIK_GetUserInfo Function GetUserInfo **************************************

// ********** Begin Class USIK_GetUserInfo *********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_GetUserInfo;
UClass* USIK_GetUserInfo::GetPrivateStaticClass()
{
	using TClass = USIK_GetUserInfo;
	if (!Z_Registration_Info_UClass_USIK_GetUserInfo.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_GetUserInfo"),
			Z_Registration_Info_UClass_USIK_GetUserInfo.InnerSingleton,
			StaticRegisterNativesUSIK_GetUserInfo,
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
	return Z_Registration_Info_UClass_USIK_GetUserInfo.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_GetUserInfo_NoRegister()
{
	return USIK_GetUserInfo::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_GetUserInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/MicroTxn/SIK_GetUserInfo.h" },
		{ "ModuleRelativePath", "Functions/MicroTxn/SIK_GetUserInfo.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_GetUserInfo constinit property declarations *************************
// ********** End Class USIK_GetUserInfo constinit property declarations ***************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetUserInfo"), .Pointer = &USIK_GetUserInfo::execGetUserInfo },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_GetUserInfo_GetUserInfo, "GetUserInfo" }, // 4192874880
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_GetUserInfo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_GetUserInfo_Statics
UObject* (*const Z_Construct_UClass_USIK_GetUserInfo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetUserInfo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_GetUserInfo_Statics::ClassParams = {
	&USIK_GetUserInfo::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetUserInfo_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_GetUserInfo_Statics::Class_MetaDataParams)
};
void USIK_GetUserInfo::StaticRegisterNativesUSIK_GetUserInfo()
{
	UClass* Class = USIK_GetUserInfo::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_GetUserInfo_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_GetUserInfo()
{
	if (!Z_Registration_Info_UClass_USIK_GetUserInfo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_GetUserInfo.OuterSingleton, Z_Construct_UClass_USIK_GetUserInfo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_GetUserInfo.OuterSingleton;
}
USIK_GetUserInfo::USIK_GetUserInfo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_GetUserInfo);
USIK_GetUserInfo::~USIK_GetUserInfo() {}
// ********** End Class USIK_GetUserInfo ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_MicroTxn_SIK_GetUserInfo_h__Script_SteamWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_GetUserInfo, USIK_GetUserInfo::StaticClass, TEXT("USIK_GetUserInfo"), &Z_Registration_Info_UClass_USIK_GetUserInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_GetUserInfo), 2712074463U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_MicroTxn_SIK_GetUserInfo_h__Script_SteamWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_MicroTxn_SIK_GetUserInfo_h__Script_SteamWeb_1792374988{
	TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_MicroTxn_SIK_GetUserInfo_h__Script_SteamWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_MicroTxn_SIK_GetUserInfo_h__Script_SteamWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
