// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/PublishedFile/SIK_UpdateTags.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_UpdateTags() {}

// ********** Begin Cross Module References ********************************************************
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_UpdateTags();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_UpdateTags_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USIK_UpdateTags Function UpdateTags **************************************
struct Z_Construct_UFunction_USIK_UpdateTags_UpdateTags_Statics
{
	struct SIK_UpdateTags_eventUpdateTags_Parms
	{
		FString Key;
		int64 PublishedFileId;
		int32 AppId;
		FString AddTags;
		FString RemoveTags;
		USIK_UpdateTags* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|PublishedFile" },
		{ "Comment", "//Updates tags on the published file. Existing tags will not be removed unless they are specified in the remove_tags parameter.\n" },
		{ "ModuleRelativePath", "Functions/PublishedFile/SIK_UpdateTags.h" },
		{ "ToolTip", "Updates tags on the published file. Existing tags will not be removed unless they are specified in the remove_tags parameter." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PublishedFileId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddTags_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemoveTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function UpdateTags constinit property declarations ****************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_PublishedFileId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AddTags;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RemoveTags;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function UpdateTags constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function UpdateTags Property Definitions ***************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UpdateTags_UpdateTags_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UpdateTags_eventUpdateTags_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_UpdateTags_UpdateTags_Statics::NewProp_PublishedFileId = { "PublishedFileId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UpdateTags_eventUpdateTags_Parms, PublishedFileId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PublishedFileId_MetaData), NewProp_PublishedFileId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UpdateTags_UpdateTags_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UpdateTags_eventUpdateTags_Parms, AppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppId_MetaData), NewProp_AppId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UpdateTags_UpdateTags_Statics::NewProp_AddTags = { "AddTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UpdateTags_eventUpdateTags_Parms, AddTags), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddTags_MetaData), NewProp_AddTags_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UpdateTags_UpdateTags_Statics::NewProp_RemoveTags = { "RemoveTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UpdateTags_eventUpdateTags_Parms, RemoveTags), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemoveTags_MetaData), NewProp_RemoveTags_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_UpdateTags_UpdateTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UpdateTags_eventUpdateTags_Parms, ReturnValue), Z_Construct_UClass_USIK_UpdateTags_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UpdateTags_UpdateTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UpdateTags_UpdateTags_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UpdateTags_UpdateTags_Statics::NewProp_PublishedFileId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UpdateTags_UpdateTags_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UpdateTags_UpdateTags_Statics::NewProp_AddTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UpdateTags_UpdateTags_Statics::NewProp_RemoveTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UpdateTags_UpdateTags_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UpdateTags_UpdateTags_Statics::PropPointers) < 2048);
// ********** End Function UpdateTags Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UpdateTags_UpdateTags_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_UpdateTags, nullptr, "UpdateTags", 	Z_Construct_UFunction_USIK_UpdateTags_UpdateTags_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UpdateTags_UpdateTags_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_UpdateTags_UpdateTags_Statics::SIK_UpdateTags_eventUpdateTags_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UpdateTags_UpdateTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UpdateTags_UpdateTags_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_UpdateTags_UpdateTags_Statics::SIK_UpdateTags_eventUpdateTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UpdateTags_UpdateTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UpdateTags_UpdateTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UpdateTags::execUpdateTags)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_PublishedFileId);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_AddTags);
	P_GET_PROPERTY(FStrProperty,Z_Param_RemoveTags);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_UpdateTags**)Z_Param__Result=USIK_UpdateTags::UpdateTags(Z_Param_Key,Z_Param_Out_PublishedFileId,Z_Param_Out_AppId,Z_Param_AddTags,Z_Param_RemoveTags);
	P_NATIVE_END;
}
// ********** End Class USIK_UpdateTags Function UpdateTags ****************************************

// ********** Begin Class USIK_UpdateTags **********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_UpdateTags;
UClass* USIK_UpdateTags::GetPrivateStaticClass()
{
	using TClass = USIK_UpdateTags;
	if (!Z_Registration_Info_UClass_USIK_UpdateTags.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_UpdateTags"),
			Z_Registration_Info_UClass_USIK_UpdateTags.InnerSingleton,
			StaticRegisterNativesUSIK_UpdateTags,
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
	return Z_Registration_Info_UClass_USIK_UpdateTags.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_UpdateTags_NoRegister()
{
	return USIK_UpdateTags::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_UpdateTags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/PublishedFile/SIK_UpdateTags.h" },
		{ "ModuleRelativePath", "Functions/PublishedFile/SIK_UpdateTags.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_UpdateTags constinit property declarations **************************
// ********** End Class USIK_UpdateTags constinit property declarations ****************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("UpdateTags"), .Pointer = &USIK_UpdateTags::execUpdateTags },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_UpdateTags_UpdateTags, "UpdateTags" }, // 3146264283
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_UpdateTags>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_UpdateTags_Statics
UObject* (*const Z_Construct_UClass_USIK_UpdateTags_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_UpdateTags_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_UpdateTags_Statics::ClassParams = {
	&USIK_UpdateTags::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_UpdateTags_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_UpdateTags_Statics::Class_MetaDataParams)
};
void USIK_UpdateTags::StaticRegisterNativesUSIK_UpdateTags()
{
	UClass* Class = USIK_UpdateTags::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_UpdateTags_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_UpdateTags()
{
	if (!Z_Registration_Info_UClass_USIK_UpdateTags.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_UpdateTags.OuterSingleton, Z_Construct_UClass_USIK_UpdateTags_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_UpdateTags.OuterSingleton;
}
USIK_UpdateTags::USIK_UpdateTags(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_UpdateTags);
USIK_UpdateTags::~USIK_UpdateTags() {}
// ********** End Class USIK_UpdateTags ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_PublishedFile_SIK_UpdateTags_h__Script_SteamWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_UpdateTags, USIK_UpdateTags::StaticClass, TEXT("USIK_UpdateTags"), &Z_Registration_Info_UClass_USIK_UpdateTags, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_UpdateTags), 4024196992U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_PublishedFile_SIK_UpdateTags_h__Script_SteamWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_PublishedFile_SIK_UpdateTags_h__Script_SteamWeb_2310544279{
	TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_PublishedFile_SIK_UpdateTags_h__Script_SteamWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_PublishedFile_SIK_UpdateTags_h__Script_SteamWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
