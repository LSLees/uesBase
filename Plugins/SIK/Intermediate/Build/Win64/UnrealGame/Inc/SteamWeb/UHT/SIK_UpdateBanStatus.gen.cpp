// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/PublishedFile/SIK_UpdateBanStatus.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_UpdateBanStatus() {}

// ********** Begin Cross Module References ********************************************************
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_UpdateBanStatus();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_UpdateBanStatus_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USIK_UpdateBanStatus Function UpdateBanStatus ****************************
struct Z_Construct_UFunction_USIK_UpdateBanStatus_UpdateBanStatus_Statics
{
	struct SIK_UpdateBanStatus_eventUpdateBanStatus_Parms
	{
		FString Key;
		int64 PublishedFileId;
		int32 AppId;
		bool Banned;
		FString Reason;
		USIK_UpdateBanStatus* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|PublishedFile" },
		{ "Comment", "//Updates the ban status on the published file\n" },
		{ "ModuleRelativePath", "Functions/PublishedFile/SIK_UpdateBanStatus.h" },
		{ "ToolTip", "Updates the ban status on the published file" },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Banned_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Reason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function UpdateBanStatus constinit property declarations ***********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_PublishedFileId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static void NewProp_Banned_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Banned;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Reason;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function UpdateBanStatus constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function UpdateBanStatus Property Definitions **********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UpdateBanStatus_UpdateBanStatus_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UpdateBanStatus_eventUpdateBanStatus_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_UpdateBanStatus_UpdateBanStatus_Statics::NewProp_PublishedFileId = { "PublishedFileId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UpdateBanStatus_eventUpdateBanStatus_Parms, PublishedFileId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PublishedFileId_MetaData), NewProp_PublishedFileId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UpdateBanStatus_UpdateBanStatus_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UpdateBanStatus_eventUpdateBanStatus_Parms, AppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppId_MetaData), NewProp_AppId_MetaData) };
void Z_Construct_UFunction_USIK_UpdateBanStatus_UpdateBanStatus_Statics::NewProp_Banned_SetBit(void* Obj)
{
	((SIK_UpdateBanStatus_eventUpdateBanStatus_Parms*)Obj)->Banned = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UpdateBanStatus_UpdateBanStatus_Statics::NewProp_Banned = { "Banned", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UpdateBanStatus_eventUpdateBanStatus_Parms), &Z_Construct_UFunction_USIK_UpdateBanStatus_UpdateBanStatus_Statics::NewProp_Banned_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Banned_MetaData), NewProp_Banned_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UpdateBanStatus_UpdateBanStatus_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UpdateBanStatus_eventUpdateBanStatus_Parms, Reason), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Reason_MetaData), NewProp_Reason_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_UpdateBanStatus_UpdateBanStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UpdateBanStatus_eventUpdateBanStatus_Parms, ReturnValue), Z_Construct_UClass_USIK_UpdateBanStatus_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UpdateBanStatus_UpdateBanStatus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UpdateBanStatus_UpdateBanStatus_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UpdateBanStatus_UpdateBanStatus_Statics::NewProp_PublishedFileId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UpdateBanStatus_UpdateBanStatus_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UpdateBanStatus_UpdateBanStatus_Statics::NewProp_Banned,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UpdateBanStatus_UpdateBanStatus_Statics::NewProp_Reason,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UpdateBanStatus_UpdateBanStatus_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UpdateBanStatus_UpdateBanStatus_Statics::PropPointers) < 2048);
