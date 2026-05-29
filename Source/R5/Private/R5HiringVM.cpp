#include "R5HiringVM.h"

UR5HiringVM::UR5HiringVM()
{
}

int32 UR5HiringVM::GetItemsInInventory(const TSoftObjectPtr<UR5BLInventoryItem>& ItemParams) const
{
    return 0;
}

void UR5HiringVM::Accept()
{
}

void UR5HiringVM::Reject()
{
}

bool UR5HiringVM::HasCostInInventory() const
{
    return false;
}

UR5NPCParams* UR5HiringVM::GetHiringParams() const
{
    return nullptr;
}
