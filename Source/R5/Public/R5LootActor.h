#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EComponentPhysicsStateChange -FallbackName=EComponentPhysicsStateChange
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GameplayOrchestrator -ObjectName=R5InstantiableActor -FallbackName=R5InstantiableActor
#include "R5InstantiableActor.h"
#include "R5LootActor.generated.h"

class UNiagaraComponent;
class UPrimitiveComponent;
class UR5BLActor_DropView;
class UR5CollisionBodySetupProxyComponent;
class UR5LootMovementComponent;
class UR5PrimitiveInteractionTargetComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable, DefaultConfig, NoExport, Config=R5LootSettings)
class R5_API AR5LootActor : public AR5InstantiableActor {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5CollisionBodySetupProxyComponent* CollisionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NiagaraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5PrimitiveInteractionTargetComponent* InteractTargetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5LootMovementComponent* ProjectileMovement;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Bounciness;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Friction;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VelocityStopSimulatingThreshold;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BecomeTransientOnUnderwaterDepth;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BLActor_DropView* LootView;
    
public:
    AR5LootActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnMovementStopped(const FHitResult& ImpactResult);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnBasementWeak(UPrimitiveComponent* WakingComponent, FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    void OnBasementPhysicsStateChanged(UPrimitiveComponent* ChangedComponent, EComponentPhysicsStateChange StateChange);
    
    UFUNCTION(BlueprintCallable)
    void OnBasementCollisionSettingsChangedEvent(UPrimitiveComponent* ChangedComponent);
    
};

