#include "R5UIShipDockViewModel.h"

UR5UIShipDockViewModel::UR5UIShipDockViewModel()
{
}

UR5ShipCraftVM* UR5UIShipDockViewModel::GetShipCraftVM() const
{
    return nullptr;
}

UR5ShipSelectionVM* UR5UIShipDockViewModel::GetShipSelectionVM() const
{
    return nullptr;
}

void UR5UIShipDockViewModel::OnSelectedShipUpdated()
{
}

UR5ShipManageVM* UR5UIShipDockViewModel::GetShipManageVM() const
{
    return nullptr;
}
