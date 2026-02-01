// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/Music/SIK_MusicLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_MusicLibrary() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_MusicLibrary();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_MusicLibrary_NoRegister();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_AudioPlayback_Status();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USIK_MusicLibrary Function GetPlaybackStatus *****************************
struct Z_Construct_UFunction_USIK_MusicLibrary_GetPlaybackStatus_Statics
{
	struct SIK_MusicLibrary_eventGetPlaybackStatus_Parms
	{
		TEnumAsByte<ESIK_AudioPlayback_Status> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Music" },
		{ "ModuleRelativePath", "Functions/Music/SIK_MusicLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetPlaybackStatus constinit property declarations *********************
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPlaybackStatus constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPlaybackStatus Property Definitions ********************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_MusicLibrary_GetPlaybackStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MusicLibrary_eventGetPlaybackStatus_Parms, ReturnValue), Z_Construct_UEnum_SteamIntegrationKit_ESIK_AudioPlayback_Status, METADATA_PARAMS(0, nullptr) }; // 2908818213
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_MusicLibrary_GetPlaybackStatus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MusicLibrary_GetPlaybackStatus_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicLibrary_GetPlaybackStatus_Statics::PropPointers) < 2048);
// ********** End Function GetPlaybackStatus Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_MusicLibrary_GetPlaybackStatus_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_MusicLibrary, nullptr, "GetPlaybackStatus", 	Z_Construct_UFunction_USIK_MusicLibrary_GetPlaybackStatus_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicLibrary_GetPlaybackStatus_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_MusicLibrary_GetPlaybackStatus_Statics::SIK_MusicLibrary_eventGetPlaybackStatus_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicLibrary_GetPlaybackStatus_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_MusicLibrary_GetPlaybackStatus_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_MusicLibrary_GetPlaybackStatus_Statics::SIK_MusicLibrary_eventGetPlaybackStatus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_MusicLibrary_GetPlaybackStatus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_MusicLibrary_GetPlaybackStatus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_MusicLibrary::execGetPlaybackStatus)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<ESIK_AudioPlayback_Status>*)Z_Param__Result=USIK_MusicLibrary::GetPlaybackStatus();
	P_NATIVE_END;
}
// ********** End Class USIK_MusicLibrary Function GetPlaybackStatus *******************************

// ********** Begin Class USIK_MusicLibrary Function GetVolume *************************************
struct Z_Construct_UFunction_USIK_MusicLibrary_GetVolume_Statics
{
	struct SIK_MusicLibrary_eventGetVolume_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Music" },
		{ "ModuleRelativePath", "Functions/Music/SIK_MusicLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetVolume constinit property declarations *****************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetVolume constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetVolume Property Definitions ****************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USIK_MusicLibrary_GetVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MusicLibrary_eventGetVolume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_MusicLibrary_GetVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MusicLibrary_GetVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicLibrary_GetVolume_Statics::PropPointers) < 2048);
// ********** End Function GetVolume Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_MusicLibrary_GetVolume_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_MusicLibrary, nullptr, "GetVolume", 	Z_Construct_UFunction_USIK_MusicLibrary_GetVolume_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicLibrary_GetVolume_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_MusicLibrary_GetVolume_Statics::SIK_MusicLibrary_eventGetVolume_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicLibrary_GetVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_MusicLibrary_GetVolume_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_MusicLibrary_GetVolume_Statics::SIK_MusicLibrary_eventGetVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_MusicLibrary_GetVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_MusicLibrary_GetVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_MusicLibrary::execGetVolume)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=USIK_MusicLibrary::GetVolume();
	P_NATIVE_END;
}
// ********** End Class USIK_MusicLibrary Function GetVolume ***************************************

// ********** Begin Class USIK_MusicLibrary Function IsEnabled *************************************
struct Z_Construct_UFunction_USIK_MusicLibrary_IsEnabled_Statics
{
	struct SIK_MusicLibrary_eventIsEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Music" },
		{ "ModuleRelativePath", "Functions/Music/SIK_MusicLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsEnabled constinit property declarations *****************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsEnabled constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsEnabled Property Definitions ****************************************
void Z_Construct_UFunction_USIK_MusicLibrary_IsEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_MusicLibrary_eventIsEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_MusicLibrary_IsEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_MusicLibrary_eventIsEnabled_Parms), &Z_Construct_UFunction_USIK_MusicLibrary_IsEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_MusicLibrary_IsEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MusicLibrary_IsEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicLibrary_IsEnabled_Statics::PropPointers) < 2048);
// ********** End Function IsEnabled Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_MusicLibrary_IsEnabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_MusicLibrary, nullptr, "IsEnabled", 	Z_Construct_UFunction_USIK_MusicLibrary_IsEnabled_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicLibrary_IsEnabled_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_MusicLibrary_IsEnabled_Statics::SIK_MusicLibrary_eventIsEnabled_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicLibrary_IsEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_MusicLibrary_IsEnabled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_MusicLibrary_IsEnabled_Statics::SIK_MusicLibrary_eventIsEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_MusicLibrary_IsEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_MusicLibrary_IsEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_MusicLibrary::execIsEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_MusicLibrary::IsEnabled();
	P_NATIVE_END;
}
// ********** End Class USIK_MusicLibrary Function IsEnabled ***************************************

