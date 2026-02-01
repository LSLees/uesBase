// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/CheatReporting/SIK_RequestPlayerGameBan.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_RequestPlayerGameBan() {}

// ********** Begin Cross Module References ********************************************************
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_RequestPlayerGameBan();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_RequestPlayerGameBan_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USIK_RequestPlayerGameBan Function RequestPlayerGameBan ******************
struct Z_Construct_UFunction_USIK_RequestPlayerGameBan_RequestPlayerGameBan_Statics
{
	struct SIK_RequestPlayerGameBan_eventRequestPlayerGameBan_Parms
	{
		FString Key;
		int64 SteamID;
		int32 AppID;
		int64 ReportId;
		FString CheatDescription;
		int32 Duration;
		bool bDelayBan;
		int32 Flags;
		USIK_RequestPlayerGameBan* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|Cheat Reporting" },
		{ "Comment", "//Requests a game ban on a specific player.\n" },
		{ "ModuleRelativePath", "Functions/CheatReporting/SIK_RequestPlayerGameBan.h" },
		{ "ToolTip", "Requests a game ban on a specific player." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppID_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReportId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheatDescription_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Flags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function RequestPlayerGameBan constinit property declarations ******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_SteamID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_ReportId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CheatDescription;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Duration;
	static void NewProp_bDelayBan_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDelayBan;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Flags;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RequestPlayerGameBan constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RequestPlayerGameBan Property Definitions *****************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_RequestPlayerGameBan_RequestPlayerGameBan_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RequestPlayerGameBan_eventRequestPlayerGameBan_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_RequestPlayerGameBan_RequestPlayerGameBan_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RequestPlayerGameBan_eventRequestPlayerGameBan_Parms, SteamID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamID_MetaData), NewProp_SteamID_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_RequestPlayerGameBan_RequestPlayerGameBan_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RequestPlayerGameBan_eventRequestPlayerGameBan_Parms, AppID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppID_MetaData), NewProp_AppID_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_RequestPlayerGameBan_RequestPlayerGameBan_Statics::NewProp_ReportId = { "ReportId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RequestPlayerGameBan_eventRequestPlayerGameBan_Parms, ReportId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReportId_MetaData), NewProp_ReportId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_RequestPlayerGameBan_RequestPlayerGameBan_Statics::NewProp_CheatDescription = { "CheatDescription", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RequestPlayerGameBan_eventRequestPlayerGameBan_Parms, CheatDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheatDescription_MetaData), NewProp_CheatDescription_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_RequestPlayerGameBan_RequestPlayerGameBan_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RequestPlayerGameBan_eventRequestPlayerGameBan_Parms, Duration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Duration_MetaData), NewProp_Duration_MetaData) };
void Z_Construct_UFunction_USIK_RequestPlayerGameBan_RequestPlayerGameBan_Statics::NewProp_bDelayBan_SetBit(void* Obj)
{
	((SIK_RequestPlayerGameBan_eventRequestPlayerGameBan_Parms*)Obj)->bDelayBan = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_RequestPlayerGameBan_RequestPlayerGameBan_Statics::NewProp_bDelayBan = { "bDelayBan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_RequestPlayerGameBan_eventRequestPlayerGameBan_Parms), &Z_Construct_UFunction_USIK_RequestPlayerGameBan_RequestPlayerGameBan_Statics::NewProp_bDelayBan_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_RequestPlayerGameBan_RequestPlayerGameBan_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RequestPlayerGameBan_eventRequestPlayerGameBan_Parms, Flags), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Flags_MetaData), NewProp_Flags_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_RequestPlayerGameBan_RequestPlayerGameBan_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RequestPlayerGameBan_eventRequestPlayerGameBan_Parms, ReturnValue), Z_Construct_UClass_USIK_RequestPlayerGameBan_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_RequestPlayerGameBan_RequestPlayerGameBan_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RequestPlayerGameBan_RequestPlayerGameBan_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RequestPlayerGameBan_RequestPlayerGameBan_Statics::NewProp_SteamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RequestPlayerGameBan_RequestPlayerGameBan_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RequestPlayerGameBan_RequestPlayerGameBan_Statics::NewProp_ReportId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RequestPlayerGameBan_RequestPlayerGameBan_Statics::NewProp_CheatDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RequestPlayerGameBan_RequestPlayerGameBan_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RequestPlayerGameBan_RequestPlayerGameBan_Statics::NewProp_bDelayBan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RequestPlayerGameBan_RequestPlayerGameBan_Statics::NewProp_Flags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RequestPlayerGameBan_RequestPlayerGameBan_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RequestPlayerGameBan_RequestPlayerGameBan_Statics::PropPointers) < 2048);
// ********** End Function RequestPlayerGameBan Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_RequestPlayerGameBan_RequestPlayerGameBan_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_RequestPlayerGameBan, nullptr, "RequestPlayerGameBan", 	Z_Construct_UFunction_USIK_RequestPlayerGameBan_RequestPlayerGameBan_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RequestPlayerGameBan_RequestPlayerGameBan_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_RequestPlayerGameBan_RequestPlayerGameBan_Statics::SIK_RequestPlayerGameBan_eventRequestPlayerGameBan_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RequestPlayerGameBan_RequestPlayerGameBan_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_RequestPlayerGameBan_RequestPlayerGameBan_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_RequestPlayerGameBan_RequestPlayerGameBan_Statics::SIK_RequestPlayerGameBan_eventRequestPlayerGameBan_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_RequestPlayerGameBan_RequestPlayerGameBan()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_RequestPlayerGameBan_RequestPlayerGameBan_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_RequestPlayerGameBan::execRequestPlayerGameBan)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_SteamID);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppID);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_ReportId);
	P_GET_PROPERTY(FStrProperty,Z_Param_CheatDescription);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Duration);
	P_GET_UBOOL(Z_Param_bDelayBan);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Flags);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_RequestPlayerGameBan**)Z_Param__Result=USIK_RequestPlayerGameBan::RequestPlayerGameBan(Z_Param_Key,Z_Param_Out_SteamID,Z_Param_Out_AppID,Z_Param_Out_ReportId,Z_Param_CheatDescription,Z_Param_Out_Duration,Z_Param_bDelayBan,Z_Param_Out_Flags);
	P_NATIVE_END;
}
// ********** End Class USIK_RequestPlayerGameBan Function RequestPlayerGameBan ********************

