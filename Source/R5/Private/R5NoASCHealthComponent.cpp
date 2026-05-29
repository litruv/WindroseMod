#include "R5NoASCHealthComponent.h"

void UR5NoASCHealthComponent::OnRep_bAlive(bool bPreviousAlive)
{
}

UR5NoASCHealthComponent::UR5NoASCHealthComponent(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

void UR5NoASCHealthComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}
