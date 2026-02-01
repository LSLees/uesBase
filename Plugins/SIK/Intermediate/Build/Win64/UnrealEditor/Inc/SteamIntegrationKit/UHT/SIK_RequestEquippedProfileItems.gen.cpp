// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/Friends/SIK_RequestEquippedProfileItems.h"
#include "SIK_SharedFile.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_RequestEquippedProfileItems() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_RequestEquippedProfileItems();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_RequestEquippedProfileItems_NoRegister();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_OnRequestEquippedProfileItems__DelegateSignature();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_SteamId();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FSIK_OnRequestEquippedProfileItems ************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_OnRequestEquippedProfileItems__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventSIK_OnRequestEquippedProfileItems_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
		FSIK_SteamId bHasAnimatedAvatar;
		bool bHasAvatarFrame;
		bool bHasProfileModifier;
		bool bHasProfileBackground;
		bool bHasMiniProfileBackground;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/Friends/SIK_RequestEquippedProfileItems.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasAnimatedAvatar_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FSIK_OnRequestEquippedProfileItems constinit property declarations ****
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_bHasAnimatedAvatar;
	static void NewProp_bHasAvatarFrame_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasAvatarFrame;
	static void NewProp_bHasProfileModifier_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasProfileModifier;
	static void NewProp_bHasProfileBackground_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasProfileBackground;
	static void NewProp_bHasMiniProfileBackground_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasMiniProfileBackground;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FSIK_OnRequestEquippedProfileItems constinit property declarations ******
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FSIK_OnRequestEquippedProfileItems Property Definitions ***************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_OnRequestEquippedProfileItems__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventSIK_OnRequestEquippedProfileItems_Parms, Result), Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 655382749
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_OnRequestEquippedProfileItems__DelegateSignature_Statics::NewProp_bHasAnimatedAvatar = { "bHasAnimatedAvatar", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventSIK_OnRequestEquippedProfileItems_Parms, bHasAnimatedAvatar), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasAnimatedAvatar_MetaData), NewProp_bHasAnimatedAvatar_MetaData) }; // 3413883574
void Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_OnRequestEquippedProfileItems__DelegateSignature_Statics::NewProp_bHasAvatarFrame_SetBit(void* Obj)
{
	((_Script_SteamIntegrationKit_eventSIK_OnRequestEquippedProfileItems_Parms*)Obj)->bHasAvatarFrame = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_OnRequestEquippedProfileItems__DelegateSignature_Statics::NewProp_bHasAvatarFrame = { "bHasAvatarFrame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamIntegrationKit_eventSIK_OnRequestEquippedProfileItems_Parms), &Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_OnRequestEquippedProfileItems__DelegateSignature_Statics::NewProp_bHasAvatarFrame_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_OnRequestEquippedProfileItems__DelegateSignature_Statics::NewProp_bHasProfileModifier_SetBit(void* Obj)
{
	((_Script_SteamIntegrationKit_eventSIK_OnRequestEquippedProfileItems_Parms*)Obj)->bHasProfileModifier = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_OnRequestEquippedProfileItems__DelegateSignature_Statics::NewProp_bHasProfileModifier = { "bHasProfileModifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamIntegrationKit_eventSIK_OnRequestEquippedProfileItems_Parms), &Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_OnRequestEquippedProfileItems__DelegateSignature_Statics::NewProp_bHasProfileModifier_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_OnRequestEquippedProfileItems__DelegateSignature_Statics::NewProp_bHasProfileBackground_SetBit(void* Obj)
{
	((_Script_SteamIntegrationKit_eventSIK_OnRequestEquippedProfileItems_Parms*)Obj)->bHasProfileBackground = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_OnRequestEquippedProfileItems__DelegateSignature_Statics::NewProp_bHasProfileBackground = { "bHasProfileBackground", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamIntegrationKit_eventSIK_OnRequestEquippedProfileItems_Parms), &Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_OnRequestEquippedProfileItems__DelegateSignature_Statics::NewProp_bHasProfileBackground_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_OnRequestEquippedProfileItems__DelegateSignature_Statics::NewProp_bHasMiniProfileBackground_SetBit(void* Obj)
{
	((_Script_SteamIntegrationKit_eventSIK_OnRequestEquippedProfileItems_Parms*)Obj)->bHasMiniProfileBackground = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_OnRequestEquippedProfileItems__DelegateSignature_Statics::NewProp_bHasMiniProfileBackground = { "bHasMiniProfileBackground", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamIntegrationKit_eventSIK_OnRequestEquippedProfileItems_Parms), &Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_OnRequestEquippedProfileItems__DelegateSignature_Statics::NewProp_bHasMiniProfileBackground_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_OnRequestEquippedProfileItems__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_OnRequestEquippedProfileItems__DelegateSignature_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_OnRequestEquippedProfileItems__DelegateSignature_Statics::NewProp_bHasAnimatedAvatar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_OnRequestEquippedProfileItems__DelegateSignature_Statics::NewProp_bHasAvatarFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_OnRequestEquippedProfileItems__DelegateSignature_Statics::NewProp_bHasProfileModifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_OnRequestEquippedProfileItems__DelegateSignature_Statics::NewProp_bHasProfileBackground,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_OnRequestEquippedProfileItems__DelegateSignature_Statics::NewProp_bHasMiniProfileBackground,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_OnRequestEquippedProfileItems__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FSIK_OnRequestEquippedProfileItems Property Definitions *****************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_OnRequestEquippedProfileItems__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "SIK_OnRequestEquippedProfileItems__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_OnRequestEquippedProfileItems__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_OnRequestEquippedProfileItems__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_OnRequestEquippedProfileItems__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventSIK_OnRequestEquippedProfileItems_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_OnRequestEquippedProfileItems__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_OnRequestEquippedProfileItems__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_OnRequestEquippedProfileItems__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventSIK_OnRequestEquippedProfileItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_OnRequestEquippedProfileItems__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_OnRequestEquippedProfileItems__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSIK_OnRequestEquippedProfileItems_DelegateWrapper(const FMulticastScriptDelegate& SIK_OnRequestEquippedProfileItems, TEnumAsByte<ESIK_Result> const& Result, FSIK_SteamId const& bHasAnimatedAvatar, bool bHasAvatarFrame, bool bHasProfileModifier, bool bHasProfileBackground, bool bHasMiniProfileBackground)
{
	struct _Script_SteamIntegrationKit_eventSIK_OnRequestEquippedProfileItems_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
		FSIK_SteamId bHasAnimatedAvatar;
		bool bHasAvatarFrame;
		bool bHasProfileModifier;
		bool bHasProfileBackground;
		bool bHasMiniProfileBackground;
	};
	_Script_SteamIntegrationKit_eventSIK_OnRequestEquippedProfileItems_Parms Parms;
	Parms.Result=Result;
	Parms.bHasAnimatedAvatar=bHasAnimatedAvatar;
	Parms.bHasAvatarFrame=bHasAvatarFrame ? true : false;
	Parms.bHasProfileModifier=bHasProfileModifier ? true : false;
	Parms.bHasProfileBackground=bHasProfileBackground ? true : false;
	Parms.bHasMiniProfileBackground=bHasMiniProfileBackground ? true : false;
	SIK_OnRequestEquippedProfileItems.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FSIK_OnRequestEquippedProfileItems **************************************

// ********** Begin Class USIK_RequestEquippedProfileItems Function RequestEquippedProfileItems ****
struct Z_Construct_UFunction_USIK_RequestEquippedProfileItems_RequestEquippedProfileItems_Statics
{
	struct SIK_RequestEquippedProfileItems_eventRequestEquippedProfileItems_Parms
	{
		FSIK_SteamId SteamId;
		USIK_RequestEquippedProfileItems* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit || SDK Functions || Friends" },
		{ "DisplayName", "Request Equipped Profile Items" },
		{ "Keywords", "RequestEquippedProfileItems" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_RequestEquippedProfileItems.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function RequestEquippedProfileItems constinit property declarations ***********
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RequestEquippedProfileItems constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RequestEquippedProfileItems Property Definitions **********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_RequestEquippedProfileItems_RequestEquippedProfileItems_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RequestEquippedProfileItems_eventRequestEquippedProfileItems_Parms, SteamId), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamId_MetaData), NewProp_SteamId_MetaData) }; // 3413883574
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_RequestEquippedProfileItems_RequestEquippedProfileItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RequestEquippedProfileItems_eventRequestEquippedProfileItems_Parms, ReturnValue), Z_Construct_UClass_USIK_RequestEquippedProfileItems_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_RequestEquippedProfileItems_RequestEquippedProfileItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RequestEquippedProfileItems_RequestEquippedProfileItems_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RequestEquippedProfileItems_RequestEquippedProfileItems_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RequestEquippedProfileItems_RequestEquippedProfileItems_Statics::PropPointers) < 2048);
// ********** End Function RequestEquippedProfileItems Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_RequestEquippedProfileItems_RequestEquippedProfileItems_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_RequestEquippedProfileItems, nullptr, "RequestEquippedProfileItems", 	Z_Construct_UFunction_USIK_RequestEquippedProfileItems_RequestEquippedProfileItems_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RequestEquippedProfileItems_RequestEquippedProfileItems_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_RequestEquippedProfileItems_RequestEquippedProfileItems_Statics::SIK_RequestEquippedProfileItems_eventRequestEquippedProfileItems_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RequestEquippedProfileItems_RequestEquippedProfileItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_RequestEquippedProfileItems_RequestEquippedProfileItems_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_RequestEquippedProfileItems_RequestEquippedProfileItems_Statics::SIK_RequestEquippedProfileItems_eventRequestEquippedProfileItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_RequestEquippedProfileItems_RequestEquippedProfileItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_RequestEquippedProfileItems_RequestEquippedProfileItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_RequestEquippedProfileItems::execRequestEquippedProfileItems)
{
	P_GET_STRUCT_REF(FSIK_SteamId,Z_Param_Out_SteamId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_RequestEquippedProfileItems**)Z_Param__Result=USIK_RequestEquippedProfileItems::RequestEquippedProfileItems(Z_Param_Out_SteamId);
	P_NATIVE_END;
}
// ********** End Class USIK_RequestEquippedProfileItems Function RequestEquippedProfileItems ******

// ********** Begin Class USIK_RequestEquippedProfileItems *****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_RequestEquippedProfileItems;
UClass* USIK_RequestEquippedProfileItems::GetPrivateStaticClass()
{
	using TClass = USIK_RequestEquippedProfileItems;
	if (!Z_Registration_Info_UClass_USIK_RequestEquippedProfileItems.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_RequestEquippedProfileItems"),
			Z_Registration_Info_UClass_USIK_RequestEquippedProfileItems.InnerSingleton,
			StaticRegisterNativesUSIK_RequestEquippedProfileItems,
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
	return Z_Registration_Info_UClass_USIK_RequestEquippedProfileItems.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_RequestEquippedProfileItems_NoRegister()
{
	return USIK_RequestEquippedProfileItems::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_RequestEquippedProfileItems_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Functions/Friends/SIK_RequestEquippedProfileItems.h" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_RequestEquippedProfileItems.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Functions/Friends/SIK_RequestEquippedProfileItems.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Functions/Friends/SIK_RequestEquippedProfileItems.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_RequestEquippedProfileItems constinit property declarations *********
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USIK_RequestEquippedProfileItems constinit property declarations ***********
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("RequestEquippedProfileItems"), .Pointer = &USIK_RequestEquippedProfileItems::execRequestEquippedProfileItems },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_RequestEquippedProfileItems_RequestEquippedProfileItems, "RequestEquippedProfileItems" }, // 2640751780
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_RequestEquippedProfileItems>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_RequestEquippedProfileItems_Statics

// ********** Begin Class USIK_RequestEquippedProfileItems Property Definitions ********************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_RequestEquippedProfileItems_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_RequestEquippedProfileItems, OnSuccess), Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_OnRequestEquippedProfileItems__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 3910793085
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_RequestEquippedProfileItems_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_RequestEquippedProfileItems, OnFailure), Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_OnRequestEquippedProfileItems__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 3910793085
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USIK_RequestEquippedProfileItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_RequestEquippedProfileItems_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_RequestEquippedProfileItems_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_RequestEquippedProfileItems_Statics::PropPointers) < 2048);
// ********** End Class USIK_RequestEquippedProfileItems Property Definitions **********************
UObject* (*const Z_Construct_UClass_USIK_RequestEquippedProfileItems_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_RequestEquippedProfileItems_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_RequestEquippedProfileItems_Statics::ClassParams = {
	&USIK_RequestEquippedProfileItems::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USIK_RequestEquippedProfileItems_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USIK_RequestEquippedProfileItems_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_RequestEquippedProfileItems_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_RequestEquippedProfileItems_Statics::Class_MetaDataParams)
};
void USIK_RequestEquippedProfileItems::StaticRegisterNativesUSIK_RequestEquippedProfileItems()
{
	UClass* Class = USIK_RequestEquippedProfileItems::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_RequestEquippedProfileItems_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_RequestEquippedProfileItems()
{
	if (!Z_Registration_Info_UClass_USIK_RequestEquippedProfileItems.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_RequestEquippedProfileItems.OuterSingleton, Z_Construct_UClass_USIK_RequestEquippedProfileItems_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_RequestEquippedProfileItems.OuterSingleton;
}
USIK_RequestEquippedProfileItems::USIK_RequestEquippedProfileItems(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_RequestEquippedProfileItems);
USIK_RequestEquippedProfileItems::~USIK_RequestEquippedProfileItems() {}
// ********** End Class USIK_RequestEquippedProfileItems *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_RequestEquippedProfileItems_h__Script_SteamIntegrationKit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_RequestEquippedProfileItems, USIK_RequestEquippedProfileItems::StaticClass, TEXT("USIK_RequestEquippedProfileItems"), &Z_Registration_Info_UClass_USIK_RequestEquippedProfileItems, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_RequestEquippedProfileItems), 2512776872U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_RequestEquippedProfileItems_h__Script_SteamIntegrationKit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_RequestEquippedProfileItems_h__Script_SteamIntegrationKit_478046855{
	TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_RequestEquippedProfileItems_h__Script_SteamIntegrationKit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_RequestEquippedProfileItems_h__Script_SteamIntegrationKit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
