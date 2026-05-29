using UnrealBuildTool;

public class R5ModelViewViewModel : ModuleRules {
    public R5ModelViewViewModel(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "GCFSM",
            "R5BusinessLogicCore",
            "R5WidgetPool",
            "UMG",
        });
    }
}
