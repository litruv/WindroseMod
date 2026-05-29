#include "R5SelectedShipPanelVM.h"

bool UR5SelectedShipPanelVM::HasSelectedShip() const
{
    return false;
}

void UR5SelectedShipPanelVM::RestoreShip()
{
}

void UR5SelectedShipPanelVM::StoreShip()
{
}

void UR5SelectedShipPanelVM::DeployShip()
{
}

UR5ShipInfoVM* UR5SelectedShipPanelVM::GetShipInfoVM() const
{
    return nullptr;
}

void UR5SelectedShipPanelVM::OnSelectedShipVMUpdated()
{
}

void UR5SelectedShipPanelVM::DisassembleShip()
{
}

void UR5SelectedShipPanelVM::MarkAsFlagship()
{
}

UR5ShipEntityVM* UR5SelectedShipPanelVM::GetSelectedShipVM() const
{
    return nullptr;
}

bool UR5SelectedShipPanelVM::CanRestoreShip() const
{
    return false;
}

ER5BLDisassembleShipAvailability UR5SelectedShipPanelVM::CanDisassemble() const
{
    return {};
}

void UR5SelectedShipPanelVM::DemoteFromFlagship()
{
}

TArray<FR5UIRecipeItemData> UR5SelectedShipPanelVM::GetRestoreCost() const
{
    return {};
}

TArray<FR5UIRecipeItemData> UR5SelectedShipPanelVM::GetDisassembleResult() const
{
    return {};
}

UR5SelectedShipPanelVM::UR5SelectedShipPanelVM()
{
}
