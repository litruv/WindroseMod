#include "R5CraftStation.h"

void AR5CraftStation::StaticRegisterNativesAR5CraftStation()
{
}

UR5BLInventoryView* AR5CraftStation::GetInventoryView() const
{
    return nullptr;
}

void AR5CraftStation::OnCraftComponentUpdate()
{
}

AR5CraftStation::AR5CraftStation(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}
