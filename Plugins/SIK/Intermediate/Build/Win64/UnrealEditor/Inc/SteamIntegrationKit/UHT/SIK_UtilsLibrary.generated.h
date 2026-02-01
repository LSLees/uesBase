// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Functions/Utils/SIK_UtilsLibrary.h"

#ifdef STEAMINTEGRATIONKIT_SIK_UtilsLibrary_generated_h
#error "SIK_UtilsLibrary.generated.h already included, missing '#pragma once' in SIK_UtilsLibrary.h"
#endif
#define STEAMINTEGRATIONKIT_SIK_UtilsLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class USaveGame;
struct FColor;
struct FSIK_AppId;
struct FSIK_SteamId;

// ********** Begin Class USIK_UtilsLibrary ********************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Utils_SIK_UtilsLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsValidJSON); \
	DECLARE_FUNCTION(execEscapeJSONString); \
	DECLARE_FUNCTION(execParseJSONValue); \
	DECLARE_FUNCTION(execBuildJSONObject); \
	DECLARE_FUNCTION(execJSONToStringArray); \
	DECLARE_FUNCTION(execStringArrayToJSON); \
	DECLARE_FUNCTION(execDoesFileExist); \
	DECLARE_FUNCTION(execWriteTextFile); \
	DECLARE_FUNCTION(execReadTextFile); \
	DECLARE_FUNCTION(execCheckForSteamLobbyInvite); \
	DECLARE_FUNCTION(execSetGameLauncherMode); \
	DECLARE_FUNCTION(execStartVrDashboard); \
	DECLARE_FUNCTION(execShowFloatingGamepadTextInput); \
	DECLARE_FUNCTION(execShowGamepadTextInput); \
	DECLARE_FUNCTION(execSetVRHeadsetStreamingEnabled); \
	DECLARE_FUNCTION(execSetOverlayNotificationPosition); \
	DECLARE_FUNCTION(execSetOverlayNotificationInset); \
	DECLARE_FUNCTION(execIsSteamRunningOnSteamDeck); \
	DECLARE_FUNCTION(execIsVRHeadsetStreamingEnabled); \
	DECLARE_FUNCTION(execIsSteamRunningInVR); \
	DECLARE_FUNCTION(execIsSteamInBigPictureMode); \
	DECLARE_FUNCTION(execSanitizeUGCTagsArray); \
	DECLARE_FUNCTION(execValidateUGCTagsArray); \
	DECLARE_FUNCTION(execSanitizeUGCTag); \
	DECLARE_FUNCTION(execIsValidUGCTag); \
	DECLARE_FUNCTION(execByteArrayToSaveGameObject); \
	DECLARE_FUNCTION(execSaveGameObjectToByteArray); \
	DECLARE_FUNCTION(execFilterText); \
	DECLARE_FUNCTION(execInitFilterText); \
	DECLARE_FUNCTION(execIsSteamChinaLauncher); \
	DECLARE_FUNCTION(execIsOverlayEnabled); \
	DECLARE_FUNCTION(execGetSteamUILanguage); \
	DECLARE_FUNCTION(execGetServerRealTime); \
	DECLARE_FUNCTION(execGetSecondsSinceComputerActive); \
	DECLARE_FUNCTION(execGetSecondsSinceAppActive); \
	DECLARE_FUNCTION(execGetIPCountry); \
	DECLARE_FUNCTION(execGetImageRGBA); \
	DECLARE_FUNCTION(execGetEnteredGamepadTextLength); \
	DECLARE_FUNCTION(execGetEnteredGamepadTextInput); \
	DECLARE_FUNCTION(execGetCurrentBatteryPower); \
	DECLARE_FUNCTION(execGetAppID); \
	DECLARE_FUNCTION(execOverlayNeedsPresent); \
	DECLARE_FUNCTION(execOpenSteamKeyboard); \
	DECLARE_FUNCTION(execIsControllerConnected);


struct Z_Construct_UClass_USIK_UtilsLibrary_Statics;
	struct Z_Construct_UFunction_USIK_UtilsLibrary_SerializeStructToJSON_Statics; \
	struct Z_Construct_UFunction_USIK_UtilsLibrary_DeserializeJSONToStruct_Statics; \
	struct Z_Construct_UFunction_USIK_UtilsLibrary_SerializeStructArrayToJSON_Statics; \
	struct Z_Construct_UFunction_USIK_UtilsLibrary_DeserializeJSONToStructArray_Statics; \
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_UtilsLibrary_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Utils_SIK_UtilsLibrary_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSIK_UtilsLibrary(); \
	friend struct ::Z_Construct_UClass_USIK_UtilsLibrary_Statics; \
	friend struct ::Z_Construct_UFunction_USIK_UtilsLibrary_SerializeStructToJSON_Statics; \
	friend struct ::Z_Construct_UFunction_USIK_UtilsLibrary_DeserializeJSONToStruct_Statics; \
	friend struct ::Z_Construct_UFunction_USIK_UtilsLibrary_SerializeStructArrayToJSON_Statics; \
	friend struct ::Z_Construct_UFunction_USIK_UtilsLibrary_DeserializeJSONToStructArray_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMINTEGRATIONKIT_API UClass* ::Z_Construct_UClass_USIK_UtilsLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(USIK_UtilsLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamIntegrationKit"), Z_Construct_UClass_USIK_UtilsLibrary_NoRegister) \
	DECLARE_SERIALIZER(USIK_UtilsLibrary)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Utils_SIK_UtilsLibrary_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USIK_UtilsLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USIK_UtilsLibrary(USIK_UtilsLibrary&&) = delete; \
	USIK_UtilsLibrary(const USIK_UtilsLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USIK_UtilsLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USIK_UtilsLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USIK_UtilsLibrary) \
	NO_API virtual ~USIK_UtilsLibrary();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Utils_SIK_UtilsLibrary_h_13_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Utils_SIK_UtilsLibrary_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Utils_SIK_UtilsLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Utils_SIK_UtilsLibrary_h_16_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Utils_SIK_UtilsLibrary_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USIK_UtilsLibrary;

// ********** End Class USIK_UtilsLibrary **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Utils_SIK_UtilsLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
