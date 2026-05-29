using UnrealBuildTool;

public class R5AuthProxy : ModuleRules {
    public R5AuthProxy(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "GCFSM",
            "R5BLCommon",
            "R5BackendProxyCommon",
            "R5CommonUtils",
        });
    }
}
