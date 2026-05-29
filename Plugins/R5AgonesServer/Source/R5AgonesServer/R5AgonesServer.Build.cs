using UnrealBuildTool;

public class R5AgonesServer : ModuleRules {
    public R5AgonesServer(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Agones",
            "Core",
            "CoreUObject",
            "Engine",
        });
    }
}
