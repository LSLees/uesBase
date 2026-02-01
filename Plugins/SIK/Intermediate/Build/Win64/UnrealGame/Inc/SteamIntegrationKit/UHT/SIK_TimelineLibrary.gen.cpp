// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/Timeline/SIK_TimelineLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_TimelineLibrary() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_TimelineLibrary();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_TimelineLibrary_NoRegister();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_TimelineEventClipPriority();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_TimelineGameMode();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ESIK_TimelineGameMode *****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESIK_TimelineGameMode;
static UEnum* ESIK_TimelineGameMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESIK_TimelineGameMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESIK_TimelineGameMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamIntegrationKit_ESIK_TimelineGameMode, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("ESIK_TimelineGameMode"));
	}
	return Z_Registration_Info_UEnum_ESIK_TimelineGameMode.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<ESIK_TimelineGameMode>()
{
	return ESIK_TimelineGameMode_StaticEnum();
}
struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_TimelineGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ESIK_TimelineGameMode_Invalid.DisplayName", "Invalid" },
		{ "ESIK_TimelineGameMode_Invalid.Name", "ESIK_TimelineGameMode_Invalid" },
		{ "ESIK_TimelineGameMode_LoadingScreen.Comment", "//The player is waiting for a loading screen.\n" },
		{ "ESIK_TimelineGameMode_LoadingScreen.DisplayName", "Loading Screen" },
		{ "ESIK_TimelineGameMode_LoadingScreen.Name", "ESIK_TimelineGameMode_LoadingScreen" },
		{ "ESIK_TimelineGameMode_LoadingScreen.ToolTip", "The player is waiting for a loading screen." },
		{ "ESIK_TimelineGameMode_Menus.Comment", "//The player is in the game's main menu or a pause menu.\n" },
		{ "ESIK_TimelineGameMode_Menus.DisplayName", "Menus" },
		{ "ESIK_TimelineGameMode_Menus.Name", "ESIK_TimelineGameMode_Menus" },
		{ "ESIK_TimelineGameMode_Menus.ToolTip", "The player is in the game's main menu or a pause menu." },
		{ "ESIK_TimelineGameMode_Playing.Comment", "//The player is fully loaded into the game and playing.\n" },
		{ "ESIK_TimelineGameMode_Playing.DisplayName", "Playing" },
		{ "ESIK_TimelineGameMode_Playing.Name", "ESIK_TimelineGameMode_Playing" },
		{ "ESIK_TimelineGameMode_Playing.ToolTip", "The player is fully loaded into the game and playing." },
		{ "ESIK_TimelineGameMode_Staging.Comment", "//The player is in a multiplayer lobby.\n" },
		{ "ESIK_TimelineGameMode_Staging.DisplayName", "Staging" },
		{ "ESIK_TimelineGameMode_Staging.Name", "ESIK_TimelineGameMode_Staging" },
		{ "ESIK_TimelineGameMode_Staging.ToolTip", "The player is in a multiplayer lobby." },
		{ "ModuleRelativePath", "Functions/Timeline/SIK_TimelineLibrary.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESIK_TimelineGameMode_Invalid", (int64)ESIK_TimelineGameMode_Invalid },
		{ "ESIK_TimelineGameMode_Playing", (int64)ESIK_TimelineGameMode_Playing },
		{ "ESIK_TimelineGameMode_Staging", (int64)ESIK_TimelineGameMode_Staging },
		{ "ESIK_TimelineGameMode_Menus", (int64)ESIK_TimelineGameMode_Menus },
		{ "ESIK_TimelineGameMode_LoadingScreen", (int64)ESIK_TimelineGameMode_LoadingScreen },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_TimelineGameMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamIntegrationKit_ESIK_TimelineGameMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	"ESIK_TimelineGameMode",
	"ESIK_TimelineGameMode",
	Z_Construct_UEnum_SteamIntegrationKit_ESIK_TimelineGameMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_TimelineGameMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_TimelineGameMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamIntegrationKit_ESIK_TimelineGameMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_TimelineGameMode()
{
	if (!Z_Registration_Info_UEnum_ESIK_TimelineGameMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESIK_TimelineGameMode.InnerSingleton, Z_Construct_UEnum_SteamIntegrationKit_ESIK_TimelineGameMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESIK_TimelineGameMode.InnerSingleton;
}
// ********** End Enum ESIK_TimelineGameMode *******************************************************

// ********** Begin Enum ESIK_TimelineEventClipPriority ********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESIK_TimelineEventClipPriority;
static UEnum* ESIK_TimelineEventClipPriority_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESIK_TimelineEventClipPriority.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESIK_TimelineEventClipPriority.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamIntegrationKit_ESIK_TimelineEventClipPriority, (UObject*)Z_Construct_UPackage__Script_SteamIntegrationKit(), TEXT("ESIK_TimelineEventClipPriority"));
	}
	return Z_Registration_Info_UEnum_ESIK_TimelineEventClipPriority.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<ESIK_TimelineEventClipPriority>()
{
	return ESIK_TimelineEventClipPriority_StaticEnum();
}
struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_TimelineEventClipPriority_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ESIK_TimelineEventClipPriority_Featured.Comment", "//The player will be likely to want a clip around event, and those clips should be promoted more prominently than clips with the k_ETimelineEventClipPriority_Standard priority.\n" },
		{ "ESIK_TimelineEventClipPriority_Featured.DisplayName", "Featured" },
		{ "ESIK_TimelineEventClipPriority_Featured.Name", "ESIK_TimelineEventClipPriority_Featured" },
		{ "ESIK_TimelineEventClipPriority_Featured.ToolTip", "The player will be likely to want a clip around event, and those clips should be promoted more prominently than clips with the k_ETimelineEventClipPriority_Standard priority." },
		{ "ESIK_TimelineEventClipPriority_Invalid.DisplayName", "Invalid" },
		{ "ESIK_TimelineEventClipPriority_Invalid.Name", "ESIK_TimelineEventClipPriority_Invalid" },
		{ "ESIK_TimelineEventClipPriority_None.Comment", "//This event is not appropriate as a clip.\n" },
		{ "ESIK_TimelineEventClipPriority_None.DisplayName", "None" },
		{ "ESIK_TimelineEventClipPriority_None.Name", "ESIK_TimelineEventClipPriority_None" },
		{ "ESIK_TimelineEventClipPriority_None.ToolTip", "This event is not appropriate as a clip." },
		{ "ESIK_TimelineEventClipPriority_Standard.Comment", "//The user may want to make a clip around this event.\n" },
		{ "ESIK_TimelineEventClipPriority_Standard.DisplayName", "Standard" },
		{ "ESIK_TimelineEventClipPriority_Standard.Name", "ESIK_TimelineEventClipPriority_Standard" },
		{ "ESIK_TimelineEventClipPriority_Standard.ToolTip", "The user may want to make a clip around this event." },
		{ "ModuleRelativePath", "Functions/Timeline/SIK_TimelineLibrary.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESIK_TimelineEventClipPriority_Invalid", (int64)ESIK_TimelineEventClipPriority_Invalid },
		{ "ESIK_TimelineEventClipPriority_None", (int64)ESIK_TimelineEventClipPriority_None },
		{ "ESIK_TimelineEventClipPriority_Standard", (int64)ESIK_TimelineEventClipPriority_Standard },
		{ "ESIK_TimelineEventClipPriority_Featured", (int64)ESIK_TimelineEventClipPriority_Featured },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamIntegrationKit_ESIK_TimelineEventClipPriority_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamIntegrationKit_ESIK_TimelineEventClipPriority_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
	nullptr,
	"ESIK_TimelineEventClipPriority",
	"ESIK_TimelineEventClipPriority",
	Z_Construct_UEnum_SteamIntegrationKit_ESIK_TimelineEventClipPriority_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_TimelineEventClipPriority_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamIntegrationKit_ESIK_TimelineEventClipPriority_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamIntegrationKit_ESIK_TimelineEventClipPriority_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_TimelineEventClipPriority()
{
	if (!Z_Registration_Info_UEnum_ESIK_TimelineEventClipPriority.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESIK_TimelineEventClipPriority.InnerSingleton, Z_Construct_UEnum_SteamIntegrationKit_ESIK_TimelineEventClipPriority_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESIK_TimelineEventClipPriority.InnerSingleton;
}
// ********** End Enum ESIK_TimelineEventClipPriority **********************************************

// ********** Begin Class USIK_TimelineLibrary Function AddTimelineEvent ***************************
struct Z_Construct_UFunction_USIK_TimelineLibrary_AddTimelineEvent_Statics
{
	struct SIK_TimelineLibrary_eventAddTimelineEvent_Parms
	{
		FString pchIcon;
		FString pchTitle;
		FString pchDescription;
		int32 unPriority;
		float flStartOffsetSeconds;
		float flDurationSecondsm;
		TEnumAsByte<ESIK_TimelineEventClipPriority> ePossibleClip;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Timeline" },
		{ "Comment", "/*\n\x09*Use this to mark an event (A) on the Timeline. The event can be instantaneous or take some amount of time to complete, depending on the value passed in flDurationSeconds.\n\n\x09""Examples could include:\n\x09 *a boss battle\n\x09 *a cut scene\n\x09 *a large team fight\n\x09 *picking up a new weapon or ammo\n\x09 *scoring a goal\n\n\x09The game can nominate an event as being suitable for a clip by passing k_ETimelineEventClipPriority_Standard or k_ETimelineEventClipPriority_Featured to ePossibleClip. Players can make clips of their own at any point, but this lets the game suggest some options to Steam to make that process easier for players.\n\x09 */" },
		{ "ModuleRelativePath", "Functions/Timeline/SIK_TimelineLibrary.h" },
		{ "ToolTip", "*Use this to mark an event (A) on the Timeline. The event can be instantaneous or take some amount of time to complete, depending on the value passed in flDurationSeconds.\n\nExamples could include:\n *a boss battle\n *a cut scene\n *a large team fight\n *picking up a new weapon or ammo\n *scoring a goal\n\nThe game can nominate an event as being suitable for a clip by passing k_ETimelineEventClipPriority_Standard or k_ETimelineEventClipPriority_Featured to ePossibleClip. Players can make clips of their own at any point, but this lets the game suggest some options to Steam to make that process easier for players." },
	};
#endif // WITH_METADATA

// ********** Begin Function AddTimelineEvent constinit property declarations **********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_pchIcon;
	static const UECodeGen_Private::FStrPropertyParams NewProp_pchTitle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_pchDescription;
	static const UECodeGen_Private::FIntPropertyParams NewProp_unPriority;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_flStartOffsetSeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_flDurationSecondsm;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ePossibleClip;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddTimelineEvent constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddTimelineEvent Property Definitions *********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_TimelineLibrary_AddTimelineEvent_Statics::NewProp_pchIcon = { "pchIcon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_TimelineLibrary_eventAddTimelineEvent_Parms, pchIcon), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_TimelineLibrary_AddTimelineEvent_Statics::NewProp_pchTitle = { "pchTitle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_TimelineLibrary_eventAddTimelineEvent_Parms, pchTitle), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_TimelineLibrary_AddTimelineEvent_Statics::NewProp_pchDescription = { "pchDescription", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_TimelineLibrary_eventAddTimelineEvent_Parms, pchDescription), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_TimelineLibrary_AddTimelineEvent_Statics::NewProp_unPriority = { "unPriority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_TimelineLibrary_eventAddTimelineEvent_Parms, unPriority), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USIK_TimelineLibrary_AddTimelineEvent_Statics::NewProp_flStartOffsetSeconds = { "flStartOffsetSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_TimelineLibrary_eventAddTimelineEvent_Parms, flStartOffsetSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USIK_TimelineLibrary_AddTimelineEvent_Statics::NewProp_flDurationSecondsm = { "flDurationSecondsm", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_TimelineLibrary_eventAddTimelineEvent_Parms, flDurationSecondsm), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_TimelineLibrary_AddTimelineEvent_Statics::NewProp_ePossibleClip = { "ePossibleClip", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_TimelineLibrary_eventAddTimelineEvent_Parms, ePossibleClip), Z_Construct_UEnum_SteamIntegrationKit_ESIK_TimelineEventClipPriority, METADATA_PARAMS(0, nullptr) }; // 3949460038
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_TimelineLibrary_AddTimelineEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_TimelineLibrary_AddTimelineEvent_Statics::NewProp_pchIcon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_TimelineLibrary_AddTimelineEvent_Statics::NewProp_pchTitle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_TimelineLibrary_AddTimelineEvent_Statics::NewProp_pchDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_TimelineLibrary_AddTimelineEvent_Statics::NewProp_unPriority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_TimelineLibrary_AddTimelineEvent_Statics::NewProp_flStartOffsetSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_TimelineLibrary_AddTimelineEvent_Statics::NewProp_flDurationSecondsm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_TimelineLibrary_AddTimelineEvent_Statics::NewProp_ePossibleClip,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_TimelineLibrary_AddTimelineEvent_Statics::PropPointers) < 2048);
// ********** End Function AddTimelineEvent Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_TimelineLibrary_AddTimelineEvent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_TimelineLibrary, nullptr, "AddTimelineEvent", 	Z_Construct_UFunction_USIK_TimelineLibrary_AddTimelineEvent_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_TimelineLibrary_AddTimelineEvent_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_TimelineLibrary_AddTimelineEvent_Statics::SIK_TimelineLibrary_eventAddTimelineEvent_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_TimelineLibrary_AddTimelineEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_TimelineLibrary_AddTimelineEvent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_TimelineLibrary_AddTimelineEvent_Statics::SIK_TimelineLibrary_eventAddTimelineEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_TimelineLibrary_AddTimelineEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_TimelineLibrary_AddTimelineEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_TimelineLibrary::execAddTimelineEvent)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_pchIcon);
	P_GET_PROPERTY(FStrProperty,Z_Param_pchTitle);
	P_GET_PROPERTY(FStrProperty,Z_Param_pchDescription);
	P_GET_PROPERTY(FIntProperty,Z_Param_unPriority);
	P_GET_PROPERTY(FFloatProperty,Z_Param_flStartOffsetSeconds);
	P_GET_PROPERTY(FFloatProperty,Z_Param_flDurationSecondsm);
	P_GET_PROPERTY(FByteProperty,Z_Param_ePossibleClip);
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_TimelineLibrary::AddTimelineEvent(Z_Param_pchIcon,Z_Param_pchTitle,Z_Param_pchDescription,Z_Param_unPriority,Z_Param_flStartOffsetSeconds,Z_Param_flDurationSecondsm,ESIK_TimelineEventClipPriority(Z_Param_ePossibleClip));
	P_NATIVE_END;
}
// ********** End Class USIK_TimelineLibrary Function AddTimelineEvent *****************************

