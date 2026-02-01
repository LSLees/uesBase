// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/RemoteStorage/SIK_EnumerateUserSubscribedFiles.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_EnumerateUserSubscribedFiles() {}

// ********** Begin Cross Module References ********************************************************
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_EnumerateUserSubscribedFiles();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_EnumerateUserSubscribedFiles_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USIK_EnumerateUserSubscribedFiles Function EnumerateUserSubscribedFiles **
struct Z_Construct_UFunction_USIK_EnumerateUserSubscribedFiles_EnumerateUserSubscribedFiles_Statics
{
	struct SIK_EnumerateUserSubscribedFiles_eventEnumerateUserSubscribedFiles_Parms
	{
		FString Key;
		int64 SteamId;
		int32 AppId;
		int32 ListType;
		USIK_EnumerateUserSubscribedFiles* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|RemoteStorage" },
		{ "CPP_Default_ListType", "-1" },
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_EnumerateUserSubscribedFiles.h" },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ListType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function EnumerateUserSubscribedFiles constinit property declarations **********
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ListType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EnumerateUserSubscribedFiles constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EnumerateUserSubscribedFiles Property Definitions *********************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_EnumerateUserSubscribedFiles_EnumerateUserSubscribedFiles_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_EnumerateUserSubscribedFiles_eventEnumerateUserSubscribedFiles_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_EnumerateUserSubscribedFiles_EnumerateUserSubscribedFiles_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_EnumerateUserSubscribedFiles_eventEnumerateUserSubscribedFiles_Parms, SteamId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamId_MetaData), NewProp_SteamId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_EnumerateUserSubscribedFiles_EnumerateUserSubscribedFiles_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_EnumerateUserSubscribedFiles_eventEnumerateUserSubscribedFiles_Parms, AppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppId_MetaData), NewProp_AppId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_EnumerateUserSubscribedFiles_EnumerateUserSubscribedFiles_Statics::NewProp_ListType = { "ListType", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_EnumerateUserSubscribedFiles_eventEnumerateUserSubscribedFiles_Parms, ListType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ListType_MetaData), NewProp_ListType_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_EnumerateUserSubscribedFiles_EnumerateUserSubscribedFiles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_EnumerateUserSubscribedFiles_eventEnumerateUserSubscribedFiles_Parms, ReturnValue), Z_Construct_UClass_USIK_EnumerateUserSubscribedFiles_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_EnumerateUserSubscribedFiles_EnumerateUserSubscribedFiles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_EnumerateUserSubscribedFiles_EnumerateUserSubscribedFiles_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_EnumerateUserSubscribedFiles_EnumerateUserSubscribedFiles_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_EnumerateUserSubscribedFiles_EnumerateUserSubscribedFiles_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_EnumerateUserSubscribedFiles_EnumerateUserSubscribedFiles_Statics::NewProp_ListType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_EnumerateUserSubscribedFiles_EnumerateUserSubscribedFiles_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_EnumerateUserSubscribedFiles_EnumerateUserSubscribedFiles_Statics::PropPointers) < 2048);
// ********** End Function EnumerateUserSubscribedFiles Property Definitions ***********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_EnumerateUserSubscribedFiles_EnumerateUserSubscribedFiles_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_EnumerateUserSubscribedFiles, nullptr, "EnumerateUserSubscribedFiles", 	Z_Construct_UFunction_USIK_EnumerateUserSubscribedFiles_EnumerateUserSubscribedFiles_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_EnumerateUserSubscribedFiles_EnumerateUserSubscribedFiles_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_EnumerateUserSubscribedFiles_EnumerateUserSubscribedFiles_Statics::SIK_EnumerateUserSubscribedFiles_eventEnumerateUserSubscribedFiles_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_EnumerateUserSubscribedFiles_EnumerateUserSubscribedFiles_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_EnumerateUserSubscribedFiles_EnumerateUserSubscribedFiles_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_EnumerateUserSubscribedFiles_EnumerateUserSubscribedFiles_Statics::SIK_EnumerateUserSubscribedFiles_eventEnumerateUserSubscribedFiles_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_EnumerateUserSubscribedFiles_EnumerateUserSubscribedFiles()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_EnumerateUserSubscribedFiles_EnumerateUserSubscribedFiles_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_EnumerateUserSubscribedFiles::execEnumerateUserSubscribedFiles)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_SteamId);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppId);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_ListType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_EnumerateUserSubscribedFiles**)Z_Param__Result=USIK_EnumerateUserSubscribedFiles::EnumerateUserSubscribedFiles(Z_Param_Key,Z_Param_Out_SteamId,Z_Param_Out_AppId,Z_Param_Out_ListType);
	P_NATIVE_END;
}
// ********** End Class USIK_EnumerateUserSubscribedFiles Function EnumerateUserSubscribedFiles ****

