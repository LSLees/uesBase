// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/PublishedItemVoting/SIK_ItemVoteSummary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_ItemVoteSummary() {}

// ********** Begin Cross Module References ********************************************************
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_ItemVoteSummary();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_ItemVoteSummary_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USIK_ItemVoteSummary Function ItemVoteSummary ****************************
struct Z_Construct_UFunction_USIK_ItemVoteSummary_ItemVoteSummary_Statics
{
	struct SIK_ItemVoteSummary_eventItemVoteSummary_Parms
	{
		FString Key;
		int64 SteamId;
		int32 AppId;
		int32 Count;
		int64 PublishedFileId0;
		USIK_ItemVoteSummary* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|PublishedItemVoting" },
		{ "CPP_Default_PublishedFileId0", "-1" },
		{ "ModuleRelativePath", "Functions/PublishedItemVoting/SIK_ItemVoteSummary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ItemVoteSummary constinit property declarations ***********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_PublishedFileId0;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ItemVoteSummary constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ItemVoteSummary Property Definitions **********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_ItemVoteSummary_ItemVoteSummary_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ItemVoteSummary_eventItemVoteSummary_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_ItemVoteSummary_ItemVoteSummary_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ItemVoteSummary_eventItemVoteSummary_Parms, SteamId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamId_MetaData), NewProp_SteamId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_ItemVoteSummary_ItemVoteSummary_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ItemVoteSummary_eventItemVoteSummary_Parms, AppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppId_MetaData), NewProp_AppId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_ItemVoteSummary_ItemVoteSummary_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ItemVoteSummary_eventItemVoteSummary_Parms, Count), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Count_MetaData), NewProp_Count_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_ItemVoteSummary_ItemVoteSummary_Statics::NewProp_PublishedFileId0 = { "PublishedFileId0", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ItemVoteSummary_eventItemVoteSummary_Parms, PublishedFileId0), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_ItemVoteSummary_ItemVoteSummary_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ItemVoteSummary_eventItemVoteSummary_Parms, ReturnValue), Z_Construct_UClass_USIK_ItemVoteSummary_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_ItemVoteSummary_ItemVoteSummary_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ItemVoteSummary_ItemVoteSummary_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ItemVoteSummary_ItemVoteSummary_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ItemVoteSummary_ItemVoteSummary_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ItemVoteSummary_ItemVoteSummary_Statics::NewProp_Count,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ItemVoteSummary_ItemVoteSummary_Statics::NewProp_PublishedFileId0,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ItemVoteSummary_ItemVoteSummary_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_ItemVoteSummary_ItemVoteSummary_Statics::PropPointers) < 2048);
// ********** End Function ItemVoteSummary Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_ItemVoteSummary_ItemVoteSummary_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_ItemVoteSummary, nullptr, "ItemVoteSummary", 	Z_Construct_UFunction_USIK_ItemVoteSummary_ItemVoteSummary_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_ItemVoteSummary_ItemVoteSummary_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_ItemVoteSummary_ItemVoteSummary_Statics::SIK_ItemVoteSummary_eventItemVoteSummary_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_ItemVoteSummary_ItemVoteSummary_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_ItemVoteSummary_ItemVoteSummary_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_ItemVoteSummary_ItemVoteSummary_Statics::SIK_ItemVoteSummary_eventItemVoteSummary_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_ItemVoteSummary_ItemVoteSummary()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_ItemVoteSummary_ItemVoteSummary_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_ItemVoteSummary::execItemVoteSummary)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_SteamId);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppId);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Count);
	P_GET_PROPERTY(FInt64Property,Z_Param_PublishedFileId0);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_ItemVoteSummary**)Z_Param__Result=USIK_ItemVoteSummary::ItemVoteSummary(Z_Param_Key,Z_Param_Out_SteamId,Z_Param_Out_AppId,Z_Param_Out_Count,Z_Param_PublishedFileId0);
	P_NATIVE_END;
}
// ********** End Class USIK_ItemVoteSummary Function ItemVoteSummary ******************************

// ********** Begin Class USIK_ItemVoteSummary *****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_ItemVoteSummary;
UClass* USIK_ItemVoteSummary::GetPrivateStaticClass()
{
	using TClass = USIK_ItemVoteSummary;
	if (!Z_Registration_Info_UClass_USIK_ItemVoteSummary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_ItemVoteSummary"),
			Z_Registration_Info_UClass_USIK_ItemVoteSummary.InnerSingleton,
			StaticRegisterNativesUSIK_ItemVoteSummary,
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
	return Z_Registration_Info_UClass_USIK_ItemVoteSummary.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_ItemVoteSummary_NoRegister()
{
	return USIK_ItemVoteSummary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_ItemVoteSummary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/PublishedItemVoting/SIK_ItemVoteSummary.h" },
		{ "ModuleRelativePath", "Functions/PublishedItemVoting/SIK_ItemVoteSummary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_ItemVoteSummary constinit property declarations *********************
// ********** End Class USIK_ItemVoteSummary constinit property declarations ***********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ItemVoteSummary"), .Pointer = &USIK_ItemVoteSummary::execItemVoteSummary },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_ItemVoteSummary_ItemVoteSummary, "ItemVoteSummary" }, // 1735862834
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_ItemVoteSummary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_ItemVoteSummary_Statics
UObject* (*const Z_Construct_UClass_USIK_ItemVoteSummary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_ItemVoteSummary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_ItemVoteSummary_Statics::ClassParams = {
	&USIK_ItemVoteSummary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_ItemVoteSummary_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_ItemVoteSummary_Statics::Class_MetaDataParams)
};
void USIK_ItemVoteSummary::StaticRegisterNativesUSIK_ItemVoteSummary()
{
	UClass* Class = USIK_ItemVoteSummary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_ItemVoteSummary_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_ItemVoteSummary()
{
	if (!Z_Registration_Info_UClass_USIK_ItemVoteSummary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_ItemVoteSummary.OuterSingleton, Z_Construct_UClass_USIK_ItemVoteSummary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_ItemVoteSummary.OuterSingleton;
}
USIK_ItemVoteSummary::USIK_ItemVoteSummary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_ItemVoteSummary);
USIK_ItemVoteSummary::~USIK_ItemVoteSummary() {}
// ********** End Class USIK_ItemVoteSummary *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_PublishedItemVoting_SIK_ItemVoteSummary_h__Script_SteamWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_ItemVoteSummary, USIK_ItemVoteSummary::StaticClass, TEXT("USIK_ItemVoteSummary"), &Z_Registration_Info_UClass_USIK_ItemVoteSummary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_ItemVoteSummary), 3414818090U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_PublishedItemVoting_SIK_ItemVoteSummary_h__Script_SteamWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_PublishedItemVoting_SIK_ItemVoteSummary_h__Script_SteamWeb_4254315075{
	TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_PublishedItemVoting_SIK_ItemVoteSummary_h__Script_SteamWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_PublishedItemVoting_SIK_ItemVoteSummary_h__Script_SteamWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