// ********** Begin Class USIK_TimelineLibrary Function ClearTimelineStateDescription **************
struct Z_Construct_UFunction_USIK_TimelineLibrary_ClearTimelineStateDescription_Statics
{
	struct SIK_TimelineLibrary_eventClearTimelineStateDescription_Parms
	{
		float flTimeDelta;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Timeline" },
		{ "Comment", "//Clears the previous set game state in the timeline.\n" },
		{ "ModuleRelativePath", "Functions/Timeline/SIK_TimelineLibrary.h" },
		{ "ToolTip", "Clears the previous set game state in the timeline." },
	};
#endif // WITH_METADATA

// ********** Begin Function ClearTimelineStateDescription constinit property declarations *********
	static const UECodeGen_Private::FFloatPropertyParams NewProp_flTimeDelta;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ClearTimelineStateDescription constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ClearTimelineStateDescription Property Definitions ********************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USIK_TimelineLibrary_ClearTimelineStateDescription_Statics::NewProp_flTimeDelta = { "flTimeDelta", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_TimelineLibrary_eventClearTimelineStateDescription_Parms, flTimeDelta), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_TimelineLibrary_ClearTimelineStateDescription_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_TimelineLibrary_ClearTimelineStateDescription_Statics::NewProp_flTimeDelta,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_TimelineLibrary_ClearTimelineStateDescription_Statics::PropPointers) < 2048);
