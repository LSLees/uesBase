// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/News/SIK_GetNewsForAppAuthed.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_GetNewsForAppAuthed() {}

// ********** Begin Cross Module References ********************************************************
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetNewsForAppAuthed();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetNewsForAppAuthed_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USIK_GetNewsForAppAuthed Function GetNewsForAppAuthed ********************
struct Z_Construct_UFunction_USIK_GetNewsForAppAuthed_GetNewsForAppAuthed_Statics
{
	struct SIK_GetNewsForAppAuthed_eventGetNewsForAppAuthed_Parms
	{
		FString Key;
		int32 AppId;
		int32 MaxLength;
		int32 EndDate;
		int32 Count;
		FString Feeds;
		USIK_GetNewsForAppAuthed* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|News" },
		{ "CPP_Default_Count", "20" },
		{ "CPP_Default_EndDate", "-1" },
		{ "CPP_Default_Feeds", "" },
		{ "CPP_Default_MaxLength", "-1" },
		{ "ModuleRelativePath", "Functions/News/SIK_GetNewsForAppAuthed.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
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

// ********** Begin Function GetNewsForAppAuthed constinit property declarations *******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxLength;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EndDate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Feeds;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetNewsForAppAuthed constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetNewsForAppAuthed Property Definitions ******************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_GetNewsForAppAuthed_GetNewsForAppAuthed_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetNewsForAppAuthed_eventGetNewsForAppAuthed_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_GetNewsForAppAuthed_GetNewsForAppAuthed_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetNewsForAppAuthed_eventGetNewsForAppAuthed_Parms, AppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppId_MetaData), NewProp_AppId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_GetNewsForAppAuthed_GetNewsForAppAuthed_Statics::NewProp_MaxLength = { "MaxLength", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetNewsForAppAuthed_eventGetNewsForAppAuthed_Parms, MaxLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxLength_MetaData), NewProp_MaxLength_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_GetNewsForAppAuthed_GetNewsForAppAuthed_Statics::NewProp_EndDate = { "EndDate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetNewsForAppAuthed_eventGetNewsForAppAuthed_Parms, EndDate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndDate_MetaData), NewProp_EndDate_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_GetNewsForAppAuthed_GetNewsForAppAuthed_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetNewsForAppAuthed_eventGetNewsForAppAuthed_Parms, Count), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Count_MetaData), NewProp_Count_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_GetNewsForAppAuthed_GetNewsForAppAuthed_Statics::NewProp_Feeds = { "Feeds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetNewsForAppAuthed_eventGetNewsForAppAuthed_Parms, Feeds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Feeds_MetaData), NewProp_Feeds_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_GetNewsForAppAuthed_GetNewsForAppAuthed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetNewsForAppAuthed_eventGetNewsForAppAuthed_Parms, ReturnValue), Z_Construct_UClass_USIK_GetNewsForAppAuthed_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GetNewsForAppAuthed_GetNewsForAppAuthed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetNewsForAppAuthed_GetNewsForAppAuthed_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetNewsForAppAuthed_GetNewsForAppAuthed_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetNewsForAppAuthed_GetNewsForAppAuthed_Statics::NewProp_MaxLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetNewsForAppAuthed_GetNewsForAppAuthed_Statics::NewProp_EndDate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetNewsForAppAuthed_GetNewsForAppAuthed_Statics::NewProp_Count,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetNewsForAppAuthed_GetNewsForAppAuthed_Statics::NewProp_Feeds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetNewsForAppAuthed_GetNewsForAppAuthed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetNewsForAppAuthed_GetNewsForAppAuthed_Statics::PropPointers) < 2048);
// ********** End Function GetNewsForAppAuthed Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GetNewsForAppAuthed_GetNewsForAppAuthed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_GetNewsForAppAuthed, nullptr, "GetNewsForAppAuthed", 	Z_Construct_UFunction_USIK_GetNewsForAppAuthed_GetNewsForAppAuthed_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetNewsForAppAuthed_GetNewsForAppAuthed_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_GetNewsForAppAuthed_GetNewsForAppAuthed_Statics::SIK_GetNewsForAppAuthed_eventGetNewsForAppAuthed_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetNewsForAppAuthed_GetNewsForAppAuthed_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GetNewsForAppAuthed_GetNewsForAppAuthed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_GetNewsForAppAuthed_GetNewsForAppAuthed_Statics::SIK_GetNewsForAppAuthed_eventGetNewsForAppAuthed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GetNewsForAppAuthed_GetNewsForAppAuthed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GetNewsForAppAuthed_GetNewsForAppAuthed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GetNewsForAppAuthed::execGetNewsForAppAuthed)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppId);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_MaxLength);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_EndDate);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Count);
	P_GET_PROPERTY(FStrProperty,Z_Param_Feeds);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_GetNewsForAppAuthed**)Z_Param__Result=USIK_GetNewsForAppAuthed::GetNewsForAppAuthed(Z_Param_Key,Z_Param_Out_AppId,Z_Param_Out_MaxLength,Z_Param_Out_EndDate,Z_Param_Out_Count,Z_Param_Feeds);
	P_NATIVE_END;
}
// ********** End Class USIK_GetNewsForAppAuthed Function GetNewsForAppAuthed **********************

// ********** Begin Class USIK_GetNewsForAppAuthed *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_GetNewsForAppAuthed;
UClass* USIK_GetNewsForAppAuthed::GetPrivateStaticClass()
{
	using TClass = USIK_GetNewsForAppAuthed;
	if (!Z_Registration_Info_UClass_USIK_GetNewsForAppAuthed.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_GetNewsForAppAuthed"),
			Z_Registration_Info_UClass_USIK_GetNewsForAppAuthed.InnerSingleton,
			StaticRegisterNativesUSIK_GetNewsForAppAuthed,
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
	return Z_Registration_Info_UClass_USIK_GetNewsForAppAuthed.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_GetNewsForAppAuthed_NoRegister()
{
	return USIK_GetNewsForAppAuthed::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_GetNewsForAppAuthed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/News/SIK_GetNewsForAppAuthed.h" },
		{ "ModuleRelativePath", "Functions/News/SIK_GetNewsForAppAuthed.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_GetNewsForAppAuthed constinit property declarations *****************
// ********** End Class USIK_GetNewsForAppAuthed constinit property declarations *******************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetNewsForAppAuthed"), .Pointer = &USIK_GetNewsForAppAuthed::execGetNewsForAppAuthed },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_GetNewsForAppAuthed_GetNewsForAppAuthed, "GetNewsForAppAuthed" }, // 4084941060
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_GetNewsForAppAuthed>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_GetNewsForAppAuthed_Statics
UObject* (*const Z_Construct_UClass_USIK_GetNewsForAppAuthed_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetNewsForAppAuthed_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_GetNewsForAppAuthed_Statics::ClassParams = {
	&USIK_GetNewsForAppAuthed::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetNewsForAppAuthed_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_GetNewsForAppAuthed_Statics::Class_MetaDataParams)
};
void USIK_GetNewsForAppAuthed::StaticRegisterNativesUSIK_GetNewsForAppAuthed()
{
	UClass* Class = USIK_GetNewsForAppAuthed::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_GetNewsForAppAuthed_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_GetNewsForAppAuthed()
{
	if (!Z_Registration_Info_UClass_USIK_GetNewsForAppAuthed.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_GetNewsForAppAuthed.OuterSingleton, Z_Construct_UClass_USIK_GetNewsForAppAuthed_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_GetNewsForAppAuthed.OuterSingleton;
}
USIK_GetNewsForAppAuthed::USIK_GetNewsForAppAuthed(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_GetNewsForAppAuthed);
USIK_GetNewsForAppAuthed::~USIK_GetNewsForAppAuthed() {}
// ********** End Class USIK_GetNewsForAppAuthed ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_News_SIK_GetNewsForAppAuthed_h__Script_SteamWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_GetNewsForAppAuthed, USIK_GetNewsForAppAuthed::StaticClass, TEXT("USIK_GetNewsForAppAuthed"), &Z_Registration_Info_UClass_USIK_GetNewsForAppAuthed, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_GetNewsForAppAuthed), 2229254340U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_News_SIK_GetNewsForAppAuthed_h__Script_SteamWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_News_SIK_GetNewsForAppAuthed_h__Script_SteamWeb_823145426{
	TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_News_SIK_GetNewsForAppAuthed_h__Script_SteamWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_News_SIK_GetNewsForAppAuthed_h__Script_SteamWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
