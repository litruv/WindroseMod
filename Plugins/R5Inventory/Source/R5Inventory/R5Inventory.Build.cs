using UnrealBuildTool;

public class R5Inventory : ModuleRules {
    public R5Inventory(ReadOnlyTargetRules Target) : base(Target) {
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
            "R5BusinessRules",
            "R5Camera",
        });
    }
}
