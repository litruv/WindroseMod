using UnrealBuildTool;

public class R5CaProxy : ModuleRules {
    public R5CaProxy(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "R5BackendProxyCommon",
            "R5CommonUtils",
        });
    }
}
