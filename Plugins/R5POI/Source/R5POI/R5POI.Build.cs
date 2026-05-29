using UnrealBuildTool;

public class R5POI : ModuleRules {
    public R5POI(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AudioGameplay",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
        });
    }
}
