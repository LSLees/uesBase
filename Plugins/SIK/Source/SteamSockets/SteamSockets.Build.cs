// Copyright Epic Games, Inc. All Rights Reserved.

using System;
using UnrealBuildTool;
using System.IO;

public class SteamSockets : ModuleRules
{
    public SteamSockets(ReadOnlyTargetRules Target) : base(Target)
    {
	    PrecompileForTargets = PrecompileTargetsType.Any;
	    PublicDefinitions.Add("STEAMSOCKETS_MODULE=1");
	    
	    PrivateDependencyModuleNames.AddRange(
		    new string[] {
			    "Core", 
			    "CoreUObject",
			    "NetCore",
			    "Engine", 
			    "Sockets",
			    "OnlineSubsystem",
			    "OnlineSubsystemSteam",
			    "PacketHandler",
			    "SteamIntegrationShared",
			    "SteamSdk"
		    }
	    );
	}
}
