// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Functions/Sessions/SIK_FindSessions_AsyncFunction.h"

#ifdef STEAMINTEGRATIONKIT_SIK_FindSessions_AsyncFunction_generated_h
#error "SIK_FindSessions_AsyncFunction.generated.h already included, missing '#pragma once' in SIK_FindSessions_AsyncFunction.h"
#endif
#define STEAMINTEGRATIONKIT_SIK_FindSessions_AsyncFunction_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USIK_FindSessions_AsyncFunction;
enum class ESMatchType : uint8;
struct FSIKAttribute;
struct FSSessionFindStruct;

// ********** Begin Delegate FSIK_FindSession_Delegate *********************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_FindSessions_AsyncFunction_h_11_DELEGATE \
STEAMINTEGRATIONKIT_API void FSIK_FindSession_Delegate_DelegateWrapper(const FMulticastScriptDelegate& SIK_FindSession_Delegate, TArray<FSSessionFindStruct> const& SessionResults);


// ********** End Delegate FSIK_FindSession_Delegate ***********************************************

// ********** Begin Class USIK_FindSessions_AsyncFunction ******************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_FindSessions_AsyncFunction_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFindSIKSessions);


struct Z_Construct_UClass_USIK_FindSessions_AsyncFunction_Statics;
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_FindSessions_AsyncFunction_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_FindSessions_AsyncFunction_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSIK_FindSessions_AsyncFunction(); \
	friend struct ::Z_Construct_UClass_USIK_FindSessions_AsyncFunction_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMINTEGRATIONKIT_API UClass* ::Z_Construct_UClass_USIK_FindSessions_AsyncFunction_NoRegister(); \
public: \
	DECLARE_CLASS2(USIK_FindSessions_AsyncFunction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamIntegrationKit"), Z_Construct_UClass_USIK_FindSessions_AsyncFunction_NoRegister) \
	DECLARE_SERIALIZER(USIK_FindSessions_AsyncFunction)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_FindSessions_AsyncFunction_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USIK_FindSessions_AsyncFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USIK_FindSessions_AsyncFunction(USIK_FindSessions_AsyncFunction&&) = delete; \
	USIK_FindSessions_AsyncFunction(const USIK_FindSessions_AsyncFunction&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USIK_FindSessions_AsyncFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USIK_FindSessions_AsyncFunction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USIK_FindSessions_AsyncFunction) \
	NO_API virtual ~USIK_FindSessions_AsyncFunction();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_FindSessions_AsyncFunction_h_16_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_FindSessions_AsyncFunction_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_FindSessions_AsyncFunction_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_FindSessions_AsyncFunction_h_19_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_FindSessions_AsyncFunction_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USIK_FindSessions_AsyncFunction;

// ********** End Class USIK_FindSessions_AsyncFunction ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_FindSessions_AsyncFunction_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
