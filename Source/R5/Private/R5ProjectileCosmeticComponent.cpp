#include "R5ProjectileCosmeticComponent.h"

UR5ProjectileCosmeticComponent::UR5ProjectileCosmeticComponent(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

void UR5ProjectileCosmeticComponent::HandleWaterEffect(FGameplayTag EffectTag) const
{
}

void UR5ProjectileCosmeticComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}

void UR5ProjectileCosmeticComponent::NetMulticastSpawnImpactStaticEffect_Implementation(const FVector_NetQuantize10& Location, const FVector_NetQuantize10& ImpactNormal, const FR5ProjectileSurfaceEffectData& ProjectileSurfaceEffectData)
{
}
