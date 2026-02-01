// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/User/SIK_SoundWaveProcedural.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_SoundWaveProcedural() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_USoundWaveProcedural();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_SoundWaveProcedural();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_SoundWaveProcedural_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USIK_SoundWaveProcedural Function SIK_QueueAudio *************************
struct Z_Construct_UFunction_USIK_SoundWaveProcedural_SIK_QueueAudio_Statics
{
	struct SIK_SoundWaveProcedural_eventSIK_QueueAudio_Parms
	{
		TArray<uint8> AudioData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || User" },
		{ "DisplayName", "Queue Audio" },
		{ "ModuleRelativePath", "Functions/User/SIK_SoundWaveProcedural.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SIK_QueueAudio constinit property declarations ************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_AudioData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AudioData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SIK_QueueAudio constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SIK_QueueAudio Property Definitions ***********************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_SoundWaveProcedural_SIK_QueueAudio_Statics::NewProp_AudioData_Inner = { "AudioData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_SoundWaveProcedural_SIK_QueueAudio_Statics::NewProp_AudioData = { "AudioData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_SoundWaveProcedural_eventSIK_QueueAudio_Parms, AudioData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioData_MetaData), NewProp_AudioData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_SoundWaveProcedural_SIK_QueueAudio_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SoundWaveProcedural_SIK_QueueAudio_Statics::NewProp_AudioData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SoundWaveProcedural_SIK_QueueAudio_Statics::NewProp_AudioData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SoundWaveProcedural_SIK_QueueAudio_Statics::PropPointers) < 2048);
// ********** End Function SIK_QueueAudio Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_SoundWaveProcedural_SIK_QueueAudio_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_SoundWaveProcedural, nullptr, "SIK_QueueAudio", 	Z_Construct_UFunction_USIK_SoundWaveProcedural_SIK_QueueAudio_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SoundWaveProcedural_SIK_QueueAudio_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_SoundWaveProcedural_SIK_QueueAudio_Statics::SIK_SoundWaveProcedural_eventSIK_QueueAudio_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SoundWaveProcedural_SIK_QueueAudio_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_SoundWaveProcedural_SIK_QueueAudio_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_SoundWaveProcedural_SIK_QueueAudio_Statics::SIK_SoundWaveProcedural_eventSIK_QueueAudio_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_SoundWaveProcedural_SIK_QueueAudio()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_SoundWaveProcedural_SIK_QueueAudio_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_SoundWaveProcedural::execSIK_QueueAudio)
{
	P_GET_TARRAY_REF(uint8,Z_Param_Out_AudioData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SIK_QueueAudio(Z_Param_Out_AudioData);
	P_NATIVE_END;
}
// ********** End Class USIK_SoundWaveProcedural Function SIK_QueueAudio ***************************

// ********** Begin Class USIK_SoundWaveProcedural *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_SoundWaveProcedural;
UClass* USIK_SoundWaveProcedural::GetPrivateStaticClass()
{
	using TClass = USIK_SoundWaveProcedural;
	if (!Z_Registration_Info_UClass_USIK_SoundWaveProcedural.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_SoundWaveProcedural"),
			Z_Registration_Info_UClass_USIK_SoundWaveProcedural.InnerSingleton,
			StaticRegisterNativesUSIK_SoundWaveProcedural,
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
	return Z_Registration_Info_UClass_USIK_SoundWaveProcedural.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_SoundWaveProcedural_NoRegister()
{
	return USIK_SoundWaveProcedural::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_SoundWaveProcedural_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Functions/User/SIK_SoundWaveProcedural.h" },
		{ "ModuleRelativePath", "Functions/User/SIK_SoundWaveProcedural.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_SoundWaveProcedural constinit property declarations *****************
// ********** End Class USIK_SoundWaveProcedural constinit property declarations *******************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("SIK_QueueAudio"), .Pointer = &USIK_SoundWaveProcedural::execSIK_QueueAudio },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_SoundWaveProcedural_SIK_QueueAudio, "SIK_QueueAudio" }, // 1469893176
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_SoundWaveProcedural>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_SoundWaveProcedural_Statics
UObject* (*const Z_Construct_UClass_USIK_SoundWaveProcedural_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USoundWaveProcedural,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_SoundWaveProcedural_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_SoundWaveProcedural_Statics::ClassParams = {
	&USIK_SoundWaveProcedural::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_SoundWaveProcedural_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_SoundWaveProcedural_Statics::Class_MetaDataParams)
};
void USIK_SoundWaveProcedural::StaticRegisterNativesUSIK_SoundWaveProcedural()
{
	UClass* Class = USIK_SoundWaveProcedural::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_SoundWaveProcedural_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_SoundWaveProcedural()
{
	if (!Z_Registration_Info_UClass_USIK_SoundWaveProcedural.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_SoundWaveProcedural.OuterSingleton, Z_Construct_UClass_USIK_SoundWaveProcedural_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_SoundWaveProcedural.OuterSingleton;
}
USIK_SoundWaveProcedural::USIK_SoundWaveProcedural(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_SoundWaveProcedural);
USIK_SoundWaveProcedural::~USIK_SoundWaveProcedural() {}
// ********** End Class USIK_SoundWaveProcedural ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_User_SIK_SoundWaveProcedural_h__Script_SteamIntegrationKit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_SoundWaveProcedural, USIK_SoundWaveProcedural::StaticClass, TEXT("USIK_SoundWaveProcedural"), &Z_Registration_Info_UClass_USIK_SoundWaveProcedural, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_SoundWaveProcedural), 2503506053U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_User_SIK_SoundWaveProcedural_h__Script_SteamIntegrationKit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_User_SIK_SoundWaveProcedural_h__Script_SteamIntegrationKit_560834563{
	TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_User_SIK_SoundWaveProcedural_h__Script_SteamIntegrationKit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_User_SIK_SoundWaveProcedural_h__Script_SteamIntegrationKit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
