#include "R5CustomizationSwitcherComponent.h"

void UR5CustomizationSwitcherComponent::ResetVisualFromTarget(const AActor* Target)
{
}

bool UR5CustomizationSwitcherComponent::ResetVisualFromSavedData(const AR5PlayerStateBase* PlayerState)
{
    return false;
}

UR5CustomizationSwitcherComponent::UR5CustomizationSwitcherComponent(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

void UR5CustomizationSwitcherComponent::ResetVisualFromCDO(const TSoftClassPtr<AActor> Target, int32 PredefinedArchetypeIndex)
{
}

void UR5CustomizationSwitcherComponent::ResetEquipmentFromSavedData(const AR5PlayerStateBase* PlayerState)
{
}
