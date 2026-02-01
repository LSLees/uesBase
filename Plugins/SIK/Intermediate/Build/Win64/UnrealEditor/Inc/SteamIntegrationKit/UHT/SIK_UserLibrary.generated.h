// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Functions/User/SIK_UserLibrary.h"

#ifdef STEAMINTEGRATIONKIT_SIK_UserLibrary_generated_h
#error "SIK_UserLibrary.generated.h already included, missing '#pragma once' in SIK_UserLibrary.h"
#endif
#define STEAMINTEGRATIONKIT_SIK_UserLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USIK_SoundWaveProcedural;
struct FSIK_SteamId;
struct FSIK_SteamNetworkingIdentity;

// ********** Begin Class USIK_UserLibrary *********************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_User_SIK_UserLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDestroySIKSoundWaveProcedural); \
	DECLARE_FUNCTION(execConstructSIKSoundWaveProcedural); \
	DECLARE_FUNCTION(execUserHasLicenseForApp); \
	DECLARE_FUNCTION(execGetAllConnectedPlayers); \
	DECLARE_FUNCTION(execRestartVOIPAfterMapChange); \
	DECLARE_FUNCTION(execRemoveAllRemoteTalkers); \
	DECLARE_FUNCTION(execStopVoiceRecording); \
	DECLARE_FUNCTION(execStartVoiceRecording); \
	DECLARE_FUNCTION(execGetVoiceOptimalSampleRate); \
	DECLARE_FUNCTION(execGetVoice); \
	DECLARE_FUNCTION(execGetSteamIdPure); \
	DECLARE_FUNCTION(execGetSteamId); \
	DECLARE_FUNCTION(execGetPlayerSteamLevel); \
	DECLARE_FUNCTION(execGetGameBadgeLevel); \
	DECLARE_FUNCTION(execGetEncryptedAppTicket); \
	DECLARE_FUNCTION(execGetAvailableVoice); \
	DECLARE_FUNCTION(execGetAuthTicketForWebApi); \
	DECLARE_FUNCTION(execGetAuthSessionTicket); \
	DECLARE_FUNCTION(execEndAuthSession); \
	DECLARE_FUNCTION(execDecompressVoice); \
	DECLARE_FUNCTION(execCancelAuthTicket); \
	DECLARE_FUNCTION(execLoggedOnPure); \
	DECLARE_FUNCTION(execLoggedOn); \
	DECLARE_FUNCTION(execIsTwoFactorEnabled); \
	DECLARE_FUNCTION(execIsPhoneVerified); \
	DECLARE_FUNCTION(execIsPhoneRequiringVerification); \
	DECLARE_FUNCTION(execIsPhoneIdentifying); \
	DECLARE_FUNCTION(execIsBehindNAT); \
	DECLARE_FUNCTION(execBeginAuthSession); \
	DECLARE_FUNCTION(execAdvertiseGame);


struct Z_Construct_UClass_USIK_UserLibrary_Statics;
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_UserLibrary_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_User_SIK_UserLibrary_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSIK_UserLibrary(); \
	friend struct ::Z_Construct_UClass_USIK_UserLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMINTEGRATIONKIT_API UClass* ::Z_Construct_UClass_USIK_UserLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(USIK_UserLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamIntegrationKit"), Z_Construct_UClass_USIK_UserLibrary_NoRegister) \
	DECLARE_SERIALIZER(USIK_UserLibrary)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_User_SIK_UserLibrary_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USIK_UserLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USIK_UserLibrary(USIK_UserLibrary&&) = delete; \
	USIK_UserLibrary(const USIK_UserLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USIK_UserLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USIK_UserLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USIK_UserLibrary) \
	NO_API virtual ~USIK_UserLibrary();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_User_SIK_UserLibrary_h_16_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_User_SIK_UserLibrary_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_User_SIK_UserLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_User_SIK_UserLibrary_h_19_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_User_SIK_UserLibrary_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USIK_UserLibrary;

// ********** End Class USIK_UserLibrary ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_User_SIK_UserLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
