// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Functions/RemoteStorage/SIK_RemoteStorageSubsystem.h"

#ifdef STEAMINTEGRATIONKIT_SIK_RemoteStorageSubsystem_generated_h
#error "SIK_RemoteStorageSubsystem.generated.h already included, missing '#pragma once' in SIK_RemoteStorageSubsystem.h"
#endif
#define STEAMINTEGRATIONKIT_SIK_RemoteStorageSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSIK_AppId;
struct FSIK_PublishedFileId;
struct FSIK_SteamId;
struct FSIK_UGCHandle;

// ********** Begin Delegate FOnRemoteStorageDownloadUGCResult *************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_RemoteStorage_SIK_RemoteStorageSubsystem_h_11_DELEGATE \
STEAMINTEGRATIONKIT_API void FOnRemoteStorageDownloadUGCResult_DelegateWrapper(const FMulticastScriptDelegate& OnRemoteStorageDownloadUGCResult, ESIK_Result Result, FSIK_UGCHandle UGCHandle, int32 AppID, const FString& FileName, int32 Size, FSIK_SteamId SteamIDOwner);


// ********** End Delegate FOnRemoteStorageDownloadUGCResult ***************************************

// ********** Begin Delegate FOnRemoteStorageFileShareResult ***************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_RemoteStorage_SIK_RemoteStorageSubsystem_h_12_DELEGATE \
STEAMINTEGRATIONKIT_API void FOnRemoteStorageFileShareResult_DelegateWrapper(const FMulticastScriptDelegate& OnRemoteStorageFileShareResult, ESIK_Result Result, FSIK_UGCHandle FileHandle, const FString& FileName);


// ********** End Delegate FOnRemoteStorageFileShareResult *****************************************

// ********** Begin Delegate FOnRemoteStorageFileWriteAsyncComplete ********************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_RemoteStorage_SIK_RemoteStorageSubsystem_h_13_DELEGATE \
STEAMINTEGRATIONKIT_API void FOnRemoteStorageFileWriteAsyncComplete_DelegateWrapper(const FMulticastScriptDelegate& OnRemoteStorageFileWriteAsyncComplete, ESIK_Result Result);


// ********** End Delegate FOnRemoteStorageFileWriteAsyncComplete **********************************

// ********** Begin Delegate FOnRemoteStorageLocalFileChange ***************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_RemoteStorage_SIK_RemoteStorageSubsystem_h_14_DELEGATE \
STEAMINTEGRATIONKIT_API void FOnRemoteStorageLocalFileChange_DelegateWrapper(const FMulticastScriptDelegate& OnRemoteStorageLocalFileChange);


// ********** End Delegate FOnRemoteStorageLocalFileChange *****************************************

// ********** Begin Delegate FOnRemoteStoragePublishedFileSubscribedComplete ***********************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_RemoteStorage_SIK_RemoteStorageSubsystem_h_15_DELEGATE \
STEAMINTEGRATIONKIT_API void FOnRemoteStoragePublishedFileSubscribedComplete_DelegateWrapper(const FMulticastScriptDelegate& OnRemoteStoragePublishedFileSubscribedComplete, FSIK_PublishedFileId PublishedFileId, FSIK_AppId AppID);


// ********** End Delegate FOnRemoteStoragePublishedFileSubscribedComplete *************************

// ********** Begin Delegate FOnRemoteStoragePublishedFileUnsubscribedComplete *********************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_RemoteStorage_SIK_RemoteStorageSubsystem_h_16_DELEGATE \
STEAMINTEGRATIONKIT_API void FOnRemoteStoragePublishedFileUnsubscribedComplete_DelegateWrapper(const FMulticastScriptDelegate& OnRemoteStoragePublishedFileUnsubscribedComplete, FSIK_PublishedFileId PublishedFileId, FSIK_AppId AppID);


// ********** End Delegate FOnRemoteStoragePublishedFileUnsubscribedComplete ***********************

// ********** Begin Delegate FOnRemoteStorageSubscribePublishedFileResult **************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_RemoteStorage_SIK_RemoteStorageSubsystem_h_17_DELEGATE \
STEAMINTEGRATIONKIT_API void FOnRemoteStorageSubscribePublishedFileResult_DelegateWrapper(const FMulticastScriptDelegate& OnRemoteStorageSubscribePublishedFileResult, FSIK_PublishedFileId PublishedFileId, ESIK_Result Result);


// ********** End Delegate FOnRemoteStorageSubscribePublishedFileResult ****************************

// ********** Begin Delegate FOnRemoteStorageUnsubscribePublishedFileResult ************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_RemoteStorage_SIK_RemoteStorageSubsystem_h_18_DELEGATE \
STEAMINTEGRATIONKIT_API void FOnRemoteStorageUnsubscribePublishedFileResult_DelegateWrapper(const FMulticastScriptDelegate& OnRemoteStorageUnsubscribePublishedFileResult, FSIK_PublishedFileId PublishedFileId, ESIK_Result Result);


// ********** End Delegate FOnRemoteStorageUnsubscribePublishedFileResult **************************

// ********** Begin Class USIK_RemoteStorageSubsystem **********************************************
struct Z_Construct_UClass_USIK_RemoteStorageSubsystem_Statics;
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_RemoteStorageSubsystem_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_RemoteStorage_SIK_RemoteStorageSubsystem_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSIK_RemoteStorageSubsystem(); \
	friend struct ::Z_Construct_UClass_USIK_RemoteStorageSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMINTEGRATIONKIT_API UClass* ::Z_Construct_UClass_USIK_RemoteStorageSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(USIK_RemoteStorageSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamIntegrationKit"), Z_Construct_UClass_USIK_RemoteStorageSubsystem_NoRegister) \
	DECLARE_SERIALIZER(USIK_RemoteStorageSubsystem)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_RemoteStorage_SIK_RemoteStorageSubsystem_h_22_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USIK_RemoteStorageSubsystem(USIK_RemoteStorageSubsystem&&) = delete; \
	USIK_RemoteStorageSubsystem(const USIK_RemoteStorageSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USIK_RemoteStorageSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USIK_RemoteStorageSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USIK_RemoteStorageSubsystem)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_RemoteStorage_SIK_RemoteStorageSubsystem_h_19_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_RemoteStorage_SIK_RemoteStorageSubsystem_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_RemoteStorage_SIK_RemoteStorageSubsystem_h_22_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_RemoteStorage_SIK_RemoteStorageSubsystem_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USIK_RemoteStorageSubsystem;

// ********** End Class USIK_RemoteStorageSubsystem ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_RemoteStorage_SIK_RemoteStorageSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
