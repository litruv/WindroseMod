using UnrealBuildTool;

public class R5Ship : ModuleRules {
    public R5Ship(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "EnhancedInput",
            "R5Buoyancy",
            "R5CommonUtils",
            "R5JsonAssets",
            "R5Weather",
            "UMG",
        });
    }
}
