#include "R5ProximityStorageComponent.h"

UR5ProximityStorageComponent::UR5ProximityStorageComponent(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

void UR5ProximityStorageComponent::OnProximityStorageUpdated(const FR5BLRecordPath& ViewPath)
{
}

void UR5ProximityStorageComponent::TryUpdateCurrentStorageCenter()
{
}

void UR5ProximityStorageComponent::OnStorageComponentChanged()
{
}

UR5ProximityStorageComponent* UR5ProximityStorageComponent::Get(const AActor* Actor)
{
    return nullptr;
}

int32 UR5ProximityStorageComponent::GetItemCount(const FR5BLItem& Item)
{
    return 0;
}
