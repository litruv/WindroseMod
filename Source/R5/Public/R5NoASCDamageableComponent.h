#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Vector_NetQuantize100 -FallbackName=Vector_NetQuantize100
#include "R5NoASCDamageableComponent.generated.h"

class AActor;
class UNiagaraSystem;
class UPrimitiveComponent;
class USoundCue;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5NoASCDamageableComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UR5NoASCDamageableComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void PlayDamageCue(UPrimitiveComponent* DamagedPrimitive, AActor* DamageDealer, FVector_NetQuantize100 Location, FVector_NetQuantize100 Normal, float FinalDamage, UNiagaraSystem* NS, USoundCue* SC);
    
};

