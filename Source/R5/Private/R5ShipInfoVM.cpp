#include "R5ShipInfoVM.h"

UR5ShipInfoVM::UR5ShipInfoVM()
{
}

FR5BLEffectWithCostUIData UR5ShipInfoVM::GetCurrentBuffUIData() const
{
    return {};
}

bool UR5ShipInfoVM::HasShipInfo() const
{
    return false;
}

FInt32Interval UR5ShipInfoVM::GetShipCrew() const
{
    return {};
}

UR5AbilitySystemAttributeVM* UR5ShipInfoVM::GetAbilitySystemAttributeVM() const
{
    return nullptr;
}

float UR5ShipInfoVM::GetCurrentBuffRemainingDuration() const
{
    return 0.f;
}

bool UR5ShipInfoVM::IsDead() const
{
    return false;
}

bool UR5ShipInfoVM::HasActiveEffect() const
{
    return false;
}

int32 UR5ShipInfoVM::GetHealthPercent() const
{
    return 0;
}