// ********** Begin Class USIK_MusicLibrary Function IsPlaying *************************************
struct Z_Construct_UFunction_USIK_MusicLibrary_IsPlaying_Statics
{
	struct SIK_MusicLibrary_eventIsPlaying_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Music" },
		{ "ModuleRelativePath", "Functions/Music/SIK_MusicLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsPlaying constinit property declarations *****************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsPlaying constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsPlaying Property Definitions ****************************************
void Z_Construct_UFunction_USIK_MusicLibrary_IsPlaying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_MusicLibrary_eventIsPlaying_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_MusicLibrary_IsPlaying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_MusicLibrary_eventIsPlaying_Parms), &Z_Construct_UFunction_USIK_MusicLibrary_IsPlaying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_MusicLibrary_IsPlaying_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MusicLibrary_IsPlaying_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicLibrary_IsPlaying_Statics::PropPointers) < 2048);
// ********** End Function IsPlaying Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_MusicLibrary_IsPlaying_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_MusicLibrary, nullptr, "IsPlaying", 	Z_Construct_UFunction_USIK_MusicLibrary_IsPlaying_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicLibrary_IsPlaying_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_MusicLibrary_IsPlaying_Statics::SIK_MusicLibrary_eventIsPlaying_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicLibrary_IsPlaying_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_MusicLibrary_IsPlaying_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_MusicLibrary_IsPlaying_Statics::SIK_MusicLibrary_eventIsPlaying_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_MusicLibrary_IsPlaying()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_MusicLibrary_IsPlaying_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_MusicLibrary::execIsPlaying)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_MusicLibrary::IsPlaying();
	P_NATIVE_END;
}
// ********** End Class USIK_MusicLibrary Function IsPlaying ***************************************

// ********** Begin Class USIK_MusicLibrary Function Pause *****************************************
struct Z_Construct_UFunction_USIK_MusicLibrary_Pause_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Music" },
		{ "ModuleRelativePath", "Functions/Music/SIK_MusicLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function Pause constinit property declarations *********************************
// ********** End Function Pause constinit property declarations ***********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_MusicLibrary_Pause_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_MusicLibrary, nullptr, "Pause", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicLibrary_Pause_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_MusicLibrary_Pause_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USIK_MusicLibrary_Pause()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_MusicLibrary_Pause_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_MusicLibrary::execPause)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_MusicLibrary::Pause();
	P_NATIVE_END;
}
// ********** End Class USIK_MusicLibrary Function Pause *******************************************

// ********** Begin Class USIK_MusicLibrary Function Play ******************************************
struct Z_Construct_UFunction_USIK_MusicLibrary_Play_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Music" },
		{ "ModuleRelativePath", "Functions/Music/SIK_MusicLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function Play constinit property declarations **********************************
// ********** End Function Play constinit property declarations ************************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_MusicLibrary_Play_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_MusicLibrary, nullptr, "Play", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicLibrary_Play_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_MusicLibrary_Play_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USIK_MusicLibrary_Play()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_MusicLibrary_Play_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_MusicLibrary::execPlay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_MusicLibrary::Play();
	P_NATIVE_END;
}
// ********** End Class USIK_MusicLibrary Function Play ********************************************

