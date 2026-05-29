using UnrealBuildTool;

public class R5TerrainGenerator_V0_10_0 : ModuleRules {
    public R5TerrainGenerator_V0_10_0(ReadOnlyTargetRules Target) : base(Target) {
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
