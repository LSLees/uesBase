// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/News/SIK_GetNewsForApp.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_GetNewsForApp() {}

// ********** Begin Cross Module References ********************************************************
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetNewsForApp();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetNewsForApp_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USIK_GetNewsForApp Function GetNewsForApp ********************************
struct Z_Construct_UFunction_USIK_GetNewsForApp_GetNewsForApp_Statics
{
	struct SIK_GetNewsForApp_eventGetNewsForApp_Parms
	{
		int32 AppId;
		int32 MaxLength;
		int32 EndDate;
		int32 Count;
		FString Feeds;
		USIK_GetNewsForApp* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|News" },
		{ "CPP_Default_Count", "20" },
		{ "CPP_Default_EndDate", "-1" },
		{ "CPP_Default_Feeds", "" },
		{ "CPP_Default_MaxLength", "-1" },
		{ "ModuleRelativePath", "Functions/News/SIK_GetNewsForApp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxLength_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndDate_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Feeds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetNewsForApp constinit property declarations *************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxLength;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EndDate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Feeds;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetNewsForApp constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetNewsForApp Property Definitions ************************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_GetNewsForApp_GetNewsForApp_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetNewsForApp_eventGetNewsForApp_Parms, AppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppId_MetaData), NewProp_AppId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_GetNewsForApp_GetNewsForApp_Statics::NewProp_MaxLength = { "MaxLength", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetNewsForApp_eventGetNewsForApp_Parms, MaxLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxLength_MetaData), NewProp_MaxLength_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_GetNewsForApp_GetNewsForApp_Statics::NewProp_EndDate = { "EndDate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetNewsForApp_eventGetNewsForApp_Parms, EndDate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndDate_MetaData), NewProp_EndDate_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_GetNewsForApp_GetNewsForApp_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetNewsForApp_eventGetNewsForApp_Parms, Count), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Count_MetaData), NewProp_Count_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_GetNewsForApp_GetNewsForApp_Statics::NewProp_Feeds = { "Feeds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetNewsForApp_eventGetNewsForApp_Parms, Feeds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Feeds_MetaData), NewProp_Feeds_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_GetNewsForApp_GetNewsForApp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetNewsForApp_eventGetNewsForApp_Parms, ReturnValue), Z_Construct_UClass_USIK_GetNewsForApp_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GetNewsForApp_GetNewsForApp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetNewsForApp_GetNewsForApp_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetNewsForApp_GetNewsForApp_Statics::NewProp_MaxLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetNewsForApp_GetNewsForApp_Statics::NewProp_EndDate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetNewsForApp_GetNewsForApp_Statics::NewProp_Count,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetNewsForApp_GetNewsForApp_Statics::NewProp_Feeds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetNewsForApp_GetNewsForApp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetNewsForApp_GetNewsForApp_Statics::PropPointers) < 2048);
// ********** End Function GetNewsForApp Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GetNewsForApp_GetNewsForApp_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_GetNewsForApp, nullptr, "GetNewsForApp", 	Z_Construct_UFunction_USIK_GetNewsForApp_GetNewsForApp_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetNewsForApp_GetNewsForApp_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_GetNewsForApp_GetNewsForApp_Statics::SIK_GetNewsForApp_eventGetNewsForApp_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetNewsForApp_GetNewsForApp_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GetNewsForApp_GetNewsForApp_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_GetNewsForApp_GetNewsForApp_Statics::SIK_GetNewsForApp_eventGetNewsForApp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GetNewsForApp_GetNewsForApp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GetNewsForApp_GetNewsForApp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GetNewsForApp::execGetNewsForApp)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppId);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_MaxLength);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_EndDate);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Count);
	P_GET_PROPERTY(FStrProperty,Z_Param_Feeds);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_GetNewsForApp**)Z_Param__Result=USIK_GetNewsForApp::GetNewsForApp(Z_Param_Out_AppId,Z_Param_Out_MaxLength,Z_Param_Out_EndDate,Z_Param_Out_Count,Z_Param_Feeds);
	P_NATIVE_END;
}
// ********** End Class USIK_GetNewsForApp Function GetNewsForApp **********************************

// ********** Begin Class USIK_GetNewsForApp *******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_GetNewsForApp;
UClass* USIK_GetNewsForApp::GetPrivateStaticClass()
{
	using TClass = USIK_GetNewsForApp;
	if (!Z_Registration_Info_UClass_USIK_GetNewsForApp.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_GetNewsForApp"),
			Z_Registration_Info_UClass_USIK_GetNewsForApp.InnerSingleton,
			StaticRegisterNativesUSIK_GetNewsForApp,
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
	return Z_Registration_Info_UClass_USIK_GetNewsForApp.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_GetNewsForApp_NoRegister()
{
	return USIK_GetNewsForApp::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_GetNewsForApp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/News/SIK_GetNewsForApp.h" },
		{ "ModuleRelativePath", "Functions/News/SIK_GetNewsForApp.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_GetNewsForApp constinit property declarations ***********************
// ********** End Class USIK_GetNewsForApp constinit property declarations *************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetNewsForApp"), .Pointer = &USIK_GetNewsForApp::execGetNewsForApp },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_GetNewsForApp_GetNewsForApp, "GetNewsForApp" }, // 1412776631
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_GetNewsForApp>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_GetNewsForApp_Statics
UObject* (*const Z_Construct_UClass_USIK_GetNewsForApp_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetNewsForApp_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_GetNewsForApp_Statics::ClassParams = {
	&USIK_GetNewsForApp::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetNewsForApp_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_GetNewsForApp_Statics::Class_MetaDataParams)
};
void USIK_GetNewsForApp::StaticRegisterNativesUSIK_GetNewsForApp()
{
	UClass* Class = USIK_GetNewsForApp::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_GetNewsForApp_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_GetNewsForApp()
{
	if (!Z_Registration_Info_UClass_USIK_GetNewsForApp.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_GetNewsForApp.OuterSingleton, Z_Construct_UClass_USIK_GetNewsForApp_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_GetNewsForApp.OuterSingleton;
}
USIK_GetNewsForApp::USIK_GetNewsForApp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_GetNewsForApp);
USIK_GetNewsForApp::~USIK_GetNewsForApp() {}
// ********** End Class USIK_GetNewsForApp *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_News_SIK_GetNewsForApp_h__Script_SteamWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_GetNewsForApp, USIK_GetNewsForApp::StaticClass, TEXT("USIK_GetNewsForApp"), &Z_Registration_Info_UClass_USIK_GetNewsForApp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_GetNewsForApp), 278546141U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_News_SIK_GetNewsForApp_h__Script_SteamWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_News_SIK_GetNewsForApp_h__Script_SteamWeb_1601734695{
	TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_News_SIK_GetNewsForApp_h__Script_SteamWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_News_SIK_GetNewsForApp_h__Script_SteamWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
