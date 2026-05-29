#include "R5CraftingTabsVM.h"

void UR5CraftingTabsVM::GetComfortInfo(bool& bHasRequirements, FR5BLRecipeComfortRequirement& CurrentComfort, TSoftObjectPtr<UTexture2D>& ComfortIcon) const
{
}

bool UR5CraftingTabsVM::HasBuildingCenter() const
{
    return false;
}

bool UR5CraftingTabsVM::HasRecipeListWithTag(FGameplayTag RecipeListTag) const
{
    return false;
}

bool UR5CraftingTabsVM::IsBuildingBlock() const
{
    return false;
}

bool UR5CraftingTabsVM::HasNPCSlots() const
{
    return false;
}

UR5CraftingTabsVM::UR5CraftingTabsVM()
{
}
