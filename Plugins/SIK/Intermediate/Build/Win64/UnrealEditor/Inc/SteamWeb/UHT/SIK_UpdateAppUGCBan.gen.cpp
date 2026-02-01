// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/PublishedFile/SIK_UpdateAppUGCBan.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_UpdateAppUGCBan() {}

// ********** Begin Cross Module References ********************************************************
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_UpdateAppUGCBan();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_UpdateAppUGCBan_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USIK_UpdateAppUGCBan Function UpdateAppUGCBan ****************************
struct Z_Construct_UFunction_USIK_UpdateAppUGCBan_UpdateAppUGCBan_Statics
{
	struct SIK_UpdateAppUGCBan_eventUpdateAppUGCBan_Parms
	{
		FString Key;
		int64 SteamId;
		int32 AppId;
		int32 ExpirationTime;
		FString Reason;
		USIK_UpdateAppUGCBan* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|PublishedFile" },
		{ "Comment", "//Adds/updates/removes a user's UGC ban in the app. Set expiration_time = 0 to remove the ban.\n" },
		{ "ModuleRelativePath", "Functions/PublishedFile/SIK_UpdateAppUGCBan.h" },
		{ "ToolTip", "Adds/updates/removes a user's UGC ban in the app. Set expiration_time = 0 to remove the ban." },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpirationTime_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Reason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function UpdateAppUGCBan constinit property declarations ***********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ExpirationTime;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Reason;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function UpdateAppUGCBan constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function UpdateAppUGCBan Property Definitions **********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UpdateAppUGCBan_UpdateAppUGCBan_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UpdateAppUGCBan_eventUpdateAppUGCBan_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_UpdateAppUGCBan_UpdateAppUGCBan_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UpdateAppUGCBan_eventUpdateAppUGCBan_Parms, SteamId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamId_MetaData), NewProp_SteamId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UpdateAppUGCBan_UpdateAppUGCBan_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UpdateAppUGCBan_eventUpdateAppUGCBan_Parms, AppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppId_MetaData), NewProp_AppId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UpdateAppUGCBan_UpdateAppUGCBan_Statics::NewProp_ExpirationTime = { "ExpirationTime", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UpdateAppUGCBan_eventUpdateAppUGCBan_Parms, ExpirationTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpirationTime_MetaData), NewProp_ExpirationTime_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UpdateAppUGCBan_UpdateAppUGCBan_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UpdateAppUGCBan_eventUpdateAppUGCBan_Parms, Reason), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Reason_MetaData), NewProp_Reason_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_UpdateAppUGCBan_UpdateAppUGCBan_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UpdateAppUGCBan_eventUpdateAppUGCBan_Parms, ReturnValue), Z_Construct_UClass_USIK_UpdateAppUGCBan_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UpdateAppUGCBan_UpdateAppUGCBan_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UpdateAppUGCBan_UpdateAppUGCBan_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UpdateAppUGCBan_UpdateAppUGCBan_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UpdateAppUGCBan_UpdateAppUGCBan_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UpdateAppUGCBan_UpdateAppUGCBan_Statics::NewProp_ExpirationTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UpdateAppUGCBan_UpdateAppUGCBan_Statics::NewProp_Reason,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UpdateAppUGCBan_UpdateAppUGCBan_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UpdateAppUGCBan_UpdateAppUGCBan_Statics::PropPointers) < 2048);
