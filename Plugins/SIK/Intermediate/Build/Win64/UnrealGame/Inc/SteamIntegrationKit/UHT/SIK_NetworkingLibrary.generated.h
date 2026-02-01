// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Functions/Networking/SIK_NetworkingLibrary.h"

#ifdef STEAMINTEGRATIONKIT_SIK_NetworkingLibrary_generated_h
#error "SIK_NetworkingLibrary.generated.h already included, missing '#pragma once' in SIK_NetworkingLibrary.h"
#endif
#define STEAMINTEGRATIONKIT_SIK_NetworkingLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSIK_P2PSessionState;
struct FSIK_SteamId;

// ********** Begin Class USIK_NetworkingLibrary ***************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Networking_SIK_NetworkingLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSendP2PPacket); \
	DECLARE_FUNCTION(execReadP2PPacket); \
	DECLARE_FUNCTION(execIsP2PPacketAvailable); \
	DECLARE_FUNCTION(execGetP2PSessionState); \
	DECLARE_FUNCTION(execCloseP2PSessionWithUser); \
	DECLARE_FUNCTION(execCloseP2PChannelWithUser); \
	DECLARE_FUNCTION(execAllowP2PPacketRelay); \
	DECLARE_FUNCTION(execAcceptP2PSessionWithUser);


struct Z_Construct_UClass_USIK_NetworkingLibrary_Statics;
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_NetworkingLibrary_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Networking_SIK_NetworkingLibrary_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSIK_NetworkingLibrary(); \
	friend struct ::Z_Construct_UClass_USIK_NetworkingLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMINTEGRATIONKIT_API UClass* ::Z_Construct_UClass_USIK_NetworkingLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(USIK_NetworkingLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamIntegrationKit"), Z_Construct_UClass_USIK_NetworkingLibrary_NoRegister) \
	DECLARE_SERIALIZER(USIK_NetworkingLibrary)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Networking_SIK_NetworkingLibrary_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USIK_NetworkingLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USIK_NetworkingLibrary(USIK_NetworkingLibrary&&) = delete; \
	USIK_NetworkingLibrary(const USIK_NetworkingLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USIK_NetworkingLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USIK_NetworkingLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USIK_NetworkingLibrary) \
	NO_API virtual ~USIK_NetworkingLibrary();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Networking_SIK_NetworkingLibrary_h_13_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Networking_SIK_NetworkingLibrary_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Networking_SIK_NetworkingLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Networking_SIK_NetworkingLibrary_h_16_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Networking_SIK_NetworkingLibrary_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USIK_NetworkingLibrary;

// ********** End Class USIK_NetworkingLibrary *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Networking_SIK_NetworkingLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
