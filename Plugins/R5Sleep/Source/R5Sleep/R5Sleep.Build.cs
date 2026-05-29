using UnrealBuildTool;

public class R5Sleep : ModuleRules {
    public R5Sleep(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "GameplayAbilities",
            "GameplayTags",
            "R5GAS",
            "R5Nature",
        });
    }
}
