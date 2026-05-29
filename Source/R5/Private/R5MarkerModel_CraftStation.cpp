#include "R5MarkerModel_CraftStation.h"

bool UR5MarkerModel_CraftStation::IsCraftInProgress() const
{
    return false;
}

TSoftObjectPtr<UTexture2D> UR5MarkerModel_CraftStation::GetTextureForCurrentQueue() const
{
    return {};
}

FDateTime UR5MarkerModel_CraftStation::GetTimeStartCrafting() const
{
    return {};
}

void UR5MarkerModel_CraftStation::TryInitCraftView()
{
}

int32 UR5MarkerModel_CraftStation::GetCountRecipesInProgress() const
{
    return 0;
}

float UR5MarkerModel_CraftStation::GetCraftingRecipeProcessDuration() const
{
    return 0.f;
}

UR5MarkerModel_CraftStation::UR5MarkerModel_CraftStation()
{
}
