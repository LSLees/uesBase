// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Functions/Input/SIK_InputLibrary.h"

#ifdef STEAMINTEGRATIONKIT_SIK_InputLibrary_generated_h
#error "SIK_InputLibrary.generated.h already included, missing '#pragma once' in SIK_InputLibrary.h"
#endif
#define STEAMINTEGRATIONKIT_SIK_InputLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
struct FSIK_InputActionSetHandle;
struct FSIK_InputAnalogActionData;
struct FSIK_InputAnalogActionHandle;
struct FSIK_InputDigitalActionData;
struct FSIK_InputDigitalActionHandle;
struct FSIK_InputHandle;
struct FSIK_InputMotionData;
struct FSIK_ScePadTriggerEffectCommand;

// ********** Begin Class USIK_InputLibrary ********************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Input_SIK_InputLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetRemotePlaySessionID); \
	DECLARE_FUNCTION(execGetDeviceBindingRevision); \
	DECLARE_FUNCTION(execTranslateActionOrigin); \
	DECLARE_FUNCTION(execGetActionOriginFromXboxOrigin); \
	DECLARE_FUNCTION(execTriggerVibrationExtended); \
	DECLARE_FUNCTION(execTriggerVibration); \
	DECLARE_FUNCTION(execTriggerRepeatedHapticPulse); \
	DECLARE_FUNCTION(execTriggerHapticPulse); \
	DECLARE_FUNCTION(execStopAnalogActionMomentum); \
	DECLARE_FUNCTION(execShutdown); \
	DECLARE_FUNCTION(execShowBindingPanel); \
	DECLARE_FUNCTION(execSetLEDColor); \
	DECLARE_FUNCTION(execSetDualSenseTriggerEffect); \
	DECLARE_FUNCTION(execRunFrame); \
	DECLARE_FUNCTION(execInit); \
	DECLARE_FUNCTION(execGetStringForActionOrigin); \
	DECLARE_FUNCTION(execGetMotionData); \
	DECLARE_FUNCTION(execGetInputTypeForHandle); \
	DECLARE_FUNCTION(execGetGlyphForActionOrigin); \
	DECLARE_FUNCTION(execGetGamepadIndexForController); \
	DECLARE_FUNCTION(execGetDigitalActionOrigins); \
	DECLARE_FUNCTION(execGetDigitalActionHandle); \
	DECLARE_FUNCTION(execGetDigitalActionData); \
	DECLARE_FUNCTION(execGetCurrentActionSet); \
	DECLARE_FUNCTION(execGetControllerForGamepadIndex); \
	DECLARE_FUNCTION(execGetConnectedControllers); \
	DECLARE_FUNCTION(execGetAnalogActionOrigins); \
	DECLARE_FUNCTION(execGetAnalogActionHandle); \
	DECLARE_FUNCTION(execGetAnalogActionData); \
	DECLARE_FUNCTION(execGetActionSetHandle); \
	DECLARE_FUNCTION(execGetActiveActionSetLayers); \
	DECLARE_FUNCTION(execDeactivateAllActionSetLayers); \
	DECLARE_FUNCTION(execDeactivateActionSetLayer); \
	DECLARE_FUNCTION(execActivateActionSetLayer); \
	DECLARE_FUNCTION(execActivateActionSet);


struct Z_Construct_UClass_USIK_InputLibrary_Statics;
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_InputLibrary_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Input_SIK_InputLibrary_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSIK_InputLibrary(); \
	friend struct ::Z_Construct_UClass_USIK_InputLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMINTEGRATIONKIT_API UClass* ::Z_Construct_UClass_USIK_InputLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(USIK_InputLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamIntegrationKit"), Z_Construct_UClass_USIK_InputLibrary_NoRegister) \
	DECLARE_SERIALIZER(USIK_InputLibrary)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Input_SIK_InputLibrary_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USIK_InputLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USIK_InputLibrary(USIK_InputLibrary&&) = delete; \
	USIK_InputLibrary(const USIK_InputLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USIK_InputLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USIK_InputLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USIK_InputLibrary) \
	NO_API virtual ~USIK_InputLibrary();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Input_SIK_InputLibrary_h_13_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Input_SIK_InputLibrary_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Input_SIK_InputLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Input_SIK_InputLibrary_h_16_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Input_SIK_InputLibrary_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USIK_InputLibrary;

// ********** End Class USIK_InputLibrary **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Input_SIK_InputLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
