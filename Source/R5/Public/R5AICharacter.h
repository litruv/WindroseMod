#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Character -FallbackName=Character
#include "GameFramework/Character.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=AbilitySystemInterface -FallbackName=AbilitySystemInterface
#include "AbilitySystemInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5AgentSystem -ObjectName=R5AS_AgentComponentInterface -FallbackName=R5AS_AgentComponentInterface
#include "R5AS_AgentComponentInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5AgentSystem -ObjectName=R5AS_MemoryComponentInterface -FallbackName=R5AS_MemoryComponentInterface
#include "R5AS_MemoryComponentInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5CommonUtils -ObjectName=R5SharedDataStoreUser -FallbackName=R5SharedDataStoreUser
#include "R5SharedDataStoreUser.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Mercuna -ObjectName=R5MercunaNavigationInterface -FallbackName=R5MercunaNavigationInterface
#include "R5MercunaNavigationInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5PhysicsPerformanceOptimizer -ObjectName=ER5PhysicsPerformanceOptimizerType -FallbackName=ER5PhysicsPerformanceOptimizerType
#include "ER5PhysicsPerformanceOptimizerType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5PhysicsPerformanceOptimizer -ObjectName=R5PhysicsPerformanceOptimizerInterface -FallbackName=R5PhysicsPerformanceOptimizerInterface
#include "R5PhysicsPerformanceOptimizerInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Relationship -ObjectName=R5FactionComponentInterface -FallbackName=R5FactionComponentInterface
#include "R5FactionComponentInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Relationship -ObjectName=R5OwnershipComponentInterface -FallbackName=R5OwnershipComponentInterface
#include "R5OwnershipComponentInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Scenario -ObjectName=R5ScenarioInterface -FallbackName=R5ScenarioInterface
#include "R5ScenarioInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Visibility -ObjectName=R5VisibilityTargetInterface -FallbackName=R5VisibilityTargetInterface
#include "R5VisibilityTargetInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Visibility -ObjectName=R5VisibilityViewerInterface -FallbackName=R5VisibilityViewerInterface
#include "R5VisibilityViewerInterface.h"
#include "R5AIPawnCommon.h"
#include "R5AmmoComponentInterface.h"
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
#include "R5SignificanceActor.h"
#include "R5SignificanceManagerComponentInterface.h"
#include "R5TargetLock_TargetComponentInterface.h"
#include "R5AICharacter.generated.h"

class AR5AIController;
class UArrowComponent;
class UHealthComponent;
class UR5AIBehaviorAttributeSet;
class UR5AIEquipment;
class UR5AIPawnParams;
class UR5ASCGameplayEffectProxyComponent;
class UR5AS_AgentComponent;
class UR5AS_MemoryComponent;
class UR5AbilitySystemComponent;
class UR5AbilitySystemParams;
class UR5ActorRegistratorComponentDec2024;
class UR5AimingComponent;
class UR5AmmoComponent;
class UR5AttributeSet;
class UR5BattleManagerComponent;
class UR5CharacterFsmComponent;
class UR5CombatComponent;
class UR5CompositeMeshComponent;
class UR5CosmeticSoundComponent;
class UR5CustomPrimitiveDataEffectsComponent;
class UR5DeactivationComponent;
class UR5DeathComponent;
class UR5ExplosionReactionComponent;
class UR5FactionComponent;
class UR5FootstepComponent;
class UR5InterruptibleSoundComponent;
class UR5MarkerComponent;
class UR5MercunaGroundNavigationComponent;
class UR5MercunaObstacleComponent;
class UR5OwnershipComponent;
class UR5PhysicalAnimationComponent;
class UR5PhysicsLaunchComponent;
class UR5PostureAttributeSet;
class UR5ScenarioComponent_ForIslandActor;
class UR5ScenarioCrewActorComponent;
class UR5SignificanceManagerComponent;
class UR5SignificanceParams;
class UR5TargetLock_TargetComponent;
class UR5WDSAttributeSet;

UCLASS(Blueprintable, NoExport)
class R5_API AR5AICharacter : public ACharacter, public IAbilitySystemInterface, public IR5DeathComponentInterface, public IR5SignificanceManagerComponentInterface, public IR5DeactivationComponentInterface, public IR5CharacterFsmComponentInterface, public IR5HealthComponentInterface, public IR5GameplayEffectProxyInterface, public IR5FootstepComponentInterface, public IR5InterruptibleSoundInterface, public IR5CosmeticSoundComponentInterface, public IR5VisibilityViewerInterface, public IR5VisibilityTargetInterface, public IR5MercunaNavigationInterface, public IR5FactionComponentInterface, public IR5OwnershipComponentInterface, public IR5AmmoComponentInterface, public IR5TargetLock_TargetComponentInterface, public IR5AS_AgentComponentInterface, public IR5AS_MemoryComponentInterface, public IR5BattleManagerComponentInterface, public IR5PassengerInterface, public IR5ScenarioInterface, public IR5AIPawnCommon, public IR5SharedDataStoreUser, public IR5SignificanceActor, public IR5PhysicsPerformanceOptimizerInterface {
    GENERATED_BODY()
public:
    virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHealthComponent* HealthComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5DeathComponent* DeathComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5SignificanceManagerComponent* SignificanceManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5DeactivationComponent* DeactivationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5CompositeMeshComponent* CompositeMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5CharacterFsmComponent* CharacterFsmComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5TargetLock_TargetComponent* TargetLock_TargetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5ASCGameplayEffectProxyComponent* GameplayEffectProxyComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5CosmeticSoundComponent* CosmeticSoundComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5FootstepComponent* FootstepComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5InterruptibleSoundComponent* InterruptibleSoundComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5AIEquipment* EquipmentComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5AmmoComponent* AmmoComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5CombatComponent* CombatComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* EyesArrowComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5ExplosionReactionComponent* ExplosionReactionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5MarkerComponent* R5Marker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5MercunaGroundNavigationComponent* MercunaGroundNavigationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5AbilitySystemComponent* AbilitySystemComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UR5AttributeSet* AttributeSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UR5AIBehaviorAttributeSet* AIBehaviorAttributeSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UR5PostureAttributeSet* PostureAttributeSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UR5WDSAttributeSet* WDSAttributeSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5FactionComponent* FactionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5OwnershipComponent* OwnershipComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5AimingComponent* AimingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5AbilitySystemParams* AbilitySystemParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5AIPawnParams* AIPawnParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5AS_AgentComponent* R5AgentComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5AS_MemoryComponent* MemoryComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5BattleManagerComponent* BattleManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5ScenarioComponent_ForIslandActor* R5ScenarioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5ActorRegistratorComponentDec2024* R5ArComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5PhysicsLaunchComponent* PhysicsLaunchComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5PhysicalAnimationComponent* PhysicalAnimationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5ScenarioCrewActorComponent* ScenarioCrewActorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5MercunaObstacleComponent* MercunaObstacleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5CustomPrimitiveDataEffectsComponent* CPDEffectsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ColorID, meta=(AllowPrivateAccess=true))
    uint8 ColorID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5SignificanceParams* SignificanceParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SignificanceTypeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UR5AbilitySystemParams> OverriddenAbilitySystemParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UR5AIPawnParams> OverriddenAIPawnParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldUsePhysicsPerformance;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5PhysicsPerformanceOptimizerType OptimizeType;
    
public:
    AR5AICharacter(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ColorID();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AR5AIController* GetR5AIController() const;
    
    UFUNCTION(BlueprintCallable)
    void ActivateCharacter();
    

    // Fix for true pure virtual functions not being implemented
};