// ********** End Function ClearTimelineStateDescription Property Definitions **********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_TimelineLibrary_ClearTimelineStateDescription_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_TimelineLibrary, nullptr, "ClearTimelineStateDescription", 	Z_Construct_UFunction_USIK_TimelineLibrary_ClearTimelineStateDescription_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_TimelineLibrary_ClearTimelineStateDescription_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_TimelineLibrary_ClearTimelineStateDescription_Statics::SIK_TimelineLibrary_eventClearTimelineStateDescription_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_TimelineLibrary_ClearTimelineStateDescription_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_TimelineLibrary_ClearTimelineStateDescription_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_TimelineLibrary_ClearTimelineStateDescription_Statics::SIK_TimelineLibrary_eventClearTimelineStateDescription_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_TimelineLibrary_ClearTimelineStateDescription()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_TimelineLibrary_ClearTimelineStateDescription_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_TimelineLibrary::execClearTimelineStateDescription)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_flTimeDelta);
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_TimelineLibrary::ClearTimelineStateDescription(Z_Param_flTimeDelta);
	P_NATIVE_END;
}
// ********** End Class USIK_TimelineLibrary Function ClearTimelineStateDescription ****************

// ********** Begin Class USIK_TimelineLibrary Function SetTimelineGameMode ************************
struct Z_Construct_UFunction_USIK_TimelineLibrary_SetTimelineGameMode_Statics
{
	struct SIK_TimelineLibrary_eventSetTimelineGameMode_Parms
	{
		TEnumAsByte<ESIK_TimelineGameMode> eMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Timeline" },
		{ "Comment", "//Changes the color of the timeline bar (C). See ETimelineGameMode for how to use each value.\n" },
		{ "ModuleRelativePath", "Functions/Timeline/SIK_TimelineLibrary.h" },
		{ "ToolTip", "Changes the color of the timeline bar (C). See ETimelineGameMode for how to use each value." },
	};
#endif // WITH_METADATA

// ********** Begin Function SetTimelineGameMode constinit property declarations *******************
	static const UECodeGen_Private::FBytePropertyParams NewProp_eMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetTimelineGameMode constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetTimelineGameMode Property Definitions ******************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_TimelineLibrary_SetTimelineGameMode_Statics::NewProp_eMode = { "eMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_TimelineLibrary_eventSetTimelineGameMode_Parms, eMode), Z_Construct_UEnum_SteamIntegrationKit_ESIK_TimelineGameMode, METADATA_PARAMS(0, nullptr) }; // 2590412245
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_TimelineLibrary_SetTimelineGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_TimelineLibrary_SetTimelineGameMode_Statics::NewProp_eMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_TimelineLibrary_SetTimelineGameMode_Statics::PropPointers) < 2048);
// ********** End Function SetTimelineGameMode Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_TimelineLibrary_SetTimelineGameMode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_TimelineLibrary, nullptr, "SetTimelineGameMode", 	Z_Construct_UFunction_USIK_TimelineLibrary_SetTimelineGameMode_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_TimelineLibrary_SetTimelineGameMode_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_TimelineLibrary_SetTimelineGameMode_Statics::SIK_TimelineLibrary_eventSetTimelineGameMode_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_TimelineLibrary_SetTimelineGameMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_TimelineLibrary_SetTimelineGameMode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_TimelineLibrary_SetTimelineGameMode_Statics::SIK_TimelineLibrary_eventSetTimelineGameMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_TimelineLibrary_SetTimelineGameMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_TimelineLibrary_SetTimelineGameMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_TimelineLibrary::execSetTimelineGameMode)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_eMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_TimelineLibrary::SetTimelineGameMode(ESIK_TimelineGameMode(Z_Param_eMode));
	P_NATIVE_END;
}
// ********** End Class USIK_TimelineLibrary Function SetTimelineGameMode **************************

