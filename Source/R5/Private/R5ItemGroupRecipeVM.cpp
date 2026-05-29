#include "R5ItemGroupRecipeVM.h"

bool UR5ItemGroupRecipeVM::HasAnyOverrides() const
{
    return false;
}

UR5SelectedItemGroupRecipeList* UR5ItemGroupRecipeVM::GetSelectedItemGroupRecipeListVM() const
{
    return nullptr;
}

TSoftObjectPtr<UR5BLInventoryItem> UR5ItemGroupRecipeVM::GetCommonItemForGroup() const
{
    return {};
}

bool UR5ItemGroupRecipeVM::HasNewRecipe() const
{
    return false;
}

TArray<TSoftObjectPtr<UR5BLRecipeData>> UR5ItemGroupRecipeVM::GetItemGroupRecipes() const
{
    return {};
}

void UR5ItemGroupRecipeVM::OnSelectedRecipeChanged()
{
}

bool UR5ItemGroupRecipeVM::CanExecuteAnyRecipe() const
{
    return false;
}

UR5RecipeVM* UR5ItemGroupRecipeVM::GetSelectedRecipeVM() const
{
    return nullptr;
}

void UR5ItemGroupRecipeVM::TouchGroupRecipes()
{
}

UR5ItemGroupRecipeVM::UR5ItemGroupRecipeVM()
{
}
