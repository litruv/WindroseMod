#include "R5ShipRecipeVM.h"

UR5ShipRecipeVM::UR5ShipRecipeVM()
{
}

FR5BLShipUIData UR5ShipRecipeVM::GetShipUIData() const
{
    return {};
}

TSoftObjectPtr<UR5BLShipParams> UR5ShipRecipeVM::GetShipParams() const
{
    return {};
}

ER5BLCraftShipAvailability UR5ShipRecipeVM::CanBuildShip() const
{
    return {};
}

TSoftObjectPtr<UR5BLRecipeData> UR5ShipRecipeVM::GetRecipe() const
{
    return {};
}

TArray<FR5UIRecipeItemData> UR5ShipRecipeVM::GetRecipeCost() const
{
    return {};
}

FText UR5ShipRecipeVM::GetShipName() const
{
    return {};
}
