// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/Player/SIK_GetOwnedGames.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_GetOwnedGames() {}

// ********** Begin Cross Module References ********************************************************
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetOwnedGames();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetOwnedGames_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USIK_GetOwnedGames Function GetOwnedGames ********************************
struct Z_Construct_UFunction_USIK_GetOwnedGames_GetOwnedGames_Statics
{
	struct SIK_GetOwnedGames_eventGetOwnedGames_Parms
	{
		FString Key;
		int64 SteamId;
		bool IncludeAppInfo;
		bool IncludePlayedFreeGames;
		int32 AppIdsFilter;
		USIK_GetOwnedGames* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|Player" },
		{ "Comment", "//Returns a list of games owned by the player if their owned games/game details are visible to you.\n" },
		{ "ModuleRelativePath", "Functions/Player/SIK_GetOwnedGames.h" },
		{ "ToolTip", "Returns a list of games owned by the player if their owned games/game details are visible to you." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IncludeAppInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IncludePlayedFreeGames_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppIdsFilter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetOwnedGames constinit property declarations *************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_SteamId;
	static void NewProp_IncludeAppInfo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IncludeAppInfo;
	static void NewProp_IncludePlayedFreeGames_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IncludePlayedFreeGames;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppIdsFilter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetOwnedGames constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetOwnedGames Property Definitions ************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_GetOwnedGames_GetOwnedGames_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetOwnedGames_eventGetOwnedGames_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_GetOwnedGames_GetOwnedGames_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetOwnedGames_eventGetOwnedGames_Parms, SteamId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamId_MetaData), NewProp_SteamId_MetaData) };
