// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/RemoteStorage/SIK_SubscribePublishedFile.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_SubscribePublishedFile() {}

// ********** Begin Cross Module References ********************************************************
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_SubscribePublishedFile();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_SubscribePublishedFile_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USIK_SubscribePublishedFile Function SubscribePublishedFile **************
struct Z_Construct_UFunction_USIK_SubscribePublishedFile_SubscribePublishedFile_Statics
{
	struct SIK_SubscribePublishedFile_eventSubscribePublishedFile_Parms
	{
		FString Key;
		int64 SteamId;
		int32 AppId;
		int64 PublishedFileId;
		USIK_SubscribePublishedFile* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|RemoteStorage" },
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_SubscribePublishedFile.h" },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PublishedFileId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SubscribePublishedFile constinit property declarations ****************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_PublishedFileId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SubscribePublishedFile constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SubscribePublishedFile Property Definitions ***************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_SubscribePublishedFile_SubscribePublishedFile_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_SubscribePublishedFile_eventSubscribePublishedFile_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_SubscribePublishedFile_SubscribePublishedFile_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_SubscribePublishedFile_eventSubscribePublishedFile_Parms, SteamId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamId_MetaData), NewProp_SteamId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_SubscribePublishedFile_SubscribePublishedFile_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_SubscribePublishedFile_eventSubscribePublishedFile_Parms, AppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppId_MetaData), NewProp_AppId_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_SubscribePublishedFile_SubscribePublishedFile_Statics::NewProp_PublishedFileId = { "PublishedFileId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_SubscribePublishedFile_eventSubscribePublishedFile_Parms, PublishedFileId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PublishedFileId_MetaData), NewProp_PublishedFileId_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_SubscribePublishedFile_SubscribePublishedFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_SubscribePublishedFile_eventSubscribePublishedFile_Parms, ReturnValue), Z_Construct_UClass_USIK_SubscribePublishedFile_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_SubscribePublishedFile_SubscribePublishedFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SubscribePublishedFile_SubscribePublishedFile_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SubscribePublishedFile_SubscribePublishedFile_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SubscribePublishedFile_SubscribePublishedFile_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SubscribePublishedFile_SubscribePublishedFile_Statics::NewProp_PublishedFileId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SubscribePublishedFile_SubscribePublishedFile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SubscribePublishedFile_SubscribePublishedFile_Statics::PropPointers) < 2048);
// ********** End Function SubscribePublishedFile Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_SubscribePublishedFile_SubscribePublishedFile_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_SubscribePublishedFile, nullptr, "SubscribePublishedFile", 	Z_Construct_UFunction_USIK_SubscribePublishedFile_SubscribePublishedFile_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SubscribePublishedFile_SubscribePublishedFile_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_SubscribePublishedFile_SubscribePublishedFile_Statics::SIK_SubscribePublishedFile_eventSubscribePublishedFile_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SubscribePublishedFile_SubscribePublishedFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_SubscribePublishedFile_SubscribePublishedFile_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_SubscribePublishedFile_SubscribePublishedFile_Statics::SIK_SubscribePublishedFile_eventSubscribePublishedFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_SubscribePublishedFile_SubscribePublishedFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_SubscribePublishedFile_SubscribePublishedFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_SubscribePublishedFile::execSubscribePublishedFile)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_SteamId);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppId);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_PublishedFileId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_SubscribePublishedFile**)Z_Param__Result=USIK_SubscribePublishedFile::SubscribePublishedFile(Z_Param_Key,Z_Param_Out_SteamId,Z_Param_Out_AppId,Z_Param_Out_PublishedFileId);
	P_NATIVE_END;
}
// ********** End Class USIK_SubscribePublishedFile Function SubscribePublishedFile ****************

// ********** Begin Class USIK_SubscribePublishedFile **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_SubscribePublishedFile;
UClass* USIK_SubscribePublishedFile::GetPrivateStaticClass()
{
	using TClass = USIK_SubscribePublishedFile;
	if (!Z_Registration_Info_UClass_USIK_SubscribePublishedFile.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_SubscribePublishedFile"),
			Z_Registration_Info_UClass_USIK_SubscribePublishedFile.InnerSingleton,
			StaticRegisterNativesUSIK_SubscribePublishedFile,
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
	return Z_Registration_Info_UClass_USIK_SubscribePublishedFile.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_SubscribePublishedFile_NoRegister()
{
	return USIK_SubscribePublishedFile::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_SubscribePublishedFile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/RemoteStorage/SIK_SubscribePublishedFile.h" },
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_SubscribePublishedFile.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_SubscribePublishedFile constinit property declarations **************
// ********** End Class USIK_SubscribePublishedFile constinit property declarations ****************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("SubscribePublishedFile"), .Pointer = &USIK_SubscribePublishedFile::execSubscribePublishedFile },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_SubscribePublishedFile_SubscribePublishedFile, "SubscribePublishedFile" }, // 739680882
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_SubscribePublishedFile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_SubscribePublishedFile_Statics
UObject* (*const Z_Construct_UClass_USIK_SubscribePublishedFile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_SubscribePublishedFile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_SubscribePublishedFile_Statics::ClassParams = {
	&USIK_SubscribePublishedFile::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_SubscribePublishedFile_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_SubscribePublishedFile_Statics::Class_MetaDataParams)
};
void USIK_SubscribePublishedFile::StaticRegisterNativesUSIK_SubscribePublishedFile()
{
	UClass* Class = USIK_SubscribePublishedFile::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_SubscribePublishedFile_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_SubscribePublishedFile()
{
	if (!Z_Registration_Info_UClass_USIK_SubscribePublishedFile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_SubscribePublishedFile.OuterSingleton, Z_Construct_UClass_USIK_SubscribePublishedFile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_SubscribePublishedFile.OuterSingleton;
}
USIK_SubscribePublishedFile::USIK_SubscribePublishedFile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_SubscribePublishedFile);
USIK_SubscribePublishedFile::~USIK_SubscribePublishedFile() {}
// ********** End Class USIK_SubscribePublishedFile ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_RemoteStorage_SIK_SubscribePublishedFile_h__Script_SteamWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_SubscribePublishedFile, USIK_SubscribePublishedFile::StaticClass, TEXT("USIK_SubscribePublishedFile"), &Z_Registration_Info_UClass_USIK_SubscribePublishedFile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_SubscribePublishedFile), 186077940U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_RemoteStorage_SIK_SubscribePublishedFile_h__Script_SteamWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_RemoteStorage_SIK_SubscribePublishedFile_h__Script_SteamWeb_4077954793{
	TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_RemoteStorage_SIK_SubscribePublishedFile_h__Script_SteamWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_RemoteStorage_SIK_SubscribePublishedFile_h__Script_SteamWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
