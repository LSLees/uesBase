// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/Community/SIK_ReportAbuse.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_ReportAbuse() {}

// ********** Begin Cross Module References ********************************************************
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_ReportAbuse();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_ReportAbuse_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USIK_ReportAbuse Function ReportAbuse ************************************
struct Z_Construct_UFunction_USIK_ReportAbuse_ReportAbuse_Statics
{
	struct SIK_ReportAbuse_eventReportAbuse_Parms
	{
		FString Key;
		int64 SteamIdActor;
		int64 SteamIdTarget;
		int32 AppId;
		int32 AbuseType;
		int32 ContentType;
		FString Description;
		int64 Gid;
		USIK_ReportAbuse* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|Community" },
		{ "Comment", "//Allows publishers to report users who are behaving badly on their community hub.\n" },
		{ "CPP_Default_Gid", "-1" },
		{ "ModuleRelativePath", "Functions/Community/SIK_ReportAbuse.h" },
		{ "ToolTip", "Allows publishers to report users who are behaving badly on their community hub." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamIdActor_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamIdTarget_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbuseType_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContentType_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Gid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ReportAbuse constinit property declarations ***************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_SteamIdActor;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_SteamIdTarget;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AbuseType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ContentType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_Gid;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ReportAbuse constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ReportAbuse Property Definitions **************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_ReportAbuse_ReportAbuse_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ReportAbuse_eventReportAbuse_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_ReportAbuse_ReportAbuse_Statics::NewProp_SteamIdActor = { "SteamIdActor", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ReportAbuse_eventReportAbuse_Parms, SteamIdActor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamIdActor_MetaData), NewProp_SteamIdActor_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_ReportAbuse_ReportAbuse_Statics::NewProp_SteamIdTarget = { "SteamIdTarget", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ReportAbuse_eventReportAbuse_Parms, SteamIdTarget), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamIdTarget_MetaData), NewProp_SteamIdTarget_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_ReportAbuse_ReportAbuse_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ReportAbuse_eventReportAbuse_Parms, AppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppId_MetaData), NewProp_AppId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_ReportAbuse_ReportAbuse_Statics::NewProp_AbuseType = { "AbuseType", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ReportAbuse_eventReportAbuse_Parms, AbuseType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbuseType_MetaData), NewProp_AbuseType_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_ReportAbuse_ReportAbuse_Statics::NewProp_ContentType = { "ContentType", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ReportAbuse_eventReportAbuse_Parms, ContentType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContentType_MetaData), NewProp_ContentType_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_ReportAbuse_ReportAbuse_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ReportAbuse_eventReportAbuse_Parms, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_ReportAbuse_ReportAbuse_Statics::NewProp_Gid = { "Gid", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ReportAbuse_eventReportAbuse_Parms, Gid), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Gid_MetaData), NewProp_Gid_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_ReportAbuse_ReportAbuse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ReportAbuse_eventReportAbuse_Parms, ReturnValue), Z_Construct_UClass_USIK_ReportAbuse_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_ReportAbuse_ReportAbuse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ReportAbuse_ReportAbuse_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ReportAbuse_ReportAbuse_Statics::NewProp_SteamIdActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ReportAbuse_ReportAbuse_Statics::NewProp_SteamIdTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ReportAbuse_ReportAbuse_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ReportAbuse_ReportAbuse_Statics::NewProp_AbuseType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ReportAbuse_ReportAbuse_Statics::NewProp_ContentType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ReportAbuse_ReportAbuse_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ReportAbuse_ReportAbuse_Statics::NewProp_Gid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ReportAbuse_ReportAbuse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_ReportAbuse_ReportAbuse_Statics::PropPointers) < 2048);
// ********** End Function ReportAbuse Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_ReportAbuse_ReportAbuse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_ReportAbuse, nullptr, "ReportAbuse", 	Z_Construct_UFunction_USIK_ReportAbuse_ReportAbuse_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_ReportAbuse_ReportAbuse_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_ReportAbuse_ReportAbuse_Statics::SIK_ReportAbuse_eventReportAbuse_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_ReportAbuse_ReportAbuse_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_ReportAbuse_ReportAbuse_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_ReportAbuse_ReportAbuse_Statics::SIK_ReportAbuse_eventReportAbuse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_ReportAbuse_ReportAbuse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_ReportAbuse_ReportAbuse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_ReportAbuse::execReportAbuse)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_SteamIdActor);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_SteamIdTarget);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppId);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AbuseType);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_ContentType);
	P_GET_PROPERTY(FStrProperty,Z_Param_Description);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_Gid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_ReportAbuse**)Z_Param__Result=USIK_ReportAbuse::ReportAbuse(Z_Param_Key,Z_Param_Out_SteamIdActor,Z_Param_Out_SteamIdTarget,Z_Param_Out_AppId,Z_Param_Out_AbuseType,Z_Param_Out_ContentType,Z_Param_Description,Z_Param_Out_Gid);
	P_NATIVE_END;
}
// ********** End Class USIK_ReportAbuse Function ReportAbuse **************************************

// ********** Begin Class USIK_ReportAbuse *********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_ReportAbuse;
UClass* USIK_ReportAbuse::GetPrivateStaticClass()
{
	using TClass = USIK_ReportAbuse;
	if (!Z_Registration_Info_UClass_USIK_ReportAbuse.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_ReportAbuse"),
			Z_Registration_Info_UClass_USIK_ReportAbuse.InnerSingleton,
			StaticRegisterNativesUSIK_ReportAbuse,
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
	return Z_Registration_Info_UClass_USIK_ReportAbuse.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_ReportAbuse_NoRegister()
{
	return USIK_ReportAbuse::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_ReportAbuse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/Community/SIK_ReportAbuse.h" },
		{ "ModuleRelativePath", "Functions/Community/SIK_ReportAbuse.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_ReportAbuse constinit property declarations *************************
// ********** End Class USIK_ReportAbuse constinit property declarations ***************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ReportAbuse"), .Pointer = &USIK_ReportAbuse::execReportAbuse },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_ReportAbuse_ReportAbuse, "ReportAbuse" }, // 952066064
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_ReportAbuse>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_ReportAbuse_Statics
UObject* (*const Z_Construct_UClass_USIK_ReportAbuse_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_ReportAbuse_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_ReportAbuse_Statics::ClassParams = {
	&USIK_ReportAbuse::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_ReportAbuse_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_ReportAbuse_Statics::Class_MetaDataParams)
};
void USIK_ReportAbuse::StaticRegisterNativesUSIK_ReportAbuse()
{
	UClass* Class = USIK_ReportAbuse::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_ReportAbuse_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_ReportAbuse()
{
	if (!Z_Registration_Info_UClass_USIK_ReportAbuse.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_ReportAbuse.OuterSingleton, Z_Construct_UClass_USIK_ReportAbuse_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_ReportAbuse.OuterSingleton;
}
USIK_ReportAbuse::USIK_ReportAbuse(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_ReportAbuse);
USIK_ReportAbuse::~USIK_ReportAbuse() {}
// ********** End Class USIK_ReportAbuse ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Community_SIK_ReportAbuse_h__Script_SteamWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_ReportAbuse, USIK_ReportAbuse::StaticClass, TEXT("USIK_ReportAbuse"), &Z_Registration_Info_UClass_USIK_ReportAbuse, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_ReportAbuse), 156692939U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Community_SIK_ReportAbuse_h__Script_SteamWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Community_SIK_ReportAbuse_h__Script_SteamWeb_3412427717{
	TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Community_SIK_ReportAbuse_h__Script_SteamWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Community_SIK_ReportAbuse_h__Script_SteamWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
