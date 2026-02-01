// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/Leaderboards/SIK_FindOrCreateLeaderboard.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_FindOrCreateLeaderboard() {}

// ********** Begin Cross Module References ********************************************************
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_FindOrCreateLeaderboard();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_FindOrCreateLeaderboard_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USIK_FindOrCreateLeaderboard Function FindOrCreateLeaderboard ************
struct Z_Construct_UFunction_USIK_FindOrCreateLeaderboard_FindOrCreateLeaderboard_Statics
{
	struct SIK_FindOrCreateLeaderboard_eventFindOrCreateLeaderboard_Parms
	{
		FString Key;
		int32 AppId;
		FString Name;
		FString SortMethod;
		FString DisplayType;
		bool CreateIfNotFound;
		bool OnlyTrustedWrites;
		bool OnlyFriendsReads;
		USIK_FindOrCreateLeaderboard* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|Leaderboards" },
		{ "CPP_Default_CreateIfNotFound", "true" },
		{ "CPP_Default_DisplayType", "Numeric" },
		{ "CPP_Default_OnlyFriendsReads", "false" },
		{ "CPP_Default_OnlyTrustedWrites", "false" },
		{ "CPP_Default_SortMethod", "Ascending" },
		{ "ModuleRelativePath", "Functions/Leaderboards/SIK_FindOrCreateLeaderboard.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SortMethod_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayType_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CreateIfNotFound_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnlyTrustedWrites_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnlyFriendsReads_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function FindOrCreateLeaderboard constinit property declarations ***************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SortMethod;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayType;
	static void NewProp_CreateIfNotFound_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CreateIfNotFound;
	static void NewProp_OnlyTrustedWrites_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OnlyTrustedWrites;
	static void NewProp_OnlyFriendsReads_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OnlyFriendsReads;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FindOrCreateLeaderboard constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FindOrCreateLeaderboard Property Definitions **************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_FindOrCreateLeaderboard_FindOrCreateLeaderboard_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FindOrCreateLeaderboard_eventFindOrCreateLeaderboard_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_FindOrCreateLeaderboard_FindOrCreateLeaderboard_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FindOrCreateLeaderboard_eventFindOrCreateLeaderboard_Parms, AppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppId_MetaData), NewProp_AppId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_FindOrCreateLeaderboard_FindOrCreateLeaderboard_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FindOrCreateLeaderboard_eventFindOrCreateLeaderboard_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_FindOrCreateLeaderboard_FindOrCreateLeaderboard_Statics::NewProp_SortMethod = { "SortMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FindOrCreateLeaderboard_eventFindOrCreateLeaderboard_Parms, SortMethod), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SortMethod_MetaData), NewProp_SortMethod_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_FindOrCreateLeaderboard_FindOrCreateLeaderboard_Statics::NewProp_DisplayType = { "DisplayType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FindOrCreateLeaderboard_eventFindOrCreateLeaderboard_Parms, DisplayType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayType_MetaData), NewProp_DisplayType_MetaData) };
void Z_Construct_UFunction_USIK_FindOrCreateLeaderboard_FindOrCreateLeaderboard_Statics::NewProp_CreateIfNotFound_SetBit(void* Obj)
{
	((SIK_FindOrCreateLeaderboard_eventFindOrCreateLeaderboard_Parms*)Obj)->CreateIfNotFound = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_FindOrCreateLeaderboard_FindOrCreateLeaderboard_Statics::NewProp_CreateIfNotFound = { "CreateIfNotFound", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_FindOrCreateLeaderboard_eventFindOrCreateLeaderboard_Parms), &Z_Construct_UFunction_USIK_FindOrCreateLeaderboard_FindOrCreateLeaderboard_Statics::NewProp_CreateIfNotFound_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CreateIfNotFound_MetaData), NewProp_CreateIfNotFound_MetaData) };
