using UnrealBuildTool;

public class R5Nature : ModuleRules {
    public R5Nature(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "R5NDayCycleTime",
            "R5NDeformer",
            "R5NEnvironmentParticles",
            "R5PivotPainter",
            "R5Weather",
        });
    }
}
