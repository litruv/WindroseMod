#include "R5BaseSelectedRecipePanelVM.h"

UR5BaseSelectedRecipePanelVM::UR5BaseSelectedRecipePanelVM()
{
}

bool UR5BaseSelectedRecipePanelVM::HasSelectedRecipe() const
{
    return false;
}

ER5BLCraftAvailability UR5BaseSelectedRecipePanelVM::CanExecuteRecipe() const
{
    return {};
}

bool UR5BaseSelectedRecipePanelVM::ExecuteRecipe()
{
    return false;
}

UR5BaseRecipeVM* UR5BaseSelectedRecipePanelVM::GetSelectedRecipeVM() const
{
    return nullptr;
}
