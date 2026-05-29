#include "R5AnimatedInteractionTargetComponent.h"

bool UR5AnimatedInteractionTargetComponent::IsFree() const
{
    return false;
}

void UR5AnimatedInteractionTargetComponent::OnRep_OccupiedActor()
{
}

UR5AnimatedInteractionTargetComponent::UR5AnimatedInteractionTargetComponent(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

void UR5AnimatedInteractionTargetComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}
