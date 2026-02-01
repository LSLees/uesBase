// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Functions/User/SIK_UserSubsystem.h"

#ifdef STEAMINTEGRATIONKIT_SIK_UserSubsystem_generated_h
#error "SIK_UserSubsystem.generated.h already included, missing '#pragma once' in SIK_UserSubsystem.h"
#endif
#define STEAMINTEGRATIONKIT_SIK_UserSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSIK_SteamId;

// ********** Begin Delegate FSIK_ClientGameServerDenyDelegate *************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_User_SIK_UserSubsystem_h_11_DELEGATE \
STEAMINTEGRATIONKIT_API void FSIK_ClientGameServerDenyDelegate_DelegateWrapper(const FMulticastScriptDelegate& SIK_ClientGameServerDenyDelegate, int32 AppID, const FString& GameServerIP, int32 GameServerPort, int32 Secure, int32 Reason);


// ********** End Delegate FSIK_ClientGameServerDenyDelegate ***************************************

// ********** Begin Delegate FSIK_DurationControlDelegate ******************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_User_SIK_UserSubsystem_h_12_DELEGATE \
STEAMINTEGRATIONKIT_API void FSIK_DurationControlDelegate_DelegateWrapper(const FMulticastScriptDelegate& SIK_DurationControlDelegate, int32 AppID);


// ********** End Delegate FSIK_DurationControlDelegate ********************************************

// ********** Begin Delegate FSIK_EncryptedAppTicketResponseDelegate *******************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_User_SIK_UserSubsystem_h_13_DELEGATE \
STEAMINTEGRATIONKIT_API void FSIK_EncryptedAppTicketResponseDelegate_DelegateWrapper(const FMulticastScriptDelegate& SIK_EncryptedAppTicketResponseDelegate, int32 Result);


// ********** End Delegate FSIK_EncryptedAppTicketResponseDelegate *********************************

// ********** Begin Delegate FSIK_GameWebCallbackDelegate ******************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_User_SIK_UserSubsystem_h_14_DELEGATE \
STEAMINTEGRATIONKIT_API void FSIK_GameWebCallbackDelegate_DelegateWrapper(const FMulticastScriptDelegate& SIK_GameWebCallbackDelegate, const FString& URL);


// ********** End Delegate FSIK_GameWebCallbackDelegate ********************************************

// ********** Begin Delegate FSIK_GetAuthSessionTicketResponseDelegate *****************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_User_SIK_UserSubsystem_h_15_DELEGATE \
STEAMINTEGRATIONKIT_API void FSIK_GetAuthSessionTicketResponseDelegate_DelegateWrapper(const FMulticastScriptDelegate& SIK_GetAuthSessionTicketResponseDelegate, int32 Result);


// ********** End Delegate FSIK_GetAuthSessionTicketResponseDelegate *******************************

// ********** Begin Delegate FSIK_GetTicketForWebApiResponseDelegate *******************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_User_SIK_UserSubsystem_h_16_DELEGATE \
STEAMINTEGRATIONKIT_API void FSIK_GetTicketForWebApiResponseDelegate_DelegateWrapper(const FMulticastScriptDelegate& SIK_GetTicketForWebApiResponseDelegate, int32 Result, int32 AuthTicket, TArray<uint8> const& TicketData, const FString& TicketAsStr);


// ********** End Delegate FSIK_GetTicketForWebApiResponseDelegate *********************************

// ********** Begin Delegate FSIK_IPCFailureDelegate ***********************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_User_SIK_UserSubsystem_h_17_DELEGATE \
STEAMINTEGRATIONKIT_API void FSIK_IPCFailureDelegate_DelegateWrapper(const FMulticastScriptDelegate& SIK_IPCFailureDelegate, int32 FailureType);


// ********** End Delegate FSIK_IPCFailureDelegate *************************************************

// ********** Begin Delegate FSIK_LicensesUpdatedDelegate ******************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_User_SIK_UserSubsystem_h_18_DELEGATE \
STEAMINTEGRATIONKIT_API void FSIK_LicensesUpdatedDelegate_DelegateWrapper(const FMulticastScriptDelegate& SIK_LicensesUpdatedDelegate);


