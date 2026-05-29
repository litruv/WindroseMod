param(
    [string]$ProjectRoot = ""
)


. (Join-Path $PSScriptRoot "ProjectRoot.ps1")
if (-not $ProjectRoot) { $ProjectRoot = Get-WindroseModProjectRoot }
$roots = @(
    Join-Path $ProjectRoot "Source"
    Join-Path $ProjectRoot "Plugins"
)


. (Join-Path $PSScriptRoot "ProjectRoot.ps1")
if (-not $ProjectRoot) { $ProjectRoot = Get-WindroseModProjectRoot }
$objectToInclude = @{
    "GameplayTag" = "GameplayTagContainer.h"
    "GameplayTagContainer" = "GameplayTagContainer.h"
    "GameplayTagQuery" = "GameplayTagContainer.h"
    "AbilityTask_ApplyRootMotion_Base" = "Abilities/Tasks/AbilityTask_ApplyRootMotion_Base.h"
    "AbilityAsync" = "Abilities/Async/AbilityAsync.h"
    "AbilityTask" = "Abilities/Tasks/AbilityTask.h"
    "AttributeSet" = "AttributeSet.h"
    "MovementComponent" = "GameFramework/MovementComponent.h"
    "IpConnection" = "IpConnection.h"
    "IpNetDriver" = "IpNetDriver.h"
    "ERootMotionFinishVelocityMode" = "GameFramework/RootMotionSource.h"
    "RootMotionSource" = "GameFramework/RootMotionSource.h"
    "InstancedStaticMeshComponent" = "Components/InstancedStaticMeshComponent.h"
    "DecalComponent" = "Components/DecalComponent.h"
    "FastArraySerializer" = "Net/Serialization/FastArraySerializer.h"
    "SplinePoint" = "Components/SplineComponent.h"
    "SphereComponent" = "Components/SphereComponent.h"
    "GameplayEffectCustomApplicationRequirement" = "GameplayEffectCustomApplicationRequirement.h"
    "Vector" = "Math/Vector.h"
    "Vector2D" = "Math/Vector2D.h"
    "Vector4" = "Math/Vector4.h"
    "IntVector" = "Math/IntVector.h"
    "Rotator" = "Math/Rotator.h"
    "Transform" = "Math/Transform.h"
    "Color" = "Math/Color.h"
    "LinearColor" = "Math/Color.h"
    "Quat" = "Math/Quat.h"
    "Actor" = "GameFramework/Actor.h"
    "ActorComponent" = "Components/ActorComponent.h"
    "SceneComponent" = "Components/SceneComponent.h"
    "Pawn" = "GameFramework/Pawn.h"
    "Character" = "GameFramework/Character.h"
    "HUD" = "GameFramework/HUD.h"
    "CameraComponent" = "Camera/CameraComponent.h"
    "PointLightComponent" = "Components/PointLightComponent.h"
    "PlayerController" = "GameFramework/PlayerController.h"
    "PlayerState" = "GameFramework/PlayerState.h"
    "GameMode" = "GameFramework/GameMode.h"
    "GameState" = "GameFramework/GameState.h"
    "GameInstance" = "Engine/GameInstance.h"
    "GameInstanceSubsystem" = "Subsystems/GameInstanceSubsystem.h"
    "WorldSubsystem" = "Subsystems/WorldSubsystem.h"
    "TickableWorldSubsystem" = "Subsystems/WorldSubsystem.h"
    "EngineSubsystem" = "Subsystems/EngineSubsystem.h"
    "Object" = "UObject/Object.h"
    "DataAsset" = "Engine/DataAsset.h"
    "PrimaryDataAsset" = "Engine/DataAsset.h"
    "BlueprintFunctionLibrary" = "Kismet/BlueprintFunctionLibrary.h"
    "UserWidget" = "Blueprint/UserWidget.h"
    "BTTaskNode" = "BehaviorTree/BTTaskNode.h"
    "BTService" = "BehaviorTree/BTService.h"
    "BTDecorator" = "BehaviorTree/BTDecorator.h"
    "DeveloperSettings" = "Engine/DeveloperSettings.h"
    "DeveloperSettingsBackedByCVars" = "Engine/DeveloperSettingsBackedByCVars.h"
    "DebugDrawComponent" = "Debug/DebugDrawComponent.h"
    "AnimNotifyState" = "Animation/AnimNotifies/AnimNotifyState.h"
    "AnimNotify_PlaySound" = "Animation/AnimNotifies/AnimNotify_PlaySound.h"
    "AnimNotify_PlayNiagaraEffect" = "AnimNotify_PlayNiagaraEffect.h"
    "AnimNotifyState_TimedNiagaraEffect" = "AnimNotifyState_TimedNiagaraEffect.h"
    "AnimNotifyState_TimedNiagaraEffectAdvanced" = "AnimNotifyState_TimedNiagaraEffect.h"
    "BlackboardData" = "BehaviorTree/BlackboardData.h"
    "AITask_MoveTo" = "Tasks/AITask_MoveTo.h"
    "EAIOptionFlag" = "AITypes.h"
    "EGenericAICheck" = "AITypes.h"
    "EEnvQueryParam" = "EnvironmentQuery/EnvQueryTypes.h"
    "EEnvQueryRunMode" = "EnvironmentQuery/EnvQueryTypes.h"
    "GameplayEffectSpecHandle" = "GameplayEffectTypes.h"
    "ReplicationGraphNode" = "ReplicationGraph.h"
    "ReplicationGraphNode_ActorList" = "ReplicationGraph.h"
    "ReplicationGraphNode_AlwaysRelevant_ForConnection" = "ReplicationGraph.h"
    "EWidgetBlendMode" = "Components/WidgetComponent.h"
    "SoundscapePaletteCollection" = "SoundscapeSubsystem.h"
    "LevelInstance" = "LevelInstance/LevelInstanceActor.h"
    "StateTreeTaskCommonBase" = "StateTreeTaskBase.h"
    "StateTreeConditionCommonBase" = "StateTreeConditionBase.h"
    "StateTreePropertyFunctionCommonBase" = "StateTreePropertyFunctionBase.h"
    "GameplayEffectExecutionCalculation" = "GameplayEffectExecutionCalculation.h"
    "DebugCameraController" = "Engine/DebugCameraController.h"
    "EnhancedPlayerInput" = "EnhancedPlayerInput.h"
    "EnvQueryContext" = "EnvironmentQuery/EnvQueryContext.h"
    "EnvQueryTest_Project" = "EnvironmentQuery/Tests/EnvQueryTest_Project.h"
    "EQSQueryResultSourceInterface" = "EnvironmentQuery/EQSQueryResultSourceInterface.h"
    "ArrowComponent" = "Components/ArrowComponent.h"
    "CapsuleComponent" = "Components/CapsuleComponent.h"
    "AbilityAsync_WaitGameplayTag" = "Abilities/Async/AbilityAsync_WaitGameplayTag.h"
    "DefaultGameFeaturesProjectPolicies" = "GameFeaturesProjectPolicies.h"
    "CharacterMovementComponent" = "GameFramework/CharacterMovementComponent.h"
    "PhysicalAnimationComponent" = "PhysicsEngine/PhysicalAnimationComponent.h"
    "InputModifier" = "InputModifiers.h"
    "Commandlet" = "Commandlets/Commandlet.h"
    "EnhancedInputUserSettings" = "UserSettings/EnhancedInputUserSettings.h"
    "GameUserSettings" = "GameFramework/GameUserSettings.h"
    "NetworkPredictionInterface" = "Interfaces/NetworkPredictionInterface.h"
    "AbilitySystemInterface" = "AbilitySystemInterface.h"
    "ProjectileMovementComponent" = "GameFramework/ProjectileMovementComponent.h"
    "BoxComponent" = "Components/BoxComponent.h"
    "SplineComponent" = "Components/SplineComponent.h"
    "AIController" = "AIController.h"
    "GameplayTagAssetInterface" = "GameplayTagAssetInterface.h"
    "AudioComponent" = "Components/AudioComponent.h"
    "SceneCapture2D" = "Engine/SceneCapture2D.h"
    "NavigationSystemV1" = "NavigationSystem.h"
    "RecastNavMesh" = "NavMesh/RecastNavMesh.h"
    "LocalPlayerSaveGame" = "GameFramework/SaveGame.h"
    "SignificanceManager" = "SignificanceManager.h"
    "SpringArmComponent" = "GameFramework/SpringArmComponent.h"
    "TileView" = "Components/TileView.h"
    "LevelSequencePlayer" = "LevelSequencePlayer.h"
    "MovieSceneSequencePlaybackSettings" = "MovieSceneSequencePlaybackSettings.h"
    "LevelSequenceCameraSettings" = "LevelSequenceCameraSettings.h"
    "DefaultLevelSequenceInstanceData" = "DefaultLevelSequenceInstanceData.h"
    "AudioGameplayCondition" = "Interfaces/IAudioGameplayCondition.h"
    "SoftObjectPath" = "UObject/SoftObjectPath.h"
    "Guid" = "Misc/Guid.h"
    "DateTime" = "Misc/DateTime.h"
    "Timespan" = "Misc/Timespan.h"
    "DirectoryPath" = "UObject/SoftObjectPath.h"
    "FilePath" = "UObject/SoftObjectPath.h"
    "GameplayEffect" = "GameplayEffect.h"
    "GameplayAbility" = "Abilities/GameplayAbility.h"
    "GameplayAbilitySpec" = "GameplayAbilitySpec.h"
    "AbilitySystemComponent" = "AbilitySystemComponent.h"
    "GameplayEffectSpec" = "GameplayEffectTypes.h"
    "GameplayEffectContext" = "GameplayEffectTypes.h"
    "PredictionKey" = "GameplayPrediction.h"
    "GameplayCueNotify_Static" = "GameplayCueNotify_Static.h"
    "GameplayCueManager" = "GameplayCueManager.h"
    "GameplayCueNotify_Actor" = "GameplayCueNotify_Actor.h"
    "AbilitySystemGlobals" = "AbilitySystemGlobals.h"
    "GameplayAbilityTargetData" = "Abilities/GameplayAbilityTargetTypes.h"
    "GameplayEffectComponent" = "GameplayEffectComponent.h"
    "AdditionalEffectsGameplayEffectComponent" = "GameplayEffectComponents/AdditionalEffectsGameplayEffectComponent.h"
    "GameStateBase" = "GameFramework/GameStateBase.h"
    "GameModeBase" = "GameFramework/GameModeBase.h"
    "GameplayAbilitySpecHandle" = "GameplayAbilitySpec.h"
    "ActivationInfo" = "GameplayAbilityTypes.h"
    "ETriggerEvent" = "InputTriggers.h"
    "GameplayAttributeData" = "AttributeSet.h"
    "ActiveGameplayEffectHandle" = "ActiveGameplayEffectHandle.h"
    "GameplayTagRequirements" = "GameplayEffectTypes.h"
    "GameplayTargetDataFilterHandle" = "Abilities/GameplayAbilityTargetDataFilter.h"
    "GameplayEventData" = "Abilities/GameplayAbilityTypes.h"
    "GameplayAbilityTargetDataHandle" = "Abilities/GameplayAbilityTargetTypes.h"
    "GameplayModMagnitudeCalculation" = "GameplayModMagnitudeCalculation.h"
    "Interface_PostProcessVolume" = "Interfaces/Interface_PostProcessVolume.h"
    "AttenuationVolumeComponent" = "AttenuationVolumeComponent.h"
    "AudioGameplayVolumeComponent" = "AudioGameplayVolumeComponent.h"
    "FilterVolumeComponent" = "FilterVolumeComponent.h"
    "ReverbVolumeComponent" = "ReverbVolumeComponent.h"
    "MovieSceneTrack" = "MovieSceneTrack.h"
    "MovieSceneNameableTrack" = "MovieSceneNameableTrack.h"
    "MovieSceneTrackTemplateProducer" = "Compilation/IMovieSceneTrackTemplateProducer.h"
    "MovieSceneSection" = "MovieSceneSection.h"
    "MovieSceneStringChannel" = "Channels/MovieSceneStringChannel.h"
    "MovieSceneEvalTemplate" = "Evaluation/MovieSceneEvalTemplate.h"
    "MovieScenePlaybackClient" = "IMovieScenePlaybackClient.h"
    "EFireEventsAtPosition" = "Tracks/MovieSceneEventTrack.h"
    "ScalableFloat" = "ScalableFloat.h"
    "GameplayEffectUIData" = "GameplayEffectUIData.h"
    "GameplayCueParameters" = "GameplayEffectTypes.h"
    "GameplayEffectSpecForRPC" = "GameplayEffect.h"
    "GameplayEffectQuery" = "GameplayEffect.h"
    "FastArraySerializerItem" = "Net/Serialization/FastArraySerializer.h"
    "StateTreeEvaluatorCommonBase" = "StateTreeEvaluatorBase.h"
    "GameplayAttribute" = "AttributeSet.h"
    "NavigationSystemBase" = "AI/NavigationSystemBase.h"
    "ReplicationGraph" = "ReplicationGraph.h"
    "ReplicationGraphNode" = "ReplicationGraphTypes.h"
    "StateTreeComponent" = "Components/StateTreeComponent.h"
    "StateTreeComponentSchema" = "Components/StateTreeComponentSchema.h"
    "EnvQueryTest" = "EnvironmentQuery/EnvQueryTest.h"
    "EnvQueryGenerator" = "EnvironmentQuery/EnvQueryGenerator.h"
    "EnvTraceData" = "EnvironmentQuery/EnvQueryTypes.h"
    "EnvDirection" = "EnvironmentQuery/EnvQueryTypes.h"
    "SoundControlBus" = "SoundControlBus.h"
    "SoundControlBusMix" = "SoundControlBusMix.h"
    "NiagaraSystem" = "NiagaraSystem.h"
    "NiagaraComponent" = "NiagaraComponent.h"
    "NiagaraDataInterface" = "NiagaraDataInterface.h"
    "InstancedStruct" = "StructUtils/InstancedStruct.h"
    "UserObjectListEntry" = "Blueprint/IUserObjectListEntry.h"
    "ListView" = "Components/ListView.h"
    "BTTask_BlackboardBase" = "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
    "AITask" = "Tasks/AITask.h"
    "AIRequestID" = "AITypes.h"
    "AIDataProviderFloatValue" = "DataProviders/AIDataProvider.h"
    "AIDataProviderBoolValue" = "DataProviders/AIDataProvider.h"
    "EnvQueryItemType_Point" = "EnvironmentQuery/Items/EnvQueryItemType_Point.h"
    "EnvQueryContext_Querier" = "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"
    "BlueprintAsyncActionBase" = "Kismet/BlueprintAsyncActionBase.h"
    "PawnMovementComponent" = "GameFramework/PawnMovementComponent.h"
    "NavigationQueryFilter" = "NavFilters/NavigationQueryFilter.h"
    "InputAction" = "InputAction.h"
    "EnhancedInputComponent" = "EnhancedInputComponent.h"
}

