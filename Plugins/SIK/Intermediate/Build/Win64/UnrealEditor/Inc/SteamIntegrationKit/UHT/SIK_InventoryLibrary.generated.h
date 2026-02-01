// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Functions/Inventory/SIK_InventoryLibrary.h"

#ifdef STEAMINTEGRATIONKIT_SIK_InventoryLibrary_generated_h
#error "SIK_InventoryLibrary.generated.h already included, missing '#pragma once' in SIK_InventoryLibrary.h"
#endif
#define STEAMINTEGRATIONKIT_SIK_InventoryLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDateTime;
struct FSIK_SteamId;
struct FSIK_SteamInventoryResult;
struct FSIK_SteamInventoryUpdateHandle;
struct FSIK_SteamItemDef;
struct FSIK_SteamItemDetails;
struct FSIK_SteamItemInstanceID;

// ********** Begin Class USIK_InventoryLibrary ****************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Inventory_SIK_InventoryLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetProperty); \
	DECLARE_FUNCTION(execRemoveProperty); \
	DECLARE_FUNCTION(execSubmitUpdateProperties); \
	DECLARE_FUNCTION(execStartUpdateProperties); \
	DECLARE_FUNCTION(execTriggerItemDrop); \
	DECLARE_FUNCTION(execTransferItemQuantity); \
	DECLARE_FUNCTION(execSerializeResult); \
	DECLARE_FUNCTION(execLoadItemDefinitions); \
	DECLARE_FUNCTION(execGrantPromoItems); \
	DECLARE_FUNCTION(execGetResultTimestamp); \
	DECLARE_FUNCTION(execGetResultStatus); \
	DECLARE_FUNCTION(execGetResultItems); \
	DECLARE_FUNCTION(execGetResultItemProperty); \
	DECLARE_FUNCTION(execGetNumItemsWithPrices); \
	DECLARE_FUNCTION(execGetItemsWithPrices); \
	DECLARE_FUNCTION(execGetItemPrice); \
	DECLARE_FUNCTION(execGetItemsByID); \
	DECLARE_FUNCTION(execGetItemDefinitionProperty); \
	DECLARE_FUNCTION(execGetItemDefinitionIDs); \
	DECLARE_FUNCTION(execGetEligiblePromoItemDefinitionIDs); \
	DECLARE_FUNCTION(execGetAllItems); \
	DECLARE_FUNCTION(execGenerateItems); \
	DECLARE_FUNCTION(execExchangeItems); \
	DECLARE_FUNCTION(execDestroyResult); \
	DECLARE_FUNCTION(execDeserializeResult); \
	DECLARE_FUNCTION(execConsumeItem); \
	DECLARE_FUNCTION(execCheckResultSteamID); \
	DECLARE_FUNCTION(execAddPromoItems); \
	DECLARE_FUNCTION(execAddPromoItem);


struct Z_Construct_UClass_USIK_InventoryLibrary_Statics;
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_InventoryLibrary_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Inventory_SIK_InventoryLibrary_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSIK_InventoryLibrary(); \
	friend struct ::Z_Construct_UClass_USIK_InventoryLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMINTEGRATIONKIT_API UClass* ::Z_Construct_UClass_USIK_InventoryLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(USIK_InventoryLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamIntegrationKit"), Z_Construct_UClass_USIK_InventoryLibrary_NoRegister) \
	DECLARE_SERIALIZER(USIK_InventoryLibrary)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Inventory_SIK_InventoryLibrary_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USIK_InventoryLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USIK_InventoryLibrary(USIK_InventoryLibrary&&) = delete; \
	USIK_InventoryLibrary(const USIK_InventoryLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USIK_InventoryLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USIK_InventoryLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USIK_InventoryLibrary) \
	NO_API virtual ~USIK_InventoryLibrary();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Inventory_SIK_InventoryLibrary_h_13_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Inventory_SIK_InventoryLibrary_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Inventory_SIK_InventoryLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Inventory_SIK_InventoryLibrary_h_16_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Inventory_SIK_InventoryLibrary_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USIK_InventoryLibrary;

// ********** End Class USIK_InventoryLibrary ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Inventory_SIK_InventoryLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
