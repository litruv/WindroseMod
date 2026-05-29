using UnrealBuildTool;

public class R5EntityProgression : ModuleRules {
    public R5EntityProgression(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "GameplayTags",
            "R5BusinessRules",
            "R5ModelViewViewModel",
        });
    }
}
