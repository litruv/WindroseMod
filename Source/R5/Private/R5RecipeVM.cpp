#include "R5RecipeVM.h"

UR5RecipeVM::UR5RecipeVM()
{
}

TArray<FR5UIRecipeItemData> UR5RecipeVM::GetCostItemsInfo() const
{
    return {};
}

bool UR5RecipeVM::HasValidRecipe() const
{
    return false;
}

TSoftObjectPtr<UR5BLLootParams> UR5RecipeVM::GetResultLootTable() const
{
    return {};
}

bool UR5RecipeVM::HasFactionRequirements() const
{
    return false;
}

bool UR5RecipeVM::HasRecipeRequiredItems() const
{
    return false;
}

FR5BLRecipeUIData UR5RecipeVM::GetRecipeUIData() const
{
    return {};
}

FText UR5RecipeVM::GetFactionDescription() const
{
    return {};
}

void UR5RecipeVM::GetComfortInfo(bool& bHasRequirements, FR5BLRecipeComfortRequirement& RecipeComfortRequirement, FR5BLRecipeComfortRequirement& CurrentComfort, TSoftObjectPtr<UTexture2D>& ComfortIcon) const
{
}

void UR5RecipeVM::TouchRecipe()
{
}

TArray<FR5BLRecipeComfortRequirement> UR5RecipeVM::GetComfortRequirement() const
{
    return {};
}

bool UR5RecipeVM::IsRecipeNew() const
{
    return false;
}

float UR5RecipeVM::GetCookingProcessDuration() const
{
    return 0.f;
}

bool UR5RecipeVM::IsOverridden() const
{
    return false;
}

FR5BLRecipeAttributeModifier UR5RecipeVM::GetResultAttributeModifier() const
{
    return {};
}

TArray<FR5BLRecipeItem> UR5RecipeVM::GetRecipeResult() const
{
    return {};
}

FR5BLItemAttribute UR5RecipeVM::GetFirstResultItemModifyAttribute() const
{
    return {};
}

TArray<FR5UIRecipeItemData> UR5RecipeVM::GetRecipeRequiredItems() const
{
    return {};
}

int32 UR5RecipeVM::GetDeltaAttribute() const
{
    return 0;
}

TArray<FR5UIRecipeItemData> UR5RecipeVM::GetResultItemsInfo() const
{
    return {};
}

int32 UR5RecipeVM::GetCountAvailableRecipesToExecute() const
{
    return 0;
}

TArray<FR5BLRecipeItem> UR5RecipeVM::GetRecipeCost() const
{
    return {};
}

FR5BLRecipeBBRequirementData UR5RecipeVM::GetRecipeRequiredDataForFaction() const
{
    return {};
}

int32 UR5RecipeVM::GetRequiredFactionLevel() const
{
    return 0;
}

bool UR5RecipeVM::HasRequiredFactionLevel() const
{
    return false;
}

TSoftObjectPtr<UR5BLCraftRequirement> UR5RecipeVM::GetCraftRequirement() const
{
    return {};
}

TSoftObjectPtr<UR5BLProductionReputationParams> UR5RecipeVM::GetProductionReputationParams() const
{
    return {};
}

FText UR5RecipeVM::GetFactionName() const
{
    return {};
}

FR5BLItemsStackData UR5RecipeVM::GetResultFirstItem() const
{
    return {};
}

FR5BLRecipeBBData UR5RecipeVM::GetResultBlackboardValuesToAdd() const
{
    return {};
}

void UR5RecipeVM::CraftRecipe(int32 CountToCraft)
{
}

FGameplayTag UR5RecipeVM::GetModifyAttributeTag() const
{
    return {};
}

TSoftObjectPtr<UTexture2D> UR5RecipeVM::GetFactionIcon() const
{
    return {};
}
