// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/Player/SIK_GetCommunityBadgeProgress.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_GetCommunityBadgeProgress() {}

// ********** Begin Cross Module References ********************************************************
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetCommunityBadgeProgress();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetCommunityBadgeProgress_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USIK_GetCommunityBadgeProgress Function GetCommunityBadgeProgress ********
struct Z_Construct_UFunction_USIK_GetCommunityBadgeProgress_GetCommunityBadgeProgress_Statics
{
	struct SIK_GetCommunityBadgeProgress_eventGetCommunityBadgeProgress_Parms
	{
		FString Key;
		int64 SteamId;
		int32 BadgeId;
		USIK_GetCommunityBadgeProgress* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|Player" },
		{ "Comment", "//Gets all the quests needed to get the specified badge, and which are completed.\n" },
		{ "ModuleRelativePath", "Functions/Player/SIK_GetCommunityBadgeProgress.h" },
		{ "ToolTip", "Gets all the quests needed to get the specified badge, and which are completed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BadgeId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetCommunityBadgeProgress constinit property declarations *************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BadgeId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCommunityBadgeProgress constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCommunityBadgeProgress Property Definitions ************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_GetCommunityBadgeProgress_GetCommunityBadgeProgress_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetCommunityBadgeProgress_eventGetCommunityBadgeProgress_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_GetCommunityBadgeProgress_GetCommunityBadgeProgress_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetCommunityBadgeProgress_eventGetCommunityBadgeProgress_Parms, SteamId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamId_MetaData), NewProp_SteamId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_GetCommunityBadgeProgress_GetCommunityBadgeProgress_Statics::NewProp_BadgeId = { "BadgeId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetCommunityBadgeProgress_eventGetCommunityBadgeProgress_Parms, BadgeId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BadgeId_MetaData), NewProp_BadgeId_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_GetCommunityBadgeProgress_GetCommunityBadgeProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetCommunityBadgeProgress_eventGetCommunityBadgeProgress_Parms, ReturnValue), Z_Construct_UClass_USIK_GetCommunityBadgeProgress_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GetCommunityBadgeProgress_GetCommunityBadgeProgress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetCommunityBadgeProgress_GetCommunityBadgeProgress_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetCommunityBadgeProgress_GetCommunityBadgeProgress_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetCommunityBadgeProgress_GetCommunityBadgeProgress_Statics::NewProp_BadgeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetCommunityBadgeProgress_GetCommunityBadgeProgress_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetCommunityBadgeProgress_GetCommunityBadgeProgress_Statics::PropPointers) < 2048);
// ********** End Function GetCommunityBadgeProgress Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GetCommunityBadgeProgress_GetCommunityBadgeProgress_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_GetCommunityBadgeProgress, nullptr, "GetCommunityBadgeProgress", 	Z_Construct_UFunction_USIK_GetCommunityBadgeProgress_GetCommunityBadgeProgress_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetCommunityBadgeProgress_GetCommunityBadgeProgress_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_GetCommunityBadgeProgress_GetCommunityBadgeProgress_Statics::SIK_GetCommunityBadgeProgress_eventGetCommunityBadgeProgress_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetCommunityBadgeProgress_GetCommunityBadgeProgress_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GetCommunityBadgeProgress_GetCommunityBadgeProgress_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_GetCommunityBadgeProgress_GetCommunityBadgeProgress_Statics::SIK_GetCommunityBadgeProgress_eventGetCommunityBadgeProgress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GetCommunityBadgeProgress_GetCommunityBadgeProgress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GetCommunityBadgeProgress_GetCommunityBadgeProgress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GetCommunityBadgeProgress::execGetCommunityBadgeProgress)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_SteamId);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_BadgeId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_GetCommunityBadgeProgress**)Z_Param__Result=USIK_GetCommunityBadgeProgress::GetCommunityBadgeProgress(Z_Param_Key,Z_Param_Out_SteamId,Z_Param_Out_BadgeId);
	P_NATIVE_END;
}
// ********** End Class USIK_GetCommunityBadgeProgress Function GetCommunityBadgeProgress **********

// ********** Begin Class USIK_GetCommunityBadgeProgress *******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_GetCommunityBadgeProgress;
UClass* USIK_GetCommunityBadgeProgress::GetPrivateStaticClass()
{
	using TClass = USIK_GetCommunityBadgeProgress;
	if (!Z_Registration_Info_UClass_USIK_GetCommunityBadgeProgress.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_GetCommunityBadgeProgress"),
			Z_Registration_Info_UClass_USIK_GetCommunityBadgeProgress.InnerSingleton,
			StaticRegisterNativesUSIK_GetCommunityBadgeProgress,
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
	return Z_Registration_Info_UClass_USIK_GetCommunityBadgeProgress.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_GetCommunityBadgeProgress_NoRegister()
{
	return USIK_GetCommunityBadgeProgress::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_GetCommunityBadgeProgress_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/Player/SIK_GetCommunityBadgeProgress.h" },
		{ "ModuleRelativePath", "Functions/Player/SIK_GetCommunityBadgeProgress.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_GetCommunityBadgeProgress constinit property declarations ***********
// ********** End Class USIK_GetCommunityBadgeProgress constinit property declarations *************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetCommunityBadgeProgress"), .Pointer = &USIK_GetCommunityBadgeProgress::execGetCommunityBadgeProgress },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_GetCommunityBadgeProgress_GetCommunityBadgeProgress, "GetCommunityBadgeProgress" }, // 1275034004
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_GetCommunityBadgeProgress>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_GetCommunityBadgeProgress_Statics
UObject* (*const Z_Construct_UClass_USIK_GetCommunityBadgeProgress_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetCommunityBadgeProgress_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_GetCommunityBadgeProgress_Statics::ClassParams = {
	&USIK_GetCommunityBadgeProgress::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetCommunityBadgeProgress_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_GetCommunityBadgeProgress_Statics::Class_MetaDataParams)
};
void USIK_GetCommunityBadgeProgress::StaticRegisterNativesUSIK_GetCommunityBadgeProgress()
{
	UClass* Class = USIK_GetCommunityBadgeProgress::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_GetCommunityBadgeProgress_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_GetCommunityBadgeProgress()
{
	if (!Z_Registration_Info_UClass_USIK_GetCommunityBadgeProgress.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_GetCommunityBadgeProgress.OuterSingleton, Z_Construct_UClass_USIK_GetCommunityBadgeProgress_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_GetCommunityBadgeProgress.OuterSingleton;
}
USIK_GetCommunityBadgeProgress::USIK_GetCommunityBadgeProgress(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_GetCommunityBadgeProgress);
USIK_GetCommunityBadgeProgress::~USIK_GetCommunityBadgeProgress() {}
// ********** End Class USIK_GetCommunityBadgeProgress *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Player_SIK_GetCommunityBadgeProgress_h__Script_SteamWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_GetCommunityBadgeProgress, USIK_GetCommunityBadgeProgress::StaticClass, TEXT("USIK_GetCommunityBadgeProgress"), &Z_Registration_Info_UClass_USIK_GetCommunityBadgeProgress, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_GetCommunityBadgeProgress), 9335247U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Player_SIK_GetCommunityBadgeProgress_h__Script_SteamWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Player_SIK_GetCommunityBadgeProgress_h__Script_SteamWeb_2225954346{
	TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Player_SIK_GetCommunityBadgeProgress_h__Script_SteamWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Player_SIK_GetCommunityBadgeProgress_h__Script_SteamWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
