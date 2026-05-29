#include "R5ShipSelectionVM.h"

FR5BLRecordId UR5ShipSelectionVM::GetSelectedShipId() const
{
    return {};
}

void UR5ShipSelectionVM::UpdateSelectedRecipePanel()
{
}

UR5ShipsListVM* UR5ShipSelectionVM::GetShipsListVM() const
{
    return nullptr;
}

UR5SelectedShipPanelVM* UR5ShipSelectionVM::GetSelectedShipPanelVM() const
{
    return nullptr;
}

bool UR5ShipSelectionVM::HasSelectedShip() const
{
    return false;
}

UR5ShipSelectionVM::UR5ShipSelectionVM()
{
}
