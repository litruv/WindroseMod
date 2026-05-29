#include "R5CostVM.h"

bool UR5CostVM::CanRemoveAllItemsFromInventories() const
{
    return false;
}

bool UR5CostVM::HasCostItems() const
{
    return false;
}

TArray<FR5UIRecipeItemData> UR5CostVM::GetCost() const
{
    return {};
}

TArray<FR5BLItemsStackData> UR5CostVM::GetCostItems() const
{
    return {};
}

void UR5CostVM::GetCostWithSort(const FGameplayTagContainer& BucketsByItemTypes, TMap<FGameplayTag, FR5CostBucketData>& SortedCost, TArray<FR5UIRecipeItemData>& OtherCost) const
{
}

UR5CostVM::UR5CostVM()
{
}
