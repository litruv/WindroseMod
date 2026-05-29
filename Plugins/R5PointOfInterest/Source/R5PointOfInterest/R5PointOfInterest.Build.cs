using UnrealBuildTool;

public class R5PointOfInterest : ModuleRules {
    public R5PointOfInterest(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AudioGameplay",
            "AudioGameplayVolume",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "GameplayTags",
            "R5LandscapeRenderer",
            "R5Scenario",
            "R5TerrainGeneratorCommon",
        });
    }
}
