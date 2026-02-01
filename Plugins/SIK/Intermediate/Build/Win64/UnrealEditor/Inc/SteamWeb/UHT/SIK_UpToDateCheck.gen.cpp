// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/Apps/SIK_UpToDateCheck.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_UpToDateCheck() {}

// ********** Begin Cross Module References ********************************************************
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_UpToDateCheck();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_UpToDateCheck_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USIK_UpToDateCheck Function UpToDateCheck ********************************
struct Z_Construct_UFunction_USIK_UpToDateCheck_UpToDateCheck_Statics
{
	struct SIK_UpToDateCheck_eventUpToDateCheck_Parms
	{
		int32 AppId;
		int32 Version;
		USIK_UpToDateCheck* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|Apps" },
		{ "ModuleRelativePath", "Functions/Apps/SIK_UpToDateCheck.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function UpToDateCheck constinit property declarations *************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Version;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function UpToDateCheck constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function UpToDateCheck Property Definitions ************************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UpToDateCheck_UpToDateCheck_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UpToDateCheck_eventUpToDateCheck_Parms, AppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppId_MetaData), NewProp_AppId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UpToDateCheck_UpToDateCheck_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UpToDateCheck_eventUpToDateCheck_Parms, Version), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Version_MetaData), NewProp_Version_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_UpToDateCheck_UpToDateCheck_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UpToDateCheck_eventUpToDateCheck_Parms, ReturnValue), Z_Construct_UClass_USIK_UpToDateCheck_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UpToDateCheck_UpToDateCheck_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UpToDateCheck_UpToDateCheck_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UpToDateCheck_UpToDateCheck_Statics::NewProp_Version,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UpToDateCheck_UpToDateCheck_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UpToDateCheck_UpToDateCheck_Statics::PropPointers) < 2048);
// ********** End Function UpToDateCheck Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UpToDateCheck_UpToDateCheck_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_UpToDateCheck, nullptr, "UpToDateCheck", 	Z_Construct_UFunction_USIK_UpToDateCheck_UpToDateCheck_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UpToDateCheck_UpToDateCheck_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_UpToDateCheck_UpToDateCheck_Statics::SIK_UpToDateCheck_eventUpToDateCheck_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UpToDateCheck_UpToDateCheck_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UpToDateCheck_UpToDateCheck_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_UpToDateCheck_UpToDateCheck_Statics::SIK_UpToDateCheck_eventUpToDateCheck_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UpToDateCheck_UpToDateCheck()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UpToDateCheck_UpToDateCheck_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UpToDateCheck::execUpToDateCheck)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppId);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Version);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_UpToDateCheck**)Z_Param__Result=USIK_UpToDateCheck::UpToDateCheck(Z_Param_Out_AppId,Z_Param_Out_Version);
	P_NATIVE_END;
}
// ********** End Class USIK_UpToDateCheck Function UpToDateCheck **********************************

// ********** Begin Class USIK_UpToDateCheck *******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_UpToDateCheck;
UClass* USIK_UpToDateCheck::GetPrivateStaticClass()
{
	using TClass = USIK_UpToDateCheck;
	if (!Z_Registration_Info_UClass_USIK_UpToDateCheck.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_UpToDateCheck"),
			Z_Registration_Info_UClass_USIK_UpToDateCheck.InnerSingleton,
			StaticRegisterNativesUSIK_UpToDateCheck,
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
	return Z_Registration_Info_UClass_USIK_UpToDateCheck.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_UpToDateCheck_NoRegister()
{
	return USIK_UpToDateCheck::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_UpToDateCheck_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/Apps/SIK_UpToDateCheck.h" },
		{ "ModuleRelativePath", "Functions/Apps/SIK_UpToDateCheck.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_UpToDateCheck constinit property declarations ***********************
// ********** End Class USIK_UpToDateCheck constinit property declarations *************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("UpToDateCheck"), .Pointer = &USIK_UpToDateCheck::execUpToDateCheck },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_UpToDateCheck_UpToDateCheck, "UpToDateCheck" }, // 3843201175
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_UpToDateCheck>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_UpToDateCheck_Statics
UObject* (*const Z_Construct_UClass_USIK_UpToDateCheck_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_UpToDateCheck_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_UpToDateCheck_Statics::ClassParams = {
	&USIK_UpToDateCheck::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_UpToDateCheck_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_UpToDateCheck_Statics::Class_MetaDataParams)
};
void USIK_UpToDateCheck::StaticRegisterNativesUSIK_UpToDateCheck()
{
	UClass* Class = USIK_UpToDateCheck::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_UpToDateCheck_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_UpToDateCheck()
{
	if (!Z_Registration_Info_UClass_USIK_UpToDateCheck.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_UpToDateCheck.OuterSingleton, Z_Construct_UClass_USIK_UpToDateCheck_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_UpToDateCheck.OuterSingleton;
}
USIK_UpToDateCheck::USIK_UpToDateCheck(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_UpToDateCheck);
USIK_UpToDateCheck::~USIK_UpToDateCheck() {}
// ********** End Class USIK_UpToDateCheck *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Apps_SIK_UpToDateCheck_h__Script_SteamWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_UpToDateCheck, USIK_UpToDateCheck::StaticClass, TEXT("USIK_UpToDateCheck"), &Z_Registration_Info_UClass_USIK_UpToDateCheck, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_UpToDateCheck), 1525565479U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Apps_SIK_UpToDateCheck_h__Script_SteamWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Apps_SIK_UpToDateCheck_h__Script_SteamWeb_2432840628{
	TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Apps_SIK_UpToDateCheck_h__Script_SteamWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Apps_SIK_UpToDateCheck_h__Script_SteamWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
