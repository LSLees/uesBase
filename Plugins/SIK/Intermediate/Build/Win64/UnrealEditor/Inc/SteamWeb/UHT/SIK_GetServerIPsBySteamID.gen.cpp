// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/GameServers/SIK_GetServerIPsBySteamID.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_GetServerIPsBySteamID() {}

// ********** Begin Cross Module References ********************************************************
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetServerIPsBySteamID();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetServerIPsBySteamID_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USIK_GetServerIPsBySteamID Function GetServerIPsBySteamID ****************
struct Z_Construct_UFunction_USIK_GetServerIPsBySteamID_GetServerIPsBySteamID_Statics
{
	struct SIK_GetServerIPsBySteamID_eventGetServerIPsBySteamID_Parms
	{
		FString Key;
		TArray<int64> ServerSteamIds;
		USIK_GetServerIPsBySteamID* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|GameServers" },
		{ "Comment", "//Gets a list of server IP addresses given a list of SteamIDs\n" },
		{ "ModuleRelativePath", "Functions/GameServers/SIK_GetServerIPsBySteamID.h" },
		{ "ToolTip", "Gets a list of server IP addresses given a list of SteamIDs" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerSteamIds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetServerIPsBySteamID constinit property declarations *****************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_ServerSteamIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ServerSteamIds;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetServerIPsBySteamID constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetServerIPsBySteamID Property Definitions ****************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_GetServerIPsBySteamID_GetServerIPsBySteamID_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetServerIPsBySteamID_eventGetServerIPsBySteamID_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_GetServerIPsBySteamID_GetServerIPsBySteamID_Statics::NewProp_ServerSteamIds_Inner = { "ServerSteamIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_GetServerIPsBySteamID_GetServerIPsBySteamID_Statics::NewProp_ServerSteamIds = { "ServerSteamIds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetServerIPsBySteamID_eventGetServerIPsBySteamID_Parms, ServerSteamIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerSteamIds_MetaData), NewProp_ServerSteamIds_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_GetServerIPsBySteamID_GetServerIPsBySteamID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetServerIPsBySteamID_eventGetServerIPsBySteamID_Parms, ReturnValue), Z_Construct_UClass_USIK_GetServerIPsBySteamID_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GetServerIPsBySteamID_GetServerIPsBySteamID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetServerIPsBySteamID_GetServerIPsBySteamID_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetServerIPsBySteamID_GetServerIPsBySteamID_Statics::NewProp_ServerSteamIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetServerIPsBySteamID_GetServerIPsBySteamID_Statics::NewProp_ServerSteamIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetServerIPsBySteamID_GetServerIPsBySteamID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetServerIPsBySteamID_GetServerIPsBySteamID_Statics::PropPointers) < 2048);
// ********** End Function GetServerIPsBySteamID Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GetServerIPsBySteamID_GetServerIPsBySteamID_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_GetServerIPsBySteamID, nullptr, "GetServerIPsBySteamID", 	Z_Construct_UFunction_USIK_GetServerIPsBySteamID_GetServerIPsBySteamID_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetServerIPsBySteamID_GetServerIPsBySteamID_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_GetServerIPsBySteamID_GetServerIPsBySteamID_Statics::SIK_GetServerIPsBySteamID_eventGetServerIPsBySteamID_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetServerIPsBySteamID_GetServerIPsBySteamID_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GetServerIPsBySteamID_GetServerIPsBySteamID_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_GetServerIPsBySteamID_GetServerIPsBySteamID_Statics::SIK_GetServerIPsBySteamID_eventGetServerIPsBySteamID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GetServerIPsBySteamID_GetServerIPsBySteamID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GetServerIPsBySteamID_GetServerIPsBySteamID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GetServerIPsBySteamID::execGetServerIPsBySteamID)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_TARRAY_REF(int64,Z_Param_Out_ServerSteamIds);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_GetServerIPsBySteamID**)Z_Param__Result=USIK_GetServerIPsBySteamID::GetServerIPsBySteamID(Z_Param_Key,Z_Param_Out_ServerSteamIds);
	P_NATIVE_END;
}
// ********** End Class USIK_GetServerIPsBySteamID Function GetServerIPsBySteamID ******************

// ********** Begin Class USIK_GetServerIPsBySteamID ***********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_GetServerIPsBySteamID;
UClass* USIK_GetServerIPsBySteamID::GetPrivateStaticClass()
{
	using TClass = USIK_GetServerIPsBySteamID;
	if (!Z_Registration_Info_UClass_USIK_GetServerIPsBySteamID.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_GetServerIPsBySteamID"),
			Z_Registration_Info_UClass_USIK_GetServerIPsBySteamID.InnerSingleton,
			StaticRegisterNativesUSIK_GetServerIPsBySteamID,
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
	return Z_Registration_Info_UClass_USIK_GetServerIPsBySteamID.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_GetServerIPsBySteamID_NoRegister()
{
	return USIK_GetServerIPsBySteamID::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_GetServerIPsBySteamID_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/GameServers/SIK_GetServerIPsBySteamID.h" },
		{ "ModuleRelativePath", "Functions/GameServers/SIK_GetServerIPsBySteamID.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_GetServerIPsBySteamID constinit property declarations ***************
// ********** End Class USIK_GetServerIPsBySteamID constinit property declarations *****************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetServerIPsBySteamID"), .Pointer = &USIK_GetServerIPsBySteamID::execGetServerIPsBySteamID },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_GetServerIPsBySteamID_GetServerIPsBySteamID, "GetServerIPsBySteamID" }, // 2263233381
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_GetServerIPsBySteamID>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_GetServerIPsBySteamID_Statics
UObject* (*const Z_Construct_UClass_USIK_GetServerIPsBySteamID_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetServerIPsBySteamID_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_GetServerIPsBySteamID_Statics::ClassParams = {
	&USIK_GetServerIPsBySteamID::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetServerIPsBySteamID_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_GetServerIPsBySteamID_Statics::Class_MetaDataParams)
};
void USIK_GetServerIPsBySteamID::StaticRegisterNativesUSIK_GetServerIPsBySteamID()
{
	UClass* Class = USIK_GetServerIPsBySteamID::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_GetServerIPsBySteamID_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_GetServerIPsBySteamID()
{
	if (!Z_Registration_Info_UClass_USIK_GetServerIPsBySteamID.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_GetServerIPsBySteamID.OuterSingleton, Z_Construct_UClass_USIK_GetServerIPsBySteamID_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_GetServerIPsBySteamID.OuterSingleton;
}
USIK_GetServerIPsBySteamID::USIK_GetServerIPsBySteamID(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_GetServerIPsBySteamID);
USIK_GetServerIPsBySteamID::~USIK_GetServerIPsBySteamID() {}
// ********** End Class USIK_GetServerIPsBySteamID *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameServers_SIK_GetServerIPsBySteamID_h__Script_SteamWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_GetServerIPsBySteamID, USIK_GetServerIPsBySteamID::StaticClass, TEXT("USIK_GetServerIPsBySteamID"), &Z_Registration_Info_UClass_USIK_GetServerIPsBySteamID, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_GetServerIPsBySteamID), 1407606490U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameServers_SIK_GetServerIPsBySteamID_h__Script_SteamWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameServers_SIK_GetServerIPsBySteamID_h__Script_SteamWeb_3247561992{
	TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameServers_SIK_GetServerIPsBySteamID_h__Script_SteamWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameServers_SIK_GetServerIPsBySteamID_h__Script_SteamWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
