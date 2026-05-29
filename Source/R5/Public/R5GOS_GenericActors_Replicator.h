#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "GameFramework/Actor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Vector_NetQuantize100 -FallbackName=Vector_NetQuantize100
#include "R5GOS_GenericActors_Replicator.generated.h"

class UNiagaraSystem;
class UPrimitiveComponent;
class USoundCue;

UCLASS(Blueprintable, NoExport)
class AR5GOS_GenericActors_Replicator : public AActor {
    GENERATED_BODY()
public:
    AR5GOS_GenericActors_Replicator(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void PlayDamageCue(UPrimitiveComponent* DamagedPrimitive, AActor* DamageDealer, FVector_NetQuantize100 Location, FVector_NetQuantize100 Normal, float FinalDamage, UNiagaraSystem* NS, USoundCue* SC);
    
};

