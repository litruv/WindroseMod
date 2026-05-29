using UnrealBuildTool;

public class R5BusinessRules : ModuleRules {
    public R5BusinessRules(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "GameplayAbilities",
            "GameplayTags",
            "Niagara",
            "R5BLCommon",
            "R5BusinessLogicCore",
            "R5JsonAssets",
            "R5Net",
            "R5ViewControllers",
        });
    }
}
