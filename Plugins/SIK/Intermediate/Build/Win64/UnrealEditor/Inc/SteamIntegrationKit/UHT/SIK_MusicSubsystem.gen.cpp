// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/Music/SIK_MusicSubsystem.h"
#include "Engine/GameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_MusicSubsystem() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_MusicSubsystem();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_MusicSubsystem_NoRegister();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_PlaybackStatusHasChanged__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_VolumeHasChanged__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FPlaybackStatusHasChanged *********************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_PlaybackStatusHasChanged__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/Music/SIK_MusicSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FPlaybackStatusHasChanged constinit property declarations *************
// ********** End Delegate FPlaybackStatusHasChanged constinit property declarations ***************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_PlaybackStatusHasChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "PlaybackStatusHasChanged__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_PlaybackStatusHasChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_PlaybackStatusHasChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_PlaybackStatusHasChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_PlaybackStatusHasChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FPlaybackStatusHasChanged_DelegateWrapper(const FMulticastScriptDelegate& PlaybackStatusHasChanged)
{
	PlaybackStatusHasChanged.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FPlaybackStatusHasChanged ***********************************************

// ********** Begin Delegate FVolumeHasChanged *****************************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_VolumeHasChanged__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventVolumeHasChanged_Parms
	{
		float Volume;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/Music/SIK_MusicSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FVolumeHasChanged constinit property declarations *********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Volume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FVolumeHasChanged constinit property declarations ***********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FVolumeHasChanged Property Definitions ********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_VolumeHasChanged__DelegateSignature_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventVolumeHasChanged_Parms, Volume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_VolumeHasChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_VolumeHasChanged__DelegateSignature_Statics::NewProp_Volume,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_VolumeHasChanged__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FVolumeHasChanged Property Definitions **********************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_VolumeHasChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "VolumeHasChanged__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_VolumeHasChanged__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_VolumeHasChanged__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_VolumeHasChanged__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventVolumeHasChanged_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_VolumeHasChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_VolumeHasChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_VolumeHasChanged__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventVolumeHasChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_VolumeHasChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_VolumeHasChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FVolumeHasChanged_DelegateWrapper(const FMulticastScriptDelegate& VolumeHasChanged, float Volume)
{
	struct _Script_SteamIntegrationKit_eventVolumeHasChanged_Parms
	{
		float Volume;
	};
	_Script_SteamIntegrationKit_eventVolumeHasChanged_Parms Parms;
	Parms.Volume=Volume;
	VolumeHasChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FVolumeHasChanged *******************************************************

// ********** Begin Class USIK_MusicSubsystem ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_MusicSubsystem;
UClass* USIK_MusicSubsystem::GetPrivateStaticClass()
{
	using TClass = USIK_MusicSubsystem;
	if (!Z_Registration_Info_UClass_USIK_MusicSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_MusicSubsystem"),
			Z_Registration_Info_UClass_USIK_MusicSubsystem.InnerSingleton,
			StaticRegisterNativesUSIK_MusicSubsystem,
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
	return Z_Registration_Info_UClass_USIK_MusicSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_MusicSubsystem_NoRegister()
{
	return USIK_MusicSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_MusicSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Functions/Music/SIK_MusicSubsystem.h" },
		{ "ModuleRelativePath", "Functions/Music/SIK_MusicSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaybackStatusHasChanged_MetaData[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Music" },
		{ "ModuleRelativePath", "Functions/Music/SIK_MusicSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VolumeHasChanged_MetaData[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Music" },
		{ "ModuleRelativePath", "Functions/Music/SIK_MusicSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_MusicSubsystem constinit property declarations **********************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_PlaybackStatusHasChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_VolumeHasChanged;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USIK_MusicSubsystem constinit property declarations ************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_MusicSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_MusicSubsystem_Statics

// ********** Begin Class USIK_MusicSubsystem Property Definitions *********************************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_MusicSubsystem_Statics::NewProp_PlaybackStatusHasChanged = { "PlaybackStatusHasChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_MusicSubsystem, PlaybackStatusHasChanged), Z_Construct_UDelegateFunction_SteamIntegrationKit_PlaybackStatusHasChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaybackStatusHasChanged_MetaData), NewProp_PlaybackStatusHasChanged_MetaData) }; // 3702593129
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_MusicSubsystem_Statics::NewProp_VolumeHasChanged = { "VolumeHasChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_MusicSubsystem, VolumeHasChanged), Z_Construct_UDelegateFunction_SteamIntegrationKit_VolumeHasChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VolumeHasChanged_MetaData), NewProp_VolumeHasChanged_MetaData) }; // 22149166
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USIK_MusicSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_MusicSubsystem_Statics::NewProp_PlaybackStatusHasChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_MusicSubsystem_Statics::NewProp_VolumeHasChanged,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_MusicSubsystem_Statics::PropPointers) < 2048);
// ********** End Class USIK_MusicSubsystem Property Definitions ***********************************
UObject* (*const Z_Construct_UClass_USIK_MusicSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_MusicSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_MusicSubsystem_Statics::ClassParams = {
	&USIK_MusicSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USIK_MusicSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USIK_MusicSubsystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_MusicSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_MusicSubsystem_Statics::Class_MetaDataParams)
};
void USIK_MusicSubsystem::StaticRegisterNativesUSIK_MusicSubsystem()
{
}
UClass* Z_Construct_UClass_USIK_MusicSubsystem()
{
	if (!Z_Registration_Info_UClass_USIK_MusicSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_MusicSubsystem.OuterSingleton, Z_Construct_UClass_USIK_MusicSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_MusicSubsystem.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_MusicSubsystem);
// ********** End Class USIK_MusicSubsystem ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Music_SIK_MusicSubsystem_h__Script_SteamIntegrationKit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_MusicSubsystem, USIK_MusicSubsystem::StaticClass, TEXT("USIK_MusicSubsystem"), &Z_Registration_Info_UClass_USIK_MusicSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_MusicSubsystem), 3786926189U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Music_SIK_MusicSubsystem_h__Script_SteamIntegrationKit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Music_SIK_MusicSubsystem_h__Script_SteamIntegrationKit_1369860925{
	TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Music_SIK_MusicSubsystem_h__Script_SteamIntegrationKit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Music_SIK_MusicSubsystem_h__Script_SteamIntegrationKit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