// ********** Begin Class USIK_TimelineLibrary Function SetTimelineStateDescription ****************
struct Z_Construct_UFunction_USIK_TimelineLibrary_SetTimelineStateDescription_Statics
{
	struct SIK_TimelineLibrary_eventSetTimelineStateDescription_Parms
	{
		FString pchDescription;
		float flTimeDelta;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Timeline" },
		{ "Comment", "/*\n\x09Sets a description (B) for the current game state in the timeline. These help the user to find specific\n\x09moments in the timeline when saving clips. Setting a new state description replaces any previous\n\x09""description.\n\n\x09""Examples could include:\n\x09Where the user is in the world in a single player game\n\x09Which round is happening in a multiplayer game\n\x09The current score for a sports game\n\x09@param pchDescription A localized string in the language returned by SteamUtils()->GetSteamUILanguage()\n\x09@param flTimeDelta The time offset in seconds to apply to this state change. Negative times indicate an event that happened in the past.\n\x09*/" },
		{ "ModuleRelativePath", "Functions/Timeline/SIK_TimelineLibrary.h" },
		{ "ToolTip", "Sets a description (B) for the current game state in the timeline. These help the user to find specific\nmoments in the timeline when saving clips. Setting a new state description replaces any previous\ndescription.\n\nExamples could include:\nWhere the user is in the world in a single player game\nWhich round is happening in a multiplayer game\nThe current score for a sports game\n@param pchDescription A localized string in the language returned by SteamUtils()->GetSteamUILanguage()\n@param flTimeDelta The time offset in seconds to apply to this state change. Negative times indicate an event that happened in the past." },
	};
#endif // WITH_METADATA

// ********** Begin Function SetTimelineStateDescription constinit property declarations ***********
	static const UECodeGen_Private::FStrPropertyParams NewProp_pchDescription;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_flTimeDelta;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetTimelineStateDescription constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetTimelineStateDescription Property Definitions **********************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_TimelineLibrary_SetTimelineStateDescription_Statics::NewProp_pchDescription = { "pchDescription", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_TimelineLibrary_eventSetTimelineStateDescription_Parms, pchDescription), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USIK_TimelineLibrary_SetTimelineStateDescription_Statics::NewProp_flTimeDelta = { "flTimeDelta", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_TimelineLibrary_eventSetTimelineStateDescription_Parms, flTimeDelta), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_TimelineLibrary_SetTimelineStateDescription_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_TimelineLibrary_SetTimelineStateDescription_Statics::NewProp_pchDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_TimelineLibrary_SetTimelineStateDescription_Statics::NewProp_flTimeDelta,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_TimelineLibrary_SetTimelineStateDescription_Statics::PropPointers) < 2048);
