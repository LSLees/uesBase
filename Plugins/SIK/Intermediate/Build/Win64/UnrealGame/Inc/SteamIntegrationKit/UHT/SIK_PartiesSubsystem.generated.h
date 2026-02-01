// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Functions/Parties/SIK_PartiesSubsystem.h"

#ifdef STEAMINTEGRATIONKIT_SIK_PartiesSubsystem_generated_h
#error "SIK_PartiesSubsystem.generated.h already included, missing '#pragma once' in SIK_PartiesSubsystem.h"
#endif
#define STEAMINTEGRATIONKIT_SIK_PartiesSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSIK_PartyBeaconID;
struct FSIK_SteamId;

// ********** Begin Delegate FSIK_JoinPartyDelegate ************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Parties_SIK_PartiesSubsystem_h_10_DELEGATE \
STEAMINTEGRATIONKIT_API void FSIK_JoinPartyDelegate_DelegateWrapper(const FMulticastScriptDelegate& SIK_JoinPartyDelegate, ESIK_Result Result, FSIK_PartyBeaconID PartyBeaconID, FSIK_SteamId BeaconOwner, const FString& ConnectString);


// ********** End Delegate FSIK_JoinPartyDelegate **************************************************

// ********** Begin Delegate FCreateBeaconDelegate1 ************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Parties_SIK_PartiesSubsystem_h_11_DELEGATE \
STEAMINTEGRATIONKIT_API void FCreateBeaconDelegate1_DelegateWrapper(const FMulticastScriptDelegate& CreateBeaconDelegate1, ESIK_Result Result, FSIK_PartyBeaconID BeaconID);


// ********** End Delegate FCreateBeaconDelegate1 **************************************************

// ********** Begin Delegate FReservationNotificationDelegate **************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Parties_SIK_PartiesSubsystem_h_12_DELEGATE \
STEAMINTEGRATIONKIT_API void FReservationNotificationDelegate_DelegateWrapper(const FMulticastScriptDelegate& ReservationNotificationDelegate, FSIK_PartyBeaconID BeaconID, FSIK_SteamId SteamID);


// ********** End Delegate FReservationNotificationDelegate ****************************************

// ********** Begin Delegate FChangeNumOpenSlotsDelegate1 ******************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Parties_SIK_PartiesSubsystem_h_13_DELEGATE \
STEAMINTEGRATIONKIT_API void FChangeNumOpenSlotsDelegate1_DelegateWrapper(const FMulticastScriptDelegate& ChangeNumOpenSlotsDelegate1, const ESIK_Result Result);


// ********** End Delegate FChangeNumOpenSlotsDelegate1 ********************************************

// ********** Begin Delegate FAvailableBeaconLocationsUpdatedDelegate ******************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Parties_SIK_PartiesSubsystem_h_14_DELEGATE \
STEAMINTEGRATIONKIT_API void FAvailableBeaconLocationsUpdatedDelegate_DelegateWrapper(const FMulticastScriptDelegate& AvailableBeaconLocationsUpdatedDelegate);


// ********** End Delegate FAvailableBeaconLocationsUpdatedDelegate ********************************

// ********** Begin Delegate FActiveBeaconsUpdatedDelegate *****************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Parties_SIK_PartiesSubsystem_h_15_DELEGATE \
STEAMINTEGRATIONKIT_API void FActiveBeaconsUpdatedDelegate_DelegateWrapper(const FMulticastScriptDelegate& ActiveBeaconsUpdatedDelegate);


// ********** End Delegate FActiveBeaconsUpdatedDelegate *******************************************

// ********** Begin Class USIK_PartiesSubsystem ****************************************************
struct Z_Construct_UClass_USIK_PartiesSubsystem_Statics;
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_PartiesSubsystem_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Parties_SIK_PartiesSubsystem_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSIK_PartiesSubsystem(); \
	friend struct ::Z_Construct_UClass_USIK_PartiesSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMINTEGRATIONKIT_API UClass* ::Z_Construct_UClass_USIK_PartiesSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(USIK_PartiesSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamIntegrationKit"), Z_Construct_UClass_USIK_PartiesSubsystem_NoRegister) \
	DECLARE_SERIALIZER(USIK_PartiesSubsystem)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Parties_SIK_PartiesSubsystem_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USIK_PartiesSubsystem(USIK_PartiesSubsystem&&) = delete; \
	USIK_PartiesSubsystem(const USIK_PartiesSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USIK_PartiesSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USIK_PartiesSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USIK_PartiesSubsystem)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Parties_SIK_PartiesSubsystem_h_16_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Parties_SIK_PartiesSubsystem_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Parties_SIK_PartiesSubsystem_h_19_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Parties_SIK_PartiesSubsystem_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USIK_PartiesSubsystem;

// ********** End Class USIK_PartiesSubsystem ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Parties_SIK_PartiesSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
