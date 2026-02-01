// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/UserAuth/SIK_AuthenticateUserTicket.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_AuthenticateUserTicket() {}

// ********** Begin Cross Module References ********************************************************
STEAMWEB_API UClass* Z_Construct_UClass_USIK_AuthenticateUserTicket();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_AuthenticateUserTicket_NoRegister();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USIK_AuthenticateUserTicket Function AuthenticateUserTicket **************
struct Z_Construct_UFunction_USIK_AuthenticateUserTicket_AuthenticateUserTicket_Statics
{
	struct SIK_AuthenticateUserTicket_eventAuthenticateUserTicket_Parms
	{
		FString Key;
		int32 AppId;
		FString Ticket;
		FString Identity;
		USIK_AuthenticateUserTicket* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|User" },
		{ "ModuleRelativePath", "Functions/UserAuth/SIK_AuthenticateUserTicket.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ticket_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Identity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AuthenticateUserTicket constinit property declarations ****************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Ticket;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Identity;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AuthenticateUserTicket constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AuthenticateUserTicket Property Definitions ***************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_AuthenticateUserTicket_AuthenticateUserTicket_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_AuthenticateUserTicket_eventAuthenticateUserTicket_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_AuthenticateUserTicket_AuthenticateUserTicket_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_AuthenticateUserTicket_eventAuthenticateUserTicket_Parms, AppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppId_MetaData), NewProp_AppId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_AuthenticateUserTicket_AuthenticateUserTicket_Statics::NewProp_Ticket = { "Ticket", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_AuthenticateUserTicket_eventAuthenticateUserTicket_Parms, Ticket), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ticket_MetaData), NewProp_Ticket_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_AuthenticateUserTicket_AuthenticateUserTicket_Statics::NewProp_Identity = { "Identity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_AuthenticateUserTicket_eventAuthenticateUserTicket_Parms, Identity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Identity_MetaData), NewProp_Identity_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_AuthenticateUserTicket_AuthenticateUserTicket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_AuthenticateUserTicket_eventAuthenticateUserTicket_Parms, ReturnValue), Z_Construct_UClass_USIK_AuthenticateUserTicket_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_AuthenticateUserTicket_AuthenticateUserTicket_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_AuthenticateUserTicket_AuthenticateUserTicket_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_AuthenticateUserTicket_AuthenticateUserTicket_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_AuthenticateUserTicket_AuthenticateUserTicket_Statics::NewProp_Ticket,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_AuthenticateUserTicket_AuthenticateUserTicket_Statics::NewProp_Identity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_AuthenticateUserTicket_AuthenticateUserTicket_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AuthenticateUserTicket_AuthenticateUserTicket_Statics::PropPointers) < 2048);
// ********** End Function AuthenticateUserTicket Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_AuthenticateUserTicket_AuthenticateUserTicket_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_AuthenticateUserTicket, nullptr, "AuthenticateUserTicket", 	Z_Construct_UFunction_USIK_AuthenticateUserTicket_AuthenticateUserTicket_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AuthenticateUserTicket_AuthenticateUserTicket_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_AuthenticateUserTicket_AuthenticateUserTicket_Statics::SIK_AuthenticateUserTicket_eventAuthenticateUserTicket_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AuthenticateUserTicket_AuthenticateUserTicket_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_AuthenticateUserTicket_AuthenticateUserTicket_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_AuthenticateUserTicket_AuthenticateUserTicket_Statics::SIK_AuthenticateUserTicket_eventAuthenticateUserTicket_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_AuthenticateUserTicket_AuthenticateUserTicket()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_AuthenticateUserTicket_AuthenticateUserTicket_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_AuthenticateUserTicket::execAuthenticateUserTicket)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_Ticket);
	P_GET_PROPERTY(FStrProperty,Z_Param_Identity);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_AuthenticateUserTicket**)Z_Param__Result=USIK_AuthenticateUserTicket::AuthenticateUserTicket(Z_Param_Key,Z_Param_Out_AppId,Z_Param_Ticket,Z_Param_Identity);
	P_NATIVE_END;
}
// ********** End Class USIK_AuthenticateUserTicket Function AuthenticateUserTicket ****************

// ********** Begin Class USIK_AuthenticateUserTicket **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_AuthenticateUserTicket;
UClass* USIK_AuthenticateUserTicket::GetPrivateStaticClass()
{
	using TClass = USIK_AuthenticateUserTicket;
	if (!Z_Registration_Info_UClass_USIK_AuthenticateUserTicket.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_AuthenticateUserTicket"),
			Z_Registration_Info_UClass_USIK_AuthenticateUserTicket.InnerSingleton,
			StaticRegisterNativesUSIK_AuthenticateUserTicket,
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
	return Z_Registration_Info_UClass_USIK_AuthenticateUserTicket.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_AuthenticateUserTicket_NoRegister()
{
	return USIK_AuthenticateUserTicket::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_AuthenticateUserTicket_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/UserAuth/SIK_AuthenticateUserTicket.h" },
		{ "ModuleRelativePath", "Functions/UserAuth/SIK_AuthenticateUserTicket.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_AuthenticateUserTicket constinit property declarations **************
// ********** End Class USIK_AuthenticateUserTicket constinit property declarations ****************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AuthenticateUserTicket"), .Pointer = &USIK_AuthenticateUserTicket::execAuthenticateUserTicket },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_AuthenticateUserTicket_AuthenticateUserTicket, "AuthenticateUserTicket" }, // 1542144957
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_AuthenticateUserTicket>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_AuthenticateUserTicket_Statics
UObject* (*const Z_Construct_UClass_USIK_AuthenticateUserTicket_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_AuthenticateUserTicket_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_AuthenticateUserTicket_Statics::ClassParams = {
	&USIK_AuthenticateUserTicket::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_AuthenticateUserTicket_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_AuthenticateUserTicket_Statics::Class_MetaDataParams)
};
void USIK_AuthenticateUserTicket::StaticRegisterNativesUSIK_AuthenticateUserTicket()
{
	UClass* Class = USIK_AuthenticateUserTicket::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_AuthenticateUserTicket_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_AuthenticateUserTicket()
{
	if (!Z_Registration_Info_UClass_USIK_AuthenticateUserTicket.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_AuthenticateUserTicket.OuterSingleton, Z_Construct_UClass_USIK_AuthenticateUserTicket_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_AuthenticateUserTicket.OuterSingleton;
}
USIK_AuthenticateUserTicket::USIK_AuthenticateUserTicket(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_AuthenticateUserTicket);
USIK_AuthenticateUserTicket::~USIK_AuthenticateUserTicket() {}
// ********** End Class USIK_AuthenticateUserTicket ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_UserAuth_SIK_AuthenticateUserTicket_h__Script_SteamWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_AuthenticateUserTicket, USIK_AuthenticateUserTicket::StaticClass, TEXT("USIK_AuthenticateUserTicket"), &Z_Registration_Info_UClass_USIK_AuthenticateUserTicket, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_AuthenticateUserTicket), 2666037354U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_UserAuth_SIK_AuthenticateUserTicket_h__Script_SteamWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_UserAuth_SIK_AuthenticateUserTicket_h__Script_SteamWeb_3052087780{
	TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_UserAuth_SIK_AuthenticateUserTicket_h__Script_SteamWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_UserAuth_SIK_AuthenticateUserTicket_h__Script_SteamWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
