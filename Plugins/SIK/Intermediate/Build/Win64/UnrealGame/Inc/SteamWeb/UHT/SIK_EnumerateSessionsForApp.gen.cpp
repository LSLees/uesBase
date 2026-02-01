// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/GameNotifications/SIK_EnumerateSessionsForApp.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_EnumerateSessionsForApp() {}

// ********** Begin Cross Module References ********************************************************
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_EnumerateSessionsForApp();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_EnumerateSessionsForApp_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USIK_EnumerateSessionsForApp Function EnumerateSessionsForApp ************
struct Z_Construct_UFunction_USIK_EnumerateSessionsForApp_EnumerateSessionsForApp_Statics
{
	struct SIK_EnumerateSessionsForApp_eventEnumerateSessionsForApp_Parms
	{
		FString Key;
		int32 AppId;
		int64 SteamId;
		bool IncludeAllUserMessages;
		bool IncludeAuthUserMessage;
		FString Language;
		USIK_EnumerateSessionsForApp* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|GameNotifications" },
		{ "Comment", "//This returns a list of sessions that a Steam ID is part of.\n" },
		{ "ModuleRelativePath", "Functions/GameNotifications/SIK_EnumerateSessionsForApp.h" },
		{ "ToolTip", "This returns a list of sessions that a Steam ID is part of." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IncludeAllUserMessages_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IncludeAuthUserMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Language_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function EnumerateSessionsForApp constinit property declarations ***************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_SteamId;
	static void NewProp_IncludeAllUserMessages_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IncludeAllUserMessages;
	static void NewProp_IncludeAuthUserMessage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IncludeAuthUserMessage;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Language;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EnumerateSessionsForApp constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EnumerateSessionsForApp Property Definitions **************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_EnumerateSessionsForApp_EnumerateSessionsForApp_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_EnumerateSessionsForApp_eventEnumerateSessionsForApp_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_EnumerateSessionsForApp_EnumerateSessionsForApp_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_EnumerateSessionsForApp_eventEnumerateSessionsForApp_Parms, AppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppId_MetaData), NewProp_AppId_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_EnumerateSessionsForApp_EnumerateSessionsForApp_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_EnumerateSessionsForApp_eventEnumerateSessionsForApp_Parms, SteamId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamId_MetaData), NewProp_SteamId_MetaData) };
void Z_Construct_UFunction_USIK_EnumerateSessionsForApp_EnumerateSessionsForApp_Statics::NewProp_IncludeAllUserMessages_SetBit(void* Obj)
{
	((SIK_EnumerateSessionsForApp_eventEnumerateSessionsForApp_Parms*)Obj)->IncludeAllUserMessages = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_EnumerateSessionsForApp_EnumerateSessionsForApp_Statics::NewProp_IncludeAllUserMessages = { "IncludeAllUserMessages", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_EnumerateSessionsForApp_eventEnumerateSessionsForApp_Parms), &Z_Construct_UFunction_USIK_EnumerateSessionsForApp_EnumerateSessionsForApp_Statics::NewProp_IncludeAllUserMessages_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IncludeAllUserMessages_MetaData), NewProp_IncludeAllUserMessages_MetaData) };
void Z_Construct_UFunction_USIK_EnumerateSessionsForApp_EnumerateSessionsForApp_Statics::NewProp_IncludeAuthUserMessage_SetBit(void* Obj)
{
	((SIK_EnumerateSessionsForApp_eventEnumerateSessionsForApp_Parms*)Obj)->IncludeAuthUserMessage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_EnumerateSessionsForApp_EnumerateSessionsForApp_Statics::NewProp_IncludeAuthUserMessage = { "IncludeAuthUserMessage", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_EnumerateSessionsForApp_eventEnumerateSessionsForApp_Parms), &Z_Construct_UFunction_USIK_EnumerateSessionsForApp_EnumerateSessionsForApp_Statics::NewProp_IncludeAuthUserMessage_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IncludeAuthUserMessage_MetaData), NewProp_IncludeAuthUserMessage_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_EnumerateSessionsForApp_EnumerateSessionsForApp_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_EnumerateSessionsForApp_eventEnumerateSessionsForApp_Parms, Language), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Language_MetaData), NewProp_Language_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_EnumerateSessionsForApp_EnumerateSessionsForApp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_EnumerateSessionsForApp_eventEnumerateSessionsForApp_Parms, ReturnValue), Z_Construct_UClass_USIK_EnumerateSessionsForApp_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_EnumerateSessionsForApp_EnumerateSessionsForApp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_EnumerateSessionsForApp_EnumerateSessionsForApp_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_EnumerateSessionsForApp_EnumerateSessionsForApp_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_EnumerateSessionsForApp_EnumerateSessionsForApp_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_EnumerateSessionsForApp_EnumerateSessionsForApp_Statics::NewProp_IncludeAllUserMessages,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_EnumerateSessionsForApp_EnumerateSessionsForApp_Statics::NewProp_IncludeAuthUserMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_EnumerateSessionsForApp_EnumerateSessionsForApp_Statics::NewProp_Language,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_EnumerateSessionsForApp_EnumerateSessionsForApp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_EnumerateSessionsForApp_EnumerateSessionsForApp_Statics::PropPointers) < 2048);
