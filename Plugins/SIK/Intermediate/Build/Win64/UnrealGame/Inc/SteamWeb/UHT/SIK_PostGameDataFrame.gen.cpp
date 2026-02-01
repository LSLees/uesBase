// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/Broadcast/SIK_PostGameDataFrame.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_PostGameDataFrame() {}

// ********** Begin Cross Module References ********************************************************
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_PostGameDataFrame();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_PostGameDataFrame_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USIK_PostGameDataFrame Function PostGameDataFrame ************************
struct Z_Construct_UFunction_USIK_PostGameDataFrame_PostGameDataFrame_Statics
{
	struct SIK_PostGameDataFrame_eventPostGameDataFrame_Parms
	{
		FString Key;
		int32 AppID;
		int64 SteamID;
		int64 BroadcastId;
		FString FrameData;
		USIK_PostGameDataFrame* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|Broadcast" },
		{ "Comment", "//Add a game meta data frame to broadcast\n" },
		{ "ModuleRelativePath", "Functions/Broadcast/SIK_PostGameDataFrame.h" },
		{ "ToolTip", "Add a game meta data frame to broadcast" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppID_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BroadcastId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function PostGameDataFrame constinit property declarations *********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_SteamID;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_BroadcastId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FrameData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PostGameDataFrame constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PostGameDataFrame Property Definitions ********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_PostGameDataFrame_PostGameDataFrame_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_PostGameDataFrame_eventPostGameDataFrame_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_PostGameDataFrame_PostGameDataFrame_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_PostGameDataFrame_eventPostGameDataFrame_Parms, AppID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppID_MetaData), NewProp_AppID_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_PostGameDataFrame_PostGameDataFrame_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_PostGameDataFrame_eventPostGameDataFrame_Parms, SteamID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamID_MetaData), NewProp_SteamID_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_PostGameDataFrame_PostGameDataFrame_Statics::NewProp_BroadcastId = { "BroadcastId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_PostGameDataFrame_eventPostGameDataFrame_Parms, BroadcastId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BroadcastId_MetaData), NewProp_BroadcastId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_PostGameDataFrame_PostGameDataFrame_Statics::NewProp_FrameData = { "FrameData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_PostGameDataFrame_eventPostGameDataFrame_Parms, FrameData), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameData_MetaData), NewProp_FrameData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_PostGameDataFrame_PostGameDataFrame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_PostGameDataFrame_eventPostGameDataFrame_Parms, ReturnValue), Z_Construct_UClass_USIK_PostGameDataFrame_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_PostGameDataFrame_PostGameDataFrame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_PostGameDataFrame_PostGameDataFrame_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_PostGameDataFrame_PostGameDataFrame_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_PostGameDataFrame_PostGameDataFrame_Statics::NewProp_SteamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_PostGameDataFrame_PostGameDataFrame_Statics::NewProp_BroadcastId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_PostGameDataFrame_PostGameDataFrame_Statics::NewProp_FrameData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_PostGameDataFrame_PostGameDataFrame_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_PostGameDataFrame_PostGameDataFrame_Statics::PropPointers) < 2048);
// ********** End Function PostGameDataFrame Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_PostGameDataFrame_PostGameDataFrame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USIK_PostGameDataFrame, nullptr, "PostGameDataFrame", 	Z_Construct_UFunction_USIK_PostGameDataFrame_PostGameDataFrame_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_PostGameDataFrame_PostGameDataFrame_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USIK_PostGameDataFrame_PostGameDataFrame_Statics::SIK_PostGameDataFrame_eventPostGameDataFrame_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_PostGameDataFrame_PostGameDataFrame_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_PostGameDataFrame_PostGameDataFrame_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USIK_PostGameDataFrame_PostGameDataFrame_Statics::SIK_PostGameDataFrame_eventPostGameDataFrame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_PostGameDataFrame_PostGameDataFrame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_PostGameDataFrame_PostGameDataFrame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_PostGameDataFrame::execPostGameDataFrame)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppID);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_SteamID);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_BroadcastId);
	P_GET_PROPERTY(FStrProperty,Z_Param_FrameData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_PostGameDataFrame**)Z_Param__Result=USIK_PostGameDataFrame::PostGameDataFrame(Z_Param_Key,Z_Param_Out_AppID,Z_Param_Out_SteamID,Z_Param_Out_BroadcastId,Z_Param_FrameData);
	P_NATIVE_END;
}
// ********** End Class USIK_PostGameDataFrame Function PostGameDataFrame **************************

// ********** Begin Class USIK_PostGameDataFrame ***************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_PostGameDataFrame;
UClass* USIK_PostGameDataFrame::GetPrivateStaticClass()
{
	using TClass = USIK_PostGameDataFrame;
	if (!Z_Registration_Info_UClass_USIK_PostGameDataFrame.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_PostGameDataFrame"),
			Z_Registration_Info_UClass_USIK_PostGameDataFrame.InnerSingleton,
			StaticRegisterNativesUSIK_PostGameDataFrame,
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
	return Z_Registration_Info_UClass_USIK_PostGameDataFrame.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_PostGameDataFrame_NoRegister()
{
	return USIK_PostGameDataFrame::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_PostGameDataFrame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/Broadcast/SIK_PostGameDataFrame.h" },
		{ "ModuleRelativePath", "Functions/Broadcast/SIK_PostGameDataFrame.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_PostGameDataFrame constinit property declarations *******************
// ********** End Class USIK_PostGameDataFrame constinit property declarations *********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("PostGameDataFrame"), .Pointer = &USIK_PostGameDataFrame::execPostGameDataFrame },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_PostGameDataFrame_PostGameDataFrame, "PostGameDataFrame" }, // 3957248018
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_PostGameDataFrame>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_PostGameDataFrame_Statics
UObject* (*const Z_Construct_UClass_USIK_PostGameDataFrame_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_PostGameDataFrame_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_PostGameDataFrame_Statics::ClassParams = {
	&USIK_PostGameDataFrame::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_PostGameDataFrame_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_PostGameDataFrame_Statics::Class_MetaDataParams)
};
void USIK_PostGameDataFrame::StaticRegisterNativesUSIK_PostGameDataFrame()
{
	UClass* Class = USIK_PostGameDataFrame::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USIK_PostGameDataFrame_Statics::Funcs));
}
UClass* Z_Construct_UClass_USIK_PostGameDataFrame()
{
	if (!Z_Registration_Info_UClass_USIK_PostGameDataFrame.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_PostGameDataFrame.OuterSingleton, Z_Construct_UClass_USIK_PostGameDataFrame_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_PostGameDataFrame.OuterSingleton;
}
USIK_PostGameDataFrame::USIK_PostGameDataFrame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_PostGameDataFrame);
USIK_PostGameDataFrame::~USIK_PostGameDataFrame() {}
// ********** End Class USIK_PostGameDataFrame *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Broadcast_SIK_PostGameDataFrame_h__Script_SteamWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_PostGameDataFrame, USIK_PostGameDataFrame::StaticClass, TEXT("USIK_PostGameDataFrame"), &Z_Registration_Info_UClass_USIK_PostGameDataFrame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_PostGameDataFrame), 1603416718U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Broadcast_SIK_PostGameDataFrame_h__Script_SteamWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Broadcast_SIK_PostGameDataFrame_h__Script_SteamWeb_2405199872{
	TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Broadcast_SIK_PostGameDataFrame_h__Script_SteamWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Broadcast_SIK_PostGameDataFrame_h__Script_SteamWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
