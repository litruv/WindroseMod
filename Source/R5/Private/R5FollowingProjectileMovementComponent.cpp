#include "R5FollowingProjectileMovementComponent.h"

UR5FollowingProjectileMovementComponent::UR5FollowingProjectileMovementComponent(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

void UR5FollowingProjectileMovementComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}
