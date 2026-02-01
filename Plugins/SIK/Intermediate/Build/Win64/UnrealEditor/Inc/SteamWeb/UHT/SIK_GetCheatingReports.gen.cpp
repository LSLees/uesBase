// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/CheatReporting/SIK_GetCheatingReports.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_GetCheatingReports() {}

// ********** Begin Cross Module References ********************************************************
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetCheatingReports();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetCheatingReports_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USIK_GetCheatingReports Function GetCheatingReports **********************
struct Z_Construct_UFunction_USIK_GetCheatingReports_GetCheatingReports_Statics
{
	struct SIK_GetCheatingReports_eventGetCheatingReports_Parms
	{
		FString Key;
		int32 AppId;
		int32 TimeEnd;
		int32 TimeBegin;
		int64 ReportIdMin;
		bool bIncludeReports;
		bool bIncludeBans;
		int64 SteamId;
		USIK_GetCheatingReports* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|Cheat Reporting" },
		{ "Comment", "//Get a list of cheating reports submitted for this app.\n" },
		{ "ModuleRelativePath", "Functions/CheatReporting/SIK_GetCheatingReports.h" },
		{ "ToolTip", "Get a list of cheating reports submitted for this app." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeEnd_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeBegin_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReportIdMin_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetCheatingReports constinit property declarations ********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TimeEnd;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TimeBegin;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_ReportIdMin;
	static void NewProp_bIncludeReports_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeReports;
	static void NewProp_bIncludeBans_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeBans;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCheatingReports constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCheatingReports Property Definitions *******************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_GetCheatingReports_GetCheatingReports_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetCheatingReports_eventGetCheatingReports_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_GetCheatingReports_GetCheatingReports_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetCheatingReports_eventGetCheatingReports_Parms, AppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppId_MetaData), NewProp_AppId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_GetCheatingReports_GetCheatingReports_Statics::NewProp_TimeEnd = { "TimeEnd", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetCheatingReports_eventGetCheatingReports_Parms, TimeEnd), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeEnd_MetaData), NewProp_TimeEnd_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_GetCheatingReports_GetCheatingReports_Statics::NewProp_TimeBegin = { "TimeBegin", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetCheatingReports_eventGetCheatingReports_Parms, TimeBegin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeBegin_MetaData), NewProp_TimeBegin_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_GetCheatingReports_GetCheatingReports_Statics::NewProp_ReportIdMin = { "ReportIdMin", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetCheatingReports_eventGetCheatingReports_Parms, ReportIdMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReportIdMin_MetaData), NewProp_ReportIdMin_MetaData) };
void Z_Construct_UFunction_USIK_GetCheatingReports_GetCheatingReports_Statics::NewProp_bIncludeReports_SetBit(void* Obj)
{
	((SIK_GetCheatingReports_eventGetCheatingReports_Parms*)Obj)->bIncludeReports = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_GetCheatingReports_GetCheatingReports_Statics::NewProp_bIncludeReports = { "bIncludeReports", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_GetCheatingReports_eventGetCheatingReports_Parms), &Z_Construct_UFunction_USIK_GetCheatingReports_GetCheatingReports_Statics::NewProp_bIncludeReports_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_GetCheatingReports_GetCheatingReports_Statics::NewProp_bIncludeBans_SetBit(void* Obj)
{
	((SIK_GetCheatingReports_eventGetCheatingReports_Parms*)Obj)->bIncludeBans = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_GetCheatingReports_GetCheatingReports_Statics::NewProp_bIncludeBans = { "bIncludeBans", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_GetCheatingReports_eventGetCheatingReports_Parms), &Z_Construct_UFunction_USIK_GetCheatingReports_GetCheatingReports_Statics::NewProp_bIncludeBans_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_GetCheatingReports_GetCheatingReports_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetCheatingReports_eventGetCheatingReports_Parms, SteamId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamId_MetaData), NewProp_SteamId_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_GetCheatingReports_GetCheatingReports_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetCheatingReports_eventGetCheatingReports_Parms, ReturnValue), Z_Construct_UClass_USIK_GetCheatingReports_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GetCheatingReports_GetCheatingReports_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetCheatingReports_GetCheatingReports_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetCheatingReports_GetCheatingReports_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetCheatingReports_GetCheatingReports_Statics::NewProp_TimeEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetCheatingReports_GetCheatingReports_Statics::NewProp_TimeBegin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetCheatingReports_GetCheatingReports_Statics::NewProp_ReportIdMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetCheatingReports_GetCheatingReports_Statics::NewProp_bIncludeReports,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetCheatingReports_GetCheatingReports_Statics::NewProp_bIncludeBans,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetCheatingReports_GetCheatingReports_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetCheatingReports_GetCheatingReports_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetCheatingReports_GetCheatingReports_Statics::PropPointers) < 2048);
