// Copyright (c) 2024 Betide Studio. All Rights Reserved.

using System;
using System.Globalization;
using System.IO;
using UnrealBuildTool;

public class SteamSdk : ModuleRules
{
	public SteamSdk(ReadOnlyTargetRules Target) : base(Target)
	{
		PrecompileForTargets = PrecompileTargetsType.Any;
        // The current SDK version number.
        double SteamVersionNumber = 1.60;

        // Mark the current version of the Steam SDK
        string SteamVersion = String.Format(CultureInfo.InvariantCulture, "v{0}", SteamVersionNumber).Replace(".", "");

		Type = ModuleType.External;
		PublicDefinitions.Add(String.Format(CultureInfo.InvariantCulture, "STEAM_SDK_VER=TEXT(\"{0}\")", SteamVersionNumber));
		PublicDefinitions.Add("STEAM_SDK_VER_PATH=TEXT(\"Steam" + SteamVersion + "\")");
        //Use SDKbase from the plugin
        string SdkBase = ModuleDirectory + "/redistributable_bin";
        //Print all folders of the plugin
        if (!Directory.Exists(ModuleDirectory))
        {
	        Console.WriteLine("SIK: ModuleDirectory not found: " + ModuleDirectory);
        }
		if (!Directory.Exists(SdkBase))
		{
			string Err = string.Format("SIK: Steamworks SDK not found in {0}", SdkBase);
			Console.WriteLine(Err);
		}
		string SteamBinariesDir = String.Format(ModuleDirectory + "/redistributable_bin/");
		string ArchPlatformPrefix = "";
		
		if (Target.Platform == UnrealTargetPlatform.Win64)
        {
            ArchPlatformPrefix = "64";
            SteamBinariesDir += "win64/";
        }

        // We do not need to explicitly link to these dlls however if they are provided in these directories, then we must take these versions.
        if (Target.Type == TargetType.Server && Target.Platform == UnrealTargetPlatform.Win64)
		{		
			string SteamClientDll = SteamBinariesDir + String.Format("steamclient{0}.dll", ArchPlatformPrefix);
			string SteamTier0Dll = SteamBinariesDir + String.Format("tier0_s{0}.dll", ArchPlatformPrefix);
			string SteamVstDll = SteamBinariesDir + String.Format("vstdlib_s{0}.dll", ArchPlatformPrefix);
			
			if(File.Exists(SteamClientDll) && File.Exists(SteamTier0Dll) && File.Exists(SteamVstDll))
			{
                System.Console.WriteLine("Linking with bundled steamclient binaries");
                RuntimeDependencies.Add(SteamClientDll);
				RuntimeDependencies.Add(SteamTier0Dll);
				RuntimeDependencies.Add(SteamVstDll);
			}
		}
		// Path for static linking (for Windows & Linux)
		string LibraryPath = SdkBase;
		if (Target.Platform == UnrealTargetPlatform.Win64)
		{
			LibraryPath += "/win64/";
			PublicIncludePaths.Add(ModuleDirectory + "/Includes/steam");
			PublicDefinitions.Add("WITH_STEAMKIT=1");
            PublicAdditionalLibraries.Add(LibraryPath + String.Format("steam_api{0}.lib", ArchPlatformPrefix));
			PublicDelayLoadDLLs.Add(String.Format("steam_api{0}.dll", ArchPlatformPrefix));
			RuntimeDependencies.Add(SteamBinariesDir + String.Format("steam_api{0}.dll", ArchPlatformPrefix));
		}
		else if (Target.Platform == UnrealTargetPlatform.Mac)
		{
			PublicDefinitions.Add("WITH_STEAMKIT=1");
			PublicIncludePaths.Add(ModuleDirectory + "/Includes/steam");
			LibraryPath += "/osx/";
			SteamBinariesDir += "Mac/";
			PublicAdditionalLibraries.Add(LibraryPath + "libsteam_api.dylib");
			// since Steam SDK 1.51, the dylib needs to be in the same directory the binary otherwise it crashes
			RuntimeDependencies.Add("$(BinaryOutputDir)/libsteam_api.dylib", LibraryPath + "libsteam_api.dylib");
		}
		else if (Target.Platform == UnrealTargetPlatform.Linux)
		{
			PublicDefinitions.Add("WITH_STEAMKIT=1");
			PublicIncludePaths.Add(ModuleDirectory + "/Includes/steam");
			LibraryPath += "/linux64/";
			SteamBinariesDir += String.Format("{0}", Target.Architecture);
			PrivateRuntimeLibraryPaths.Add(LibraryPath);
			PublicAdditionalLibraries.Add(LibraryPath + "/libsteam_api.so");
			RuntimeDependencies.Add(LibraryPath + "/libsteam_api.so");
		}
		else
		{
			PublicDefinitions.Add("WITH_STEAMKIT=0");
		}
	}
}
