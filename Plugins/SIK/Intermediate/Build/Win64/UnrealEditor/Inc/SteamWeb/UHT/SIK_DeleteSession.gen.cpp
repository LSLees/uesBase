// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/GameNotifications/SIK_DeleteSession.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_DeleteSession() {}

// ********** Begin Cross Module References ********************************************************
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_DeleteSession();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_DeleteSession_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USIK_DeleteSession Function DeleteSession ********************************
struct Z_Construct_UFunction_USIK_DeleteSession_DeleteSession_Statics
{
	struct SIK_DeleteSession_eventDeleteSession_Parms
	{
		FString Key;
		int64 SessionId;
		int32 AppId;
		int64 SteamId;
		USIK_DeleteSession* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|GameNotifications" },
		{ "Comment", "//Delete an active async game session. This will remove all notifications to any user that is part of the game session.\n" },
		{ "ModuleRelativePath", "Functions/GameNotifications/SIK_DeleteSession.h" },
		{ "ToolTip", "Delete an active async game session. This will remove all notifications to any user that is part of the game session." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SessionId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function DeleteSession constinit property declarations *************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_SessionId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DeleteSession constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DeleteSession Property Definitions ************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_DeleteSession_DeleteSession_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_DeleteSession_eventDeleteSession_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_DeleteSession_DeleteSession_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_DeleteSession_eventDeleteSession_Parms, SessionId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionId_MetaData), NewProp_SessionId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_DeleteSession_DeleteSession_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_DeleteSession_eventDeleteSession_Parms, AppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppId_MetaData), NewProp_AppId_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_DeleteSession_DeleteSession_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_DeleteSession_eventDeleteSession_Parms, SteamId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamId_MetaData), NewProp_SteamId_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_DeleteSession_DeleteSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_DeleteSession_eventDeleteSession_Parms, ReturnValue), Z_Construct_UClass_USIK_DeleteSession_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_DeleteSession_DeleteSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_DeleteSession_DeleteSession_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_DeleteSession_DeleteSession_Statics::NewProp_SessionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_DeleteSession_DeleteSession_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_DeleteSession_DeleteSession_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_DeleteSession_DeleteSession_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_DeleteSession_DeleteSession_Statics::PropPointers) < 2048);
// ********** End Function DeleteSession Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_DeleteSession_DeleteSession_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_DeleteSession, nullptr, "DeleteSession", 	Z_Construct_UFunction_USIK_DeleteSession_DeleteSession_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_DeleteSession_DeleteSession_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_DeleteSession_DeleteSession_Statics::SIK_DeleteSession_eventDeleteSession_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_DeleteSession_DeleteSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_DeleteSession_DeleteSession_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_DeleteSession_DeleteSession_Statics::SIK_DeleteSession_eventDeleteSession_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_DeleteSession_DeleteSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_DeleteSession_DeleteSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_DeleteSession::execDeleteSession)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_SessionId);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppId);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_SteamId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_DeleteSession**)Z_Param__Result=USIK_DeleteSession::DeleteSession(Z_Param_Key,Z_Param_Out_SessionId,Z_Param_Out_AppId,Z_Param_Out_SteamId);
	P_NATIVE_END;
}
// ********** End Class USIK_DeleteSession Function DeleteSession **********************************

// ********** Begin Class USIK_DeleteSession *******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_DeleteSession;
UClass* USIK_DeleteSession::GetPrivateStaticClass()
{
	using TClass = USIK_DeleteSession;
	if (!Z_Registration_Info_UClass_USIK_DeleteSession.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_DeleteSession"),
			Z_Registration_Info_UClass_USIK_DeleteSession.InnerSingleton,
			StaticRegisterNativesUSIK_DeleteSession,
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
	return Z_Registration_Info_UClass_USIK_DeleteSession.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_DeleteSession_NoRegister()
{
	return USIK_DeleteSession::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_DeleteSession_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/GameNotifications/SIK_DeleteSession.h" },
		{ "ModuleRelativePath", "Functions/GameNotifications/SIK_DeleteSession.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_DeleteSession constinit property declarations ***********************
// ********** End Class USIK_DeleteSession constinit property declarations *************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("DeleteSession"), .Pointer = &USIK_DeleteSession::execDeleteSession },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_DeleteSession_DeleteSession, "DeleteSession" }, // 1445587955
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_DeleteSession>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_DeleteSession_Statics
UObject* (*const Z_Construct_UClass_USIK_DeleteSession_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_DeleteSession_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_DeleteSession_Statics::ClassParams = {
	&USIK_DeleteSession::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_DeleteSession_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_DeleteSession_Statics::Class_MetaDataParams)
};
void USIK_DeleteSession::StaticRegisterNativesUSIK_DeleteSession()
{
	UClass* Class = USIK_DeleteSession::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_DeleteSession_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_DeleteSession()
{
	if (!Z_Registration_Info_UClass_USIK_DeleteSession.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_DeleteSession.OuterSingleton, Z_Construct_UClass_USIK_DeleteSession_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_DeleteSession.OuterSingleton;
}
USIK_DeleteSession::USIK_DeleteSession(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_DeleteSession);
USIK_DeleteSession::~USIK_DeleteSession() {}
// ********** End Class USIK_DeleteSession *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameNotifications_SIK_DeleteSession_h__Script_SteamWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_DeleteSession, USIK_DeleteSession::StaticClass, TEXT("USIK_DeleteSession"), &Z_Registration_Info_UClass_USIK_DeleteSession, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_DeleteSession), 538682382U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameNotifications_SIK_DeleteSession_h__Script_SteamWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameNotifications_SIK_DeleteSession_h__Script_SteamWeb_256373003{
	TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameNotifications_SIK_DeleteSession_h__Script_SteamWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameNotifications_SIK_DeleteSession_h__Script_SteamWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