// ********** End Function UpdateBanStatus Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UpdateBanStatus_UpdateBanStatus_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_UpdateBanStatus, nullptr, "UpdateBanStatus", 	Z_Construct_UFunction_USIK_UpdateBanStatus_UpdateBanStatus_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UpdateBanStatus_UpdateBanStatus_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_UpdateBanStatus_UpdateBanStatus_Statics::SIK_UpdateBanStatus_eventUpdateBanStatus_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UpdateBanStatus_UpdateBanStatus_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UpdateBanStatus_UpdateBanStatus_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_UpdateBanStatus_UpdateBanStatus_Statics::SIK_UpdateBanStatus_eventUpdateBanStatus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UpdateBanStatus_UpdateBanStatus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UpdateBanStatus_UpdateBanStatus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UpdateBanStatus::execUpdateBanStatus)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_PublishedFileId);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppId);
	P_GET_UBOOL_REF(Z_Param_Out_Banned);
	P_GET_PROPERTY(FStrProperty,Z_Param_Reason);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_UpdateBanStatus**)Z_Param__Result=USIK_UpdateBanStatus::UpdateBanStatus(Z_Param_Key,Z_Param_Out_PublishedFileId,Z_Param_Out_AppId,Z_Param_Out_Banned,Z_Param_Reason);
	P_NATIVE_END;
}
// ********** End Class USIK_UpdateBanStatus Function UpdateBanStatus ******************************

// ********** Begin Class USIK_UpdateBanStatus *****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_UpdateBanStatus;
UClass* USIK_UpdateBanStatus::GetPrivateStaticClass()
{
	using TClass = USIK_UpdateBanStatus;
	if (!Z_Registration_Info_UClass_USIK_UpdateBanStatus.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_UpdateBanStatus"),
			Z_Registration_Info_UClass_USIK_UpdateBanStatus.InnerSingleton,
			StaticRegisterNativesUSIK_UpdateBanStatus,
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
	return Z_Registration_Info_UClass_USIK_UpdateBanStatus.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_UpdateBanStatus_NoRegister()
{
	return USIK_UpdateBanStatus::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_UpdateBanStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/PublishedFile/SIK_UpdateBanStatus.h" },
		{ "ModuleRelativePath", "Functions/PublishedFile/SIK_UpdateBanStatus.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_UpdateBanStatus constinit property declarations *********************
// ********** End Class USIK_UpdateBanStatus constinit property declarations ***********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("UpdateBanStatus"), .Pointer = &USIK_UpdateBanStatus::execUpdateBanStatus },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_UpdateBanStatus_UpdateBanStatus, "UpdateBanStatus" }, // 2082970526
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_UpdateBanStatus>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_UpdateBanStatus_Statics
UObject* (*const Z_Construct_UClass_USIK_UpdateBanStatus_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_UpdateBanStatus_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_UpdateBanStatus_Statics::ClassParams = {
	&USIK_UpdateBanStatus::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_UpdateBanStatus_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_UpdateBanStatus_Statics::Class_MetaDataParams)
};
void USIK_UpdateBanStatus::StaticRegisterNativesUSIK_UpdateBanStatus()
{
	UClass* Class = USIK_UpdateBanStatus::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_UpdateBanStatus_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_UpdateBanStatus()
{
	if (!Z_Registration_Info_UClass_USIK_UpdateBanStatus.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_UpdateBanStatus.OuterSingleton, Z_Construct_UClass_USIK_UpdateBanStatus_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_UpdateBanStatus.OuterSingleton;
}
USIK_UpdateBanStatus::USIK_UpdateBanStatus(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_UpdateBanStatus);
USIK_UpdateBanStatus::~USIK_UpdateBanStatus() {}
// ********** End Class USIK_UpdateBanStatus *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_PublishedFile_SIK_UpdateBanStatus_h__Script_SteamWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_UpdateBanStatus, USIK_UpdateBanStatus::StaticClass, TEXT("USIK_UpdateBanStatus"), &Z_Registration_Info_UClass_USIK_UpdateBanStatus, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_UpdateBanStatus), 3062248770U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_PublishedFile_SIK_UpdateBanStatus_h__Script_SteamWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_PublishedFile_SIK_UpdateBanStatus_h__Script_SteamWeb_1203163215{
	TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_PublishedFile_SIK_UpdateBanStatus_h__Script_SteamWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_PublishedFile_SIK_UpdateBanStatus_h__Script_SteamWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
