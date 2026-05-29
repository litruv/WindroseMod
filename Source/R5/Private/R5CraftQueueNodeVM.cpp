#include "R5CraftQueueNodeVM.h"

float UR5CraftQueueNodeVM::GetTopRecipeCraftDuration() const
{
    return 0.f;
}

FDateTime UR5CraftQueueNodeVM::GetStartCraftTime() const
{
    return {};
}

bool UR5CraftQueueNodeVM::HasValidRecipe() const
{
    return false;
}

FTimespan UR5CraftQueueNodeVM::GetTimeToFinishCraftingRecipe() const
{
    return {};
}

int32 UR5CraftQueueNodeVM::GetRecipesCountInStack() const
{
    return 0;
}

TSoftObjectPtr<UR5BLRecipeData> UR5CraftQueueNodeVM::GetNodeRecipe() const
{
    return {};
}

void UR5CraftQueueNodeVM::CancelNode()
{
}

bool UR5CraftQueueNodeVM::IsInProgress() const
{
    return false;
}

UR5BLRecipeData* UR5CraftQueueNodeVM::GetNodeRecipeInstance() const
{
    return nullptr;
}

UR5CraftQueueNodeVM::UR5CraftQueueNodeVM()
{
}