// ********** Begin Class USIK_RequestPlayerGameBan ************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_RequestPlayerGameBan;
UClass* USIK_RequestPlayerGameBan::GetPrivateStaticClass()
{
	using TClass = USIK_RequestPlayerGameBan;
	if (!Z_Registration_Info_UClass_USIK_RequestPlayerGameBan.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_RequestPlayerGameBan"),
			Z_Registration_Info_UClass_USIK_RequestPlayerGameBan.InnerSingleton,
			StaticRegisterNativesUSIK_RequestPlayerGameBan,
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
	return Z_Registration_Info_UClass_USIK_RequestPlayerGameBan.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_RequestPlayerGameBan_NoRegister()
{
	return USIK_RequestPlayerGameBan::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_RequestPlayerGameBan_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/CheatReporting/SIK_RequestPlayerGameBan.h" },
		{ "ModuleRelativePath", "Functions/CheatReporting/SIK_RequestPlayerGameBan.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_RequestPlayerGameBan constinit property declarations ****************
// ********** End Class USIK_RequestPlayerGameBan constinit property declarations ******************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("RequestPlayerGameBan"), .Pointer = &USIK_RequestPlayerGameBan::execRequestPlayerGameBan },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_RequestPlayerGameBan_RequestPlayerGameBan, "RequestPlayerGameBan" }, // 2079985669
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_RequestPlayerGameBan>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_RequestPlayerGameBan_Statics
UObject* (*const Z_Construct_UClass_USIK_RequestPlayerGameBan_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_RequestPlayerGameBan_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_RequestPlayerGameBan_Statics::ClassParams = {
	&USIK_RequestPlayerGameBan::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_RequestPlayerGameBan_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_RequestPlayerGameBan_Statics::Class_MetaDataParams)
};
void USIK_RequestPlayerGameBan::StaticRegisterNativesUSIK_RequestPlayerGameBan()
{
	UClass* Class = USIK_RequestPlayerGameBan::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_RequestPlayerGameBan_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_RequestPlayerGameBan()
{
	if (!Z_Registration_Info_UClass_USIK_RequestPlayerGameBan.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_RequestPlayerGameBan.OuterSingleton, Z_Construct_UClass_USIK_RequestPlayerGameBan_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_RequestPlayerGameBan.OuterSingleton;
}
USIK_RequestPlayerGameBan::USIK_RequestPlayerGameBan(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_RequestPlayerGameBan);
USIK_RequestPlayerGameBan::~USIK_RequestPlayerGameBan() {}
// ********** End Class USIK_RequestPlayerGameBan **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_CheatReporting_SIK_RequestPlayerGameBan_h__Script_SteamWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_RequestPlayerGameBan, USIK_RequestPlayerGameBan::StaticClass, TEXT("USIK_RequestPlayerGameBan"), &Z_Registration_Info_UClass_USIK_RequestPlayerGameBan, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_RequestPlayerGameBan), 785583929U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_CheatReporting_SIK_RequestPlayerGameBan_h__Script_SteamWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_CheatReporting_SIK_RequestPlayerGameBan_h__Script_SteamWeb_2156767215{
	TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_CheatReporting_SIK_RequestPlayerGameBan_h__Script_SteamWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_CheatReporting_SIK_RequestPlayerGameBan_h__Script_SteamWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
