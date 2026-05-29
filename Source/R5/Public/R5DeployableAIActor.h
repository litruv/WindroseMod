#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "GameFramework/Actor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=AbilitySystemInterface -FallbackName=AbilitySystemInterface
#include "AbilitySystemInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5AgentSystem -ObjectName=R5AS_AgentComponentInterface -FallbackName=R5AS_AgentComponentInterface
#include "R5AS_AgentComponentInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5AgentSystem -ObjectName=R5AS_MemoryComponentInterface -FallbackName=R5AS_MemoryComponentInterface
#include "R5AS_MemoryComponentInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Relationship -ObjectName=R5FactionComponentInterface -FallbackName=R5FactionComponentInterface
#include "R5FactionComponentInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Relationship -ObjectName=R5OwnershipComponentInterface -FallbackName=R5OwnershipComponentInterface
#include "R5OwnershipComponentInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Visibility -ObjectName=R5VisibilityTargetInterface -FallbackName=R5VisibilityTargetInterface
#include "R5VisibilityTargetInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Visibility -ObjectName=R5VisibilityViewerInterface -FallbackName=R5VisibilityViewerInterface
#include "R5VisibilityViewerInterface.h"
#include "R5GameplayEffectProxyInterface.h"
#include "R5HealthComponentInterface.h"
#include "R5TargetLock_TargetComponentInterface.h"
#include "R5DeployableAIActor.generated.h"

class UCapsuleComponent;
class UHealthComponent;
class UR5ASCGameplayEffectProxyComponent;
class UR5AS_AgentComponent;
class UR5AS_MemoryComponent;
class UR5AbilitySystemComponent;
class UR5AbilitySystemParams;
class UR5AttributeSet;
class UR5ExplosionReactionComponent;
class UR5FactionComponent;
class UR5MarkerComponent;
class UR5OwnershipComponent;
class UR5TargetLock_TargetComponent;
class UR5WDSAttributeSet;
class USceneComponent;

UCLASS(Blueprintable, NoExport)
class R5_API AR5DeployableAIActor : public AActor, public IAbilitySystemInterface, public IR5HealthComponentInterface, public IR5GameplayEffectProxyInterface, public IR5VisibilityViewerInterface, public IR5VisibilityTargetInterface, public IR5FactionComponentInterface, public IR5OwnershipComponentInterface, public IR5TargetLock_TargetComponentInterface, public IR5AS_AgentComponentInterface, public IR5AS_MemoryComponentInterface {
    GENERATED_BODY()
public:
    virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5AbilitySystemParams* AbilitySystemParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag LifeTimeEffectsCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag HandleGameplayEventOnEndPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* Collision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5AbilitySystemComponent* ASC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UR5AttributeSet* AttributeSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UR5WDSAttributeSet* WDSAttributeSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHealthComponent* HealthComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5ExplosionReactionComponent* ExplosionReactionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5TargetLock_TargetComponent* TargetLock_TargetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5ASCGameplayEffectProxyComponent* GameplayEffectProxyComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5MarkerComponent* R5Marker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5FactionComponent* FactionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5OwnershipComponent* OwnershipComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5AS_AgentComponent* AgentComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5AS_MemoryComponent* MemoryComponent;
    
public:
    AR5DeployableAIActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnHealthChanged(float Health, float MaxHealth);
    

    // Fix for true pure virtual functions not being implemented
};