// ********** Begin Class USIK_MusicLibrary Function PlayNext **************************************
struct Z_Construct_UFunction_USIK_MusicLibrary_PlayNext_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Music" },
		{ "ModuleRelativePath", "Functions/Music/SIK_MusicLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function PlayNext constinit property declarations ******************************
// ********** End Function PlayNext constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_MusicLibrary_PlayNext_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_MusicLibrary, nullptr, "PlayNext", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicLibrary_PlayNext_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_MusicLibrary_PlayNext_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USIK_MusicLibrary_PlayNext()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_MusicLibrary_PlayNext_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_MusicLibrary::execPlayNext)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_MusicLibrary::PlayNext();
	P_NATIVE_END;
}
// ********** End Class USIK_MusicLibrary Function PlayNext ****************************************

// ********** Begin Class USIK_MusicLibrary Function PlayPrevious **********************************
struct Z_Construct_UFunction_USIK_MusicLibrary_PlayPrevious_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Music" },
		{ "ModuleRelativePath", "Functions/Music/SIK_MusicLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function PlayPrevious constinit property declarations **************************
// ********** End Function PlayPrevious constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_MusicLibrary_PlayPrevious_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_MusicLibrary, nullptr, "PlayPrevious", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicLibrary_PlayPrevious_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_MusicLibrary_PlayPrevious_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USIK_MusicLibrary_PlayPrevious()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_MusicLibrary_PlayPrevious_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_MusicLibrary::execPlayPrevious)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_MusicLibrary::PlayPrevious();
	P_NATIVE_END;
}
// ********** End Class USIK_MusicLibrary Function PlayPrevious ************************************

