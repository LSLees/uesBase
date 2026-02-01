using UnrealBuildTool;

public class SteamEditor : ModuleRules
{
    public SteamEditor(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
        PrecompileForTargets = PrecompileTargetsType.Editor;
        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core", "MainFrame", "EditorStyle",
            }
        );
        
        PrivateDependencyModuleNames.AddRange(
            new string[]
            {
                "CoreUObject",
                "Engine",
                "Slate",
                "SlateCore",
                "EditorStyle",
                "UnrealEd",
                "LevelEditor",
                "ToolMenus",
                "Projects",
                "UnrealEd", "LauncherServices",
                "SteamIntegrationKit",
                // ... add private dependencies that you statically link with here ...
            }
        );
    }
}