// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Functions/GameNotifications/SIK_DeleteSession.h"

#ifdef STEAMWEB_SIK_DeleteSession_generated_h
#error "SIK_DeleteSession.generated.h already included, missing '#pragma once' in SIK_DeleteSession.h"
#endif
#define STEAMWEB_SIK_DeleteSession_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USIK_DeleteSession;

// ********** Begin Class USIK_DeleteSession *******************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameNotifications_SIK_DeleteSession_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDeleteSession);


struct Z_Construct_UClass_USIK_DeleteSession_Statics;
STEAMWEB_API UClass* Z_Construct_UClass_USIK_DeleteSession_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameNotifications_SIK_DeleteSession_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSIK_DeleteSession(); \
	friend struct ::Z_Construct_UClass_USIK_DeleteSession_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMWEB_API UClass* ::Z_Construct_UClass_USIK_DeleteSession_NoRegister(); \
public: \
	DECLARE_CLASS2(USIK_DeleteSession, USIK_BaseWebApi, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamWeb"), Z_Construct_UClass_USIK_DeleteSession_NoRegister) \
	DECLARE_SERIALIZER(USIK_DeleteSession)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameNotifications_SIK_DeleteSession_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USIK_DeleteSession(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USIK_DeleteSession(USIK_DeleteSession&&) = delete; \
	USIK_DeleteSession(const USIK_DeleteSession&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USIK_DeleteSession); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USIK_DeleteSession); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USIK_DeleteSession) \
	NO_API virtual ~USIK_DeleteSession();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameNotifications_SIK_DeleteSession_h_12_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameNotifications_SIK_DeleteSession_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameNotifications_SIK_DeleteSession_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameNotifications_SIK_DeleteSession_h_15_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameNotifications_SIK_DeleteSession_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USIK_DeleteSession;

// ********** End Class USIK_DeleteSession *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameNotifications_SIK_DeleteSession_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
