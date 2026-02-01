// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/Screenshots/SIK_ScreenshotsLibrary.h"
#include "SIK_SharedFile.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_ScreenshotsLibrary() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_ScreenshotsLibrary();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_ScreenshotsLibrary_NoRegister();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_VRScreenshotType();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_PublishedFileId();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_ScreenshotHandle();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_SteamId();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USIK_ScreenshotsLibrary Function AddScreenshotToLibrary ******************
struct Z_Construct_UFunction_USIK_ScreenshotsLibrary_AddScreenshotToLibrary_Statics
{
	struct SIK_ScreenshotsLibrary_eventAddScreenshotToLibrary_Parms
	{
		FString FileName;
		FString ThumbnailFileName;
		int32 Width;
		int32 Height;
		FSIK_ScreenshotHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Screenshots" },
		{ "ModuleRelativePath", "Functions/Screenshots/SIK_ScreenshotsLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddScreenshotToLibrary constinit property declarations ****************
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ThumbnailFileName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddScreenshotToLibrary constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddScreenshotToLibrary Property Definitions ***************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_ScreenshotsLibrary_AddScreenshotToLibrary_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ScreenshotsLibrary_eventAddScreenshotToLibrary_Parms, FileName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_ScreenshotsLibrary_AddScreenshotToLibrary_Statics::NewProp_ThumbnailFileName = { "ThumbnailFileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ScreenshotsLibrary_eventAddScreenshotToLibrary_Parms, ThumbnailFileName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_ScreenshotsLibrary_AddScreenshotToLibrary_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ScreenshotsLibrary_eventAddScreenshotToLibrary_Parms, Width), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_ScreenshotsLibrary_AddScreenshotToLibrary_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ScreenshotsLibrary_eventAddScreenshotToLibrary_Parms, Height), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_ScreenshotsLibrary_AddScreenshotToLibrary_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ScreenshotsLibrary_eventAddScreenshotToLibrary_Parms, ReturnValue), Z_Construct_UScriptStruct_FSIK_ScreenshotHandle, METADATA_PARAMS(0, nullptr) }; // 1227750953
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_ScreenshotsLibrary_AddScreenshotToLibrary_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ScreenshotsLibrary_AddScreenshotToLibrary_Statics::NewProp_FileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ScreenshotsLibrary_AddScreenshotToLibrary_Statics::NewProp_ThumbnailFileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ScreenshotsLibrary_AddScreenshotToLibrary_Statics::NewProp_Width,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ScreenshotsLibrary_AddScreenshotToLibrary_Statics::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ScreenshotsLibrary_AddScreenshotToLibrary_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_ScreenshotsLibrary_AddScreenshotToLibrary_Statics::PropPointers) < 2048);
// ********** End Function AddScreenshotToLibrary Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_ScreenshotsLibrary_AddScreenshotToLibrary_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_ScreenshotsLibrary, nullptr, "AddScreenshotToLibrary", 	Z_Construct_UFunction_USIK_ScreenshotsLibrary_AddScreenshotToLibrary_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_ScreenshotsLibrary_AddScreenshotToLibrary_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_ScreenshotsLibrary_AddScreenshotToLibrary_Statics::SIK_ScreenshotsLibrary_eventAddScreenshotToLibrary_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_ScreenshotsLibrary_AddScreenshotToLibrary_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_ScreenshotsLibrary_AddScreenshotToLibrary_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_ScreenshotsLibrary_AddScreenshotToLibrary_Statics::SIK_ScreenshotsLibrary_eventAddScreenshotToLibrary_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_ScreenshotsLibrary_AddScreenshotToLibrary()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_ScreenshotsLibrary_AddScreenshotToLibrary_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_ScreenshotsLibrary::execAddScreenshotToLibrary)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
	P_GET_PROPERTY(FStrProperty,Z_Param_ThumbnailFileName);
	P_GET_PROPERTY(FIntProperty,Z_Param_Width);
	P_GET_PROPERTY(FIntProperty,Z_Param_Height);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSIK_ScreenshotHandle*)Z_Param__Result=USIK_ScreenshotsLibrary::AddScreenshotToLibrary(Z_Param_FileName,Z_Param_ThumbnailFileName,Z_Param_Width,Z_Param_Height);
	P_NATIVE_END;
}
// ********** End Class USIK_ScreenshotsLibrary Function AddScreenshotToLibrary ********************

