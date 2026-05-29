#include "R5BaseInventorySlotListVM.h"

TSubclassOf<UR5MVVMView> UR5BaseInventorySlotListVM::GetSlotListWidgetClass() const
{
    return {};
}

void UR5BaseInventorySlotListVM::OnClickBySlotAction(int32 SlotIndex, ER5InventorySlotClickType ClickType, ER5KeyModifier ClickModifier)
{
}

bool UR5BaseInventorySlotListVM::IsPlayerInventory() const
{
    return false;
}

bool UR5BaseInventorySlotListVM::HasPersonalSlotsList() const
{
    return false;
}

bool UR5BaseInventorySlotListVM::IsOperationsBlocked() const
{
    return false;
}

bool UR5BaseInventorySlotListVM::IsPersonalSlotsList() const
{
    return false;
}

UR5BaseInventorySlotListVM::UR5BaseInventorySlotListVM()
{
}
