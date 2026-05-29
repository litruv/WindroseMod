using UnrealBuildTool;

public class Mercuna : ModuleRules {
    public Mercuna(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "Core",
            "CoreUObject",
            "Engine",
            "GameplayTasks",
            "NavigationSystem",
            "PhysicsCore",
            "PoseSearch",
        });
    }
}