// ********** Begin Class USIK_ScreenshotsLibrary Function AddVRScreenshotToLibrary ****************
struct Z_Construct_UFunction_USIK_ScreenshotsLibrary_AddVRScreenshotToLibrary_Statics
{
	struct SIK_ScreenshotsLibrary_eventAddVRScreenshotToLibrary_Parms
	{
		TEnumAsByte<ESIK_VRScreenshotType> Type;
		FString FileName;
		FString VR_Filename;
		FSIK_ScreenshotHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Screenshots" },
		{ "ModuleRelativePath", "Functions/Screenshots/SIK_ScreenshotsLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddVRScreenshotToLibrary constinit property declarations **************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VR_Filename;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddVRScreenshotToLibrary constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddVRScreenshotToLibrary Property Definitions *************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_ScreenshotsLibrary_AddVRScreenshotToLibrary_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ScreenshotsLibrary_eventAddVRScreenshotToLibrary_Parms, Type), Z_Construct_UEnum_SteamIntegrationKit_ESIK_VRScreenshotType, METADATA_PARAMS(0, nullptr) }; // 1524410720
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_ScreenshotsLibrary_AddVRScreenshotToLibrary_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ScreenshotsLibrary_eventAddVRScreenshotToLibrary_Parms, FileName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_ScreenshotsLibrary_AddVRScreenshotToLibrary_Statics::NewProp_VR_Filename = { "VR_Filename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ScreenshotsLibrary_eventAddVRScreenshotToLibrary_Parms, VR_Filename), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_ScreenshotsLibrary_AddVRScreenshotToLibrary_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ScreenshotsLibrary_eventAddVRScreenshotToLibrary_Parms, ReturnValue), Z_Construct_UScriptStruct_FSIK_ScreenshotHandle, METADATA_PARAMS(0, nullptr) }; // 1227750953
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_ScreenshotsLibrary_AddVRScreenshotToLibrary_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ScreenshotsLibrary_AddVRScreenshotToLibrary_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ScreenshotsLibrary_AddVRScreenshotToLibrary_Statics::NewProp_FileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ScreenshotsLibrary_AddVRScreenshotToLibrary_Statics::NewProp_VR_Filename,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ScreenshotsLibrary_AddVRScreenshotToLibrary_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_ScreenshotsLibrary_AddVRScreenshotToLibrary_Statics::PropPointers) < 2048);
// ********** End Function AddVRScreenshotToLibrary Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_ScreenshotsLibrary_AddVRScreenshotToLibrary_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_ScreenshotsLibrary, nullptr, "AddVRScreenshotToLibrary", 	Z_Construct_UFunction_USIK_ScreenshotsLibrary_AddVRScreenshotToLibrary_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_ScreenshotsLibrary_AddVRScreenshotToLibrary_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_ScreenshotsLibrary_AddVRScreenshotToLibrary_Statics::SIK_ScreenshotsLibrary_eventAddVRScreenshotToLibrary_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_ScreenshotsLibrary_AddVRScreenshotToLibrary_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_ScreenshotsLibrary_AddVRScreenshotToLibrary_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_ScreenshotsLibrary_AddVRScreenshotToLibrary_Statics::SIK_ScreenshotsLibrary_eventAddVRScreenshotToLibrary_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_ScreenshotsLibrary_AddVRScreenshotToLibrary()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_ScreenshotsLibrary_AddVRScreenshotToLibrary_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_ScreenshotsLibrary::execAddVRScreenshotToLibrary)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_Type);
	P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
	P_GET_PROPERTY(FStrProperty,Z_Param_VR_Filename);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSIK_ScreenshotHandle*)Z_Param__Result=USIK_ScreenshotsLibrary::AddVRScreenshotToLibrary(ESIK_VRScreenshotType(Z_Param_Type),Z_Param_FileName,Z_Param_VR_Filename);
	P_NATIVE_END;
}
// ********** End Class USIK_ScreenshotsLibrary Function AddVRScreenshotToLibrary ******************

