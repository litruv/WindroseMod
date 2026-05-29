#include "R5CarryComponent.h"

UR5CarryComponent::UR5CarryComponent(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

void UR5CarryComponent::OnRep_OnCarryDataReplicated()
{
}

void UR5CarryComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}
