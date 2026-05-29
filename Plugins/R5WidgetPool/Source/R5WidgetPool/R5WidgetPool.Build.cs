using UnrealBuildTool;

public class R5WidgetPool : ModuleRules {
    public R5WidgetPool(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "GCFSM",
            "R5JsonAssets",
            "UMG",
        });
    }
}
