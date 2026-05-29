using UnrealBuildTool;

public class R5AgentSystemStateTree : ModuleRules {
    public R5AgentSystemStateTree(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "GameplayTags",
            "R5AgentSystem",
            "StateTreeModule",
        });
    }
}
