// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/CheatReporting/SIK_RequestVacStatusForUser.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_RequestVacStatusForUser() {}

// ********** Begin Cross Module References ********************************************************
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_RequestVacStatusForUser();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_RequestVacStatusForUser_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USIK_RequestVacStatusForUser Function RequestVacStatusForUser ************
struct Z_Construct_UFunction_USIK_RequestVacStatusForUser_RequestVacStatusForUser_Statics
{
	struct SIK_RequestVacStatusForUser_eventRequestVacStatusForUser_Parms
	{
		FString Key;
		int64 SteamId;
		int32 AppId;
		int64 SessionId;
		USIK_RequestVacStatusForUser* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|Cheat Reporting" },
		{ "Comment", "//Checks a user's VAC ban status and verifies a user's VAC session status. If verification fails, then do not let the user matchmake into a secure game.\n" },
		{ "CPP_Default_SessionId", "-1" },
		{ "ModuleRelativePath", "Functions/CheatReporting/SIK_RequestVacStatusForUser.h" },
		{ "ToolTip", "Checks a user's VAC ban status and verifies a user's VAC session status. If verification fails, then do not let the user matchmake into a secure game." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function RequestVacStatusForUser constinit property declarations ***************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_SessionId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RequestVacStatusForUser constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RequestVacStatusForUser Property Definitions **************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_RequestVacStatusForUser_RequestVacStatusForUser_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RequestVacStatusForUser_eventRequestVacStatusForUser_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_RequestVacStatusForUser_RequestVacStatusForUser_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RequestVacStatusForUser_eventRequestVacStatusForUser_Parms, SteamId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamId_MetaData), NewProp_SteamId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_RequestVacStatusForUser_RequestVacStatusForUser_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RequestVacStatusForUser_eventRequestVacStatusForUser_Parms, AppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppId_MetaData), NewProp_AppId_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_RequestVacStatusForUser_RequestVacStatusForUser_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RequestVacStatusForUser_eventRequestVacStatusForUser_Parms, SessionId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_RequestVacStatusForUser_RequestVacStatusForUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RequestVacStatusForUser_eventRequestVacStatusForUser_Parms, ReturnValue), Z_Construct_UClass_USIK_RequestVacStatusForUser_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_RequestVacStatusForUser_RequestVacStatusForUser_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RequestVacStatusForUser_RequestVacStatusForUser_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RequestVacStatusForUser_RequestVacStatusForUser_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RequestVacStatusForUser_RequestVacStatusForUser_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RequestVacStatusForUser_RequestVacStatusForUser_Statics::NewProp_SessionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RequestVacStatusForUser_RequestVacStatusForUser_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RequestVacStatusForUser_RequestVacStatusForUser_Statics::PropPointers) < 2048);
// ********** End Function RequestVacStatusForUser Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_RequestVacStatusForUser_RequestVacStatusForUser_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_RequestVacStatusForUser, nullptr, "RequestVacStatusForUser", 	Z_Construct_UFunction_USIK_RequestVacStatusForUser_RequestVacStatusForUser_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RequestVacStatusForUser_RequestVacStatusForUser_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_RequestVacStatusForUser_RequestVacStatusForUser_Statics::SIK_RequestVacStatusForUser_eventRequestVacStatusForUser_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RequestVacStatusForUser_RequestVacStatusForUser_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_RequestVacStatusForUser_RequestVacStatusForUser_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_RequestVacStatusForUser_RequestVacStatusForUser_Statics::SIK_RequestVacStatusForUser_eventRequestVacStatusForUser_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_RequestVacStatusForUser_RequestVacStatusForUser()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_RequestVacStatusForUser_RequestVacStatusForUser_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_RequestVacStatusForUser::execRequestVacStatusForUser)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_SteamId);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppId);
	P_GET_PROPERTY(FInt64Property,Z_Param_SessionId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_RequestVacStatusForUser**)Z_Param__Result=USIK_RequestVacStatusForUser::RequestVacStatusForUser(Z_Param_Key,Z_Param_Out_SteamId,Z_Param_Out_AppId,Z_Param_SessionId);
	P_NATIVE_END;
}
// ********** End Class USIK_RequestVacStatusForUser Function RequestVacStatusForUser **************

// ********** Begin Class USIK_RequestVacStatusForUser *********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_RequestVacStatusForUser;
UClass* USIK_RequestVacStatusForUser::GetPrivateStaticClass()
{
	using TClass = USIK_RequestVacStatusForUser;
	if (!Z_Registration_Info_UClass_USIK_RequestVacStatusForUser.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_RequestVacStatusForUser"),
			Z_Registration_Info_UClass_USIK_RequestVacStatusForUser.InnerSingleton,
			StaticRegisterNativesUSIK_RequestVacStatusForUser,
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
	return Z_Registration_Info_UClass_USIK_RequestVacStatusForUser.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_RequestVacStatusForUser_NoRegister()
{
	return USIK_RequestVacStatusForUser::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_RequestVacStatusForUser_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/CheatReporting/SIK_RequestVacStatusForUser.h" },
		{ "ModuleRelativePath", "Functions/CheatReporting/SIK_RequestVacStatusForUser.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_RequestVacStatusForUser constinit property declarations *************
// ********** End Class USIK_RequestVacStatusForUser constinit property declarations ***************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("RequestVacStatusForUser"), .Pointer = &USIK_RequestVacStatusForUser::execRequestVacStatusForUser },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_RequestVacStatusForUser_RequestVacStatusForUser, "RequestVacStatusForUser" }, // 2015634509
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_RequestVacStatusForUser>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_RequestVacStatusForUser_Statics
UObject* (*const Z_Construct_UClass_USIK_RequestVacStatusForUser_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_RequestVacStatusForUser_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_RequestVacStatusForUser_Statics::ClassParams = {
	&USIK_RequestVacStatusForUser::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_RequestVacStatusForUser_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_RequestVacStatusForUser_Statics::Class_MetaDataParams)
};
void USIK_RequestVacStatusForUser::StaticRegisterNativesUSIK_RequestVacStatusForUser()
{
	UClass* Class = USIK_RequestVacStatusForUser::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_RequestVacStatusForUser_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_RequestVacStatusForUser()
{
	if (!Z_Registration_Info_UClass_USIK_RequestVacStatusForUser.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_RequestVacStatusForUser.OuterSingleton, Z_Construct_UClass_USIK_RequestVacStatusForUser_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_RequestVacStatusForUser.OuterSingleton;
}
USIK_RequestVacStatusForUser::USIK_RequestVacStatusForUser(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_RequestVacStatusForUser);
USIK_RequestVacStatusForUser::~USIK_RequestVacStatusForUser() {}
// ********** End Class USIK_RequestVacStatusForUser ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_CheatReporting_SIK_RequestVacStatusForUser_h__Script_SteamWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_RequestVacStatusForUser, USIK_RequestVacStatusForUser::StaticClass, TEXT("USIK_RequestVacStatusForUser"), &Z_Registration_Info_UClass_USIK_RequestVacStatusForUser, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_RequestVacStatusForUser), 3319952321U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_CheatReporting_SIK_RequestVacStatusForUser_h__Script_SteamWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_CheatReporting_SIK_RequestVacStatusForUser_h__Script_SteamWeb_512794526{
	TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_CheatReporting_SIK_RequestVacStatusForUser_h__Script_SteamWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_CheatReporting_SIK_RequestVacStatusForUser_h__Script_SteamWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
