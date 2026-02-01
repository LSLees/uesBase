// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SIKSteamNetConnection.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIKSteamNetConnection() {}

// ********** Begin Cross Module References ********************************************************
ONLINESUBSYSTEMSTEAM_API UClass* Z_Construct_UClass_USIKSteamNetConnection();
ONLINESUBSYSTEMSTEAM_API UClass* Z_Construct_UClass_USIKSteamNetConnection_NoRegister();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UIpConnection();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemSteam();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USIKSteamNetConnection ***************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIKSteamNetConnection;
UClass* USIKSteamNetConnection::GetPrivateStaticClass()
{
	using TClass = USIKSteamNetConnection;
	if (!Z_Registration_Info_UClass_USIKSteamNetConnection.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIKSteamNetConnection"),
			Z_Registration_Info_UClass_USIKSteamNetConnection.InnerSingleton,
			StaticRegisterNativesUSIKSteamNetConnection,
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
	return Z_Registration_Info_UClass_USIKSteamNetConnection.InnerSingleton;
}
UClass* Z_Construct_UClass_USIKSteamNetConnection_NoRegister()
{
	return USIKSteamNetConnection::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIKSteamNetConnection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SIKSteamNetConnection.h" },
		{ "ModuleRelativePath", "Classes/SIKSteamNetConnection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsPassthrough_MetaData[] = {
		{ "Comment", "/** Is this net connection passthrough to IpConnection */" },
		{ "ModuleRelativePath", "Classes/SIKSteamNetConnection.h" },
		{ "ToolTip", "Is this net connection passthrough to IpConnection" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIKSteamNetConnection constinit property declarations *******************
	static void NewProp_bIsPassthrough_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPassthrough;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USIKSteamNetConnection constinit property declarations *********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIKSteamNetConnection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIKSteamNetConnection_Statics

// ********** Begin Class USIKSteamNetConnection Property Definitions ******************************
void Z_Construct_UClass_USIKSteamNetConnection_Statics::NewProp_bIsPassthrough_SetBit(void* Obj)
{
	((USIKSteamNetConnection*)Obj)->bIsPassthrough = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USIKSteamNetConnection_Statics::NewProp_bIsPassthrough = { "bIsPassthrough", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USIKSteamNetConnection), &Z_Construct_UClass_USIKSteamNetConnection_Statics::NewProp_bIsPassthrough_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsPassthrough_MetaData), NewProp_bIsPassthrough_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USIKSteamNetConnection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIKSteamNetConnection_Statics::NewProp_bIsPassthrough,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIKSteamNetConnection_Statics::PropPointers) < 2048);
// ********** End Class USIKSteamNetConnection Property Definitions ********************************
UObject* (*const Z_Construct_UClass_USIKSteamNetConnection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UIpConnection,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemSteam,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIKSteamNetConnection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIKSteamNetConnection_Statics::ClassParams = {
	&USIKSteamNetConnection::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USIKSteamNetConnection_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USIKSteamNetConnection_Statics::PropPointers),
	0,
	0x000000ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIKSteamNetConnection_Statics::Class_MetaDataParams), Z_Construct_UClass_USIKSteamNetConnection_Statics::Class_MetaDataParams)
};
void USIKSteamNetConnection::StaticRegisterNativesUSIKSteamNetConnection()
{
}
UClass* Z_Construct_UClass_USIKSteamNetConnection()
{
	if (!Z_Registration_Info_UClass_USIKSteamNetConnection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIKSteamNetConnection.OuterSingleton, Z_Construct_UClass_USIKSteamNetConnection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIKSteamNetConnection.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIKSteamNetConnection);
USIKSteamNetConnection::~USIKSteamNetConnection() {}
// ********** End Class USIKSteamNetConnection *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_OnlineSubsystemSteam_Classes_SIKSteamNetConnection_h__Script_OnlineSubsystemSteam_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIKSteamNetConnection, USIKSteamNetConnection::StaticClass, TEXT("USIKSteamNetConnection"), &Z_Registration_Info_UClass_USIKSteamNetConnection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIKSteamNetConnection), 595726823U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_OnlineSubsystemSteam_Classes_SIKSteamNetConnection_h__Script_OnlineSubsystemSteam_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_OnlineSubsystemSteam_Classes_SIKSteamNetConnection_h__Script_OnlineSubsystemSteam_2313627107{
	TEXT("/Script/OnlineSubsystemSteam"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_OnlineSubsystemSteam_Classes_SIKSteamNetConnection_h__Script_OnlineSubsystemSteam_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_OnlineSubsystemSteam_Classes_SIKSteamNetConnection_h__Script_OnlineSubsystemSteam_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
