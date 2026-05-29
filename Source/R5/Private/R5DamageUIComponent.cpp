#include "R5DamageUIComponent.h"

UR5DamageUIComponent::UR5DamageUIComponent(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

void UR5DamageUIComponent::OnASCDamageDealt(AActor* InActor, float InIncomingDamage, float InDealtDamage, float ArmorDamageReduction, bool bIsKillDamage, const FGameplayEffectSpec& InGameplayEffectSpec)
{
}

void UR5DamageUIComponent::ClientDamageDealt_Implementation(const FR5CollectedDamageInstance& DamageInstance)
{
}

void UR5DamageUIComponent::NetMulticastDamageDealt_Implementation(const FR5CollectedDamageInstance& DamageInstance)
{
}
