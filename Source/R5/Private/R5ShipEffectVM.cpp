#include "R5ShipEffectVM.h"

UR5ShipEffectVM::UR5ShipEffectVM()
{
}

FR5BLEffectWithCostUIData UR5ShipEffectVM::GetEffectUIData() const
{
    return {};
}

float UR5ShipEffectVM::GetEffectInitialDuration() const
{
    return 0.f;
}

FGameplayTag UR5ShipEffectVM::GetEffectTag() const
{
    return {};
}
