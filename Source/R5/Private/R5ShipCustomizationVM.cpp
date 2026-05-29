#include "R5ShipCustomizationVM.h"

TArray<UR5ShipCustomizationItemsListVM*> UR5ShipCustomizationVM::GetCustomizationGroups() const
{
    return {};
}

UR5ShipNameEditorVM* UR5ShipCustomizationVM::GetShipNameEditorVM() const
{
    return nullptr;
}

UR5ShipCustomizationVM::UR5ShipCustomizationVM()
{
}
