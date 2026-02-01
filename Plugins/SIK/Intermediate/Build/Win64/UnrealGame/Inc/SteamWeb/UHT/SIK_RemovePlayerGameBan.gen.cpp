// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/CheatReporting/SIK_RemovePlayerGameBan.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_RemovePlayerGameBan() {}

// ********** Begin Cross Module References ********************************************************
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_RemovePlayerGameBan();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_RemovePlayerGameBan_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USIK_RemovePlayerGameBan Function RemovePlayerGameBan ********************
struct Z_Construct_UFunction_USIK_RemovePlayerGameBan_RemovePlayerGameBan_Statics
{
	struct SIK_RemovePlayerGameBan_eventRemovePlayerGameBan_Parms
	{
		FString Key;
		int64 SteamID;
		int32 AppID;
		USIK_RemovePlayerGameBan* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|Cheat Reporting" },
		{ "Comment", "//Remove a game ban on a player.\n" },
		{ "ModuleRelativePath", "Functions/CheatReporting/SIK_RemovePlayerGameBan.h" },
		{ "ToolTip", "Remove a game ban on a player." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function RemovePlayerGameBan constinit property declarations *******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_SteamID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RemovePlayerGameBan constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RemovePlayerGameBan Property Definitions ******************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_RemovePlayerGameBan_RemovePlayerGameBan_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemovePlayerGameBan_eventRemovePlayerGameBan_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_RemovePlayerGameBan_RemovePlayerGameBan_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemovePlayerGameBan_eventRemovePlayerGameBan_Parms, SteamID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamID_MetaData), NewProp_SteamID_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_RemovePlayerGameBan_RemovePlayerGameBan_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemovePlayerGameBan_eventRemovePlayerGameBan_Parms, AppID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppID_MetaData), NewProp_AppID_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_RemovePlayerGameBan_RemovePlayerGameBan_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemovePlayerGameBan_eventRemovePlayerGameBan_Parms, ReturnValue), Z_Construct_UClass_USIK_RemovePlayerGameBan_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_RemovePlayerGameBan_RemovePlayerGameBan_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemovePlayerGameBan_RemovePlayerGameBan_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemovePlayerGameBan_RemovePlayerGameBan_Statics::NewProp_SteamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemovePlayerGameBan_RemovePlayerGameBan_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemovePlayerGameBan_RemovePlayerGameBan_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemovePlayerGameBan_RemovePlayerGameBan_Statics::PropPointers) < 2048);
// ********** End Function RemovePlayerGameBan Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_RemovePlayerGameBan_RemovePlayerGameBan_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_RemovePlayerGameBan, nullptr, "RemovePlayerGameBan", 	Z_Construct_UFunction_USIK_RemovePlayerGameBan_RemovePlayerGameBan_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemovePlayerGameBan_RemovePlayerGameBan_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_RemovePlayerGameBan_RemovePlayerGameBan_Statics::SIK_RemovePlayerGameBan_eventRemovePlayerGameBan_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemovePlayerGameBan_RemovePlayerGameBan_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_RemovePlayerGameBan_RemovePlayerGameBan_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_RemovePlayerGameBan_RemovePlayerGameBan_Statics::SIK_RemovePlayerGameBan_eventRemovePlayerGameBan_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_RemovePlayerGameBan_RemovePlayerGameBan()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_RemovePlayerGameBan_RemovePlayerGameBan_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_RemovePlayerGameBan::execRemovePlayerGameBan)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_SteamID);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_RemovePlayerGameBan**)Z_Param__Result=USIK_RemovePlayerGameBan::RemovePlayerGameBan(Z_Param_Key,Z_Param_Out_SteamID,Z_Param_Out_AppID);
	P_NATIVE_END;
}
// ********** End Class USIK_RemovePlayerGameBan Function RemovePlayerGameBan **********************

// ********** Begin Class USIK_RemovePlayerGameBan *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_RemovePlayerGameBan;
UClass* USIK_RemovePlayerGameBan::GetPrivateStaticClass()
{
	using TClass = USIK_RemovePlayerGameBan;
	if (!Z_Registration_Info_UClass_USIK_RemovePlayerGameBan.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_RemovePlayerGameBan"),
			Z_Registration_Info_UClass_USIK_RemovePlayerGameBan.InnerSingleton,
			StaticRegisterNativesUSIK_RemovePlayerGameBan,
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
	return Z_Registration_Info_UClass_USIK_RemovePlayerGameBan.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_RemovePlayerGameBan_NoRegister()
{
	return USIK_RemovePlayerGameBan::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_RemovePlayerGameBan_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/CheatReporting/SIK_RemovePlayerGameBan.h" },
		{ "ModuleRelativePath", "Functions/CheatReporting/SIK_RemovePlayerGameBan.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_RemovePlayerGameBan constinit property declarations *****************
// ********** End Class USIK_RemovePlayerGameBan constinit property declarations *******************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("RemovePlayerGameBan"), .Pointer = &USIK_RemovePlayerGameBan::execRemovePlayerGameBan },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_RemovePlayerGameBan_RemovePlayerGameBan, "RemovePlayerGameBan" }, // 1557385027
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_RemovePlayerGameBan>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_RemovePlayerGameBan_Statics
UObject* (*const Z_Construct_UClass_USIK_RemovePlayerGameBan_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_RemovePlayerGameBan_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_RemovePlayerGameBan_Statics::ClassParams = {
	&USIK_RemovePlayerGameBan::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_RemovePlayerGameBan_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_RemovePlayerGameBan_Statics::Class_MetaDataParams)
};
void USIK_RemovePlayerGameBan::StaticRegisterNativesUSIK_RemovePlayerGameBan()
{
	UClass* Class = USIK_RemovePlayerGameBan::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_RemovePlayerGameBan_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_RemovePlayerGameBan()
{
	if (!Z_Registration_Info_UClass_USIK_RemovePlayerGameBan.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_RemovePlayerGameBan.OuterSingleton, Z_Construct_UClass_USIK_RemovePlayerGameBan_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_RemovePlayerGameBan.OuterSingleton;
}
USIK_RemovePlayerGameBan::USIK_RemovePlayerGameBan(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_RemovePlayerGameBan);
USIK_RemovePlayerGameBan::~USIK_RemovePlayerGameBan() {}
// ********** End Class USIK_RemovePlayerGameBan ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_CheatReporting_SIK_RemovePlayerGameBan_h__Script_SteamWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_RemovePlayerGameBan, USIK_RemovePlayerGameBan::StaticClass, TEXT("USIK_RemovePlayerGameBan"), &Z_Registration_Info_UClass_USIK_RemovePlayerGameBan, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_RemovePlayerGameBan), 2280262121U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_CheatReporting_SIK_RemovePlayerGameBan_h__Script_SteamWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_CheatReporting_SIK_RemovePlayerGameBan_h__Script_SteamWeb_2236637969{
	TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_CheatReporting_SIK_RemovePlayerGameBan_h__Script_SteamWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_CheatReporting_SIK_RemovePlayerGameBan_h__Script_SteamWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