$rx = '^//CROSS-MODULE INCLUDE V2:\s*-ModuleName=([A-Za-z0-9_]+)\s*-ObjectName=([A-Za-z0-9_]+)'
$changed = 0

foreach ($root in $roots) {
    if (-not (Test-Path $root)) { continue }

    foreach ($file in (Get-ChildItem -Path $root -Recurse -Include *.h,*.cpp -File)) {
        $lines = Get-Content -Path $file.FullName
        $out = New-Object System.Collections.Generic.List[string]
        $edited = $false

        foreach ($line in $lines) {
            $out.Add($line) | Out-Null
            $m = [regex]::Match($line, $rx)
            if (-not $m.Success) { continue }

            $moduleName = $m.Groups[1].Value
            $objectName = $m.Groups[2].Value

            if ($moduleName -like "R5*" -or $moduleName -in @("GCFSM", "Agones", "Mercuna", "Sentry", "StoveSDKPlugin")) {
                continue
            }

            if (-not $objectToInclude.ContainsKey($objectName)) { continue }

            $includePath = $objectToInclude[$objectName]
            $includeLine = "#include `"$includePath`""
            $hasInclude = $false
            foreach ($existing in $lines) {
                if ($existing -eq $includeLine) {
                    $hasInclude = $true
                    break
                }
            }

            if (-not $hasInclude) {
                $out.Add($includeLine) | Out-Null
                $edited = $true
            }
        }

        if ($edited) {
            Set-Content -Path $file.FullName -Value $out
            $changed++
        }
    }
}

Write-Host "Added engine includes in $changed headers."
