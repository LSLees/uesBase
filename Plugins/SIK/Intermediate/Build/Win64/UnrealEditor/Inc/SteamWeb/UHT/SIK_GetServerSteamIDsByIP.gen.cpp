// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/GameServers/SIK_GetServerSteamIDsByIP.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_GetServerSteamIDsByIP() {}

// ********** Begin Cross Module References ********************************************************
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetServerSteamIDsByIP();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetServerSteamIDsByIP_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USIK_GetServerSteamIDsByIP Function GetServerSteamIDsByIP ****************
struct Z_Construct_UFunction_USIK_GetServerSteamIDsByIP_GetServerSteamIDsByIP_Statics
{
	struct SIK_GetServerSteamIDsByIP_eventGetServerSteamIDsByIP_Parms
	{
		FString Key;
		TArray<FString> ServerIPs;
		USIK_GetServerSteamIDsByIP* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|GameServers" },
		{ "Comment", "//Gets a list of server SteamIDs given a list of IPs.\n" },
		{ "ModuleRelativePath", "Functions/GameServers/SIK_GetServerSteamIDsByIP.h" },
		{ "ToolTip", "Gets a list of server SteamIDs given a list of IPs." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerIPs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetServerSteamIDsByIP constinit property declarations *****************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ServerIPs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ServerIPs;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetServerSteamIDsByIP constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetServerSteamIDsByIP Property Definitions ****************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_GetServerSteamIDsByIP_GetServerSteamIDsByIP_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetServerSteamIDsByIP_eventGetServerSteamIDsByIP_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_GetServerSteamIDsByIP_GetServerSteamIDsByIP_Statics::NewProp_ServerIPs_Inner = { "ServerIPs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_GetServerSteamIDsByIP_GetServerSteamIDsByIP_Statics::NewProp_ServerIPs = { "ServerIPs", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetServerSteamIDsByIP_eventGetServerSteamIDsByIP_Parms, ServerIPs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerIPs_MetaData), NewProp_ServerIPs_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_GetServerSteamIDsByIP_GetServerSteamIDsByIP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetServerSteamIDsByIP_eventGetServerSteamIDsByIP_Parms, ReturnValue), Z_Construct_UClass_USIK_GetServerSteamIDsByIP_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GetServerSteamIDsByIP_GetServerSteamIDsByIP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetServerSteamIDsByIP_GetServerSteamIDsByIP_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetServerSteamIDsByIP_GetServerSteamIDsByIP_Statics::NewProp_ServerIPs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetServerSteamIDsByIP_GetServerSteamIDsByIP_Statics::NewProp_ServerIPs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetServerSteamIDsByIP_GetServerSteamIDsByIP_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetServerSteamIDsByIP_GetServerSteamIDsByIP_Statics::PropPointers) < 2048);
// ********** End Function GetServerSteamIDsByIP Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GetServerSteamIDsByIP_GetServerSteamIDsByIP_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_GetServerSteamIDsByIP, nullptr, "GetServerSteamIDsByIP", 	Z_Construct_UFunction_USIK_GetServerSteamIDsByIP_GetServerSteamIDsByIP_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetServerSteamIDsByIP_GetServerSteamIDsByIP_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_GetServerSteamIDsByIP_GetServerSteamIDsByIP_Statics::SIK_GetServerSteamIDsByIP_eventGetServerSteamIDsByIP_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetServerSteamIDsByIP_GetServerSteamIDsByIP_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GetServerSteamIDsByIP_GetServerSteamIDsByIP_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_GetServerSteamIDsByIP_GetServerSteamIDsByIP_Statics::SIK_GetServerSteamIDsByIP_eventGetServerSteamIDsByIP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GetServerSteamIDsByIP_GetServerSteamIDsByIP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GetServerSteamIDsByIP_GetServerSteamIDsByIP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GetServerSteamIDsByIP::execGetServerSteamIDsByIP)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_TARRAY_REF(FString,Z_Param_Out_ServerIPs);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_GetServerSteamIDsByIP**)Z_Param__Result=USIK_GetServerSteamIDsByIP::GetServerSteamIDsByIP(Z_Param_Key,Z_Param_Out_ServerIPs);
	P_NATIVE_END;
}
// ********** End Class USIK_GetServerSteamIDsByIP Function GetServerSteamIDsByIP ******************

// ********** Begin Class USIK_GetServerSteamIDsByIP ***********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_GetServerSteamIDsByIP;
UClass* USIK_GetServerSteamIDsByIP::GetPrivateStaticClass()
{
	using TClass = USIK_GetServerSteamIDsByIP;
	if (!Z_Registration_Info_UClass_USIK_GetServerSteamIDsByIP.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_GetServerSteamIDsByIP"),
			Z_Registration_Info_UClass_USIK_GetServerSteamIDsByIP.InnerSingleton,
			StaticRegisterNativesUSIK_GetServerSteamIDsByIP,
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
	return Z_Registration_Info_UClass_USIK_GetServerSteamIDsByIP.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_GetServerSteamIDsByIP_NoRegister()
{
	return USIK_GetServerSteamIDsByIP::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_GetServerSteamIDsByIP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/GameServers/SIK_GetServerSteamIDsByIP.h" },
		{ "ModuleRelativePath", "Functions/GameServers/SIK_GetServerSteamIDsByIP.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_GetServerSteamIDsByIP constinit property declarations ***************
// ********** End Class USIK_GetServerSteamIDsByIP constinit property declarations *****************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetServerSteamIDsByIP"), .Pointer = &USIK_GetServerSteamIDsByIP::execGetServerSteamIDsByIP },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_GetServerSteamIDsByIP_GetServerSteamIDsByIP, "GetServerSteamIDsByIP" }, // 2503344904
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_GetServerSteamIDsByIP>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_GetServerSteamIDsByIP_Statics
UObject* (*const Z_Construct_UClass_USIK_GetServerSteamIDsByIP_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetServerSteamIDsByIP_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_GetServerSteamIDsByIP_Statics::ClassParams = {
	&USIK_GetServerSteamIDsByIP::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetServerSteamIDsByIP_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_GetServerSteamIDsByIP_Statics::Class_MetaDataParams)
};
void USIK_GetServerSteamIDsByIP::StaticRegisterNativesUSIK_GetServerSteamIDsByIP()
{
	UClass* Class = USIK_GetServerSteamIDsByIP::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_GetServerSteamIDsByIP_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_GetServerSteamIDsByIP()
{
	if (!Z_Registration_Info_UClass_USIK_GetServerSteamIDsByIP.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_GetServerSteamIDsByIP.OuterSingleton, Z_Construct_UClass_USIK_GetServerSteamIDsByIP_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_GetServerSteamIDsByIP.OuterSingleton;
}
USIK_GetServerSteamIDsByIP::USIK_GetServerSteamIDsByIP(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_GetServerSteamIDsByIP);
USIK_GetServerSteamIDsByIP::~USIK_GetServerSteamIDsByIP() {}
// ********** End Class USIK_GetServerSteamIDsByIP *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameServers_SIK_GetServerSteamIDsByIP_h__Script_SteamWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_GetServerSteamIDsByIP, USIK_GetServerSteamIDsByIP::StaticClass, TEXT("USIK_GetServerSteamIDsByIP"), &Z_Registration_Info_UClass_USIK_GetServerSteamIDsByIP, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_GetServerSteamIDsByIP), 2829064046U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameServers_SIK_GetServerSteamIDsByIP_h__Script_SteamWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameServers_SIK_GetServerSteamIDsByIP_h__Script_SteamWeb_4190691660{
	TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameServers_SIK_GetServerSteamIDsByIP_h__Script_SteamWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameServers_SIK_GetServerSteamIDsByIP_h__Script_SteamWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