// ********** End Delegate FSIK_LicensesUpdatedDelegate ********************************************

// ********** Begin Delegate FSIK_MicroTxnAuthorizationResponseDelegate ****************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_User_SIK_UserSubsystem_h_19_DELEGATE \
STEAMINTEGRATIONKIT_API void FSIK_MicroTxnAuthorizationResponseDelegate_DelegateWrapper(const FMulticastScriptDelegate& SIK_MicroTxnAuthorizationResponseDelegate, int32 AppID, int32 OrderID, bool Authorized);


// ********** End Delegate FSIK_MicroTxnAuthorizationResponseDelegate ******************************

// ********** Begin Delegate FSIK_SteamServerConnectFailureDelegate ********************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_User_SIK_UserSubsystem_h_20_DELEGATE \
STEAMINTEGRATIONKIT_API void FSIK_SteamServerConnectFailureDelegate_DelegateWrapper(const FMulticastScriptDelegate& SIK_SteamServerConnectFailureDelegate, int32 Result);


// ********** End Delegate FSIK_SteamServerConnectFailureDelegate **********************************

// ********** Begin Delegate FSIK_SteamServersConnectedDelegate ************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_User_SIK_UserSubsystem_h_21_DELEGATE \
STEAMINTEGRATIONKIT_API void FSIK_SteamServersConnectedDelegate_DelegateWrapper(const FMulticastScriptDelegate& SIK_SteamServersConnectedDelegate);


// ********** End Delegate FSIK_SteamServersConnectedDelegate **************************************

// ********** Begin Delegate FSIK_SteamServersDisconnectedDelegate *********************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_User_SIK_UserSubsystem_h_22_DELEGATE \
STEAMINTEGRATIONKIT_API void FSIK_SteamServersDisconnectedDelegate_DelegateWrapper(const FMulticastScriptDelegate& SIK_SteamServersDisconnectedDelegate);


// ********** End Delegate FSIK_SteamServersDisconnectedDelegate ***********************************

// ********** Begin Delegate FSIK_StoreAuthURLResponseDelegate *************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_User_SIK_UserSubsystem_h_23_DELEGATE \
STEAMINTEGRATIONKIT_API void FSIK_StoreAuthURLResponseDelegate_DelegateWrapper(const FMulticastScriptDelegate& SIK_StoreAuthURLResponseDelegate, const FString& URL);


// ********** End Delegate FSIK_StoreAuthURLResponseDelegate ***************************************

// ********** Begin Delegate FSIK_ValidateAuthTicketResponseDelegate *******************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_User_SIK_UserSubsystem_h_24_DELEGATE \
STEAMINTEGRATIONKIT_API void FSIK_ValidateAuthTicketResponseDelegate_DelegateWrapper(const FMulticastScriptDelegate& SIK_ValidateAuthTicketResponseDelegate, FSIK_SteamId SteamID, int32 AuthSessionResponse, FSIK_SteamId OwnerSteamID);


// ********** End Delegate FSIK_ValidateAuthTicketResponseDelegate *********************************

// ********** Begin Class USIK_UserSubsystem *******************************************************
struct Z_Construct_UClass_USIK_UserSubsystem_Statics;
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_UserSubsystem_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_User_SIK_UserSubsystem_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSIK_UserSubsystem(); \
	friend struct ::Z_Construct_UClass_USIK_UserSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMINTEGRATIONKIT_API UClass* ::Z_Construct_UClass_USIK_UserSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(USIK_UserSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamIntegrationKit"), Z_Construct_UClass_USIK_UserSubsystem_NoRegister) \
	DECLARE_SERIALIZER(USIK_UserSubsystem)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_User_SIK_UserSubsystem_h_29_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USIK_UserSubsystem(USIK_UserSubsystem&&) = delete; \
	USIK_UserSubsystem(const USIK_UserSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USIK_UserSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USIK_UserSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USIK_UserSubsystem)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_User_SIK_UserSubsystem_h_26_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_User_SIK_UserSubsystem_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_User_SIK_UserSubsystem_h_29_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_User_SIK_UserSubsystem_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USIK_UserSubsystem;

// ********** End Class USIK_UserSubsystem *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_User_SIK_UserSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