// ********** End Function UpdateAppUGCBan Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UpdateAppUGCBan_UpdateAppUGCBan_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_UpdateAppUGCBan, nullptr, "UpdateAppUGCBan", 	Z_Construct_UFunction_USIK_UpdateAppUGCBan_UpdateAppUGCBan_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UpdateAppUGCBan_UpdateAppUGCBan_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_UpdateAppUGCBan_UpdateAppUGCBan_Statics::SIK_UpdateAppUGCBan_eventUpdateAppUGCBan_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UpdateAppUGCBan_UpdateAppUGCBan_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UpdateAppUGCBan_UpdateAppUGCBan_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_UpdateAppUGCBan_UpdateAppUGCBan_Statics::SIK_UpdateAppUGCBan_eventUpdateAppUGCBan_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UpdateAppUGCBan_UpdateAppUGCBan()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UpdateAppUGCBan_UpdateAppUGCBan_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UpdateAppUGCBan::execUpdateAppUGCBan)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_SteamId);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppId);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_ExpirationTime);
	P_GET_PROPERTY(FStrProperty,Z_Param_Reason);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_UpdateAppUGCBan**)Z_Param__Result=USIK_UpdateAppUGCBan::UpdateAppUGCBan(Z_Param_Key,Z_Param_Out_SteamId,Z_Param_Out_AppId,Z_Param_Out_ExpirationTime,Z_Param_Reason);
	P_NATIVE_END;
}
// ********** End Class USIK_UpdateAppUGCBan Function UpdateAppUGCBan ******************************

// ********** Begin Class USIK_UpdateAppUGCBan *****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_UpdateAppUGCBan;
UClass* USIK_UpdateAppUGCBan::GetPrivateStaticClass()
{
	using TClass = USIK_UpdateAppUGCBan;
	if (!Z_Registration_Info_UClass_USIK_UpdateAppUGCBan.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_UpdateAppUGCBan"),
			Z_Registration_Info_UClass_USIK_UpdateAppUGCBan.InnerSingleton,
			StaticRegisterNativesUSIK_UpdateAppUGCBan,
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
	return Z_Registration_Info_UClass_USIK_UpdateAppUGCBan.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_UpdateAppUGCBan_NoRegister()
{
	return USIK_UpdateAppUGCBan::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_UpdateAppUGCBan_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/PublishedFile/SIK_UpdateAppUGCBan.h" },
		{ "ModuleRelativePath", "Functions/PublishedFile/SIK_UpdateAppUGCBan.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_UpdateAppUGCBan constinit property declarations *********************
// ********** End Class USIK_UpdateAppUGCBan constinit property declarations ***********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("UpdateAppUGCBan"), .Pointer = &USIK_UpdateAppUGCBan::execUpdateAppUGCBan },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_UpdateAppUGCBan_UpdateAppUGCBan, "UpdateAppUGCBan" }, // 2130796223
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_UpdateAppUGCBan>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_UpdateAppUGCBan_Statics
UObject* (*const Z_Construct_UClass_USIK_UpdateAppUGCBan_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_UpdateAppUGCBan_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_UpdateAppUGCBan_Statics::ClassParams = {
	&USIK_UpdateAppUGCBan::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_UpdateAppUGCBan_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_UpdateAppUGCBan_Statics::Class_MetaDataParams)
};
void USIK_UpdateAppUGCBan::StaticRegisterNativesUSIK_UpdateAppUGCBan()
{
	UClass* Class = USIK_UpdateAppUGCBan::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_UpdateAppUGCBan_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_UpdateAppUGCBan()
{
	if (!Z_Registration_Info_UClass_USIK_UpdateAppUGCBan.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_UpdateAppUGCBan.OuterSingleton, Z_Construct_UClass_USIK_UpdateAppUGCBan_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_UpdateAppUGCBan.OuterSingleton;
}
USIK_UpdateAppUGCBan::USIK_UpdateAppUGCBan(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_UpdateAppUGCBan);
USIK_UpdateAppUGCBan::~USIK_UpdateAppUGCBan() {}
// ********** End Class USIK_UpdateAppUGCBan *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_PublishedFile_SIK_UpdateAppUGCBan_h__Script_SteamWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_UpdateAppUGCBan, USIK_UpdateAppUGCBan::StaticClass, TEXT("USIK_UpdateAppUGCBan"), &Z_Registration_Info_UClass_USIK_UpdateAppUGCBan, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_UpdateAppUGCBan), 1838311460U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_PublishedFile_SIK_UpdateAppUGCBan_h__Script_SteamWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_PublishedFile_SIK_UpdateAppUGCBan_h__Script_SteamWeb_104775816{
	TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_PublishedFile_SIK_UpdateAppUGCBan_h__Script_SteamWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_PublishedFile_SIK_UpdateAppUGCBan_h__Script_SteamWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
