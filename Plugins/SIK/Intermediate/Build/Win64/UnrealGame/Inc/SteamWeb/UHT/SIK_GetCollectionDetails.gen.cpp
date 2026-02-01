// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/RemoteStorage/SIK_GetCollectionDetails.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_GetCollectionDetails() {}

// ********** Begin Cross Module References ********************************************************
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetCollectionDetails();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetCollectionDetails_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USIK_GetCollectionDetails Function GetCollectionDetails ******************
struct Z_Construct_UFunction_USIK_GetCollectionDetails_GetCollectionDetails_Statics
{
	struct SIK_GetCollectionDetails_eventGetCollectionDetails_Parms
	{
		int32 CollectionCount;
		int64 PublishedFileIds0;
		USIK_GetCollectionDetails* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|RemoteStorage" },
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_GetCollectionDetails.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollectionCount_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PublishedFileIds0_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetCollectionDetails constinit property declarations ******************
	static const UECodeGen_Private::FIntPropertyParams NewProp_CollectionCount;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_PublishedFileIds0;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCollectionDetails constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCollectionDetails Property Definitions *****************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_GetCollectionDetails_GetCollectionDetails_Statics::NewProp_CollectionCount = { "CollectionCount", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetCollectionDetails_eventGetCollectionDetails_Parms, CollectionCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollectionCount_MetaData), NewProp_CollectionCount_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_GetCollectionDetails_GetCollectionDetails_Statics::NewProp_PublishedFileIds0 = { "PublishedFileIds0", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetCollectionDetails_eventGetCollectionDetails_Parms, PublishedFileIds0), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PublishedFileIds0_MetaData), NewProp_PublishedFileIds0_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_GetCollectionDetails_GetCollectionDetails_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetCollectionDetails_eventGetCollectionDetails_Parms, ReturnValue), Z_Construct_UClass_USIK_GetCollectionDetails_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GetCollectionDetails_GetCollectionDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetCollectionDetails_GetCollectionDetails_Statics::NewProp_CollectionCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetCollectionDetails_GetCollectionDetails_Statics::NewProp_PublishedFileIds0,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetCollectionDetails_GetCollectionDetails_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetCollectionDetails_GetCollectionDetails_Statics::PropPointers) < 2048);
// ********** End Function GetCollectionDetails Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GetCollectionDetails_GetCollectionDetails_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_GetCollectionDetails, nullptr, "GetCollectionDetails", 	Z_Construct_UFunction_USIK_GetCollectionDetails_GetCollectionDetails_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetCollectionDetails_GetCollectionDetails_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_GetCollectionDetails_GetCollectionDetails_Statics::SIK_GetCollectionDetails_eventGetCollectionDetails_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetCollectionDetails_GetCollectionDetails_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GetCollectionDetails_GetCollectionDetails_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_GetCollectionDetails_GetCollectionDetails_Statics::SIK_GetCollectionDetails_eventGetCollectionDetails_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GetCollectionDetails_GetCollectionDetails()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GetCollectionDetails_GetCollectionDetails_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GetCollectionDetails::execGetCollectionDetails)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_CollectionCount);
	P_GET_PROPERTY(FInt64Property,Z_Param_PublishedFileIds0);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_GetCollectionDetails**)Z_Param__Result=USIK_GetCollectionDetails::GetCollectionDetails(Z_Param_Out_CollectionCount,Z_Param_PublishedFileIds0);
	P_NATIVE_END;
}
// ********** End Class USIK_GetCollectionDetails Function GetCollectionDetails ********************

// ********** Begin Class USIK_GetCollectionDetails ************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_GetCollectionDetails;
UClass* USIK_GetCollectionDetails::GetPrivateStaticClass()
{
	using TClass = USIK_GetCollectionDetails;
	if (!Z_Registration_Info_UClass_USIK_GetCollectionDetails.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_GetCollectionDetails"),
			Z_Registration_Info_UClass_USIK_GetCollectionDetails.InnerSingleton,
			StaticRegisterNativesUSIK_GetCollectionDetails,
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
	return Z_Registration_Info_UClass_USIK_GetCollectionDetails.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_GetCollectionDetails_NoRegister()
{
	return USIK_GetCollectionDetails::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_GetCollectionDetails_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/RemoteStorage/SIK_GetCollectionDetails.h" },
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_GetCollectionDetails.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_GetCollectionDetails constinit property declarations ****************
// ********** End Class USIK_GetCollectionDetails constinit property declarations ******************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetCollectionDetails"), .Pointer = &USIK_GetCollectionDetails::execGetCollectionDetails },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_GetCollectionDetails_GetCollectionDetails, "GetCollectionDetails" }, // 64136442
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_GetCollectionDetails>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_GetCollectionDetails_Statics
UObject* (*const Z_Construct_UClass_USIK_GetCollectionDetails_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetCollectionDetails_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_GetCollectionDetails_Statics::ClassParams = {
	&USIK_GetCollectionDetails::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetCollectionDetails_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_GetCollectionDetails_Statics::Class_MetaDataParams)
};
void USIK_GetCollectionDetails::StaticRegisterNativesUSIK_GetCollectionDetails()
{
	UClass* Class = USIK_GetCollectionDetails::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_GetCollectionDetails_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_GetCollectionDetails()
{
	if (!Z_Registration_Info_UClass_USIK_GetCollectionDetails.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_GetCollectionDetails.OuterSingleton, Z_Construct_UClass_USIK_GetCollectionDetails_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_GetCollectionDetails.OuterSingleton;
}
USIK_GetCollectionDetails::USIK_GetCollectionDetails(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_GetCollectionDetails);
USIK_GetCollectionDetails::~USIK_GetCollectionDetails() {}
// ********** End Class USIK_GetCollectionDetails **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_RemoteStorage_SIK_GetCollectionDetails_h__Script_SteamWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_GetCollectionDetails, USIK_GetCollectionDetails::StaticClass, TEXT("USIK_GetCollectionDetails"), &Z_Registration_Info_UClass_USIK_GetCollectionDetails, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_GetCollectionDetails), 2279606813U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_RemoteStorage_SIK_GetCollectionDetails_h__Script_SteamWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_RemoteStorage_SIK_GetCollectionDetails_h__Script_SteamWeb_1540894234{
	TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_RemoteStorage_SIK_GetCollectionDetails_h__Script_SteamWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_RemoteStorage_SIK_GetCollectionDetails_h__Script_SteamWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
