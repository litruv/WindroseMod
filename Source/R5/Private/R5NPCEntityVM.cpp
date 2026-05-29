#include "R5NPCEntityVM.h"

TSoftObjectPtr<UR5BLInventoryItem> UR5NPCEntityVM::GetNPCItem() const
{
    return {};
}

bool UR5NPCEntityVM::HasAvailableNPC() const
{
    return false;
}

ER5NPCStatus UR5NPCEntityVM::GetNPCStatus() const
{
    return {};
}

FR5NPCData UR5NPCEntityVM::GetUIDataForNPC() const
{
    return {};
}

UR5NPCEntityVM::UR5NPCEntityVM()
{
}
