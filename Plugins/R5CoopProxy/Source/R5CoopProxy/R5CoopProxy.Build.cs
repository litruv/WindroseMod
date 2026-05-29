using UnrealBuildTool;

public class R5CoopProxy : ModuleRules {
    public R5CoopProxy(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "GCFSM",
            "GameplayTags",
            "R5BLCommon",
            "R5CaProxy",
            "R5LoadingScreen",
            "R5Net",
            "R5WDSCommon",
        });
    }
}
