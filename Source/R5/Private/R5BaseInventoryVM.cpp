#include "R5BaseInventoryVM.h"

UR5BaseInventoryVM::UR5BaseInventoryVM()
{
}

UR5BaseInventorySlotListVM* UR5BaseInventoryVM::GetSlotsListByContainerTag(FGameplayTag InventoryContainerTag, FGameplayTag SlotListContainerTag) const
{
    return nullptr;
}

FR5InventoryContainerInstanceData UR5BaseInventoryVM::GetInventorySlotsListsData(FGameplayTag InventoryContainerTag) const
{
    return {};
}

void UR5BaseInventoryVM::OnClickedBySlot(const FR5SlotClickActionInfo& ClickInfo)
{
}

void UR5BaseInventoryVM::SetInputKeyModifier(ER5KeyModifier NewInputStatModifier)
{
}

FText UR5BaseInventoryVM::GetInventoryName(const FGameplayTag& InventoryContainerTag) const
{
    return {};
}

ER5KeyModifier UR5BaseInventoryVM::GetInputKeyModifier() const
{
    return {};
}

void UR5BaseInventoryVM::Sort(FGameplayTag InventoryContainerTag)
{
}

bool UR5BaseInventoryVM::CanSort(FGameplayTag InventoryContainerTag, const FGameplayTagContainer& SlotListContainerTags) const
{
    return false;
}

bool UR5BaseInventoryVM::IsInventoryEmpty(FGameplayTag InventoryContainerTag) const
{
    return false;
}

FR5InventoriesScreenData UR5BaseInventoryVM::GetInventoryData() const
{
    return {};
}