// ********** Begin Class USIK_ScreenshotsLibrary Function HookScreenshots *************************
struct Z_Construct_UFunction_USIK_ScreenshotsLibrary_HookScreenshots_Statics
{
	struct SIK_ScreenshotsLibrary_eventHookScreenshots_Parms
	{
		bool bHook;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Screenshots" },
		{ "ModuleRelativePath", "Functions/Screenshots/SIK_ScreenshotsLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HookScreenshots constinit property declarations ***********************
	static void NewProp_bHook_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHook;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HookScreenshots constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HookScreenshots Property Definitions **********************************
void Z_Construct_UFunction_USIK_ScreenshotsLibrary_HookScreenshots_Statics::NewProp_bHook_SetBit(void* Obj)
{
	((SIK_ScreenshotsLibrary_eventHookScreenshots_Parms*)Obj)->bHook = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_ScreenshotsLibrary_HookScreenshots_Statics::NewProp_bHook = { "bHook", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_ScreenshotsLibrary_eventHookScreenshots_Parms), &Z_Construct_UFunction_USIK_ScreenshotsLibrary_HookScreenshots_Statics::NewProp_bHook_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_ScreenshotsLibrary_HookScreenshots_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ScreenshotsLibrary_HookScreenshots_Statics::NewProp_bHook,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_ScreenshotsLibrary_HookScreenshots_Statics::PropPointers) < 2048);
// ********** End Function HookScreenshots Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_ScreenshotsLibrary_HookScreenshots_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_ScreenshotsLibrary, nullptr, "HookScreenshots", 	Z_Construct_UFunction_USIK_ScreenshotsLibrary_HookScreenshots_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_ScreenshotsLibrary_HookScreenshots_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_ScreenshotsLibrary_HookScreenshots_Statics::SIK_ScreenshotsLibrary_eventHookScreenshots_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_ScreenshotsLibrary_HookScreenshots_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_ScreenshotsLibrary_HookScreenshots_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_ScreenshotsLibrary_HookScreenshots_Statics::SIK_ScreenshotsLibrary_eventHookScreenshots_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_ScreenshotsLibrary_HookScreenshots()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_ScreenshotsLibrary_HookScreenshots_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_ScreenshotsLibrary::execHookScreenshots)
{
	P_GET_UBOOL(Z_Param_bHook);
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_ScreenshotsLibrary::HookScreenshots(Z_Param_bHook);
	P_NATIVE_END;
}
// ********** End Class USIK_ScreenshotsLibrary Function HookScreenshots ***************************

// ********** Begin Class USIK_ScreenshotsLibrary Function IsScreenshotsHooked *********************
struct Z_Construct_UFunction_USIK_ScreenshotsLibrary_IsScreenshotsHooked_Statics
{
	struct SIK_ScreenshotsLibrary_eventIsScreenshotsHooked_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Screenshots" },
		{ "ModuleRelativePath", "Functions/Screenshots/SIK_ScreenshotsLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsScreenshotsHooked constinit property declarations *******************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsScreenshotsHooked constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsScreenshotsHooked Property Definitions ******************************
void Z_Construct_UFunction_USIK_ScreenshotsLibrary_IsScreenshotsHooked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_ScreenshotsLibrary_eventIsScreenshotsHooked_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_ScreenshotsLibrary_IsScreenshotsHooked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_ScreenshotsLibrary_eventIsScreenshotsHooked_Parms), &Z_Construct_UFunction_USIK_ScreenshotsLibrary_IsScreenshotsHooked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_ScreenshotsLibrary_IsScreenshotsHooked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ScreenshotsLibrary_IsScreenshotsHooked_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_ScreenshotsLibrary_IsScreenshotsHooked_Statics::PropPointers) < 2048);
// ********** End Function IsScreenshotsHooked Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_ScreenshotsLibrary_IsScreenshotsHooked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_ScreenshotsLibrary, nullptr, "IsScreenshotsHooked", 	Z_Construct_UFunction_USIK_ScreenshotsLibrary_IsScreenshotsHooked_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_ScreenshotsLibrary_IsScreenshotsHooked_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_ScreenshotsLibrary_IsScreenshotsHooked_Statics::SIK_ScreenshotsLibrary_eventIsScreenshotsHooked_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_ScreenshotsLibrary_IsScreenshotsHooked_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_ScreenshotsLibrary_IsScreenshotsHooked_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_ScreenshotsLibrary_IsScreenshotsHooked_Statics::SIK_ScreenshotsLibrary_eventIsScreenshotsHooked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_ScreenshotsLibrary_IsScreenshotsHooked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_ScreenshotsLibrary_IsScreenshotsHooked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_ScreenshotsLibrary::execIsScreenshotsHooked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_ScreenshotsLibrary::IsScreenshotsHooked();
	P_NATIVE_END;
}
// ********** End Class USIK_ScreenshotsLibrary Function IsScreenshotsHooked ***********************

