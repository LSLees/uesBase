// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/CheatReporting/SIK_ReportCheatData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_ReportCheatData() {}

// ********** Begin Cross Module References ********************************************************
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_ReportCheatData();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_ReportCheatData_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USIK_ReportCheatData Function ReportCheatData ****************************
struct Z_Construct_UFunction_USIK_ReportCheatData_ReportCheatData_Statics
{
	struct SIK_ReportCheatData_eventReportCheatData_Parms
	{
		FString Key;
		int64 SteamId;
		int32 AppId;
		FString PathAndFileName;
		FString WebCheatUrl;
		int64 TimeNow;
		int64 TimeStarted;
		int64 TimeStopped;
		FString CheatName;
		int32 GameProcessId;
		int32 CheatProcessId;
		int64 CheatParam1;
		int64 CheatParam2;
		USIK_ReportCheatData* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|Cheat Reporting" },
		{ "Comment", "//Reports cheat data. Only use on test account that is running the game but not in a multiplayer session.\n" },
		{ "ModuleRelativePath", "Functions/CheatReporting/SIK_ReportCheatData.h" },
		{ "ToolTip", "Reports cheat data. Only use on test account that is running the game but not in a multiplayer session." },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathAndFileName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WebCheatUrl_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeNow_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeStarted_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeStopped_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheatName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameProcessId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheatProcessId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheatParam1_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheatParam2_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ReportCheatData constinit property declarations ***********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PathAndFileName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_WebCheatUrl;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_TimeNow;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_TimeStarted;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_TimeStopped;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CheatName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GameProcessId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CheatProcessId;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_CheatParam1;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_CheatParam2;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ReportCheatData constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ReportCheatData Property Definitions **********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_ReportCheatData_ReportCheatData_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ReportCheatData_eventReportCheatData_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_ReportCheatData_ReportCheatData_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ReportCheatData_eventReportCheatData_Parms, SteamId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamId_MetaData), NewProp_SteamId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_ReportCheatData_ReportCheatData_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ReportCheatData_eventReportCheatData_Parms, AppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppId_MetaData), NewProp_AppId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_ReportCheatData_ReportCheatData_Statics::NewProp_PathAndFileName = { "PathAndFileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ReportCheatData_eventReportCheatData_Parms, PathAndFileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathAndFileName_MetaData), NewProp_PathAndFileName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_ReportCheatData_ReportCheatData_Statics::NewProp_WebCheatUrl = { "WebCheatUrl", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ReportCheatData_eventReportCheatData_Parms, WebCheatUrl), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WebCheatUrl_MetaData), NewProp_WebCheatUrl_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_ReportCheatData_ReportCheatData_Statics::NewProp_TimeNow = { "TimeNow", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ReportCheatData_eventReportCheatData_Parms, TimeNow), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeNow_MetaData), NewProp_TimeNow_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_ReportCheatData_ReportCheatData_Statics::NewProp_TimeStarted = { "TimeStarted", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ReportCheatData_eventReportCheatData_Parms, TimeStarted), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeStarted_MetaData), NewProp_TimeStarted_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_ReportCheatData_ReportCheatData_Statics::NewProp_TimeStopped = { "TimeStopped", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ReportCheatData_eventReportCheatData_Parms, TimeStopped), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeStopped_MetaData), NewProp_TimeStopped_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_ReportCheatData_ReportCheatData_Statics::NewProp_CheatName = { "CheatName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ReportCheatData_eventReportCheatData_Parms, CheatName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheatName_MetaData), NewProp_CheatName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_ReportCheatData_ReportCheatData_Statics::NewProp_GameProcessId = { "GameProcessId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ReportCheatData_eventReportCheatData_Parms, GameProcessId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameProcessId_MetaData), NewProp_GameProcessId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_ReportCheatData_ReportCheatData_Statics::NewProp_CheatProcessId = { "CheatProcessId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ReportCheatData_eventReportCheatData_Parms, CheatProcessId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheatProcessId_MetaData), NewProp_CheatProcessId_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_ReportCheatData_ReportCheatData_Statics::NewProp_CheatParam1 = { "CheatParam1", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ReportCheatData_eventReportCheatData_Parms, CheatParam1), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheatParam1_MetaData), NewProp_CheatParam1_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_ReportCheatData_ReportCheatData_Statics::NewProp_CheatParam2 = { "CheatParam2", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ReportCheatData_eventReportCheatData_Parms, CheatParam2), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheatParam2_MetaData), NewProp_CheatParam2_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_ReportCheatData_ReportCheatData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ReportCheatData_eventReportCheatData_Parms, ReturnValue), Z_Construct_UClass_USIK_ReportCheatData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_ReportCheatData_ReportCheatData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ReportCheatData_ReportCheatData_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ReportCheatData_ReportCheatData_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ReportCheatData_ReportCheatData_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ReportCheatData_ReportCheatData_Statics::NewProp_PathAndFileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ReportCheatData_ReportCheatData_Statics::NewProp_WebCheatUrl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ReportCheatData_ReportCheatData_Statics::NewProp_TimeNow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ReportCheatData_ReportCheatData_Statics::NewProp_TimeStarted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ReportCheatData_ReportCheatData_Statics::NewProp_TimeStopped,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ReportCheatData_ReportCheatData_Statics::NewProp_CheatName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ReportCheatData_ReportCheatData_Statics::NewProp_GameProcessId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ReportCheatData_ReportCheatData_Statics::NewProp_CheatProcessId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ReportCheatData_ReportCheatData_Statics::NewProp_CheatParam1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ReportCheatData_ReportCheatData_Statics::NewProp_CheatParam2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ReportCheatData_ReportCheatData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_ReportCheatData_ReportCheatData_Statics::PropPointers) < 2048);
