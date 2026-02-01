// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SIK_BaseWebApi.h"

#ifdef STEAMWEB_SIK_BaseWebApi_generated_h
#error "SIK_BaseWebApi.generated.h already included, missing '#pragma once' in SIK_BaseWebApi.h"
#endif
#define STEAMWEB_SIK_BaseWebApi_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSIK_BaseWebApiResponse;

// ********** Begin ScriptStruct FSIK_BaseWebApiResponse *******************************************
struct Z_Construct_UScriptStruct_FSIK_BaseWebApiResponse_Statics;
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Public_SIK_BaseWebApi_h_23_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSIK_BaseWebApiResponse_Statics; \
	STEAMWEB_API static class UScriptStruct* StaticStruct();


struct FSIK_BaseWebApiResponse;
// ********** End ScriptStruct FSIK_BaseWebApiResponse *********************************************

// ********** Begin Delegate FSIK_BaseWebApiDelegate ***********************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Public_SIK_BaseWebApi_h_38_DELEGATE \
STEAMWEB_API void FSIK_BaseWebApiDelegate_DelegateWrapper(const FMulticastScriptDelegate& SIK_BaseWebApiDelegate, bool bSuccess, FSIK_BaseWebApiResponse Response);


// ********** End Delegate FSIK_BaseWebApiDelegate *************************************************

// ********** Begin Class USIK_BaseWebApi **********************************************************
struct Z_Construct_UClass_USIK_BaseWebApi_Statics;
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Public_SIK_BaseWebApi_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSIK_BaseWebApi(); \
	friend struct ::Z_Construct_UClass_USIK_BaseWebApi_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMWEB_API UClass* ::Z_Construct_UClass_USIK_BaseWebApi_NoRegister(); \
public: \
	DECLARE_CLASS2(USIK_BaseWebApi, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamWeb"), Z_Construct_UClass_USIK_BaseWebApi_NoRegister) \
	DECLARE_SERIALIZER(USIK_BaseWebApi)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Public_SIK_BaseWebApi_h_42_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USIK_BaseWebApi(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USIK_BaseWebApi(USIK_BaseWebApi&&) = delete; \
	USIK_BaseWebApi(const USIK_BaseWebApi&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USIK_BaseWebApi); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USIK_BaseWebApi); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USIK_BaseWebApi) \
	NO_API virtual ~USIK_BaseWebApi();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Public_SIK_BaseWebApi_h_39_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Public_SIK_BaseWebApi_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Public_SIK_BaseWebApi_h_42_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Public_SIK_BaseWebApi_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USIK_BaseWebApi;

// ********** End Class USIK_BaseWebApi ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Public_SIK_BaseWebApi_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