// ********** Begin Class USIK_ScreenshotsLibrary Function SetLocation *****************************
struct Z_Construct_UFunction_USIK_ScreenshotsLibrary_SetLocation_Statics
{
	struct SIK_ScreenshotsLibrary_eventSetLocation_Parms
	{
		FSIK_ScreenshotHandle Handle;
		FString Location;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Screenshots" },
		{ "ModuleRelativePath", "Functions/Screenshots/SIK_ScreenshotsLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetLocation constinit property declarations ***************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Location;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetLocation constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetLocation Property Definitions **************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_ScreenshotsLibrary_SetLocation_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ScreenshotsLibrary_eventSetLocation_Parms, Handle), Z_Construct_UScriptStruct_FSIK_ScreenshotHandle, METADATA_PARAMS(0, nullptr) }; // 1227750953
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_ScreenshotsLibrary_SetLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ScreenshotsLibrary_eventSetLocation_Parms, Location), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_ScreenshotsLibrary_SetLocation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_ScreenshotsLibrary_eventSetLocation_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_ScreenshotsLibrary_SetLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_ScreenshotsLibrary_eventSetLocation_Parms), &Z_Construct_UFunction_USIK_ScreenshotsLibrary_SetLocation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_ScreenshotsLibrary_SetLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ScreenshotsLibrary_SetLocation_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ScreenshotsLibrary_SetLocation_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ScreenshotsLibrary_SetLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_ScreenshotsLibrary_SetLocation_Statics::PropPointers) < 2048);
// ********** End Function SetLocation Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_ScreenshotsLibrary_SetLocation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_ScreenshotsLibrary, nullptr, "SetLocation", 	Z_Construct_UFunction_USIK_ScreenshotsLibrary_SetLocation_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_ScreenshotsLibrary_SetLocation_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_ScreenshotsLibrary_SetLocation_Statics::SIK_ScreenshotsLibrary_eventSetLocation_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_ScreenshotsLibrary_SetLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_ScreenshotsLibrary_SetLocation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_ScreenshotsLibrary_SetLocation_Statics::SIK_ScreenshotsLibrary_eventSetLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_ScreenshotsLibrary_SetLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_ScreenshotsLibrary_SetLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_ScreenshotsLibrary::execSetLocation)
{
	P_GET_STRUCT(FSIK_ScreenshotHandle,Z_Param_Handle);
	P_GET_PROPERTY(FStrProperty,Z_Param_Location);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_ScreenshotsLibrary::SetLocation(Z_Param_Handle,Z_Param_Location);
	P_NATIVE_END;
}
// ********** End Class USIK_ScreenshotsLibrary Function SetLocation *******************************

