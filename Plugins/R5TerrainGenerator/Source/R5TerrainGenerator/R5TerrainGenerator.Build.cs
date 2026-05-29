using UnrealBuildTool;

public class R5TerrainGenerator : ModuleRules {
    public R5TerrainGenerator(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "GameplayTags",
            "Landscape",
            "R5CommonUtils",
            "R5TerrainGeneratorCommon",
        });
    }
}
