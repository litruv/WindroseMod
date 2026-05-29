using UnrealBuildTool;

public class R5GAS : ModuleRules {
    public R5GAS(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "Core",
            "CoreUObject",
            "Engine",
            "EnhancedInput",
            "GameplayAbilities",
            "GameplayTasks",
            "GameplayTags",
            "NetCore",
            "Niagara",
            "R5BusinessRules",
            "R5CommonUtils",
            "R5Movement",
            "R5WDSCommon",
        });
    }
}
