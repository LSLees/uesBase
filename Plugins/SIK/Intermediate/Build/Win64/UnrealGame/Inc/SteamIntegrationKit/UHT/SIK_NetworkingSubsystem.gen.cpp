// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/Networking/SIK_NetworkingSubsystem.h"
#include "Engine/GameInstance.h"
#include "SIK_SharedFile.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSIK_NetworkingSubsystem() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_NetworkingSubsystem();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_NetworkingSubsystem_NoRegister();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_P2PSessionError();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnP2PSessionConnectFail__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnP2PSessionRequest__DelegateSignature();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_SteamId();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnP2PSessionConnectFail **********************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnP2PSessionConnectFail__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnP2PSessionConnectFail_Parms
	{
		FSIK_SteamId SteamID;
		TEnumAsByte<ESIK_P2PSessionError> Error;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/Networking/SIK_NetworkingSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnP2PSessionConnectFail constinit property declarations **************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Error;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnP2PSessionConnectFail constinit property declarations ****************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnP2PSessionConnectFail Property Definitions *************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnP2PSessionConnectFail__DelegateSignature_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnP2PSessionConnectFail_Parms, SteamID), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnP2PSessionConnectFail__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnP2PSessionConnectFail_Parms, Error), Z_Construct_UEnum_SteamIntegrationKit_ESIK_P2PSessionError, METADATA_PARAMS(0, nullptr) }; // 3194943706
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnP2PSessionConnectFail__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnP2PSessionConnectFail__DelegateSignature_Statics::NewProp_SteamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnP2PSessionConnectFail__DelegateSignature_Statics::NewProp_Error,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnP2PSessionConnectFail__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnP2PSessionConnectFail Property Definitions ***************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnP2PSessionConnectFail__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnP2PSessionConnectFail__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_OnP2PSessionConnectFail__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnP2PSessionConnectFail__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnP2PSessionConnectFail__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnP2PSessionConnectFail_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnP2PSessionConnectFail__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnP2PSessionConnectFail__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnP2PSessionConnectFail__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnP2PSessionConnectFail_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnP2PSessionConnectFail__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnP2PSessionConnectFail__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnP2PSessionConnectFail_DelegateWrapper(const FMulticastScriptDelegate& OnP2PSessionConnectFail, FSIK_SteamId SteamID, ESIK_P2PSessionError Error)
{
	struct _Script_SteamIntegrationKit_eventOnP2PSessionConnectFail_Parms
	{
		FSIK_SteamId SteamID;
		TEnumAsByte<ESIK_P2PSessionError> Error;
	};
	_Script_SteamIntegrationKit_eventOnP2PSessionConnectFail_Parms Parms;
	Parms.SteamID=SteamID;
	Parms.Error=Error;
	OnP2PSessionConnectFail.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnP2PSessionConnectFail ************************************************

// ********** Begin Delegate FOnP2PSessionRequest **************************************************
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnP2PSessionRequest__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnP2PSessionRequest_Parms
	{
		FSIK_SteamId SteamID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/Networking/SIK_NetworkingSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnP2PSessionRequest constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnP2PSessionRequest constinit property declarations ********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnP2PSessionRequest Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnP2PSessionRequest__DelegateSignature_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnP2PSessionRequest_Parms, SteamID), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 3413883574
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnP2PSessionRequest__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnP2PSessionRequest__DelegateSignature_Statics::NewProp_SteamID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnP2PSessionRequest__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnP2PSessionRequest Property Definitions *******************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnP2PSessionRequest__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnP2PSessionRequest__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamIntegrationKit_OnP2PSessionRequest__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnP2PSessionRequest__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnP2PSessionRequest__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnP2PSessionRequest_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnP2PSessionRequest__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnP2PSessionRequest__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnP2PSessionRequest__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnP2PSessionRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnP2PSessionRequest__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnP2PSessionRequest__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnP2PSessionRequest_DelegateWrapper(const FMulticastScriptDelegate& OnP2PSessionRequest, FSIK_SteamId SteamID)
{
	struct _Script_SteamIntegrationKit_eventOnP2PSessionRequest_Parms
	{
		FSIK_SteamId SteamID;
	};
	_Script_SteamIntegrationKit_eventOnP2PSessionRequest_Parms Parms;
	Parms.SteamID=SteamID;
	OnP2PSessionRequest.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnP2PSessionRequest ****************************************************

// ********** Begin Class USIK_NetworkingSubsystem *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USIK_NetworkingSubsystem;
UClass* USIK_NetworkingSubsystem::GetPrivateStaticClass()
{
	using TClass = USIK_NetworkingSubsystem;
	if (!Z_Registration_Info_UClass_USIK_NetworkingSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SIK_NetworkingSubsystem"),
			Z_Registration_Info_UClass_USIK_NetworkingSubsystem.InnerSingleton,
			StaticRegisterNativesUSIK_NetworkingSubsystem,
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
	return Z_Registration_Info_UClass_USIK_NetworkingSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_USIK_NetworkingSubsystem_NoRegister()
{
	return USIK_NetworkingSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USIK_NetworkingSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Functions/Networking/SIK_NetworkingSubsystem.h" },
		{ "ModuleRelativePath", "Functions/Networking/SIK_NetworkingSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnP2PSessionConnectFail_MetaData[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Networking" },
		{ "Comment", "/*\n\x09""Called when packets can't get through to the specified user.\n\x09""All queued packets unsent at this point will be dropped, further attempts to send will retry making the connection (but will be dropped if we fail again).\n\x09 */" },
		{ "ModuleRelativePath", "Functions/Networking/SIK_NetworkingSubsystem.h" },
		{ "ToolTip", "Called when packets can't get through to the specified user.\nAll queued packets unsent at this point will be dropped, further attempts to send will retry making the connection (but will be dropped if we fail again)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnP2PSessionRequest_MetaData[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Networking" },
		{ "Comment", "/*\n\x09 A user wants to communicate with us over the P2P channel via the SendP2PPacket. In response, a call to AcceptP2PSessionWithUser needs to be made, if you want to open the network channel with them.\n\x09 */" },
		{ "ModuleRelativePath", "Functions/Networking/SIK_NetworkingSubsystem.h" },
		{ "ToolTip", "A user wants to communicate with us over the P2P channel via the SendP2PPacket. In response, a call to AcceptP2PSessionWithUser needs to be made, if you want to open the network channel with them." },
	};
#endif // WITH_METADATA

// ********** Begin Class USIK_NetworkingSubsystem constinit property declarations *****************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnP2PSessionConnectFail;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnP2PSessionRequest;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USIK_NetworkingSubsystem constinit property declarations *******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_NetworkingSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USIK_NetworkingSubsystem_Statics

// ********** Begin Class USIK_NetworkingSubsystem Property Definitions ****************************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_NetworkingSubsystem_Statics::NewProp_OnP2PSessionConnectFail = { "OnP2PSessionConnectFail", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_NetworkingSubsystem, OnP2PSessionConnectFail), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnP2PSessionConnectFail__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnP2PSessionConnectFail_MetaData), NewProp_OnP2PSessionConnectFail_MetaData) }; // 857398204
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_NetworkingSubsystem_Statics::NewProp_OnP2PSessionRequest = { "OnP2PSessionRequest", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_NetworkingSubsystem, OnP2PSessionRequest), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnP2PSessionRequest__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnP2PSessionRequest_MetaData), NewProp_OnP2PSessionRequest_MetaData) }; // 4184375186
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USIK_NetworkingSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_NetworkingSubsystem_Statics::NewProp_OnP2PSessionConnectFail,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_NetworkingSubsystem_Statics::NewProp_OnP2PSessionRequest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_NetworkingSubsystem_Statics::PropPointers) < 2048);
// ********** End Class USIK_NetworkingSubsystem Property Definitions ******************************
UObject* (*const Z_Construct_UClass_USIK_NetworkingSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_NetworkingSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_NetworkingSubsystem_Statics::ClassParams = {
	&USIK_NetworkingSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USIK_NetworkingSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USIK_NetworkingSubsystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_NetworkingSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_NetworkingSubsystem_Statics::Class_MetaDataParams)
};
void USIK_NetworkingSubsystem::StaticRegisterNativesUSIK_NetworkingSubsystem()
{
}
UClass* Z_Construct_UClass_USIK_NetworkingSubsystem()
{
	if (!Z_Registration_Info_UClass_USIK_NetworkingSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_NetworkingSubsystem.OuterSingleton, Z_Construct_UClass_USIK_NetworkingSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_NetworkingSubsystem.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USIK_NetworkingSubsystem);
// ********** End Class USIK_NetworkingSubsystem ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Networking_SIK_NetworkingSubsystem_h__Script_SteamIntegrationKit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_NetworkingSubsystem, USIK_NetworkingSubsystem::StaticClass, TEXT("USIK_NetworkingSubsystem"), &Z_Registration_Info_UClass_USIK_NetworkingSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_NetworkingSubsystem), 1913637410U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Networking_SIK_NetworkingSubsystem_h__Script_SteamIntegrationKit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Networking_SIK_NetworkingSubsystem_h__Script_SteamIntegrationKit_3738469560{
	TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Networking_SIK_NetworkingSubsystem_h__Script_SteamIntegrationKit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Networking_SIK_NetworkingSubsystem_h__Script_SteamIntegrationKit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
