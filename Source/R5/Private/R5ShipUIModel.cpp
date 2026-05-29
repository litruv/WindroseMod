#include "R5ShipUIModel.h"

ACharacter* UR5ShipUIModel::GetCaptain() const
{
    return nullptr;
}

void UR5ShipUIModel::GetRepairCooldownTime(float& DurationTime, float& RemainingTime) const
{
}

float UR5ShipUIModel::GetRepairHealth() const
{
    return 0.f;
}

bool UR5ShipUIModel::IsInVoyage() const
{
    return false;
}

float UR5ShipUIModel::GetMaxHealth() const
{
    return 0.f;
}

bool UR5ShipUIModel::IsRepair() const
{
    return false;
}

UR5ShipUIModel* UR5ShipUIModel::CreateShipUIModel(AActor* Ship)
{
    return nullptr;
}

float UR5ShipUIModel::GetCurrentHealth() const
{
    return 0.f;
}

UR5AbilitySystemComponent* UR5ShipUIModel::GetR5ASC() const
{
    return nullptr;
}

UR5ShipUIModel::UR5ShipUIModel()
{
}