void Z_Construct_UFunction_USIK_GetOwnedGames_GetOwnedGames_Statics::NewProp_IncludeAppInfo_SetBit(void* Obj)
{
	((SIK_GetOwnedGames_eventGetOwnedGames_Parms*)Obj)->IncludeAppInfo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_GetOwnedGames_GetOwnedGames_Statics::NewProp_IncludeAppInfo = { "IncludeAppInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_GetOwnedGames_eventGetOwnedGames_Parms), &Z_Construct_UFunction_USIK_GetOwnedGames_GetOwnedGames_Statics::NewProp_IncludeAppInfo_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IncludeAppInfo_MetaData), NewProp_IncludeAppInfo_MetaData) };
void Z_Construct_UFunction_USIK_GetOwnedGames_GetOwnedGames_Statics::NewProp_IncludePlayedFreeGames_SetBit(void* Obj)
{
	((SIK_GetOwnedGames_eventGetOwnedGames_Parms*)Obj)->IncludePlayedFreeGames = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_GetOwnedGames_GetOwnedGames_Statics::NewProp_IncludePlayedFreeGames = { "IncludePlayedFreeGames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_GetOwnedGames_eventGetOwnedGames_Parms), &Z_Construct_UFunction_USIK_GetOwnedGames_GetOwnedGames_Statics::NewProp_IncludePlayedFreeGames_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IncludePlayedFreeGames_MetaData), NewProp_IncludePlayedFreeGames_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_GetOwnedGames_GetOwnedGames_Statics::NewProp_AppIdsFilter = { "AppIdsFilter", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetOwnedGames_eventGetOwnedGames_Parms, AppIdsFilter), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppIdsFilter_MetaData), NewProp_AppIdsFilter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_GetOwnedGames_GetOwnedGames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetOwnedGames_eventGetOwnedGames_Parms, ReturnValue), Z_Construct_UClass_USIK_GetOwnedGames_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GetOwnedGames_GetOwnedGames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetOwnedGames_GetOwnedGames_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetOwnedGames_GetOwnedGames_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetOwnedGames_GetOwnedGames_Statics::NewProp_IncludeAppInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetOwnedGames_GetOwnedGames_Statics::NewProp_IncludePlayedFreeGames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetOwnedGames_GetOwnedGames_Statics::NewProp_AppIdsFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetOwnedGames_GetOwnedGames_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetOwnedGames_GetOwnedGames_Statics::PropPointers) < 2048);
// ********** End Function GetOwnedGames Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GetOwnedGames_GetOwnedGames_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_GetOwnedGames, nullptr, "GetOwnedGames", 	Z_Construct_UFunction_USIK_GetOwnedGames_GetOwnedGames_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetOwnedGames_GetOwnedGames_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_GetOwnedGames_GetOwnedGames_Statics::SIK_GetOwnedGames_eventGetOwnedGames_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetOwnedGames_GetOwnedGames_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GetOwnedGames_GetOwnedGames_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_GetOwnedGames_GetOwnedGames_Statics::SIK_GetOwnedGames_eventGetOwnedGames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GetOwnedGames_GetOwnedGames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GetOwnedGames_GetOwnedGames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GetOwnedGames::execGetOwnedGames)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_SteamId);
	P_GET_UBOOL_REF(Z_Param_Out_IncludeAppInfo);
	P_GET_UBOOL_REF(Z_Param_Out_IncludePlayedFreeGames);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppIdsFilter);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_GetOwnedGames**)Z_Param__Result=USIK_GetOwnedGames::GetOwnedGames(Z_Param_Key,Z_Param_Out_SteamId,Z_Param_Out_IncludeAppInfo,Z_Param_Out_IncludePlayedFreeGames,Z_Param_Out_AppIdsFilter);
	P_NATIVE_END;
}
// ********** End Class USIK_GetOwnedGames Function GetOwnedGames **********************************

// ********** Begin Class USIK_GetOwnedGames *******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_GetOwnedGames;
UClass* USIK_GetOwnedGames::GetPrivateStaticClass()
{
	using TClass = USIK_GetOwnedGames;
	if (!Z_Registration_Info_UClass_USIK_GetOwnedGames.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_GetOwnedGames"),
			Z_Registration_Info_UClass_USIK_GetOwnedGames.InnerSingleton,
			StaticRegisterNativesUSIK_GetOwnedGames,
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
	return Z_Registration_Info_UClass_USIK_GetOwnedGames.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_GetOwnedGames_NoRegister()
{
	return USIK_GetOwnedGames::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_GetOwnedGames_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/Player/SIK_GetOwnedGames.h" },
		{ "ModuleRelativePath", "Functions/Player/SIK_GetOwnedGames.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_GetOwnedGames constinit property declarations ***********************
// ********** End Class USIK_GetOwnedGames constinit property declarations *************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetOwnedGames"), .Pointer = &USIK_GetOwnedGames::execGetOwnedGames },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_GetOwnedGames_GetOwnedGames, "GetOwnedGames" }, // 3713291779
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_GetOwnedGames>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_GetOwnedGames_Statics
UObject* (*const Z_Construct_UClass_USIK_GetOwnedGames_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetOwnedGames_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_GetOwnedGames_Statics::ClassParams = {
	&USIK_GetOwnedGames::StaticClass,
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
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetOwnedGames_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_GetOwnedGames_Statics::Class_MetaDataParams)
};
void USIK_GetOwnedGames::StaticRegisterNativesUSIK_GetOwnedGames()
{
	UClass* Class = USIK_GetOwnedGames::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_GetOwnedGames_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_GetOwnedGames()
{
	if (!Z_Registration_Info_UClass_USIK_GetOwnedGames.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_GetOwnedGames.OuterSingleton, Z_Construct_UClass_USIK_GetOwnedGames_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_GetOwnedGames.OuterSingleton;
}
USIK_GetOwnedGames::USIK_GetOwnedGames(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_GetOwnedGames);
USIK_GetOwnedGames::~USIK_GetOwnedGames() {}
// ********** End Class USIK_GetOwnedGames *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Player_SIK_GetOwnedGames_h__Script_SteamWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_GetOwnedGames, USIK_GetOwnedGames::StaticClass, TEXT("USIK_GetOwnedGames"), &Z_Registration_Info_UClass_USIK_GetOwnedGames, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_GetOwnedGames), 2451079966U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Player_SIK_GetOwnedGames_h__Script_SteamWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Player_SIK_GetOwnedGames_h__Script_SteamWeb_1207034765{
	TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Player_SIK_GetOwnedGames_h__Script_SteamWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Player_SIK_GetOwnedGames_h__Script_SteamWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
