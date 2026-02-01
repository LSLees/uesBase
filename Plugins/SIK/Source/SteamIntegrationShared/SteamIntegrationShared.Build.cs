// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.IO;

public class SteamIntegrationShared : ModuleRules
{
	public SteamIntegrationShared(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		PrecompileForTargets = PrecompileTargetsType.Any;
		PrivateDefinitions.Add("STEAMSHARED_PACKAGE=1");
		PublicDefinitions.Add("STEAM_SDK_INSTALLED=1");
		
		// Disable EOS Steam integration to avoid module hierarchy conflicts
		PublicDefinitions.Add("UE_WITH_EOS_STEAM_INTEGRATION=0");

		PrivateDependencyModuleNames.AddRange(
			new string[] {
				"Core", 
				"Sockets",
				"SteamSdk", "Projects"
			}
		);

		
	}
}