// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Functions/UGC/SIK_UGCSubsystem.h"

#ifdef STEAMINTEGRATIONKIT_SIK_UGCSubsystem_generated_h
#error "SIK_UGCSubsystem.generated.h already included, missing '#pragma once' in SIK_UGCSubsystem.h"
#endif
#define STEAMINTEGRATIONKIT_SIK_UGCSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSIK_AppId;
struct FSIK_PublishedFileId;
struct FSIK_UGCQueryHandle;

// ********** Begin Delegate FOnAddAppDependencyResult *********************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_UGCSubsystem_h_10_DELEGATE \
STEAMINTEGRATIONKIT_API void FOnAddAppDependencyResult_DelegateWrapper(const FMulticastScriptDelegate& OnAddAppDependencyResult, ESIK_Result Result, FSIK_PublishedFileId PublishedFileId, FSIK_AppId AppId);


// ********** End Delegate FOnAddAppDependencyResult ***********************************************

// ********** Begin Delegate FOnAddUGCDependencyResult *********************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_UGCSubsystem_h_11_DELEGATE \
STEAMINTEGRATIONKIT_API void FOnAddUGCDependencyResult_DelegateWrapper(const FMulticastScriptDelegate& OnAddUGCDependencyResult, ESIK_Result Result, FSIK_PublishedFileId PublishedFileId, FSIK_PublishedFileId ChildPublishedFileId);


// ********** End Delegate FOnAddUGCDependencyResult ***********************************************

// ********** Begin Delegate FOnCreateItemResult ***************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_UGCSubsystem_h_12_DELEGATE \
STEAMINTEGRATIONKIT_API void FOnCreateItemResult_DelegateWrapper(const FMulticastScriptDelegate& OnCreateItemResult, ESIK_Result Result, FSIK_PublishedFileId PublishedFileId, bool UserNeedsToAcceptWorkshopLegalAgreement);


// ********** End Delegate FOnCreateItemResult *****************************************************

// ********** Begin Delegate FOnDownloadItemResult *************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_UGCSubsystem_h_13_DELEGATE \
STEAMINTEGRATIONKIT_API void FOnDownloadItemResult_DelegateWrapper(const FMulticastScriptDelegate& OnDownloadItemResult, ESIK_Result Result, FSIK_PublishedFileId PublishedFileId, FSIK_AppId AppId);


// ********** End Delegate FOnDownloadItemResult ***************************************************

// ********** Begin Delegate FOnGetAppDependenciesResult *******************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_UGCSubsystem_h_14_DELEGATE \
STEAMINTEGRATIONKIT_API void FOnGetAppDependenciesResult_DelegateWrapper(const FMulticastScriptDelegate& OnGetAppDependenciesResult, ESIK_Result Result, FSIK_PublishedFileId PublishedFileId, const TArray<FSIK_AppId>& AppDependencies, int32 NumAppDependencies, int32 TotalNumAppDependencies);


// ********** End Delegate FOnGetAppDependenciesResult *********************************************

// ********** Begin Delegate FOnDeleteItemResult ***************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_UGCSubsystem_h_15_DELEGATE \
STEAMINTEGRATIONKIT_API void FOnDeleteItemResult_DelegateWrapper(const FMulticastScriptDelegate& OnDeleteItemResult, ESIK_Result Result, FSIK_PublishedFileId PublishedFileId);


// ********** End Delegate FOnDeleteItemResult *****************************************************

// ********** Begin Delegate FOnGetUserItemVoteResult **********************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_UGCSubsystem_h_16_DELEGATE \
STEAMINTEGRATIONKIT_API void FOnGetUserItemVoteResult_DelegateWrapper(const FMulticastScriptDelegate& OnGetUserItemVoteResult, ESIK_Result Result, FSIK_PublishedFileId PublishedFileId, bool VotedUp, bool VotedDown, bool VotedSkipper);


// ********** End Delegate FOnGetUserItemVoteResult ************************************************

// ********** Begin Delegate FOnItemInstalled ******************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_UGCSubsystem_h_17_DELEGATE \
STEAMINTEGRATIONKIT_API void FOnItemInstalled_DelegateWrapper(const FMulticastScriptDelegate& OnItemInstalled, FSIK_PublishedFileId PublishedFileId, FSIK_AppId AppId);


// ********** End Delegate FOnItemInstalled ********************************************************

// ********** Begin Delegate FOnRemoveAppDependencyResult ******************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_UGCSubsystem_h_18_DELEGATE \
STEAMINTEGRATIONKIT_API void FOnRemoveAppDependencyResult_DelegateWrapper(const FMulticastScriptDelegate& OnRemoveAppDependencyResult, ESIK_Result Result, FSIK_PublishedFileId PublishedFileId, FSIK_AppId AppId);


// ********** End Delegate FOnRemoveAppDependencyResult ********************************************

// ********** Begin Delegate FOnRemoveUGCDependencyResult ******************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_UGCSubsystem_h_19_DELEGATE \
STEAMINTEGRATIONKIT_API void FOnRemoveUGCDependencyResult_DelegateWrapper(const FMulticastScriptDelegate& OnRemoveUGCDependencyResult, ESIK_Result Result, FSIK_PublishedFileId PublishedFileId, FSIK_PublishedFileId ChildPublishedFileId);