// ********** Begin Class USIK_MusicLibrary Function SetVolume *************************************
struct Z_Construct_UFunction_USIK_MusicLibrary_SetVolume_Statics
{
	struct SIK_MusicLibrary_eventSetVolume_Parms
	{
		float Volume;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Music" },
		{ "ModuleRelativePath", "Functions/Music/SIK_MusicLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetVolume constinit property declarations *****************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Volume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetVolume constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetVolume Property Definitions ****************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USIK_MusicLibrary_SetVolume_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_MusicLibrary_eventSetVolume_Parms, Volume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_MusicLibrary_SetVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_MusicLibrary_SetVolume_Statics::NewProp_Volume,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicLibrary_SetVolume_Statics::PropPointers) < 2048);
// ********** End Function SetVolume Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_MusicLibrary_SetVolume_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_MusicLibrary, nullptr, "SetVolume", 	Z_Construct_UFunction_USIK_MusicLibrary_SetVolume_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicLibrary_SetVolume_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_MusicLibrary_SetVolume_Statics::SIK_MusicLibrary_eventSetVolume_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_MusicLibrary_SetVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_MusicLibrary_SetVolume_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_MusicLibrary_SetVolume_Statics::SIK_MusicLibrary_eventSetVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_MusicLibrary_SetVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_MusicLibrary_SetVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_MusicLibrary::execSetVolume)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_MusicLibrary::SetVolume(Z_Param_Volume);
	P_NATIVE_END;
}
// ********** End Class USIK_MusicLibrary Function SetVolume ***************************************

// ********** Begin Class USIK_MusicLibrary ********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_MusicLibrary;
UClass* USIK_MusicLibrary::GetPrivateStaticClass()
{
	using TClass = USIK_MusicLibrary;
	if (!Z_Registration_Info_UClass_USIK_MusicLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_MusicLibrary"),
			Z_Registration_Info_UClass_USIK_MusicLibrary.InnerSingleton,
			StaticRegisterNativesUSIK_MusicLibrary,
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
	return Z_Registration_Info_UClass_USIK_MusicLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_MusicLibrary_NoRegister()
{
	return USIK_MusicLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_MusicLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/Music/SIK_MusicLibrary.h" },
		{ "ModuleRelativePath", "Functions/Music/SIK_MusicLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_MusicLibrary constinit property declarations ************************
// ********** End Class USIK_MusicLibrary constinit property declarations **************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetPlaybackStatus"), .Pointer = &USIK_MusicLibrary::execGetPlaybackStatus },
		{ .NameUTF8 = UTF8TEXT("GetVolume"), .Pointer = &USIK_MusicLibrary::execGetVolume },
		{ .NameUTF8 = UTF8TEXT("IsEnabled"), .Pointer = &USIK_MusicLibrary::execIsEnabled },
		{ .NameUTF8 = UTF8TEXT("IsPlaying"), .Pointer = &USIK_MusicLibrary::execIsPlaying },
		{ .NameUTF8 = UTF8TEXT("Pause"), .Pointer = &USIK_MusicLibrary::execPause },
		{ .NameUTF8 = UTF8TEXT("Play"), .Pointer = &USIK_MusicLibrary::execPlay },
		{ .NameUTF8 = UTF8TEXT("PlayNext"), .Pointer = &USIK_MusicLibrary::execPlayNext },
		{ .NameUTF8 = UTF8TEXT("PlayPrevious"), .Pointer = &USIK_MusicLibrary::execPlayPrevious },
		{ .NameUTF8 = UTF8TEXT("SetVolume"), .Pointer = &USIK_MusicLibrary::execSetVolume },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_MusicLibrary_GetPlaybackStatus, "GetPlaybackStatus" }, // 3487702843
		{ &Z_Construct_UFunction_USIK_MusicLibrary_GetVolume, "GetVolume" }, // 884738204
		{ &Z_Construct_UFunction_USIK_MusicLibrary_IsEnabled, "IsEnabled" }, // 3067342144
		{ &Z_Construct_UFunction_USIK_MusicLibrary_IsPlaying, "IsPlaying" }, // 4109977015
		{ &Z_Construct_UFunction_USIK_MusicLibrary_Pause, "Pause" }, // 404737515
		{ &Z_Construct_UFunction_USIK_MusicLibrary_Play, "Play" }, // 26353353
		{ &Z_Construct_UFunction_USIK_MusicLibrary_PlayNext, "PlayNext" }, // 1280996688
		{ &Z_Construct_UFunction_USIK_MusicLibrary_PlayPrevious, "PlayPrevious" }, // 2433681668
		{ &Z_Construct_UFunction_USIK_MusicLibrary_SetVolume, "SetVolume" }, // 3368522287
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_MusicLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_MusicLibrary_Statics
UObject* (*const Z_Construct_UClass_USIK_MusicLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_MusicLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_MusicLibrary_Statics::ClassParams = {
	&USIK_MusicLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_MusicLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_MusicLibrary_Statics::Class_MetaDataParams)
};
void USIK_MusicLibrary::StaticRegisterNativesUSIK_MusicLibrary()
{
	UClass* Class = USIK_MusicLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_MusicLibrary_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_MusicLibrary()
{
	if (!Z_Registration_Info_UClass_USIK_MusicLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_MusicLibrary.OuterSingleton, Z_Construct_UClass_USIK_MusicLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_MusicLibrary.OuterSingleton;
}
USIK_MusicLibrary::USIK_MusicLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_MusicLibrary);
USIK_MusicLibrary::~USIK_MusicLibrary() {}
// ********** End Class USIK_MusicLibrary **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Music_SIK_MusicLibrary_h__Script_SteamIntegrationKit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_MusicLibrary, USIK_MusicLibrary::StaticClass, TEXT("USIK_MusicLibrary"), &Z_Registration_Info_UClass_USIK_MusicLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_MusicLibrary), 3141558002U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Music_SIK_MusicLibrary_h__Script_SteamIntegrationKit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Music_SIK_MusicLibrary_h__Script_SteamIntegrationKit_2472998536{
	TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Music_SIK_MusicLibrary_h__Script_SteamIntegrationKit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Music_SIK_MusicLibrary_h__Script_SteamIntegrationKit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
