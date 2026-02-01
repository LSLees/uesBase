// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Functions/GameNotifications/SIK_CreateSession.h"

#ifdef STEAMWEB_SIK_CreateSession_generated_h
#error "SIK_CreateSession.generated.h already included, missing '#pragma once' in SIK_CreateSession.h"
#endif
#define STEAMWEB_SIK_CreateSession_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USIK_CreateSession;
struct FSIK_CreateSessionOptional;

// ********** Begin ScriptStruct FSIK_CreateSessionOptional ****************************************
struct Z_Construct_UScriptStruct_FSIK_CreateSessionOptional_Statics;
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameNotifications_SIK_CreateSession_h_12_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSIK_CreateSessionOptional_Statics; \
	STEAMWEB_API static class UScriptStruct* StaticStruct();


struct FSIK_CreateSessionOptional;
// ********** End ScriptStruct FSIK_CreateSessionOptional ******************************************

// ********** Begin Class USIK_CreateSession *******************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameNotifications_SIK_CreateSession_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateSession);


struct Z_Construct_UClass_USIK_CreateSession_Statics;
STEAMWEB_API UClass* Z_Construct_UClass_USIK_CreateSession_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameNotifications_SIK_CreateSession_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSIK_CreateSession(); \
	friend struct ::Z_Construct_UClass_USIK_CreateSession_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMWEB_API UClass* ::Z_Construct_UClass_USIK_CreateSession_NoRegister(); \
public: \
	DECLARE_CLASS2(USIK_CreateSession, USIK_BaseWebApi, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamWeb"), Z_Construct_UClass_USIK_CreateSession_NoRegister) \
	DECLARE_SERIALIZER(USIK_CreateSession)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameNotifications_SIK_CreateSession_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USIK_CreateSession(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USIK_CreateSession(USIK_CreateSession&&) = delete; \
	USIK_CreateSession(const USIK_CreateSession&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USIK_CreateSession); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USIK_CreateSession); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USIK_CreateSession) \
	NO_API virtual ~USIK_CreateSession();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameNotifications_SIK_CreateSession_h_18_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameNotifications_SIK_CreateSession_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameNotifications_SIK_CreateSession_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameNotifications_SIK_CreateSession_h_21_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameNotifications_SIK_CreateSession_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USIK_CreateSession;

// ********** End Class USIK_CreateSession *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameNotifications_SIK_CreateSession_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
