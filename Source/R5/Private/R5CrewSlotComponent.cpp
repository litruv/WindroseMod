#include "R5CrewSlotComponent.h"

UR5CrewSlotComponent::UR5CrewSlotComponent(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

void UR5CrewSlotComponent::OnRep_CrewMember(const AActor* OldValue)
{
}

void UR5CrewSlotComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}
