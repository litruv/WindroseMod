#include "R5PassengerManagerComponent.h"

UR5PassengerManagerComponent::UR5PassengerManagerComponent(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

TArray<AActor*> UR5PassengerManagerComponent::BP_GetPassengersOfActor(AActor* TransportActor)
{
    return {};
}

void UR5PassengerManagerComponent::OnPassengerDestroyed(AActor* Passenger)
{
}
