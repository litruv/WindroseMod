#include "R5FastTravelComponent.h"

UR5FastTravelComponent::UR5FastTravelComponent(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

bool UR5FastTravelComponent::IsReceiver() const
{
    return false;
}

void UR5FastTravelComponent::OnRep_FastTravelGuid()
{
}

bool UR5FastTravelComponent::IsSender() const
{
    return false;
}

void UR5FastTravelComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}
