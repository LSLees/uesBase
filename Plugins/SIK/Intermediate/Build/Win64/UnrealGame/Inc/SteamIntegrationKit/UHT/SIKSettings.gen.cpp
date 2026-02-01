// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Settings/SIKSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIKSettings() {}

// ********** Begin Cross Module References ********************************************************
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIKSettings();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIKSettings_NoRegister();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_BuildConfiguration();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ESIK_BuildConfiguration ***************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESIK_BuildConfiguration;
static UEnum* ESIK_BuildConfiguration_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESIK_BuildConfiguration.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESIK_BuildConfiguration.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamIntegrationKit_ESIK_BuildConfiguration, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("ESIK_BuildConfiguration"));
	}
	return Z_Registration_Info_UEnum_ESIK_BuildConfiguration.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<ESIK_BuildConfiguration>()
{
	return ESIK_BuildConfiguration_StaticEnum();
}
struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_BuildConfiguration_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Debug1.Comment", "/** Debug build. */" },
		{ "Debug1.DisplayName", "Debug" },
		{ "Debug1.Name", "Debug1" },
		{ "Debug1.ToolTip", "Debug build." },
		{ "DebugGame1.Comment", "/** DebugGame build. */" },
		{ "DebugGame1.DisplayName", "DebugGame" },
		{ "DebugGame1.Name", "DebugGame1" },
		{ "DebugGame1.ToolTip", "DebugGame build." },
		{ "Development1.Comment", "/** Development build. */" },
		{ "Development1.DisplayName", "Development" },
		{ "Development1.Name", "Development1" },
		{ "Development1.ToolTip", "Development build." },
		{ "ModuleRelativePath", "Settings/SIKSettings.h" },
		{ "Shipping1.Comment", "/** Shipping build. */" },
		{ "Shipping1.DisplayName", "Shipping" },
		{ "Shipping1.Name", "Shipping1" },
		{ "Shipping1.ToolTip", "Shipping build." },
		{ "Test1.Comment", "/** Test build. */" },
		{ "Test1.DisplayName", "Test" },
		{ "Test1.Name", "Test1" },
		{ "Test1.ToolTip", "Test build." },
		{ "UnknownBuild1.Comment", "/** Unknown build configuration. */" },
		{ "UnknownBuild1.DisplayName", "Unknown" },
		{ "UnknownBuild1.Name", "UnknownBuild1" },
		{ "UnknownBuild1.ToolTip", "Unknown build configuration." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "UnknownBuild1", (int64)UnknownBuild1 },
		{ "Debug1", (int64)Debug1 },
		{ "DebugGame1", (int64)DebugGame1 },
		{ "Development1", (int64)Development1 },
		{ "Shipping1", (int64)Shipping1 },
		{ "Test1", (int64)Test1 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_BuildConfiguration_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamIntegrationKit_ESIK_BuildConfiguration_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	"ESIK_BuildConfiguration",
	"ESIK_BuildConfiguration",
	Z_Construct_UEnum_SteamIntegrationKit_ESIK_BuildConfiguration_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_BuildConfiguration_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_BuildConfiguration_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamIntegrationKit_ESIK_BuildConfiguration_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_BuildConfiguration()
{
	if (!Z_Registration_Info_UEnum_ESIK_BuildConfiguration.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESIK_BuildConfiguration.InnerSingleton, Z_Construct_UEnum_SteamIntegrationKit_ESIK_BuildConfiguration_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESIK_BuildConfiguration.InnerSingleton;
}
// ********** End Enum ESIK_BuildConfiguration *****************************************************

// ********** Begin Class USIKSettings *************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIKSettings;
UClass* USIKSettings::GetPrivateStaticClass()
{
	using TClass = USIKSettings;
	if (!Z_Registration_Info_UClass_USIKSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIKSettings"),
			Z_Registration_Info_UClass_USIKSettings.InnerSingleton,
			StaticRegisterNativesUSIKSettings,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_USIKSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_USIKSettings_NoRegister()
{
	return USIKSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIKSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Steam Integration Kit" },
		{ "IncludePath", "Settings/SIKSettings.h" },
		{ "ModuleRelativePath", "Settings/SIKSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameVersion_MetaData[] = {
		{ "Category", "Basic Settings" },
		{ "ModuleRelativePath", "Settings/SIKSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamAppId_MetaData[] = {
		{ "Category", "Basic Settings" },
		{ "ModuleRelativePath", "Settings/SIKSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamDevAppId_MetaData[] = {
		{ "Category", "Basic Settings" },
		{ "ModuleRelativePath", "Settings/SIKSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRelaunchInSteam_MetaData[] = {
		{ "Category", "Basic Settings" },
		{ "ModuleRelativePath", "Settings/SIKSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameServerPort_MetaData[] = {
		{ "Category", "Basic Settings" },
		{ "ModuleRelativePath", "Settings/SIKSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_P2PConnectionTimeout_MetaData[] = {
		{ "Category", "Basic Settings" },
		{ "ModuleRelativePath", "Settings/SIKSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapsToCook_MetaData[] = {
		{ "Category", "Marketplace Version Settings | One Click Deploy" },
		{ "ModuleRelativePath", "Settings/SIKSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DepotIds_MetaData[] = {
		{ "Category", "Marketplace Version Settings | One Click Deploy" },
		{ "ModuleRelativePath", "Settings/SIKSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BranchName_MetaData[] = {
		{ "Category", "Marketplace Version Settings | One Click Deploy" },
		{ "Comment", "//Beta branch name to automatically set live after successful build, none if empty. Note that the 'default' branch can not be set live automatically. That must be done through the App Admin panel.\n" },
		{ "ModuleRelativePath", "Settings/SIKSettings.h" },
		{ "ToolTip", "Beta branch name to automatically set live after successful build, none if empty. Note that the 'default' branch can not be set live automatically. That must be done through the App Admin panel." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Username_MetaData[] = {
		{ "Category", "Marketplace Version Settings | Deployer Account Information" },
		{ "DisplayName", "Username" },
		{ "ModuleRelativePath", "Settings/SIKSettings.h" },
		{ "ToolTip", "Steam username. Will be stored in SIK_STEAM_USERNAME environment variable." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Password_MetaData[] = {
		{ "Category", "Marketplace Version Settings | Deployer Account Information" },
		{ "DisplayName", "Password" },
		{ "ModuleRelativePath", "Settings/SIKSettings.h" },
		{ "ToolTip", "Steam password. Will be stored in SIK_STEAM_PASSWORD environment variable." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSaveToSystem_MetaData[] = {
		{ "Category", "Marketplace Version Settings | Deployer Account Information" },
		{ "DisplayName", "\xe2\x98\x90 Save Credentials to System" },
		{ "ModuleRelativePath", "Settings/SIKSettings.h" },
		{ "ToolTip", "Click to save credentials" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerName_MetaData[] = {
		{ "Category", "Marketplace Version Settings | Server Settings" },
		{ "Comment", "//Valve recommends that this be a build ID, although it is typical to use your AppID (as a string), or a light product name without any extra symbols.\n" },
		{ "ModuleRelativePath", "Settings/SIKSettings.h" },
		{ "ToolTip", "Valve recommends that this be a build ID, although it is typical to use your AppID (as a string), or a light product name without any extra symbols." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerDescription_MetaData[] = {
		{ "Category", "Marketplace Version Settings | Server Settings" },
		{ "Comment", "//Valve recommends that you set this as the full name of your product.\n" },
		{ "ModuleRelativePath", "Settings/SIKSettings.h" },
		{ "ToolTip", "Valve recommends that you set this as the full name of your product." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerGameDir_MetaData[] = {
		{ "Category", "Marketplace Version Settings | Server Settings" },
		{ "Comment", "//This is usually the folder name of your game, and cannot contain spaces or symbols. It is not required for this to be a folder name at all, as long as it is a name without spaces or symbols.\n" },
		{ "ModuleRelativePath", "Settings/SIKSettings.h" },
		{ "ToolTip", "This is usually the folder name of your game, and cannot contain spaces or symbols. It is not required for this to be a folder name at all, as long as it is a name without spaces or symbols." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseEnvironmentVariables_MetaData[] = {
		{ "ModuleRelativePath", "Settings/SIKSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEngineInitialized_MetaData[] = {
		{ "ModuleRelativePath", "Settings/SIKSettings.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIKSettings constinit property declarations *****************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_GameVersion;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SteamAppId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SteamDevAppId;
	static void NewProp_bRelaunchInSteam_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRelaunchInSteam;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GameServerPort;
	static const UECodeGen_Private::FIntPropertyParams NewProp_P2PConnectionTimeout;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MapsToCook_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MapsToCook;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DepotIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DepotIds;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BranchName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Username;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Password;
#if WITH_EDITORONLY_DATA
	static void NewProp_bSaveToSystem_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSaveToSystem;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ServerName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ServerDescription;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ServerGameDir;
	static void NewProp_bUseEnvironmentVariables_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseEnvironmentVariables;
	static void NewProp_bEngineInitialized_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEngineInitialized;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USIKSettings constinit property declarations *******************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIKSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIKSettings_Statics

// ********** Begin Class USIKSettings Property Definitions ****************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USIKSettings_Statics::NewProp_GameVersion = { "GameVersion", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIKSettings, GameVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameVersion_MetaData), NewProp_GameVersion_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USIKSettings_Statics::NewProp_SteamAppId = { "SteamAppId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIKSettings, SteamAppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamAppId_MetaData), NewProp_SteamAppId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USIKSettings_Statics::NewProp_SteamDevAppId = { "SteamDevAppId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIKSettings, SteamDevAppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamDevAppId_MetaData), NewProp_SteamDevAppId_MetaData) };
void Z_Construct_UClass_USIKSettings_Statics::NewProp_bRelaunchInSteam_SetBit(void* Obj)
{
	((USIKSettings*)Obj)->bRelaunchInSteam = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USIKSettings_Statics::NewProp_bRelaunchInSteam = { "bRelaunchInSteam", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USIKSettings), &Z_Construct_UClass_USIKSettings_Statics::NewProp_bRelaunchInSteam_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRelaunchInSteam_MetaData), NewProp_bRelaunchInSteam_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USIKSettings_Statics::NewProp_GameServerPort = { "GameServerPort", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIKSettings, GameServerPort), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameServerPort_MetaData), NewProp_GameServerPort_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USIKSettings_Statics::NewProp_P2PConnectionTimeout = { "P2PConnectionTimeout", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIKSettings, P2PConnectionTimeout), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_P2PConnectionTimeout_MetaData), NewProp_P2PConnectionTimeout_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USIKSettings_Statics::NewProp_MapsToCook_Inner = { "MapsToCook", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USIKSettings_Statics::NewProp_MapsToCook = { "MapsToCook", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIKSettings, MapsToCook), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapsToCook_MetaData), NewProp_MapsToCook_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USIKSettings_Statics::NewProp_DepotIds_Inner = { "DepotIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USIKSettings_Statics::NewProp_DepotIds = { "DepotIds", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIKSettings, DepotIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DepotIds_MetaData), NewProp_DepotIds_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USIKSettings_Statics::NewProp_BranchName = { "BranchName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIKSettings, BranchName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BranchName_MetaData), NewProp_BranchName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USIKSettings_Statics::NewProp_Username = { "Username", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIKSettings, Username), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Username_MetaData), NewProp_Username_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USIKSettings_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIKSettings, Password), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Password_MetaData), NewProp_Password_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_USIKSettings_Statics::NewProp_bSaveToSystem_SetBit(void* Obj)
{
	((USIKSettings*)Obj)->bSaveToSystem = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USIKSettings_Statics::NewProp_bSaveToSystem = { "bSaveToSystem", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USIKSettings), &Z_Construct_UClass_USIKSettings_Statics::NewProp_bSaveToSystem_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSaveToSystem_MetaData), NewProp_bSaveToSystem_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USIKSettings_Statics::NewProp_ServerName = { "ServerName", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIKSettings, ServerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerName_MetaData), NewProp_ServerName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USIKSettings_Statics::NewProp_ServerDescription = { "ServerDescription", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIKSettings, ServerDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerDescription_MetaData), NewProp_ServerDescription_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USIKSettings_Statics::NewProp_ServerGameDir = { "ServerGameDir", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIKSettings, ServerGameDir), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerGameDir_MetaData), NewProp_ServerGameDir_MetaData) };
void Z_Construct_UClass_USIKSettings_Statics::NewProp_bUseEnvironmentVariables_SetBit(void* Obj)
{
	((USIKSettings*)Obj)->bUseEnvironmentVariables = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USIKSettings_Statics::NewProp_bUseEnvironmentVariables = { "bUseEnvironmentVariables", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USIKSettings), &Z_Construct_UClass_USIKSettings_Statics::NewProp_bUseEnvironmentVariables_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseEnvironmentVariables_MetaData), NewProp_bUseEnvironmentVariables_MetaData) };
void Z_Construct_UClass_USIKSettings_Statics::NewProp_bEngineInitialized_SetBit(void* Obj)
{
	((USIKSettings*)Obj)->bEngineInitialized = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USIKSettings_Statics::NewProp_bEngineInitialized = { "bEngineInitialized", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USIKSettings), &Z_Construct_UClass_USIKSettings_Statics::NewProp_bEngineInitialized_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEngineInitialized_MetaData), NewProp_bEngineInitialized_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USIKSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIKSettings_Statics::NewProp_GameVersion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIKSettings_Statics::NewProp_SteamAppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIKSettings_Statics::NewProp_SteamDevAppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIKSettings_Statics::NewProp_bRelaunchInSteam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIKSettings_Statics::NewProp_GameServerPort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIKSettings_Statics::NewProp_P2PConnectionTimeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIKSettings_Statics::NewProp_MapsToCook_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIKSettings_Statics::NewProp_MapsToCook,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIKSettings_Statics::NewProp_DepotIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIKSettings_Statics::NewProp_DepotIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIKSettings_Statics::NewProp_BranchName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIKSettings_Statics::NewProp_Username,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIKSettings_Statics::NewProp_Password,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIKSettings_Statics::NewProp_bSaveToSystem,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIKSettings_Statics::NewProp_ServerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIKSettings_Statics::NewProp_ServerDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIKSettings_Statics::NewProp_ServerGameDir,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIKSettings_Statics::NewProp_bUseEnvironmentVariables,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIKSettings_Statics::NewProp_bEngineInitialized,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIKSettings_Statics::PropPointers) < 2048);
// ********** End Class USIKSettings Property Definitions ******************************************
UObject* (*const Z_Construct_UClass_USIKSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIKSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIKSettings_Statics::ClassParams = {
	&USIKSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USIKSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USIKSettings_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIKSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_USIKSettings_Statics::Class_MetaDataParams)
};
void USIKSettings::StaticRegisterNativesUSIKSettings()
{
}
UClass* Z_Construct_UClass_USIKSettings()
{
	if (!Z_Registration_Info_UClass_USIKSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIKSettings.OuterSingleton, Z_Construct_UClass_USIKSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIKSettings.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIKSettings);
USIKSettings::~USIKSettings() {}
// ********** End Class USIKSettings ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Settings_SIKSettings_h__Script_SteamIntegrationKit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESIK_BuildConfiguration_StaticEnum, TEXT("ESIK_BuildConfiguration"), &Z_Registration_Info_UEnum_ESIK_BuildConfiguration, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 190335512U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIKSettings, USIKSettings::StaticClass, TEXT("USIKSettings"), &Z_Registration_Info_UClass_USIKSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIKSettings), 2951235477U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Settings_SIKSettings_h__Script_SteamIntegrationKit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Settings_SIKSettings_h__Script_SteamIntegrationKit_935169817{
	TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Settings_SIKSettings_h__Script_SteamIntegrationKit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Settings_SIKSettings_h__Script_SteamIntegrationKit_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Settings_SIKSettings_h__Script_SteamIntegrationKit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Settings_SIKSettings_h__Script_SteamIntegrationKit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
