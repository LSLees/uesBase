// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/EconMarket/SIK_CancelAppListingsForUser.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_CancelAppListingsForUser() {}

// ********** Begin Cross Module References ********************************************************
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_CancelAppListingsForUser();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_CancelAppListingsForUser_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USIK_CancelAppListingsForUser Function CancelAppListingsForUser **********
struct Z_Construct_UFunction_USIK_CancelAppListingsForUser_CancelAppListingsForUser_Statics
{
	struct SIK_CancelAppListingsForUser_eventCancelAppListingsForUser_Parms
	{
		FString Key;
		int32 AppId;
		int64 SteamId;
		bool bSynchronous;
		USIK_CancelAppListingsForUser* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|EconMarket" },
		{ "Comment", "//Cancels all of a user's listings for a specific app ID.\n" },
		{ "ModuleRelativePath", "Functions/EconMarket/SIK_CancelAppListingsForUser.h" },
		{ "ToolTip", "Cancels all of a user's listings for a specific app ID." },
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
#endif // WITH_METADATA

// ********** Begin Function CancelAppListingsForUser constinit property declarations **************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_SteamId;
	static void NewProp_bSynchronous_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSynchronous;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CancelAppListingsForUser constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CancelAppListingsForUser Property Definitions *************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_CancelAppListingsForUser_CancelAppListingsForUser_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_CancelAppListingsForUser_eventCancelAppListingsForUser_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_CancelAppListingsForUser_CancelAppListingsForUser_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_CancelAppListingsForUser_eventCancelAppListingsForUser_Parms, AppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppId_MetaData), NewProp_AppId_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_CancelAppListingsForUser_CancelAppListingsForUser_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_CancelAppListingsForUser_eventCancelAppListingsForUser_Parms, SteamId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamId_MetaData), NewProp_SteamId_MetaData) };
void Z_Construct_UFunction_USIK_CancelAppListingsForUser_CancelAppListingsForUser_Statics::NewProp_bSynchronous_SetBit(void* Obj)
{
	((SIK_CancelAppListingsForUser_eventCancelAppListingsForUser_Parms*)Obj)->bSynchronous = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_CancelAppListingsForUser_CancelAppListingsForUser_Statics::NewProp_bSynchronous = { "bSynchronous", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_CancelAppListingsForUser_eventCancelAppListingsForUser_Parms), &Z_Construct_UFunction_USIK_CancelAppListingsForUser_CancelAppListingsForUser_Statics::NewProp_bSynchronous_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_CancelAppListingsForUser_CancelAppListingsForUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_CancelAppListingsForUser_eventCancelAppListingsForUser_Parms, ReturnValue), Z_Construct_UClass_USIK_CancelAppListingsForUser_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_CancelAppListingsForUser_CancelAppListingsForUser_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_CancelAppListingsForUser_CancelAppListingsForUser_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_CancelAppListingsForUser_CancelAppListingsForUser_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_CancelAppListingsForUser_CancelAppListingsForUser_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_CancelAppListingsForUser_CancelAppListingsForUser_Statics::NewProp_bSynchronous,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_CancelAppListingsForUser_CancelAppListingsForUser_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_CancelAppListingsForUser_CancelAppListingsForUser_Statics::PropPointers) < 2048);
// ********** End Function CancelAppListingsForUser Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_CancelAppListingsForUser_CancelAppListingsForUser_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_CancelAppListingsForUser, nullptr, "CancelAppListingsForUser", 	Z_Construct_UFunction_USIK_CancelAppListingsForUser_CancelAppListingsForUser_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_CancelAppListingsForUser_CancelAppListingsForUser_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_CancelAppListingsForUser_CancelAppListingsForUser_Statics::SIK_CancelAppListingsForUser_eventCancelAppListingsForUser_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_CancelAppListingsForUser_CancelAppListingsForUser_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_CancelAppListingsForUser_CancelAppListingsForUser_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_CancelAppListingsForUser_CancelAppListingsForUser_Statics::SIK_CancelAppListingsForUser_eventCancelAppListingsForUser_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_CancelAppListingsForUser_CancelAppListingsForUser()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_CancelAppListingsForUser_CancelAppListingsForUser_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_CancelAppListingsForUser::execCancelAppListingsForUser)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppId);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_SteamId);
	P_GET_UBOOL(Z_Param_bSynchronous);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_CancelAppListingsForUser**)Z_Param__Result=USIK_CancelAppListingsForUser::CancelAppListingsForUser(Z_Param_Key,Z_Param_Out_AppId,Z_Param_Out_SteamId,Z_Param_bSynchronous);
	P_NATIVE_END;
}
// ********** End Class USIK_CancelAppListingsForUser Function CancelAppListingsForUser ************