// ********** Begin Class USIK_EnumerateUserSubscribedFiles ****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_EnumerateUserSubscribedFiles;
UClass* USIK_EnumerateUserSubscribedFiles::GetPrivateStaticClass()
{
	using TClass = USIK_EnumerateUserSubscribedFiles;
	if (!Z_Registration_Info_UClass_USIK_EnumerateUserSubscribedFiles.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_EnumerateUserSubscribedFiles"),
			Z_Registration_Info_UClass_USIK_EnumerateUserSubscribedFiles.InnerSingleton,
			StaticRegisterNativesUSIK_EnumerateUserSubscribedFiles,
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
	return Z_Registration_Info_UClass_USIK_EnumerateUserSubscribedFiles.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_EnumerateUserSubscribedFiles_NoRegister()
{
	return USIK_EnumerateUserSubscribedFiles::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_EnumerateUserSubscribedFiles_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/RemoteStorage/SIK_EnumerateUserSubscribedFiles.h" },
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_EnumerateUserSubscribedFiles.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_EnumerateUserSubscribedFiles constinit property declarations ********
// ********** End Class USIK_EnumerateUserSubscribedFiles constinit property declarations **********
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("EnumerateUserSubscribedFiles"), .Pointer = &USIK_EnumerateUserSubscribedFiles::execEnumerateUserSubscribedFiles },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_EnumerateUserSubscribedFiles_EnumerateUserSubscribedFiles, "EnumerateUserSubscribedFiles" }, // 3656004380
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_EnumerateUserSubscribedFiles>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_EnumerateUserSubscribedFiles_Statics
UObject* (*const Z_Construct_UClass_USIK_EnumerateUserSubscribedFiles_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_EnumerateUserSubscribedFiles_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_EnumerateUserSubscribedFiles_Statics::ClassParams = {
	&USIK_EnumerateUserSubscribedFiles::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_EnumerateUserSubscribedFiles_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_EnumerateUserSubscribedFiles_Statics::Class_MetaDataParams)
};
void USIK_EnumerateUserSubscribedFiles::StaticRegisterNativesUSIK_EnumerateUserSubscribedFiles()
{
	UClass* Class = USIK_EnumerateUserSubscribedFiles::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_EnumerateUserSubscribedFiles_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_EnumerateUserSubscribedFiles()
{
	if (!Z_Registration_Info_UClass_USIK_EnumerateUserSubscribedFiles.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_EnumerateUserSubscribedFiles.OuterSingleton, Z_Construct_UClass_USIK_EnumerateUserSubscribedFiles_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_EnumerateUserSubscribedFiles.OuterSingleton;
}
USIK_EnumerateUserSubscribedFiles::USIK_EnumerateUserSubscribedFiles(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_EnumerateUserSubscribedFiles);
USIK_EnumerateUserSubscribedFiles::~USIK_EnumerateUserSubscribedFiles() {}
// ********** End Class USIK_EnumerateUserSubscribedFiles ******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_RemoteStorage_SIK_EnumerateUserSubscribedFiles_h__Script_SteamWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_EnumerateUserSubscribedFiles, USIK_EnumerateUserSubscribedFiles::StaticClass, TEXT("USIK_EnumerateUserSubscribedFiles"), &Z_Registration_Info_UClass_USIK_EnumerateUserSubscribedFiles, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_EnumerateUserSubscribedFiles), 2319952043U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_RemoteStorage_SIK_EnumerateUserSubscribedFiles_h__Script_SteamWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_RemoteStorage_SIK_EnumerateUserSubscribedFiles_h__Script_SteamWeb_2598278998{
	TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_RemoteStorage_SIK_EnumerateUserSubscribedFiles_h__Script_SteamWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_RemoteStorage_SIK_EnumerateUserSubscribedFiles_h__Script_SteamWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
