// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Functions/UserAuth/SIK_AuthenticateUser.h"

#ifdef STEAMWEB_SIK_AuthenticateUser_generated_h
#error "SIK_AuthenticateUser.generated.h already included, missing '#pragma once' in SIK_AuthenticateUser.h"
#endif
#define STEAMWEB_SIK_AuthenticateUser_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USIK_AuthenticateUser;

// ********** Begin Class USIK_AuthenticateUser ****************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_UserAuth_SIK_AuthenticateUser_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAuthenticateUser);


struct Z_Construct_UClass_USIK_AuthenticateUser_Statics;
STEAMWEB_API UClass* Z_Construct_UClass_USIK_AuthenticateUser_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_UserAuth_SIK_AuthenticateUser_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSIK_AuthenticateUser(); \
	friend struct ::Z_Construct_UClass_USIK_AuthenticateUser_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMWEB_API UClass* ::Z_Construct_UClass_USIK_AuthenticateUser_NoRegister(); \
public: \
	DECLARE_CLASS2(USIK_AuthenticateUser, USIK_BaseWebApi, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamWeb"), Z_Construct_UClass_USIK_AuthenticateUser_NoRegister) \
	DECLARE_SERIALIZER(USIK_AuthenticateUser)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_UserAuth_SIK_AuthenticateUser_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USIK_AuthenticateUser(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USIK_AuthenticateUser(USIK_AuthenticateUser&&) = delete; \
	USIK_AuthenticateUser(const USIK_AuthenticateUser&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USIK_AuthenticateUser); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USIK_AuthenticateUser); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USIK_AuthenticateUser) \
	NO_API virtual ~USIK_AuthenticateUser();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_UserAuth_SIK_AuthenticateUser_h_12_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_UserAuth_SIK_AuthenticateUser_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_UserAuth_SIK_AuthenticateUser_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_UserAuth_SIK_AuthenticateUser_h_15_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_UserAuth_SIK_AuthenticateUser_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USIK_AuthenticateUser;

// ********** End Class USIK_AuthenticateUser ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_UserAuth_SIK_AuthenticateUser_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
