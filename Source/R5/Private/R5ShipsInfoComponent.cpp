#include "R5ShipsInfoComponent.h"

UR5ShipsInfoComponent::UR5ShipsInfoComponent(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

void UR5ShipsInfoComponent::OnRep_ShipStates()
{
}

void UR5ShipsInfoComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}
