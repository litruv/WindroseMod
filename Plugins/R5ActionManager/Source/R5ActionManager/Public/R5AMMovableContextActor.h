#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GameplayOrchestrator -ObjectName=R5InstantiableActor -FallbackName=R5InstantiableActor
#include "R5InstantiableActor.h"
#include "R5AMContextActorInterface.h"
#include "R5AMMovableContextActorLocationTask.h"
#include "R5AMMovableContextActor.generated.h"

class UR5AMContextActorComponent;

UCLASS(Blueprintable, NoExport)
class R5ACTIONMANAGER_API AR5AMMovableContextActor : public AR5InstantiableActor, public IR5AMContextActorInterface {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5AMContextActorComponent* ContextActorComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_MovementState, meta=(AllowPrivateAccess=true))
    FR5AMMovableContextActorLocationTask MovementState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsForShip;
    
public:
    AR5AMMovableContextActor(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_MovementState();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMovementStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMovementFinished();
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastRPCOnMovementFinished();
    

    // Fix for true pure virtual functions not being implemented
};

