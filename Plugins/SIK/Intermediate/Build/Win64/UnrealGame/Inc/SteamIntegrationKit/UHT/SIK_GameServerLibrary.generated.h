// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Functions/GameServer/SIK_GameServerLibrary.h"

#ifdef STEAMINTEGRATIONKIT_SIK_GameServerLibrary_generated_h
#error "SIK_GameServerLibrary.generated.h already included, missing '#pragma once' in SIK_GameServerLibrary.h"
#endif
#define STEAMINTEGRATIONKIT_SIK_GameServerLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSIK_AuthTicket;
struct FSIK_SteamId;
struct FSIK_SteamIPAddress;

// ********** Begin Class USIK_GameServerLibrary ***************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_GameServer_SIK_GameServerLibrary_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execWasRestartRequested); \
	DECLARE_FUNCTION(execUserHasLicenseForApp); \
	DECLARE_FUNCTION(execSetSpectatorServerName); \
	DECLARE_FUNCTION(execSetSpectatorPort); \
	DECLARE_FUNCTION(execSetServerName); \
	DECLARE_FUNCTION(execSetRegion); \
	DECLARE_FUNCTION(execSetProduct); \
	DECLARE_FUNCTION(execSetPasswordProtected); \
	DECLARE_FUNCTION(execSetModDir); \
	DECLARE_FUNCTION(execSetMaxPlayerCount); \
	DECLARE_FUNCTION(execSetMapName); \
	DECLARE_FUNCTION(execSetKeyValue); \
	DECLARE_FUNCTION(execSetGameTags); \
	DECLARE_FUNCTION(execSetGameDescription); \
	DECLARE_FUNCTION(execSetGameData); \
	DECLARE_FUNCTION(execSetDedicatedServer); \
	DECLARE_FUNCTION(execSetBotPlayerCount); \
	DECLARE_FUNCTION(execRequestUserGroupStatus); \
	DECLARE_FUNCTION(execLogOnAnonymous); \
	DECLARE_FUNCTION(execLogOn); \
	DECLARE_FUNCTION(execLogOff); \
	DECLARE_FUNCTION(execGetSteamID); \
	DECLARE_FUNCTION(execGetPublicIP); \
	DECLARE_FUNCTION(execGetAuthSessionTicket); \
	DECLARE_FUNCTION(execEndAuthSession); \
	DECLARE_FUNCTION(execCreateUnauthenticatedUserConnection); \
	DECLARE_FUNCTION(execClearAllKeyValues); \
	DECLARE_FUNCTION(execCancelAuthTicket); \
	DECLARE_FUNCTION(execUpdateUserData); \
	DECLARE_FUNCTION(execSecure); \
	DECLARE_FUNCTION(execLoggedOn); \
	DECLARE_FUNCTION(execBeginAuthSession);


struct Z_Construct_UClass_USIK_GameServerLibrary_Statics;
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_GameServerLibrary_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_GameServer_SIK_GameServerLibrary_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSIK_GameServerLibrary(); \
	friend struct ::Z_Construct_UClass_USIK_GameServerLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMINTEGRATIONKIT_API UClass* ::Z_Construct_UClass_USIK_GameServerLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(USIK_GameServerLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamIntegrationKit"), Z_Construct_UClass_USIK_GameServerLibrary_NoRegister) \
	DECLARE_SERIALIZER(USIK_GameServerLibrary)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_GameServer_SIK_GameServerLibrary_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USIK_GameServerLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USIK_GameServerLibrary(USIK_GameServerLibrary&&) = delete; \
	USIK_GameServerLibrary(const USIK_GameServerLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USIK_GameServerLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USIK_GameServerLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USIK_GameServerLibrary) \
	NO_API virtual ~USIK_GameServerLibrary();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_GameServer_SIK_GameServerLibrary_h_21_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_GameServer_SIK_GameServerLibrary_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_GameServer_SIK_GameServerLibrary_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_GameServer_SIK_GameServerLibrary_h_24_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_GameServer_SIK_GameServerLibrary_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USIK_GameServerLibrary;

// ********** End Class USIK_GameServerLibrary *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_GameServer_SIK_GameServerLibrary_h

// ********** Begin Enum ESIK_UserHasLicenseForAppResult *******************************************
#define FOREACH_ENUM_ESIK_USERHASLICENSEFORAPPRESULT(op) \
	op(UserHasLicenseResultHasLicense) \
	op(UserHasLicenseResultDoesNotHaveLicense) \
	op(UserHasLicenseResultNoAuth) 
// ********** End Enum ESIK_UserHasLicenseForAppResult *********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
