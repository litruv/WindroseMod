#include "R5ShipRecipePanelVM.h"

UR5ShipRecipePanelVM::UR5ShipRecipePanelVM()
{
}

void UR5ShipRecipePanelVM::OnSelectedRecipeUpdated()
{
}

UR5ShipRecipeVM* UR5ShipRecipePanelVM::GetSelectedShipRecipeVM() const
{
    return nullptr;
}

bool UR5ShipRecipePanelVM::BuildShip()
{
    return false;
}

bool UR5ShipRecipePanelVM::HasSelectedShipRecipe() const
{
    return false;
}
