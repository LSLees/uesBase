// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/User/SIK_GetFriendList.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_GetFriendList() {}

// ********** Begin Cross Module References ********************************************************
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetFriendList();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetFriendList_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USIK_GetFriendList Function GetFriendList ********************************
struct Z_Construct_UFunction_USIK_GetFriendList_GetFriendList_Statics
{
	struct SIK_GetFriendList_eventGetFriendList_Parms
	{
		FString Key;
		int64 SteamId;
		FString Relationship;
		USIK_GetFriendList* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|User" },
		{ "ModuleRelativePath", "Functions/User/SIK_GetFriendList.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Relationship_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetFriendList constinit property declarations *************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Relationship;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetFriendList constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetFriendList Property Definitions ************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_GetFriendList_GetFriendList_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetFriendList_eventGetFriendList_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_GetFriendList_GetFriendList_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetFriendList_eventGetFriendList_Parms, SteamId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamId_MetaData), NewProp_SteamId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_GetFriendList_GetFriendList_Statics::NewProp_Relationship = { "Relationship", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetFriendList_eventGetFriendList_Parms, Relationship), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Relationship_MetaData), NewProp_Relationship_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_GetFriendList_GetFriendList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetFriendList_eventGetFriendList_Parms, ReturnValue), Z_Construct_UClass_USIK_GetFriendList_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GetFriendList_GetFriendList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetFriendList_GetFriendList_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetFriendList_GetFriendList_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetFriendList_GetFriendList_Statics::NewProp_Relationship,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetFriendList_GetFriendList_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetFriendList_GetFriendList_Statics::PropPointers) < 2048);
// ********** End Function GetFriendList Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GetFriendList_GetFriendList_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_GetFriendList, nullptr, "GetFriendList", 	Z_Construct_UFunction_USIK_GetFriendList_GetFriendList_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetFriendList_GetFriendList_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_GetFriendList_GetFriendList_Statics::SIK_GetFriendList_eventGetFriendList_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetFriendList_GetFriendList_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GetFriendList_GetFriendList_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_GetFriendList_GetFriendList_Statics::SIK_GetFriendList_eventGetFriendList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GetFriendList_GetFriendList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GetFriendList_GetFriendList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GetFriendList::execGetFriendList)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_SteamId);
	P_GET_PROPERTY(FStrProperty,Z_Param_Relationship);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_GetFriendList**)Z_Param__Result=USIK_GetFriendList::GetFriendList(Z_Param_Key,Z_Param_Out_SteamId,Z_Param_Relationship);
	P_NATIVE_END;
}
// ********** End Class USIK_GetFriendList Function GetFriendList **********************************

// ********** Begin Class USIK_GetFriendList *******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_GetFriendList;
UClass* USIK_GetFriendList::GetPrivateStaticClass()
{
	using TClass = USIK_GetFriendList;
	if (!Z_Registration_Info_UClass_USIK_GetFriendList.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_GetFriendList"),
			Z_Registration_Info_UClass_USIK_GetFriendList.InnerSingleton,
			StaticRegisterNativesUSIK_GetFriendList,
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
	return Z_Registration_Info_UClass_USIK_GetFriendList.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_GetFriendList_NoRegister()
{
	return USIK_GetFriendList::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_GetFriendList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/User/SIK_GetFriendList.h" },
		{ "ModuleRelativePath", "Functions/User/SIK_GetFriendList.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_GetFriendList constinit property declarations ***********************
// ********** End Class USIK_GetFriendList constinit property declarations *************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetFriendList"), .Pointer = &USIK_GetFriendList::execGetFriendList },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_GetFriendList_GetFriendList, "GetFriendList" }, // 761661789
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_GetFriendList>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_GetFriendList_Statics
UObject* (*const Z_Construct_UClass_USIK_GetFriendList_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetFriendList_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_GetFriendList_Statics::ClassParams = {
	&USIK_GetFriendList::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetFriendList_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_GetFriendList_Statics::Class_MetaDataParams)
};
void USIK_GetFriendList::StaticRegisterNativesUSIK_GetFriendList()
{
	UClass* Class = USIK_GetFriendList::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_GetFriendList_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_GetFriendList()
{
	if (!Z_Registration_Info_UClass_USIK_GetFriendList.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_GetFriendList.OuterSingleton, Z_Construct_UClass_USIK_GetFriendList_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_GetFriendList.OuterSingleton;
}
USIK_GetFriendList::USIK_GetFriendList(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_GetFriendList);
USIK_GetFriendList::~USIK_GetFriendList() {}
// ********** End Class USIK_GetFriendList *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_User_SIK_GetFriendList_h__Script_SteamWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_GetFriendList, USIK_GetFriendList::StaticClass, TEXT("USIK_GetFriendList"), &Z_Registration_Info_UClass_USIK_GetFriendList, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_GetFriendList), 3614617305U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_User_SIK_GetFriendList_h__Script_SteamWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_User_SIK_GetFriendList_h__Script_SteamWeb_3003840382{
	TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_User_SIK_GetFriendList_h__Script_SteamWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_User_SIK_GetFriendList_h__Script_SteamWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
