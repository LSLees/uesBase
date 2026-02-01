// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/LobbyMatchmaking/SIK_RemoveUserFromLobby.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_RemoveUserFromLobby() {}

// ********** Begin Cross Module References ********************************************************
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_RemoveUserFromLobby();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_RemoveUserFromLobby_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USIK_RemoveUserFromLobby Function RemoveUserFromLobby ********************
struct Z_Construct_UFunction_USIK_RemoveUserFromLobby_RemoveUserFromLobby_Statics
{
	struct SIK_RemoveUserFromLobby_eventRemoveUserFromLobby_Parms
	{
		FString Key;
		int32 AppId;
		int64 SteamIdToRemove;
		int64 SteamIdLobby;
		FString InputJson;
		USIK_RemoveUserFromLobby* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|LobbyMatchmaking" },
		{ "CPP_Default_InputJson", "" },
		{ "ModuleRelativePath", "Functions/LobbyMatchmaking/SIK_RemoveUserFromLobby.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamIdToRemove_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamIdLobby_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputJson_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveUserFromLobby constinit property declarations *******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_SteamIdToRemove;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_SteamIdLobby;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InputJson;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RemoveUserFromLobby constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RemoveUserFromLobby Property Definitions ******************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_RemoveUserFromLobby_RemoveUserFromLobby_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoveUserFromLobby_eventRemoveUserFromLobby_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_RemoveUserFromLobby_RemoveUserFromLobby_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoveUserFromLobby_eventRemoveUserFromLobby_Parms, AppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppId_MetaData), NewProp_AppId_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_RemoveUserFromLobby_RemoveUserFromLobby_Statics::NewProp_SteamIdToRemove = { "SteamIdToRemove", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoveUserFromLobby_eventRemoveUserFromLobby_Parms, SteamIdToRemove), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamIdToRemove_MetaData), NewProp_SteamIdToRemove_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_RemoveUserFromLobby_RemoveUserFromLobby_Statics::NewProp_SteamIdLobby = { "SteamIdLobby", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoveUserFromLobby_eventRemoveUserFromLobby_Parms, SteamIdLobby), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamIdLobby_MetaData), NewProp_SteamIdLobby_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_RemoveUserFromLobby_RemoveUserFromLobby_Statics::NewProp_InputJson = { "InputJson", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoveUserFromLobby_eventRemoveUserFromLobby_Parms, InputJson), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputJson_MetaData), NewProp_InputJson_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_RemoveUserFromLobby_RemoveUserFromLobby_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoveUserFromLobby_eventRemoveUserFromLobby_Parms, ReturnValue), Z_Construct_UClass_USIK_RemoveUserFromLobby_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_RemoveUserFromLobby_RemoveUserFromLobby_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoveUserFromLobby_RemoveUserFromLobby_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoveUserFromLobby_RemoveUserFromLobby_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoveUserFromLobby_RemoveUserFromLobby_Statics::NewProp_SteamIdToRemove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoveUserFromLobby_RemoveUserFromLobby_Statics::NewProp_SteamIdLobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoveUserFromLobby_RemoveUserFromLobby_Statics::NewProp_InputJson,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoveUserFromLobby_RemoveUserFromLobby_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoveUserFromLobby_RemoveUserFromLobby_Statics::PropPointers) < 2048);
// ********** End Function RemoveUserFromLobby Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_RemoveUserFromLobby_RemoveUserFromLobby_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_RemoveUserFromLobby, nullptr, "RemoveUserFromLobby", 	Z_Construct_UFunction_USIK_RemoveUserFromLobby_RemoveUserFromLobby_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoveUserFromLobby_RemoveUserFromLobby_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_RemoveUserFromLobby_RemoveUserFromLobby_Statics::SIK_RemoveUserFromLobby_eventRemoveUserFromLobby_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoveUserFromLobby_RemoveUserFromLobby_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_RemoveUserFromLobby_RemoveUserFromLobby_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_RemoveUserFromLobby_RemoveUserFromLobby_Statics::SIK_RemoveUserFromLobby_eventRemoveUserFromLobby_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_RemoveUserFromLobby_RemoveUserFromLobby()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_RemoveUserFromLobby_RemoveUserFromLobby_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_RemoveUserFromLobby::execRemoveUserFromLobby)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppId);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_SteamIdToRemove);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_SteamIdLobby);
	P_GET_PROPERTY(FStrProperty,Z_Param_InputJson);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_RemoveUserFromLobby**)Z_Param__Result=USIK_RemoveUserFromLobby::RemoveUserFromLobby(Z_Param_Key,Z_Param_Out_AppId,Z_Param_Out_SteamIdToRemove,Z_Param_Out_SteamIdLobby,Z_Param_InputJson);
	P_NATIVE_END;
}
// ********** End Class USIK_RemoveUserFromLobby Function RemoveUserFromLobby **********************

// ********** Begin Class USIK_RemoveUserFromLobby *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_RemoveUserFromLobby;
UClass* USIK_RemoveUserFromLobby::GetPrivateStaticClass()
{
	using TClass = USIK_RemoveUserFromLobby;
	if (!Z_Registration_Info_UClass_USIK_RemoveUserFromLobby.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_RemoveUserFromLobby"),
			Z_Registration_Info_UClass_USIK_RemoveUserFromLobby.InnerSingleton,
			StaticRegisterNativesUSIK_RemoveUserFromLobby,
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
	return Z_Registration_Info_UClass_USIK_RemoveUserFromLobby.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_RemoveUserFromLobby_NoRegister()
{
	return USIK_RemoveUserFromLobby::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_RemoveUserFromLobby_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/LobbyMatchmaking/SIK_RemoveUserFromLobby.h" },
		{ "ModuleRelativePath", "Functions/LobbyMatchmaking/SIK_RemoveUserFromLobby.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_RemoveUserFromLobby constinit property declarations *****************
// ********** End Class USIK_RemoveUserFromLobby constinit property declarations *******************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("RemoveUserFromLobby"), .Pointer = &USIK_RemoveUserFromLobby::execRemoveUserFromLobby },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_RemoveUserFromLobby_RemoveUserFromLobby, "RemoveUserFromLobby" }, // 3619168127
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_RemoveUserFromLobby>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_RemoveUserFromLobby_Statics
UObject* (*const Z_Construct_UClass_USIK_RemoveUserFromLobby_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_RemoveUserFromLobby_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_RemoveUserFromLobby_Statics::ClassParams = {
	&USIK_RemoveUserFromLobby::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_RemoveUserFromLobby_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_RemoveUserFromLobby_Statics::Class_MetaDataParams)
};
void USIK_RemoveUserFromLobby::StaticRegisterNativesUSIK_RemoveUserFromLobby()
{
	UClass* Class = USIK_RemoveUserFromLobby::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_RemoveUserFromLobby_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_RemoveUserFromLobby()
{
	if (!Z_Registration_Info_UClass_USIK_RemoveUserFromLobby.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_RemoveUserFromLobby.OuterSingleton, Z_Construct_UClass_USIK_RemoveUserFromLobby_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_RemoveUserFromLobby.OuterSingleton;
}
USIK_RemoveUserFromLobby::USIK_RemoveUserFromLobby(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_RemoveUserFromLobby);
USIK_RemoveUserFromLobby::~USIK_RemoveUserFromLobby() {}
// ********** End Class USIK_RemoveUserFromLobby ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_LobbyMatchmaking_SIK_RemoveUserFromLobby_h__Script_SteamWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_RemoveUserFromLobby, USIK_RemoveUserFromLobby::StaticClass, TEXT("USIK_RemoveUserFromLobby"), &Z_Registration_Info_UClass_USIK_RemoveUserFromLobby, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_RemoveUserFromLobby), 1010275425U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_LobbyMatchmaking_SIK_RemoveUserFromLobby_h__Script_SteamWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_LobbyMatchmaking_SIK_RemoveUserFromLobby_h__Script_SteamWeb_1427466618{
	TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_LobbyMatchmaking_SIK_RemoveUserFromLobby_h__Script_SteamWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_LobbyMatchmaking_SIK_RemoveUserFromLobby_h__Script_SteamWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
