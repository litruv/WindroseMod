#include "R5ShipsListVM.h"

UR5ShipsListVM::UR5ShipsListVM()
{
}

void UR5ShipsListVM::OnShipEntityUpdated()
{
}

TArray<UR5ShipEntityVM*> UR5ShipsListVM::GetShipsWithStatus(ER5ShipProximityStatus RequiredStatus) const
{
    return {};
}

TArray<UR5ShipEntityVM*> UR5ShipsListVM::GetShipsList() const
{
    return {};
}

UR5ShipEntityVM* UR5ShipsListVM::GetSelectedShipVM() const
{
    return nullptr;
}
