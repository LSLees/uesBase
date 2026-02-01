// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineAuthHandlerSteam.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeOnlineAuthHandlerSteam() {}

// ********** Begin Cross Module References ********************************************************
ONLINESUBSYSTEMSTEAM_API UClass* Z_Construct_UClass_USteamAuthComponentModuleInterface();
ONLINESUBSYSTEMSTEAM_API UClass* Z_Construct_UClass_USteamAuthComponentModuleInterface_NoRegister();
PACKETHANDLER_API UClass* Z_Construct_UClass_UHandlerComponentFactory();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemSteam();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USteamAuthComponentModuleInterface ***************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamAuthComponentModuleInterface;
UClass* USteamAuthComponentModuleInterface::GetPrivateStaticClass()
{
	using TClass = USteamAuthComponentModuleInterface;
	if (!Z_Registration_Info_UClass_USteamAuthComponentModuleInterface.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamAuthComponentModuleInterface"),
			Z_Registration_Info_UClass_USteamAuthComponentModuleInterface.InnerSingleton,
			StaticRegisterNativesUSteamAuthComponentModuleInterface,
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
	return Z_Registration_Info_UClass_USteamAuthComponentModuleInterface.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamAuthComponentModuleInterface_NoRegister()
{
	return USteamAuthComponentModuleInterface::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamAuthComponentModuleInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "OnlineAuthHandlerSteam.h" },
		{ "ModuleRelativePath", "Private/OnlineAuthHandlerSteam.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamAuthComponentModuleInterface constinit property declarations *******
// ********** End Class USteamAuthComponentModuleInterface constinit property declarations *********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamAuthComponentModuleInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamAuthComponentModuleInterface_Statics
UObject* (*const Z_Construct_UClass_USteamAuthComponentModuleInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UHandlerComponentFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemSteam,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAuthComponentModuleInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamAuthComponentModuleInterface_Statics::ClassParams = {
	&USteamAuthComponentModuleInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAuthComponentModuleInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamAuthComponentModuleInterface_Statics::Class_MetaDataParams)
};
void USteamAuthComponentModuleInterface::StaticRegisterNativesUSteamAuthComponentModuleInterface()
{
}
UClass* Z_Construct_UClass_USteamAuthComponentModuleInterface()
{
	if (!Z_Registration_Info_UClass_USteamAuthComponentModuleInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamAuthComponentModuleInterface.OuterSingleton, Z_Construct_UClass_USteamAuthComponentModuleInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamAuthComponentModuleInterface.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamAuthComponentModuleInterface);
USteamAuthComponentModuleInterface::~USteamAuthComponentModuleInterface() {}
// ********** End Class USteamAuthComponentModuleInterface *****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_OnlineSubsystemSteam_Private_OnlineAuthHandlerSteam_h__Script_OnlineSubsystemSteam_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamAuthComponentModuleInterface, USteamAuthComponentModuleInterface::StaticClass, TEXT("USteamAuthComponentModuleInterface"), &Z_Registration_Info_UClass_USteamAuthComponentModuleInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamAuthComponentModuleInterface), 2588607168U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_OnlineSubsystemSteam_Private_OnlineAuthHandlerSteam_h__Script_OnlineSubsystemSteam_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_OnlineSubsystemSteam_Private_OnlineAuthHandlerSteam_h__Script_OnlineSubsystemSteam_3550555474{
	TEXT("/Script/OnlineSubsystemSteam"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_OnlineSubsystemSteam_Private_OnlineAuthHandlerSteam_h__Script_OnlineSubsystemSteam_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_OnlineSubsystemSteam_Private_OnlineAuthHandlerSteam_h__Script_OnlineSubsystemSteam_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
