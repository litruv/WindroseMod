#include "R5BoardingComponent.h"

void UR5BoardingComponent::OnScenarioEnd(FR5BLRecordId ScenarioID)
{
}

UR5BoardingComponent::UR5BoardingComponent(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

void UR5BoardingComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}
