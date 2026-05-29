#include "R5BLRecipeOverride.h"

UR5BLRecipeOverride::UR5BLRecipeOverride() {
    this->OverrideRecipeCost = false;
    this->OverrideRecipeResult = false;
    this->OverrideResultLootTable = false;
    this->OverrideResultBlackboardValuesToAdd = false;
    this->OverrideAttributeModifier = false;
    this->OverrideCraftRequirement = false;
    this->OverrideComfortRequirements = false;
    this->OverrideCookingProcessDuration = false;
    this->CookingProcessDuration = 1.00f;
    this->OverrideUIData = false;
}


