#include "R5ShipNameEditorVM.h"

UR5ShipNameEditorVM::UR5ShipNameEditorVM()
{
}

bool UR5ShipNameEditorVM::HasActiveShip() const
{
    return false;
}

bool UR5ShipNameEditorVM::IsShipNameAvailable(const FString& NewShipName) const
{
    return false;
}

bool UR5ShipNameEditorVM::CanSetShipName(const FString& NewShipName) const
{
    return false;
}

FText UR5ShipNameEditorVM::GetShipName() const
{
    return {};
}

void UR5ShipNameEditorVM::SetShipName(const FString& NewShipName)
{
}
