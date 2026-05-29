#include "R5ShipEffectsServiceVM.h"

void UR5ShipEffectsServiceVM::ClearSelectedEffects()
{
}

bool UR5ShipEffectsServiceVM::IsShipSpawned() const
{
    return false;
}

float UR5ShipEffectsServiceVM::GetActiveEffectRemainingDuration() const
{
    return 0.f;
}

FR5BLEffectWithCostUIData UR5ShipEffectsServiceVM::GetActiveEffectUIData() const
{
    return {};
}

bool UR5ShipEffectsServiceVM::HasActiveEffect() const
{
    return false;
}

UR5ShipEffectsListVM* UR5ShipEffectsServiceVM::GetShipEffectsList() const
{
    return nullptr;
}

bool UR5ShipEffectsServiceVM::HasSelectedEffect() const
{
    return false;
}

bool UR5ShipEffectsServiceVM::CanApplyEffects() const
{
    return false;
}

TArray<FR5BLItemsStackData> UR5ShipEffectsServiceVM::GetCostItems() const
{
    return {};
}

void UR5ShipEffectsServiceVM::OnEffectsListUpdated()
{
}

void UR5ShipEffectsServiceVM::ApplySelectedEffect()
{
}

UR5ShipEffectVM* UR5ShipEffectsServiceVM::GetSelectedEffectVM() const
{
    return nullptr;
}

UR5ShipEffectsServiceVM::UR5ShipEffectsServiceVM()
{
}
