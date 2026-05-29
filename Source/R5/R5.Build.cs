// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class R5 : ModuleRules
{
	public R5(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[]
		{
			"Core",
			"CoreUObject",
			"Engine",
			"AIModule",
			"NavigationSystem",
			"Niagara",
			"NiagaraAnimNotifies",
			"DeveloperSettings",
			"AudioModulation",
			"Soundscape",
			"InputCore",
			"UMG",
			"Slate",
			"GameplayTags",
			"GameplayAbilities",
			"R5GAS",
			"R5AgentSystem",
			"R5Weather",
			"R5Mercuna",
			"R5ActionManager",
			"R5Buoyancy",
			"R5Camera",
			"R5DataKeepers",
			"R5EntityProgression",
			"R5GameplayOrchestrator",
			"R5Inventory",
			"R5ModelViewViewModel",
			"R5NDayCycleTime",
			"R5PhysicsPerformanceOptimizer",
			"R5Scenario",
			"R5Ship",
			"R5NEnvironmentParticles",
			"R5Nature",
			"R5NPhys",
			"R5Relationship",
			"R5TaggedVolume",
			"R5ActorRegistrator",
			"R5ContextualSpawner",
			"R5MockDataCache",
			"R5POI",
			"R5PointOfInterest",
			"R5Requirement",
			"SignificanceManager",
			"AudioGameplay",
			"R5Visibility",
			"R5Cinematic",
			"R5TerrainGeneratorAPI",
			"R5PhysicsLaunch",
			"R5TriggeredSound",
			"MetasoundEngine",
			"R5EQS",
			"R5AgonesServer",
			"R5BLCommon",
			"R5BusinessRules",
			"R5CommonUtils",
			"R5JsonAssets",
			"R5Movement",
			"R5ViewControllers",
			"R5BusinessLogicCore",
			"GCFSM",
			"R5LoadingScreen",
			"R5WDSCommon",
			"R5WDSSystem",
			"R5LandscapeRenderer",
			"PhysicsCore",
			"AudioGameplayVolume",
			"Mercuna",
			"SlateCore",
			"Landscape",
			"R5NWater",
			"LevelSequence",
			"AudioMixer",
			"NetCore",
			"GameplayTasks",
			"EnhancedInput",
			"GameFeatures",
			"GameSettings",
			"GameplayStateTreeModule",
			"ReplicationGraph",
			"StateTreeModule"
		});

		PrivateDependencyModuleNames.AddRange(new string[] {  });

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });
		
		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
