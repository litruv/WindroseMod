#include "R5NoASCDamageableComponent.h"

UR5NoASCDamageableComponent::UR5NoASCDamageableComponent(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

void UR5NoASCDamageableComponent::PlayDamageCue_Implementation(UPrimitiveComponent* DamagedPrimitive, AActor* DamageDealer, FVector_NetQuantize100 Location, FVector_NetQuantize100 Normal, float FinalDamage, UNiagaraSystem* NS, USoundCue* SC)
{
}
