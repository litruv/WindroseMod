#include "R5MineralNodeClusterComponent.h"

UR5MineralNodeClusterComponent::UR5MineralNodeClusterComponent(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

void UR5MineralNodeClusterComponent::OnRep_Health()
{
}

void UR5MineralNodeClusterComponent::OnRep_LastHitResult()
{
}

void UR5MineralNodeClusterComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}
