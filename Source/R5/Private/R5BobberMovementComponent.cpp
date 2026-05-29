#include "R5BobberMovementComponent.h"

UR5BobberMovementComponent::UR5BobberMovementComponent(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

void UR5BobberMovementComponent::OnRep_State()
{
}

void UR5BobberMovementComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}
