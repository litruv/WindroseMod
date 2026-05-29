#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "GameFramework/Actor.h"
#include "ER5AttachingDamageableActorState.h"
#include "R5GameplayEffectProxyInterface.h"
#include "R5AttachingDamageableActor.generated.h"

class UCapsuleComponent;
class UR5AttachingDamageableActorParams;
class UR5SelfRevivingHealthComponent;
class UR5SimpleFoliageGameplayEffectProxyComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable, NoExport)
class R5_API AR5AttachingDamageableActor : public AActor, public IR5GameplayEffectProxyInterface {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5AttachingDamageableActorParams* Params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* CollisionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* ActiveMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5SimpleFoliageGameplayEffectProxyComponent* GameplayEffectProxyComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5SelfRevivingHealthComponent* SelfRevivingHealthComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentState, meta=(AllowPrivateAccess=true))
    ER5AttachingDamageableActorState CurrentState;
    
public:
    AR5AttachingDamageableActor(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentState(ER5AttachingDamageableActorState PrevState);
    

    // Fix for true pure virtual functions not being implemented
};

