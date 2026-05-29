#include "R5BallisticProjectileMovementComponent.h"

UR5BallisticProjectileMovementComponent::UR5BallisticProjectileMovementComponent(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

void UR5BallisticProjectileMovementComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}
