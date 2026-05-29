#include "R5RangeWeaponItemUI.h"

UR5RangeWeaponItemUI::UR5RangeWeaponItemUI(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

float UR5RangeWeaponItemUI::GetScatterRadius() const
{
    return 0.f;
}

bool UR5RangeWeaponItemUI::IsRangeWeaponInHands() const
{
    return false;
}

bool UR5RangeWeaponItemUI::IsActiveReloadInProgress() const
{
    return false;
}

bool UR5RangeWeaponItemUI::IsRangeWeaponAbilityInProgress() const
{
    return false;
}

int32 UR5RangeWeaponItemUI::GetCurrentAmmo() const
{
    return 0;
}

int32 UR5RangeWeaponItemUI::GetMaxAmmo() const
{
    return 0;
}

int32 UR5RangeWeaponItemUI::GetAvailableShotsCount() const
{
    return 0;
}

float UR5RangeWeaponItemUI::GetPassiveReloadRatio() const
{
    return 0.f;
}
