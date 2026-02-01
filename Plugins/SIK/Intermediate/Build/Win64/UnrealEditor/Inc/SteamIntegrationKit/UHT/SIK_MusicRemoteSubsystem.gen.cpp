// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/MusicRemote/SIK_MusicRemoteSubsystem.h"
#include "Engine/GameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_MusicRemoteSubsystem() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_MusicRemoteSubsystem();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_MusicRemoteSubsystem_NoRegister();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerRemoteToFront__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerRemoteWillActivate__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerRemoteWillDeactivate__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerSelectsPlaylistEntry__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerSelectsQueueEntry__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsLooped__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsPause__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsPlay__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsPlayingRepeatStatus__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsPlayNext__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsPlayPrevious__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsShuffled__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsVolume__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWillQuit__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnMusicPlayerRemoteToFront *******************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerRemoteToFront__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/MusicRemote/SIK_MusicRemoteSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnMusicPlayerRemoteToFront constinit property declarations ***********
// ********** End Delegate FOnMusicPlayerRemoteToFront constinit property declarations *************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerRemoteToFront__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnMusicPlayerRemoteToFront__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerRemoteToFront__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerRemoteToFront__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerRemoteToFront__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerRemoteToFront__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnMusicPlayerRemoteToFront_DelegateWrapper(const FMulticastScriptDelegate& OnMusicPlayerRemoteToFront)
{
	OnMusicPlayerRemoteToFront.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnMusicPlayerRemoteToFront *********************************************

// ********** Begin Delegate FOnMusicPlayerRemoteWillActivate **************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerRemoteWillActivate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/MusicRemote/SIK_MusicRemoteSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnMusicPlayerRemoteWillActivate constinit property declarations ******
// ********** End Delegate FOnMusicPlayerRemoteWillActivate constinit property declarations ********
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerRemoteWillActivate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnMusicPlayerRemoteWillActivate__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerRemoteWillActivate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerRemoteWillActivate__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerRemoteWillActivate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerRemoteWillActivate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnMusicPlayerRemoteWillActivate_DelegateWrapper(const FMulticastScriptDelegate& OnMusicPlayerRemoteWillActivate)
{
	OnMusicPlayerRemoteWillActivate.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnMusicPlayerRemoteWillActivate ****************************************

// ********** Begin Delegate FOnMusicPlayerRemoteWillDeactivate ************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerRemoteWillDeactivate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/MusicRemote/SIK_MusicRemoteSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnMusicPlayerRemoteWillDeactivate constinit property declarations ****
// ********** End Delegate FOnMusicPlayerRemoteWillDeactivate constinit property declarations ******
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerRemoteWillDeactivate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnMusicPlayerRemoteWillDeactivate__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerRemoteWillDeactivate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerRemoteWillDeactivate__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerRemoteWillDeactivate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerRemoteWillDeactivate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnMusicPlayerRemoteWillDeactivate_DelegateWrapper(const FMulticastScriptDelegate& OnMusicPlayerRemoteWillDeactivate)
{
	OnMusicPlayerRemoteWillDeactivate.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnMusicPlayerRemoteWillDeactivate **************************************

// ********** Begin Delegate FOnMusicPlayerSelectsPlaylistEntry ************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerSelectsPlaylistEntry__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnMusicPlayerSelectsPlaylistEntry_Parms
	{
		int32 nID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/MusicRemote/SIK_MusicRemoteSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnMusicPlayerSelectsPlaylistEntry constinit property declarations ****
	static const UECodeGen_Private::FIntPropertyParams NewProp_nID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnMusicPlayerSelectsPlaylistEntry constinit property declarations ******
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnMusicPlayerSelectsPlaylistEntry Property Definitions ***************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerSelectsPlaylistEntry__DelegateSignature_Statics::NewProp_nID = { "nID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnMusicPlayerSelectsPlaylistEntry_Parms, nID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerSelectsPlaylistEntry__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerSelectsPlaylistEntry__DelegateSignature_Statics::NewProp_nID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerSelectsPlaylistEntry__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnMusicPlayerSelectsPlaylistEntry Property Definitions *****************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerSelectsPlaylistEntry__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnMusicPlayerSelectsPlaylistEntry__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerSelectsPlaylistEntry__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerSelectsPlaylistEntry__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerSelectsPlaylistEntry__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnMusicPlayerSelectsPlaylistEntry_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerSelectsPlaylistEntry__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerSelectsPlaylistEntry__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerSelectsPlaylistEntry__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnMusicPlayerSelectsPlaylistEntry_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerSelectsPlaylistEntry__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerSelectsPlaylistEntry__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnMusicPlayerSelectsPlaylistEntry_DelegateWrapper(const FMulticastScriptDelegate& OnMusicPlayerSelectsPlaylistEntry, int32 nID)
{
	struct _Script_SteamIntegrationKit_eventOnMusicPlayerSelectsPlaylistEntry_Parms
	{
		int32 nID;
	};
	_Script_SteamIntegrationKit_eventOnMusicPlayerSelectsPlaylistEntry_Parms Parms;
	Parms.nID=nID;
	OnMusicPlayerSelectsPlaylistEntry.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnMusicPlayerSelectsPlaylistEntry **************************************

// ********** Begin Delegate FOnMusicPlayerSelectsQueueEntry ***************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerSelectsQueueEntry__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnMusicPlayerSelectsQueueEntry_Parms
	{
		int32 nID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/MusicRemote/SIK_MusicRemoteSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnMusicPlayerSelectsQueueEntry constinit property declarations *******
	static const UECodeGen_Private::FIntPropertyParams NewProp_nID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnMusicPlayerSelectsQueueEntry constinit property declarations *********
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnMusicPlayerSelectsQueueEntry Property Definitions ******************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerSelectsQueueEntry__DelegateSignature_Statics::NewProp_nID = { "nID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnMusicPlayerSelectsQueueEntry_Parms, nID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerSelectsQueueEntry__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerSelectsQueueEntry__DelegateSignature_Statics::NewProp_nID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerSelectsQueueEntry__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnMusicPlayerSelectsQueueEntry Property Definitions ********************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerSelectsQueueEntry__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnMusicPlayerSelectsQueueEntry__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerSelectsQueueEntry__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerSelectsQueueEntry__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerSelectsQueueEntry__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnMusicPlayerSelectsQueueEntry_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerSelectsQueueEntry__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerSelectsQueueEntry__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerSelectsQueueEntry__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnMusicPlayerSelectsQueueEntry_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerSelectsQueueEntry__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerSelectsQueueEntry__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnMusicPlayerSelectsQueueEntry_DelegateWrapper(const FMulticastScriptDelegate& OnMusicPlayerSelectsQueueEntry, int32 nID)
{
	struct _Script_SteamIntegrationKit_eventOnMusicPlayerSelectsQueueEntry_Parms
	{
		int32 nID;
	};
	_Script_SteamIntegrationKit_eventOnMusicPlayerSelectsQueueEntry_Parms Parms;
	Parms.nID=nID;
	OnMusicPlayerSelectsQueueEntry.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnMusicPlayerSelectsQueueEntry *****************************************

// ********** Begin Delegate FOnMusicPlayerWantsLooped *********************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsLooped__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnMusicPlayerWantsLooped_Parms
	{
		bool bEnable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/MusicRemote/SIK_MusicRemoteSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnMusicPlayerWantsLooped constinit property declarations *************
	static void NewProp_bEnable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnMusicPlayerWantsLooped constinit property declarations ***************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnMusicPlayerWantsLooped Property Definitions ************************
void Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsLooped__DelegateSignature_Statics::NewProp_bEnable_SetBit(void* Obj)
{
	((_Script_SteamIntegrationKit_eventOnMusicPlayerWantsLooped_Parms*)Obj)->bEnable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsLooped__DelegateSignature_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamIntegrationKit_eventOnMusicPlayerWantsLooped_Parms), &Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsLooped__DelegateSignature_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsLooped__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsLooped__DelegateSignature_Statics::NewProp_bEnable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsLooped__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnMusicPlayerWantsLooped Property Definitions **************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsLooped__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnMusicPlayerWantsLooped__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsLooped__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsLooped__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsLooped__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnMusicPlayerWantsLooped_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsLooped__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsLooped__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsLooped__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnMusicPlayerWantsLooped_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsLooped__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsLooped__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnMusicPlayerWantsLooped_DelegateWrapper(const FMulticastScriptDelegate& OnMusicPlayerWantsLooped, bool bEnable)
{
	struct _Script_SteamIntegrationKit_eventOnMusicPlayerWantsLooped_Parms
	{
		bool bEnable;
	};
	_Script_SteamIntegrationKit_eventOnMusicPlayerWantsLooped_Parms Parms;
	Parms.bEnable=bEnable ? true : false;
	OnMusicPlayerWantsLooped.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnMusicPlayerWantsLooped ***********************************************

// ********** Begin Delegate FOnMusicPlayerWantsPause **********************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsPause__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/MusicRemote/SIK_MusicRemoteSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnMusicPlayerWantsPause constinit property declarations **************
// ********** End Delegate FOnMusicPlayerWantsPause constinit property declarations ****************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsPause__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnMusicPlayerWantsPause__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsPause__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsPause__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsPause__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsPause__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnMusicPlayerWantsPause_DelegateWrapper(const FMulticastScriptDelegate& OnMusicPlayerWantsPause)
{
	OnMusicPlayerWantsPause.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnMusicPlayerWantsPause ************************************************

// ********** Begin Delegate FOnMusicPlayerWantsPlayingRepeatStatus ********************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsPlayingRepeatStatus__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnMusicPlayerWantsPlayingRepeatStatus_Parms
	{
		int32 nStatus;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/MusicRemote/SIK_MusicRemoteSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnMusicPlayerWantsPlayingRepeatStatus constinit property declarations 
	static const UECodeGen_Private::FIntPropertyParams NewProp_nStatus;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnMusicPlayerWantsPlayingRepeatStatus constinit property declarations **
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnMusicPlayerWantsPlayingRepeatStatus Property Definitions ***********
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsPlayingRepeatStatus__DelegateSignature_Statics::NewProp_nStatus = { "nStatus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnMusicPlayerWantsPlayingRepeatStatus_Parms, nStatus), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsPlayingRepeatStatus__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsPlayingRepeatStatus__DelegateSignature_Statics::NewProp_nStatus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsPlayingRepeatStatus__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnMusicPlayerWantsPlayingRepeatStatus Property Definitions *************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsPlayingRepeatStatus__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnMusicPlayerWantsPlayingRepeatStatus__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsPlayingRepeatStatus__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsPlayingRepeatStatus__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsPlayingRepeatStatus__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnMusicPlayerWantsPlayingRepeatStatus_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsPlayingRepeatStatus__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsPlayingRepeatStatus__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsPlayingRepeatStatus__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnMusicPlayerWantsPlayingRepeatStatus_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsPlayingRepeatStatus__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsPlayingRepeatStatus__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnMusicPlayerWantsPlayingRepeatStatus_DelegateWrapper(const FMulticastScriptDelegate& OnMusicPlayerWantsPlayingRepeatStatus, int32 nStatus)
{
	struct _Script_SteamIntegrationKit_eventOnMusicPlayerWantsPlayingRepeatStatus_Parms
	{
		int32 nStatus;
	};
	_Script_SteamIntegrationKit_eventOnMusicPlayerWantsPlayingRepeatStatus_Parms Parms;
	Parms.nStatus=nStatus;
	OnMusicPlayerWantsPlayingRepeatStatus.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnMusicPlayerWantsPlayingRepeatStatus **********************************

// ********** Begin Delegate FOnMusicPlayerWantsPlayNext *******************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsPlayNext__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/MusicRemote/SIK_MusicRemoteSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnMusicPlayerWantsPlayNext constinit property declarations ***********
// ********** End Delegate FOnMusicPlayerWantsPlayNext constinit property declarations *************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsPlayNext__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnMusicPlayerWantsPlayNext__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsPlayNext__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsPlayNext__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsPlayNext__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsPlayNext__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnMusicPlayerWantsPlayNext_DelegateWrapper(const FMulticastScriptDelegate& OnMusicPlayerWantsPlayNext)
{
	OnMusicPlayerWantsPlayNext.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnMusicPlayerWantsPlayNext *********************************************

// ********** Begin Delegate FOnMusicPlayerWantsPlayPrevious ***************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsPlayPrevious__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/MusicRemote/SIK_MusicRemoteSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnMusicPlayerWantsPlayPrevious constinit property declarations *******
// ********** End Delegate FOnMusicPlayerWantsPlayPrevious constinit property declarations *********
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsPlayPrevious__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnMusicPlayerWantsPlayPrevious__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsPlayPrevious__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsPlayPrevious__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsPlayPrevious__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsPlayPrevious__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnMusicPlayerWantsPlayPrevious_DelegateWrapper(const FMulticastScriptDelegate& OnMusicPlayerWantsPlayPrevious)
{
	OnMusicPlayerWantsPlayPrevious.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnMusicPlayerWantsPlayPrevious *****************************************

// ********** Begin Delegate FOnMusicPlayerWantsPlay ***********************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsPlay__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/MusicRemote/SIK_MusicRemoteSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnMusicPlayerWantsPlay constinit property declarations ***************
// ********** End Delegate FOnMusicPlayerWantsPlay constinit property declarations *****************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsPlay__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnMusicPlayerWantsPlay__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsPlay__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsPlay__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsPlay__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsPlay__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnMusicPlayerWantsPlay_DelegateWrapper(const FMulticastScriptDelegate& OnMusicPlayerWantsPlay)
{
	OnMusicPlayerWantsPlay.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnMusicPlayerWantsPlay *************************************************

// ********** Begin Delegate FOnMusicPlayerWantsShuffled *******************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsShuffled__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnMusicPlayerWantsShuffled_Parms
	{
		bool bShuffled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/MusicRemote/SIK_MusicRemoteSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnMusicPlayerWantsShuffled constinit property declarations ***********
	static void NewProp_bShuffled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShuffled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnMusicPlayerWantsShuffled constinit property declarations *************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnMusicPlayerWantsShuffled Property Definitions **********************
void Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsShuffled__DelegateSignature_Statics::NewProp_bShuffled_SetBit(void* Obj)
{
	((_Script_SteamIntegrationKit_eventOnMusicPlayerWantsShuffled_Parms*)Obj)->bShuffled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsShuffled__DelegateSignature_Statics::NewProp_bShuffled = { "bShuffled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamIntegrationKit_eventOnMusicPlayerWantsShuffled_Parms), &Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsShuffled__DelegateSignature_Statics::NewProp_bShuffled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsShuffled__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsShuffled__DelegateSignature_Statics::NewProp_bShuffled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsShuffled__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnMusicPlayerWantsShuffled Property Definitions ************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsShuffled__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnMusicPlayerWantsShuffled__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsShuffled__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsShuffled__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsShuffled__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnMusicPlayerWantsShuffled_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsShuffled__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsShuffled__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsShuffled__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnMusicPlayerWantsShuffled_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsShuffled__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsShuffled__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnMusicPlayerWantsShuffled_DelegateWrapper(const FMulticastScriptDelegate& OnMusicPlayerWantsShuffled, bool bShuffled)
{
	struct _Script_SteamIntegrationKit_eventOnMusicPlayerWantsShuffled_Parms
	{
		bool bShuffled;
	};
	_Script_SteamIntegrationKit_eventOnMusicPlayerWantsShuffled_Parms Parms;
	Parms.bShuffled=bShuffled ? true : false;
	OnMusicPlayerWantsShuffled.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnMusicPlayerWantsShuffled *********************************************

// ********** Begin Delegate FOnMusicPlayerWantsVolume *********************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsVolume__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnMusicPlayerWantsVolume_Parms
	{
		float NewVolume;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/MusicRemote/SIK_MusicRemoteSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnMusicPlayerWantsVolume constinit property declarations *************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVolume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnMusicPlayerWantsVolume constinit property declarations ***************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnMusicPlayerWantsVolume Property Definitions ************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsVolume__DelegateSignature_Statics::NewProp_NewVolume = { "NewVolume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnMusicPlayerWantsVolume_Parms, NewVolume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsVolume__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsVolume__DelegateSignature_Statics::NewProp_NewVolume,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsVolume__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnMusicPlayerWantsVolume Property Definitions **************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsVolume__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnMusicPlayerWantsVolume__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsVolume__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsVolume__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsVolume__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnMusicPlayerWantsVolume_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsVolume__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsVolume__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsVolume__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnMusicPlayerWantsVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsVolume__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsVolume__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnMusicPlayerWantsVolume_DelegateWrapper(const FMulticastScriptDelegate& OnMusicPlayerWantsVolume, float NewVolume)
{
	struct _Script_SteamIntegrationKit_eventOnMusicPlayerWantsVolume_Parms
	{
		float NewVolume;
	};
	_Script_SteamIntegrationKit_eventOnMusicPlayerWantsVolume_Parms Parms;
	Parms.NewVolume=NewVolume;
	OnMusicPlayerWantsVolume.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnMusicPlayerWantsVolume ***********************************************

// ********** Begin Delegate FOnMusicPlayerWillQuit ************************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWillQuit__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/MusicRemote/SIK_MusicRemoteSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnMusicPlayerWillQuit constinit property declarations ****************
// ********** End Delegate FOnMusicPlayerWillQuit constinit property declarations ******************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWillQuit__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnMusicPlayerWillQuit__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWillQuit__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWillQuit__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWillQuit__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWillQuit__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnMusicPlayerWillQuit_DelegateWrapper(const FMulticastScriptDelegate& OnMusicPlayerWillQuit)
{
	OnMusicPlayerWillQuit.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnMusicPlayerWillQuit **************************************************

// ********** Begin Class USIK_MusicRemoteSubsystem ************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_MusicRemoteSubsystem;
UClass* USIK_MusicRemoteSubsystem::GetPrivateStaticClass()
{
	using TClass = USIK_MusicRemoteSubsystem;
	if (!Z_Registration_Info_UClass_USIK_MusicRemoteSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_MusicRemoteSubsystem"),
			Z_Registration_Info_UClass_USIK_MusicRemoteSubsystem.InnerSingleton,
			StaticRegisterNativesUSIK_MusicRemoteSubsystem,
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
	return Z_Registration_Info_UClass_USIK_MusicRemoteSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_MusicRemoteSubsystem_NoRegister()
{
	return USIK_MusicRemoteSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_MusicRemoteSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Functions/MusicRemote/SIK_MusicRemoteSubsystem.h" },
		{ "ModuleRelativePath", "Functions/MusicRemote/SIK_MusicRemoteSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMusicPlayerRemoteToFront_MetaData[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Music Remote" },
		{ "ModuleRelativePath", "Functions/MusicRemote/SIK_MusicRemoteSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMusicPlayerRemoteWillActivate_MetaData[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Music Remote" },
		{ "ModuleRelativePath", "Functions/MusicRemote/SIK_MusicRemoteSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMusicPlayerRemoteWillDeactivate_MetaData[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Music Remote" },
		{ "ModuleRelativePath", "Functions/MusicRemote/SIK_MusicRemoteSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMusicPlayerSelectsPlaylistEntry_MetaData[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Music Remote" },
		{ "ModuleRelativePath", "Functions/MusicRemote/SIK_MusicRemoteSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMusicPlayerSelectsQueueEntry_MetaData[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Music Remote" },
		{ "ModuleRelativePath", "Functions/MusicRemote/SIK_MusicRemoteSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMusicPlayerWantsLooped_MetaData[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Music Remote" },
		{ "ModuleRelativePath", "Functions/MusicRemote/SIK_MusicRemoteSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMusicPlayerWantsPause_MetaData[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Music Remote" },
		{ "ModuleRelativePath", "Functions/MusicRemote/SIK_MusicRemoteSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMusicPlayerWantsPlayingRepeatStatus_MetaData[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Music Remote" },
		{ "ModuleRelativePath", "Functions/MusicRemote/SIK_MusicRemoteSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMusicPlayerWantsPlayNext_MetaData[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Music Remote" },
		{ "ModuleRelativePath", "Functions/MusicRemote/SIK_MusicRemoteSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMusicPlayerWantsPlayPrevious_MetaData[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Music Remote" },
		{ "ModuleRelativePath", "Functions/MusicRemote/SIK_MusicRemoteSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMusicPlayerWantsPlay_MetaData[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Music Remote" },
		{ "ModuleRelativePath", "Functions/MusicRemote/SIK_MusicRemoteSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMusicPlayerWantsShuffled_MetaData[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Music Remote" },
		{ "ModuleRelativePath", "Functions/MusicRemote/SIK_MusicRemoteSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMusicPlayerWantsVolume_MetaData[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Music Remote" },
		{ "ModuleRelativePath", "Functions/MusicRemote/SIK_MusicRemoteSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMusicPlayerWillQuit_MetaData[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Music Remote" },
		{ "ModuleRelativePath", "Functions/MusicRemote/SIK_MusicRemoteSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_MusicRemoteSubsystem constinit property declarations ****************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMusicPlayerRemoteToFront;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMusicPlayerRemoteWillActivate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMusicPlayerRemoteWillDeactivate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMusicPlayerSelectsPlaylistEntry;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMusicPlayerSelectsQueueEntry;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMusicPlayerWantsLooped;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMusicPlayerWantsPause;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMusicPlayerWantsPlayingRepeatStatus;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMusicPlayerWantsPlayNext;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMusicPlayerWantsPlayPrevious;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMusicPlayerWantsPlay;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMusicPlayerWantsShuffled;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMusicPlayerWantsVolume;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMusicPlayerWillQuit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USIK_MusicRemoteSubsystem constinit property declarations ******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_MusicRemoteSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_MusicRemoteSubsystem_Statics

// ********** Begin Class USIK_MusicRemoteSubsystem Property Definitions ***************************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_MusicRemoteSubsystem_Statics::NewProp_OnMusicPlayerRemoteToFront = { "OnMusicPlayerRemoteToFront", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_MusicRemoteSubsystem, OnMusicPlayerRemoteToFront), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerRemoteToFront__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMusicPlayerRemoteToFront_MetaData), NewProp_OnMusicPlayerRemoteToFront_MetaData) }; // 3863293052
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_MusicRemoteSubsystem_Statics::NewProp_OnMusicPlayerRemoteWillActivate = { "OnMusicPlayerRemoteWillActivate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_MusicRemoteSubsystem, OnMusicPlayerRemoteWillActivate), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerRemoteWillActivate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMusicPlayerRemoteWillActivate_MetaData), NewProp_OnMusicPlayerRemoteWillActivate_MetaData) }; // 83259854
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_MusicRemoteSubsystem_Statics::NewProp_OnMusicPlayerRemoteWillDeactivate = { "OnMusicPlayerRemoteWillDeactivate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_MusicRemoteSubsystem, OnMusicPlayerRemoteWillDeactivate), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerRemoteWillDeactivate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMusicPlayerRemoteWillDeactivate_MetaData), NewProp_OnMusicPlayerRemoteWillDeactivate_MetaData) }; // 3096345716
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_MusicRemoteSubsystem_Statics::NewProp_OnMusicPlayerSelectsPlaylistEntry = { "OnMusicPlayerSelectsPlaylistEntry", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_MusicRemoteSubsystem, OnMusicPlayerSelectsPlaylistEntry), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerSelectsPlaylistEntry__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMusicPlayerSelectsPlaylistEntry_MetaData), NewProp_OnMusicPlayerSelectsPlaylistEntry_MetaData) }; // 2051685602
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_MusicRemoteSubsystem_Statics::NewProp_OnMusicPlayerSelectsQueueEntry = { "OnMusicPlayerSelectsQueueEntry", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_MusicRemoteSubsystem, OnMusicPlayerSelectsQueueEntry), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerSelectsQueueEntry__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMusicPlayerSelectsQueueEntry_MetaData), NewProp_OnMusicPlayerSelectsQueueEntry_MetaData) }; // 3316565094
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_MusicRemoteSubsystem_Statics::NewProp_OnMusicPlayerWantsLooped = { "OnMusicPlayerWantsLooped", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_MusicRemoteSubsystem, OnMusicPlayerWantsLooped), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsLooped__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMusicPlayerWantsLooped_MetaData), NewProp_OnMusicPlayerWantsLooped_MetaData) }; // 819749342
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_MusicRemoteSubsystem_Statics::NewProp_OnMusicPlayerWantsPause = { "OnMusicPlayerWantsPause", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_MusicRemoteSubsystem, OnMusicPlayerWantsPause), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsPause__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMusicPlayerWantsPause_MetaData), NewProp_OnMusicPlayerWantsPause_MetaData) }; // 2716913764
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_MusicRemoteSubsystem_Statics::NewProp_OnMusicPlayerWantsPlayingRepeatStatus = { "OnMusicPlayerWantsPlayingRepeatStatus", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_MusicRemoteSubsystem, OnMusicPlayerWantsPlayingRepeatStatus), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsPlayingRepeatStatus__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMusicPlayerWantsPlayingRepeatStatus_MetaData), NewProp_OnMusicPlayerWantsPlayingRepeatStatus_MetaData) }; // 3485433204
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_MusicRemoteSubsystem_Statics::NewProp_OnMusicPlayerWantsPlayNext = { "OnMusicPlayerWantsPlayNext", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_MusicRemoteSubsystem, OnMusicPlayerWantsPlayNext), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsPlayNext__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMusicPlayerWantsPlayNext_MetaData), NewProp_OnMusicPlayerWantsPlayNext_MetaData) }; // 3849899834
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_MusicRemoteSubsystem_Statics::NewProp_OnMusicPlayerWantsPlayPrevious = { "OnMusicPlayerWantsPlayPrevious", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_MusicRemoteSubsystem, OnMusicPlayerWantsPlayPrevious), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsPlayPrevious__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMusicPlayerWantsPlayPrevious_MetaData), NewProp_OnMusicPlayerWantsPlayPrevious_MetaData) }; // 3637109712
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_MusicRemoteSubsystem_Statics::NewProp_OnMusicPlayerWantsPlay = { "OnMusicPlayerWantsPlay", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_MusicRemoteSubsystem, OnMusicPlayerWantsPlay), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsPlay__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMusicPlayerWantsPlay_MetaData), NewProp_OnMusicPlayerWantsPlay_MetaData) }; // 1712973138
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_MusicRemoteSubsystem_Statics::NewProp_OnMusicPlayerWantsShuffled = { "OnMusicPlayerWantsShuffled", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_MusicRemoteSubsystem, OnMusicPlayerWantsShuffled), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsShuffled__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMusicPlayerWantsShuffled_MetaData), NewProp_OnMusicPlayerWantsShuffled_MetaData) }; // 3295336102
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_MusicRemoteSubsystem_Statics::NewProp_OnMusicPlayerWantsVolume = { "OnMusicPlayerWantsVolume", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_MusicRemoteSubsystem, OnMusicPlayerWantsVolume), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWantsVolume__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMusicPlayerWantsVolume_MetaData), NewProp_OnMusicPlayerWantsVolume_MetaData) }; // 3573860620
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_MusicRemoteSubsystem_Statics::NewProp_OnMusicPlayerWillQuit = { "OnMusicPlayerWillQuit", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_MusicRemoteSubsystem, OnMusicPlayerWillQuit), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnMusicPlayerWillQuit__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMusicPlayerWillQuit_MetaData), NewProp_OnMusicPlayerWillQuit_MetaData) }; // 344417490
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USIK_MusicRemoteSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_MusicRemoteSubsystem_Statics::NewProp_OnMusicPlayerRemoteToFront,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_MusicRemoteSubsystem_Statics::NewProp_OnMusicPlayerRemoteWillActivate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_MusicRemoteSubsystem_Statics::NewProp_OnMusicPlayerRemoteWillDeactivate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_MusicRemoteSubsystem_Statics::NewProp_OnMusicPlayerSelectsPlaylistEntry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_MusicRemoteSubsystem_Statics::NewProp_OnMusicPlayerSelectsQueueEntry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_MusicRemoteSubsystem_Statics::NewProp_OnMusicPlayerWantsLooped,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_MusicRemoteSubsystem_Statics::NewProp_OnMusicPlayerWantsPause,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_MusicRemoteSubsystem_Statics::NewProp_OnMusicPlayerWantsPlayingRepeatStatus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_MusicRemoteSubsystem_Statics::NewProp_OnMusicPlayerWantsPlayNext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_MusicRemoteSubsystem_Statics::NewProp_OnMusicPlayerWantsPlayPrevious,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_MusicRemoteSubsystem_Statics::NewProp_OnMusicPlayerWantsPlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_MusicRemoteSubsystem_Statics::NewProp_OnMusicPlayerWantsShuffled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_MusicRemoteSubsystem_Statics::NewProp_OnMusicPlayerWantsVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_MusicRemoteSubsystem_Statics::NewProp_OnMusicPlayerWillQuit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_MusicRemoteSubsystem_Statics::PropPointers) < 2048);
// ********** End Class USIK_MusicRemoteSubsystem Property Definitions *****************************
UObject* (*const Z_Construct_UClass_USIK_MusicRemoteSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_MusicRemoteSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_MusicRemoteSubsystem_Statics::ClassParams = {
	&USIK_MusicRemoteSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USIK_MusicRemoteSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USIK_MusicRemoteSubsystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_MusicRemoteSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_MusicRemoteSubsystem_Statics::Class_MetaDataParams)
};
void USIK_MusicRemoteSubsystem::StaticRegisterNativesUSIK_MusicRemoteSubsystem()
{
}
UClass* Z_Construct_UClass_USIK_MusicRemoteSubsystem()
{
	if (!Z_Registration_Info_UClass_USIK_MusicRemoteSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_MusicRemoteSubsystem.OuterSingleton, Z_Construct_UClass_USIK_MusicRemoteSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_MusicRemoteSubsystem.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_MusicRemoteSubsystem);
// ********** End Class USIK_MusicRemoteSubsystem **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_MusicRemote_SIK_MusicRemoteSubsystem_h__Script_SteamIntegrationKit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_MusicRemoteSubsystem, USIK_MusicRemoteSubsystem::StaticClass, TEXT("USIK_MusicRemoteSubsystem"), &Z_Registration_Info_UClass_USIK_MusicRemoteSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_MusicRemoteSubsystem), 1548775319U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_MusicRemote_SIK_MusicRemoteSubsystem_h__Script_SteamIntegrationKit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_MusicRemote_SIK_MusicRemoteSubsystem_h__Script_SteamIntegrationKit_3166319267{
	TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_MusicRemote_SIK_MusicRemoteSubsystem_h__Script_SteamIntegrationKit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_MusicRemote_SIK_MusicRemoteSubsystem_h__Script_SteamIntegrationKit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
