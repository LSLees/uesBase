// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/PublishedItemVoting/SIK_UserVoteSummary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_UserVoteSummary() {}

// ********** Begin Cross Module References ********************************************************
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_UserVoteSummary();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_UserVoteSummary_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USIK_UserVoteSummary Function UserVoteSummary ****************************
struct Z_Construct_UFunction_USIK_UserVoteSummary_UserVoteSummary_Statics
{
	struct SIK_UserVoteSummary_eventUserVoteSummary_Parms
	{
		FString Key;
		int64 SteamId;
		int32 Count;
		int64 PublishedFileId0;
		USIK_UserVoteSummary* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|PublishedItemVoting" },
		{ "CPP_Default_PublishedFileId0", "-1" },
		{ "ModuleRelativePath", "Functions/PublishedItemVoting/SIK_UserVoteSummary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function UserVoteSummary constinit property declarations ***********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_PublishedFileId0;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function UserVoteSummary constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function UserVoteSummary Property Definitions **********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UserVoteSummary_UserVoteSummary_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserVoteSummary_eventUserVoteSummary_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_UserVoteSummary_UserVoteSummary_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserVoteSummary_eventUserVoteSummary_Parms, SteamId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamId_MetaData), NewProp_SteamId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UserVoteSummary_UserVoteSummary_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserVoteSummary_eventUserVoteSummary_Parms, Count), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Count_MetaData), NewProp_Count_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_UserVoteSummary_UserVoteSummary_Statics::NewProp_PublishedFileId0 = { "PublishedFileId0", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserVoteSummary_eventUserVoteSummary_Parms, PublishedFileId0), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_UserVoteSummary_UserVoteSummary_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UserVoteSummary_eventUserVoteSummary_Parms, ReturnValue), Z_Construct_UClass_USIK_UserVoteSummary_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UserVoteSummary_UserVoteSummary_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserVoteSummary_UserVoteSummary_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserVoteSummary_UserVoteSummary_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserVoteSummary_UserVoteSummary_Statics::NewProp_Count,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserVoteSummary_UserVoteSummary_Statics::NewProp_PublishedFileId0,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UserVoteSummary_UserVoteSummary_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserVoteSummary_UserVoteSummary_Statics::PropPointers) < 2048);
// ********** End Function UserVoteSummary Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UserVoteSummary_UserVoteSummary_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_UserVoteSummary, nullptr, "UserVoteSummary", 	Z_Construct_UFunction_USIK_UserVoteSummary_UserVoteSummary_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserVoteSummary_UserVoteSummary_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_UserVoteSummary_UserVoteSummary_Statics::SIK_UserVoteSummary_eventUserVoteSummary_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UserVoteSummary_UserVoteSummary_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UserVoteSummary_UserVoteSummary_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_UserVoteSummary_UserVoteSummary_Statics::SIK_UserVoteSummary_eventUserVoteSummary_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UserVoteSummary_UserVoteSummary()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UserVoteSummary_UserVoteSummary_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UserVoteSummary::execUserVoteSummary)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_SteamId);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Count);
	P_GET_PROPERTY(FInt64Property,Z_Param_PublishedFileId0);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_UserVoteSummary**)Z_Param__Result=USIK_UserVoteSummary::UserVoteSummary(Z_Param_Key,Z_Param_Out_SteamId,Z_Param_Out_Count,Z_Param_PublishedFileId0);
	P_NATIVE_END;
}
// ********** End Class USIK_UserVoteSummary Function UserVoteSummary ******************************

// ********** Begin Class USIK_UserVoteSummary *****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_UserVoteSummary;
UClass* USIK_UserVoteSummary::GetPrivateStaticClass()
{
	using TClass = USIK_UserVoteSummary;
	if (!Z_Registration_Info_UClass_USIK_UserVoteSummary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_UserVoteSummary"),
			Z_Registration_Info_UClass_USIK_UserVoteSummary.InnerSingleton,
			StaticRegisterNativesUSIK_UserVoteSummary,
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
	return Z_Registration_Info_UClass_USIK_UserVoteSummary.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_UserVoteSummary_NoRegister()
{
	return USIK_UserVoteSummary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_UserVoteSummary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/PublishedItemVoting/SIK_UserVoteSummary.h" },
		{ "ModuleRelativePath", "Functions/PublishedItemVoting/SIK_UserVoteSummary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_UserVoteSummary constinit property declarations *********************
// ********** End Class USIK_UserVoteSummary constinit property declarations ***********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("UserVoteSummary"), .Pointer = &USIK_UserVoteSummary::execUserVoteSummary },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_UserVoteSummary_UserVoteSummary, "UserVoteSummary" }, // 1538753010
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_UserVoteSummary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_UserVoteSummary_Statics
UObject* (*const Z_Construct_UClass_USIK_UserVoteSummary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_UserVoteSummary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_UserVoteSummary_Statics::ClassParams = {
	&USIK_UserVoteSummary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_UserVoteSummary_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_UserVoteSummary_Statics::Class_MetaDataParams)
};
void USIK_UserVoteSummary::StaticRegisterNativesUSIK_UserVoteSummary()
{
	UClass* Class = USIK_UserVoteSummary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_UserVoteSummary_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_UserVoteSummary()
{
	if (!Z_Registration_Info_UClass_USIK_UserVoteSummary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_UserVoteSummary.OuterSingleton, Z_Construct_UClass_USIK_UserVoteSummary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_UserVoteSummary.OuterSingleton;
}
USIK_UserVoteSummary::USIK_UserVoteSummary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_UserVoteSummary);
USIK_UserVoteSummary::~USIK_UserVoteSummary() {}
// ********** End Class USIK_UserVoteSummary *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_PublishedItemVoting_SIK_UserVoteSummary_h__Script_SteamWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_UserVoteSummary, USIK_UserVoteSummary::StaticClass, TEXT("USIK_UserVoteSummary"), &Z_Registration_Info_UClass_USIK_UserVoteSummary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_UserVoteSummary), 1720322337U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_PublishedItemVoting_SIK_UserVoteSummary_h__Script_SteamWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_PublishedItemVoting_SIK_UserVoteSummary_h__Script_SteamWeb_755334220{
	TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_PublishedItemVoting_SIK_UserVoteSummary_h__Script_SteamWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_PublishedItemVoting_SIK_UserVoteSummary_h__Script_SteamWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
