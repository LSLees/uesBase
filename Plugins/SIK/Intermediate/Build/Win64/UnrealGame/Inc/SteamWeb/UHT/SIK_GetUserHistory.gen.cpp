// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/GameInventory/SIK_GetUserHistory.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_GetUserHistory() {}

// ********** Begin Cross Module References ********************************************************
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetUserHistory();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetUserHistory_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USIK_GetUserHistory Function GetUserHistory ******************************
struct Z_Construct_UFunction_USIK_GetUserHistory_GetUserHistory_Statics
{
	struct SIK_GetUserHistory_eventGetUserHistory_Parms
	{
		FString Key;
		int32 AppId;
		int64 SteamId;
		int64 ContextId;
		int32 StartTime;
		int32 EndTime;
		USIK_GetUserHistory* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|GameInventory" },
		{ "ModuleRelativePath", "Functions/GameInventory/SIK_GetUserHistory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContextId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetUserHistory constinit property declarations ************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_ContextId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartTime;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EndTime;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetUserHistory constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetUserHistory Property Definitions ***********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_GetUserHistory_GetUserHistory_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetUserHistory_eventGetUserHistory_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_GetUserHistory_GetUserHistory_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetUserHistory_eventGetUserHistory_Parms, AppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppId_MetaData), NewProp_AppId_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_GetUserHistory_GetUserHistory_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetUserHistory_eventGetUserHistory_Parms, SteamId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamId_MetaData), NewProp_SteamId_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_GetUserHistory_GetUserHistory_Statics::NewProp_ContextId = { "ContextId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetUserHistory_eventGetUserHistory_Parms, ContextId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContextId_MetaData), NewProp_ContextId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_GetUserHistory_GetUserHistory_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetUserHistory_eventGetUserHistory_Parms, StartTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartTime_MetaData), NewProp_StartTime_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_GetUserHistory_GetUserHistory_Statics::NewProp_EndTime = { "EndTime", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetUserHistory_eventGetUserHistory_Parms, EndTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndTime_MetaData), NewProp_EndTime_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_GetUserHistory_GetUserHistory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetUserHistory_eventGetUserHistory_Parms, ReturnValue), Z_Construct_UClass_USIK_GetUserHistory_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GetUserHistory_GetUserHistory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetUserHistory_GetUserHistory_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetUserHistory_GetUserHistory_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetUserHistory_GetUserHistory_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetUserHistory_GetUserHistory_Statics::NewProp_ContextId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetUserHistory_GetUserHistory_Statics::NewProp_StartTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetUserHistory_GetUserHistory_Statics::NewProp_EndTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetUserHistory_GetUserHistory_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetUserHistory_GetUserHistory_Statics::PropPointers) < 2048);
// ********** End Function GetUserHistory Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GetUserHistory_GetUserHistory_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_GetUserHistory, nullptr, "GetUserHistory", 	Z_Construct_UFunction_USIK_GetUserHistory_GetUserHistory_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetUserHistory_GetUserHistory_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_GetUserHistory_GetUserHistory_Statics::SIK_GetUserHistory_eventGetUserHistory_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetUserHistory_GetUserHistory_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GetUserHistory_GetUserHistory_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_GetUserHistory_GetUserHistory_Statics::SIK_GetUserHistory_eventGetUserHistory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GetUserHistory_GetUserHistory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GetUserHistory_GetUserHistory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GetUserHistory::execGetUserHistory)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppId);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_SteamId);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_ContextId);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_StartTime);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_EndTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_GetUserHistory**)Z_Param__Result=USIK_GetUserHistory::GetUserHistory(Z_Param_Key,Z_Param_Out_AppId,Z_Param_Out_SteamId,Z_Param_Out_ContextId,Z_Param_Out_StartTime,Z_Param_Out_EndTime);
	P_NATIVE_END;
}
// ********** End Class USIK_GetUserHistory Function GetUserHistory ********************************

// ********** Begin Class USIK_GetUserHistory ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_GetUserHistory;
UClass* USIK_GetUserHistory::GetPrivateStaticClass()
{
	using TClass = USIK_GetUserHistory;
	if (!Z_Registration_Info_UClass_USIK_GetUserHistory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_GetUserHistory"),
			Z_Registration_Info_UClass_USIK_GetUserHistory.InnerSingleton,
			StaticRegisterNativesUSIK_GetUserHistory,
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
	return Z_Registration_Info_UClass_USIK_GetUserHistory.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_GetUserHistory_NoRegister()
{
	return USIK_GetUserHistory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_GetUserHistory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/GameInventory/SIK_GetUserHistory.h" },
		{ "ModuleRelativePath", "Functions/GameInventory/SIK_GetUserHistory.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_GetUserHistory constinit property declarations **********************
// ********** End Class USIK_GetUserHistory constinit property declarations ************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetUserHistory"), .Pointer = &USIK_GetUserHistory::execGetUserHistory },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_GetUserHistory_GetUserHistory, "GetUserHistory" }, // 1895893116
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_GetUserHistory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_GetUserHistory_Statics
UObject* (*const Z_Construct_UClass_USIK_GetUserHistory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetUserHistory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_GetUserHistory_Statics::ClassParams = {
	&USIK_GetUserHistory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetUserHistory_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_GetUserHistory_Statics::Class_MetaDataParams)
};
void USIK_GetUserHistory::StaticRegisterNativesUSIK_GetUserHistory()
{
	UClass* Class = USIK_GetUserHistory::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_GetUserHistory_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_GetUserHistory()
{
	if (!Z_Registration_Info_UClass_USIK_GetUserHistory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_GetUserHistory.OuterSingleton, Z_Construct_UClass_USIK_GetUserHistory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_GetUserHistory.OuterSingleton;
}
USIK_GetUserHistory::USIK_GetUserHistory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_GetUserHistory);
USIK_GetUserHistory::~USIK_GetUserHistory() {}
// ********** End Class USIK_GetUserHistory ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameInventory_SIK_GetUserHistory_h__Script_SteamWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_GetUserHistory, USIK_GetUserHistory::StaticClass, TEXT("USIK_GetUserHistory"), &Z_Registration_Info_UClass_USIK_GetUserHistory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_GetUserHistory), 1642515935U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameInventory_SIK_GetUserHistory_h__Script_SteamWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameInventory_SIK_GetUserHistory_h__Script_SteamWeb_1985341335{
	TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameInventory_SIK_GetUserHistory_h__Script_SteamWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameInventory_SIK_GetUserHistory_h__Script_SteamWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
