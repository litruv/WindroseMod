using UnrealBuildTool;

public class R5Scenario : ModuleRules {
    public R5Scenario(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "GameplayTags",
            "R5BLCommon",
            "R5BusinessRules",
            "R5JsonAssets",
        });
    }
}
