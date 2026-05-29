#include "R5ShipHealthServiceVM.h"

TArray<FR5BLItemsStackData> UR5ShipHealthServiceVM::GetCostItems() const
{
    return {};
}

bool UR5ShipHealthServiceVM::CanHeal() const
{
    return false;
}

int32 UR5ShipHealthServiceVM::GetCurrentShipHealthPercent() const
{
    return 0;
}

int32 UR5ShipHealthServiceVM::GetResultShipHealthPercent() const
{
    return 0;
}

bool UR5ShipHealthServiceVM::IsSelectedService() const
{
    return false;
}

void UR5ShipHealthServiceVM::Unselect()
{
}

void UR5ShipHealthServiceVM::SelectToggle()
{
}

void UR5ShipHealthServiceVM::Heal()
{
}

bool UR5ShipHealthServiceVM::IsHealthFull() const
{
    return false;
}

UR5ShipHealthServiceVM::UR5ShipHealthServiceVM()
{
}
