#include "R5BaseProjectileMovementComponent.h"

void UR5BaseProjectileMovementComponent::UpdatedComponentHit(const TArray<FHitResult>& HitResults)
{
}

void UR5BaseProjectileMovementComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}

UR5BaseProjectileMovementComponent::UR5BaseProjectileMovementComponent(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}
