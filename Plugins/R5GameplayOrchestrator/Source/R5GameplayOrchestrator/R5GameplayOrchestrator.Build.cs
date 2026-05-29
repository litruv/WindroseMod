using UnrealBuildTool;

public class R5GameplayOrchestrator : ModuleRules {
    public R5GameplayOrchestrator(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "R5BLCommon",
        });
    }
}