void Z_Construct_UFunction_USIK_FindOrCreateLeaderboard_FindOrCreateLeaderboard_Statics::NewProp_OnlyTrustedWrites_SetBit(void* Obj)
{
	((SIK_FindOrCreateLeaderboard_eventFindOrCreateLeaderboard_Parms*)Obj)->OnlyTrustedWrites = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_FindOrCreateLeaderboard_FindOrCreateLeaderboard_Statics::NewProp_OnlyTrustedWrites = { "OnlyTrustedWrites", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_FindOrCreateLeaderboard_eventFindOrCreateLeaderboard_Parms), &Z_Construct_UFunction_USIK_FindOrCreateLeaderboard_FindOrCreateLeaderboard_Statics::NewProp_OnlyTrustedWrites_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnlyTrustedWrites_MetaData), NewProp_OnlyTrustedWrites_MetaData) };
void Z_Construct_UFunction_USIK_FindOrCreateLeaderboard_FindOrCreateLeaderboard_Statics::NewProp_OnlyFriendsReads_SetBit(void* Obj)
{
	((SIK_FindOrCreateLeaderboard_eventFindOrCreateLeaderboard_Parms*)Obj)->OnlyFriendsReads = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_FindOrCreateLeaderboard_FindOrCreateLeaderboard_Statics::NewProp_OnlyFriendsReads = { "OnlyFriendsReads", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_FindOrCreateLeaderboard_eventFindOrCreateLeaderboard_Parms), &Z_Construct_UFunction_USIK_FindOrCreateLeaderboard_FindOrCreateLeaderboard_Statics::NewProp_OnlyFriendsReads_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnlyFriendsReads_MetaData), NewProp_OnlyFriendsReads_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_FindOrCreateLeaderboard_FindOrCreateLeaderboard_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_FindOrCreateLeaderboard_eventFindOrCreateLeaderboard_Parms, ReturnValue), Z_Construct_UClass_USIK_FindOrCreateLeaderboard_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_FindOrCreateLeaderboard_FindOrCreateLeaderboard_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FindOrCreateLeaderboard_FindOrCreateLeaderboard_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FindOrCreateLeaderboard_FindOrCreateLeaderboard_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FindOrCreateLeaderboard_FindOrCreateLeaderboard_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FindOrCreateLeaderboard_FindOrCreateLeaderboard_Statics::NewProp_SortMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FindOrCreateLeaderboard_FindOrCreateLeaderboard_Statics::NewProp_DisplayType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FindOrCreateLeaderboard_FindOrCreateLeaderboard_Statics::NewProp_CreateIfNotFound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FindOrCreateLeaderboard_FindOrCreateLeaderboard_Statics::NewProp_OnlyTrustedWrites,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FindOrCreateLeaderboard_FindOrCreateLeaderboard_Statics::NewProp_OnlyFriendsReads,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_FindOrCreateLeaderboard_FindOrCreateLeaderboard_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FindOrCreateLeaderboard_FindOrCreateLeaderboard_Statics::PropPointers) < 2048);
// ********** End Function FindOrCreateLeaderboard Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_FindOrCreateLeaderboard_FindOrCreateLeaderboard_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_FindOrCreateLeaderboard, nullptr, "FindOrCreateLeaderboard", 	Z_Construct_UFunction_USIK_FindOrCreateLeaderboard_FindOrCreateLeaderboard_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FindOrCreateLeaderboard_FindOrCreateLeaderboard_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_FindOrCreateLeaderboard_FindOrCreateLeaderboard_Statics::SIK_FindOrCreateLeaderboard_eventFindOrCreateLeaderboard_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_FindOrCreateLeaderboard_FindOrCreateLeaderboard_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_FindOrCreateLeaderboard_FindOrCreateLeaderboard_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_FindOrCreateLeaderboard_FindOrCreateLeaderboard_Statics::SIK_FindOrCreateLeaderboard_eventFindOrCreateLeaderboard_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_FindOrCreateLeaderboard_FindOrCreateLeaderboard()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_FindOrCreateLeaderboard_FindOrCreateLeaderboard_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_FindOrCreateLeaderboard::execFindOrCreateLeaderboard)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_GET_PROPERTY(FStrProperty,Z_Param_SortMethod);
	P_GET_PROPERTY(FStrProperty,Z_Param_DisplayType);
	P_GET_UBOOL_REF(Z_Param_Out_CreateIfNotFound);
	P_GET_UBOOL_REF(Z_Param_Out_OnlyTrustedWrites);
	P_GET_UBOOL_REF(Z_Param_Out_OnlyFriendsReads);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_FindOrCreateLeaderboard**)Z_Param__Result=USIK_FindOrCreateLeaderboard::FindOrCreateLeaderboard(Z_Param_Key,Z_Param_Out_AppId,Z_Param_Name,Z_Param_SortMethod,Z_Param_DisplayType,Z_Param_Out_CreateIfNotFound,Z_Param_Out_OnlyTrustedWrites,Z_Param_Out_OnlyFriendsReads);
	P_NATIVE_END;
}
// ********** End Class USIK_FindOrCreateLeaderboard Function FindOrCreateLeaderboard **************

