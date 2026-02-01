// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/Leaderboards/SIK_GetLeaderboardEntries.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_GetLeaderboardEntries() {}

// ********** Begin Cross Module References ********************************************************
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetLeaderboardEntries();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetLeaderboardEntries_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USIK_GetLeaderboardEntries Function GetLeaderboardEntries ****************
struct Z_Construct_UFunction_USIK_GetLeaderboardEntries_GetLeaderboardEntries_Statics
{
	struct SIK_GetLeaderboardEntries_eventGetLeaderboardEntries_Parms
	{
		FString Key;
		int32 AppId;
		int32 RangeStart;
		int32 RangeEnd;
		int32 LeaderboardId;
		FString DataRequest;
		int64 SteamId;
		USIK_GetLeaderboardEntries* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|Leaderboards" },
		{ "CPP_Default_SteamId", "-1" },
		{ "ModuleRelativePath", "Functions/Leaderboards/SIK_GetLeaderboardEntries.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RangeStart_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RangeEnd_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeaderboardId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataRequest_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetLeaderboardEntries constinit property declarations *****************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RangeStart;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RangeEnd;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LeaderboardId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DataRequest;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetLeaderboardEntries constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetLeaderboardEntries Property Definitions ****************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_GetLeaderboardEntries_GetLeaderboardEntries_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetLeaderboardEntries_eventGetLeaderboardEntries_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_GetLeaderboardEntries_GetLeaderboardEntries_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetLeaderboardEntries_eventGetLeaderboardEntries_Parms, AppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppId_MetaData), NewProp_AppId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_GetLeaderboardEntries_GetLeaderboardEntries_Statics::NewProp_RangeStart = { "RangeStart", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetLeaderboardEntries_eventGetLeaderboardEntries_Parms, RangeStart), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RangeStart_MetaData), NewProp_RangeStart_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_GetLeaderboardEntries_GetLeaderboardEntries_Statics::NewProp_RangeEnd = { "RangeEnd", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetLeaderboardEntries_eventGetLeaderboardEntries_Parms, RangeEnd), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RangeEnd_MetaData), NewProp_RangeEnd_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_GetLeaderboardEntries_GetLeaderboardEntries_Statics::NewProp_LeaderboardId = { "LeaderboardId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetLeaderboardEntries_eventGetLeaderboardEntries_Parms, LeaderboardId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeaderboardId_MetaData), NewProp_LeaderboardId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_GetLeaderboardEntries_GetLeaderboardEntries_Statics::NewProp_DataRequest = { "DataRequest", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetLeaderboardEntries_eventGetLeaderboardEntries_Parms, DataRequest), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataRequest_MetaData), NewProp_DataRequest_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_GetLeaderboardEntries_GetLeaderboardEntries_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetLeaderboardEntries_eventGetLeaderboardEntries_Parms, SteamId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamId_MetaData), NewProp_SteamId_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_GetLeaderboardEntries_GetLeaderboardEntries_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetLeaderboardEntries_eventGetLeaderboardEntries_Parms, ReturnValue), Z_Construct_UClass_USIK_GetLeaderboardEntries_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GetLeaderboardEntries_GetLeaderboardEntries_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetLeaderboardEntries_GetLeaderboardEntries_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetLeaderboardEntries_GetLeaderboardEntries_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetLeaderboardEntries_GetLeaderboardEntries_Statics::NewProp_RangeStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetLeaderboardEntries_GetLeaderboardEntries_Statics::NewProp_RangeEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetLeaderboardEntries_GetLeaderboardEntries_Statics::NewProp_LeaderboardId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetLeaderboardEntries_GetLeaderboardEntries_Statics::NewProp_DataRequest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetLeaderboardEntries_GetLeaderboardEntries_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetLeaderboardEntries_GetLeaderboardEntries_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetLeaderboardEntries_GetLeaderboardEntries_Statics::PropPointers) < 2048);