// ********** End Function SetTimelineStateDescription Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_TimelineLibrary_SetTimelineStateDescription_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_TimelineLibrary, nullptr, "SetTimelineStateDescription", 	Z_Construct_UFunction_USIK_TimelineLibrary_SetTimelineStateDescription_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_TimelineLibrary_SetTimelineStateDescription_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_TimelineLibrary_SetTimelineStateDescription_Statics::SIK_TimelineLibrary_eventSetTimelineStateDescription_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_TimelineLibrary_SetTimelineStateDescription_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_TimelineLibrary_SetTimelineStateDescription_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_TimelineLibrary_SetTimelineStateDescription_Statics::SIK_TimelineLibrary_eventSetTimelineStateDescription_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_TimelineLibrary_SetTimelineStateDescription()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_TimelineLibrary_SetTimelineStateDescription_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_TimelineLibrary::execSetTimelineStateDescription)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_pchDescription);
	P_GET_PROPERTY(FFloatProperty,Z_Param_flTimeDelta);
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_TimelineLibrary::SetTimelineStateDescription(Z_Param_pchDescription,Z_Param_flTimeDelta);
	P_NATIVE_END;
}
// ********** End Class USIK_TimelineLibrary Function SetTimelineStateDescription ******************

// ********** Begin Class USIK_TimelineLibrary *****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_TimelineLibrary;
UClass* USIK_TimelineLibrary::GetPrivateStaticClass()
{
	using TClass = USIK_TimelineLibrary;
	if (!Z_Registration_Info_UClass_USIK_TimelineLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_TimelineLibrary"),
			Z_Registration_Info_UClass_USIK_TimelineLibrary.InnerSingleton,
			StaticRegisterNativesUSIK_TimelineLibrary,
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
	return Z_Registration_Info_UClass_USIK_TimelineLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_TimelineLibrary_NoRegister()
{
	return USIK_TimelineLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_TimelineLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Functions/Timeline/SIK_TimelineLibrary.h" },
		{ "ModuleRelativePath", "Functions/Timeline/SIK_TimelineLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_TimelineLibrary constinit property declarations *********************
// ********** End Class USIK_TimelineLibrary constinit property declarations ***********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AddTimelineEvent"), .Pointer = &USIK_TimelineLibrary::execAddTimelineEvent },
		{ .NameUTF8 = UTF8TEXT("ClearTimelineStateDescription"), .Pointer = &USIK_TimelineLibrary::execClearTimelineStateDescription },
		{ .NameUTF8 = UTF8TEXT("SetTimelineGameMode"), .Pointer = &USIK_TimelineLibrary::execSetTimelineGameMode },
		{ .NameUTF8 = UTF8TEXT("SetTimelineStateDescription"), .Pointer = &USIK_TimelineLibrary::execSetTimelineStateDescription },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_TimelineLibrary_AddTimelineEvent, "AddTimelineEvent" }, // 260988492
		{ &Z_Construct_UFunction_USIK_TimelineLibrary_ClearTimelineStateDescription, "ClearTimelineStateDescription" }, // 2036544117
		{ &Z_Construct_UFunction_USIK_TimelineLibrary_SetTimelineGameMode, "SetTimelineGameMode" }, // 462068179
		{ &Z_Construct_UFunction_USIK_TimelineLibrary_SetTimelineStateDescription, "SetTimelineStateDescription" }, // 2306670845
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_TimelineLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_TimelineLibrary_Statics
UObject* (*const Z_Construct_UClass_USIK_TimelineLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_TimelineLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_TimelineLibrary_Statics::ClassParams = {
	&USIK_TimelineLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_TimelineLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_TimelineLibrary_Statics::Class_MetaDataParams)
};
void USIK_TimelineLibrary::StaticRegisterNativesUSIK_TimelineLibrary()
{
	UClass* Class = USIK_TimelineLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_TimelineLibrary_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_TimelineLibrary()
{
	if (!Z_Registration_Info_UClass_USIK_TimelineLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_TimelineLibrary.OuterSingleton, Z_Construct_UClass_USIK_TimelineLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_TimelineLibrary.OuterSingleton;
}
USIK_TimelineLibrary::USIK_TimelineLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_TimelineLibrary);
USIK_TimelineLibrary::~USIK_TimelineLibrary() {}
// ********** End Class USIK_TimelineLibrary *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Timeline_SIK_TimelineLibrary_h__Script_SteamIntegrationKit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESIK_TimelineGameMode_StaticEnum, TEXT("ESIK_TimelineGameMode"), &Z_Registration_Info_UEnum_ESIK_TimelineGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2590412245U) },
		{ ESIK_TimelineEventClipPriority_StaticEnum, TEXT("ESIK_TimelineEventClipPriority"), &Z_Registration_Info_UEnum_ESIK_TimelineEventClipPriority, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3949460038U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_TimelineLibrary, USIK_TimelineLibrary::StaticClass, TEXT("USIK_TimelineLibrary"), &Z_Registration_Info_UClass_USIK_TimelineLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_TimelineLibrary), 426329205U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Timeline_SIK_TimelineLibrary_h__Script_SteamIntegrationKit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Timeline_SIK_TimelineLibrary_h__Script_SteamIntegrationKit_3824667527{
	TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Timeline_SIK_TimelineLibrary_h__Script_SteamIntegrationKit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Timeline_SIK_TimelineLibrary_h__Script_SteamIntegrationKit_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Timeline_SIK_TimelineLibrary_h__Script_SteamIntegrationKit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Timeline_SIK_TimelineLibrary_h__Script_SteamIntegrationKit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
