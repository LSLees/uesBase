// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamSocketsNetConnection.h"

#ifdef STEAMSOCKETS_SteamSocketsNetConnection_generated_h
#error "SteamSocketsNetConnection.generated.h already included, missing '#pragma once' in SteamSocketsNetConnection.h"
#endif
#define STEAMSOCKETS_SteamSocketsNetConnection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USteamSocketsNetConnection ***********************************************
struct Z_Construct_UClass_USteamSocketsNetConnection_Statics;
STEAMSOCKETS_API UClass* Z_Construct_UClass_USteamSocketsNetConnection_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamSockets_Public_SteamSocketsNetConnection_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamSocketsNetConnection(); \
	friend struct ::Z_Construct_UClass_USteamSocketsNetConnection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMSOCKETS_API UClass* ::Z_Construct_UClass_USteamSocketsNetConnection_NoRegister(); \
public: \
	DECLARE_CLASS2(USteamSocketsNetConnection, UNetConnection, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/SteamSockets"), Z_Construct_UClass_USteamSocketsNetConnection_NoRegister) \
	DECLARE_SERIALIZER(USteamSocketsNetConnection)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamSockets_Public_SteamSocketsNetConnection_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USteamSocketsNetConnection(USteamSocketsNetConnection&&) = delete; \
	USteamSocketsNetConnection(const USteamSocketsNetConnection&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamSocketsNetConnection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamSocketsNetConnection); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USteamSocketsNetConnection) \
	NO_API virtual ~USteamSocketsNetConnection();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamSockets_Public_SteamSocketsNetConnection_h_14_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamSockets_Public_SteamSocketsNetConnection_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamSockets_Public_SteamSocketsNetConnection_h_17_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamSockets_Public_SteamSocketsNetConnection_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USteamSocketsNetConnection;

// ********** End Class USteamSocketsNetConnection *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamSockets_Public_SteamSocketsNetConnection_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
