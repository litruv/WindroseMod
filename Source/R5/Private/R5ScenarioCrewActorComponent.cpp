#include "R5ScenarioCrewActorComponent.h"

UR5ScenarioCrewActorComponent::UR5ScenarioCrewActorComponent(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

void UR5ScenarioCrewActorComponent::OnRep_Master()
{
}

void UR5ScenarioCrewActorComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}
