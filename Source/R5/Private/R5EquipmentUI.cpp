#include "R5EquipmentUI.h"

UR5EquipmentUI::UR5EquipmentUI(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

TArray<UR5EquipmentItemUI*> UR5EquipmentUI::GetEquippedItems() const
{
    return {};
}