// ********** End Function EnumerateSessionsForApp Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_EnumerateSessionsForApp_EnumerateSessionsForApp_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_EnumerateSessionsForApp, nullptr, "EnumerateSessionsForApp", 	Z_Construct_UFunction_USIK_EnumerateSessionsForApp_EnumerateSessionsForApp_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_EnumerateSessionsForApp_EnumerateSessionsForApp_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_EnumerateSessionsForApp_EnumerateSessionsForApp_Statics::SIK_EnumerateSessionsForApp_eventEnumerateSessionsForApp_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_EnumerateSessionsForApp_EnumerateSessionsForApp_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_EnumerateSessionsForApp_EnumerateSessionsForApp_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_EnumerateSessionsForApp_EnumerateSessionsForApp_Statics::SIK_EnumerateSessionsForApp_eventEnumerateSessionsForApp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_EnumerateSessionsForApp_EnumerateSessionsForApp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_EnumerateSessionsForApp_EnumerateSessionsForApp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_EnumerateSessionsForApp::execEnumerateSessionsForApp)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppId);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_SteamId);
	P_GET_UBOOL_REF(Z_Param_Out_IncludeAllUserMessages);
	P_GET_UBOOL_REF(Z_Param_Out_IncludeAuthUserMessage);
	P_GET_PROPERTY(FStrProperty,Z_Param_Language);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_EnumerateSessionsForApp**)Z_Param__Result=USIK_EnumerateSessionsForApp::EnumerateSessionsForApp(Z_Param_Key,Z_Param_Out_AppId,Z_Param_Out_SteamId,Z_Param_Out_IncludeAllUserMessages,Z_Param_Out_IncludeAuthUserMessage,Z_Param_Language);
	P_NATIVE_END;
}
// ********** End Class USIK_EnumerateSessionsForApp Function EnumerateSessionsForApp **************

// ********** Begin Class USIK_EnumerateSessionsForApp *********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_EnumerateSessionsForApp;
UClass* USIK_EnumerateSessionsForApp::GetPrivateStaticClass()
{
	using TClass = USIK_EnumerateSessionsForApp;
	if (!Z_Registration_Info_UClass_USIK_EnumerateSessionsForApp.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_EnumerateSessionsForApp"),
			Z_Registration_Info_UClass_USIK_EnumerateSessionsForApp.InnerSingleton,
			StaticRegisterNativesUSIK_EnumerateSessionsForApp,
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
	return Z_Registration_Info_UClass_USIK_EnumerateSessionsForApp.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_EnumerateSessionsForApp_NoRegister()
{
	return USIK_EnumerateSessionsForApp::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_EnumerateSessionsForApp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/GameNotifications/SIK_EnumerateSessionsForApp.h" },
		{ "ModuleRelativePath", "Functions/GameNotifications/SIK_EnumerateSessionsForApp.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_EnumerateSessionsForApp constinit property declarations *************
// ********** End Class USIK_EnumerateSessionsForApp constinit property declarations ***************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("EnumerateSessionsForApp"), .Pointer = &USIK_EnumerateSessionsForApp::execEnumerateSessionsForApp },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_EnumerateSessionsForApp_EnumerateSessionsForApp, "EnumerateSessionsForApp" }, // 3640580501
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_EnumerateSessionsForApp>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_EnumerateSessionsForApp_Statics
UObject* (*const Z_Construct_UClass_USIK_EnumerateSessionsForApp_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_EnumerateSessionsForApp_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_EnumerateSessionsForApp_Statics::ClassParams = {
	&USIK_EnumerateSessionsForApp::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_EnumerateSessionsForApp_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_EnumerateSessionsForApp_Statics::Class_MetaDataParams)
};
void USIK_EnumerateSessionsForApp::StaticRegisterNativesUSIK_EnumerateSessionsForApp()
{
	UClass* Class = USIK_EnumerateSessionsForApp::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_EnumerateSessionsForApp_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_EnumerateSessionsForApp()
{
	if (!Z_Registration_Info_UClass_USIK_EnumerateSessionsForApp.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_EnumerateSessionsForApp.OuterSingleton, Z_Construct_UClass_USIK_EnumerateSessionsForApp_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_EnumerateSessionsForApp.OuterSingleton;
}
USIK_EnumerateSessionsForApp::USIK_EnumerateSessionsForApp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_EnumerateSessionsForApp);
USIK_EnumerateSessionsForApp::~USIK_EnumerateSessionsForApp() {}
// ********** End Class USIK_EnumerateSessionsForApp ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameNotifications_SIK_EnumerateSessionsForApp_h__Script_SteamWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_EnumerateSessionsForApp, USIK_EnumerateSessionsForApp::StaticClass, TEXT("USIK_EnumerateSessionsForApp"), &Z_Registration_Info_UClass_USIK_EnumerateSessionsForApp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_EnumerateSessionsForApp), 1235111513U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameNotifications_SIK_EnumerateSessionsForApp_h__Script_SteamWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameNotifications_SIK_EnumerateSessionsForApp_h__Script_SteamWeb_2072328489{
	TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameNotifications_SIK_EnumerateSessionsForApp_h__Script_SteamWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameNotifications_SIK_EnumerateSessionsForApp_h__Script_SteamWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
