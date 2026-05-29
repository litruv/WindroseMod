#include "R5ShipManageVM.h"

UR5ShipManageVM::UR5ShipManageVM()
{
}

UR5ShipInventoryVM* UR5ShipManageVM::GetShipInventoryVM() const
{
    return nullptr;
}

UR5ShipTitleVM* UR5ShipManageVM::GetShipTitleVM() const
{
    return nullptr;
}

UR5AbilitySystemAttributeVM* UR5ShipManageVM::GetAbilitySystemAttributeVM() const
{
    return nullptr;
}

UR5ShipCustomizationVM* UR5ShipManageVM::GetShipCustomizationVM() const
{
    return nullptr;
}

UR5ShipInfoVM* UR5ShipManageVM::GetShipInfoVM() const
{
    return nullptr;
}

UR5ShipServiceVM* UR5ShipManageVM::GetShipServiceVM() const
{
    return nullptr;
}

bool UR5ShipManageVM::CanManageShip() const
{
    return false;
}

bool UR5ShipManageVM::HasManagedShip() const
{
    return false;
}
