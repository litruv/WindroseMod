#include "R5EquipmentComponent.h"



UR5EquipmentUI* UR5EquipmentComponent::GetUI() const

{

    return nullptr;

}



void UR5EquipmentComponent::OnRep_EquipmentItems()

{

}



UR5EquipmentItemVisual* UR5EquipmentComponent::GetFirstItemVisualWithSlotType(const int32 SlotTypeBitmask) const

{

    return nullptr;

}



void UR5EquipmentComponent::OnInventoryReadyToUpdate()

{

}



UR5EquipmentComponent::UR5EquipmentComponent(const FObjectInitializer& ObjectInitializer)

    : Super(ObjectInitializer)

{

}

void UR5EquipmentComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}
