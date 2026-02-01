// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/Sessions/HostMigrationSubsystem.h"
#include "Engine/GameInstance.h"
#include "SIK_SharedFile.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeHostMigrationSubsystem() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_UHostMigrationSubsystem();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_UHostMigrationSubsystem_NoRegister();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnHostMigration__DelegateSignature();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_SteamId();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnHostMigration ******************************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnHostMigration__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnHostMigration_Parms
	{
		FSIK_SteamId LobbyId;
		bool bLocalPlayerHost;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/Sessions/HostMigrationSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnHostMigration constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyId;
	static void NewProp_bLocalPlayerHost_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLocalPlayerHost;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnHostMigration constinit property declarations ************************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnHostMigration Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnHostMigration__DelegateSignature_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnHostMigration_Parms, LobbyId), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
void Z_Construct_UDelegateFunction_SteamIntegrationKit_OnHostMigration__DelegateSignature_Statics::NewProp_bLocalPlayerHost_SetBit(void* Obj)
{
	((_Script_SteamIntegrationKit_eventOnHostMigration_Parms*)Obj)->bLocalPlayerHost = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnHostMigration__DelegateSignature_Statics::NewProp_bLocalPlayerHost = { "bLocalPlayerHost", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamIntegrationKit_eventOnHostMigration_Parms), &Z_Construct_UDelegateFunction_SteamIntegrationKit_OnHostMigration__DelegateSignature_Statics::NewProp_bLocalPlayerHost_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnHostMigration__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnHostMigration__DelegateSignature_Statics::NewProp_LobbyId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnHostMigration__DelegateSignature_Statics::NewProp_bLocalPlayerHost,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnHostMigration__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnHostMigration Property Definitions ***********************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnHostMigration__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnHostMigration__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_OnHostMigration__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnHostMigration__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnHostMigration__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnHostMigration_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnHostMigration__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnHostMigration__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnHostMigration__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnHostMigration_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnHostMigration__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnHostMigration__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnHostMigration_DelegateWrapper(const FMulticastScriptDelegate& OnHostMigration, FSIK_SteamId LobbyId, bool bLocalPlayerHost)
{
	struct _Script_SteamIntegrationKit_eventOnHostMigration_Parms
	{
		FSIK_SteamId LobbyId;
		bool bLocalPlayerHost;
	};
	_Script_SteamIntegrationKit_eventOnHostMigration_Parms Parms;
	Parms.LobbyId=LobbyId;
	Parms.bLocalPlayerHost=bLocalPlayerHost ? true : false;
	OnHostMigration.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnHostMigration ********************************************************

// ********** Begin Class UHostMigrationSubsystem Function StartHostMigration **********************
struct Z_Construct_UFunction_UHostMigrationSubsystem_StartHostMigration_Statics
{
	struct HostMigrationSubsystem_eventStartHostMigration_Parms
	{
		FSIK_SteamId LobbyId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit | Matchmaking" },
		{ "ModuleRelativePath", "Functions/Sessions/HostMigrationSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function StartHostMigration constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function StartHostMigration constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function StartHostMigration Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHostMigrationSubsystem_StartHostMigration_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HostMigrationSubsystem_eventStartHostMigration_Parms, LobbyId), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHostMigrationSubsystem_StartHostMigration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHostMigrationSubsystem_StartHostMigration_Statics::NewProp_LobbyId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHostMigrationSubsystem_StartHostMigration_Statics::PropPointers) < 2048);
// ********** End Function StartHostMigration Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHostMigrationSubsystem_StartHostMigration_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHostMigrationSubsystem, nullptr, "StartHostMigration", 	Z_Construct_UFunction_UHostMigrationSubsystem_StartHostMigration_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UHostMigrationSubsystem_StartHostMigration_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UHostMigrationSubsystem_StartHostMigration_Statics::HostMigrationSubsystem_eventStartHostMigration_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHostMigrationSubsystem_StartHostMigration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHostMigrationSubsystem_StartHostMigration_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHostMigrationSubsystem_StartHostMigration_Statics::HostMigrationSubsystem_eventStartHostMigration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHostMigrationSubsystem_StartHostMigration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHostMigrationSubsystem_StartHostMigration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHostMigrationSubsystem::execStartHostMigration)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_LobbyId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartHostMigration(Z_Param_LobbyId);
	P_NATIVE_END;
}
// ********** End Class UHostMigrationSubsystem Function StartHostMigration ************************

// ********** Begin Class UHostMigrationSubsystem **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UHostMigrationSubsystem;
UClass* UHostMigrationSubsystem::GetPrivateStaticClass()
{
	using TClass = UHostMigrationSubsystem;
	if (!Z_Registration_Info_UClass_UHostMigrationSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("HostMigrationSubsystem"),
			Z_Registration_Info_UClass_UHostMigrationSubsystem.InnerSingleton,
			StaticRegisterNativesUHostMigrationSubsystem,
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
	return Z_Registration_Info_UClass_UHostMigrationSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UHostMigrationSubsystem_NoRegister()
{
	return UHostMigrationSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UHostMigrationSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Functions/Sessions/HostMigrationSubsystem.h" },
		{ "ModuleRelativePath", "Functions/Sessions/HostMigrationSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHostMigration_MetaData[] = {
		{ "Category", "Steam Integration Kit | Matchmaking | Callbacks" },
		{ "ModuleRelativePath", "Functions/Sessions/HostMigrationSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UHostMigrationSubsystem constinit property declarations ******************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHostMigration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UHostMigrationSubsystem constinit property declarations ********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("StartHostMigration"), .Pointer = &UHostMigrationSubsystem::execStartHostMigration },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHostMigrationSubsystem_StartHostMigration, "StartHostMigration" }, // 3298494032
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHostMigrationSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UHostMigrationSubsystem_Statics

// ********** Begin Class UHostMigrationSubsystem Property Definitions *****************************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHostMigrationSubsystem_Statics::NewProp_OnHostMigration = { "OnHostMigration", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHostMigrationSubsystem, OnHostMigration), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnHostMigration__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHostMigration_MetaData), NewProp_OnHostMigration_MetaData) }; // 1308742787
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHostMigrationSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHostMigrationSubsystem_Statics::NewProp_OnHostMigration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHostMigrationSubsystem_Statics::PropPointers) < 2048);
// ********** End Class UHostMigrationSubsystem Property Definitions *******************************
UObject* (*const Z_Construct_UClass_UHostMigrationSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHostMigrationSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHostMigrationSubsystem_Statics::ClassParams = {
	&UHostMigrationSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UHostMigrationSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UHostMigrationSubsystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHostMigrationSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UHostMigrationSubsystem_Statics::Class_MetaDataParams)
};
void UHostMigrationSubsystem::StaticRegisterNativesUHostMigrationSubsystem()
{
	UClass* Class = UHostMigrationSubsystem::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UHostMigrationSubsystem_Statics::Funcs));
}
UClass* Z_Construct_UClass_UHostMigrationSubsystem()
{
	if (!Z_Registration_Info_UClass_UHostMigrationSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHostMigrationSubsystem.OuterSingleton, Z_Construct_UClass_UHostMigrationSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHostMigrationSubsystem.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UHostMigrationSubsystem);
// ********** End Class UHostMigrationSubsystem ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_HostMigrationSubsystem_h__Script_SteamIntegrationKit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHostMigrationSubsystem, UHostMigrationSubsystem::StaticClass, TEXT("UHostMigrationSubsystem"), &Z_Registration_Info_UClass_UHostMigrationSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHostMigrationSubsystem), 2626595816U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_HostMigrationSubsystem_h__Script_SteamIntegrationKit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_HostMigrationSubsystem_h__Script_SteamIntegrationKit_1513295153{
	TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_HostMigrationSubsystem_h__Script_SteamIntegrationKit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_HostMigrationSubsystem_h__Script_SteamIntegrationKit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
