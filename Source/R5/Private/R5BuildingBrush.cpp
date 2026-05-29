#include "R5BuildingBrush.h"

UR5BuildingBrush::UR5BuildingBrush()
{
}

UR5BuildingBrush* UR5BuildingBrush::MakeBrushFromItem(UObject* Wco, const UR5BuildingItem* Item)
{
    return nullptr;
}

FR5BuildingBrushComponent UR5BuildingBrush::GetSingleBrush() const
{
    return {};
}

bool UR5BuildingBrush::IsBlueprintBrush() const
{
    return false;
}
