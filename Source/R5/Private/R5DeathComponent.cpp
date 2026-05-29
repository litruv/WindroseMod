#include "R5DeathComponent.h"

UR5DeathComponent::UR5DeathComponent(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

UR5DeathComponent* UR5DeathComponent::GetDeathComponent(const AActor* Actor)
{
    return nullptr;
}

UR5DeathParams* UR5DeathComponent::GetDeathParams() const
{
    return nullptr;
}

void UR5DeathComponent::OnRep_DeathEventData()
{
}

void UR5DeathComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}
