#include "R5PawnMovementComponent.h"

UR5PawnMovementComponent::UR5PawnMovementComponent(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

void UR5PawnMovementComponent::OnRep_ServerLastTransformUpdateTimeStamp()
{
}

void UR5PawnMovementComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}
