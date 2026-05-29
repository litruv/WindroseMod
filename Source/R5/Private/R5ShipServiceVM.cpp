#include "R5ShipServiceVM.h"

UR5ShipServiceVM::UR5ShipServiceVM()
{
}

UR5ShipHealthServiceVM* UR5ShipServiceVM::GetShipHealthServiceVM() const
{
    return nullptr;
}

UR5ShipCrewServiceVM* UR5ShipServiceVM::GetShipCrewServiceVM() const
{
    return nullptr;
}

bool UR5ShipServiceVM::CanConfirm() const
{
    return false;
}

UR5CostVM* UR5ShipServiceVM::GetCostVM() const
{
    return nullptr;
}

void UR5ShipServiceVM::ClearAll()
{
}

void UR5ShipServiceVM::Confirm()
{
}

bool UR5ShipServiceVM::CanClearAll() const
{
    return false;
}

UR5ShipEffectsServiceVM* UR5ShipServiceVM::GetShipEffectsServiceVM() const
{
    return nullptr;
}

void UR5ShipServiceVM::OnChildVMChanged()
{
}

void UR5ShipServiceVM::OnCostUpdated()
{
}
