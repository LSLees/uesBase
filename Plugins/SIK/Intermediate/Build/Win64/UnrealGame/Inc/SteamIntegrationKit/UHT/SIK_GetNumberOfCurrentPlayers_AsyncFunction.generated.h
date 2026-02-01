// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Functions/UserStats/SIK_GetNumberOfCurrentPlayers_AsyncFunction.h"

#ifdef STEAMINTEGRATIONKIT_SIK_GetNumberOfCurrentPlayers_AsyncFunction_generated_h
#error "SIK_GetNumberOfCurrentPlayers_AsyncFunction.generated.h already included, missing '#pragma once' in SIK_GetNumberOfCurrentPlayers_AsyncFunction.h"
#endif
#define STEAMINTEGRATIONKIT_SIK_GetNumberOfCurrentPlayers_AsyncFunction_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USIK_GetNumberOfCurrentPlayers_AsyncFunction;

// ********** Begin Delegate FOnNumberOfCurrentPlayersReceived *************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_GetNumberOfCurrentPlayers_AsyncFunction_h_10_DELEGATE \
STEAMINTEGRATIONKIT_API void FOnNumberOfCurrentPlayersReceived_DelegateWrapper(const FMulticastScriptDelegate& OnNumberOfCurrentPlayersReceived, int32 NumberOfCurrentPlayers);


// ********** End Delegate FOnNumberOfCurrentPlayersReceived ***************************************

// ********** Begin Class USIK_GetNumberOfCurrentPlayers_AsyncFunction *****************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_GetNumberOfCurrentPlayers_AsyncFunction_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetNumberOfCurrentPlayers);


struct Z_Construct_UClass_USIK_GetNumberOfCurrentPlayers_AsyncFunction_Statics;
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_GetNumberOfCurrentPlayers_AsyncFunction_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_GetNumberOfCurrentPlayers_AsyncFunction_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSIK_GetNumberOfCurrentPlayers_AsyncFunction(); \
	friend struct ::Z_Construct_UClass_USIK_GetNumberOfCurrentPlayers_AsyncFunction_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMINTEGRATIONKIT_API UClass* ::Z_Construct_UClass_USIK_GetNumberOfCurrentPlayers_AsyncFunction_NoRegister(); \
public: \
	DECLARE_CLASS2(USIK_GetNumberOfCurrentPlayers_AsyncFunction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamIntegrationKit"), Z_Construct_UClass_USIK_GetNumberOfCurrentPlayers_AsyncFunction_NoRegister) \
	DECLARE_SERIALIZER(USIK_GetNumberOfCurrentPlayers_AsyncFunction)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_GetNumberOfCurrentPlayers_AsyncFunction_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USIK_GetNumberOfCurrentPlayers_AsyncFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USIK_GetNumberOfCurrentPlayers_AsyncFunction(USIK_GetNumberOfCurrentPlayers_AsyncFunction&&) = delete; \
	USIK_GetNumberOfCurrentPlayers_AsyncFunction(const USIK_GetNumberOfCurrentPlayers_AsyncFunction&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USIK_GetNumberOfCurrentPlayers_AsyncFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USIK_GetNumberOfCurrentPlayers_AsyncFunction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USIK_GetNumberOfCurrentPlayers_AsyncFunction) \
	NO_API virtual ~USIK_GetNumberOfCurrentPlayers_AsyncFunction();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_GetNumberOfCurrentPlayers_AsyncFunction_h_12_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_GetNumberOfCurrentPlayers_AsyncFunction_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_GetNumberOfCurrentPlayers_AsyncFunction_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_GetNumberOfCurrentPlayers_AsyncFunction_h_15_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_GetNumberOfCurrentPlayers_AsyncFunction_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USIK_GetNumberOfCurrentPlayers_AsyncFunction;

// ********** End Class USIK_GetNumberOfCurrentPlayers_AsyncFunction *******************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_GetNumberOfCurrentPlayers_AsyncFunction_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
