#include "R5NoInventoryEquipment.h"

UR5NoInventoryEquipment::UR5NoInventoryEquipment(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

void UR5NoInventoryEquipment::OnRep_CreatedItems()
{
}

void UR5NoInventoryEquipment::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}
