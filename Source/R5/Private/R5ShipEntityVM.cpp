#include "R5ShipEntityVM.h"

UR5ShipEntityVM::UR5ShipEntityVM()
{
}

bool UR5ShipEntityVM::CanChangeFlagshipState() const
{
    return false;
}

ER5StoreShipAvailability UR5ShipEntityVM::CanStoreShip() const
{
    return {};
}

FR5BLRecordId UR5ShipEntityVM::GetShipId() const
{
    return {};
}

FText UR5ShipEntityVM::GetShipName() const
{
    return {};
}

bool UR5ShipEntityVM::HasObservableShip() const
{
    return false;
}

FR5BLShipUIData UR5ShipEntityVM::GetShipUIData() const
{
    return {};
}

TSoftObjectPtr<UR5BLShipParams> UR5ShipEntityVM::GetShipParams() const
{
    return {};
}

bool UR5ShipEntityVM::IsFlagship() const
{
    return false;
}

int32 UR5ShipEntityVM::GetShipLevel() const
{
    return 0;
}

bool UR5ShipEntityVM::CanDeployShip() const
{
    return false;
}

ER5ShipProximityStatus UR5ShipEntityVM::GetShipWorldStatus() const
{
    return {};
}

bool UR5ShipEntityVM::IsShipDestroyed() const
{
    return false;
}
