// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Functions/Inventory/SIK_InventorySubsystem.h"

#ifdef STEAMINTEGRATIONKIT_SIK_InventorySubsystem_generated_h
#error "SIK_InventorySubsystem.generated.h already included, missing '#pragma once' in SIK_InventorySubsystem.h"
#endif
#define STEAMINTEGRATIONKIT_SIK_InventorySubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSIK_SteamId;
struct FSIK_SteamInventoryResult;

// ********** Begin Delegate FSteamInventoryDefinitionUpdateDelegate *******************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Inventory_SIK_InventorySubsystem_h_10_DELEGATE \
STEAMINTEGRATIONKIT_API void FSteamInventoryDefinitionUpdateDelegate_DelegateWrapper(const FMulticastScriptDelegate& SteamInventoryDefinitionUpdateDelegate);


// ********** End Delegate FSteamInventoryDefinitionUpdateDelegate *********************************

// ********** Begin Delegate FSteamInventoryEligiblePromoItemDefIDsDelegate ************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Inventory_SIK_InventorySubsystem_h_11_DELEGATE \
STEAMINTEGRATIONKIT_API void FSteamInventoryEligiblePromoItemDefIDsDelegate_DelegateWrapper(const FMulticastScriptDelegate& SteamInventoryEligiblePromoItemDefIDsDelegate, ESIK_Result Result, FSIK_SteamId SteamID, int32 ItemDefs, bool CachedData);


// ********** End Delegate FSteamInventoryEligiblePromoItemDefIDsDelegate **************************

// ********** Begin Delegate FSteamInventoryFullUpdateDelegate *************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Inventory_SIK_InventorySubsystem_h_12_DELEGATE \
STEAMINTEGRATIONKIT_API void FSteamInventoryFullUpdateDelegate_DelegateWrapper(const FMulticastScriptDelegate& SteamInventoryFullUpdateDelegate, FSIK_SteamInventoryResult Result);


// ********** End Delegate FSteamInventoryFullUpdateDelegate ***************************************

// ********** Begin Delegate FSteamInventoryResultReadyDelegate ************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Inventory_SIK_InventorySubsystem_h_13_DELEGATE \
STEAMINTEGRATIONKIT_API void FSteamInventoryResultReadyDelegate_DelegateWrapper(const FMulticastScriptDelegate& SteamInventoryResultReadyDelegate, FSIK_SteamInventoryResult Result, ESIK_Result ResultType);


// ********** End Delegate FSteamInventoryResultReadyDelegate **************************************

// ********** Begin Delegate FSteamInventoryStartPurchaseResultDelegate ****************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Inventory_SIK_InventorySubsystem_h_14_DELEGATE \
STEAMINTEGRATIONKIT_API void FSteamInventoryStartPurchaseResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& SteamInventoryStartPurchaseResultDelegate, ESIK_Result Result, int64 OrderID, int64 TransID);


// ********** End Delegate FSteamInventoryStartPurchaseResultDelegate ******************************

// ********** Begin Delegate FSteamInventoryRequestPricesResultDelegate ****************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Inventory_SIK_InventorySubsystem_h_15_DELEGATE \
STEAMINTEGRATIONKIT_API void FSteamInventoryRequestPricesResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& SteamInventoryRequestPricesResultDelegate, ESIK_Result Result, const FString& Currency);


// ********** End Delegate FSteamInventoryRequestPricesResultDelegate ******************************

// ********** Begin Class USIK_InventorySubsystem **************************************************
struct Z_Construct_UClass_USIK_InventorySubsystem_Statics;
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_InventorySubsystem_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Inventory_SIK_InventorySubsystem_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSIK_InventorySubsystem(); \
	friend struct ::Z_Construct_UClass_USIK_InventorySubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMINTEGRATIONKIT_API UClass* ::Z_Construct_UClass_USIK_InventorySubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(USIK_InventorySubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamIntegrationKit"), Z_Construct_UClass_USIK_InventorySubsystem_NoRegister) \
	DECLARE_SERIALIZER(USIK_InventorySubsystem)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Inventory_SIK_InventorySubsystem_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USIK_InventorySubsystem(USIK_InventorySubsystem&&) = delete; \
	USIK_InventorySubsystem(const USIK_InventorySubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USIK_InventorySubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USIK_InventorySubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USIK_InventorySubsystem)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Inventory_SIK_InventorySubsystem_h_16_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Inventory_SIK_InventorySubsystem_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Inventory_SIK_InventorySubsystem_h_19_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Inventory_SIK_InventorySubsystem_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USIK_InventorySubsystem;

// ********** End Class USIK_InventorySubsystem ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Inventory_SIK_InventorySubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
