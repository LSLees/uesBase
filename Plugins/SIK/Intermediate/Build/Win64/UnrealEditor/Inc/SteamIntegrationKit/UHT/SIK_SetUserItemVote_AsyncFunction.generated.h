// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Functions/UGC/SIK_SetUserItemVote_AsyncFunction.h"

#ifdef STEAMINTEGRATIONKIT_SIK_SetUserItemVote_AsyncFunction_generated_h
#error "SIK_SetUserItemVote_AsyncFunction.generated.h already included, missing '#pragma once' in SIK_SetUserItemVote_AsyncFunction.h"
#endif
#define STEAMINTEGRATIONKIT_SIK_SetUserItemVote_AsyncFunction_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USIK_SetUserItemVote_AsyncFunction;
struct FSIK_PublishedFileId;

// ********** Begin Delegate FOnSetUserItemVoteComplete ********************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_SetUserItemVote_AsyncFunction_h_9_DELEGATE \
STEAMINTEGRATIONKIT_API void FOnSetUserItemVoteComplete_DelegateWrapper(const FMulticastScriptDelegate& OnSetUserItemVoteComplete, FSIK_PublishedFileId PublishedFileID, bool bVoteUp, ESIK_Result Result);


// ********** End Delegate FOnSetUserItemVoteComplete **********************************************

// ********** Begin Class USIK_SetUserItemVote_AsyncFunction ***************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_SetUserItemVote_AsyncFunction_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetUserItemVote);


struct Z_Construct_UClass_USIK_SetUserItemVote_AsyncFunction_Statics;
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_SetUserItemVote_AsyncFunction_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_SetUserItemVote_AsyncFunction_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSIK_SetUserItemVote_AsyncFunction(); \
	friend struct ::Z_Construct_UClass_USIK_SetUserItemVote_AsyncFunction_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMINTEGRATIONKIT_API UClass* ::Z_Construct_UClass_USIK_SetUserItemVote_AsyncFunction_NoRegister(); \
public: \
	DECLARE_CLASS2(USIK_SetUserItemVote_AsyncFunction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamIntegrationKit"), Z_Construct_UClass_USIK_SetUserItemVote_AsyncFunction_NoRegister) \
	DECLARE_SERIALIZER(USIK_SetUserItemVote_AsyncFunction)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_SetUserItemVote_AsyncFunction_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USIK_SetUserItemVote_AsyncFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USIK_SetUserItemVote_AsyncFunction(USIK_SetUserItemVote_AsyncFunction&&) = delete; \
	USIK_SetUserItemVote_AsyncFunction(const USIK_SetUserItemVote_AsyncFunction&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USIK_SetUserItemVote_AsyncFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USIK_SetUserItemVote_AsyncFunction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USIK_SetUserItemVote_AsyncFunction) \
	NO_API virtual ~USIK_SetUserItemVote_AsyncFunction();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_SetUserItemVote_AsyncFunction_h_11_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_SetUserItemVote_AsyncFunction_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_SetUserItemVote_AsyncFunction_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_SetUserItemVote_AsyncFunction_h_14_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_SetUserItemVote_AsyncFunction_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USIK_SetUserItemVote_AsyncFunction;

// ********** End Class USIK_SetUserItemVote_AsyncFunction *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_SetUserItemVote_AsyncFunction_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
