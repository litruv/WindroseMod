#include "R5BaseInventorySlotVM.h"

bool UR5BaseInventorySlotVM::IsCooldownAble() const
{
    return false;
}

bool UR5BaseInventorySlotVM::IsEquipmentSlot() const
{
    return false;
}

FGameplayTag UR5BaseInventorySlotVM::GetFirstAttributeTag() const
{
    return {};
}

UInputAction* UR5BaseInventorySlotVM::GetInputAction() const
{
    return nullptr;
}

int32 UR5BaseInventorySlotVM::GetItemsCount() const
{
    return 0;
}

bool UR5BaseInventorySlotVM::IsEquipped() const
{
    return false;
}

bool UR5BaseInventorySlotVM::IsConsumableItem() const
{
    return false;
}

int32 UR5BaseInventorySlotVM::GetSlotLimit() const
{
    return 0;
}

FText UR5BaseInventorySlotVM::GetItemName() const
{
    return {};
}

void UR5BaseInventorySlotVM::ClickByInventorySlot(ER5InventorySlotClickType ClickType, ER5KeyModifier ClickModifier)
{
}

bool UR5BaseInventorySlotVM::ContainsEquipmentItem() const
{
    return false;
}

void UR5BaseInventorySlotVM::GetCooldownInfo(float& CooldownTime, float& CurrentProgress) const
{
}

int32 UR5BaseInventorySlotVM::GetMaxAttributeCount(FGameplayTag AttributeTag) const
{
    return 0;
}

FGameplayTag UR5BaseInventorySlotVM::GetContainedItemTag() const
{
    return {};
}

bool UR5BaseInventorySlotVM::ContainsItem() const
{
    return false;
}

bool UR5BaseInventorySlotVM::CanUseItem() const
{
    return false;
}

bool UR5BaseInventorySlotVM::IsPersonalSlot() const
{
    return false;
}

TSoftObjectPtr<UTexture2D> UR5BaseInventorySlotVM::GetSlotIcon() const
{
    return {};
}

FGameplayTag UR5BaseInventorySlotVM::GetSlotType() const
{
    return {};
}

bool UR5BaseInventorySlotVM::IsEmpty() const
{
    return false;
}

int32 UR5BaseInventorySlotVM::GetAttributeCount(FGameplayTag AttributeTag) const
{
    return 0;
}

bool UR5BaseInventorySlotVM::HasCooldown() const
{
    return false;
}

TSoftObjectPtr<UTexture2D> UR5BaseInventorySlotVM::GetItemIcon() const
{
    return {};
}

TSoftObjectPtr<UR5BLInventoryItem> UR5BaseInventorySlotVM::GetSlotItem() const
{
    return {};
}

UR5BaseInventorySlotVM::UR5BaseInventorySlotVM()
{
}