// ********** End Function ReportCheatData Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_ReportCheatData_ReportCheatData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_ReportCheatData, nullptr, "ReportCheatData", 	Z_Construct_UFunction_USIK_ReportCheatData_ReportCheatData_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_ReportCheatData_ReportCheatData_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_ReportCheatData_ReportCheatData_Statics::SIK_ReportCheatData_eventReportCheatData_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_ReportCheatData_ReportCheatData_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_ReportCheatData_ReportCheatData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_ReportCheatData_ReportCheatData_Statics::SIK_ReportCheatData_eventReportCheatData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_ReportCheatData_ReportCheatData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_ReportCheatData_ReportCheatData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_ReportCheatData::execReportCheatData)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_SteamId);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_PathAndFileName);
	P_GET_PROPERTY(FStrProperty,Z_Param_WebCheatUrl);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_TimeNow);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_TimeStarted);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_TimeStopped);
	P_GET_PROPERTY(FStrProperty,Z_Param_CheatName);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_GameProcessId);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_CheatProcessId);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_CheatParam1);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_CheatParam2);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_ReportCheatData**)Z_Param__Result=USIK_ReportCheatData::ReportCheatData(Z_Param_Key,Z_Param_Out_SteamId,Z_Param_Out_AppId,Z_Param_PathAndFileName,Z_Param_WebCheatUrl,Z_Param_Out_TimeNow,Z_Param_Out_TimeStarted,Z_Param_Out_TimeStopped,Z_Param_CheatName,Z_Param_Out_GameProcessId,Z_Param_Out_CheatProcessId,Z_Param_Out_CheatParam1,Z_Param_Out_CheatParam2);
	P_NATIVE_END;
}
// ********** End Class USIK_ReportCheatData Function ReportCheatData ******************************

// ********** Begin Class USIK_ReportCheatData *****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_ReportCheatData;
UClass* USIK_ReportCheatData::GetPrivateStaticClass()
{
	using TClass = USIK_ReportCheatData;
	if (!Z_Registration_Info_UClass_USIK_ReportCheatData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_ReportCheatData"),
			Z_Registration_Info_UClass_USIK_ReportCheatData.InnerSingleton,
			StaticRegisterNativesUSIK_ReportCheatData,
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
	return Z_Registration_Info_UClass_USIK_ReportCheatData.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_ReportCheatData_NoRegister()
{
	return USIK_ReportCheatData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_ReportCheatData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/CheatReporting/SIK_ReportCheatData.h" },
		{ "ModuleRelativePath", "Functions/CheatReporting/SIK_ReportCheatData.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_ReportCheatData constinit property declarations *********************
// ********** End Class USIK_ReportCheatData constinit property declarations ***********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ReportCheatData"), .Pointer = &USIK_ReportCheatData::execReportCheatData },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_ReportCheatData_ReportCheatData, "ReportCheatData" }, // 3398803679
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_ReportCheatData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_ReportCheatData_Statics
UObject* (*const Z_Construct_UClass_USIK_ReportCheatData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_ReportCheatData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_ReportCheatData_Statics::ClassParams = {
	&USIK_ReportCheatData::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_ReportCheatData_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_ReportCheatData_Statics::Class_MetaDataParams)
};
void USIK_ReportCheatData::StaticRegisterNativesUSIK_ReportCheatData()
{
	UClass* Class = USIK_ReportCheatData::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_ReportCheatData_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_ReportCheatData()
{
	if (!Z_Registration_Info_UClass_USIK_ReportCheatData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_ReportCheatData.OuterSingleton, Z_Construct_UClass_USIK_ReportCheatData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_ReportCheatData.OuterSingleton;
}
USIK_ReportCheatData::USIK_ReportCheatData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_ReportCheatData);
USIK_ReportCheatData::~USIK_ReportCheatData() {}
// ********** End Class USIK_ReportCheatData *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_CheatReporting_SIK_ReportCheatData_h__Script_SteamWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_ReportCheatData, USIK_ReportCheatData::StaticClass, TEXT("USIK_ReportCheatData"), &Z_Registration_Info_UClass_USIK_ReportCheatData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_ReportCheatData), 455699871U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_CheatReporting_SIK_ReportCheatData_h__Script_SteamWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_CheatReporting_SIK_ReportCheatData_h__Script_SteamWeb_3125045558{
	TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_CheatReporting_SIK_ReportCheatData_h__Script_SteamWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_CheatReporting_SIK_ReportCheatData_h__Script_SteamWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
