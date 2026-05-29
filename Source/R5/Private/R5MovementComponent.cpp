#include "R5MovementComponent.h"

UR5MovementComponent::UR5MovementComponent(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

bool UR5MovementComponent::CanSprint() const
{
    return false;
}

float UR5MovementComponent::GetMinStaminaLevel() const
{
    return 0.f;
}

FVector UR5MovementComponent::GetInputDirection() const
{
    return {};
}

void UR5MovementComponent::OnRep_CheatMovementSpeedModifer()
{
}

EMovementState UR5MovementComponent::GetCurrentState() const
{
    return {};
}

bool UR5MovementComponent::GetWantRotation(FRotator& OutRotator)
{
    return false;
}

bool UR5MovementComponent::HasAnyRootMotion() const
{
    return false;
}

void UR5MovementComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}

void UR5MovementComponent::ServerUpdateIntention_Implementation(const FMovementIntention& Intention)
{
}

void UR5MovementComponent::ServerSaveMoveInput_Implementation(float Forward, float Right)
{
}
