#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Character -FallbackName=Character
#include "GameFramework/Character.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=AbilitySystemInterface -FallbackName=AbilitySystemInterface
#include "AbilitySystemInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagQuery -FallbackName=GameplayTagQuery
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5AgentSystem -ObjectName=R5AS_AgentComponentInterface -FallbackName=R5AS_AgentComponentInterface
#include "R5AS_AgentComponentInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5AgentSystem -ObjectName=R5AS_AwarenessComponentInterface -FallbackName=R5AS_AwarenessComponentInterface
#include "R5AS_AwarenessComponentInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5PhysicsPerformanceOptimizer -ObjectName=ER5PhysicsPerformanceOptimizerType -FallbackName=ER5PhysicsPerformanceOptimizerType
#include "ER5PhysicsPerformanceOptimizerType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5PhysicsPerformanceOptimizer -ObjectName=R5PhysicsPerformanceOptimizerInterface -FallbackName=R5PhysicsPerformanceOptimizerInterface
#include "R5PhysicsPerformanceOptimizerInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Relationship -ObjectName=R5FactionComponentInterface -FallbackName=R5FactionComponentInterface
#include "R5FactionComponentInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Relationship -ObjectName=R5PartyComponentInterface -FallbackName=R5PartyComponentInterface
#include "R5PartyComponentInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Visibility -ObjectName=R5VisibilityTargetInterface -FallbackName=R5VisibilityTargetInterface
#include "R5VisibilityTargetInterface.h"
#include "R5AimingComponentInterface.h"
#include "R5BattleManagerComponentInterface.h"
#include "R5CharacterFsmComponentInterface.h"
#include "R5CosmeticSoundComponentInterface.h"
#include "R5DeactivationComponentInterface.h"
#include "R5DeathComponentInterface.h"
#include "R5FootstepComponentInterface.h"
#include "R5GameplayEffectProxyInterface.h"
#include "R5HealthComponentInterface.h"
#include "R5InterruptibleSoundInterface.h"
#include "R5PassengerInterface.h"
#include "R5ShipOwnerInterface.h"
#include "R5TargetLock_TargetComponentInterface.h"
#include "R5Character.generated.h"

class AActor;
class AR5PlayerState;
class UEnhancedInputComponent;
class UHealthComponent;
class UR5ASCGameplayEffectProxyComponent;
class UR5AS_AgentComponent;
class UR5AS_AwarenessComponent;
class UR5AbilitySystemParams;
class UR5ActorRegistratorComponentDec2024;
class UR5AimingComponent;
class UR5BattleManagerComponent;
class UR5CameraComponent;
class UR5CharacterVisualComponent;
class UR5CompositeMeshComponent;
class UR5CosmeticSoundComponent;
class UR5CustomPrimitiveDataEffectsComponent;
class UR5DeactivationComponent;
class UR5DeathComponent;
class UR5DebugComponent;
class UR5DeckOfCardsRandomComponent;
class UR5ExplosionReactionComponent;
class UR5FactionComponent;
class UR5FootstepComponent;
class UR5GOS_PlayerTracker_InvokerComponent;
class UR5InterruptibleSoundComponent;
class UR5MovementComponent;
class UR5N_WaterLevelComponent;
class UR5PhysicalAnimationComponent;
class UR5PhysicsLaunchComponent;
class UR5RotationComponent;
class UR5SeaSpawnerInvoker;
class UR5ShipownerComponent;
class UR5SpringArmComponent;
class UR5TargetLock_ControlComponent;
class UR5TargetLock_TargetComponent;
class UR5TriggeredSoundInvokerComponent;
class UR5WaterInteractionComponent;

UCLASS(Blueprintable, DefaultConfig, NoExport, Config=Engine)
class R5_API AR5Character : public ACharacter, public IR5GameplayEffectProxyInterface, public IAbilitySystemInterface, public IR5FootstepComponentInterface, public IR5HealthComponentInterface, public IR5DeactivationComponentInterface, public IR5AS_AwarenessComponentInterface, public IR5BattleManagerComponentInterface, public IR5CharacterFsmComponentInterface, public IR5DeathComponentInterface, public IR5AimingComponentInterface, public IR5InterruptibleSoundInterface, public IR5PassengerInterface, public IR5VisibilityTargetInterface, public IR5PartyComponentInterface, public IR5FactionComponentInterface, public IR5TargetLock_TargetComponentInterface, public IR5AS_AgentComponentInterface, public IR5CosmeticSoundComponentInterface, public IR5ShipOwnerInterface, public IR5PhysicsPerformanceOptimizerInterface {
    GENERATED_BODY()
public:
    virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCharacterTransportChanged, AActor*, Transport);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCharacterTransportChanged OnCharacterTransportChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHealthComponent* HealthComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5RotationComponent* RotationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5CompositeMeshComponent* CompositeMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UEnhancedInputComponent* UIInputHandlerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5TargetLock_ControlComponent* TargetLock_ControlComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5TargetLock_TargetComponent* TargetLock_TargetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5FootstepComponent* FootstepComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5AimingComponent* AimingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5DeactivationComponent* DeactivationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5AS_AwarenessComponent* R5AS_AwarenessComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5BattleManagerComponent* BattleManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5ASCGameplayEffectProxyComponent* GameplayEffectProxyComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5ExplosionReactionComponent* ExplosionReactionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5CharacterVisualComponent* CharacterVisualComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5InterruptibleSoundComponent* InterruptibleSoundComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5AS_AgentComponent* R5AS_AgentComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5CosmeticSoundComponent* CosmeticSoundComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5N_WaterLevelComponent* WaterLevelComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5WaterInteractionComponent* WaterInteractionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5PhysicsLaunchComponent* PhysicsLaunchComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5PhysicalAnimationComponent* PhysicalAnimationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5CustomPrimitiveDataEffectsComponent* CPDEffectsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5DeckOfCardsRandomComponent* DeckOfCardsRandomComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5SeaSpawnerInvoker* SeaSpawnerInvoker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5TriggeredSoundInvokerComponent* TriggeredSoundInvoker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5GOS_PlayerTracker_InvokerComponent* GameplayOrchestratorInvoker;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5FactionComponent* FactionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5AbilitySystemParams* AbilitySystemParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5DeathComponent* DeathComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5ActorRegistratorComponentDec2024* R5ArComponent;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5PhysicsPerformanceOptimizerType PhysicsPerformanceOptimizeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery SkipRepAttachOnLocalClient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery SkipRepAttachOnSimulateClient;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5SpringArmComponent* CameraBoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5CameraComponent* FollowCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5MovementComponent* R5MovementComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5DebugComponent* R5DebugComponent;
    
public:
    AR5Character(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnCompositeMeshCustomizationChanged();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5TargetLock_ControlComponent* GetTargetLockControlComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5ShipownerComponent* GetShipownerComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AR5PlayerState* GetR5PlayerState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5MovementComponent* GetR5MovementComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5DeathComponent* GetDeathComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5CompositeMeshComponent* GetCompositeMeshComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* BP_GetTransport() const;
    

    // Fix for true pure virtual functions not being implemented
};

