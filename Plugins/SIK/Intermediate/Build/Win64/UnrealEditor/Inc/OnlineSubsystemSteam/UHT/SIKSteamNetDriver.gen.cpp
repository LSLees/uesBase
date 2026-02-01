// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SIKSteamNetDriver.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIKSteamNetDriver() {}

// ********** Begin Cross Module References ********************************************************
ONLINESUBSYSTEMSTEAM_API UClass* Z_Construct_UClass_USIKSteamNetDriver();
ONLINESUBSYSTEMSTEAM_API UClass* Z_Construct_UClass_USIKSteamNetDriver_NoRegister();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UIpNetDriver();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemSteam();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USIKSteamNetDriver *******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIKSteamNetDriver;
UClass* USIKSteamNetDriver::GetPrivateStaticClass()
{
	using TClass = USIKSteamNetDriver;
	if (!Z_Registration_Info_UClass_USIKSteamNetDriver.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIKSteamNetDriver"),
			Z_Registration_Info_UClass_USIKSteamNetDriver.InnerSingleton,
			StaticRegisterNativesUSIKSteamNetDriver,
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
	return Z_Registration_Info_UClass_USIKSteamNetDriver.InnerSingleton;
}
UClass* Z_Construct_UClass_USIKSteamNetDriver_NoRegister()
{
	return USIKSteamNetDriver::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIKSteamNetDriver_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SIKSteamNetDriver.h" },
		{ "ModuleRelativePath", "Classes/SIKSteamNetDriver.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIKSteamNetDriver constinit property declarations ***********************
// ********** End Class USIKSteamNetDriver constinit property declarations *************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIKSteamNetDriver>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIKSteamNetDriver_Statics
UObject* (*const Z_Construct_UClass_USIKSteamNetDriver_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UIpNetDriver,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemSteam,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIKSteamNetDriver_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIKSteamNetDriver_Statics::ClassParams = {
	&USIKSteamNetDriver::StaticClass,
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
	0x000000ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIKSteamNetDriver_Statics::Class_MetaDataParams), Z_Construct_UClass_USIKSteamNetDriver_Statics::Class_MetaDataParams)
};
void USIKSteamNetDriver::StaticRegisterNativesUSIKSteamNetDriver()
{
}
UClass* Z_Construct_UClass_USIKSteamNetDriver()
{
	if (!Z_Registration_Info_UClass_USIKSteamNetDriver.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIKSteamNetDriver.OuterSingleton, Z_Construct_UClass_USIKSteamNetDriver_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIKSteamNetDriver.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIKSteamNetDriver);
USIKSteamNetDriver::~USIKSteamNetDriver() {}
// ********** End Class USIKSteamNetDriver *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_OnlineSubsystemSteam_Classes_SIKSteamNetDriver_h__Script_OnlineSubsystemSteam_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIKSteamNetDriver, USIKSteamNetDriver::StaticClass, TEXT("USIKSteamNetDriver"), &Z_Registration_Info_UClass_USIKSteamNetDriver, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIKSteamNetDriver), 1212040590U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_OnlineSubsystemSteam_Classes_SIKSteamNetDriver_h__Script_OnlineSubsystemSteam_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_OnlineSubsystemSteam_Classes_SIKSteamNetDriver_h__Script_OnlineSubsystemSteam_3535323084{
	TEXT("/Script/OnlineSubsystemSteam"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_OnlineSubsystemSteam_Classes_SIKSteamNetDriver_h__Script_OnlineSubsystemSteam_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_OnlineSubsystemSteam_Classes_SIKSteamNetDriver_h__Script_OnlineSubsystemSteam_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
