#include "R5MovementFlyComponent.h"

UR5MovementFlyComponent::UR5MovementFlyComponent(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

void UR5MovementFlyComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}

void UR5MovementFlyComponent::ServerSetWantedFlySpeed_Implementation(float Value)
{
}