// ********** End Delegate FOnRemoveUGCDependencyResult ********************************************

// ********** Begin Delegate FOnSetUserItemVoteResult **********************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_UGCSubsystem_h_20_DELEGATE \
STEAMINTEGRATIONKIT_API void FOnSetUserItemVoteResult_DelegateWrapper(const FMulticastScriptDelegate& OnSetUserItemVoteResult, ESIK_Result Result, FSIK_PublishedFileId PublishedFileId, bool VotedUp);


// ********** End Delegate FOnSetUserItemVoteResult ************************************************

// ********** Begin Delegate FOnStartPlaytimeTrackingResult ****************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_UGCSubsystem_h_21_DELEGATE \
STEAMINTEGRATIONKIT_API void FOnStartPlaytimeTrackingResult_DelegateWrapper(const FMulticastScriptDelegate& OnStartPlaytimeTrackingResult, ESIK_Result Result);


// ********** End Delegate FOnStartPlaytimeTrackingResult ******************************************

// ********** Begin Delegate FOnSteamUGCQueryCompleted *********************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_UGCSubsystem_h_22_DELEGATE \
STEAMINTEGRATIONKIT_API void FOnSteamUGCQueryCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnSteamUGCQueryCompleted, ESIK_Result Result, FSIK_UGCQueryHandle UGCQueryHandle, int32 NumResultsReturned, int32 TotalMatchingResults, bool bCachedData);


// ********** End Delegate FOnSteamUGCQueryCompleted ***********************************************

// ********** Begin Delegate FOnStopPlaytimeTrackingResult *****************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_UGCSubsystem_h_23_DELEGATE \
STEAMINTEGRATIONKIT_API void FOnStopPlaytimeTrackingResult_DelegateWrapper(const FMulticastScriptDelegate& OnStopPlaytimeTrackingResult, ESIK_Result Result);


// ********** End Delegate FOnStopPlaytimeTrackingResult *******************************************

// ********** Begin Delegate FOnSubmitItemUpdateResult *********************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_UGCSubsystem_h_24_DELEGATE \
STEAMINTEGRATIONKIT_API void FOnSubmitItemUpdateResult_DelegateWrapper(const FMulticastScriptDelegate& OnSubmitItemUpdateResult, ESIK_Result Result, FSIK_PublishedFileId PublishedFileId, bool bUserNeedsToAcceptWorkshopLegalAgreement);


// ********** End Delegate FOnSubmitItemUpdateResult ***********************************************

// ********** Begin Delegate FOnUserFavoriteItemsListChanged ***************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_UGCSubsystem_h_25_DELEGATE \
STEAMINTEGRATIONKIT_API void FOnUserFavoriteItemsListChanged_DelegateWrapper(const FMulticastScriptDelegate& OnUserFavoriteItemsListChanged, FSIK_PublishedFileId PublishedFileId, bool bWasAddRequest, ESIK_Result Result);


// ********** End Delegate FOnUserFavoriteItemsListChanged *****************************************

// ********** Begin Delegate FOnUserSubscribedItemsListChanged *************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_UGCSubsystem_h_26_DELEGATE \
STEAMINTEGRATIONKIT_API void FOnUserSubscribedItemsListChanged_DelegateWrapper(const FMulticastScriptDelegate& OnUserSubscribedItemsListChanged, FSIK_AppId AppId);


// ********** End Delegate FOnUserSubscribedItemsListChanged ***************************************

// ********** Begin Delegate FOnWorkshopEULAStatus *************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_UGCSubsystem_h_27_DELEGATE \
STEAMINTEGRATIONKIT_API void FOnWorkshopEULAStatus_DelegateWrapper(const FMulticastScriptDelegate& OnWorkshopEULAStatus, ESIK_Result Result, FSIK_AppId AppId, int32 Version, int32 ActionTime, bool bAccepted, bool bNeedsToAccept);


// ********** End Delegate FOnWorkshopEULAStatus ***************************************************

// ********** Begin Class USIK_UGCSubsystem ********************************************************
struct Z_Construct_UClass_USIK_UGCSubsystem_Statics;
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_UGCSubsystem_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_UGCSubsystem_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSIK_UGCSubsystem(); \
	friend struct ::Z_Construct_UClass_USIK_UGCSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMINTEGRATIONKIT_API UClass* ::Z_Construct_UClass_USIK_UGCSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(USIK_UGCSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamIntegrationKit"), Z_Construct_UClass_USIK_UGCSubsystem_NoRegister) \
	DECLARE_SERIALIZER(USIK_UGCSubsystem)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_UGCSubsystem_h_33_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USIK_UGCSubsystem(USIK_UGCSubsystem&&) = delete; \
	USIK_UGCSubsystem(const USIK_UGCSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USIK_UGCSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USIK_UGCSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USIK_UGCSubsystem)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_UGCSubsystem_h_30_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_UGCSubsystem_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_UGCSubsystem_h_33_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_UGCSubsystem_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USIK_UGCSubsystem;

// ********** End Class USIK_UGCSubsystem **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_UGCSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
