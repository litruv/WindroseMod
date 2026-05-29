#include "R5ShipTitleVM.h"

UR5ShipTitleVM::UR5ShipTitleVM()
{
}

bool UR5ShipTitleVM::HasTitleShip() const
{
    return false;
}

int32 UR5ShipTitleVM::GetShipLevel() const
{
    return 0;
}

ER5ShipProximityStatus UR5ShipTitleVM::GetShipWorldStatus() const
{
    return {};
}

bool UR5ShipTitleVM::IsFlagship() const
{
    return false;
}

FText UR5ShipTitleVM::GetShipName() const
{
    return {};
}
