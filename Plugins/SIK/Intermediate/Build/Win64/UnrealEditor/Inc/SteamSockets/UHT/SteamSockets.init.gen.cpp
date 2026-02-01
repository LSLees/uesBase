// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamSockets_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SteamSockets;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SteamSockets()
	{
		if (!Z_Registration_Info_UPackage__Script_SteamSockets.OuterSingleton)
		{
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/SteamSockets",
			nullptr,
			0,
			PKG_CompiledIn | 0x00000000,
			0xDAC7BFFC,
			0xF44428E0,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SteamSockets.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_SteamSockets.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SteamSockets(Z_Construct_UPackage__Script_SteamSockets, TEXT("/Script/SteamSockets"), Z_Registration_Info_UPackage__Script_SteamSockets, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xDAC7BFFC, 0xF44428E0));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
