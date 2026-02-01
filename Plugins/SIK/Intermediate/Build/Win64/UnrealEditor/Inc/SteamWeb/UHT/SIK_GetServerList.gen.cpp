// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/Apps/SIK_GetServerList.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_GetServerList() {}

// ********** Begin Cross Module References ********************************************************
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetServerList();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetServerList_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USIK_GetServerList Function GetServerList ********************************
struct Z_Construct_UFunction_USIK_GetServerList_GetServerList_Statics
{
	struct SIK_GetServerList_eventGetServerList_Parms
	{
		FString Key;
		FString Filter;
		int32 Limit;
		USIK_GetServerList* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|Apps" },
		{ "CPP_Default_Limit", "-1" },
		{ "ModuleRelativePath", "Functions/Apps/SIK_GetServerList.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filter_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Limit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetServerList constinit property declarations *************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Filter;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Limit;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetServerList constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetServerList Property Definitions ************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_GetServerList_GetServerList_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetServerList_eventGetServerList_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_GetServerList_GetServerList_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetServerList_eventGetServerList_Parms, Filter), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filter_MetaData), NewProp_Filter_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_GetServerList_GetServerList_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetServerList_eventGetServerList_Parms, Limit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Limit_MetaData), NewProp_Limit_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_GetServerList_GetServerList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetServerList_eventGetServerList_Parms, ReturnValue), Z_Construct_UClass_USIK_GetServerList_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GetServerList_GetServerList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetServerList_GetServerList_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetServerList_GetServerList_Statics::NewProp_Filter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetServerList_GetServerList_Statics::NewProp_Limit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetServerList_GetServerList_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetServerList_GetServerList_Statics::PropPointers) < 2048);
// ********** End Function GetServerList Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GetServerList_GetServerList_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_GetServerList, nullptr, "GetServerList", 	Z_Construct_UFunction_USIK_GetServerList_GetServerList_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetServerList_GetServerList_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_GetServerList_GetServerList_Statics::SIK_GetServerList_eventGetServerList_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetServerList_GetServerList_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GetServerList_GetServerList_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_GetServerList_GetServerList_Statics::SIK_GetServerList_eventGetServerList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GetServerList_GetServerList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GetServerList_GetServerList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GetServerList::execGetServerList)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_Filter);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Limit);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_GetServerList**)Z_Param__Result=USIK_GetServerList::GetServerList(Z_Param_Key,Z_Param_Filter,Z_Param_Out_Limit);
	P_NATIVE_END;
}
// ********** End Class USIK_GetServerList Function GetServerList **********************************

// ********** Begin Class USIK_GetServerList *******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_GetServerList;
UClass* USIK_GetServerList::GetPrivateStaticClass()
{
	using TClass = USIK_GetServerList;
	if (!Z_Registration_Info_UClass_USIK_GetServerList.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_GetServerList"),
			Z_Registration_Info_UClass_USIK_GetServerList.InnerSingleton,
			StaticRegisterNativesUSIK_GetServerList,
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
	return Z_Registration_Info_UClass_USIK_GetServerList.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_GetServerList_NoRegister()
{
	return USIK_GetServerList::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_GetServerList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/Apps/SIK_GetServerList.h" },
		{ "ModuleRelativePath", "Functions/Apps/SIK_GetServerList.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_GetServerList constinit property declarations ***********************
// ********** End Class USIK_GetServerList constinit property declarations *************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetServerList"), .Pointer = &USIK_GetServerList::execGetServerList },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_GetServerList_GetServerList, "GetServerList" }, // 991286074
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_GetServerList>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_GetServerList_Statics
UObject* (*const Z_Construct_UClass_USIK_GetServerList_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetServerList_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_GetServerList_Statics::ClassParams = {
	&USIK_GetServerList::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetServerList_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_GetServerList_Statics::Class_MetaDataParams)
};
void USIK_GetServerList::StaticRegisterNativesUSIK_GetServerList()
{
	UClass* Class = USIK_GetServerList::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_GetServerList_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_GetServerList()
{
	if (!Z_Registration_Info_UClass_USIK_GetServerList.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_GetServerList.OuterSingleton, Z_Construct_UClass_USIK_GetServerList_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_GetServerList.OuterSingleton;
}
USIK_GetServerList::USIK_GetServerList(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_GetServerList);
USIK_GetServerList::~USIK_GetServerList() {}
// ********** End Class USIK_GetServerList *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Apps_SIK_GetServerList_h__Script_SteamWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_GetServerList, USIK_GetServerList::StaticClass, TEXT("USIK_GetServerList"), &Z_Registration_Info_UClass_USIK_GetServerList, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_GetServerList), 3483367603U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Apps_SIK_GetServerList_h__Script_SteamWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Apps_SIK_GetServerList_h__Script_SteamWeb_4209609174{
	TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Apps_SIK_GetServerList_h__Script_SteamWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Apps_SIK_GetServerList_h__Script_SteamWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
