// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamSocketsNetConnection.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSteamSocketsNetConnection() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UNetConnection();
STEAMSOCKETS_API UClass* Z_Construct_UClass_USteamSocketsNetConnection();
STEAMSOCKETS_API UClass* Z_Construct_UClass_USteamSocketsNetConnection_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamSockets();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USteamSocketsNetConnection ***********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamSocketsNetConnection;
UClass* USteamSocketsNetConnection::GetPrivateStaticClass()
{
	using TClass = USteamSocketsNetConnection;
	if (!Z_Registration_Info_UClass_USteamSocketsNetConnection.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamSocketsNetConnection"),
			Z_Registration_Info_UClass_USteamSocketsNetConnection.InnerSingleton,
			StaticRegisterNativesUSteamSocketsNetConnection,
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
	return Z_Registration_Info_UClass_USteamSocketsNetConnection.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamSocketsNetConnection_NoRegister()
{
	return USteamSocketsNetConnection::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamSocketsNetConnection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SteamSocketsNetConnection.h" },
		{ "ModuleRelativePath", "Public/SteamSocketsNetConnection.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamSocketsNetConnection constinit property declarations ***************
// ********** End Class USteamSocketsNetConnection constinit property declarations *****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamSocketsNetConnection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamSocketsNetConnection_Statics
UObject* (*const Z_Construct_UClass_USteamSocketsNetConnection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNetConnection,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamSockets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamSocketsNetConnection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamSocketsNetConnection_Statics::ClassParams = {
	&USteamSocketsNetConnection::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamSocketsNetConnection_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamSocketsNetConnection_Statics::Class_MetaDataParams)
};
void USteamSocketsNetConnection::StaticRegisterNativesUSteamSocketsNetConnection()
{
}
UClass* Z_Construct_UClass_USteamSocketsNetConnection()
{
	if (!Z_Registration_Info_UClass_USteamSocketsNetConnection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamSocketsNetConnection.OuterSingleton, Z_Construct_UClass_USteamSocketsNetConnection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamSocketsNetConnection.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamSocketsNetConnection);
USteamSocketsNetConnection::~USteamSocketsNetConnection() {}
// ********** End Class USteamSocketsNetConnection *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamSockets_Public_SteamSocketsNetConnection_h__Script_SteamSockets_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamSocketsNetConnection, USteamSocketsNetConnection::StaticClass, TEXT("USteamSocketsNetConnection"), &Z_Registration_Info_UClass_USteamSocketsNetConnection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamSocketsNetConnection), 1310491072U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamSockets_Public_SteamSocketsNetConnection_h__Script_SteamSockets_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamSockets_Public_SteamSocketsNetConnection_h__Script_SteamSockets_660845388{
	TEXT("/Script/SteamSockets"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamSockets_Public_SteamSocketsNetConnection_h__Script_SteamSockets_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamSockets_Public_SteamSocketsNetConnection_h__Script_SteamSockets_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
