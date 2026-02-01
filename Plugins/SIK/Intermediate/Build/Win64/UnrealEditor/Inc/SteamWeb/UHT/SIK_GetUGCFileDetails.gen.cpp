// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/RemoteStorage/SIK_GetUGCFileDetails.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_GetUGCFileDetails() {}

// ********** Begin Cross Module References ********************************************************
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetUGCFileDetails();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetUGCFileDetails_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USIK_GetUGCFileDetails Function GetUGCFileDetails ************************
struct Z_Construct_UFunction_USIK_GetUGCFileDetails_GetUGCFileDetails_Statics
{
	struct SIK_GetUGCFileDetails_eventGetUGCFileDetails_Parms
	{
		FString Key;
		int64 SteamId;
		int64 UgcId;
		int32 AppId;
		USIK_GetUGCFileDetails* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|RemoteStorage" },
		{ "CPP_Default_AppId", "0" },
		{ "CPP_Default_SteamId", "-1" },
		{ "CPP_Default_UgcId", "0" },
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_GetUGCFileDetails.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UgcId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetUGCFileDetails constinit property declarations *********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_UgcId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetUGCFileDetails constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetUGCFileDetails Property Definitions ********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_GetUGCFileDetails_GetUGCFileDetails_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetUGCFileDetails_eventGetUGCFileDetails_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_GetUGCFileDetails_GetUGCFileDetails_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetUGCFileDetails_eventGetUGCFileDetails_Parms, SteamId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamId_MetaData), NewProp_SteamId_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_GetUGCFileDetails_GetUGCFileDetails_Statics::NewProp_UgcId = { "UgcId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetUGCFileDetails_eventGetUGCFileDetails_Parms, UgcId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UgcId_MetaData), NewProp_UgcId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_GetUGCFileDetails_GetUGCFileDetails_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetUGCFileDetails_eventGetUGCFileDetails_Parms, AppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppId_MetaData), NewProp_AppId_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_GetUGCFileDetails_GetUGCFileDetails_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetUGCFileDetails_eventGetUGCFileDetails_Parms, ReturnValue), Z_Construct_UClass_USIK_GetUGCFileDetails_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GetUGCFileDetails_GetUGCFileDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetUGCFileDetails_GetUGCFileDetails_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetUGCFileDetails_GetUGCFileDetails_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetUGCFileDetails_GetUGCFileDetails_Statics::NewProp_UgcId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetUGCFileDetails_GetUGCFileDetails_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetUGCFileDetails_GetUGCFileDetails_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetUGCFileDetails_GetUGCFileDetails_Statics::PropPointers) < 2048);
// ********** End Function GetUGCFileDetails Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GetUGCFileDetails_GetUGCFileDetails_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_GetUGCFileDetails, nullptr, "GetUGCFileDetails", 	Z_Construct_UFunction_USIK_GetUGCFileDetails_GetUGCFileDetails_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetUGCFileDetails_GetUGCFileDetails_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_GetUGCFileDetails_GetUGCFileDetails_Statics::SIK_GetUGCFileDetails_eventGetUGCFileDetails_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetUGCFileDetails_GetUGCFileDetails_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GetUGCFileDetails_GetUGCFileDetails_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_GetUGCFileDetails_GetUGCFileDetails_Statics::SIK_GetUGCFileDetails_eventGetUGCFileDetails_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GetUGCFileDetails_GetUGCFileDetails()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GetUGCFileDetails_GetUGCFileDetails_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GetUGCFileDetails::execGetUGCFileDetails)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_SteamId);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_UgcId);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_GetUGCFileDetails**)Z_Param__Result=USIK_GetUGCFileDetails::GetUGCFileDetails(Z_Param_Key,Z_Param_Out_SteamId,Z_Param_Out_UgcId,Z_Param_Out_AppId);
	P_NATIVE_END;
}
// ********** End Class USIK_GetUGCFileDetails Function GetUGCFileDetails **************************

// ********** Begin Class USIK_GetUGCFileDetails ***************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_GetUGCFileDetails;
UClass* USIK_GetUGCFileDetails::GetPrivateStaticClass()
{
	using TClass = USIK_GetUGCFileDetails;
	if (!Z_Registration_Info_UClass_USIK_GetUGCFileDetails.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_GetUGCFileDetails"),
			Z_Registration_Info_UClass_USIK_GetUGCFileDetails.InnerSingleton,
			StaticRegisterNativesUSIK_GetUGCFileDetails,
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
	return Z_Registration_Info_UClass_USIK_GetUGCFileDetails.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_GetUGCFileDetails_NoRegister()
{
	return USIK_GetUGCFileDetails::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_GetUGCFileDetails_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/RemoteStorage/SIK_GetUGCFileDetails.h" },
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_GetUGCFileDetails.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_GetUGCFileDetails constinit property declarations *******************
// ********** End Class USIK_GetUGCFileDetails constinit property declarations *********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetUGCFileDetails"), .Pointer = &USIK_GetUGCFileDetails::execGetUGCFileDetails },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_GetUGCFileDetails_GetUGCFileDetails, "GetUGCFileDetails" }, // 3313138041
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_GetUGCFileDetails>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_GetUGCFileDetails_Statics
UObject* (*const Z_Construct_UClass_USIK_GetUGCFileDetails_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetUGCFileDetails_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_GetUGCFileDetails_Statics::ClassParams = {
	&USIK_GetUGCFileDetails::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetUGCFileDetails_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_GetUGCFileDetails_Statics::Class_MetaDataParams)
};
void USIK_GetUGCFileDetails::StaticRegisterNativesUSIK_GetUGCFileDetails()
{
	UClass* Class = USIK_GetUGCFileDetails::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_GetUGCFileDetails_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_GetUGCFileDetails()
{
	if (!Z_Registration_Info_UClass_USIK_GetUGCFileDetails.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_GetUGCFileDetails.OuterSingleton, Z_Construct_UClass_USIK_GetUGCFileDetails_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_GetUGCFileDetails.OuterSingleton;
}
USIK_GetUGCFileDetails::USIK_GetUGCFileDetails(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_GetUGCFileDetails);
USIK_GetUGCFileDetails::~USIK_GetUGCFileDetails() {}
// ********** End Class USIK_GetUGCFileDetails *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_RemoteStorage_SIK_GetUGCFileDetails_h__Script_SteamWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_GetUGCFileDetails, USIK_GetUGCFileDetails::StaticClass, TEXT("USIK_GetUGCFileDetails"), &Z_Registration_Info_UClass_USIK_GetUGCFileDetails, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_GetUGCFileDetails), 1976519995U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_RemoteStorage_SIK_GetUGCFileDetails_h__Script_SteamWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_RemoteStorage_SIK_GetUGCFileDetails_h__Script_SteamWeb_3525816064{
	TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_RemoteStorage_SIK_GetUGCFileDetails_h__Script_SteamWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_RemoteStorage_SIK_GetUGCFileDetails_h__Script_SteamWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
