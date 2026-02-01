// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/Econ/SIK_GetTradeHistory.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_GetTradeHistory() {}

// ********** Begin Cross Module References ********************************************************
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetTradeHistory();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetTradeHistory_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USIK_GetTradeHistory Function GetTradeHistory ****************************
struct Z_Construct_UFunction_USIK_GetTradeHistory_GetTradeHistory_Statics
{
	struct SIK_GetTradeHistory_eventGetTradeHistory_Parms
	{
		FString Key;
		int32 MaxTrades;
		int32 StartAfterTime;
		int64 StartAfterTradeId;
		bool bNavigatingBack;
		bool bGetDescriptions;
		FString Language;
		bool bIncludeFailed;
		bool bIncludeTotal;
		USIK_GetTradeHistory* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|Econ" },
		{ "Comment", "//Gets a history of trades\n" },
		{ "ModuleRelativePath", "Functions/Econ/SIK_GetTradeHistory.h" },
		{ "ToolTip", "Gets a history of trades" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxTrades_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartAfterTime_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartAfterTradeId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Language_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetTradeHistory constinit property declarations ***********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxTrades;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartAfterTime;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_StartAfterTradeId;
	static void NewProp_bNavigatingBack_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNavigatingBack;
	static void NewProp_bGetDescriptions_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGetDescriptions;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Language;
	static void NewProp_bIncludeFailed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeFailed;
	static void NewProp_bIncludeTotal_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeTotal;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetTradeHistory constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetTradeHistory Property Definitions **********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_GetTradeHistory_GetTradeHistory_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetTradeHistory_eventGetTradeHistory_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_GetTradeHistory_GetTradeHistory_Statics::NewProp_MaxTrades = { "MaxTrades", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetTradeHistory_eventGetTradeHistory_Parms, MaxTrades), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxTrades_MetaData), NewProp_MaxTrades_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_GetTradeHistory_GetTradeHistory_Statics::NewProp_StartAfterTime = { "StartAfterTime", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetTradeHistory_eventGetTradeHistory_Parms, StartAfterTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartAfterTime_MetaData), NewProp_StartAfterTime_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_GetTradeHistory_GetTradeHistory_Statics::NewProp_StartAfterTradeId = { "StartAfterTradeId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetTradeHistory_eventGetTradeHistory_Parms, StartAfterTradeId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartAfterTradeId_MetaData), NewProp_StartAfterTradeId_MetaData) };
void Z_Construct_UFunction_USIK_GetTradeHistory_GetTradeHistory_Statics::NewProp_bNavigatingBack_SetBit(void* Obj)
{
	((SIK_GetTradeHistory_eventGetTradeHistory_Parms*)Obj)->bNavigatingBack = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_GetTradeHistory_GetTradeHistory_Statics::NewProp_bNavigatingBack = { "bNavigatingBack", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_GetTradeHistory_eventGetTradeHistory_Parms), &Z_Construct_UFunction_USIK_GetTradeHistory_GetTradeHistory_Statics::NewProp_bNavigatingBack_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_GetTradeHistory_GetTradeHistory_Statics::NewProp_bGetDescriptions_SetBit(void* Obj)
{
	((SIK_GetTradeHistory_eventGetTradeHistory_Parms*)Obj)->bGetDescriptions = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_GetTradeHistory_GetTradeHistory_Statics::NewProp_bGetDescriptions = { "bGetDescriptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_GetTradeHistory_eventGetTradeHistory_Parms), &Z_Construct_UFunction_USIK_GetTradeHistory_GetTradeHistory_Statics::NewProp_bGetDescriptions_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_GetTradeHistory_GetTradeHistory_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetTradeHistory_eventGetTradeHistory_Parms, Language), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Language_MetaData), NewProp_Language_MetaData) };
void Z_Construct_UFunction_USIK_GetTradeHistory_GetTradeHistory_Statics::NewProp_bIncludeFailed_SetBit(void* Obj)
{
	((SIK_GetTradeHistory_eventGetTradeHistory_Parms*)Obj)->bIncludeFailed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_GetTradeHistory_GetTradeHistory_Statics::NewProp_bIncludeFailed = { "bIncludeFailed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_GetTradeHistory_eventGetTradeHistory_Parms), &Z_Construct_UFunction_USIK_GetTradeHistory_GetTradeHistory_Statics::NewProp_bIncludeFailed_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_GetTradeHistory_GetTradeHistory_Statics::NewProp_bIncludeTotal_SetBit(void* Obj)
{
	((SIK_GetTradeHistory_eventGetTradeHistory_Parms*)Obj)->bIncludeTotal = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_GetTradeHistory_GetTradeHistory_Statics::NewProp_bIncludeTotal = { "bIncludeTotal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_GetTradeHistory_eventGetTradeHistory_Parms), &Z_Construct_UFunction_USIK_GetTradeHistory_GetTradeHistory_Statics::NewProp_bIncludeTotal_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_GetTradeHistory_GetTradeHistory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetTradeHistory_eventGetTradeHistory_Parms, ReturnValue), Z_Construct_UClass_USIK_GetTradeHistory_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GetTradeHistory_GetTradeHistory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetTradeHistory_GetTradeHistory_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetTradeHistory_GetTradeHistory_Statics::NewProp_MaxTrades,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetTradeHistory_GetTradeHistory_Statics::NewProp_StartAfterTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetTradeHistory_GetTradeHistory_Statics::NewProp_StartAfterTradeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetTradeHistory_GetTradeHistory_Statics::NewProp_bNavigatingBack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetTradeHistory_GetTradeHistory_Statics::NewProp_bGetDescriptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetTradeHistory_GetTradeHistory_Statics::NewProp_Language,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetTradeHistory_GetTradeHistory_Statics::NewProp_bIncludeFailed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetTradeHistory_GetTradeHistory_Statics::NewProp_bIncludeTotal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetTradeHistory_GetTradeHistory_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetTradeHistory_GetTradeHistory_Statics::PropPointers) < 2048);
// ********** End Function GetTradeHistory Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GetTradeHistory_GetTradeHistory_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_GetTradeHistory, nullptr, "GetTradeHistory", 	Z_Construct_UFunction_USIK_GetTradeHistory_GetTradeHistory_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetTradeHistory_GetTradeHistory_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_GetTradeHistory_GetTradeHistory_Statics::SIK_GetTradeHistory_eventGetTradeHistory_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetTradeHistory_GetTradeHistory_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GetTradeHistory_GetTradeHistory_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_GetTradeHistory_GetTradeHistory_Statics::SIK_GetTradeHistory_eventGetTradeHistory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GetTradeHistory_GetTradeHistory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GetTradeHistory_GetTradeHistory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GetTradeHistory::execGetTradeHistory)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_MaxTrades);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_StartAfterTime);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_StartAfterTradeId);
	P_GET_UBOOL(Z_Param_bNavigatingBack);
	P_GET_UBOOL(Z_Param_bGetDescriptions);
	P_GET_PROPERTY(FStrProperty,Z_Param_Language);
	P_GET_UBOOL(Z_Param_bIncludeFailed);
	P_GET_UBOOL(Z_Param_bIncludeTotal);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_GetTradeHistory**)Z_Param__Result=USIK_GetTradeHistory::GetTradeHistory(Z_Param_Key,Z_Param_Out_MaxTrades,Z_Param_Out_StartAfterTime,Z_Param_Out_StartAfterTradeId,Z_Param_bNavigatingBack,Z_Param_bGetDescriptions,Z_Param_Language,Z_Param_bIncludeFailed,Z_Param_bIncludeTotal);
	P_NATIVE_END;
}
// ********** End Class USIK_GetTradeHistory Function GetTradeHistory ******************************

// ********** Begin Class USIK_GetTradeHistory *****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_GetTradeHistory;
UClass* USIK_GetTradeHistory::GetPrivateStaticClass()
{
	using TClass = USIK_GetTradeHistory;
	if (!Z_Registration_Info_UClass_USIK_GetTradeHistory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_GetTradeHistory"),
			Z_Registration_Info_UClass_USIK_GetTradeHistory.InnerSingleton,
			StaticRegisterNativesUSIK_GetTradeHistory,
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
	return Z_Registration_Info_UClass_USIK_GetTradeHistory.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_GetTradeHistory_NoRegister()
{
	return USIK_GetTradeHistory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_GetTradeHistory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/Econ/SIK_GetTradeHistory.h" },
		{ "ModuleRelativePath", "Functions/Econ/SIK_GetTradeHistory.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_GetTradeHistory constinit property declarations *********************
// ********** End Class USIK_GetTradeHistory constinit property declarations ***********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetTradeHistory"), .Pointer = &USIK_GetTradeHistory::execGetTradeHistory },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_GetTradeHistory_GetTradeHistory, "GetTradeHistory" }, // 1635838809
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_GetTradeHistory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_GetTradeHistory_Statics
UObject* (*const Z_Construct_UClass_USIK_GetTradeHistory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetTradeHistory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_GetTradeHistory_Statics::ClassParams = {
	&USIK_GetTradeHistory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetTradeHistory_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_GetTradeHistory_Statics::Class_MetaDataParams)
};
void USIK_GetTradeHistory::StaticRegisterNativesUSIK_GetTradeHistory()
{
	UClass* Class = USIK_GetTradeHistory::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_GetTradeHistory_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_GetTradeHistory()
{
	if (!Z_Registration_Info_UClass_USIK_GetTradeHistory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_GetTradeHistory.OuterSingleton, Z_Construct_UClass_USIK_GetTradeHistory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_GetTradeHistory.OuterSingleton;
}
USIK_GetTradeHistory::USIK_GetTradeHistory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_GetTradeHistory);
USIK_GetTradeHistory::~USIK_GetTradeHistory() {}
// ********** End Class USIK_GetTradeHistory *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Econ_SIK_GetTradeHistory_h__Script_SteamWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_GetTradeHistory, USIK_GetTradeHistory::StaticClass, TEXT("USIK_GetTradeHistory"), &Z_Registration_Info_UClass_USIK_GetTradeHistory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_GetTradeHistory), 1294832209U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Econ_SIK_GetTradeHistory_h__Script_SteamWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Econ_SIK_GetTradeHistory_h__Script_SteamWeb_3861916485{
	TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Econ_SIK_GetTradeHistory_h__Script_SteamWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Econ_SIK_GetTradeHistory_h__Script_SteamWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
