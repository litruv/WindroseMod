#include "R5DefaultInventoryVM.h"

UR5DefaultInventoryVM::UR5DefaultInventoryVM()
{
}

void UR5DefaultInventoryVM::MoveAll(FGameplayTag InventoryContainerTag, bool bOnlyStack)
{
}

void UR5DefaultInventoryVM::SwitchAutoFillAmmoStatus(FGameplayTag InventoryContainerTag)
{
}

UR5VirtualInventorySlotVM* UR5DefaultInventoryVM::GetVirtualSlotVM() const
{
    return nullptr;
}

void UR5DefaultInventoryVM::InterruptDragAndDrop()
{
}

void UR5DefaultInventoryVM::OnVirtualSlotUpdated()
{
}

void UR5DefaultInventoryVM::InterruptSplitItems()
{
}

bool UR5DefaultInventoryVM::CanMoveAll(FGameplayTag InventoryContainerTag, bool bOnlyStack) const
{
    return false;
}

void UR5DefaultInventoryVM::DropItemsFromDrag()
{
}

bool UR5DefaultInventoryVM::IsSplitItemActive() const
{
    return false;
}

bool UR5DefaultInventoryVM::IsDragActive() const
{
    return false;
}

bool UR5DefaultInventoryVM::IsAutoFillAmmoEnabled(FGameplayTag InventoryContainerTag) const
{
    return false;
}

UR5SplitItemsPopupVM* UR5DefaultInventoryVM::GetSplitItemsPopupVM() const
{
    return nullptr;
}
