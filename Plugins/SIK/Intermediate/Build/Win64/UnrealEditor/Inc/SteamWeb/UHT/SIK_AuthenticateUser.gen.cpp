// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/UserAuth/SIK_AuthenticateUser.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_AuthenticateUser() {}

// ********** Begin Cross Module References ********************************************************
STEAMWEB_API UClass* Z_Construct_UClass_USIK_AuthenticateUser();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_AuthenticateUser_NoRegister();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USIK_AuthenticateUser Function AuthenticateUser **************************
struct Z_Construct_UFunction_USIK_AuthenticateUser_AuthenticateUser_Statics
{
	struct SIK_AuthenticateUser_eventAuthenticateUser_Parms
	{
		int64 SteamId;
		TArray<uint8> SessionKey;
		TArray<uint8> EncryptedLoginKey;
		USIK_AuthenticateUser* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|User" },
		{ "ModuleRelativePath", "Functions/UserAuth/SIK_AuthenticateUser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SessionKey_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EncryptedLoginKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AuthenticateUser constinit property declarations **********************
	static const UECodeGen_Private::FInt64PropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SessionKey_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SessionKey;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EncryptedLoginKey_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EncryptedLoginKey;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AuthenticateUser constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AuthenticateUser Property Definitions *********************************
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_AuthenticateUser_AuthenticateUser_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_AuthenticateUser_eventAuthenticateUser_Parms, SteamId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamId_MetaData), NewProp_SteamId_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_AuthenticateUser_AuthenticateUser_Statics::NewProp_SessionKey_Inner = { "SessionKey", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_AuthenticateUser_AuthenticateUser_Statics::NewProp_SessionKey = { "SessionKey", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_AuthenticateUser_eventAuthenticateUser_Parms, SessionKey), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionKey_MetaData), NewProp_SessionKey_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_AuthenticateUser_AuthenticateUser_Statics::NewProp_EncryptedLoginKey_Inner = { "EncryptedLoginKey", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_AuthenticateUser_AuthenticateUser_Statics::NewProp_EncryptedLoginKey = { "EncryptedLoginKey", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_AuthenticateUser_eventAuthenticateUser_Parms, EncryptedLoginKey), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EncryptedLoginKey_MetaData), NewProp_EncryptedLoginKey_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_AuthenticateUser_AuthenticateUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_AuthenticateUser_eventAuthenticateUser_Parms, ReturnValue), Z_Construct_UClass_USIK_AuthenticateUser_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_AuthenticateUser_AuthenticateUser_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_AuthenticateUser_AuthenticateUser_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_AuthenticateUser_AuthenticateUser_Statics::NewProp_SessionKey_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_AuthenticateUser_AuthenticateUser_Statics::NewProp_SessionKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_AuthenticateUser_AuthenticateUser_Statics::NewProp_EncryptedLoginKey_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_AuthenticateUser_AuthenticateUser_Statics::NewProp_EncryptedLoginKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_AuthenticateUser_AuthenticateUser_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AuthenticateUser_AuthenticateUser_Statics::PropPointers) < 2048);
// ********** End Function AuthenticateUser Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_AuthenticateUser_AuthenticateUser_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_AuthenticateUser, nullptr, "AuthenticateUser", 	Z_Construct_UFunction_USIK_AuthenticateUser_AuthenticateUser_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AuthenticateUser_AuthenticateUser_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_AuthenticateUser_AuthenticateUser_Statics::SIK_AuthenticateUser_eventAuthenticateUser_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AuthenticateUser_AuthenticateUser_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_AuthenticateUser_AuthenticateUser_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_AuthenticateUser_AuthenticateUser_Statics::SIK_AuthenticateUser_eventAuthenticateUser_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_AuthenticateUser_AuthenticateUser()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_AuthenticateUser_AuthenticateUser_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_AuthenticateUser::execAuthenticateUser)
{
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_SteamId);
	P_GET_TARRAY_REF(uint8,Z_Param_Out_SessionKey);
	P_GET_TARRAY_REF(uint8,Z_Param_Out_EncryptedLoginKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_AuthenticateUser**)Z_Param__Result=USIK_AuthenticateUser::AuthenticateUser(Z_Param_Out_SteamId,Z_Param_Out_SessionKey,Z_Param_Out_EncryptedLoginKey);
	P_NATIVE_END;
}
// ********** End Class USIK_AuthenticateUser Function AuthenticateUser ****************************

// ********** Begin Class USIK_AuthenticateUser ****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_AuthenticateUser;
UClass* USIK_AuthenticateUser::GetPrivateStaticClass()
{
	using TClass = USIK_AuthenticateUser;
	if (!Z_Registration_Info_UClass_USIK_AuthenticateUser.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_AuthenticateUser"),
			Z_Registration_Info_UClass_USIK_AuthenticateUser.InnerSingleton,
			StaticRegisterNativesUSIK_AuthenticateUser,
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
	return Z_Registration_Info_UClass_USIK_AuthenticateUser.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_AuthenticateUser_NoRegister()
{
	return USIK_AuthenticateUser::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_AuthenticateUser_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/UserAuth/SIK_AuthenticateUser.h" },
		{ "ModuleRelativePath", "Functions/UserAuth/SIK_AuthenticateUser.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_AuthenticateUser constinit property declarations ********************
// ********** End Class USIK_AuthenticateUser constinit property declarations **********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AuthenticateUser"), .Pointer = &USIK_AuthenticateUser::execAuthenticateUser },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_AuthenticateUser_AuthenticateUser, "AuthenticateUser" }, // 647833111
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_AuthenticateUser>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_AuthenticateUser_Statics
UObject* (*const Z_Construct_UClass_USIK_AuthenticateUser_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_AuthenticateUser_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_AuthenticateUser_Statics::ClassParams = {
	&USIK_AuthenticateUser::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_AuthenticateUser_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_AuthenticateUser_Statics::Class_MetaDataParams)
};
void USIK_AuthenticateUser::StaticRegisterNativesUSIK_AuthenticateUser()
{
	UClass* Class = USIK_AuthenticateUser::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_AuthenticateUser_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_AuthenticateUser()
{
	if (!Z_Registration_Info_UClass_USIK_AuthenticateUser.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_AuthenticateUser.OuterSingleton, Z_Construct_UClass_USIK_AuthenticateUser_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_AuthenticateUser.OuterSingleton;
}
USIK_AuthenticateUser::USIK_AuthenticateUser(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_AuthenticateUser);
USIK_AuthenticateUser::~USIK_AuthenticateUser() {}
// ********** End Class USIK_AuthenticateUser ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_UserAuth_SIK_AuthenticateUser_h__Script_SteamWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_AuthenticateUser, USIK_AuthenticateUser::StaticClass, TEXT("USIK_AuthenticateUser"), &Z_Registration_Info_UClass_USIK_AuthenticateUser, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_AuthenticateUser), 326981309U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_UserAuth_SIK_AuthenticateUser_h__Script_SteamWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_UserAuth_SIK_AuthenticateUser_h__Script_SteamWeb_4254053967{
	TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_UserAuth_SIK_AuthenticateUser_h__Script_SteamWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_UserAuth_SIK_AuthenticateUser_h__Script_SteamWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
