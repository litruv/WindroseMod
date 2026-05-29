using UnrealBuildTool;

public class R5Cinematic : ModuleRules {
    public R5Cinematic(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "LevelSequence",
            "MovieScene",
            "MovieSceneTracks",
        });
    }
}
