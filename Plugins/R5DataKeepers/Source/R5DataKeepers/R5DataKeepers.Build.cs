using UnrealBuildTool;

public class R5DataKeepers : ModuleRules {
    public R5DataKeepers(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "GCFSM",
            "NetCore",
            "R5BLCommon",
            "R5BusinessRules",
            "R5CaProxy",
            "R5CoopProxy",
            "R5LoadingScreen",
            "R5MetaProxy",
        });
    }
}
