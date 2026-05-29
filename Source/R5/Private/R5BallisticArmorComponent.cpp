#include "R5BallisticArmorComponent.h"

UR5BallisticArmorComponent::UR5BallisticArmorComponent(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

FGameplayTag UR5BallisticArmorComponent::GetArmorTag() const
{
    return {};
}

ER5BLShipArmorType UR5BallisticArmorComponent::GetArmorType() const
{
    return {};
}
