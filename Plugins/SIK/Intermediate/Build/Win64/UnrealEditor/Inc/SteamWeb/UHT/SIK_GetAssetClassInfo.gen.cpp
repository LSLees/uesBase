// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/Economy/SIK_GetAssetClassInfo.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_GetAssetClassInfo() {}

// ********** Begin Cross Module References ********************************************************
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetAssetClassInfo();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetAssetClassInfo_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USIK_GetAssetClassInfo Function GetAssetClassInfo ************************
struct Z_Construct_UFunction_USIK_GetAssetClassInfo_GetAssetClassInfo_Statics
{
	struct SIK_GetAssetClassInfo_eventGetAssetClassInfo_Parms
	{
		FString Key;
		int32 AppId;
		FString Language;
		int32 ClassCount;
		int64 ClassId0;
		int64 InstanceId0;
		USIK_GetAssetClassInfo* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|Economy" },
		{ "ModuleRelativePath", "Functions/Economy/SIK_GetAssetClassInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Language_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClassCount_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClassId0_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstanceId0_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAssetClassInfo constinit property declarations *********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Language;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ClassCount;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_ClassId0;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_InstanceId0;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAssetClassInfo constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAssetClassInfo Property Definitions ********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_GetAssetClassInfo_GetAssetClassInfo_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetAssetClassInfo_eventGetAssetClassInfo_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_GetAssetClassInfo_GetAssetClassInfo_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetAssetClassInfo_eventGetAssetClassInfo_Parms, AppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppId_MetaData), NewProp_AppId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_GetAssetClassInfo_GetAssetClassInfo_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetAssetClassInfo_eventGetAssetClassInfo_Parms, Language), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Language_MetaData), NewProp_Language_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_GetAssetClassInfo_GetAssetClassInfo_Statics::NewProp_ClassCount = { "ClassCount", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetAssetClassInfo_eventGetAssetClassInfo_Parms, ClassCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClassCount_MetaData), NewProp_ClassCount_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_GetAssetClassInfo_GetAssetClassInfo_Statics::NewProp_ClassId0 = { "ClassId0", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetAssetClassInfo_eventGetAssetClassInfo_Parms, ClassId0), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClassId0_MetaData), NewProp_ClassId0_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_GetAssetClassInfo_GetAssetClassInfo_Statics::NewProp_InstanceId0 = { "InstanceId0", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetAssetClassInfo_eventGetAssetClassInfo_Parms, InstanceId0), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstanceId0_MetaData), NewProp_InstanceId0_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_GetAssetClassInfo_GetAssetClassInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetAssetClassInfo_eventGetAssetClassInfo_Parms, ReturnValue), Z_Construct_UClass_USIK_GetAssetClassInfo_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GetAssetClassInfo_GetAssetClassInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetAssetClassInfo_GetAssetClassInfo_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetAssetClassInfo_GetAssetClassInfo_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetAssetClassInfo_GetAssetClassInfo_Statics::NewProp_Language,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetAssetClassInfo_GetAssetClassInfo_Statics::NewProp_ClassCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetAssetClassInfo_GetAssetClassInfo_Statics::NewProp_ClassId0,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetAssetClassInfo_GetAssetClassInfo_Statics::NewProp_InstanceId0,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetAssetClassInfo_GetAssetClassInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetAssetClassInfo_GetAssetClassInfo_Statics::PropPointers) < 2048);
// ********** End Function GetAssetClassInfo Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GetAssetClassInfo_GetAssetClassInfo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_GetAssetClassInfo, nullptr, "GetAssetClassInfo", 	Z_Construct_UFunction_USIK_GetAssetClassInfo_GetAssetClassInfo_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetAssetClassInfo_GetAssetClassInfo_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_GetAssetClassInfo_GetAssetClassInfo_Statics::SIK_GetAssetClassInfo_eventGetAssetClassInfo_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetAssetClassInfo_GetAssetClassInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GetAssetClassInfo_GetAssetClassInfo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_GetAssetClassInfo_GetAssetClassInfo_Statics::SIK_GetAssetClassInfo_eventGetAssetClassInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GetAssetClassInfo_GetAssetClassInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GetAssetClassInfo_GetAssetClassInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GetAssetClassInfo::execGetAssetClassInfo)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_Language);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_ClassCount);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_ClassId0);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_InstanceId0);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_GetAssetClassInfo**)Z_Param__Result=USIK_GetAssetClassInfo::GetAssetClassInfo(Z_Param_Key,Z_Param_Out_AppId,Z_Param_Language,Z_Param_Out_ClassCount,Z_Param_Out_ClassId0,Z_Param_Out_InstanceId0);
	P_NATIVE_END;
}
// ********** End Class USIK_GetAssetClassInfo Function GetAssetClassInfo **************************

// ********** Begin Class USIK_GetAssetClassInfo ***************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_GetAssetClassInfo;
UClass* USIK_GetAssetClassInfo::GetPrivateStaticClass()
{
	using TClass = USIK_GetAssetClassInfo;
	if (!Z_Registration_Info_UClass_USIK_GetAssetClassInfo.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_GetAssetClassInfo"),
			Z_Registration_Info_UClass_USIK_GetAssetClassInfo.InnerSingleton,
			StaticRegisterNativesUSIK_GetAssetClassInfo,
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
	return Z_Registration_Info_UClass_USIK_GetAssetClassInfo.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_GetAssetClassInfo_NoRegister()
{
	return USIK_GetAssetClassInfo::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_GetAssetClassInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/Economy/SIK_GetAssetClassInfo.h" },
		{ "ModuleRelativePath", "Functions/Economy/SIK_GetAssetClassInfo.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_GetAssetClassInfo constinit property declarations *******************
// ********** End Class USIK_GetAssetClassInfo constinit property declarations *********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetAssetClassInfo"), .Pointer = &USIK_GetAssetClassInfo::execGetAssetClassInfo },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_GetAssetClassInfo_GetAssetClassInfo, "GetAssetClassInfo" }, // 3483486942
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_GetAssetClassInfo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_GetAssetClassInfo_Statics
UObject* (*const Z_Construct_UClass_USIK_GetAssetClassInfo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetAssetClassInfo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_GetAssetClassInfo_Statics::ClassParams = {
	&USIK_GetAssetClassInfo::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetAssetClassInfo_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_GetAssetClassInfo_Statics::Class_MetaDataParams)
};
void USIK_GetAssetClassInfo::StaticRegisterNativesUSIK_GetAssetClassInfo()
{
	UClass* Class = USIK_GetAssetClassInfo::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_GetAssetClassInfo_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_GetAssetClassInfo()
{
	if (!Z_Registration_Info_UClass_USIK_GetAssetClassInfo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_GetAssetClassInfo.OuterSingleton, Z_Construct_UClass_USIK_GetAssetClassInfo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_GetAssetClassInfo.OuterSingleton;
}
USIK_GetAssetClassInfo::USIK_GetAssetClassInfo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_GetAssetClassInfo);
USIK_GetAssetClassInfo::~USIK_GetAssetClassInfo() {}
// ********** End Class USIK_GetAssetClassInfo *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Economy_SIK_GetAssetClassInfo_h__Script_SteamWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_GetAssetClassInfo, USIK_GetAssetClassInfo::StaticClass, TEXT("USIK_GetAssetClassInfo"), &Z_Registration_Info_UClass_USIK_GetAssetClassInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_GetAssetClassInfo), 1224385311U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Economy_SIK_GetAssetClassInfo_h__Script_SteamWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Economy_SIK_GetAssetClassInfo_h__Script_SteamWeb_2344658354{
	TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Economy_SIK_GetAssetClassInfo_h__Script_SteamWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Economy_SIK_GetAssetClassInfo_h__Script_SteamWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
