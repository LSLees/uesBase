// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/GameServers/SIK_GetAccountList.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_GetAccountList() {}

// ********** Begin Cross Module References ********************************************************
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetAccountList();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetAccountList_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USIK_GetAccountList Function GetAccountList ******************************
struct Z_Construct_UFunction_USIK_GetAccountList_GetAccountList_Statics
{
	struct SIK_GetAccountList_eventGetAccountList_Parms
	{
		FString Key;
		USIK_GetAccountList* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|GameServers" },
		{ "Comment", "//Gets a list of game server accounts with their logon tokens\n" },
		{ "ModuleRelativePath", "Functions/GameServers/SIK_GetAccountList.h" },
		{ "ToolTip", "Gets a list of game server accounts with their logon tokens" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAccountList constinit property declarations ************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAccountList constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAccountList Property Definitions ***********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_GetAccountList_GetAccountList_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetAccountList_eventGetAccountList_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_GetAccountList_GetAccountList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetAccountList_eventGetAccountList_Parms, ReturnValue), Z_Construct_UClass_USIK_GetAccountList_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GetAccountList_GetAccountList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetAccountList_GetAccountList_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetAccountList_GetAccountList_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetAccountList_GetAccountList_Statics::PropPointers) < 2048);
// ********** End Function GetAccountList Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GetAccountList_GetAccountList_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_GetAccountList, nullptr, "GetAccountList", 	Z_Construct_UFunction_USIK_GetAccountList_GetAccountList_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetAccountList_GetAccountList_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_GetAccountList_GetAccountList_Statics::SIK_GetAccountList_eventGetAccountList_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetAccountList_GetAccountList_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GetAccountList_GetAccountList_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_GetAccountList_GetAccountList_Statics::SIK_GetAccountList_eventGetAccountList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GetAccountList_GetAccountList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GetAccountList_GetAccountList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GetAccountList::execGetAccountList)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_GetAccountList**)Z_Param__Result=USIK_GetAccountList::GetAccountList(Z_Param_Key);
	P_NATIVE_END;
}
// ********** End Class USIK_GetAccountList Function GetAccountList ********************************

// ********** Begin Class USIK_GetAccountList ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_GetAccountList;
UClass* USIK_GetAccountList::GetPrivateStaticClass()
{
	using TClass = USIK_GetAccountList;
	if (!Z_Registration_Info_UClass_USIK_GetAccountList.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_GetAccountList"),
			Z_Registration_Info_UClass_USIK_GetAccountList.InnerSingleton,
			StaticRegisterNativesUSIK_GetAccountList,
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
	return Z_Registration_Info_UClass_USIK_GetAccountList.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_GetAccountList_NoRegister()
{
	return USIK_GetAccountList::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_GetAccountList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/GameServers/SIK_GetAccountList.h" },
		{ "ModuleRelativePath", "Functions/GameServers/SIK_GetAccountList.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_GetAccountList constinit property declarations **********************
// ********** End Class USIK_GetAccountList constinit property declarations ************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetAccountList"), .Pointer = &USIK_GetAccountList::execGetAccountList },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_GetAccountList_GetAccountList, "GetAccountList" }, // 346922442
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_GetAccountList>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_GetAccountList_Statics
UObject* (*const Z_Construct_UClass_USIK_GetAccountList_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetAccountList_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_GetAccountList_Statics::ClassParams = {
	&USIK_GetAccountList::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetAccountList_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_GetAccountList_Statics::Class_MetaDataParams)
};
void USIK_GetAccountList::StaticRegisterNativesUSIK_GetAccountList()
{
	UClass* Class = USIK_GetAccountList::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_GetAccountList_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_GetAccountList()
{
	if (!Z_Registration_Info_UClass_USIK_GetAccountList.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_GetAccountList.OuterSingleton, Z_Construct_UClass_USIK_GetAccountList_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_GetAccountList.OuterSingleton;
}
USIK_GetAccountList::USIK_GetAccountList(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_GetAccountList);
USIK_GetAccountList::~USIK_GetAccountList() {}
// ********** End Class USIK_GetAccountList ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameServers_SIK_GetAccountList_h__Script_SteamWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_GetAccountList, USIK_GetAccountList::StaticClass, TEXT("USIK_GetAccountList"), &Z_Registration_Info_UClass_USIK_GetAccountList, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_GetAccountList), 3695990665U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameServers_SIK_GetAccountList_h__Script_SteamWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameServers_SIK_GetAccountList_h__Script_SteamWeb_2572014903{
	TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameServers_SIK_GetAccountList_h__Script_SteamWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameServers_SIK_GetAccountList_h__Script_SteamWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
