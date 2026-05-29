#include "R5PickupVisualComponent.h"

UR5PickupVisualComponent::UR5PickupVisualComponent(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

void UR5PickupVisualComponent::OnRep_OnAutoPickMode()
{
}

void UR5PickupVisualComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}

void UR5PickupVisualComponent::ServerSetPickMode_Implementation(const EAutoPickLootMode& NewMode)
{
}

void UR5PickupVisualComponent::MulticastSpawnVisualItems_Implementation(const TArray<FInventoryItemVisualData>& Data, float FlightTime)
{
}