// ********** End Function GetCheatingReports Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GetCheatingReports_GetCheatingReports_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_GetCheatingReports, nullptr, "GetCheatingReports", 	Z_Construct_UFunction_USIK_GetCheatingReports_GetCheatingReports_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetCheatingReports_GetCheatingReports_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_GetCheatingReports_GetCheatingReports_Statics::SIK_GetCheatingReports_eventGetCheatingReports_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetCheatingReports_GetCheatingReports_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GetCheatingReports_GetCheatingReports_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_GetCheatingReports_GetCheatingReports_Statics::SIK_GetCheatingReports_eventGetCheatingReports_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GetCheatingReports_GetCheatingReports()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GetCheatingReports_GetCheatingReports_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GetCheatingReports::execGetCheatingReports)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppId);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_TimeEnd);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_TimeBegin);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_ReportIdMin);
	P_GET_UBOOL(Z_Param_bIncludeReports);
	P_GET_UBOOL(Z_Param_bIncludeBans);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_SteamId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_GetCheatingReports**)Z_Param__Result=USIK_GetCheatingReports::GetCheatingReports(Z_Param_Key,Z_Param_Out_AppId,Z_Param_Out_TimeEnd,Z_Param_Out_TimeBegin,Z_Param_Out_ReportIdMin,Z_Param_bIncludeReports,Z_Param_bIncludeBans,Z_Param_Out_SteamId);
	P_NATIVE_END;
}
// ********** End Class USIK_GetCheatingReports Function GetCheatingReports ************************

// ********** Begin Class USIK_GetCheatingReports **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_GetCheatingReports;
UClass* USIK_GetCheatingReports::GetPrivateStaticClass()
{
	using TClass = USIK_GetCheatingReports;
	if (!Z_Registration_Info_UClass_USIK_GetCheatingReports.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_GetCheatingReports"),
			Z_Registration_Info_UClass_USIK_GetCheatingReports.InnerSingleton,
			StaticRegisterNativesUSIK_GetCheatingReports,
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
	return Z_Registration_Info_UClass_USIK_GetCheatingReports.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_GetCheatingReports_NoRegister()
{
	return USIK_GetCheatingReports::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_GetCheatingReports_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/CheatReporting/SIK_GetCheatingReports.h" },
		{ "ModuleRelativePath", "Functions/CheatReporting/SIK_GetCheatingReports.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_GetCheatingReports constinit property declarations ******************
// ********** End Class USIK_GetCheatingReports constinit property declarations ********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetCheatingReports"), .Pointer = &USIK_GetCheatingReports::execGetCheatingReports },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_GetCheatingReports_GetCheatingReports, "GetCheatingReports" }, // 346571692
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_GetCheatingReports>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_GetCheatingReports_Statics
UObject* (*const Z_Construct_UClass_USIK_GetCheatingReports_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetCheatingReports_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_GetCheatingReports_Statics::ClassParams = {
	&USIK_GetCheatingReports::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetCheatingReports_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_GetCheatingReports_Statics::Class_MetaDataParams)
};
void USIK_GetCheatingReports::StaticRegisterNativesUSIK_GetCheatingReports()
{
	UClass* Class = USIK_GetCheatingReports::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_GetCheatingReports_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_GetCheatingReports()
{
	if (!Z_Registration_Info_UClass_USIK_GetCheatingReports.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_GetCheatingReports.OuterSingleton, Z_Construct_UClass_USIK_GetCheatingReports_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_GetCheatingReports.OuterSingleton;
}
USIK_GetCheatingReports::USIK_GetCheatingReports(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_GetCheatingReports);
USIK_GetCheatingReports::~USIK_GetCheatingReports() {}
// ********** End Class USIK_GetCheatingReports ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_CheatReporting_SIK_GetCheatingReports_h__Script_SteamWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_GetCheatingReports, USIK_GetCheatingReports::StaticClass, TEXT("USIK_GetCheatingReports"), &Z_Registration_Info_UClass_USIK_GetCheatingReports, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_GetCheatingReports), 423135661U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_CheatReporting_SIK_GetCheatingReports_h__Script_SteamWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_CheatReporting_SIK_GetCheatingReports_h__Script_SteamWeb_2165107389{
	TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_CheatReporting_SIK_GetCheatingReports_h__Script_SteamWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_CheatReporting_SIK_GetCheatingReports_h__Script_SteamWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