// ********** Begin Class USIK_ScreenshotsLibrary Function TagPublishedFile ************************
struct Z_Construct_UFunction_USIK_ScreenshotsLibrary_TagPublishedFile_Statics
{
	struct SIK_ScreenshotsLibrary_eventTagPublishedFile_Parms
	{
		FSIK_ScreenshotHandle Handle;
		FSIK_PublishedFileId PublishedFileID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Screenshots" },
		{ "ModuleRelativePath", "Functions/Screenshots/SIK_ScreenshotsLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function TagPublishedFile constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function TagPublishedFile constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function TagPublishedFile Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_ScreenshotsLibrary_TagPublishedFile_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ScreenshotsLibrary_eventTagPublishedFile_Parms, Handle), Z_Construct_UScriptStruct_FSIK_ScreenshotHandle, METADATA_PARAMS(0, nullptr) }; // 1227750953
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_ScreenshotsLibrary_TagPublishedFile_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ScreenshotsLibrary_eventTagPublishedFile_Parms, PublishedFileID), Z_Construct_UScriptStruct_FSIK_PublishedFileId, METADATA_PARAMS(0, nullptr) }; // 3479136102
void Z_Construct_UFunction_USIK_ScreenshotsLibrary_TagPublishedFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_ScreenshotsLibrary_eventTagPublishedFile_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_ScreenshotsLibrary_TagPublishedFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_ScreenshotsLibrary_eventTagPublishedFile_Parms), &Z_Construct_UFunction_USIK_ScreenshotsLibrary_TagPublishedFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_ScreenshotsLibrary_TagPublishedFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ScreenshotsLibrary_TagPublishedFile_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ScreenshotsLibrary_TagPublishedFile_Statics::NewProp_PublishedFileID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ScreenshotsLibrary_TagPublishedFile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_ScreenshotsLibrary_TagPublishedFile_Statics::PropPointers) < 2048);
// ********** End Function TagPublishedFile Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_ScreenshotsLibrary_TagPublishedFile_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_ScreenshotsLibrary, nullptr, "TagPublishedFile", 	Z_Construct_UFunction_USIK_ScreenshotsLibrary_TagPublishedFile_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_ScreenshotsLibrary_TagPublishedFile_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_ScreenshotsLibrary_TagPublishedFile_Statics::SIK_ScreenshotsLibrary_eventTagPublishedFile_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_ScreenshotsLibrary_TagPublishedFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_ScreenshotsLibrary_TagPublishedFile_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_ScreenshotsLibrary_TagPublishedFile_Statics::SIK_ScreenshotsLibrary_eventTagPublishedFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_ScreenshotsLibrary_TagPublishedFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_ScreenshotsLibrary_TagPublishedFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_ScreenshotsLibrary::execTagPublishedFile)
{
	P_GET_STRUCT(FSIK_ScreenshotHandle,Z_Param_Handle);
	P_GET_STRUCT(FSIK_PublishedFileId,Z_Param_PublishedFileID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_ScreenshotsLibrary::TagPublishedFile(Z_Param_Handle,Z_Param_PublishedFileID);
	P_NATIVE_END;
}
// ********** End Class USIK_ScreenshotsLibrary Function TagPublishedFile **************************

// ********** Begin Class USIK_ScreenshotsLibrary Function TagUser *********************************
struct Z_Construct_UFunction_USIK_ScreenshotsLibrary_TagUser_Statics
{
	struct SIK_ScreenshotsLibrary_eventTagUser_Parms
	{
		FSIK_ScreenshotHandle Handle;
		FSIK_SteamId SteamID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Screenshots" },
		{ "ModuleRelativePath", "Functions/Screenshots/SIK_ScreenshotsLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function TagUser constinit property declarations *******************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function TagUser constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function TagUser Property Definitions ******************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_ScreenshotsLibrary_TagUser_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ScreenshotsLibrary_eventTagUser_Parms, Handle), Z_Construct_UScriptStruct_FSIK_ScreenshotHandle, METADATA_PARAMS(0, nullptr) }; // 1227750953
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_ScreenshotsLibrary_TagUser_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ScreenshotsLibrary_eventTagUser_Parms, SteamID), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
void Z_Construct_UFunction_USIK_ScreenshotsLibrary_TagUser_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_ScreenshotsLibrary_eventTagUser_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_ScreenshotsLibrary_TagUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_ScreenshotsLibrary_eventTagUser_Parms), &Z_Construct_UFunction_USIK_ScreenshotsLibrary_TagUser_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_ScreenshotsLibrary_TagUser_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ScreenshotsLibrary_TagUser_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ScreenshotsLibrary_TagUser_Statics::NewProp_SteamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ScreenshotsLibrary_TagUser_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_ScreenshotsLibrary_TagUser_Statics::PropPointers) < 2048);
// ********** End Function TagUser Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_ScreenshotsLibrary_TagUser_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_ScreenshotsLibrary, nullptr, "TagUser", 	Z_Construct_UFunction_USIK_ScreenshotsLibrary_TagUser_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_ScreenshotsLibrary_TagUser_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_ScreenshotsLibrary_TagUser_Statics::SIK_ScreenshotsLibrary_eventTagUser_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_ScreenshotsLibrary_TagUser_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_ScreenshotsLibrary_TagUser_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_ScreenshotsLibrary_TagUser_Statics::SIK_ScreenshotsLibrary_eventTagUser_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_ScreenshotsLibrary_TagUser()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_ScreenshotsLibrary_TagUser_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_ScreenshotsLibrary::execTagUser)
{
	P_GET_STRUCT(FSIK_ScreenshotHandle,Z_Param_Handle);
	P_GET_STRUCT(FSIK_SteamId,Z_Param_SteamID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_ScreenshotsLibrary::TagUser(Z_Param_Handle,Z_Param_SteamID);
	P_NATIVE_END;
}
// ********** End Class USIK_ScreenshotsLibrary Function TagUser ***********************************

// ********** Begin Class USIK_ScreenshotsLibrary Function TriggerScreenshot ***********************
struct Z_Construct_UFunction_USIK_ScreenshotsLibrary_TriggerScreenshot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Screenshots" },
		{ "ModuleRelativePath", "Functions/Screenshots/SIK_ScreenshotsLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function TriggerScreenshot constinit property declarations *********************
// ********** End Function TriggerScreenshot constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_ScreenshotsLibrary_TriggerScreenshot_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_ScreenshotsLibrary, nullptr, "TriggerScreenshot", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_ScreenshotsLibrary_TriggerScreenshot_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_ScreenshotsLibrary_TriggerScreenshot_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USIK_ScreenshotsLibrary_TriggerScreenshot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_ScreenshotsLibrary_TriggerScreenshot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_ScreenshotsLibrary::execTriggerScreenshot)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_ScreenshotsLibrary::TriggerScreenshot();
	P_NATIVE_END;
}
// ********** End Class USIK_ScreenshotsLibrary Function TriggerScreenshot *************************

// ********** Begin Class USIK_ScreenshotsLibrary Function WriteScreenshot *************************
struct Z_Construct_UFunction_USIK_ScreenshotsLibrary_WriteScreenshot_Statics
{
	struct SIK_ScreenshotsLibrary_eventWriteScreenshot_Parms
	{
		TArray<uint8> Data;
		int32 Width;
		int32 Height;
		FSIK_ScreenshotHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Screenshots" },
		{ "ModuleRelativePath", "Functions/Screenshots/SIK_ScreenshotsLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function WriteScreenshot constinit property declarations ***********************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function WriteScreenshot constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function WriteScreenshot Property Definitions **********************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_ScreenshotsLibrary_WriteScreenshot_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_ScreenshotsLibrary_WriteScreenshot_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ScreenshotsLibrary_eventWriteScreenshot_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_ScreenshotsLibrary_WriteScreenshot_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ScreenshotsLibrary_eventWriteScreenshot_Parms, Width), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_ScreenshotsLibrary_WriteScreenshot_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ScreenshotsLibrary_eventWriteScreenshot_Parms, Height), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_ScreenshotsLibrary_WriteScreenshot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ScreenshotsLibrary_eventWriteScreenshot_Parms, ReturnValue), Z_Construct_UScriptStruct_FSIK_ScreenshotHandle, METADATA_PARAMS(0, nullptr) }; // 1227750953
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_ScreenshotsLibrary_WriteScreenshot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ScreenshotsLibrary_WriteScreenshot_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ScreenshotsLibrary_WriteScreenshot_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ScreenshotsLibrary_WriteScreenshot_Statics::NewProp_Width,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ScreenshotsLibrary_WriteScreenshot_Statics::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ScreenshotsLibrary_WriteScreenshot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_ScreenshotsLibrary_WriteScreenshot_Statics::PropPointers) < 2048);
// ********** End Function WriteScreenshot Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_ScreenshotsLibrary_WriteScreenshot_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_ScreenshotsLibrary, nullptr, "WriteScreenshot", 	Z_Construct_UFunction_USIK_ScreenshotsLibrary_WriteScreenshot_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_ScreenshotsLibrary_WriteScreenshot_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_ScreenshotsLibrary_WriteScreenshot_Statics::SIK_ScreenshotsLibrary_eventWriteScreenshot_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_ScreenshotsLibrary_WriteScreenshot_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_ScreenshotsLibrary_WriteScreenshot_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_ScreenshotsLibrary_WriteScreenshot_Statics::SIK_ScreenshotsLibrary_eventWriteScreenshot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_ScreenshotsLibrary_WriteScreenshot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_ScreenshotsLibrary_WriteScreenshot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_ScreenshotsLibrary::execWriteScreenshot)
{
	P_GET_TARRAY(uint8,Z_Param_Data);
	P_GET_PROPERTY(FIntProperty,Z_Param_Width);
	P_GET_PROPERTY(FIntProperty,Z_Param_Height);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSIK_ScreenshotHandle*)Z_Param__Result=USIK_ScreenshotsLibrary::WriteScreenshot(Z_Param_Data,Z_Param_Width,Z_Param_Height);
	P_NATIVE_END;
}
// ********** End Class USIK_ScreenshotsLibrary Function WriteScreenshot ***************************

// ********** Begin Class USIK_ScreenshotsLibrary **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_ScreenshotsLibrary;
UClass* USIK_ScreenshotsLibrary::GetPrivateStaticClass()
{
	using TClass = USIK_ScreenshotsLibrary;
	if (!Z_Registration_Info_UClass_USIK_ScreenshotsLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_ScreenshotsLibrary"),
			Z_Registration_Info_UClass_USIK_ScreenshotsLibrary.InnerSingleton,
			StaticRegisterNativesUSIK_ScreenshotsLibrary,
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
	return Z_Registration_Info_UClass_USIK_ScreenshotsLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_ScreenshotsLibrary_NoRegister()
{
	return USIK_ScreenshotsLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_ScreenshotsLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/Screenshots/SIK_ScreenshotsLibrary.h" },
		{ "ModuleRelativePath", "Functions/Screenshots/SIK_ScreenshotsLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_ScreenshotsLibrary constinit property declarations ******************
// ********** End Class USIK_ScreenshotsLibrary constinit property declarations ********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AddScreenshotToLibrary"), .Pointer = &USIK_ScreenshotsLibrary::execAddScreenshotToLibrary },
		{ .NameUTF8 = UTF8TEXT("AddVRScreenshotToLibrary"), .Pointer = &USIK_ScreenshotsLibrary::execAddVRScreenshotToLibrary },
		{ .NameUTF8 = UTF8TEXT("HookScreenshots"), .Pointer = &USIK_ScreenshotsLibrary::execHookScreenshots },
		{ .NameUTF8 = UTF8TEXT("IsScreenshotsHooked"), .Pointer = &USIK_ScreenshotsLibrary::execIsScreenshotsHooked },
		{ .NameUTF8 = UTF8TEXT("SetLocation"), .Pointer = &USIK_ScreenshotsLibrary::execSetLocation },
		{ .NameUTF8 = UTF8TEXT("TagPublishedFile"), .Pointer = &USIK_ScreenshotsLibrary::execTagPublishedFile },
		{ .NameUTF8 = UTF8TEXT("TagUser"), .Pointer = &USIK_ScreenshotsLibrary::execTagUser },
		{ .NameUTF8 = UTF8TEXT("TriggerScreenshot"), .Pointer = &USIK_ScreenshotsLibrary::execTriggerScreenshot },
		{ .NameUTF8 = UTF8TEXT("WriteScreenshot"), .Pointer = &USIK_ScreenshotsLibrary::execWriteScreenshot },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_ScreenshotsLibrary_AddScreenshotToLibrary, "AddScreenshotToLibrary" }, // 3269672642
		{ &Z_Construct_UFunction_USIK_ScreenshotsLibrary_AddVRScreenshotToLibrary, "AddVRScreenshotToLibrary" }, // 3499000507
		{ &Z_Construct_UFunction_USIK_ScreenshotsLibrary_HookScreenshots, "HookScreenshots" }, // 2792204700
		{ &Z_Construct_UFunction_USIK_ScreenshotsLibrary_IsScreenshotsHooked, "IsScreenshotsHooked" }, // 395933575
		{ &Z_Construct_UFunction_USIK_ScreenshotsLibrary_SetLocation, "SetLocation" }, // 622528254
		{ &Z_Construct_UFunction_USIK_ScreenshotsLibrary_TagPublishedFile, "TagPublishedFile" }, // 3016664282
		{ &Z_Construct_UFunction_USIK_ScreenshotsLibrary_TagUser, "TagUser" }, // 2653710646
		{ &Z_Construct_UFunction_USIK_ScreenshotsLibrary_TriggerScreenshot, "TriggerScreenshot" }, // 1095611630
		{ &Z_Construct_UFunction_USIK_ScreenshotsLibrary_WriteScreenshot, "WriteScreenshot" }, // 96755388
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_ScreenshotsLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_ScreenshotsLibrary_Statics
UObject* (*const Z_Construct_UClass_USIK_ScreenshotsLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_ScreenshotsLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_ScreenshotsLibrary_Statics::ClassParams = {
	&USIK_ScreenshotsLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_ScreenshotsLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_ScreenshotsLibrary_Statics::Class_MetaDataParams)
};
void USIK_ScreenshotsLibrary::StaticRegisterNativesUSIK_ScreenshotsLibrary()
{
	UClass* Class = USIK_ScreenshotsLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_ScreenshotsLibrary_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_ScreenshotsLibrary()
{
	if (!Z_Registration_Info_UClass_USIK_ScreenshotsLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_ScreenshotsLibrary.OuterSingleton, Z_Construct_UClass_USIK_ScreenshotsLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_ScreenshotsLibrary.OuterSingleton;
}
USIK_ScreenshotsLibrary::USIK_ScreenshotsLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_ScreenshotsLibrary);
USIK_ScreenshotsLibrary::~USIK_ScreenshotsLibrary() {}
// ********** End Class USIK_ScreenshotsLibrary ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Screenshots_SIK_ScreenshotsLibrary_h__Script_SteamIntegrationKit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_ScreenshotsLibrary, USIK_ScreenshotsLibrary::StaticClass, TEXT("USIK_ScreenshotsLibrary"), &Z_Registration_Info_UClass_USIK_ScreenshotsLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_ScreenshotsLibrary), 805587034U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Screenshots_SIK_ScreenshotsLibrary_h__Script_SteamIntegrationKit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Screenshots_SIK_ScreenshotsLibrary_h__Script_SteamIntegrationKit_3596852204{
	TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Screenshots_SIK_ScreenshotsLibrary_h__Script_SteamIntegrationKit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Screenshots_SIK_ScreenshotsLibrary_h__Script_SteamIntegrationKit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