// ********** End Function GetLeaderboardEntries Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GetLeaderboardEntries_GetLeaderboardEntries_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_GetLeaderboardEntries, nullptr, "GetLeaderboardEntries", 	Z_Construct_UFunction_USIK_GetLeaderboardEntries_GetLeaderboardEntries_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetLeaderboardEntries_GetLeaderboardEntries_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_GetLeaderboardEntries_GetLeaderboardEntries_Statics::SIK_GetLeaderboardEntries_eventGetLeaderboardEntries_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetLeaderboardEntries_GetLeaderboardEntries_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GetLeaderboardEntries_GetLeaderboardEntries_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_GetLeaderboardEntries_GetLeaderboardEntries_Statics::SIK_GetLeaderboardEntries_eventGetLeaderboardEntries_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GetLeaderboardEntries_GetLeaderboardEntries()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GetLeaderboardEntries_GetLeaderboardEntries_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GetLeaderboardEntries::execGetLeaderboardEntries)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppId);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_RangeStart);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_RangeEnd);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_LeaderboardId);
	P_GET_PROPERTY(FStrProperty,Z_Param_DataRequest);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_SteamId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_GetLeaderboardEntries**)Z_Param__Result=USIK_GetLeaderboardEntries::GetLeaderboardEntries(Z_Param_Key,Z_Param_Out_AppId,Z_Param_Out_RangeStart,Z_Param_Out_RangeEnd,Z_Param_Out_LeaderboardId,Z_Param_DataRequest,Z_Param_Out_SteamId);
	P_NATIVE_END;
}
// ********** End Class USIK_GetLeaderboardEntries Function GetLeaderboardEntries ******************

// ********** Begin Class USIK_GetLeaderboardEntries ***********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_GetLeaderboardEntries;
UClass* USIK_GetLeaderboardEntries::GetPrivateStaticClass()
{
	using TClass = USIK_GetLeaderboardEntries;
	if (!Z_Registration_Info_UClass_USIK_GetLeaderboardEntries.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_GetLeaderboardEntries"),
			Z_Registration_Info_UClass_USIK_GetLeaderboardEntries.InnerSingleton,
			StaticRegisterNativesUSIK_GetLeaderboardEntries,
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
	return Z_Registration_Info_UClass_USIK_GetLeaderboardEntries.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_GetLeaderboardEntries_NoRegister()
{
	return USIK_GetLeaderboardEntries::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_GetLeaderboardEntries_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/Leaderboards/SIK_GetLeaderboardEntries.h" },
		{ "ModuleRelativePath", "Functions/Leaderboards/SIK_GetLeaderboardEntries.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_GetLeaderboardEntries constinit property declarations ***************
// ********** End Class USIK_GetLeaderboardEntries constinit property declarations *****************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetLeaderboardEntries"), .Pointer = &USIK_GetLeaderboardEntries::execGetLeaderboardEntries },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_GetLeaderboardEntries_GetLeaderboardEntries, "GetLeaderboardEntries" }, // 783165593
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_GetLeaderboardEntries>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_GetLeaderboardEntries_Statics
UObject* (*const Z_Construct_UClass_USIK_GetLeaderboardEntries_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetLeaderboardEntries_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_GetLeaderboardEntries_Statics::ClassParams = {
	&USIK_GetLeaderboardEntries::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetLeaderboardEntries_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_GetLeaderboardEntries_Statics::Class_MetaDataParams)
};
void USIK_GetLeaderboardEntries::StaticRegisterNativesUSIK_GetLeaderboardEntries()
{
	UClass* Class = USIK_GetLeaderboardEntries::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_GetLeaderboardEntries_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_GetLeaderboardEntries()
{
	if (!Z_Registration_Info_UClass_USIK_GetLeaderboardEntries.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_GetLeaderboardEntries.OuterSingleton, Z_Construct_UClass_USIK_GetLeaderboardEntries_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_GetLeaderboardEntries.OuterSingleton;
}
USIK_GetLeaderboardEntries::USIK_GetLeaderboardEntries(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_GetLeaderboardEntries);
USIK_GetLeaderboardEntries::~USIK_GetLeaderboardEntries() {}
// ********** End Class USIK_GetLeaderboardEntries *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Leaderboards_SIK_GetLeaderboardEntries_h__Script_SteamWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_GetLeaderboardEntries, USIK_GetLeaderboardEntries::StaticClass, TEXT("USIK_GetLeaderboardEntries"), &Z_Registration_Info_UClass_USIK_GetLeaderboardEntries, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_GetLeaderboardEntries), 1810994657U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Leaderboards_SIK_GetLeaderboardEntries_h__Script_SteamWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Leaderboards_SIK_GetLeaderboardEntries_h__Script_SteamWeb_74997969{
	TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Leaderboards_SIK_GetLeaderboardEntries_h__Script_SteamWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Leaderboards_SIK_GetLeaderboardEntries_h__Script_SteamWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