// ********** Begin Class USIK_FindOrCreateLeaderboard *********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_FindOrCreateLeaderboard;
UClass* USIK_FindOrCreateLeaderboard::GetPrivateStaticClass()
{
	using TClass = USIK_FindOrCreateLeaderboard;
	if (!Z_Registration_Info_UClass_USIK_FindOrCreateLeaderboard.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_FindOrCreateLeaderboard"),
			Z_Registration_Info_UClass_USIK_FindOrCreateLeaderboard.InnerSingleton,
			StaticRegisterNativesUSIK_FindOrCreateLeaderboard,
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
	return Z_Registration_Info_UClass_USIK_FindOrCreateLeaderboard.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_FindOrCreateLeaderboard_NoRegister()
{
	return USIK_FindOrCreateLeaderboard::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_FindOrCreateLeaderboard_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/Leaderboards/SIK_FindOrCreateLeaderboard.h" },
		{ "ModuleRelativePath", "Functions/Leaderboards/SIK_FindOrCreateLeaderboard.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_FindOrCreateLeaderboard constinit property declarations *************
// ********** End Class USIK_FindOrCreateLeaderboard constinit property declarations ***************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("FindOrCreateLeaderboard"), .Pointer = &USIK_FindOrCreateLeaderboard::execFindOrCreateLeaderboard },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_FindOrCreateLeaderboard_FindOrCreateLeaderboard, "FindOrCreateLeaderboard" }, // 3704278159
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_FindOrCreateLeaderboard>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_FindOrCreateLeaderboard_Statics
UObject* (*const Z_Construct_UClass_USIK_FindOrCreateLeaderboard_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_FindOrCreateLeaderboard_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_FindOrCreateLeaderboard_Statics::ClassParams = {
	&USIK_FindOrCreateLeaderboard::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_FindOrCreateLeaderboard_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_FindOrCreateLeaderboard_Statics::Class_MetaDataParams)
};
void USIK_FindOrCreateLeaderboard::StaticRegisterNativesUSIK_FindOrCreateLeaderboard()
{
	UClass* Class = USIK_FindOrCreateLeaderboard::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_FindOrCreateLeaderboard_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_FindOrCreateLeaderboard()
{
	if (!Z_Registration_Info_UClass_USIK_FindOrCreateLeaderboard.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_FindOrCreateLeaderboard.OuterSingleton, Z_Construct_UClass_USIK_FindOrCreateLeaderboard_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_FindOrCreateLeaderboard.OuterSingleton;
}
USIK_FindOrCreateLeaderboard::USIK_FindOrCreateLeaderboard(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_FindOrCreateLeaderboard);
USIK_FindOrCreateLeaderboard::~USIK_FindOrCreateLeaderboard() {}
// ********** End Class USIK_FindOrCreateLeaderboard ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Leaderboards_SIK_FindOrCreateLeaderboard_h__Script_SteamWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_FindOrCreateLeaderboard, USIK_FindOrCreateLeaderboard::StaticClass, TEXT("USIK_FindOrCreateLeaderboard"), &Z_Registration_Info_UClass_USIK_FindOrCreateLeaderboard, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_FindOrCreateLeaderboard), 1370861334U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Leaderboards_SIK_FindOrCreateLeaderboard_h__Script_SteamWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Leaderboards_SIK_FindOrCreateLeaderboard_h__Script_SteamWeb_1921795732{
	TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Leaderboards_SIK_FindOrCreateLeaderboard_h__Script_SteamWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Leaderboards_SIK_FindOrCreateLeaderboard_h__Script_SteamWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
