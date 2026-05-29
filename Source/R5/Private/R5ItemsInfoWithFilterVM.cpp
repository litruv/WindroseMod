#include "R5ItemsInfoWithFilterVM.h"

UR5ItemsInfoWithFilterVM::UR5ItemsInfoWithFilterVM()
{
}

FGameplayTag UR5ItemsInfoWithFilterVM::GetFilterKey() const
{
    return {};
}

TArray<FR5InventoryItemInfo> UR5ItemsInfoWithFilterVM::GetItemsInfo() const
{
    return {};
}

TArray<FR5InventoryItemInfo> UR5ItemsInfoWithFilterVM::GetItemsInfoWithTypeFilter(const FGameplayTagContainer& ItemsTypesFilter) const
{
    return {};
}

TArray<FR5InventoryItemInfo> UR5ItemsInfoWithFilterVM::GetItemsInfoWithAllFilters(const FGameplayTagContainer& ItemsTypesFilter, const TArray<TSoftObjectPtr<UR5BLInventoryItem>>& ItemsParamsFilter) const
{
    return {};
}
