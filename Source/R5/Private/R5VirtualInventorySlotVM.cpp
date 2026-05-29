#include "R5VirtualInventorySlotVM.h"

UR5VirtualInventorySlotVM::UR5VirtualInventorySlotVM()
{
}

int32 UR5VirtualInventorySlotVM::GetVirtualItemsCount() const
{
    return 0;
}

bool UR5VirtualInventorySlotVM::IsActiveSlot() const
{
    return false;
}

UR5BaseInventorySlotVM* UR5VirtualInventorySlotVM::GetSourceSlotVM() const
{
    return nullptr;
}

bool UR5VirtualInventorySlotVM::HasItemsCountOverride() const
{
    return false;
}

void UR5VirtualInventorySlotVM::OverrideItemsCount(int32 NewItemsCount)
{
}
