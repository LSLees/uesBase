// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamSocketsNetDriver.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSteamSocketsNetDriver() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UNetDriver();
STEAMSOCKETS_API UClass* Z_Construct_UClass_USteamSocketsNetDriver();
STEAMSOCKETS_API UClass* Z_Construct_UClass_USteamSocketsNetDriver_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamSockets();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USteamSocketsNetDriver ***************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamSocketsNetDriver;
UClass* USteamSocketsNetDriver::GetPrivateStaticClass()
{
	using TClass = USteamSocketsNetDriver;
	if (!Z_Registration_Info_UClass_USteamSocketsNetDriver.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamSocketsNetDriver"),
			Z_Registration_Info_UClass_USteamSocketsNetDriver.InnerSingleton,
			StaticRegisterNativesUSteamSocketsNetDriver,
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
	return Z_Registration_Info_UClass_USteamSocketsNetDriver.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamSocketsNetDriver_NoRegister()
{
	return USteamSocketsNetDriver::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamSocketsNetDriver_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SteamSocketsNetDriver.h" },
		{ "ModuleRelativePath", "Public/SteamSocketsNetDriver.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamSocketsNetDriver constinit property declarations *******************
// ********** End Class USteamSocketsNetDriver constinit property declarations *********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamSocketsNetDriver>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamSocketsNetDriver_Statics
UObject* (*const Z_Construct_UClass_USteamSocketsNetDriver_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNetDriver,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamSockets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamSocketsNetDriver_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamSocketsNetDriver_Statics::ClassParams = {
	&USteamSocketsNetDriver::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamSocketsNetDriver_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamSocketsNetDriver_Statics::Class_MetaDataParams)
};
void USteamSocketsNetDriver::StaticRegisterNativesUSteamSocketsNetDriver()
{
}
UClass* Z_Construct_UClass_USteamSocketsNetDriver()
{
	if (!Z_Registration_Info_UClass_USteamSocketsNetDriver.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamSocketsNetDriver.OuterSingleton, Z_Construct_UClass_USteamSocketsNetDriver_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamSocketsNetDriver.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamSocketsNetDriver);
USteamSocketsNetDriver::~USteamSocketsNetDriver() {}
// ********** End Class USteamSocketsNetDriver *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamSockets_Public_SteamSocketsNetDriver_h__Script_SteamSockets_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamSocketsNetDriver, USteamSocketsNetDriver::StaticClass, TEXT("USteamSocketsNetDriver"), &Z_Registration_Info_UClass_USteamSocketsNetDriver, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamSocketsNetDriver), 1919689852U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamSockets_Public_SteamSocketsNetDriver_h__Script_SteamSockets_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamSockets_Public_SteamSocketsNetDriver_h__Script_SteamSockets_2169147816{
	TEXT("/Script/SteamSockets"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamSockets_Public_SteamSocketsNetDriver_h__Script_SteamSockets_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamSockets_Public_SteamSocketsNetDriver_h__Script_SteamSockets_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
