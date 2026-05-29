#include "R5BaseCraftVM.h"

TSoftClassPtr<AActor> UR5BaseCraftVM::GetLocalNPCClass() const
{
    return {};
}

UR5CraftQueueVM* UR5BaseCraftVM::GetCraftQueueVM()
{
    return nullptr;
}

UR5DefaultInventoryVM* UR5BaseCraftVM::GetOutputInventoryVM()
{
    return nullptr;
}

USoundBase* UR5BaseCraftVM::GetNPCVoice() const
{
    return nullptr;
}

UR5CraftReputationVM* UR5BaseCraftVM::GetCraftReputationVM()
{
    return nullptr;
}

UR5BaseCraftVM::UR5BaseCraftVM()
{
}
