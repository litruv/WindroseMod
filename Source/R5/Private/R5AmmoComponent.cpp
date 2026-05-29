#include "R5AmmoComponent.h"

UR5AmmoComponent::UR5AmmoComponent(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

int32 UR5AmmoComponent::GetAvailableItemsCount(UR5BLInventorySlotView* AmmoSlotView, const bool bOnlyAmmo) const
{
    return 0;
}

bool UR5AmmoComponent::GetAutoUpdateAmmoStatus() const
{
    return false;
}
