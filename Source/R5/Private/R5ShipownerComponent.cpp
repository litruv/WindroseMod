#include "R5ShipownerComponent.h"

UR5ShipownerComponent::UR5ShipownerComponent(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

FR5PlayerShipInfo UR5ShipownerComponent::GetPlayerShipInfoByRecordId(const FR5BLRecordId& RecordId)
{
    return {};
}

TArray<FR5PlayerShipInfo> UR5ShipownerComponent::GetAllPlayerShipInfos()
{
    return {};
}

void UR5ShipownerComponent::OnShipDestroyed(AActor* DestroyedActor)
{
}

FR5BLRecordId UR5ShipownerComponent::GetEquippedShipId() const
{
    return {};
}

bool UR5ShipownerComponent::IsShipDestroyed(const FR5BLRecordId& ShipId)
{
    return false;
}

TArray<FR5PlayerShipInfo> UR5ShipownerComponent::GetEquippedShipInfos()
{
    return {};
}

bool UR5ShipownerComponent::IsOwningShip(const AR5ShipPawnBase* ShipPawn) const
{
    return false;
}

void UR5ShipownerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}
