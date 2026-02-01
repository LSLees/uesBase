// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Functions/GameServer/SIK_GameServerSubsystem.h"

#ifdef STEAMINTEGRATIONKIT_SIK_GameServerSubsystem_generated_h
#error "SIK_GameServerSubsystem.generated.h already included, missing '#pragma once' in SIK_GameServerSubsystem.h"
#endif
#define STEAMINTEGRATIONKIT_SIK_GameServerSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSIK_SteamId;

// ********** Begin Delegate FAssociateWithClanResultDelegate **************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_GameServer_SIK_GameServerSubsystem_h_10_DELEGATE \
STEAMINTEGRATIONKIT_API void FAssociateWithClanResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& AssociateWithClanResultDelegate, ESIK_Result Result);


// ********** End Delegate FAssociateWithClanResultDelegate ****************************************

// ********** Begin Delegate FComputeNewPlayerCompatibilityResultDelegate **************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_GameServer_SIK_GameServerSubsystem_h_11_DELEGATE \
STEAMINTEGRATIONKIT_API void FComputeNewPlayerCompatibilityResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& ComputeNewPlayerCompatibilityResultDelegate, ESIK_Result Result, FSIK_SteamId SteamID, int32 PlayersThatDontLikeCandidate, int32 PlayersThatCandidateDoesntLike, int32 ClanPlayersThatDontLikeCandidate);


// ********** End Delegate FComputeNewPlayerCompatibilityResultDelegate ****************************

// ********** Begin Delegate FGSClientApproveDelegate **********************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_GameServer_SIK_GameServerSubsystem_h_12_DELEGATE \
STEAMINTEGRATIONKIT_API void FGSClientApproveDelegate_DelegateWrapper(const FMulticastScriptDelegate& GSClientApproveDelegate, FSIK_SteamId SteamID, FSIK_SteamId OwnerSteamID);


// ********** End Delegate FGSClientApproveDelegate ************************************************

// ********** Begin Delegate FGSClientDenyDelegate *************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_GameServer_SIK_GameServerSubsystem_h_13_DELEGATE \
STEAMINTEGRATIONKIT_API void FGSClientDenyDelegate_DelegateWrapper(const FMulticastScriptDelegate& GSClientDenyDelegate, FSIK_SteamId SteamID, ESIK_DenyReason Reason, const FString& OptionalText);


// ********** End Delegate FGSClientDenyDelegate ***************************************************

// ********** Begin Delegate FGSClientGroupStatusDelegate ******************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_GameServer_SIK_GameServerSubsystem_h_14_DELEGATE \
STEAMINTEGRATIONKIT_API void FGSClientGroupStatusDelegate_DelegateWrapper(const FMulticastScriptDelegate& GSClientGroupStatusDelegate, FSIK_SteamId SteamID, FSIK_SteamId GroupID, bool Member, bool Officer);


// ********** End Delegate FGSClientGroupStatusDelegate ********************************************

// ********** Begin Delegate FGSClientKickDelegate *************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_GameServer_SIK_GameServerSubsystem_h_15_DELEGATE \
STEAMINTEGRATIONKIT_API void FGSClientKickDelegate_DelegateWrapper(const FMulticastScriptDelegate& GSClientKickDelegate, FSIK_SteamId SteamID, ESIK_DenyReason Reason);


// ********** End Delegate FGSClientKickDelegate ***************************************************

// ********** Begin Delegate FGSPolicyResponseDelegate *********************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_GameServer_SIK_GameServerSubsystem_h_16_DELEGATE \
STEAMINTEGRATIONKIT_API void FGSPolicyResponseDelegate_DelegateWrapper(const FMulticastScriptDelegate& GSPolicyResponseDelegate, bool Secure);


// ********** End Delegate FGSPolicyResponseDelegate ***********************************************

// ********** Begin Class USIK_GameServerSubsystem *************************************************
struct Z_Construct_UClass_USIK_GameServerSubsystem_Statics;
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_GameServerSubsystem_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_GameServer_SIK_GameServerSubsystem_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSIK_GameServerSubsystem(); \
	friend struct ::Z_Construct_UClass_USIK_GameServerSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMINTEGRATIONKIT_API UClass* ::Z_Construct_UClass_USIK_GameServerSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(USIK_GameServerSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamIntegrationKit"), Z_Construct_UClass_USIK_GameServerSubsystem_NoRegister) \
	DECLARE_SERIALIZER(USIK_GameServerSubsystem)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_GameServer_SIK_GameServerSubsystem_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USIK_GameServerSubsystem(USIK_GameServerSubsystem&&) = delete; \
	USIK_GameServerSubsystem(const USIK_GameServerSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USIK_GameServerSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USIK_GameServerSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USIK_GameServerSubsystem)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_GameServer_SIK_GameServerSubsystem_h_18_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_GameServer_SIK_GameServerSubsystem_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_GameServer_SIK_GameServerSubsystem_h_21_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_GameServer_SIK_GameServerSubsystem_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USIK_GameServerSubsystem;

// ********** End Class USIK_GameServerSubsystem ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_GameServer_SIK_GameServerSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