// ********** Begin Class USIK_CancelAppListingsForUser ********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_CancelAppListingsForUser;
UClass* USIK_CancelAppListingsForUser::GetPrivateStaticClass()
{
	using TClass = USIK_CancelAppListingsForUser;
	if (!Z_Registration_Info_UClass_USIK_CancelAppListingsForUser.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_CancelAppListingsForUser"),
			Z_Registration_Info_UClass_USIK_CancelAppListingsForUser.InnerSingleton,
			StaticRegisterNativesUSIK_CancelAppListingsForUser,
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
	return Z_Registration_Info_UClass_USIK_CancelAppListingsForUser.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_CancelAppListingsForUser_NoRegister()
{
	return USIK_CancelAppListingsForUser::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_CancelAppListingsForUser_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/EconMarket/SIK_CancelAppListingsForUser.h" },
		{ "ModuleRelativePath", "Functions/EconMarket/SIK_CancelAppListingsForUser.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_CancelAppListingsForUser constinit property declarations ************
// ********** End Class USIK_CancelAppListingsForUser constinit property declarations **************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CancelAppListingsForUser"), .Pointer = &USIK_CancelAppListingsForUser::execCancelAppListingsForUser },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_CancelAppListingsForUser_CancelAppListingsForUser, "CancelAppListingsForUser" }, // 1758806227
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_CancelAppListingsForUser>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_CancelAppListingsForUser_Statics
UObject* (*const Z_Construct_UClass_USIK_CancelAppListingsForUser_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_CancelAppListingsForUser_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_CancelAppListingsForUser_Statics::ClassParams = {
	&USIK_CancelAppListingsForUser::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_CancelAppListingsForUser_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_CancelAppListingsForUser_Statics::Class_MetaDataParams)
};
void USIK_CancelAppListingsForUser::StaticRegisterNativesUSIK_CancelAppListingsForUser()
{
	UClass* Class = USIK_CancelAppListingsForUser::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_CancelAppListingsForUser_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_CancelAppListingsForUser()
{
	if (!Z_Registration_Info_UClass_USIK_CancelAppListingsForUser.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_CancelAppListingsForUser.OuterSingleton, Z_Construct_UClass_USIK_CancelAppListingsForUser_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_CancelAppListingsForUser.OuterSingleton;
}
USIK_CancelAppListingsForUser::USIK_CancelAppListingsForUser(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_CancelAppListingsForUser);
USIK_CancelAppListingsForUser::~USIK_CancelAppListingsForUser() {}
// ********** End Class USIK_CancelAppListingsForUser **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_EconMarket_SIK_CancelAppListingsForUser_h__Script_SteamWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_CancelAppListingsForUser, USIK_CancelAppListingsForUser::StaticClass, TEXT("USIK_CancelAppListingsForUser"), &Z_Registration_Info_UClass_USIK_CancelAppListingsForUser, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_CancelAppListingsForUser), 80156131U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_EconMarket_SIK_CancelAppListingsForUser_h__Script_SteamWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_EconMarket_SIK_CancelAppListingsForUser_h__Script_SteamWeb_1042755370{
	TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_EconMarket_SIK_CancelAppListingsForUser_h__Script_SteamWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_EconMarket_SIK_CancelAppListingsForUser_h__Script_SteamWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
