#include "R5ShipHealthComponent.h"

float UR5ShipHealthComponent::GetModuleAverageRelativeHealth(const FGameplayTag& ModuleTag) const
{
    return 0.f;
}

UR5ShipHealthComponent::UR5ShipHealthComponent(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

bool UR5ShipHealthComponent::HasModule(const FGameplayTag& ModuleTag) const
{
    return false;
}
