// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamWeb_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");	STEAMWEB_API UFunction* Z_Construct_UDelegateFunction_SteamWeb_SIK_BaseWebApiDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SteamWeb;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SteamWeb()
	{
		if (!Z_Registration_Info_UPackage__Script_SteamWeb.OuterSingleton)
		{
		static UObject* (*const SingletonFuncArray[])() = {
			(UObject* (*)())Z_Construct_UDelegateFunction_SteamWeb_SIK_BaseWebApiDelegate__DelegateSignature,
		};
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/SteamWeb",
			SingletonFuncArray,
			UE_ARRAY_COUNT(SingletonFuncArray),
			PKG_CompiledIn | 0x00000000,
			0xAD7E7F87,
			0x0BB08EFF,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SteamWeb.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_SteamWeb.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SteamWeb(Z_Construct_UPackage__Script_SteamWeb, TEXT("/Script/SteamWeb"), Z_Registration_Info_UPackage__Script_SteamWeb, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xAD7E7F87, 0x0BB08EFF));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
